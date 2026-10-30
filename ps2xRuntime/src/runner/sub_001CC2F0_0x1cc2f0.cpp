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

// Function: sub_001CC2F0
// Address: 0x1cc2f0 - 0x1cc998
void sub_001CC2F0_0x1cc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC2F0_0x1cc2f0");
#endif

    switch (ctx->pc) {
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        case 0x1cc770u: goto label_1cc770;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc778u: goto label_1cc778;
        case 0x1cc77cu: goto label_1cc77c;
        case 0x1cc780u: goto label_1cc780;
        case 0x1cc784u: goto label_1cc784;
        case 0x1cc788u: goto label_1cc788;
        case 0x1cc78cu: goto label_1cc78c;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc794u: goto label_1cc794;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc79cu: goto label_1cc79c;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7a4u: goto label_1cc7a4;
        case 0x1cc7a8u: goto label_1cc7a8;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7b0u: goto label_1cc7b0;
        case 0x1cc7b4u: goto label_1cc7b4;
        case 0x1cc7b8u: goto label_1cc7b8;
        case 0x1cc7bcu: goto label_1cc7bc;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7ccu: goto label_1cc7cc;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7d4u: goto label_1cc7d4;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7e0u: goto label_1cc7e0;
        case 0x1cc7e4u: goto label_1cc7e4;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc7fcu: goto label_1cc7fc;
        case 0x1cc800u: goto label_1cc800;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc80cu: goto label_1cc80c;
        case 0x1cc810u: goto label_1cc810;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc818u: goto label_1cc818;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc820u: goto label_1cc820;
        case 0x1cc824u: goto label_1cc824;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc830u: goto label_1cc830;
        case 0x1cc834u: goto label_1cc834;
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc83cu: goto label_1cc83c;
        case 0x1cc840u: goto label_1cc840;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc850u: goto label_1cc850;
        case 0x1cc854u: goto label_1cc854;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc860u: goto label_1cc860;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc868u: goto label_1cc868;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc870u: goto label_1cc870;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc878u: goto label_1cc878;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc880u: goto label_1cc880;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc888u: goto label_1cc888;
        case 0x1cc88cu: goto label_1cc88c;
        case 0x1cc890u: goto label_1cc890;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc89cu: goto label_1cc89c;
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8a4u: goto label_1cc8a4;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc8acu: goto label_1cc8ac;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8b4u: goto label_1cc8b4;
        case 0x1cc8b8u: goto label_1cc8b8;
        case 0x1cc8bcu: goto label_1cc8bc;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8c8u: goto label_1cc8c8;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8d0u: goto label_1cc8d0;
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8d8u: goto label_1cc8d8;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8e8u: goto label_1cc8e8;
        case 0x1cc8ecu: goto label_1cc8ec;
        case 0x1cc8f0u: goto label_1cc8f0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc8fcu: goto label_1cc8fc;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc90cu: goto label_1cc90c;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc914u: goto label_1cc914;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc920u: goto label_1cc920;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc938u: goto label_1cc938;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc940u: goto label_1cc940;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc954u: goto label_1cc954;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc960u: goto label_1cc960;
        case 0x1cc964u: goto label_1cc964;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc970u: goto label_1cc970;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc978u: goto label_1cc978;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc980u: goto label_1cc980;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc98cu: goto label_1cc98c;
        case 0x1cc990u: goto label_1cc990;
        case 0x1cc994u: goto label_1cc994;
        default: break;
    }

    ctx->pc = 0x1cc2f0u;

label_1cc2f0:
    // 0x1cc2f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1cc2f4:
    // 0x1cc2f4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1cc2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1cc2f8:
    // 0x1cc2f8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1cc2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1cc2fc:
    // 0x1cc2fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cc2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc300:
    // 0x1cc300: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1cc300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1cc304:
    // 0x1cc304: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cc304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc308:
    // 0x1cc308: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1cc308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1cc30c:
    // 0x1cc30c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1cc30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1cc310:
    // 0x1cc310: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1cc310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1cc314:
    // 0x1cc314: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cc314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1cc318:
    // 0x1cc318: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cc318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1cc31c:
    // 0x1cc31c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1cc31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1cc320:
    // 0x1cc320: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cc324:
    // 0x1cc324: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cc324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1cc328:
    // 0x1cc328: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1cc32c:
    // 0x1cc32c: 0x1440018c  bnez        $v0, . + 4 + (0x18C << 2)
label_1cc330:
    if (ctx->pc == 0x1CC330u) {
        ctx->pc = 0x1CC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC32Cu;
        // 0x1cc330: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC334u;
        goto label_1cc334;
    }
    ctx->pc = 0x1CC32Cu;
    {
        const bool branch_taken_0x1cc32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC32Cu;
        // 0x1cc330: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc32c) {
            ctx->pc = 0x1CC960u;
            goto label_1cc960;
        }
    }
    ctx->pc = 0x1CC334u;
label_1cc334:
    // 0x1cc334: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc338:
    // 0x1cc338: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1cc33c:
    // 0x1cc33c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc340:
    // 0x1cc340: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cc340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1cc344:
    // 0x1cc344: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1cc348:
    if (ctx->pc == 0x1CC348u) {
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC34Cu;
        goto label_1cc34c;
    }
    ctx->pc = 0x1CC344u;
    {
        const bool branch_taken_0x1cc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc344) {
            ctx->pc = 0x1CC3C0u;
            goto label_1cc3c0;
        }
    }
    ctx->pc = 0x1CC34Cu;
label_1cc34c:
    // 0x1cc34c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cc350:
    if (ctx->pc == 0x1CC350u) {
        ctx->pc = 0x1CC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC34Cu;
        // 0x1cc350: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC354u;
        goto label_1cc354;
    }
    ctx->pc = 0x1CC34Cu;
    {
        const bool branch_taken_0x1cc34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC34Cu;
        // 0x1cc350: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc34c) {
            ctx->pc = 0x1CC380u;
            goto label_1cc380;
        }
    }
    ctx->pc = 0x1CC354u;
label_1cc354:
    // 0x1cc354: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1cc358:
    // 0x1cc358: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1cc35c:
    // 0x1cc35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc360:
    // 0x1cc360: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_1cc364:
    // 0x1cc364: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1cc364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1cc368:
    // 0x1cc368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc36c:
    // 0x1cc36c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc370:
    // 0x1cc370: 0xe440eb10  swc1        $f0, -0x14F0($v0)
    ctx->pc = 0x1cc370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961936), bits); }
label_1cc374:
    // 0x1cc374: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1cc374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc378:
    // 0x1cc378: 0x10000052  b           . + 4 + (0x52 << 2)
label_1cc37c:
    if (ctx->pc == 0x1CC37Cu) {
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xe461eb08  swc1        $f1, -0x14F8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC380u;
        goto label_1cc380;
    }
    ctx->pc = 0x1CC378u;
    {
        const bool branch_taken_0x1cc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xe461eb08  swc1        $f1, -0x14F8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc378) {
            ctx->pc = 0x1CC4C4u;
            goto label_1cc4c4;
        }
    }
    ctx->pc = 0x1CC380u;
label_1cc380:
    // 0x1cc380: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
label_1cc384:
    // 0x1cc384: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1cc384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1cc388:
    // 0x1cc388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc38c:
    // 0x1cc38c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cc38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cc390:
    // 0x1cc390: 0x3c013f25  lui         $at, 0x3F25
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16165 << 16));
label_1cc394:
    // 0x1cc394: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cc394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cc398:
    // 0x1cc398: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc39c:
    // 0x1cc39c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cc39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cc3a0:
    // 0x1cc3a0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1cc3a4:
    // 0x1cc3a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1cc3a8:
    // 0x1cc3a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cc3ac:
    // 0x1cc3ac: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_1cc3b0:
    // 0x1cc3b0: 0x3421c6a8  ori         $at, $at, 0xC6A8
    ctx->pc = 0x1cc3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50856);
label_1cc3b4:
    // 0x1cc3b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc3b8:
    // 0x1cc3b8: 0x10000027  b           . + 4 + (0x27 << 2)
label_1cc3bc:
    if (ctx->pc == 0x1CC3BCu) {
        ctx->pc = 0x1CC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B8u;
        // 0x1cc3bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3C0u;
        goto label_1cc3c0;
    }
    ctx->pc = 0x1CC3B8u;
    {
        const bool branch_taken_0x1cc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B8u;
        // 0x1cc3bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3b8) {
            ctx->pc = 0x1CC458u;
            goto label_1cc458;
        }
    }
    ctx->pc = 0x1CC3C0u;
label_1cc3c0:
    // 0x1cc3c0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cc3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1cc3c4:
    // 0x1cc3c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1cc3c8:
    if (ctx->pc == 0x1CC3C8u) {
        ctx->pc = 0x1CC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C4u;
        // 0x1cc3c8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3CCu;
        goto label_1cc3cc;
    }
    ctx->pc = 0x1CC3C4u;
    {
        const bool branch_taken_0x1cc3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C4u;
        // 0x1cc3c8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3c4) {
            ctx->pc = 0x1CC414u;
            goto label_1cc414;
        }
    }
    ctx->pc = 0x1CC3CCu;
label_1cc3cc:
    // 0x1cc3cc: 0x3c013f25  lui         $at, 0x3F25
    ctx->pc = 0x1cc3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16165 << 16));
label_1cc3d0:
    // 0x1cc3d0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cc3d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cc3d4:
    // 0x1cc3d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc3d8:
    // 0x1cc3d8: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_1cc3dc:
    // 0x1cc3dc: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1cc3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1cc3e0:
    // 0x1cc3e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc3e4:
    // 0x1cc3e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cc3e8:
    // 0x1cc3e8: 0x3c013f13  lui         $at, 0x3F13
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16147 << 16));
label_1cc3ec:
    // 0x1cc3ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cc3ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1cc3f0:
    // 0x1cc3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc3f4:
    // 0x1cc3f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc3f8:
    // 0x1cc3f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cc3fc:
    // 0x1cc3fc: 0xe441eb04  swc1        $f1, -0x14FC($v0)
    ctx->pc = 0x1cc3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961924), bits); }
label_1cc400:
    // 0x1cc400: 0xe4a0eb08  swc1        $f0, -0x14F8($a1)
    ctx->pc = 0x1cc400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961928), bits); }
label_1cc404:
    // 0x1cc404: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cc404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc408:
    // 0x1cc408: 0xe462eb0c  swc1        $f2, -0x14F4($v1)
    ctx->pc = 0x1cc408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961932), bits); }
label_1cc40c:
    // 0x1cc40c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1cc410:
    if (ctx->pc == 0x1CC410u) {
        ctx->pc = 0x1CC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC40Cu;
        // 0x1cc410: 0xe482eb10  swc1        $f2, -0x14F0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961936), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC414u;
        goto label_1cc414;
    }
    ctx->pc = 0x1CC40Cu;
    {
        const bool branch_taken_0x1cc40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC40Cu;
        // 0x1cc410: 0xe482eb10  swc1        $f2, -0x14F0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc40c) {
            ctx->pc = 0x1CC4C4u;
            goto label_1cc4c4;
        }
    }
    ctx->pc = 0x1CC414u;
label_1cc414:
    // 0x1cc414: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cc414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1cc418:
    // 0x1cc418: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1cc41c:
    if (ctx->pc == 0x1CC41Cu) {
        ctx->pc = 0x1CC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC418u;
        // 0x1cc41c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC420u;
        goto label_1cc420;
    }
    ctx->pc = 0x1CC418u;
    {
        const bool branch_taken_0x1cc418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC418u;
        // 0x1cc41c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc418) {
            ctx->pc = 0x1CC474u;
            goto label_1cc474;
        }
    }
    ctx->pc = 0x1CC420u;
label_1cc420:
    // 0x1cc420: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_1cc424:
    // 0x1cc424: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1cc424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1cc428:
    // 0x1cc428: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc42c:
    // 0x1cc42c: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1cc42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
label_1cc430:
    // 0x1cc430: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1cc430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1cc434:
    // 0x1cc434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc438:
    // 0x1cc438: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cc43c:
    // 0x1cc43c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1cc440:
    // 0x1cc440: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1cc444:
    // 0x1cc444: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cc448:
    // 0x1cc448: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc44c:
    // 0x1cc44c: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
label_1cc450:
    // 0x1cc450: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cc450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cc454:
    // 0x1cc454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc458:
    // 0x1cc458: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cc45c:
    // 0x1cc45c: 0xe441eb04  swc1        $f1, -0x14FC($v0)
    ctx->pc = 0x1cc45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961924), bits); }
label_1cc460:
    // 0x1cc460: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cc460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc464:
    // 0x1cc464: 0xe462eb0c  swc1        $f2, -0x14F4($v1)
    ctx->pc = 0x1cc464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961932), bits); }
label_1cc468:
    // 0x1cc468: 0xe4a3eb10  swc1        $f3, -0x14F0($a1)
    ctx->pc = 0x1cc468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961936), bits); }
label_1cc46c:
    // 0x1cc46c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1cc470:
    if (ctx->pc == 0x1CC470u) {
        ctx->pc = 0x1CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC46Cu;
        // 0x1cc470: 0xe480eb08  swc1        $f0, -0x14F8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC474u;
        goto label_1cc474;
    }
    ctx->pc = 0x1CC46Cu;
    {
        const bool branch_taken_0x1cc46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC46Cu;
        // 0x1cc470: 0xe480eb08  swc1        $f0, -0x14F8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc46c) {
            ctx->pc = 0x1CC4C4u;
            goto label_1cc4c4;
        }
    }
    ctx->pc = 0x1CC474u;
label_1cc474:
    // 0x1cc474: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1cc478:
    // 0x1cc478: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1cc47c:
    // 0x1cc47c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc480:
    // 0x1cc480: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cc484:
    // 0x1cc484: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1cc484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_1cc488:
    // 0x1cc488: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1cc488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1cc48c:
    // 0x1cc48c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cc490:
    // 0x1cc490: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cc494:
    // 0x1cc494: 0x3c013f25  lui         $at, 0x3F25
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16165 << 16));
label_1cc498:
    // 0x1cc498: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cc498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cc49c:
    // 0x1cc49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc4a0:
    // 0x1cc4a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc4a4:
    // 0x1cc4a4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
label_1cc4a8:
    // 0x1cc4a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc4ac:
    // 0x1cc4ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cc4b0:
    // 0x1cc4b0: 0xe442eb04  swc1        $f2, -0x14FC($v0)
    ctx->pc = 0x1cc4b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961924), bits); }
label_1cc4b4:
    // 0x1cc4b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cc4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4b8:
    // 0x1cc4b8: 0xe460eb0c  swc1        $f0, -0x14F4($v1)
    ctx->pc = 0x1cc4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961932), bits); }
label_1cc4bc:
    // 0x1cc4bc: 0xe4a3eb08  swc1        $f3, -0x14F8($a1)
    ctx->pc = 0x1cc4bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961928), bits); }
label_1cc4c0:
    // 0x1cc4c0: 0xe481eb10  swc1        $f1, -0x14F0($a0)
    ctx->pc = 0x1cc4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961936), bits); }
label_1cc4c4:
    // 0x1cc4c4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1cc4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1cc4c8:
    // 0x1cc4c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc4c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1cc4cc:
    // 0x1cc4cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cc4d0:
    // 0x1cc4d0: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_1cc4d4:
    if (ctx->pc == 0x1CC4D4u) {
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4D8u;
        goto label_1cc4d8;
    }
    ctx->pc = 0x1CC4D0u;
    {
        const bool branch_taken_0x1cc4d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4d0) {
            ctx->pc = 0x1CC4E4u;
            goto label_1cc4e4;
        }
    }
    ctx->pc = 0x1CC4D8u;
label_1cc4d8:
    // 0x1cc4d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1cc4dc:
    // 0x1cc4dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cc4e0:
    // 0x1cc4e0: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc4e4:
    // 0x1cc4e4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1cc4e8:
    // 0x1cc4e8: 0xae68009c  sw          $t0, 0x9C($s3)
    ctx->pc = 0x1cc4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 8));
label_1cc4ec:
    // 0x1cc4ec: 0xae690078  sw          $t1, 0x78($s3)
    ctx->pc = 0x1cc4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 9));
label_1cc4f0:
    // 0x1cc4f0: 0xa263007c  sb          $v1, 0x7C($s3)
    ctx->pc = 0x1cc4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 124), (uint8_t)GPR_U32(ctx, 3));
label_1cc4f4:
    // 0x1cc4f4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1cc4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1cc4f8:
    // 0x1cc4f8: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
label_1cc4fc:
    if (ctx->pc == 0x1CC4FCu) {
        ctx->pc = 0x1CC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4F8u;
        // 0x1cc4fc: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC500u;
        goto label_1cc500;
    }
    ctx->pc = 0x1CC4F8u;
    {
        const bool branch_taken_0x1cc4f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4F8u;
        // 0x1cc4fc: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4f8) {
            ctx->pc = 0x1CC52Cu;
            goto label_1cc52c;
        }
    }
    ctx->pc = 0x1CC500u;
label_1cc500:
    // 0x1cc500: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1cc500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc504:
    // 0x1cc504: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1cc504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc508:
    // 0x1cc508: 0xc4c1eb08  lwc1        $f1, -0x14F8($a2)
    ctx->pc = 0x1cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc50c:
    // 0x1cc50c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cc50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc510:
    // 0x1cc510: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc514:
    // 0x1cc514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc518:
    // 0x1cc518: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1cc518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cc51c:
    // 0x1cc51c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1cc51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cc520:
    // 0x1cc520: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1cc524:
    // 0x1cc524: 0x1000000e  b           . + 4 + (0xE << 2)
label_1cc528:
    if (ctx->pc == 0x1CC528u) {
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC52Cu;
        goto label_1cc52c;
    }
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC560u;
            goto label_1cc560;
        }
    }
    ctx->pc = 0x1CC52Cu;
label_1cc52c:
    // 0x1cc52c: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1cc530:
    // 0x1cc530: 0x34216873  ori         $at, $at, 0x6873
    ctx->pc = 0x1cc530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26739);
label_1cc534:
    // 0x1cc534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc538:
    // 0x1cc538: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc53c:
    // 0x1cc53c: 0xc441eb04  lwc1        $f1, -0x14FC($v0)
    ctx->pc = 0x1cc53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc540:
    // 0x1cc540: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc544:
    // 0x1cc544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc548:
    // 0x1cc548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc54c:
    // 0x1cc54c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1cc54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc550:
    // 0x1cc550: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1cc550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cc554:
    // 0x1cc554: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1cc554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cc558:
    // 0x1cc558: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1cc558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1cc55c:
    // 0x1cc55c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1cc560:
    // 0x1cc560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc564:
    // 0x1cc564: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1cc568:
    // 0x1cc568: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x1cc568u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1cc56c:
    // 0x1cc56c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1cc56cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc570:
    // 0x1cc570: 0x24755880  addiu       $s5, $v1, 0x5880
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 22656));
label_1cc574:
    // 0x1cc574: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cc578:
    // 0x1cc578: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1cc57c:
    // 0x1cc57c: 0x24a558a8  addiu       $a1, $a1, 0x58A8
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22696));
label_1cc580:
    // 0x1cc580: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1cc584:
    // 0x1cc584: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cc584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc588:
    // 0x1cc588: 0x85040050  lh          $a0, 0x50($t0)
    ctx->pc = 0x1cc588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
label_1cc58c:
    // 0x1cc58c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc58cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc590:
    // 0x1cc590: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_1cc594:
    // 0x1cc594: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cc594u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc598:
    // 0x1cc598: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1cc59c:
    // 0x1cc59c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1cc59cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5a0:
    // 0x1cc5a0: 0x40f809  jalr        $v0
label_1cc5a4:
    if (ctx->pc == 0x1CC5A4u) {
        ctx->pc = 0x1CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A0u;
        // 0x1cc5a4: 0x24090094  addiu       $t1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5A8u;
        goto label_1cc5a8;
    }
    ctx->pc = 0x1CC5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC5A8u);
        ctx->pc = 0x1CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A0u;
        // 0x1cc5a4: 0x24090094  addiu       $t1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5A0u, 0x1CC5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC5A8u;
label_1cc5a8:
    // 0x1cc5a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cc5ac:
    if (ctx->pc == 0x1CC5ACu) {
        ctx->pc = 0x1CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A8u;
        // 0x1cc5ac: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5B0u;
        goto label_1cc5b0;
    }
    ctx->pc = 0x1CC5A8u;
    {
        const bool branch_taken_0x1cc5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A8u;
        // 0x1cc5ac: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5a8) {
            ctx->pc = 0x1CC5BCu;
            goto label_1cc5bc;
        }
    }
    ctx->pc = 0x1CC5B0u;
label_1cc5b0:
    // 0x1cc5b0: 0xc0733e2  jal         func_1CCF88
label_1cc5b4:
    if (ctx->pc == 0x1CC5B4u) {
        ctx->pc = 0x1CC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5B0u;
        // 0x1cc5b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5B8u;
        goto label_1cc5b8;
    }
    ctx->pc = 0x1CC5B0u;
    SET_GPR_U32(ctx, 31, 0x1CC5B8u);
    ctx->pc = 0x1CC5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5B0u;
    // 0x1cc5b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1CC5B0u, 0x1CC5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5B8u;
label_1cc5b8:
    // 0x1cc5b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1cc5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cc5bc:
    // 0x1cc5bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cc5bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cc5c0:
    // 0x1cc5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5c4:
    // 0x1cc5c4: 0xc05e602  jal         func_179808
label_1cc5c8:
    if (ctx->pc == 0x1CC5C8u) {
        ctx->pc = 0x1CC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5C4u;
        // 0x1cc5c8: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5CCu;
        goto label_1cc5cc;
    }
    ctx->pc = 0x1CC5C4u;
    SET_GPR_U32(ctx, 31, 0x1CC5CCu);
    ctx->pc = 0x1CC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5C4u;
    // 0x1cc5c8: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1CC5C4u, 0x1CC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5CCu;
label_1cc5cc:
    // 0x1cc5cc: 0x2671007d  addiu       $s1, $s3, 0x7D
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 125));
label_1cc5d0:
    // 0x1cc5d0: 0x8e660098  lw          $a2, 0x98($s3)
    ctx->pc = 0x1cc5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_1cc5d4:
    // 0x1cc5d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cc5d8:
    // 0x1cc5d8: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1cc5dc:
    // 0x1cc5dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc5e0:
    // 0x1cc5e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cc5e4:
    // 0x1cc5e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc5e8:
    // 0x1cc5e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc5ec:
    // 0x1cc5ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc5ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5f0:
    // 0x1cc5f0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1cc5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1cc5f4:
    // 0x1cc5f4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc5f8:
    // 0x1cc5f8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1cc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1cc5fc:
    // 0x1cc5fc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cc600:
    // 0x1cc600: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1cc604:
    // 0x1cc604: 0x40f809  jalr        $v0
label_1cc608:
    if (ctx->pc == 0x1CC608u) {
        ctx->pc = 0x1CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC604u;
        // 0x1cc608: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC60Cu;
        goto label_1cc60c;
    }
    ctx->pc = 0x1CC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC60Cu);
        ctx->pc = 0x1CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC604u;
        // 0x1cc608: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC604u, 0x1CC60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC60Cu;
label_1cc60c:
    // 0x1cc60c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1cc60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1cc610:
    // 0x1cc610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc614:
    // 0x1cc614: 0xc10c1fa  jal         func_4307E8
label_1cc618:
    if (ctx->pc == 0x1CC618u) {
        ctx->pc = 0x1CC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC614u;
        // 0x1cc618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC61Cu;
        goto label_1cc61c;
    }
    ctx->pc = 0x1CC614u;
    SET_GPR_U32(ctx, 31, 0x1CC61Cu);
    ctx->pc = 0x1CC618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC614u;
    // 0x1cc618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1CC614u, 0x1CC61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC61Cu;
label_1cc61c:
    // 0x1cc61c: 0x8e640098  lw          $a0, 0x98($s3)
    ctx->pc = 0x1cc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_1cc620:
    // 0x1cc620: 0xc073478  jal         func_1CD1E0
label_1cc624:
    if (ctx->pc == 0x1CC624u) {
        ctx->pc = 0x1CC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC620u;
        // 0x1cc624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC628u;
        goto label_1cc628;
    }
    ctx->pc = 0x1CC620u;
    SET_GPR_U32(ctx, 31, 0x1CC628u);
    ctx->pc = 0x1CC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC620u;
    // 0x1cc624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CC620u, 0x1CC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC628u;
label_1cc628:
    // 0x1cc628: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1cc62c:
    // 0x1cc62c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cc62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cc630:
    // 0x1cc630: 0x24a558b8  addiu       $a1, $a1, 0x58B8
    ctx->pc = 0x1cc630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22712));
label_1cc634:
    // 0x1cc634: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1cc634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc638:
    // 0x1cc638: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1cc63c:
    // 0x1cc63c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1cc640:
    // 0x1cc640: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc644:
    // 0x1cc644: 0x2409009a  addiu       $t1, $zero, 0x9A
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1cc648:
    // 0x1cc648: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cc64c:
    // 0x1cc64c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc650:
    // 0x1cc650: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cc654:
    // 0x1cc654: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc658:
    // 0x1cc658: 0x40f809  jalr        $v0
label_1cc65c:
    if (ctx->pc == 0x1CC65Cu) {
        ctx->pc = 0x1CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC658u;
        // 0x1cc65c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC660u;
        goto label_1cc660;
    }
    ctx->pc = 0x1CC658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC660u);
        ctx->pc = 0x1CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC658u;
        // 0x1cc65c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC658u, 0x1CC660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC660u;
label_1cc660:
    // 0x1cc660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cc664:
    if (ctx->pc == 0x1CC664u) {
        ctx->pc = 0x1CC668u;
        goto label_1cc668;
    }
    ctx->pc = 0x1CC660u;
    {
        const bool branch_taken_0x1cc660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc660) {
            ctx->pc = 0x1CC670u;
            goto label_1cc670;
        }
    }
    ctx->pc = 0x1CC668u;
label_1cc668:
    // 0x1cc668: 0xc073a9c  jal         func_1CEA70
label_1cc66c:
    if (ctx->pc == 0x1CC66Cu) {
        ctx->pc = 0x1CC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC668u;
        // 0x1cc66c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC670u;
        goto label_1cc670;
    }
    ctx->pc = 0x1CC668u;
    SET_GPR_U32(ctx, 31, 0x1CC670u);
    ctx->pc = 0x1CC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC668u;
    // 0x1cc66c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1CC668u, 0x1CC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC670u;
label_1cc670:
    // 0x1cc670: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
label_1cc674:
    if (ctx->pc == 0x1CC674u) {
        ctx->pc = 0x1CC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC670u;
        // 0x1cc674: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC678u;
        goto label_1cc678;
    }
    ctx->pc = 0x1CC670u;
    {
        const bool branch_taken_0x1cc670 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC670u;
        // 0x1cc674: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc670) {
            ctx->pc = 0x1CC6C8u;
            goto label_1cc6c8;
        }
    }
    ctx->pc = 0x1CC678u;
label_1cc678:
    // 0x1cc678: 0xc080ec2  jal         func_203B08
label_1cc67c:
    if (ctx->pc == 0x1CC67Cu) {
        ctx->pc = 0x1CC680u;
        goto label_1cc680;
    }
    ctx->pc = 0x1CC678u;
    SET_GPR_U32(ctx, 31, 0x1CC680u);
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x1CC678u, 0x1CC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC680u;
label_1cc680:
    // 0x1cc680: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1cc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc684:
    // 0x1cc684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc688:
    // 0x1cc688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc68c:
    // 0x1cc68c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc690:
    // 0x1cc690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc694:
    // 0x1cc694: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1cc694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cc698:
    // 0x1cc698: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1cc698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1cc69c:
    // 0x1cc69c: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x1cc69cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1cc6a0:
    // 0x1cc6a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1cc6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1cc6a4:
    // 0x1cc6a4: 0xc073ad0  jal         func_1CEB40
label_1cc6a8:
    if (ctx->pc == 0x1CC6A8u) {
        ctx->pc = 0x1CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6A4u;
        // 0x1cc6a8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6ACu;
        goto label_1cc6ac;
    }
    ctx->pc = 0x1CC6A4u;
    SET_GPR_U32(ctx, 31, 0x1CC6ACu);
    ctx->pc = 0x1CC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6A4u;
    // 0x1cc6a8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1CC6A4u, 0x1CC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6ACu;
label_1cc6ac:
    // 0x1cc6ac: 0xc067b9c  jal         func_19EE70
label_1cc6b0:
    if (ctx->pc == 0x1CC6B0u) {
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6B4u;
        goto label_1cc6b4;
    }
    ctx->pc = 0x1CC6ACu;
    SET_GPR_U32(ctx, 31, 0x1CC6B4u);
    ctx->pc = 0x1CC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6ACu;
    // 0x1cc6b0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CC6ACu, 0x1CC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6B4u;
label_1cc6b4:
    // 0x1cc6b4: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_1cc6b8:
    // 0x1cc6b8: 0xc073b0a  jal         func_1CEC28
label_1cc6bc:
    if (ctx->pc == 0x1CC6BCu) {
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6C0u;
        goto label_1cc6c0;
    }
    ctx->pc = 0x1CC6B8u;
    SET_GPR_U32(ctx, 31, 0x1CC6C0u);
    ctx->pc = 0x1CC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6B8u;
    // 0x1cc6bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CC6B8u, 0x1CC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6C0u;
label_1cc6c0:
    // 0x1cc6c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1cc6c4:
    if (ctx->pc == 0x1CC6C4u) {
        ctx->pc = 0x1CC6C8u;
        goto label_1cc6c8;
    }
    ctx->pc = 0x1CC6C0u;
    {
        const bool branch_taken_0x1cc6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6c0) {
            ctx->pc = 0x1CC710u;
            goto label_1cc710;
        }
    }
    ctx->pc = 0x1CC6C8u;
label_1cc6c8:
    // 0x1cc6c8: 0xc07f734  jal         func_1FDCD0
label_1cc6cc:
    if (ctx->pc == 0x1CC6CCu) {
        ctx->pc = 0x1CC6D0u;
        goto label_1cc6d0;
    }
    ctx->pc = 0x1CC6C8u;
    SET_GPR_U32(ctx, 31, 0x1CC6D0u);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1CC6C8u, 0x1CC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6D0u;
label_1cc6d0:
    // 0x1cc6d0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1cc6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc6d4:
    // 0x1cc6d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d8:
    // 0x1cc6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc6dc:
    // 0x1cc6dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cc6e0:
    // 0x1cc6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6e4:
    // 0x1cc6e4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1cc6e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cc6e8:
    // 0x1cc6e8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1cc6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1cc6ec:
    // 0x1cc6ec: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x1cc6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1cc6f0:
    // 0x1cc6f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1cc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1cc6f4:
    // 0x1cc6f4: 0xc073ad0  jal         func_1CEB40
label_1cc6f8:
    if (ctx->pc == 0x1CC6F8u) {
        ctx->pc = 0x1CC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6F4u;
        // 0x1cc6f8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6FCu;
        goto label_1cc6fc;
    }
    ctx->pc = 0x1CC6F4u;
    SET_GPR_U32(ctx, 31, 0x1CC6FCu);
    ctx->pc = 0x1CC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6F4u;
    // 0x1cc6f8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1CC6F4u, 0x1CC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6FCu;
label_1cc6fc:
    // 0x1cc6fc: 0xc067b9c  jal         func_19EE70
label_1cc700:
    if (ctx->pc == 0x1CC700u) {
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC704u;
        goto label_1cc704;
    }
    ctx->pc = 0x1CC6FCu;
    SET_GPR_U32(ctx, 31, 0x1CC704u);
    ctx->pc = 0x1CC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6FCu;
    // 0x1cc700: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CC6FCu, 0x1CC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC704u;
label_1cc704:
    // 0x1cc704: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x1cc704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_1cc708:
    // 0x1cc708: 0xc073b0a  jal         func_1CEC28
label_1cc70c:
    if (ctx->pc == 0x1CC70Cu) {
        ctx->pc = 0x1CC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC708u;
        // 0x1cc70c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC710u;
        goto label_1cc710;
    }
    ctx->pc = 0x1CC708u;
    SET_GPR_U32(ctx, 31, 0x1CC710u);
    ctx->pc = 0x1CC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC708u;
    // 0x1cc70c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CC708u, 0x1CC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC710u;
label_1cc710:
    // 0x1cc710: 0xc067b9c  jal         func_19EE70
label_1cc714:
    if (ctx->pc == 0x1CC714u) {
        ctx->pc = 0x1CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC710u;
        // 0x1cc714: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC718u;
        goto label_1cc718;
    }
    ctx->pc = 0x1CC710u;
    SET_GPR_U32(ctx, 31, 0x1CC718u);
    ctx->pc = 0x1CC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC710u;
    // 0x1cc714: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CC710u, 0x1CC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC718u;
label_1cc718:
    // 0x1cc718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc71c:
    // 0x1cc71c: 0xc10c3ac  jal         func_430EB0
label_1cc720:
    if (ctx->pc == 0x1CC720u) {
        ctx->pc = 0x1CC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC71Cu;
        // 0x1cc720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC724u;
        goto label_1cc724;
    }
    ctx->pc = 0x1CC71Cu;
    SET_GPR_U32(ctx, 31, 0x1CC724u);
    ctx->pc = 0x1CC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC71Cu;
    // 0x1cc720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CC71Cu, 0x1CC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC724u;
label_1cc724:
    // 0x1cc724: 0x8fcb27e4  lw          $t3, 0x27E4($fp)
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1cc728:
    // 0x1cc728: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cc728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc72c:
    // 0x1cc72c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1cc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1cc730:
    // 0x1cc730: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cc730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cc734:
    // 0x1cc734: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cc734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1cc738:
    // 0x1cc738: 0x24485880  addiu       $t0, $v0, 0x5880
    ctx->pc = 0x1cc738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
label_1cc73c:
    // 0x1cc73c: 0x24a558c8  addiu       $a1, $a1, 0x58C8
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22728));
label_1cc740:
    // 0x1cc740: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1cc744:
    // 0x1cc744: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cc748:
    // 0x1cc748: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc74c:
    // 0x1cc74c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cc750:
    // 0x1cc750: 0x240900a7  addiu       $t1, $zero, 0xA7
    ctx->pc = 0x1cc750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
label_1cc754:
    // 0x1cc754: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1cc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1cc758:
    // 0x1cc758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc75c:
    // 0x1cc75c: 0x40f809  jalr        $v0
label_1cc760:
    if (ctx->pc == 0x1CC760u) {
        ctx->pc = 0x1CC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC75Cu;
        // 0x1cc760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC764u;
        goto label_1cc764;
    }
    ctx->pc = 0x1CC75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC764u);
        ctx->pc = 0x1CC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC75Cu;
        // 0x1cc760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC75Cu, 0x1CC764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC764u;
label_1cc764:
    // 0x1cc764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc768:
    // 0x1cc768: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1cc76c:
    if (ctx->pc == 0x1CC76Cu) {
        ctx->pc = 0x1CC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC768u;
        // 0x1cc76c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC770u;
        goto label_1cc770;
    }
    ctx->pc = 0x1CC768u;
    {
        const bool branch_taken_0x1cc768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC768u;
        // 0x1cc76c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc768) {
            ctx->pc = 0x1CC780u;
            goto label_1cc780;
        }
    }
    ctx->pc = 0x1CC770u;
label_1cc770:
    // 0x1cc770: 0xc074fbc  jal         func_1D3EF0
label_1cc774:
    if (ctx->pc == 0x1CC774u) {
        ctx->pc = 0x1CC778u;
        goto label_1cc778;
    }
    ctx->pc = 0x1CC770u;
    SET_GPR_U32(ctx, 31, 0x1CC778u);
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1CC770u, 0x1CC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC778u;
label_1cc778:
    // 0x1cc778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc77c:
    // 0x1cc77c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cc780:
    // 0x1cc780: 0x26a3ffde  addiu       $v1, $s5, -0x22
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967262));
label_1cc784:
    // 0x1cc784: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1cc784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1cc788:
    // 0x1cc788: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1cc788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_1cc78c:
    // 0x1cc78c: 0xae640070  sw          $a0, 0x70($s3)
    ctx->pc = 0x1cc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 4));
label_1cc790:
    // 0x1cc790: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cc790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1cc794:
    // 0x1cc794: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
label_1cc798:
    if (ctx->pc == 0x1CC798u) {
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC79Cu;
        goto label_1cc79c;
    }
    ctx->pc = 0x1CC794u;
    {
        const bool branch_taken_0x1cc794 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc794) {
            ctx->pc = 0x1CC7DCu;
            goto label_1cc7dc;
        }
    }
    ctx->pc = 0x1CC79Cu;
label_1cc79c:
    // 0x1cc79c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc7a0:
    // 0x1cc7a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cc7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cc7a4:
    // 0x1cc7a4: 0xc44ceb10  lwc1        $f12, -0x14F0($v0)
    ctx->pc = 0x1cc7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc7a8:
    // 0x1cc7a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7ac:
    // 0x1cc7ac: 0xc075044  jal         func_1D4110
label_1cc7b0:
    if (ctx->pc == 0x1CC7B0u) {
        ctx->pc = 0x1CC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7ACu;
        // 0x1cc7b0: 0x26670050  addiu       $a3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7B4u;
        goto label_1cc7b4;
    }
    ctx->pc = 0x1CC7ACu;
    SET_GPR_U32(ctx, 31, 0x1CC7B4u);
    ctx->pc = 0x1CC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7ACu;
    // 0x1cc7b0: 0x26670050  addiu       $a3, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1CC7ACu, 0x1CC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7B4u;
label_1cc7b4:
    // 0x1cc7b4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1cc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc7b8:
    // 0x1cc7b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7bc:
    // 0x1cc7bc: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1cc7c0:
    // 0x1cc7c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc7c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1cc7c4:
    // 0x1cc7c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc7c8:
    // 0x1cc7c8: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1cc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc7cc:
    // 0x1cc7cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cc7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cc7d0:
    // 0x1cc7d0: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x1cc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
label_1cc7d4:
    // 0x1cc7d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cc7d8:
    if (ctx->pc == 0x1CC7D8u) {
        ctx->pc = 0x1CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D4u;
        // 0x1cc7d8: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7DCu;
        goto label_1cc7dc;
    }
    ctx->pc = 0x1CC7D4u;
    {
        const bool branch_taken_0x1cc7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D4u;
        // 0x1cc7d8: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7d4) {
            ctx->pc = 0x1CC7F4u;
            goto label_1cc7f4;
        }
    }
    ctx->pc = 0x1CC7DCu;
label_1cc7dc:
    // 0x1cc7dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cc7e0:
    // 0x1cc7e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cc7e4:
    // 0x1cc7e4: 0xc44ceb0c  lwc1        $f12, -0x14F4($v0)
    ctx->pc = 0x1cc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc7e8:
    // 0x1cc7e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7ec:
    // 0x1cc7ec: 0xc075044  jal         func_1D4110
label_1cc7f0:
    if (ctx->pc == 0x1CC7F0u) {
        ctx->pc = 0x1CC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7ECu;
        // 0x1cc7f0: 0x26670050  addiu       $a3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7F4u;
        goto label_1cc7f4;
    }
    ctx->pc = 0x1CC7ECu;
    SET_GPR_U32(ctx, 31, 0x1CC7F4u);
    ctx->pc = 0x1CC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC7ECu;
    // 0x1cc7f0: 0x26670050  addiu       $a3, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1CC7ECu, 0x1CC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC7F4u;
label_1cc7f4:
    // 0x1cc7f4: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc7f8:
    // 0x1cc7f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1cc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc7fc:
    // 0x1cc7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc800:
    // 0x1cc800: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cc800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cc804:
    // 0x1cc804: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x1cc804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
label_1cc808:
    // 0x1cc808: 0x8c52d320  lw          $s2, -0x2CE0($v0)
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
label_1cc80c:
    // 0x1cc80c: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x1cc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc810:
    // 0x1cc810: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1cc810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
label_1cc814:
    // 0x1cc814: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cc814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_1cc818:
    // 0x1cc818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc81c:
    // 0x1cc81c: 0xac65009c  sw          $a1, 0x9C($v1)
    ctx->pc = 0x1cc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 5));
label_1cc820:
    // 0x1cc820: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1cc820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc824:
    // 0x1cc824: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1cc824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_1cc828:
    // 0x1cc828: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_1cc82c:
    if (ctx->pc == 0x1CC82Cu) {
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC828u;
        // 0x1cc82c: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC830u;
        goto label_1cc830;
    }
    ctx->pc = 0x1CC828u;
    {
        const bool branch_taken_0x1cc828 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC828u;
        // 0x1cc82c: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc828) {
            ctx->pc = 0x1CC838u;
            goto label_1cc838;
        }
    }
    ctx->pc = 0x1CC830u;
label_1cc830:
    // 0x1cc830: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cc834:
    // 0x1cc834: 0x8c52d328  lw          $s2, -0x2CD8($v0)
    ctx->pc = 0x1cc834u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
label_1cc838:
    // 0x1cc838: 0x12a00024  beqz        $s5, . + 4 + (0x24 << 2)
label_1cc83c:
    if (ctx->pc == 0x1CC83Cu) {
        ctx->pc = 0x1CC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC838u;
        // 0x1cc83c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC840u;
        goto label_1cc840;
    }
    ctx->pc = 0x1CC838u;
    {
        const bool branch_taken_0x1cc838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC838u;
        // 0x1cc83c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc838) {
            ctx->pc = 0x1CC8CCu;
            goto label_1cc8cc;
        }
    }
    ctx->pc = 0x1CC840u;
label_1cc840:
    // 0x1cc840: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc844:
    // 0x1cc844: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1cc844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc848:
    // 0x1cc848: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1cc84c:
    // 0x1cc84c: 0x14f70010  bne         $a3, $s7, . + 4 + (0x10 << 2)
label_1cc850:
    if (ctx->pc == 0x1CC850u) {
        ctx->pc = 0x1CC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC84Cu;
        // 0x1cc850: 0xa3a70030  sb          $a3, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC854u;
        goto label_1cc854;
    }
    ctx->pc = 0x1CC84Cu;
    {
        const bool branch_taken_0x1cc84c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 23));
        ctx->pc = 0x1CC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC84Cu;
        // 0x1cc850: 0xa3a70030  sb          $a3, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc84c) {
            ctx->pc = 0x1CC890u;
            goto label_1cc890;
        }
    }
    ctx->pc = 0x1CC854u;
label_1cc854:
    // 0x1cc854: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1cc854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc858:
    // 0x1cc858: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc85c:
    // 0x1cc85c: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_1cc860:
    // 0x1cc860: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1cc860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1cc864:
    // 0x1cc864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cc864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc868:
    // 0x1cc868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc86c:
    // 0x1cc86c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1cc86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1cc870:
    // 0x1cc870: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1cc870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cc874:
    // 0x1cc874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc878:
    // 0x1cc878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc87c:
    // 0x1cc87c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1cc87cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc880:
    // 0x1cc880: 0xc07508c  jal         func_1D4230
label_1cc884:
    if (ctx->pc == 0x1CC884u) {
        ctx->pc = 0x1CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC880u;
        // 0x1cc884: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC888u;
        goto label_1cc888;
    }
    ctx->pc = 0x1CC880u;
    SET_GPR_U32(ctx, 31, 0x1CC888u);
    ctx->pc = 0x1CC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC880u;
    // 0x1cc884: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CC880u, 0x1CC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC888u;
label_1cc888:
    // 0x1cc888: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cc88c:
    if (ctx->pc == 0x1CC88Cu) {
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC890u;
        goto label_1cc890;
    }
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC8C0u;
            goto label_1cc8c0;
        }
    }
    ctx->pc = 0x1CC890u;
label_1cc890:
    // 0x1cc890: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc894:
    // 0x1cc894: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc898:
    // 0x1cc898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc89c:
    // 0x1cc89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cc89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc8a0:
    // 0x1cc8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8a4:
    // 0x1cc8a4: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1cc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1cc8a8:
    // 0x1cc8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8ac:
    // 0x1cc8ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc8b0:
    // 0x1cc8b0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1cc8b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8b4:
    // 0x1cc8b4: 0xc07508c  jal         func_1D4230
label_1cc8b8:
    if (ctx->pc == 0x1CC8B8u) {
        ctx->pc = 0x1CC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B4u;
        // 0x1cc8b8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8BCu;
        goto label_1cc8bc;
    }
    ctx->pc = 0x1CC8B4u;
    SET_GPR_U32(ctx, 31, 0x1CC8BCu);
    ctx->pc = 0x1CC8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8B4u;
    // 0x1cc8b8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CC8B4u, 0x1CC8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8BCu;
label_1cc8bc:
    // 0x1cc8bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cc8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cc8c0:
    // 0x1cc8c0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x1cc8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1cc8c4:
    // 0x1cc8c4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1cc8c8:
    if (ctx->pc == 0x1CC8C8u) {
        ctx->pc = 0x1CC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C4u;
        // 0x1cc8c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8CCu;
        goto label_1cc8cc;
    }
    ctx->pc = 0x1CC8C4u;
    {
        const bool branch_taken_0x1cc8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C4u;
        // 0x1cc8c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8c4) {
            ctx->pc = 0x1CC848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc8d0:
    // 0x1cc8d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cc8d4:
    // 0x1cc8d4: 0xc067b9c  jal         func_19EE70
label_1cc8d8:
    if (ctx->pc == 0x1CC8D8u) {
        ctx->pc = 0x1CC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8D4u;
        // 0x1cc8d8: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC8DCu;
        goto label_1cc8dc;
    }
    ctx->pc = 0x1CC8D4u;
    SET_GPR_U32(ctx, 31, 0x1CC8DCu);
    ctx->pc = 0x1CC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8D4u;
    // 0x1cc8d8: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CC8D4u, 0x1CC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8DCu;
label_1cc8dc:
    // 0x1cc8dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc8e0:
    // 0x1cc8e0: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1cc8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc8e4:
    // 0x1cc8e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8e8:
    // 0x1cc8e8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1cc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1cc8ec:
    // 0x1cc8ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cc8ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cc8f0:
    // 0x1cc8f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8f4:
    // 0x1cc8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8f8:
    // 0x1cc8f8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc8fc:
    // 0x1cc8fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc900:
    // 0x1cc900: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1cc900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc904:
    // 0x1cc904: 0xc07508c  jal         func_1D4230
label_1cc908:
    if (ctx->pc == 0x1CC908u) {
        ctx->pc = 0x1CC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC904u;
        // 0x1cc908: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC90Cu;
        goto label_1cc90c;
    }
    ctx->pc = 0x1CC904u;
    SET_GPR_U32(ctx, 31, 0x1CC90Cu);
    ctx->pc = 0x1CC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC904u;
    // 0x1cc908: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CC904u, 0x1CC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC90Cu;
label_1cc90c:
    // 0x1cc90c: 0xc067b9c  jal         func_19EE70
label_1cc910:
    if (ctx->pc == 0x1CC910u) {
        ctx->pc = 0x1CC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC90Cu;
        // 0x1cc910: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC914u;
        goto label_1cc914;
    }
    ctx->pc = 0x1CC90Cu;
    SET_GPR_U32(ctx, 31, 0x1CC914u);
    ctx->pc = 0x1CC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC90Cu;
    // 0x1cc910: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CC90Cu, 0x1CC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC914u;
label_1cc914:
    // 0x1cc914: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc918:
    // 0x1cc918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc91c:
    // 0x1cc91c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cc91cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cc920:
    // 0x1cc920: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1cc920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc924:
    // 0x1cc924: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1cc924u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc928:
    // 0x1cc928: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1cc928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1cc92c:
    // 0x1cc92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc930:
    // 0x1cc930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc934:
    // 0x1cc934: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cc934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc938:
    // 0x1cc938: 0xc07508c  jal         func_1D4230
label_1cc93c:
    if (ctx->pc == 0x1CC93Cu) {
        ctx->pc = 0x1CC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC938u;
        // 0x1cc93c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC940u;
        goto label_1cc940;
    }
    ctx->pc = 0x1CC938u;
    SET_GPR_U32(ctx, 31, 0x1CC940u);
    ctx->pc = 0x1CC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC938u;
    // 0x1cc93c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CC938u, 0x1CC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC940u;
label_1cc940:
    // 0x1cc940: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x1cc940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1cc944:
    // 0x1cc944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc948:
    // 0x1cc948: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1cc94c:
    // 0x1cc94c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1cc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1cc950:
    // 0x1cc950: 0x60f809  jalr        $v1
label_1cc954:
    if (ctx->pc == 0x1CC954u) {
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC958u;
        goto label_1cc958;
    }
    ctx->pc = 0x1CC950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC958u);
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC950u, 0x1CC958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC958u;
label_1cc958:
    // 0x1cc958: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x1cc958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
label_1cc95c:
    // 0x1cc95c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1cc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1cc960:
    // 0x1cc960: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1cc960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc964:
    // 0x1cc964: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc968:
    // 0x1cc968: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1cc968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cc96c:
    // 0x1cc96c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1cc96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cc970:
    // 0x1cc970: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1cc970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cc974:
    // 0x1cc974: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1cc974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc978:
    // 0x1cc978: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1cc978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cc97c:
    // 0x1cc97c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1cc97cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc980:
    // 0x1cc980: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1cc980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc984:
    // 0x1cc984: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc988:
    // 0x1cc988: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cc98c:
    // 0x1cc98c: 0x3e00008  jr          $ra
label_1cc990:
    if (ctx->pc == 0x1CC990u) {
        ctx->pc = 0x1CC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC98Cu;
        // 0x1cc990: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC994u;
        goto label_1cc994;
    }
    ctx->pc = 0x1CC98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC98Cu;
        // 0x1cc990: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC994u;
label_1cc994:
    // 0x1cc994: 0x0  nop
    ctx->pc = 0x1cc994u;
    // NOP
    ctx->pc = 0x1cc998u;
}
