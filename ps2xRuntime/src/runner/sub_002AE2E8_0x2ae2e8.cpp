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

// Function: sub_002AE2E8
// Address: 0x2ae2e8 - 0x2aebf8
void sub_002AE2E8_0x2ae2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE2E8_0x2ae2e8");
#endif

    switch (ctx->pc) {
        case 0x2ae2e8u: goto label_2ae2e8;
        case 0x2ae2ecu: goto label_2ae2ec;
        case 0x2ae2f0u: goto label_2ae2f0;
        case 0x2ae2f4u: goto label_2ae2f4;
        case 0x2ae2f8u: goto label_2ae2f8;
        case 0x2ae2fcu: goto label_2ae2fc;
        case 0x2ae300u: goto label_2ae300;
        case 0x2ae304u: goto label_2ae304;
        case 0x2ae308u: goto label_2ae308;
        case 0x2ae30cu: goto label_2ae30c;
        case 0x2ae310u: goto label_2ae310;
        case 0x2ae314u: goto label_2ae314;
        case 0x2ae318u: goto label_2ae318;
        case 0x2ae31cu: goto label_2ae31c;
        case 0x2ae320u: goto label_2ae320;
        case 0x2ae324u: goto label_2ae324;
        case 0x2ae328u: goto label_2ae328;
        case 0x2ae32cu: goto label_2ae32c;
        case 0x2ae330u: goto label_2ae330;
        case 0x2ae334u: goto label_2ae334;
        case 0x2ae338u: goto label_2ae338;
        case 0x2ae33cu: goto label_2ae33c;
        case 0x2ae340u: goto label_2ae340;
        case 0x2ae344u: goto label_2ae344;
        case 0x2ae348u: goto label_2ae348;
        case 0x2ae34cu: goto label_2ae34c;
        case 0x2ae350u: goto label_2ae350;
        case 0x2ae354u: goto label_2ae354;
        case 0x2ae358u: goto label_2ae358;
        case 0x2ae35cu: goto label_2ae35c;
        case 0x2ae360u: goto label_2ae360;
        case 0x2ae364u: goto label_2ae364;
        case 0x2ae368u: goto label_2ae368;
        case 0x2ae36cu: goto label_2ae36c;
        case 0x2ae370u: goto label_2ae370;
        case 0x2ae374u: goto label_2ae374;
        case 0x2ae378u: goto label_2ae378;
        case 0x2ae37cu: goto label_2ae37c;
        case 0x2ae380u: goto label_2ae380;
        case 0x2ae384u: goto label_2ae384;
        case 0x2ae388u: goto label_2ae388;
        case 0x2ae38cu: goto label_2ae38c;
        case 0x2ae390u: goto label_2ae390;
        case 0x2ae394u: goto label_2ae394;
        case 0x2ae398u: goto label_2ae398;
        case 0x2ae39cu: goto label_2ae39c;
        case 0x2ae3a0u: goto label_2ae3a0;
        case 0x2ae3a4u: goto label_2ae3a4;
        case 0x2ae3a8u: goto label_2ae3a8;
        case 0x2ae3acu: goto label_2ae3ac;
        case 0x2ae3b0u: goto label_2ae3b0;
        case 0x2ae3b4u: goto label_2ae3b4;
        case 0x2ae3b8u: goto label_2ae3b8;
        case 0x2ae3bcu: goto label_2ae3bc;
        case 0x2ae3c0u: goto label_2ae3c0;
        case 0x2ae3c4u: goto label_2ae3c4;
        case 0x2ae3c8u: goto label_2ae3c8;
        case 0x2ae3ccu: goto label_2ae3cc;
        case 0x2ae3d0u: goto label_2ae3d0;
        case 0x2ae3d4u: goto label_2ae3d4;
        case 0x2ae3d8u: goto label_2ae3d8;
        case 0x2ae3dcu: goto label_2ae3dc;
        case 0x2ae3e0u: goto label_2ae3e0;
        case 0x2ae3e4u: goto label_2ae3e4;
        case 0x2ae3e8u: goto label_2ae3e8;
        case 0x2ae3ecu: goto label_2ae3ec;
        case 0x2ae3f0u: goto label_2ae3f0;
        case 0x2ae3f4u: goto label_2ae3f4;
        case 0x2ae3f8u: goto label_2ae3f8;
        case 0x2ae3fcu: goto label_2ae3fc;
        case 0x2ae400u: goto label_2ae400;
        case 0x2ae404u: goto label_2ae404;
        case 0x2ae408u: goto label_2ae408;
        case 0x2ae40cu: goto label_2ae40c;
        case 0x2ae410u: goto label_2ae410;
        case 0x2ae414u: goto label_2ae414;
        case 0x2ae418u: goto label_2ae418;
        case 0x2ae41cu: goto label_2ae41c;
        case 0x2ae420u: goto label_2ae420;
        case 0x2ae424u: goto label_2ae424;
        case 0x2ae428u: goto label_2ae428;
        case 0x2ae42cu: goto label_2ae42c;
        case 0x2ae430u: goto label_2ae430;
        case 0x2ae434u: goto label_2ae434;
        case 0x2ae438u: goto label_2ae438;
        case 0x2ae43cu: goto label_2ae43c;
        case 0x2ae440u: goto label_2ae440;
        case 0x2ae444u: goto label_2ae444;
        case 0x2ae448u: goto label_2ae448;
        case 0x2ae44cu: goto label_2ae44c;
        case 0x2ae450u: goto label_2ae450;
        case 0x2ae454u: goto label_2ae454;
        case 0x2ae458u: goto label_2ae458;
        case 0x2ae45cu: goto label_2ae45c;
        case 0x2ae460u: goto label_2ae460;
        case 0x2ae464u: goto label_2ae464;
        case 0x2ae468u: goto label_2ae468;
        case 0x2ae46cu: goto label_2ae46c;
        case 0x2ae470u: goto label_2ae470;
        case 0x2ae474u: goto label_2ae474;
        case 0x2ae478u: goto label_2ae478;
        case 0x2ae47cu: goto label_2ae47c;
        case 0x2ae480u: goto label_2ae480;
        case 0x2ae484u: goto label_2ae484;
        case 0x2ae488u: goto label_2ae488;
        case 0x2ae48cu: goto label_2ae48c;
        case 0x2ae490u: goto label_2ae490;
        case 0x2ae494u: goto label_2ae494;
        case 0x2ae498u: goto label_2ae498;
        case 0x2ae49cu: goto label_2ae49c;
        case 0x2ae4a0u: goto label_2ae4a0;
        case 0x2ae4a4u: goto label_2ae4a4;
        case 0x2ae4a8u: goto label_2ae4a8;
        case 0x2ae4acu: goto label_2ae4ac;
        case 0x2ae4b0u: goto label_2ae4b0;
        case 0x2ae4b4u: goto label_2ae4b4;
        case 0x2ae4b8u: goto label_2ae4b8;
        case 0x2ae4bcu: goto label_2ae4bc;
        case 0x2ae4c0u: goto label_2ae4c0;
        case 0x2ae4c4u: goto label_2ae4c4;
        case 0x2ae4c8u: goto label_2ae4c8;
        case 0x2ae4ccu: goto label_2ae4cc;
        case 0x2ae4d0u: goto label_2ae4d0;
        case 0x2ae4d4u: goto label_2ae4d4;
        case 0x2ae4d8u: goto label_2ae4d8;
        case 0x2ae4dcu: goto label_2ae4dc;
        case 0x2ae4e0u: goto label_2ae4e0;
        case 0x2ae4e4u: goto label_2ae4e4;
        case 0x2ae4e8u: goto label_2ae4e8;
        case 0x2ae4ecu: goto label_2ae4ec;
        case 0x2ae4f0u: goto label_2ae4f0;
        case 0x2ae4f4u: goto label_2ae4f4;
        case 0x2ae4f8u: goto label_2ae4f8;
        case 0x2ae4fcu: goto label_2ae4fc;
        case 0x2ae500u: goto label_2ae500;
        case 0x2ae504u: goto label_2ae504;
        case 0x2ae508u: goto label_2ae508;
        case 0x2ae50cu: goto label_2ae50c;
        case 0x2ae510u: goto label_2ae510;
        case 0x2ae514u: goto label_2ae514;
        case 0x2ae518u: goto label_2ae518;
        case 0x2ae51cu: goto label_2ae51c;
        case 0x2ae520u: goto label_2ae520;
        case 0x2ae524u: goto label_2ae524;
        case 0x2ae528u: goto label_2ae528;
        case 0x2ae52cu: goto label_2ae52c;
        case 0x2ae530u: goto label_2ae530;
        case 0x2ae534u: goto label_2ae534;
        case 0x2ae538u: goto label_2ae538;
        case 0x2ae53cu: goto label_2ae53c;
        case 0x2ae540u: goto label_2ae540;
        case 0x2ae544u: goto label_2ae544;
        case 0x2ae548u: goto label_2ae548;
        case 0x2ae54cu: goto label_2ae54c;
        case 0x2ae550u: goto label_2ae550;
        case 0x2ae554u: goto label_2ae554;
        case 0x2ae558u: goto label_2ae558;
        case 0x2ae55cu: goto label_2ae55c;
        case 0x2ae560u: goto label_2ae560;
        case 0x2ae564u: goto label_2ae564;
        case 0x2ae568u: goto label_2ae568;
        case 0x2ae56cu: goto label_2ae56c;
        case 0x2ae570u: goto label_2ae570;
        case 0x2ae574u: goto label_2ae574;
        case 0x2ae578u: goto label_2ae578;
        case 0x2ae57cu: goto label_2ae57c;
        case 0x2ae580u: goto label_2ae580;
        case 0x2ae584u: goto label_2ae584;
        case 0x2ae588u: goto label_2ae588;
        case 0x2ae58cu: goto label_2ae58c;
        case 0x2ae590u: goto label_2ae590;
        case 0x2ae594u: goto label_2ae594;
        case 0x2ae598u: goto label_2ae598;
        case 0x2ae59cu: goto label_2ae59c;
        case 0x2ae5a0u: goto label_2ae5a0;
        case 0x2ae5a4u: goto label_2ae5a4;
        case 0x2ae5a8u: goto label_2ae5a8;
        case 0x2ae5acu: goto label_2ae5ac;
        case 0x2ae5b0u: goto label_2ae5b0;
        case 0x2ae5b4u: goto label_2ae5b4;
        case 0x2ae5b8u: goto label_2ae5b8;
        case 0x2ae5bcu: goto label_2ae5bc;
        case 0x2ae5c0u: goto label_2ae5c0;
        case 0x2ae5c4u: goto label_2ae5c4;
        case 0x2ae5c8u: goto label_2ae5c8;
        case 0x2ae5ccu: goto label_2ae5cc;
        case 0x2ae5d0u: goto label_2ae5d0;
        case 0x2ae5d4u: goto label_2ae5d4;
        case 0x2ae5d8u: goto label_2ae5d8;
        case 0x2ae5dcu: goto label_2ae5dc;
        case 0x2ae5e0u: goto label_2ae5e0;
        case 0x2ae5e4u: goto label_2ae5e4;
        case 0x2ae5e8u: goto label_2ae5e8;
        case 0x2ae5ecu: goto label_2ae5ec;
        case 0x2ae5f0u: goto label_2ae5f0;
        case 0x2ae5f4u: goto label_2ae5f4;
        case 0x2ae5f8u: goto label_2ae5f8;
        case 0x2ae5fcu: goto label_2ae5fc;
        case 0x2ae600u: goto label_2ae600;
        case 0x2ae604u: goto label_2ae604;
        case 0x2ae608u: goto label_2ae608;
        case 0x2ae60cu: goto label_2ae60c;
        case 0x2ae610u: goto label_2ae610;
        case 0x2ae614u: goto label_2ae614;
        case 0x2ae618u: goto label_2ae618;
        case 0x2ae61cu: goto label_2ae61c;
        case 0x2ae620u: goto label_2ae620;
        case 0x2ae624u: goto label_2ae624;
        case 0x2ae628u: goto label_2ae628;
        case 0x2ae62cu: goto label_2ae62c;
        case 0x2ae630u: goto label_2ae630;
        case 0x2ae634u: goto label_2ae634;
        case 0x2ae638u: goto label_2ae638;
        case 0x2ae63cu: goto label_2ae63c;
        case 0x2ae640u: goto label_2ae640;
        case 0x2ae644u: goto label_2ae644;
        case 0x2ae648u: goto label_2ae648;
        case 0x2ae64cu: goto label_2ae64c;
        case 0x2ae650u: goto label_2ae650;
        case 0x2ae654u: goto label_2ae654;
        case 0x2ae658u: goto label_2ae658;
        case 0x2ae65cu: goto label_2ae65c;
        case 0x2ae660u: goto label_2ae660;
        case 0x2ae664u: goto label_2ae664;
        case 0x2ae668u: goto label_2ae668;
        case 0x2ae66cu: goto label_2ae66c;
        case 0x2ae670u: goto label_2ae670;
        case 0x2ae674u: goto label_2ae674;
        case 0x2ae678u: goto label_2ae678;
        case 0x2ae67cu: goto label_2ae67c;
        case 0x2ae680u: goto label_2ae680;
        case 0x2ae684u: goto label_2ae684;
        case 0x2ae688u: goto label_2ae688;
        case 0x2ae68cu: goto label_2ae68c;
        case 0x2ae690u: goto label_2ae690;
        case 0x2ae694u: goto label_2ae694;
        case 0x2ae698u: goto label_2ae698;
        case 0x2ae69cu: goto label_2ae69c;
        case 0x2ae6a0u: goto label_2ae6a0;
        case 0x2ae6a4u: goto label_2ae6a4;
        case 0x2ae6a8u: goto label_2ae6a8;
        case 0x2ae6acu: goto label_2ae6ac;
        case 0x2ae6b0u: goto label_2ae6b0;
        case 0x2ae6b4u: goto label_2ae6b4;
        case 0x2ae6b8u: goto label_2ae6b8;
        case 0x2ae6bcu: goto label_2ae6bc;
        case 0x2ae6c0u: goto label_2ae6c0;
        case 0x2ae6c4u: goto label_2ae6c4;
        case 0x2ae6c8u: goto label_2ae6c8;
        case 0x2ae6ccu: goto label_2ae6cc;
        case 0x2ae6d0u: goto label_2ae6d0;
        case 0x2ae6d4u: goto label_2ae6d4;
        case 0x2ae6d8u: goto label_2ae6d8;
        case 0x2ae6dcu: goto label_2ae6dc;
        case 0x2ae6e0u: goto label_2ae6e0;
        case 0x2ae6e4u: goto label_2ae6e4;
        case 0x2ae6e8u: goto label_2ae6e8;
        case 0x2ae6ecu: goto label_2ae6ec;
        case 0x2ae6f0u: goto label_2ae6f0;
        case 0x2ae6f4u: goto label_2ae6f4;
        case 0x2ae6f8u: goto label_2ae6f8;
        case 0x2ae6fcu: goto label_2ae6fc;
        case 0x2ae700u: goto label_2ae700;
        case 0x2ae704u: goto label_2ae704;
        case 0x2ae708u: goto label_2ae708;
        case 0x2ae70cu: goto label_2ae70c;
        case 0x2ae710u: goto label_2ae710;
        case 0x2ae714u: goto label_2ae714;
        case 0x2ae718u: goto label_2ae718;
        case 0x2ae71cu: goto label_2ae71c;
        case 0x2ae720u: goto label_2ae720;
        case 0x2ae724u: goto label_2ae724;
        case 0x2ae728u: goto label_2ae728;
        case 0x2ae72cu: goto label_2ae72c;
        case 0x2ae730u: goto label_2ae730;
        case 0x2ae734u: goto label_2ae734;
        case 0x2ae738u: goto label_2ae738;
        case 0x2ae73cu: goto label_2ae73c;
        case 0x2ae740u: goto label_2ae740;
        case 0x2ae744u: goto label_2ae744;
        case 0x2ae748u: goto label_2ae748;
        case 0x2ae74cu: goto label_2ae74c;
        case 0x2ae750u: goto label_2ae750;
        case 0x2ae754u: goto label_2ae754;
        case 0x2ae758u: goto label_2ae758;
        case 0x2ae75cu: goto label_2ae75c;
        case 0x2ae760u: goto label_2ae760;
        case 0x2ae764u: goto label_2ae764;
        case 0x2ae768u: goto label_2ae768;
        case 0x2ae76cu: goto label_2ae76c;
        case 0x2ae770u: goto label_2ae770;
        case 0x2ae774u: goto label_2ae774;
        case 0x2ae778u: goto label_2ae778;
        case 0x2ae77cu: goto label_2ae77c;
        case 0x2ae780u: goto label_2ae780;
        case 0x2ae784u: goto label_2ae784;
        case 0x2ae788u: goto label_2ae788;
        case 0x2ae78cu: goto label_2ae78c;
        case 0x2ae790u: goto label_2ae790;
        case 0x2ae794u: goto label_2ae794;
        case 0x2ae798u: goto label_2ae798;
        case 0x2ae79cu: goto label_2ae79c;
        case 0x2ae7a0u: goto label_2ae7a0;
        case 0x2ae7a4u: goto label_2ae7a4;
        case 0x2ae7a8u: goto label_2ae7a8;
        case 0x2ae7acu: goto label_2ae7ac;
        case 0x2ae7b0u: goto label_2ae7b0;
        case 0x2ae7b4u: goto label_2ae7b4;
        case 0x2ae7b8u: goto label_2ae7b8;
        case 0x2ae7bcu: goto label_2ae7bc;
        case 0x2ae7c0u: goto label_2ae7c0;
        case 0x2ae7c4u: goto label_2ae7c4;
        case 0x2ae7c8u: goto label_2ae7c8;
        case 0x2ae7ccu: goto label_2ae7cc;
        case 0x2ae7d0u: goto label_2ae7d0;
        case 0x2ae7d4u: goto label_2ae7d4;
        case 0x2ae7d8u: goto label_2ae7d8;
        case 0x2ae7dcu: goto label_2ae7dc;
        case 0x2ae7e0u: goto label_2ae7e0;
        case 0x2ae7e4u: goto label_2ae7e4;
        case 0x2ae7e8u: goto label_2ae7e8;
        case 0x2ae7ecu: goto label_2ae7ec;
        case 0x2ae7f0u: goto label_2ae7f0;
        case 0x2ae7f4u: goto label_2ae7f4;
        case 0x2ae7f8u: goto label_2ae7f8;
        case 0x2ae7fcu: goto label_2ae7fc;
        case 0x2ae800u: goto label_2ae800;
        case 0x2ae804u: goto label_2ae804;
        case 0x2ae808u: goto label_2ae808;
        case 0x2ae80cu: goto label_2ae80c;
        case 0x2ae810u: goto label_2ae810;
        case 0x2ae814u: goto label_2ae814;
        case 0x2ae818u: goto label_2ae818;
        case 0x2ae81cu: goto label_2ae81c;
        case 0x2ae820u: goto label_2ae820;
        case 0x2ae824u: goto label_2ae824;
        case 0x2ae828u: goto label_2ae828;
        case 0x2ae82cu: goto label_2ae82c;
        case 0x2ae830u: goto label_2ae830;
        case 0x2ae834u: goto label_2ae834;
        case 0x2ae838u: goto label_2ae838;
        case 0x2ae83cu: goto label_2ae83c;
        case 0x2ae840u: goto label_2ae840;
        case 0x2ae844u: goto label_2ae844;
        case 0x2ae848u: goto label_2ae848;
        case 0x2ae84cu: goto label_2ae84c;
        case 0x2ae850u: goto label_2ae850;
        case 0x2ae854u: goto label_2ae854;
        case 0x2ae858u: goto label_2ae858;
        case 0x2ae85cu: goto label_2ae85c;
        case 0x2ae860u: goto label_2ae860;
        case 0x2ae864u: goto label_2ae864;
        case 0x2ae868u: goto label_2ae868;
        case 0x2ae86cu: goto label_2ae86c;
        case 0x2ae870u: goto label_2ae870;
        case 0x2ae874u: goto label_2ae874;
        case 0x2ae878u: goto label_2ae878;
        case 0x2ae87cu: goto label_2ae87c;
        case 0x2ae880u: goto label_2ae880;
        case 0x2ae884u: goto label_2ae884;
        case 0x2ae888u: goto label_2ae888;
        case 0x2ae88cu: goto label_2ae88c;
        case 0x2ae890u: goto label_2ae890;
        case 0x2ae894u: goto label_2ae894;
        case 0x2ae898u: goto label_2ae898;
        case 0x2ae89cu: goto label_2ae89c;
        case 0x2ae8a0u: goto label_2ae8a0;
        case 0x2ae8a4u: goto label_2ae8a4;
        case 0x2ae8a8u: goto label_2ae8a8;
        case 0x2ae8acu: goto label_2ae8ac;
        case 0x2ae8b0u: goto label_2ae8b0;
        case 0x2ae8b4u: goto label_2ae8b4;
        case 0x2ae8b8u: goto label_2ae8b8;
        case 0x2ae8bcu: goto label_2ae8bc;
        case 0x2ae8c0u: goto label_2ae8c0;
        case 0x2ae8c4u: goto label_2ae8c4;
        case 0x2ae8c8u: goto label_2ae8c8;
        case 0x2ae8ccu: goto label_2ae8cc;
        case 0x2ae8d0u: goto label_2ae8d0;
        case 0x2ae8d4u: goto label_2ae8d4;
        case 0x2ae8d8u: goto label_2ae8d8;
        case 0x2ae8dcu: goto label_2ae8dc;
        case 0x2ae8e0u: goto label_2ae8e0;
        case 0x2ae8e4u: goto label_2ae8e4;
        case 0x2ae8e8u: goto label_2ae8e8;
        case 0x2ae8ecu: goto label_2ae8ec;
        case 0x2ae8f0u: goto label_2ae8f0;
        case 0x2ae8f4u: goto label_2ae8f4;
        case 0x2ae8f8u: goto label_2ae8f8;
        case 0x2ae8fcu: goto label_2ae8fc;
        case 0x2ae900u: goto label_2ae900;
        case 0x2ae904u: goto label_2ae904;
        case 0x2ae908u: goto label_2ae908;
        case 0x2ae90cu: goto label_2ae90c;
        case 0x2ae910u: goto label_2ae910;
        case 0x2ae914u: goto label_2ae914;
        case 0x2ae918u: goto label_2ae918;
        case 0x2ae91cu: goto label_2ae91c;
        case 0x2ae920u: goto label_2ae920;
        case 0x2ae924u: goto label_2ae924;
        case 0x2ae928u: goto label_2ae928;
        case 0x2ae92cu: goto label_2ae92c;
        case 0x2ae930u: goto label_2ae930;
        case 0x2ae934u: goto label_2ae934;
        case 0x2ae938u: goto label_2ae938;
        case 0x2ae93cu: goto label_2ae93c;
        case 0x2ae940u: goto label_2ae940;
        case 0x2ae944u: goto label_2ae944;
        case 0x2ae948u: goto label_2ae948;
        case 0x2ae94cu: goto label_2ae94c;
        case 0x2ae950u: goto label_2ae950;
        case 0x2ae954u: goto label_2ae954;
        case 0x2ae958u: goto label_2ae958;
        case 0x2ae95cu: goto label_2ae95c;
        case 0x2ae960u: goto label_2ae960;
        case 0x2ae964u: goto label_2ae964;
        case 0x2ae968u: goto label_2ae968;
        case 0x2ae96cu: goto label_2ae96c;
        case 0x2ae970u: goto label_2ae970;
        case 0x2ae974u: goto label_2ae974;
        case 0x2ae978u: goto label_2ae978;
        case 0x2ae97cu: goto label_2ae97c;
        case 0x2ae980u: goto label_2ae980;
        case 0x2ae984u: goto label_2ae984;
        case 0x2ae988u: goto label_2ae988;
        case 0x2ae98cu: goto label_2ae98c;
        case 0x2ae990u: goto label_2ae990;
        case 0x2ae994u: goto label_2ae994;
        case 0x2ae998u: goto label_2ae998;
        case 0x2ae99cu: goto label_2ae99c;
        case 0x2ae9a0u: goto label_2ae9a0;
        case 0x2ae9a4u: goto label_2ae9a4;
        case 0x2ae9a8u: goto label_2ae9a8;
        case 0x2ae9acu: goto label_2ae9ac;
        case 0x2ae9b0u: goto label_2ae9b0;
        case 0x2ae9b4u: goto label_2ae9b4;
        case 0x2ae9b8u: goto label_2ae9b8;
        case 0x2ae9bcu: goto label_2ae9bc;
        case 0x2ae9c0u: goto label_2ae9c0;
        case 0x2ae9c4u: goto label_2ae9c4;
        case 0x2ae9c8u: goto label_2ae9c8;
        case 0x2ae9ccu: goto label_2ae9cc;
        case 0x2ae9d0u: goto label_2ae9d0;
        case 0x2ae9d4u: goto label_2ae9d4;
        case 0x2ae9d8u: goto label_2ae9d8;
        case 0x2ae9dcu: goto label_2ae9dc;
        case 0x2ae9e0u: goto label_2ae9e0;
        case 0x2ae9e4u: goto label_2ae9e4;
        case 0x2ae9e8u: goto label_2ae9e8;
        case 0x2ae9ecu: goto label_2ae9ec;
        case 0x2ae9f0u: goto label_2ae9f0;
        case 0x2ae9f4u: goto label_2ae9f4;
        case 0x2ae9f8u: goto label_2ae9f8;
        case 0x2ae9fcu: goto label_2ae9fc;
        case 0x2aea00u: goto label_2aea00;
        case 0x2aea04u: goto label_2aea04;
        case 0x2aea08u: goto label_2aea08;
        case 0x2aea0cu: goto label_2aea0c;
        case 0x2aea10u: goto label_2aea10;
        case 0x2aea14u: goto label_2aea14;
        case 0x2aea18u: goto label_2aea18;
        case 0x2aea1cu: goto label_2aea1c;
        case 0x2aea20u: goto label_2aea20;
        case 0x2aea24u: goto label_2aea24;
        case 0x2aea28u: goto label_2aea28;
        case 0x2aea2cu: goto label_2aea2c;
        case 0x2aea30u: goto label_2aea30;
        case 0x2aea34u: goto label_2aea34;
        case 0x2aea38u: goto label_2aea38;
        case 0x2aea3cu: goto label_2aea3c;
        case 0x2aea40u: goto label_2aea40;
        case 0x2aea44u: goto label_2aea44;
        case 0x2aea48u: goto label_2aea48;
        case 0x2aea4cu: goto label_2aea4c;
        case 0x2aea50u: goto label_2aea50;
        case 0x2aea54u: goto label_2aea54;
        case 0x2aea58u: goto label_2aea58;
        case 0x2aea5cu: goto label_2aea5c;
        case 0x2aea60u: goto label_2aea60;
        case 0x2aea64u: goto label_2aea64;
        case 0x2aea68u: goto label_2aea68;
        case 0x2aea6cu: goto label_2aea6c;
        case 0x2aea70u: goto label_2aea70;
        case 0x2aea74u: goto label_2aea74;
        case 0x2aea78u: goto label_2aea78;
        case 0x2aea7cu: goto label_2aea7c;
        case 0x2aea80u: goto label_2aea80;
        case 0x2aea84u: goto label_2aea84;
        case 0x2aea88u: goto label_2aea88;
        case 0x2aea8cu: goto label_2aea8c;
        case 0x2aea90u: goto label_2aea90;
        case 0x2aea94u: goto label_2aea94;
        case 0x2aea98u: goto label_2aea98;
        case 0x2aea9cu: goto label_2aea9c;
        case 0x2aeaa0u: goto label_2aeaa0;
        case 0x2aeaa4u: goto label_2aeaa4;
        case 0x2aeaa8u: goto label_2aeaa8;
        case 0x2aeaacu: goto label_2aeaac;
        case 0x2aeab0u: goto label_2aeab0;
        case 0x2aeab4u: goto label_2aeab4;
        case 0x2aeab8u: goto label_2aeab8;
        case 0x2aeabcu: goto label_2aeabc;
        case 0x2aeac0u: goto label_2aeac0;
        case 0x2aeac4u: goto label_2aeac4;
        case 0x2aeac8u: goto label_2aeac8;
        case 0x2aeaccu: goto label_2aeacc;
        case 0x2aead0u: goto label_2aead0;
        case 0x2aead4u: goto label_2aead4;
        case 0x2aead8u: goto label_2aead8;
        case 0x2aeadcu: goto label_2aeadc;
        case 0x2aeae0u: goto label_2aeae0;
        case 0x2aeae4u: goto label_2aeae4;
        case 0x2aeae8u: goto label_2aeae8;
        case 0x2aeaecu: goto label_2aeaec;
        case 0x2aeaf0u: goto label_2aeaf0;
        case 0x2aeaf4u: goto label_2aeaf4;
        case 0x2aeaf8u: goto label_2aeaf8;
        case 0x2aeafcu: goto label_2aeafc;
        case 0x2aeb00u: goto label_2aeb00;
        case 0x2aeb04u: goto label_2aeb04;
        case 0x2aeb08u: goto label_2aeb08;
        case 0x2aeb0cu: goto label_2aeb0c;
        case 0x2aeb10u: goto label_2aeb10;
        case 0x2aeb14u: goto label_2aeb14;
        case 0x2aeb18u: goto label_2aeb18;
        case 0x2aeb1cu: goto label_2aeb1c;
        case 0x2aeb20u: goto label_2aeb20;
        case 0x2aeb24u: goto label_2aeb24;
        case 0x2aeb28u: goto label_2aeb28;
        case 0x2aeb2cu: goto label_2aeb2c;
        case 0x2aeb30u: goto label_2aeb30;
        case 0x2aeb34u: goto label_2aeb34;
        case 0x2aeb38u: goto label_2aeb38;
        case 0x2aeb3cu: goto label_2aeb3c;
        case 0x2aeb40u: goto label_2aeb40;
        case 0x2aeb44u: goto label_2aeb44;
        case 0x2aeb48u: goto label_2aeb48;
        case 0x2aeb4cu: goto label_2aeb4c;
        case 0x2aeb50u: goto label_2aeb50;
        case 0x2aeb54u: goto label_2aeb54;
        case 0x2aeb58u: goto label_2aeb58;
        case 0x2aeb5cu: goto label_2aeb5c;
        case 0x2aeb60u: goto label_2aeb60;
        case 0x2aeb64u: goto label_2aeb64;
        case 0x2aeb68u: goto label_2aeb68;
        case 0x2aeb6cu: goto label_2aeb6c;
        case 0x2aeb70u: goto label_2aeb70;
        case 0x2aeb74u: goto label_2aeb74;
        case 0x2aeb78u: goto label_2aeb78;
        case 0x2aeb7cu: goto label_2aeb7c;
        case 0x2aeb80u: goto label_2aeb80;
        case 0x2aeb84u: goto label_2aeb84;
        case 0x2aeb88u: goto label_2aeb88;
        case 0x2aeb8cu: goto label_2aeb8c;
        case 0x2aeb90u: goto label_2aeb90;
        case 0x2aeb94u: goto label_2aeb94;
        case 0x2aeb98u: goto label_2aeb98;
        case 0x2aeb9cu: goto label_2aeb9c;
        case 0x2aeba0u: goto label_2aeba0;
        case 0x2aeba4u: goto label_2aeba4;
        case 0x2aeba8u: goto label_2aeba8;
        case 0x2aebacu: goto label_2aebac;
        case 0x2aebb0u: goto label_2aebb0;
        case 0x2aebb4u: goto label_2aebb4;
        case 0x2aebb8u: goto label_2aebb8;
        case 0x2aebbcu: goto label_2aebbc;
        case 0x2aebc0u: goto label_2aebc0;
        case 0x2aebc4u: goto label_2aebc4;
        case 0x2aebc8u: goto label_2aebc8;
        case 0x2aebccu: goto label_2aebcc;
        case 0x2aebd0u: goto label_2aebd0;
        case 0x2aebd4u: goto label_2aebd4;
        case 0x2aebd8u: goto label_2aebd8;
        case 0x2aebdcu: goto label_2aebdc;
        case 0x2aebe0u: goto label_2aebe0;
        case 0x2aebe4u: goto label_2aebe4;
        case 0x2aebe8u: goto label_2aebe8;
        case 0x2aebecu: goto label_2aebec;
        case 0x2aebf0u: goto label_2aebf0;
        case 0x2aebf4u: goto label_2aebf4;
        default: break;
    }

    ctx->pc = 0x2ae2e8u;

label_2ae2e8:
    // 0x2ae2e8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ae2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2ae2ec:
    // 0x2ae2ec: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2ae2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2ae2f0:
    // 0x2ae2f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ae2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ae2f4:
    // 0x2ae2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae2f8:
    // 0x2ae2f8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2ae2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2ae2fc:
    // 0x2ae2fc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2ae2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2ae300:
    // 0x2ae300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae304:
    // 0x2ae304: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2ae304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2ae308:
    // 0x2ae308: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ae308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ae30c:
    // 0x2ae30c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ae30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ae310:
    // 0x2ae310: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ae310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ae314:
    // 0x2ae314: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2ae314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2ae318:
    // 0x2ae318: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2ae318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2ae31c:
    // 0x2ae31c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2ae31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2ae320:
    // 0x2ae320: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2ae320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2ae324:
    // 0x2ae324: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ae324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2ae328:
    // 0x2ae328: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2ae328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2ae32c:
    // 0x2ae32c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ae32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ae330:
    // 0x2ae330: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2ae330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2ae334:
    // 0x2ae334: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ae334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae338:
    // 0x2ae338: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ae338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ae33c:
    // 0x2ae33c: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x2ae33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2ae340:
    // 0x2ae340: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2ae340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae344:
    // 0x2ae344: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2ae344u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ae348:
    // 0x2ae348: 0x3b82b  sltu        $s7, $zero, $v1
    ctx->pc = 0x2ae348u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ae34c:
    // 0x2ae34c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2ae350:
    // 0x2ae350: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x2ae350u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ae354:
    // 0x2ae354: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2ae358:
    // 0x2ae358: 0x40f809  jalr        $v0
label_2ae35c:
    if (ctx->pc == 0x2AE35Cu) {
        ctx->pc = 0x2AE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE358u;
        // 0x2ae35c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE360u;
        goto label_2ae360;
    }
    ctx->pc = 0x2AE358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AE360u);
        ctx->pc = 0x2AE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE358u;
        // 0x2ae35c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE358u, 0x2AE360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE360u;
label_2ae360:
    // 0x2ae360: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2ae360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2ae364:
    // 0x2ae364: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2ae368:
    if (ctx->pc == 0x2AE368u) {
        ctx->pc = 0x2AE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE364u;
        // 0x2ae368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE36Cu;
        goto label_2ae36c;
    }
    ctx->pc = 0x2AE364u;
    {
        const bool branch_taken_0x2ae364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae364) {
            ctx->pc = 0x2AE368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE364u;
            // 0x2ae368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE37Cu;
            goto label_2ae37c;
        }
    }
    ctx->pc = 0x2AE36Cu;
label_2ae36c:
    // 0x2ae36c: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x2ae36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_2ae370:
    // 0x2ae370: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ae370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2ae374:
    // 0x2ae374: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ae378:
    if (ctx->pc == 0x2AE378u) {
        ctx->pc = 0x2AE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE374u;
        // 0x2ae378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE37Cu;
        goto label_2ae37c;
    }
    ctx->pc = 0x2AE374u;
    {
        const bool branch_taken_0x2ae374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae374) {
            ctx->pc = 0x2AE378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE374u;
            // 0x2ae378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE37Cu;
            goto label_2ae37c;
        }
    }
    ctx->pc = 0x2AE37Cu;
label_2ae37c:
    // 0x2ae37c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2ae380:
    if (ctx->pc == 0x2AE380u) {
        ctx->pc = 0x2AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE37Cu;
        // 0x2ae380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE384u;
        goto label_2ae384;
    }
    ctx->pc = 0x2AE37Cu;
    {
        const bool branch_taken_0x2ae37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE37Cu;
        // 0x2ae380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae37c) {
            ctx->pc = 0x2AE3BCu;
            goto label_2ae3bc;
        }
    }
    ctx->pc = 0x2AE384u;
label_2ae384:
    // 0x2ae384: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ae384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae388:
    // 0x2ae388: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
label_2ae38c:
    if (ctx->pc == 0x2AE38Cu) {
        ctx->pc = 0x2AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE388u;
        // 0x2ae38c: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE390u;
        goto label_2ae390;
    }
    ctx->pc = 0x2AE388u;
    {
        const bool branch_taken_0x2ae388 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE388u;
        // 0x2ae38c: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae388) {
            ctx->pc = 0x2AE39Cu;
            goto label_2ae39c;
        }
    }
    ctx->pc = 0x2AE390u;
label_2ae390:
    // 0x2ae390: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ae390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae394:
    // 0x2ae394: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ae394u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae398:
    // 0x2ae398: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2ae398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2ae39c:
    // 0x2ae39c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ae39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ae3a0:
    // 0x2ae3a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ae3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ae3a4:
    // 0x2ae3a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ae3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ae3a8:
    // 0x2ae3a8: 0x40f809  jalr        $v0
label_2ae3ac:
    if (ctx->pc == 0x2AE3ACu) {
        ctx->pc = 0x2AE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3A8u;
        // 0x2ae3ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE3B0u;
        goto label_2ae3b0;
    }
    ctx->pc = 0x2AE3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AE3B0u);
        ctx->pc = 0x2AE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3A8u;
        // 0x2ae3ac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3A8u, 0x2AE3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE3B0u;
label_2ae3b0:
    // 0x2ae3b0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2ae3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2ae3b4:
    // 0x2ae3b4: 0xe6750014  swc1        $f21, 0x14($s3)
    ctx->pc = 0x2ae3b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_2ae3b8:
    // 0x2ae3b8: 0xa260001c  sb          $zero, 0x1C($s3)
    ctx->pc = 0x2ae3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 0));
label_2ae3bc:
    // 0x2ae3bc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae3c0:
    // 0x2ae3c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae3c4:
    // 0x2ae3c4: 0x26b20090  addiu       $s2, $s5, 0x90
    ctx->pc = 0x2ae3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_2ae3c8:
    // 0x2ae3c8: 0xc0a3fd6  jal         func_28FF58
label_2ae3cc:
    if (ctx->pc == 0x2AE3CCu) {
        ctx->pc = 0x2AE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3C8u;
        // 0x2ae3cc: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE3D0u;
        goto label_2ae3d0;
    }
    ctx->pc = 0x2AE3C8u;
    SET_GPR_U32(ctx, 31, 0x2AE3D0u);
    ctx->pc = 0x2AE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3C8u;
    // 0x2ae3cc: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x2AE3C8u, 0x2AE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3D0u;
label_2ae3d0:
    // 0x2ae3d0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2ae3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2ae3d4:
    // 0x2ae3d4: 0xafb20058  sw          $s2, 0x58($sp)
    ctx->pc = 0x2ae3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 18));
label_2ae3d8:
    // 0x2ae3d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae3dc:
    // 0x2ae3dc: 0xc087502  jal         func_21D408
label_2ae3e0:
    if (ctx->pc == 0x2AE3E0u) {
        ctx->pc = 0x2AE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3DCu;
        // 0x2ae3e0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE3E4u;
        goto label_2ae3e4;
    }
    ctx->pc = 0x2AE3DCu;
    SET_GPR_U32(ctx, 31, 0x2AE3E4u);
    ctx->pc = 0x2AE3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3DCu;
    // 0x2ae3e0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AE3DCu, 0x2AE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3E4u;
label_2ae3e4:
    // 0x2ae3e4: 0xc0a2af0  jal         func_28ABC0
label_2ae3e8:
    if (ctx->pc == 0x2AE3E8u) {
        ctx->pc = 0x2AE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3E4u;
        // 0x2ae3e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE3ECu;
        goto label_2ae3ec;
    }
    ctx->pc = 0x2AE3E4u;
    SET_GPR_U32(ctx, 31, 0x2AE3ECu);
    ctx->pc = 0x2AE3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3E4u;
    // 0x2ae3e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2AE3E4u, 0x2AE3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3ECu;
label_2ae3ec:
    // 0x2ae3ec: 0xafb10054  sw          $s1, 0x54($sp)
    ctx->pc = 0x2ae3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
label_2ae3f0:
    // 0x2ae3f0: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2ae3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2ae3f4:
    // 0x2ae3f4: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2ae3f4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ae3f8:
    // 0x2ae3f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ae3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ae3fc:
    // 0x2ae3fc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2ae3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2ae400:
    // 0x2ae400: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ae404:
    // 0x2ae404: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ae408:
    // 0x2ae408: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ae408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae40c:
    // 0x2ae40c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ae40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae410:
    // 0x2ae410: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2ae410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2ae414:
    // 0x2ae414: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2ae418:
    // 0x2ae418: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ae41c:
    // 0x2ae41c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ae420:
    // 0x2ae420: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ae420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae424:
    // 0x2ae424: 0xc0cdb38  jal         func_336CE0
label_2ae428:
    if (ctx->pc == 0x2AE428u) {
        ctx->pc = 0x2AE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE424u;
        // 0x2ae428: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE42Cu;
        goto label_2ae42c;
    }
    ctx->pc = 0x2AE424u;
    SET_GPR_U32(ctx, 31, 0x2AE42Cu);
    ctx->pc = 0x2AE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE424u;
    // 0x2ae428: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AE424u, 0x2AE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE42Cu;
label_2ae42c:
    // 0x2ae42c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ae42cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ae430:
    // 0x2ae430: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ae430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae434:
    // 0x2ae434: 0xc088fa8  jal         func_223EA0
label_2ae438:
    if (ctx->pc == 0x2AE438u) {
        ctx->pc = 0x2AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE434u;
        // 0x2ae438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE43Cu;
        goto label_2ae43c;
    }
    ctx->pc = 0x2AE434u;
    SET_GPR_U32(ctx, 31, 0x2AE43Cu);
    ctx->pc = 0x2AE438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE434u;
    // 0x2ae438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2AE434u, 0x2AE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE43Cu;
label_2ae43c:
    // 0x2ae43c: 0x54400132  bnel        $v0, $zero, . + 4 + (0x132 << 2)
label_2ae440:
    if (ctx->pc == 0x2AE440u) {
        ctx->pc = 0x2AE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE43Cu;
        // 0x2ae440: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE444u;
        goto label_2ae444;
    }
    ctx->pc = 0x2AE43Cu;
    {
        const bool branch_taken_0x2ae43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae43c) {
            ctx->pc = 0x2AE440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE43Cu;
            // 0x2ae440: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE908u;
            goto label_2ae908;
        }
    }
    ctx->pc = 0x2AE444u;
label_2ae444:
    // 0x2ae444: 0xc089000  jal         func_224000
label_2ae448:
    if (ctx->pc == 0x2AE448u) {
        ctx->pc = 0x2AE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE444u;
        // 0x2ae448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE44Cu;
        goto label_2ae44c;
    }
    ctx->pc = 0x2AE444u;
    SET_GPR_U32(ctx, 31, 0x2AE44Cu);
    ctx->pc = 0x2AE448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE444u;
    // 0x2ae448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2AE444u, 0x2AE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE44Cu;
label_2ae44c:
    // 0x2ae44c: 0x5440012e  bnel        $v0, $zero, . + 4 + (0x12E << 2)
label_2ae450:
    if (ctx->pc == 0x2AE450u) {
        ctx->pc = 0x2AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE44Cu;
        // 0x2ae450: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE454u;
        goto label_2ae454;
    }
    ctx->pc = 0x2AE44Cu;
    {
        const bool branch_taken_0x2ae44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae44c) {
            ctx->pc = 0x2AE450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE44Cu;
            // 0x2ae450: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE908u;
            goto label_2ae908;
        }
    }
    ctx->pc = 0x2AE454u;
label_2ae454:
    // 0x2ae454: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae458:
    // 0x2ae458: 0x908202d3  lbu         $v0, 0x2D3($a0)
    ctx->pc = 0x2ae458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 723)));
label_2ae45c:
    // 0x2ae45c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ae45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ae460:
    // 0x2ae460: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_2ae464:
    if (ctx->pc == 0x2AE464u) {
        ctx->pc = 0x2AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE460u;
        // 0x2ae464: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE468u;
        goto label_2ae468;
    }
    ctx->pc = 0x2AE460u;
    {
        const bool branch_taken_0x2ae460 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE460u;
        // 0x2ae464: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae460) {
            ctx->pc = 0x2AE484u;
            goto label_2ae484;
        }
    }
    ctx->pc = 0x2AE468u;
label_2ae468:
    // 0x2ae468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae46c:
    // 0x2ae46c: 0x52e20006  beql        $s7, $v0, . + 4 + (0x6 << 2)
label_2ae470:
    if (ctx->pc == 0x2AE470u) {
        ctx->pc = 0x2AE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE46Cu;
        // 0x2ae470: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE474u;
        goto label_2ae474;
    }
    ctx->pc = 0x2AE46Cu;
    {
        const bool branch_taken_0x2ae46c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ae46c) {
            ctx->pc = 0x2AE470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE46Cu;
            // 0x2ae470: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE488u;
            goto label_2ae488;
        }
    }
    ctx->pc = 0x2AE474u;
label_2ae474:
    // 0x2ae474: 0x53c00004  beql        $fp, $zero, . + 4 + (0x4 << 2)
label_2ae478:
    if (ctx->pc == 0x2AE478u) {
        ctx->pc = 0x2AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE474u;
        // 0x2ae478: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE47Cu;
        goto label_2ae47c;
    }
    ctx->pc = 0x2AE474u;
    {
        const bool branch_taken_0x2ae474 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae474) {
            ctx->pc = 0x2AE478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE474u;
            // 0x2ae478: 0xa0a002d3  sb          $zero, 0x2D3($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE488u;
            goto label_2ae488;
        }
    }
    ctx->pc = 0x2AE47Cu;
label_2ae47c:
    // 0x2ae47c: 0x546000ec  bnel        $v1, $zero, . + 4 + (0xEC << 2)
label_2ae480:
    if (ctx->pc == 0x2AE480u) {
        ctx->pc = 0x2AE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE47Cu;
        // 0x2ae480: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE484u;
        goto label_2ae484;
    }
    ctx->pc = 0x2AE47Cu;
    {
        const bool branch_taken_0x2ae47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae47c) {
            ctx->pc = 0x2AE480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE47Cu;
            // 0x2ae480: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE830u;
            goto label_2ae830;
        }
    }
    ctx->pc = 0x2AE484u;
label_2ae484:
    // 0x2ae484: 0xa0a002d3  sb          $zero, 0x2D3($a1)
    ctx->pc = 0x2ae484u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 723), (uint8_t)GPR_U32(ctx, 0));
label_2ae488:
    // 0x2ae488: 0xc089bfc  jal         func_226FF0
label_2ae48c:
    if (ctx->pc == 0x2AE48Cu) {
        ctx->pc = 0x2AE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE488u;
        // 0x2ae48c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE490u;
        goto label_2ae490;
    }
    ctx->pc = 0x2AE488u;
    SET_GPR_U32(ctx, 31, 0x2AE490u);
    ctx->pc = 0x2AE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE488u;
    // 0x2ae48c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2AE488u, 0x2AE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE490u;
label_2ae490:
    // 0x2ae490: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_2ae494:
    if (ctx->pc == 0x2AE494u) {
        ctx->pc = 0x2AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE490u;
        // 0x2ae494: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE498u;
        goto label_2ae498;
    }
    ctx->pc = 0x2AE490u;
    {
        const bool branch_taken_0x2ae490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE490u;
        // 0x2ae494: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae490) {
            ctx->pc = 0x2AE5C8u;
            goto label_2ae5c8;
        }
    }
    ctx->pc = 0x2AE498u;
label_2ae498:
    // 0x2ae498: 0xc088f88  jal         func_223E20
label_2ae49c:
    if (ctx->pc == 0x2AE49Cu) {
        ctx->pc = 0x2AE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE498u;
        // 0x2ae49c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE4A0u;
        goto label_2ae4a0;
    }
    ctx->pc = 0x2AE498u;
    SET_GPR_U32(ctx, 31, 0x2AE4A0u);
    ctx->pc = 0x2AE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE498u;
    // 0x2ae49c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x2AE498u, 0x2AE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4A0u;
label_2ae4a0:
    // 0x2ae4a0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2ae4a4:
    if (ctx->pc == 0x2AE4A4u) {
        ctx->pc = 0x2AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A0u;
        // 0x2ae4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE4A8u;
        goto label_2ae4a8;
    }
    ctx->pc = 0x2AE4A0u;
    {
        const bool branch_taken_0x2ae4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4A0u;
        // 0x2ae4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4a0) {
            ctx->pc = 0x2AE5C8u;
            goto label_2ae5c8;
        }
    }
    ctx->pc = 0x2AE4A8u;
label_2ae4a8:
    // 0x2ae4a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ae4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2ae4ac:
    // 0x2ae4ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae4b0:
    // 0x2ae4b0: 0x0  nop
    ctx->pc = 0x2ae4b0u;
    // NOP
label_2ae4b4:
    // 0x2ae4b4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2ae4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2ae4b8:
    // 0x2ae4b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ae4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2ae4bc:
    // 0x2ae4bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ae4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae4c0:
    // 0x2ae4c0: 0x0  nop
    ctx->pc = 0x2ae4c0u;
    // NOP
label_2ae4c4:
    // 0x2ae4c4: 0x45000041  bc1f        . + 4 + (0x41 << 2)
label_2ae4c8:
    if (ctx->pc == 0x2AE4C8u) {
        ctx->pc = 0x2AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4C4u;
        // 0x2ae4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE4CCu;
        goto label_2ae4cc;
    }
    ctx->pc = 0x2AE4C4u;
    {
        const bool branch_taken_0x2ae4c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4C4u;
        // 0x2ae4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4c4) {
            ctx->pc = 0x2AE5CCu;
            goto label_2ae5cc;
        }
    }
    ctx->pc = 0x2AE4CCu;
label_2ae4cc:
    // 0x2ae4cc: 0xc0a4812  jal         func_292048
label_2ae4d0:
    if (ctx->pc == 0x2AE4D0u) {
        ctx->pc = 0x2AE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4CCu;
        // 0x2ae4d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE4D4u;
        goto label_2ae4d4;
    }
    ctx->pc = 0x2AE4CCu;
    SET_GPR_U32(ctx, 31, 0x2AE4D4u);
    ctx->pc = 0x2AE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4CCu;
    // 0x2ae4d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292048u, 0x2AE4CCu, 0x2AE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4D4u;
label_2ae4d4:
    // 0x2ae4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae4d8:
    // 0x2ae4d8: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_2ae4dc:
    if (ctx->pc == 0x2AE4DCu) {
        ctx->pc = 0x2AE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4D8u;
        // 0x2ae4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE4E0u;
        goto label_2ae4e0;
    }
    ctx->pc = 0x2AE4D8u;
    {
        const bool branch_taken_0x2ae4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4D8u;
        // 0x2ae4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4d8) {
            ctx->pc = 0x2AE5C8u;
            goto label_2ae5c8;
        }
    }
    ctx->pc = 0x2AE4E0u;
label_2ae4e0:
    // 0x2ae4e0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2ae4e4:
    // 0x2ae4e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ae4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae4e8:
    // 0x2ae4e8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2ae4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2ae4ec:
    // 0x2ae4ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ae4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ae4f0:
    // 0x2ae4f0: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ae4f4:
    // 0x2ae4f4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ae4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ae4f8:
    // 0x2ae4f8: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2ae4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ae4fc:
    // 0x2ae4fc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2ae4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2ae500:
    // 0x2ae500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ae500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ae504:
    // 0x2ae504: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2ae504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2ae508:
    // 0x2ae508: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2ae508u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ae50c:
    // 0x2ae50c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ae50cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2ae510:
    // 0x2ae510: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ae510u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ae514:
    // 0x2ae514: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ae514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2ae518:
    // 0x2ae518: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2ae518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2ae51c:
    // 0x2ae51c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ae51cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ae520:
    // 0x2ae520: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ae520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ae524:
    // 0x2ae524: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ae524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ae528:
    // 0x2ae528: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ae528u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ae52c:
    // 0x2ae52c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2ae52cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ae530:
    // 0x2ae530: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ae530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ae534:
    // 0x2ae534: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ae534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ae538:
    // 0x2ae538: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2ae538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ae53c:
    // 0x2ae53c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2ae53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ae540:
    // 0x2ae540: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2ae540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ae544:
    // 0x2ae544: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2ae544u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2ae548:
    // 0x2ae548: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ae548u;
    // VWAITQ (Q already resolved in this runtime)
label_2ae54c:
    // 0x2ae54c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2ae54cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2ae550:
    // 0x2ae550: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2ae550u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_2ae554:
    // 0x2ae554: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2ae554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2ae558:
    // 0x2ae558: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ae558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2ae55c:
    // 0x2ae55c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2ae55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2ae560:
    // 0x2ae560: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2ae560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2ae564:
    // 0x2ae564: 0xc0a77de  jal         func_29DF78
label_2ae568:
    if (ctx->pc == 0x2AE568u) {
        ctx->pc = 0x2AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE564u;
        // 0x2ae568: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE56Cu;
        goto label_2ae56c;
    }
    ctx->pc = 0x2AE564u;
    SET_GPR_U32(ctx, 31, 0x2AE56Cu);
    ctx->pc = 0x2AE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE564u;
    // 0x2ae568: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DF78u, 0x2AE564u, 0x2AE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE56Cu;
label_2ae56c:
    // 0x2ae56c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2ae570:
    if (ctx->pc == 0x2AE570u) {
        ctx->pc = 0x2AE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE56Cu;
        // 0x2ae570: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE574u;
        goto label_2ae574;
    }
    ctx->pc = 0x2AE56Cu;
    {
        const bool branch_taken_0x2ae56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae56c) {
            ctx->pc = 0x2AE570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE56Cu;
            // 0x2ae570: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE5A8u;
            goto label_2ae5a8;
        }
    }
    ctx->pc = 0x2AE574u;
label_2ae574:
    // 0x2ae574: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2ae574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2ae578:
    // 0x2ae578: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ae57c:
    // 0x2ae57c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ae57cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ae580:
    // 0x2ae580: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2ae580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ae584:
    // 0x2ae584: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ae584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2ae588:
    // 0x2ae588: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ae588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ae58c:
    // 0x2ae58c: 0xc0cdb38  jal         func_336CE0
label_2ae590:
    if (ctx->pc == 0x2AE590u) {
        ctx->pc = 0x2AE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE58Cu;
        // 0x2ae590: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE594u;
        goto label_2ae594;
    }
    ctx->pc = 0x2AE58Cu;
    SET_GPR_U32(ctx, 31, 0x2AE594u);
    ctx->pc = 0x2AE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE58Cu;
    // 0x2ae590: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2AE58Cu, 0x2AE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE594u;
label_2ae594:
    // 0x2ae594: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ae594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae598:
    // 0x2ae598: 0x0  nop
    ctx->pc = 0x2ae598u;
    // NOP
label_2ae59c:
    // 0x2ae59c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2ae5a0:
    if (ctx->pc == 0x2AE5A0u) {
        ctx->pc = 0x2AE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE59Cu;
        // 0x2ae5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5A4u;
        goto label_2ae5a4;
    }
    ctx->pc = 0x2AE59Cu;
    {
        const bool branch_taken_0x2ae59c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE59Cu;
        // 0x2ae5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae59c) {
            ctx->pc = 0x2AE5C8u;
            goto label_2ae5c8;
        }
    }
    ctx->pc = 0x2AE5A4u;
label_2ae5a4:
    // 0x2ae5a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae5a8:
    // 0x2ae5a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5ac:
    // 0x2ae5ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ae5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2ae5b0:
    // 0x2ae5b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ae5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ae5b4:
    // 0x2ae5b4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2ae5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2ae5b8:
    // 0x2ae5b8: 0xc0a3892  jal         func_28E248
label_2ae5bc:
    if (ctx->pc == 0x2AE5BCu) {
        ctx->pc = 0x2AE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5B8u;
        // 0x2ae5bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5C0u;
        goto label_2ae5c0;
    }
    ctx->pc = 0x2AE5B8u;
    SET_GPR_U32(ctx, 31, 0x2AE5C0u);
    ctx->pc = 0x2AE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5B8u;
    // 0x2ae5bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2AE5B8u, 0x2AE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5C0u;
label_2ae5c0:
    // 0x2ae5c0: 0x1000017e  b           . + 4 + (0x17E << 2)
label_2ae5c4:
    if (ctx->pc == 0x2AE5C4u) {
        ctx->pc = 0x2AE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5C0u;
        // 0x2ae5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5C8u;
        goto label_2ae5c8;
    }
    ctx->pc = 0x2AE5C0u;
    {
        const bool branch_taken_0x2ae5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5C0u;
        // 0x2ae5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5c0) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE5C8u;
label_2ae5c8:
    // 0x2ae5c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ae5c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ae5cc:
    // 0x2ae5cc: 0xc0ab7a4  jal         func_2ADE90
label_2ae5d0:
    if (ctx->pc == 0x2AE5D0u) {
        ctx->pc = 0x2AE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5CCu;
        // 0x2ae5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5D4u;
        goto label_2ae5d4;
    }
    ctx->pc = 0x2AE5CCu;
    SET_GPR_U32(ctx, 31, 0x2AE5D4u);
    ctx->pc = 0x2AE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5CCu;
    // 0x2ae5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE90u, 0x2AE5CCu, 0x2AE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5D4u;
label_2ae5d4:
    // 0x2ae5d4: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_2ae5d8:
    if (ctx->pc == 0x2AE5D8u) {
        ctx->pc = 0x2AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5D4u;
        // 0x2ae5d8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5DCu;
        goto label_2ae5dc;
    }
    ctx->pc = 0x2AE5D4u;
    {
        const bool branch_taken_0x2ae5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5D4u;
        // 0x2ae5d8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5d4) {
            ctx->pc = 0x2AE7D0u;
            goto label_2ae7d0;
        }
    }
    ctx->pc = 0x2AE5DCu;
label_2ae5dc:
    // 0x2ae5dc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ae5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ae5e0:
    // 0x2ae5e0: 0xc0cd4ee  jal         func_3353B8
label_2ae5e4:
    if (ctx->pc == 0x2AE5E4u) {
        ctx->pc = 0x2AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5E0u;
        // 0x2ae5e4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE5E8u;
        goto label_2ae5e8;
    }
    ctx->pc = 0x2AE5E0u;
    SET_GPR_U32(ctx, 31, 0x2AE5E8u);
    ctx->pc = 0x2AE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5E0u;
    // 0x2ae5e4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2AE5E0u, 0x2AE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5E8u;
label_2ae5e8:
    // 0x2ae5e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5ec:
    // 0x2ae5ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ae5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5f0:
    // 0x2ae5f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5f4:
    // 0x2ae5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5f8:
    // 0x2ae5f8: 0xc0888a2  jal         func_222288
label_2ae5fc:
    if (ctx->pc == 0x2AE5FCu) {
        ctx->pc = 0x2AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5F8u;
        // 0x2ae5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE600u;
        goto label_2ae600;
    }
    ctx->pc = 0x2AE5F8u;
    SET_GPR_U32(ctx, 31, 0x2AE600u);
    ctx->pc = 0x2AE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5F8u;
    // 0x2ae5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2AE5F8u, 0x2AE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE600u;
label_2ae600:
    // 0x2ae600: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ae600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae604:
    // 0x2ae604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae608:
    // 0x2ae608: 0x16420068  bne         $s2, $v0, . + 4 + (0x68 << 2)
label_2ae60c:
    if (ctx->pc == 0x2AE60Cu) {
        ctx->pc = 0x2AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE608u;
        // 0x2ae60c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE610u;
        goto label_2ae610;
    }
    ctx->pc = 0x2AE608u;
    {
        const bool branch_taken_0x2ae608 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE608u;
        // 0x2ae60c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae608) {
            ctx->pc = 0x2AE7ACu;
            goto label_2ae7ac;
        }
    }
    ctx->pc = 0x2AE610u;
label_2ae610:
    // 0x2ae610: 0x17d2005e  bne         $fp, $s2, . + 4 + (0x5E << 2)
label_2ae614:
    if (ctx->pc == 0x2AE614u) {
        ctx->pc = 0x2AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE610u;
        // 0x2ae614: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE618u;
        goto label_2ae618;
    }
    ctx->pc = 0x2AE610u;
    {
        const bool branch_taken_0x2ae610 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 18));
        ctx->pc = 0x2AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE610u;
        // 0x2ae614: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae610) {
            ctx->pc = 0x2AE78Cu;
            goto label_2ae78c;
        }
    }
    ctx->pc = 0x2AE618u;
label_2ae618:
    // 0x2ae618: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x2ae618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_2ae61c:
    // 0x2ae61c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ae620:
    // 0x2ae620: 0x54820018  bnel        $a0, $v0, . + 4 + (0x18 << 2)
label_2ae624:
    if (ctx->pc == 0x2AE624u) {
        ctx->pc = 0x2AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE620u;
        // 0x2ae624: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE628u;
        goto label_2ae628;
    }
    ctx->pc = 0x2AE620u;
    {
        const bool branch_taken_0x2ae620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae620) {
            ctx->pc = 0x2AE624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE620u;
            // 0x2ae624: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE628u;
label_2ae628:
    // 0x2ae628: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ae628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae62c:
    // 0x2ae62c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ae62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ae630:
    // 0x2ae630: 0x54640014  bnel        $v1, $a0, . + 4 + (0x14 << 2)
label_2ae634:
    if (ctx->pc == 0x2AE634u) {
        ctx->pc = 0x2AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE630u;
        // 0x2ae634: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE638u;
        goto label_2ae638;
    }
    ctx->pc = 0x2AE630u;
    {
        const bool branch_taken_0x2ae630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ae630) {
            ctx->pc = 0x2AE634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE630u;
            // 0x2ae634: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE638u;
label_2ae638:
    // 0x2ae638: 0xc089bfc  jal         func_226FF0
label_2ae63c:
    if (ctx->pc == 0x2AE63Cu) {
        ctx->pc = 0x2AE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE638u;
        // 0x2ae63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE640u;
        goto label_2ae640;
    }
    ctx->pc = 0x2AE638u;
    SET_GPR_U32(ctx, 31, 0x2AE640u);
    ctx->pc = 0x2AE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE638u;
    // 0x2ae63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2AE638u, 0x2AE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE640u;
label_2ae640:
    // 0x2ae640: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2ae644:
    if (ctx->pc == 0x2AE644u) {
        ctx->pc = 0x2AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE640u;
        // 0x2ae644: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE648u;
        goto label_2ae648;
    }
    ctx->pc = 0x2AE640u;
    {
        const bool branch_taken_0x2ae640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae640) {
            ctx->pc = 0x2AE644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE640u;
            // 0x2ae644: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE648u;
label_2ae648:
    // 0x2ae648: 0xc08a0b6  jal         func_2282D8
label_2ae64c:
    if (ctx->pc == 0x2AE64Cu) {
        ctx->pc = 0x2AE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE648u;
        // 0x2ae64c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE650u;
        goto label_2ae650;
    }
    ctx->pc = 0x2AE648u;
    SET_GPR_U32(ctx, 31, 0x2AE650u);
    ctx->pc = 0x2AE64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE648u;
    // 0x2ae64c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282D8u, 0x2AE648u, 0x2AE650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE650u;
label_2ae650:
    // 0x2ae650: 0x545e000c  bnel        $v0, $fp, . + 4 + (0xC << 2)
label_2ae654:
    if (ctx->pc == 0x2AE654u) {
        ctx->pc = 0x2AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE650u;
        // 0x2ae654: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE658u;
        goto label_2ae658;
    }
    ctx->pc = 0x2AE650u;
    {
        const bool branch_taken_0x2ae650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2ae650) {
            ctx->pc = 0x2AE654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE650u;
            // 0x2ae654: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE658u;
label_2ae658:
    // 0x2ae658: 0xc0a367c  jal         func_28D9F0
label_2ae65c:
    if (ctx->pc == 0x2AE65Cu) {
        ctx->pc = 0x2AE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE658u;
        // 0x2ae65c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE660u;
        goto label_2ae660;
    }
    ctx->pc = 0x2AE658u;
    SET_GPR_U32(ctx, 31, 0x2AE660u);
    ctx->pc = 0x2AE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE658u;
    // 0x2ae65c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE658u, 0x2AE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE660u;
label_2ae660:
    // 0x2ae660: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2ae664:
    if (ctx->pc == 0x2AE664u) {
        ctx->pc = 0x2AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE660u;
        // 0x2ae664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE668u;
        goto label_2ae668;
    }
    ctx->pc = 0x2AE660u;
    {
        const bool branch_taken_0x2ae660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE660u;
        // 0x2ae664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae660) {
            ctx->pc = 0x2AE768u;
            goto label_2ae768;
        }
    }
    ctx->pc = 0x2AE668u;
label_2ae668:
    // 0x2ae668: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae66c:
    // 0x2ae66c: 0x240601dd  addiu       $a2, $zero, 0x1DD
    ctx->pc = 0x2ae66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
label_2ae670:
    // 0x2ae670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ae670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae674:
    // 0x2ae674: 0xc0be9b8  jal         func_2FA6E0
label_2ae678:
    if (ctx->pc == 0x2AE678u) {
        ctx->pc = 0x2AE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE674u;
        // 0x2ae678: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE67Cu;
        goto label_2ae67c;
    }
    ctx->pc = 0x2AE674u;
    SET_GPR_U32(ctx, 31, 0x2AE67Cu);
    ctx->pc = 0x2AE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE674u;
    // 0x2ae678: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6E0u, 0x2AE674u, 0x2AE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE67Cu;
label_2ae67c:
    // 0x2ae67c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2ae680:
    if (ctx->pc == 0x2AE680u) {
        ctx->pc = 0x2AE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE67Cu;
        // 0x2ae680: 0x9263001c  lbu         $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE684u;
        goto label_2ae684;
    }
    ctx->pc = 0x2AE67Cu;
    {
        const bool branch_taken_0x2ae67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE67Cu;
        // 0x2ae680: 0x9263001c  lbu         $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae67c) {
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE684u;
label_2ae684:
    // 0x2ae684: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ae684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae688:
    // 0x2ae688: 0x0  nop
    ctx->pc = 0x2ae688u;
    // NOP
label_2ae68c:
    // 0x2ae68c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_2ae690:
    if (ctx->pc == 0x2AE690u) {
        ctx->pc = 0x2AE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE68Cu;
        // 0x2ae690: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE694u;
        goto label_2ae694;
    }
    ctx->pc = 0x2AE68Cu;
    {
        const bool branch_taken_0x2ae68c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE68Cu;
        // 0x2ae690: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae68c) {
            ctx->pc = 0x2AE798u;
            goto label_2ae798;
        }
    }
    ctx->pc = 0x2AE694u;
label_2ae694:
    // 0x2ae694: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x2ae694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_2ae698:
    // 0x2ae698: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_2ae69c:
    if (ctx->pc == 0x2AE69Cu) {
        ctx->pc = 0x2AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE698u;
        // 0x2ae69c: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6A0u;
        goto label_2ae6a0;
    }
    ctx->pc = 0x2AE698u;
    {
        const bool branch_taken_0x2ae698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE698u;
        // 0x2ae69c: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae698) {
            ctx->pc = 0x2AE77Cu;
            goto label_2ae77c;
        }
    }
    ctx->pc = 0x2AE6A0u;
label_2ae6a0:
    // 0x2ae6a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2ae6a4:
    // 0x2ae6a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae6a8:
    // 0x2ae6a8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2ae6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2ae6ac:
    // 0x2ae6ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ae6b0:
    // 0x2ae6b0: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x2ae6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ae6b4:
    // 0x2ae6b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ae6b8:
    // 0x2ae6b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ae6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ae6bc:
    // 0x2ae6bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ae6bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae6c0:
    // 0x2ae6c0: 0xc087420  jal         func_21D080
label_2ae6c4:
    if (ctx->pc == 0x2AE6C4u) {
        ctx->pc = 0x2AE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6C0u;
        // 0x2ae6c4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6C8u;
        goto label_2ae6c8;
    }
    ctx->pc = 0x2AE6C0u;
    SET_GPR_U32(ctx, 31, 0x2AE6C8u);
    ctx->pc = 0x2AE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6C0u;
    // 0x2ae6c4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AE6C0u, 0x2AE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6C8u;
label_2ae6c8:
    // 0x2ae6c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2ae6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ae6cc:
    // 0x2ae6cc: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2ae6d0:
    // 0x2ae6d0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ae6d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2ae6d4:
    // 0x2ae6d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ae6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ae6d8:
    // 0x2ae6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae6dc:
    // 0x2ae6dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ae6dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2ae6e0:
    // 0x2ae6e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ae6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ae6e4:
    // 0x2ae6e4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ae6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ae6e8:
    // 0x2ae6e8: 0xc0a7cf2  jal         func_29F3C8
label_2ae6ec:
    if (ctx->pc == 0x2AE6ECu) {
        ctx->pc = 0x2AE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E8u;
        // 0x2ae6ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6F0u;
        goto label_2ae6f0;
    }
    ctx->pc = 0x2AE6E8u;
    SET_GPR_U32(ctx, 31, 0x2AE6F0u);
    ctx->pc = 0x2AE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6E8u;
    // 0x2ae6ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2AE6E8u, 0x2AE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6F0u;
label_2ae6f0:
    // 0x2ae6f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae6f4:
    // 0x2ae6f4: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_2ae6f8:
    if (ctx->pc == 0x2AE6F8u) {
        ctx->pc = 0x2AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6F4u;
        // 0x2ae6f8: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE6FCu;
        goto label_2ae6fc;
    }
    ctx->pc = 0x2AE6F4u;
    {
        const bool branch_taken_0x2ae6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6F4u;
        // 0x2ae6f8: 0x2e020032  sltiu       $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6f4) {
            ctx->pc = 0x2AE77Cu;
            goto label_2ae77c;
        }
    }
    ctx->pc = 0x2AE6FCu;
label_2ae6fc:
    // 0x2ae6fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2ae6fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae700:
    // 0x2ae700: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2ae700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2ae704:
    // 0x2ae704: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ae704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ae708:
    // 0x2ae708: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2ae708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2ae70c:
    // 0x2ae70c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2ae70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2ae710:
    // 0x2ae710: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2ae710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2ae714:
    // 0x2ae714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae718:
    // 0x2ae718: 0xc094904  jal         func_252410
label_2ae71c:
    if (ctx->pc == 0x2AE71Cu) {
        ctx->pc = 0x2AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE718u;
        // 0x2ae71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE720u;
        goto label_2ae720;
    }
    ctx->pc = 0x2AE718u;
    SET_GPR_U32(ctx, 31, 0x2AE720u);
    ctx->pc = 0x2AE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE718u;
    // 0x2ae71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2AE718u, 0x2AE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE720u;
label_2ae720:
    // 0x2ae720: 0xc08bfbc  jal         func_22FEF0
label_2ae724:
    if (ctx->pc == 0x2AE724u) {
        ctx->pc = 0x2AE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE720u;
        // 0x2ae724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE728u;
        goto label_2ae728;
    }
    ctx->pc = 0x2AE720u;
    SET_GPR_U32(ctx, 31, 0x2AE728u);
    ctx->pc = 0x2AE724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE720u;
    // 0x2ae724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AE720u, 0x2AE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE728u;
label_2ae728:
    // 0x2ae728: 0xc0a367c  jal         func_28D9F0
label_2ae72c:
    if (ctx->pc == 0x2AE72Cu) {
        ctx->pc = 0x2AE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE728u;
        // 0x2ae72c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE730u;
        goto label_2ae730;
    }
    ctx->pc = 0x2AE728u;
    SET_GPR_U32(ctx, 31, 0x2AE730u);
    ctx->pc = 0x2AE72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE728u;
    // 0x2ae72c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE728u, 0x2AE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE730u;
label_2ae730:
    // 0x2ae730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae734:
    // 0x2ae734: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2ae738:
    if (ctx->pc == 0x2AE738u) {
        ctx->pc = 0x2AE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE734u;
        // 0x2ae738: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE73Cu;
        goto label_2ae73c;
    }
    ctx->pc = 0x2AE734u;
    {
        const bool branch_taken_0x2ae734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE734u;
        // 0x2ae738: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae734) {
            ctx->pc = 0x2AE768u;
            goto label_2ae768;
        }
    }
    ctx->pc = 0x2AE73Cu;
label_2ae73c:
    // 0x2ae73c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae740:
    // 0x2ae740: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2ae740u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ae744:
    // 0x2ae744: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae748:
    // 0x2ae748: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2ae748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2ae74c:
    // 0x2ae74c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2ae74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2ae750:
    // 0x2ae750: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ae750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ae754:
    // 0x2ae754: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2ae754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae758:
    // 0x2ae758: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae75c:
    // 0x2ae75c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ae75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae760:
    // 0x2ae760: 0xc0bee7a  jal         func_2FB9E8
label_2ae764:
    if (ctx->pc == 0x2AE764u) {
        ctx->pc = 0x2AE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE760u;
        // 0x2ae764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE768u;
        goto label_2ae768;
    }
    ctx->pc = 0x2AE760u;
    SET_GPR_U32(ctx, 31, 0x2AE768u);
    ctx->pc = 0x2AE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE760u;
    // 0x2ae764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AE760u, 0x2AE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE768u;
label_2ae768:
    // 0x2ae768: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x2ae768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_2ae76c:
    // 0x2ae76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ae76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae770:
    // 0x2ae770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ae770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ae774:
    // 0x2ae774: 0x10000111  b           . + 4 + (0x111 << 2)
label_2ae778:
    if (ctx->pc == 0x2AE778u) {
        ctx->pc = 0x2AE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE774u;
        // 0x2ae778: 0xa263001c  sb          $v1, 0x1C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE77Cu;
        goto label_2ae77c;
    }
    ctx->pc = 0x2AE774u;
    {
        const bool branch_taken_0x2ae774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE774u;
        // 0x2ae778: 0xa263001c  sb          $v1, 0x1C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae774) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE77Cu;
label_2ae77c:
    // 0x2ae77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ae780:
    if (ctx->pc == 0x2AE780u) {
        ctx->pc = 0x2AE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE77Cu;
        // 0x2ae780: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE784u;
        goto label_2ae784;
    }
    ctx->pc = 0x2AE77Cu;
    {
        const bool branch_taken_0x2ae77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE77Cu;
        // 0x2ae780: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae77c) {
            ctx->pc = 0x2AE798u;
            goto label_2ae798;
        }
    }
    ctx->pc = 0x2AE784u;
label_2ae784:
    // 0x2ae784: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ae788:
    if (ctx->pc == 0x2AE788u) {
        ctx->pc = 0x2AE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE784u;
        // 0x2ae788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE78Cu;
        goto label_2ae78c;
    }
    ctx->pc = 0x2AE784u;
    {
        const bool branch_taken_0x2ae784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE784u;
        // 0x2ae788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae784) {
            ctx->pc = 0x2AE7B0u;
            goto label_2ae7b0;
        }
    }
    ctx->pc = 0x2AE78Cu;
label_2ae78c:
    // 0x2ae78c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2ae790:
    if (ctx->pc == 0x2AE790u) {
        ctx->pc = 0x2AE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE78Cu;
        // 0x2ae790: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE794u;
        goto label_2ae794;
    }
    ctx->pc = 0x2AE78Cu;
    {
        const bool branch_taken_0x2ae78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae78c) {
            ctx->pc = 0x2AE790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE78Cu;
            // 0x2ae790: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE7B0u;
            goto label_2ae7b0;
        }
    }
    ctx->pc = 0x2AE794u;
label_2ae794:
    // 0x2ae794: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_2ae798:
    // 0x2ae798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ae798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae79c:
    // 0x2ae79c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2ae79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ae7a0:
    // 0x2ae7a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ae7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ae7a4:
    // 0x2ae7a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ae7a8:
    if (ctx->pc == 0x2AE7A8u) {
        ctx->pc = 0x2AE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7A4u;
        // 0x2ae7a8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7ACu;
        goto label_2ae7ac;
    }
    ctx->pc = 0x2AE7A4u;
    {
        const bool branch_taken_0x2ae7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7A4u;
        // 0x2ae7a8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7a4) {
            ctx->pc = 0x2AE7B0u;
            goto label_2ae7b0;
        }
    }
    ctx->pc = 0x2AE7ACu;
label_2ae7ac:
    // 0x2ae7ac: 0x5e280b  movn        $a1, $v0, $fp
    ctx->pc = 0x2ae7acu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2ae7b0:
    // 0x2ae7b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ae7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7b4:
    // 0x2ae7b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ae7b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ae7b8:
    // 0x2ae7b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ae7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7bc:
    // 0x2ae7bc: 0xc0ab80a  jal         func_2AE028
label_2ae7c0:
    if (ctx->pc == 0x2AE7C0u) {
        ctx->pc = 0x2AE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7BCu;
        // 0x2ae7c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7C4u;
        goto label_2ae7c4;
    }
    ctx->pc = 0x2AE7BCu;
    SET_GPR_U32(ctx, 31, 0x2AE7C4u);
    ctx->pc = 0x2AE7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7BCu;
    // 0x2ae7c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE028u, 0x2AE7BCu, 0x2AE7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7C4u;
label_2ae7c4:
    // 0x2ae7c4: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x2ae7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_2ae7c8:
    // 0x2ae7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ae7cc:
    // 0x2ae7cc: 0xa262001c  sb          $v0, 0x1C($s3)
    ctx->pc = 0x2ae7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
label_2ae7d0:
    // 0x2ae7d0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_2ae7d4:
    if (ctx->pc == 0x2AE7D4u) {
        ctx->pc = 0x2AE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7D0u;
        // 0x2ae7d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7D8u;
        goto label_2ae7d8;
    }
    ctx->pc = 0x2AE7D0u;
    {
        const bool branch_taken_0x2ae7d0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7D0u;
        // 0x2ae7d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7d0) {
            ctx->pc = 0x2AE7E8u;
            goto label_2ae7e8;
        }
    }
    ctx->pc = 0x2AE7D8u;
label_2ae7d8:
    // 0x2ae7d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae7dc:
    // 0x2ae7dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ae7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ae7e0:
    // 0x2ae7e0: 0x146400f6  bne         $v1, $a0, . + 4 + (0xF6 << 2)
label_2ae7e4:
    if (ctx->pc == 0x2AE7E4u) {
        ctx->pc = 0x2AE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7E0u;
        // 0x2ae7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7E8u;
        goto label_2ae7e8;
    }
    ctx->pc = 0x2AE7E0u;
    {
        const bool branch_taken_0x2ae7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7E0u;
        // 0x2ae7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7e0) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE7E8u;
label_2ae7e8:
    // 0x2ae7e8: 0xc0a47b4  jal         func_291ED0
label_2ae7ec:
    if (ctx->pc == 0x2AE7ECu) {
        ctx->pc = 0x2AE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7E8u;
        // 0x2ae7ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7F0u;
        goto label_2ae7f0;
    }
    ctx->pc = 0x2AE7E8u;
    SET_GPR_U32(ctx, 31, 0x2AE7F0u);
    ctx->pc = 0x2AE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7E8u;
    // 0x2ae7ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AE7E8u, 0x2AE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7F0u;
label_2ae7f0:
    // 0x2ae7f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae7f4:
    // 0x2ae7f4: 0x144300f1  bne         $v0, $v1, . + 4 + (0xF1 << 2)
label_2ae7f8:
    if (ctx->pc == 0x2AE7F8u) {
        ctx->pc = 0x2AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7F4u;
        // 0x2ae7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE7FCu;
        goto label_2ae7fc;
    }
    ctx->pc = 0x2AE7F4u;
    {
        const bool branch_taken_0x2ae7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7F4u;
        // 0x2ae7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7f4) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE7FCu;
label_2ae7fc:
    // 0x2ae7fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ae7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ae800:
    // 0x2ae800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ae804:
    // 0x2ae804: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ae804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ae808:
    // 0x2ae808: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ae808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ae80c:
    // 0x2ae80c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ae80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae810:
    // 0x2ae810: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2ae810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2ae814:
    // 0x2ae814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae818:
    // 0x2ae818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae81c:
    // 0x2ae81c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae820:
    // 0x2ae820: 0xc088178  jal         func_2205E0
label_2ae824:
    if (ctx->pc == 0x2AE824u) {
        ctx->pc = 0x2AE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE820u;
        // 0x2ae824: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE828u;
        goto label_2ae828;
    }
    ctx->pc = 0x2AE820u;
    SET_GPR_U32(ctx, 31, 0x2AE828u);
    ctx->pc = 0x2AE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE820u;
    // 0x2ae824: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AE820u, 0x2AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE828u;
label_2ae828:
    // 0x2ae828: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2ae82c:
    if (ctx->pc == 0x2AE82Cu) {
        ctx->pc = 0x2AE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE828u;
        // 0x2ae82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE830u;
        goto label_2ae830;
    }
    ctx->pc = 0x2AE828u;
    {
        const bool branch_taken_0x2ae828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE828u;
        // 0x2ae82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae828) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE830u;
label_2ae830:
    // 0x2ae830: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ae830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae834:
    // 0x2ae834: 0x0  nop
    ctx->pc = 0x2ae834u;
    // NOP
label_2ae838:
    // 0x2ae838: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_2ae83c:
    if (ctx->pc == 0x2AE83Cu) {
        ctx->pc = 0x2AE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE838u;
        // 0x2ae83c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE840u;
        goto label_2ae840;
    }
    ctx->pc = 0x2AE838u;
    {
        const bool branch_taken_0x2ae838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE838u;
        // 0x2ae83c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae838) {
            ctx->pc = 0x2AE908u;
            goto label_2ae908;
        }
    }
    ctx->pc = 0x2AE840u;
label_2ae840:
    // 0x2ae840: 0xc0a4162  jal         func_290588
label_2ae844:
    if (ctx->pc == 0x2AE844u) {
        ctx->pc = 0x2AE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE840u;
        // 0x2ae844: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE848u;
        goto label_2ae848;
    }
    ctx->pc = 0x2AE840u;
    SET_GPR_U32(ctx, 31, 0x2AE848u);
    ctx->pc = 0x2AE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE840u;
    // 0x2ae844: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2AE840u, 0x2AE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE848u;
label_2ae848:
    // 0x2ae848: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2ae84c:
    if (ctx->pc == 0x2AE84Cu) {
        ctx->pc = 0x2AE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE848u;
        // 0x2ae84c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE850u;
        goto label_2ae850;
    }
    ctx->pc = 0x2AE848u;
    {
        const bool branch_taken_0x2ae848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE848u;
        // 0x2ae84c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae848) {
            ctx->pc = 0x2AE8B8u;
            goto label_2ae8b8;
        }
    }
    ctx->pc = 0x2AE850u;
label_2ae850:
    // 0x2ae850: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ae850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae854:
    // 0x2ae854: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2ae854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae858:
    // 0x2ae858: 0xc08bfa0  jal         func_22FE80
label_2ae85c:
    if (ctx->pc == 0x2AE85Cu) {
        ctx->pc = 0x2AE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE858u;
        // 0x2ae85c: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE860u;
        goto label_2ae860;
    }
    ctx->pc = 0x2AE858u;
    SET_GPR_U32(ctx, 31, 0x2AE860u);
    ctx->pc = 0x2AE85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE858u;
    // 0x2ae85c: 0x46000500  add.s       $f20, $f0, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE858u, 0x2AE860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE860u;
label_2ae860:
    // 0x2ae860: 0xc0a367c  jal         func_28D9F0
label_2ae864:
    if (ctx->pc == 0x2AE864u) {
        ctx->pc = 0x2AE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE860u;
        // 0x2ae864: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE868u;
        goto label_2ae868;
    }
    ctx->pc = 0x2AE860u;
    SET_GPR_U32(ctx, 31, 0x2AE868u);
    ctx->pc = 0x2AE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE860u;
    // 0x2ae864: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE860u, 0x2AE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE868u;
label_2ae868:
    // 0x2ae868: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ae86c:
    if (ctx->pc == 0x2AE86Cu) {
        ctx->pc = 0x2AE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE868u;
        // 0x2ae86c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE870u;
        goto label_2ae870;
    }
    ctx->pc = 0x2AE868u;
    {
        const bool branch_taken_0x2ae868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE868u;
        // 0x2ae86c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae868) {
            ctx->pc = 0x2AE894u;
            goto label_2ae894;
        }
    }
    ctx->pc = 0x2AE870u;
label_2ae870:
    // 0x2ae870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ae874:
    // 0x2ae874: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ae874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ae878:
    // 0x2ae878: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae87c:
    // 0x2ae87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae880:
    // 0x2ae880: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2ae880u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2ae884:
    // 0x2ae884: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ae884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae888:
    // 0x2ae888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae88c:
    // 0x2ae88c: 0xc0bf3d4  jal         func_2FCF50
label_2ae890:
    if (ctx->pc == 0x2AE890u) {
        ctx->pc = 0x2AE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE88Cu;
        // 0x2ae890: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE894u;
        goto label_2ae894;
    }
    ctx->pc = 0x2AE88Cu;
    SET_GPR_U32(ctx, 31, 0x2AE894u);
    ctx->pc = 0x2AE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE88Cu;
    // 0x2ae890: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2AE88Cu, 0x2AE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE894u;
label_2ae894:
    // 0x2ae894: 0xc0a367c  jal         func_28D9F0
label_2ae898:
    if (ctx->pc == 0x2AE898u) {
        ctx->pc = 0x2AE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE894u;
        // 0x2ae898: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE89Cu;
        goto label_2ae89c;
    }
    ctx->pc = 0x2AE894u;
    SET_GPR_U32(ctx, 31, 0x2AE89Cu);
    ctx->pc = 0x2AE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE894u;
    // 0x2ae898: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE894u, 0x2AE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE89Cu;
label_2ae89c:
    // 0x2ae89c: 0x1040ff48  beqz        $v0, . + 4 + (-0xB8 << 2)
label_2ae8a0:
    if (ctx->pc == 0x2AE8A0u) {
        ctx->pc = 0x2AE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE89Cu;
        // 0x2ae8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8A4u;
        goto label_2ae8a4;
    }
    ctx->pc = 0x2AE89Cu;
    {
        const bool branch_taken_0x2ae89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE89Cu;
        // 0x2ae8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae89c) {
            ctx->pc = 0x2AE5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae5c0;
        }
    }
    ctx->pc = 0x2AE8A4u;
label_2ae8a4:
    // 0x2ae8a4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae8a8:
    // 0x2ae8a8: 0xc0bebdc  jal         func_2FAF70
label_2ae8ac:
    if (ctx->pc == 0x2AE8ACu) {
        ctx->pc = 0x2AE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8A8u;
        // 0x2ae8ac: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8B0u;
        goto label_2ae8b0;
    }
    ctx->pc = 0x2AE8A8u;
    SET_GPR_U32(ctx, 31, 0x2AE8B0u);
    ctx->pc = 0x2AE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8A8u;
    // 0x2ae8ac: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2AE8A8u, 0x2AE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8B0u;
label_2ae8b0:
    // 0x2ae8b0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_2ae8b4:
    if (ctx->pc == 0x2AE8B4u) {
        ctx->pc = 0x2AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8B0u;
        // 0x2ae8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8B8u;
        goto label_2ae8b8;
    }
    ctx->pc = 0x2AE8B0u;
    {
        const bool branch_taken_0x2ae8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8B0u;
        // 0x2ae8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8b0) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE8B8u;
label_2ae8b8:
    // 0x2ae8b8: 0xc0a4e54  jal         func_293950
label_2ae8bc:
    if (ctx->pc == 0x2AE8BCu) {
        ctx->pc = 0x2AE8C0u;
        goto label_2ae8c0;
    }
    ctx->pc = 0x2AE8B8u;
    SET_GPR_U32(ctx, 31, 0x2AE8C0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AE8B8u, 0x2AE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8C0u;
label_2ae8c0:
    // 0x2ae8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae8c4:
    // 0x2ae8c4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2ae8c8:
    if (ctx->pc == 0x2AE8C8u) {
        ctx->pc = 0x2AE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8C4u;
        // 0x2ae8c8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8CCu;
        goto label_2ae8cc;
    }
    ctx->pc = 0x2AE8C4u;
    {
        const bool branch_taken_0x2ae8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae8c4) {
            ctx->pc = 0x2AE8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE8C4u;
            // 0x2ae8c8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE8F8u;
            goto label_2ae8f8;
        }
    }
    ctx->pc = 0x2AE8CCu;
label_2ae8cc:
    // 0x2ae8cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ae8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ae8d0:
    // 0x2ae8d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ae8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ae8d4:
    // 0x2ae8d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ae8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ae8d8:
    // 0x2ae8d8: 0x40f809  jalr        $v0
label_2ae8dc:
    if (ctx->pc == 0x2AE8DCu) {
        ctx->pc = 0x2AE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8D8u;
        // 0x2ae8dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8E0u;
        goto label_2ae8e0;
    }
    ctx->pc = 0x2AE8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AE8E0u);
        ctx->pc = 0x2AE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8D8u;
        // 0x2ae8dc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE8D8u, 0x2AE8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE8E0u;
label_2ae8e0:
    // 0x2ae8e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae8e4:
    // 0x2ae8e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ae8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae8e8:
    // 0x2ae8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae8ec:
    // 0x2ae8ec: 0xc0abd6c  jal         func_2AF5B0
label_2ae8f0:
    if (ctx->pc == 0x2AE8F0u) {
        ctx->pc = 0x2AE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8ECu;
        // 0x2ae8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE8F4u;
        goto label_2ae8f4;
    }
    ctx->pc = 0x2AE8ECu;
    SET_GPR_U32(ctx, 31, 0x2AE8F4u);
    ctx->pc = 0x2AE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8ECu;
    // 0x2ae8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2AE8ECu, 0x2AE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8F4u;
label_2ae8f4:
    // 0x2ae8f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae8f8:
    // 0x2ae8f8: 0xc0a35d6  jal         func_28D758
label_2ae8fc:
    if (ctx->pc == 0x2AE8FCu) {
        ctx->pc = 0x2AE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8F8u;
        // 0x2ae8fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE900u;
        goto label_2ae900;
    }
    ctx->pc = 0x2AE8F8u;
    SET_GPR_U32(ctx, 31, 0x2AE900u);
    ctx->pc = 0x2AE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8F8u;
    // 0x2ae8fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AE8F8u, 0x2AE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE900u;
label_2ae900:
    // 0x2ae900: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2ae904:
    if (ctx->pc == 0x2AE904u) {
        ctx->pc = 0x2AE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE900u;
        // 0x2ae904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE908u;
        goto label_2ae908;
    }
    ctx->pc = 0x2AE900u;
    {
        const bool branch_taken_0x2ae900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE900u;
        // 0x2ae904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae900) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE908u;
label_2ae908:
    // 0x2ae908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ae908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ae90c:
    // 0x2ae90c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x2ae90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_2ae910:
    // 0x2ae910: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ae914:
    // 0x2ae914: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ae918:
    // 0x2ae918: 0xc0888a2  jal         func_222288
label_2ae91c:
    if (ctx->pc == 0x2AE91Cu) {
        ctx->pc = 0x2AE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE918u;
        // 0x2ae91c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE920u;
        goto label_2ae920;
    }
    ctx->pc = 0x2AE918u;
    SET_GPR_U32(ctx, 31, 0x2AE920u);
    ctx->pc = 0x2AE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE918u;
    // 0x2ae91c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2AE918u, 0x2AE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE920u;
label_2ae920:
    // 0x2ae920: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_2ae924:
    if (ctx->pc == 0x2AE924u) {
        ctx->pc = 0x2AE928u;
        goto label_2ae928;
    }
    ctx->pc = 0x2AE920u;
    {
        const bool branch_taken_0x2ae920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae920) {
            ctx->pc = 0x2AEA38u;
            goto label_2aea38;
        }
    }
    ctx->pc = 0x2AE928u;
label_2ae928:
    // 0x2ae928: 0x16d00023  bne         $s6, $s0, . + 4 + (0x23 << 2)
label_2ae92c:
    if (ctx->pc == 0x2AE92Cu) {
        ctx->pc = 0x2AE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE928u;
        // 0x2ae92c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE930u;
        goto label_2ae930;
    }
    ctx->pc = 0x2AE928u;
    {
        const bool branch_taken_0x2ae928 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE928u;
        // 0x2ae92c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae928) {
            ctx->pc = 0x2AE9B8u;
            goto label_2ae9b8;
        }
    }
    ctx->pc = 0x2AE930u;
label_2ae930:
    // 0x2ae930: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae934:
    // 0x2ae934: 0xc0a4162  jal         func_290588
label_2ae938:
    if (ctx->pc == 0x2AE938u) {
        ctx->pc = 0x2AE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE934u;
        // 0x2ae938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE93Cu;
        goto label_2ae93c;
    }
    ctx->pc = 0x2AE934u;
    SET_GPR_U32(ctx, 31, 0x2AE93Cu);
    ctx->pc = 0x2AE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE934u;
    // 0x2ae938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2AE934u, 0x2AE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE93Cu;
label_2ae93c:
    // 0x2ae93c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ae940:
    if (ctx->pc == 0x2AE940u) {
        ctx->pc = 0x2AE944u;
        goto label_2ae944;
    }
    ctx->pc = 0x2AE93Cu;
    {
        const bool branch_taken_0x2ae93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae93c) {
            ctx->pc = 0x2AE968u;
            goto label_2ae968;
        }
    }
    ctx->pc = 0x2AE944u;
label_2ae944:
    // 0x2ae944: 0xc0a367c  jal         func_28D9F0
label_2ae948:
    if (ctx->pc == 0x2AE948u) {
        ctx->pc = 0x2AE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE944u;
        // 0x2ae948: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE94Cu;
        goto label_2ae94c;
    }
    ctx->pc = 0x2AE944u;
    SET_GPR_U32(ctx, 31, 0x2AE94Cu);
    ctx->pc = 0x2AE948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE944u;
    // 0x2ae948: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE944u, 0x2AE94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE94Cu;
label_2ae94c:
    // 0x2ae94c: 0x1040ff1c  beqz        $v0, . + 4 + (-0xE4 << 2)
label_2ae950:
    if (ctx->pc == 0x2AE950u) {
        ctx->pc = 0x2AE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE94Cu;
        // 0x2ae950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE954u;
        goto label_2ae954;
    }
    ctx->pc = 0x2AE94Cu;
    {
        const bool branch_taken_0x2ae94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE94Cu;
        // 0x2ae950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae94c) {
            ctx->pc = 0x2AE5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae5c0;
        }
    }
    ctx->pc = 0x2AE954u;
label_2ae954:
    // 0x2ae954: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae958:
    // 0x2ae958: 0xc0bebdc  jal         func_2FAF70
label_2ae95c:
    if (ctx->pc == 0x2AE95Cu) {
        ctx->pc = 0x2AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE958u;
        // 0x2ae95c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE960u;
        goto label_2ae960;
    }
    ctx->pc = 0x2AE958u;
    SET_GPR_U32(ctx, 31, 0x2AE960u);
    ctx->pc = 0x2AE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE958u;
    // 0x2ae95c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2AE958u, 0x2AE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE960u;
label_2ae960:
    // 0x2ae960: 0x10000096  b           . + 4 + (0x96 << 2)
label_2ae964:
    if (ctx->pc == 0x2AE964u) {
        ctx->pc = 0x2AE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE960u;
        // 0x2ae964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE968u;
        goto label_2ae968;
    }
    ctx->pc = 0x2AE960u;
    {
        const bool branch_taken_0x2ae960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE960u;
        // 0x2ae964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae960) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE968u;
label_2ae968:
    // 0x2ae968: 0xc0a4e54  jal         func_293950
label_2ae96c:
    if (ctx->pc == 0x2AE96Cu) {
        ctx->pc = 0x2AE970u;
        goto label_2ae970;
    }
    ctx->pc = 0x2AE968u;
    SET_GPR_U32(ctx, 31, 0x2AE970u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AE968u, 0x2AE970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE970u;
label_2ae970:
    // 0x2ae970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae974:
    // 0x2ae974: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2ae978:
    if (ctx->pc == 0x2AE978u) {
        ctx->pc = 0x2AE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE974u;
        // 0x2ae978: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE97Cu;
        goto label_2ae97c;
    }
    ctx->pc = 0x2AE974u;
    {
        const bool branch_taken_0x2ae974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae974) {
            ctx->pc = 0x2AE978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE974u;
            // 0x2ae978: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE9A8u;
            goto label_2ae9a8;
        }
    }
    ctx->pc = 0x2AE97Cu;
label_2ae97c:
    // 0x2ae97c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ae97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ae980:
    // 0x2ae980: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ae980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ae984:
    // 0x2ae984: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ae984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ae988:
    // 0x2ae988: 0x40f809  jalr        $v0
label_2ae98c:
    if (ctx->pc == 0x2AE98Cu) {
        ctx->pc = 0x2AE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE988u;
        // 0x2ae98c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE990u;
        goto label_2ae990;
    }
    ctx->pc = 0x2AE988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AE990u);
        ctx->pc = 0x2AE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE988u;
        // 0x2ae98c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE988u, 0x2AE990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE990u;
label_2ae990:
    // 0x2ae990: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ae990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae994:
    // 0x2ae994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ae994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae998:
    // 0x2ae998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae99c:
    // 0x2ae99c: 0xc0abd6c  jal         func_2AF5B0
label_2ae9a0:
    if (ctx->pc == 0x2AE9A0u) {
        ctx->pc = 0x2AE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE99Cu;
        // 0x2ae9a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE9A4u;
        goto label_2ae9a4;
    }
    ctx->pc = 0x2AE99Cu;
    SET_GPR_U32(ctx, 31, 0x2AE9A4u);
    ctx->pc = 0x2AE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE99Cu;
    // 0x2ae9a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2AE99Cu, 0x2AE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9A4u;
label_2ae9a4:
    // 0x2ae9a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ae9a8:
    // 0x2ae9a8: 0xc0a35d6  jal         func_28D758
label_2ae9ac:
    if (ctx->pc == 0x2AE9ACu) {
        ctx->pc = 0x2AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9A8u;
        // 0x2ae9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE9B0u;
        goto label_2ae9b0;
    }
    ctx->pc = 0x2AE9A8u;
    SET_GPR_U32(ctx, 31, 0x2AE9B0u);
    ctx->pc = 0x2AE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9A8u;
    // 0x2ae9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AE9A8u, 0x2AE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9B0u;
label_2ae9b0:
    // 0x2ae9b0: 0x10000082  b           . + 4 + (0x82 << 2)
label_2ae9b4:
    if (ctx->pc == 0x2AE9B4u) {
        ctx->pc = 0x2AE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9B0u;
        // 0x2ae9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE9B8u;
        goto label_2ae9b8;
    }
    ctx->pc = 0x2AE9B0u;
    {
        const bool branch_taken_0x2ae9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9B0u;
        // 0x2ae9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9b0) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AE9B8u;
label_2ae9b8:
    // 0x2ae9b8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ae9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae9bc:
    // 0x2ae9bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ae9bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae9c0:
    // 0x2ae9c0: 0x0  nop
    ctx->pc = 0x2ae9c0u;
    // NOP
label_2ae9c4:
    // 0x2ae9c4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_2ae9c8:
    if (ctx->pc == 0x2AE9C8u) {
        ctx->pc = 0x2AE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9C4u;
        // 0x2ae9c8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE9CCu;
        goto label_2ae9cc;
    }
    ctx->pc = 0x2AE9C4u;
    {
        const bool branch_taken_0x2ae9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae9c4) {
            ctx->pc = 0x2AE9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE9C4u;
            // 0x2ae9c8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE9F4u;
            goto label_2ae9f4;
        }
    }
    ctx->pc = 0x2AE9CCu;
label_2ae9cc:
    // 0x2ae9cc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2ae9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2ae9d0:
    // 0x2ae9d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae9d4:
    // 0x2ae9d4: 0x0  nop
    ctx->pc = 0x2ae9d4u;
    // NOP
label_2ae9d8:
    // 0x2ae9d8: 0x0  nop
    ctx->pc = 0x2ae9d8u;
    // NOP
label_2ae9dc:
    // 0x2ae9dc: 0x46140044  c1          0x140044
    ctx->pc = 0x2ae9dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2ae9e0:
    // 0x2ae9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ae9e4:
    // 0x2ae9e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ae9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ae9e8:
    // 0x2ae9e8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2ae9e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ae9ec:
    // 0x2ae9ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ae9f0:
    if (ctx->pc == 0x2AE9F0u) {
        ctx->pc = 0x2AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9ECu;
        // 0x2ae9f0: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE9F4u;
        goto label_2ae9f4;
    }
    ctx->pc = 0x2AE9ECu;
    {
        const bool branch_taken_0x2ae9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9ECu;
        // 0x2ae9f0: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9ec) {
            ctx->pc = 0x2AE9FCu;
            goto label_2ae9fc;
        }
    }
    ctx->pc = 0x2AE9F4u;
label_2ae9f4:
    // 0x2ae9f4: 0xc4550140  lwc1        $f21, 0x140($v0)
    ctx->pc = 0x2ae9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ae9f8:
    // 0x2ae9f8: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2ae9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ae9fc:
    // 0x2ae9fc: 0xc08bfa0  jal         func_22FE80
label_2aea00:
    if (ctx->pc == 0x2AEA00u) {
        ctx->pc = 0x2AEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9FCu;
        // 0x2aea00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA04u;
        goto label_2aea04;
    }
    ctx->pc = 0x2AE9FCu;
    SET_GPR_U32(ctx, 31, 0x2AEA04u);
    ctx->pc = 0x2AEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9FCu;
    // 0x2aea00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE9FCu, 0x2AEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA04u;
label_2aea04:
    // 0x2aea04: 0xc0a367c  jal         func_28D9F0
label_2aea08:
    if (ctx->pc == 0x2AEA08u) {
        ctx->pc = 0x2AEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA04u;
        // 0x2aea08: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA0Cu;
        goto label_2aea0c;
    }
    ctx->pc = 0x2AEA04u;
    SET_GPR_U32(ctx, 31, 0x2AEA0Cu);
    ctx->pc = 0x2AEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA04u;
    // 0x2aea08: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AEA04u, 0x2AEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA0Cu;
label_2aea0c:
    // 0x2aea0c: 0x1040feec  beqz        $v0, . + 4 + (-0x114 << 2)
label_2aea10:
    if (ctx->pc == 0x2AEA10u) {
        ctx->pc = 0x2AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA0Cu;
        // 0x2aea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA14u;
        goto label_2aea14;
    }
    ctx->pc = 0x2AEA0Cu;
    {
        const bool branch_taken_0x2aea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA0Cu;
        // 0x2aea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea0c) {
            ctx->pc = 0x2AE5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae5c0;
        }
    }
    ctx->pc = 0x2AEA14u;
label_2aea14:
    // 0x2aea14: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2aea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aea18:
    // 0x2aea18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2aea18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aea1c:
    // 0x2aea1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2aea1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2aea20:
    // 0x2aea20: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2aea20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2aea24:
    // 0x2aea24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2aea24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aea28:
    // 0x2aea28: 0xc0bf3d4  jal         func_2FCF50
label_2aea2c:
    if (ctx->pc == 0x2AEA2Cu) {
        ctx->pc = 0x2AEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA28u;
        // 0x2aea2c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA30u;
        goto label_2aea30;
    }
    ctx->pc = 0x2AEA28u;
    SET_GPR_U32(ctx, 31, 0x2AEA30u);
    ctx->pc = 0x2AEA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA28u;
    // 0x2aea2c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2AEA28u, 0x2AEA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA30u;
label_2aea30:
    // 0x2aea30: 0x10000062  b           . + 4 + (0x62 << 2)
label_2aea34:
    if (ctx->pc == 0x2AEA34u) {
        ctx->pc = 0x2AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA30u;
        // 0x2aea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA38u;
        goto label_2aea38;
    }
    ctx->pc = 0x2AEA30u;
    {
        const bool branch_taken_0x2aea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA30u;
        // 0x2aea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea30) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AEA38u;
label_2aea38:
    // 0x2aea38: 0x16e00053  bnez        $s7, . + 4 + (0x53 << 2)
label_2aea3c:
    if (ctx->pc == 0x2AEA3Cu) {
        ctx->pc = 0x2AEA40u;
        goto label_2aea40;
    }
    ctx->pc = 0x2AEA38u;
    {
        const bool branch_taken_0x2aea38 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aea38) {
            ctx->pc = 0x2AEB88u;
            goto label_2aeb88;
        }
    }
    ctx->pc = 0x2AEA40u;
label_2aea40:
    // 0x2aea40: 0x16d00051  bne         $s6, $s0, . + 4 + (0x51 << 2)
label_2aea44:
    if (ctx->pc == 0x2AEA44u) {
        ctx->pc = 0x2AEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA40u;
        // 0x2aea44: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA48u;
        goto label_2aea48;
    }
    ctx->pc = 0x2AEA40u;
    {
        const bool branch_taken_0x2aea40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x2AEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA40u;
        // 0x2aea44: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea40) {
            ctx->pc = 0x2AEB88u;
            goto label_2aeb88;
        }
    }
    ctx->pc = 0x2AEA48u;
label_2aea48:
    // 0x2aea48: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2aea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2aea4c:
    // 0x2aea4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2aea50:
    if (ctx->pc == 0x2AEA50u) {
        ctx->pc = 0x2AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA4Cu;
        // 0x2aea50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA54u;
        goto label_2aea54;
    }
    ctx->pc = 0x2AEA4Cu;
    {
        const bool branch_taken_0x2aea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA4Cu;
        // 0x2aea50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea4c) {
            ctx->pc = 0x2AEA74u;
            goto label_2aea74;
        }
    }
    ctx->pc = 0x2AEA54u;
label_2aea54:
    // 0x2aea54: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2aea58:
    if (ctx->pc == 0x2AEA58u) {
        ctx->pc = 0x2AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA54u;
        // 0x2aea58: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA5Cu;
        goto label_2aea5c;
    }
    ctx->pc = 0x2AEA54u;
    {
        const bool branch_taken_0x2aea54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA54u;
        // 0x2aea58: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea54) {
            ctx->pc = 0x2AEA74u;
            goto label_2aea74;
        }
    }
    ctx->pc = 0x2AEA5Cu;
label_2aea5c:
    // 0x2aea5c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2aea60:
    if (ctx->pc == 0x2AEA60u) {
        ctx->pc = 0x2AEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA5Cu;
        // 0x2aea60: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA64u;
        goto label_2aea64;
    }
    ctx->pc = 0x2AEA5Cu;
    {
        const bool branch_taken_0x2aea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA5Cu;
        // 0x2aea60: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea5c) {
            ctx->pc = 0x2AEA74u;
            goto label_2aea74;
        }
    }
    ctx->pc = 0x2AEA64u;
label_2aea64:
    // 0x2aea64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2aea68:
    if (ctx->pc == 0x2AEA68u) {
        ctx->pc = 0x2AEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA64u;
        // 0x2aea68: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA6Cu;
        goto label_2aea6c;
    }
    ctx->pc = 0x2AEA64u;
    {
        const bool branch_taken_0x2aea64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA64u;
        // 0x2aea68: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea64) {
            ctx->pc = 0x2AEA74u;
            goto label_2aea74;
        }
    }
    ctx->pc = 0x2AEA6Cu;
label_2aea6c:
    // 0x2aea6c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2aea70:
    if (ctx->pc == 0x2AEA70u) {
        ctx->pc = 0x2AEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA6Cu;
        // 0x2aea70: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA74u;
        goto label_2aea74;
    }
    ctx->pc = 0x2AEA6Cu;
    {
        const bool branch_taken_0x2aea6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aea6c) {
            ctx->pc = 0x2AEA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA6Cu;
            // 0x2aea70: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEAD4u;
            goto label_2aead4;
        }
    }
    ctx->pc = 0x2AEA74u;
label_2aea74:
    // 0x2aea74: 0xc08bfbc  jal         func_22FEF0
label_2aea78:
    if (ctx->pc == 0x2AEA78u) {
        ctx->pc = 0x2AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA74u;
        // 0x2aea78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA7Cu;
        goto label_2aea7c;
    }
    ctx->pc = 0x2AEA74u;
    SET_GPR_U32(ctx, 31, 0x2AEA7Cu);
    ctx->pc = 0x2AEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA74u;
    // 0x2aea78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AEA74u, 0x2AEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA7Cu;
label_2aea7c:
    // 0x2aea7c: 0xc0a367c  jal         func_28D9F0
label_2aea80:
    if (ctx->pc == 0x2AEA80u) {
        ctx->pc = 0x2AEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA7Cu;
        // 0x2aea80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA84u;
        goto label_2aea84;
    }
    ctx->pc = 0x2AEA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA84u);
    ctx->pc = 0x2AEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA7Cu;
    // 0x2aea80: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AEA7Cu, 0x2AEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA84u;
label_2aea84:
    // 0x2aea84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aea84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aea88:
    // 0x2aea88: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_2aea8c:
    if (ctx->pc == 0x2AEA8Cu) {
        ctx->pc = 0x2AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA88u;
        // 0x2aea8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA90u;
        goto label_2aea90;
    }
    ctx->pc = 0x2AEA88u;
    {
        const bool branch_taken_0x2aea88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA88u;
        // 0x2aea8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea88) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AEA90u;
label_2aea90:
    // 0x2aea90: 0xc087420  jal         func_21D080
label_2aea94:
    if (ctx->pc == 0x2AEA94u) {
        ctx->pc = 0x2AEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA90u;
        // 0x2aea94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEA98u;
        goto label_2aea98;
    }
    ctx->pc = 0x2AEA90u;
    SET_GPR_U32(ctx, 31, 0x2AEA98u);
    ctx->pc = 0x2AEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA90u;
    // 0x2aea94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AEA90u, 0x2AEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA98u;
label_2aea98:
    // 0x2aea98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2aea98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2aea9c:
    // 0x2aea9c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aeaa0:
    // 0x2aeaa0: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2aeaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2aeaa4:
    // 0x2aeaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aeaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aeaa8:
    // 0x2aeaa8: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2aeaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2aeaac:
    // 0x2aeaac: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2aeaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2aeab0:
    // 0x2aeab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aeab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aeab4:
    // 0x2aeab4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aeab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeab8:
    // 0x2aeab8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2aeab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aeabc:
    // 0x2aeabc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aeabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aeac0:
    // 0x2aeac0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aeac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aeac4:
    // 0x2aeac4: 0xc0bee7a  jal         func_2FB9E8
label_2aeac8:
    if (ctx->pc == 0x2AEAC8u) {
        ctx->pc = 0x2AEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAC4u;
        // 0x2aeac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEACCu;
        goto label_2aeacc;
    }
    ctx->pc = 0x2AEAC4u;
    SET_GPR_U32(ctx, 31, 0x2AEACCu);
    ctx->pc = 0x2AEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAC4u;
    // 0x2aeac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AEAC4u, 0x2AEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEACCu;
label_2aeacc:
    // 0x2aeacc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2aead0:
    if (ctx->pc == 0x2AEAD0u) {
        ctx->pc = 0x2AEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEACCu;
        // 0x2aead0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEAD4u;
        goto label_2aead4;
    }
    ctx->pc = 0x2AEACCu;
    {
        const bool branch_taken_0x2aeacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEACCu;
        // 0x2aead0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeacc) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AEAD4u;
label_2aead4:
    // 0x2aead4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2aead4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aead8:
    // 0x2aead8: 0x0  nop
    ctx->pc = 0x2aead8u;
    // NOP
label_2aeadc:
    // 0x2aeadc: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_2aeae0:
    if (ctx->pc == 0x2AEAE0u) {
        ctx->pc = 0x2AEAE4u;
        goto label_2aeae4;
    }
    ctx->pc = 0x2AEADCu;
    {
        const bool branch_taken_0x2aeadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aeadc) {
            ctx->pc = 0x2AEB88u;
            goto label_2aeb88;
        }
    }
    ctx->pc = 0x2AEAE4u;
label_2aeae4:
    // 0x2aeae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aeae8:
    // 0x2aeae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aeae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2aeaec:
    // 0x2aeaec: 0x0  nop
    ctx->pc = 0x2aeaecu;
    // NOP
label_2aeaf0:
    // 0x2aeaf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2aeaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2aeaf4:
    // 0x2aeaf4: 0x0  nop
    ctx->pc = 0x2aeaf4u;
    // NOP
label_2aeaf8:
    // 0x2aeaf8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2aeafc:
    if (ctx->pc == 0x2AEAFCu) {
        ctx->pc = 0x2AEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAF8u;
        // 0x2aeafc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB00u;
        goto label_2aeb00;
    }
    ctx->pc = 0x2AEAF8u;
    {
        const bool branch_taken_0x2aeaf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAF8u;
        // 0x2aeafc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeaf8) {
            ctx->pc = 0x2AEB88u;
            goto label_2aeb88;
        }
    }
    ctx->pc = 0x2AEB00u;
label_2aeb00:
    // 0x2aeb00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aeb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb04:
    // 0x2aeb04: 0xc08886c  jal         func_2221B0
label_2aeb08:
    if (ctx->pc == 0x2AEB08u) {
        ctx->pc = 0x2AEB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB04u;
        // 0x2aeb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB0Cu;
        goto label_2aeb0c;
    }
    ctx->pc = 0x2AEB04u;
    SET_GPR_U32(ctx, 31, 0x2AEB0Cu);
    ctx->pc = 0x2AEB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB04u;
    // 0x2aeb08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2AEB04u, 0x2AEB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB0Cu;
label_2aeb0c:
    // 0x2aeb0c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2aeb10:
    if (ctx->pc == 0x2AEB10u) {
        ctx->pc = 0x2AEB14u;
        goto label_2aeb14;
    }
    ctx->pc = 0x2AEB0Cu;
    {
        const bool branch_taken_0x2aeb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb0c) {
            ctx->pc = 0x2AEB88u;
            goto label_2aeb88;
        }
    }
    ctx->pc = 0x2AEB14u;
label_2aeb14:
    // 0x2aeb14: 0xc08bfa0  jal         func_22FE80
label_2aeb18:
    if (ctx->pc == 0x2AEB18u) {
        ctx->pc = 0x2AEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB14u;
        // 0x2aeb18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB1Cu;
        goto label_2aeb1c;
    }
    ctx->pc = 0x2AEB14u;
    SET_GPR_U32(ctx, 31, 0x2AEB1Cu);
    ctx->pc = 0x2AEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB14u;
    // 0x2aeb18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AEB14u, 0x2AEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB1Cu;
label_2aeb1c:
    // 0x2aeb1c: 0xc0a367c  jal         func_28D9F0
label_2aeb20:
    if (ctx->pc == 0x2AEB20u) {
        ctx->pc = 0x2AEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB1Cu;
        // 0x2aeb20: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB24u;
        goto label_2aeb24;
    }
    ctx->pc = 0x2AEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB24u);
    ctx->pc = 0x2AEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB1Cu;
    // 0x2aeb20: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AEB1Cu, 0x2AEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB24u;
label_2aeb24:
    // 0x2aeb24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aeb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb28:
    // 0x2aeb28: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_2aeb2c:
    if (ctx->pc == 0x2AEB2Cu) {
        ctx->pc = 0x2AEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB28u;
        // 0x2aeb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB30u;
        goto label_2aeb30;
    }
    ctx->pc = 0x2AEB28u;
    {
        const bool branch_taken_0x2aeb28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB28u;
        // 0x2aeb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb28) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AEB30u;
label_2aeb30:
    // 0x2aeb30: 0xc087420  jal         func_21D080
label_2aeb34:
    if (ctx->pc == 0x2AEB34u) {
        ctx->pc = 0x2AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB30u;
        // 0x2aeb34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB38u;
        goto label_2aeb38;
    }
    ctx->pc = 0x2AEB30u;
    SET_GPR_U32(ctx, 31, 0x2AEB38u);
    ctx->pc = 0x2AEB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB30u;
    // 0x2aeb34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2AEB30u, 0x2AEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB38u;
label_2aeb38:
    // 0x2aeb38: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2aeb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2aeb3c:
    // 0x2aeb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aeb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb40:
    // 0x2aeb40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aeb44:
    // 0x2aeb44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aeb48:
    // 0x2aeb48: 0x40f809  jalr        $v0
label_2aeb4c:
    if (ctx->pc == 0x2AEB4Cu) {
        ctx->pc = 0x2AEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB48u;
        // 0x2aeb4c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB50u;
        goto label_2aeb50;
    }
    ctx->pc = 0x2AEB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AEB50u);
        ctx->pc = 0x2AEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB48u;
        // 0x2aeb4c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB48u, 0x2AEB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AEB50u;
label_2aeb50:
    // 0x2aeb50: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aeb54:
    // 0x2aeb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aeb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb58:
    // 0x2aeb58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2aeb5c:
    // 0x2aeb5c: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x2aeb5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_2aeb60:
    // 0x2aeb60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aeb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2aeb64:
    // 0x2aeb64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aeb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb68:
    // 0x2aeb68: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2aeb68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb6c:
    // 0x2aeb6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2aeb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aeb70:
    // 0x2aeb70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aeb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aeb74:
    // 0x2aeb74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aeb74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb78:
    // 0x2aeb78: 0xc0bee7a  jal         func_2FB9E8
label_2aeb7c:
    if (ctx->pc == 0x2AEB7Cu) {
        ctx->pc = 0x2AEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB78u;
        // 0x2aeb7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB80u;
        goto label_2aeb80;
    }
    ctx->pc = 0x2AEB78u;
    SET_GPR_U32(ctx, 31, 0x2AEB80u);
    ctx->pc = 0x2AEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB78u;
    // 0x2aeb7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2AEB78u, 0x2AEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB80u;
label_2aeb80:
    // 0x2aeb80: 0x1000000e  b           . + 4 + (0xE << 2)
label_2aeb84:
    if (ctx->pc == 0x2AEB84u) {
        ctx->pc = 0x2AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB80u;
        // 0x2aeb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB88u;
        goto label_2aeb88;
    }
    ctx->pc = 0x2AEB80u;
    {
        const bool branch_taken_0x2aeb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB80u;
        // 0x2aeb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb80) {
            ctx->pc = 0x2AEBBCu;
            goto label_2aebbc;
        }
    }
    ctx->pc = 0x2AEB88u;
label_2aeb88:
    // 0x2aeb88: 0xc0a4e54  jal         func_293950
label_2aeb8c:
    if (ctx->pc == 0x2AEB8Cu) {
        ctx->pc = 0x2AEB90u;
        goto label_2aeb90;
    }
    ctx->pc = 0x2AEB88u;
    SET_GPR_U32(ctx, 31, 0x2AEB90u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AEB88u, 0x2AEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB90u;
label_2aeb90:
    // 0x2aeb90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aeb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb94:
    // 0x2aeb94: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2aeb98:
    if (ctx->pc == 0x2AEB98u) {
        ctx->pc = 0x2AEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB94u;
        // 0x2aeb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEB9Cu;
        goto label_2aeb9c;
    }
    ctx->pc = 0x2AEB94u;
    {
        const bool branch_taken_0x2aeb94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB94u;
        // 0x2aeb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb94) {
            ctx->pc = 0x2AEBACu;
            goto label_2aebac;
        }
    }
    ctx->pc = 0x2AEB9Cu;
label_2aeb9c:
    // 0x2aeb9c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2aeb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aeba0:
    // 0x2aeba0: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2aeba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2aeba4:
    // 0x2aeba4: 0xc0acb08  jal         func_2B2C20
label_2aeba8:
    if (ctx->pc == 0x2AEBA8u) {
        ctx->pc = 0x2AEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBA4u;
        // 0x2aeba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEBACu;
        goto label_2aebac;
    }
    ctx->pc = 0x2AEBA4u;
    SET_GPR_U32(ctx, 31, 0x2AEBACu);
    ctx->pc = 0x2AEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBA4u;
    // 0x2aeba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2AEBA4u, 0x2AEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBACu;
label_2aebac:
    // 0x2aebac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2aebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aebb0:
    // 0x2aebb0: 0xc0a35d6  jal         func_28D758
label_2aebb4:
    if (ctx->pc == 0x2AEBB4u) {
        ctx->pc = 0x2AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBB0u;
        // 0x2aebb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEBB8u;
        goto label_2aebb8;
    }
    ctx->pc = 0x2AEBB0u;
    SET_GPR_U32(ctx, 31, 0x2AEBB8u);
    ctx->pc = 0x2AEBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBB0u;
    // 0x2aebb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AEBB0u, 0x2AEBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBB8u;
label_2aebb8:
    // 0x2aebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aebbc:
    // 0x2aebbc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2aebbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2aebc0:
    // 0x2aebc0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2aebc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2aebc4:
    // 0x2aebc4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2aebc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2aebc8:
    // 0x2aebc8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2aebc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2aebcc:
    // 0x2aebcc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2aebccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2aebd0:
    // 0x2aebd0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2aebd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2aebd4:
    // 0x2aebd4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2aebd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2aebd8:
    // 0x2aebd8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2aebd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2aebdc:
    // 0x2aebdc: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2aebdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2aebe0:
    // 0x2aebe0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2aebe4:
    // 0x2aebe4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2aebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2aebe8:
    // 0x2aebe8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2aebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2aebec:
    // 0x2aebec: 0x3e00008  jr          $ra
label_2aebf0:
    if (ctx->pc == 0x2AEBF0u) {
        ctx->pc = 0x2AEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBECu;
        // 0x2aebf0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AEBF4u;
        goto label_2aebf4;
    }
    ctx->pc = 0x2AEBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBECu;
        // 0x2aebf0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEBF4u;
label_2aebf4:
    // 0x2aebf4: 0x0  nop
    ctx->pc = 0x2aebf4u;
    // NOP
    ctx->pc = 0x2aebf8u;
}
