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

// Function: sub_003EF188
// Address: 0x3ef188 - 0x3ef840
void sub_003EF188_0x3ef188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF188_0x3ef188");
#endif

    switch (ctx->pc) {
        case 0x3ef188u: goto label_3ef188;
        case 0x3ef18cu: goto label_3ef18c;
        case 0x3ef190u: goto label_3ef190;
        case 0x3ef194u: goto label_3ef194;
        case 0x3ef198u: goto label_3ef198;
        case 0x3ef19cu: goto label_3ef19c;
        case 0x3ef1a0u: goto label_3ef1a0;
        case 0x3ef1a4u: goto label_3ef1a4;
        case 0x3ef1a8u: goto label_3ef1a8;
        case 0x3ef1acu: goto label_3ef1ac;
        case 0x3ef1b0u: goto label_3ef1b0;
        case 0x3ef1b4u: goto label_3ef1b4;
        case 0x3ef1b8u: goto label_3ef1b8;
        case 0x3ef1bcu: goto label_3ef1bc;
        case 0x3ef1c0u: goto label_3ef1c0;
        case 0x3ef1c4u: goto label_3ef1c4;
        case 0x3ef1c8u: goto label_3ef1c8;
        case 0x3ef1ccu: goto label_3ef1cc;
        case 0x3ef1d0u: goto label_3ef1d0;
        case 0x3ef1d4u: goto label_3ef1d4;
        case 0x3ef1d8u: goto label_3ef1d8;
        case 0x3ef1dcu: goto label_3ef1dc;
        case 0x3ef1e0u: goto label_3ef1e0;
        case 0x3ef1e4u: goto label_3ef1e4;
        case 0x3ef1e8u: goto label_3ef1e8;
        case 0x3ef1ecu: goto label_3ef1ec;
        case 0x3ef1f0u: goto label_3ef1f0;
        case 0x3ef1f4u: goto label_3ef1f4;
        case 0x3ef1f8u: goto label_3ef1f8;
        case 0x3ef1fcu: goto label_3ef1fc;
        case 0x3ef200u: goto label_3ef200;
        case 0x3ef204u: goto label_3ef204;
        case 0x3ef208u: goto label_3ef208;
        case 0x3ef20cu: goto label_3ef20c;
        case 0x3ef210u: goto label_3ef210;
        case 0x3ef214u: goto label_3ef214;
        case 0x3ef218u: goto label_3ef218;
        case 0x3ef21cu: goto label_3ef21c;
        case 0x3ef220u: goto label_3ef220;
        case 0x3ef224u: goto label_3ef224;
        case 0x3ef228u: goto label_3ef228;
        case 0x3ef22cu: goto label_3ef22c;
        case 0x3ef230u: goto label_3ef230;
        case 0x3ef234u: goto label_3ef234;
        case 0x3ef238u: goto label_3ef238;
        case 0x3ef23cu: goto label_3ef23c;
        case 0x3ef240u: goto label_3ef240;
        case 0x3ef244u: goto label_3ef244;
        case 0x3ef248u: goto label_3ef248;
        case 0x3ef24cu: goto label_3ef24c;
        case 0x3ef250u: goto label_3ef250;
        case 0x3ef254u: goto label_3ef254;
        case 0x3ef258u: goto label_3ef258;
        case 0x3ef25cu: goto label_3ef25c;
        case 0x3ef260u: goto label_3ef260;
        case 0x3ef264u: goto label_3ef264;
        case 0x3ef268u: goto label_3ef268;
        case 0x3ef26cu: goto label_3ef26c;
        case 0x3ef270u: goto label_3ef270;
        case 0x3ef274u: goto label_3ef274;
        case 0x3ef278u: goto label_3ef278;
        case 0x3ef27cu: goto label_3ef27c;
        case 0x3ef280u: goto label_3ef280;
        case 0x3ef284u: goto label_3ef284;
        case 0x3ef288u: goto label_3ef288;
        case 0x3ef28cu: goto label_3ef28c;
        case 0x3ef290u: goto label_3ef290;
        case 0x3ef294u: goto label_3ef294;
        case 0x3ef298u: goto label_3ef298;
        case 0x3ef29cu: goto label_3ef29c;
        case 0x3ef2a0u: goto label_3ef2a0;
        case 0x3ef2a4u: goto label_3ef2a4;
        case 0x3ef2a8u: goto label_3ef2a8;
        case 0x3ef2acu: goto label_3ef2ac;
        case 0x3ef2b0u: goto label_3ef2b0;
        case 0x3ef2b4u: goto label_3ef2b4;
        case 0x3ef2b8u: goto label_3ef2b8;
        case 0x3ef2bcu: goto label_3ef2bc;
        case 0x3ef2c0u: goto label_3ef2c0;
        case 0x3ef2c4u: goto label_3ef2c4;
        case 0x3ef2c8u: goto label_3ef2c8;
        case 0x3ef2ccu: goto label_3ef2cc;
        case 0x3ef2d0u: goto label_3ef2d0;
        case 0x3ef2d4u: goto label_3ef2d4;
        case 0x3ef2d8u: goto label_3ef2d8;
        case 0x3ef2dcu: goto label_3ef2dc;
        case 0x3ef2e0u: goto label_3ef2e0;
        case 0x3ef2e4u: goto label_3ef2e4;
        case 0x3ef2e8u: goto label_3ef2e8;
        case 0x3ef2ecu: goto label_3ef2ec;
        case 0x3ef2f0u: goto label_3ef2f0;
        case 0x3ef2f4u: goto label_3ef2f4;
        case 0x3ef2f8u: goto label_3ef2f8;
        case 0x3ef2fcu: goto label_3ef2fc;
        case 0x3ef300u: goto label_3ef300;
        case 0x3ef304u: goto label_3ef304;
        case 0x3ef308u: goto label_3ef308;
        case 0x3ef30cu: goto label_3ef30c;
        case 0x3ef310u: goto label_3ef310;
        case 0x3ef314u: goto label_3ef314;
        case 0x3ef318u: goto label_3ef318;
        case 0x3ef31cu: goto label_3ef31c;
        case 0x3ef320u: goto label_3ef320;
        case 0x3ef324u: goto label_3ef324;
        case 0x3ef328u: goto label_3ef328;
        case 0x3ef32cu: goto label_3ef32c;
        case 0x3ef330u: goto label_3ef330;
        case 0x3ef334u: goto label_3ef334;
        case 0x3ef338u: goto label_3ef338;
        case 0x3ef33cu: goto label_3ef33c;
        case 0x3ef340u: goto label_3ef340;
        case 0x3ef344u: goto label_3ef344;
        case 0x3ef348u: goto label_3ef348;
        case 0x3ef34cu: goto label_3ef34c;
        case 0x3ef350u: goto label_3ef350;
        case 0x3ef354u: goto label_3ef354;
        case 0x3ef358u: goto label_3ef358;
        case 0x3ef35cu: goto label_3ef35c;
        case 0x3ef360u: goto label_3ef360;
        case 0x3ef364u: goto label_3ef364;
        case 0x3ef368u: goto label_3ef368;
        case 0x3ef36cu: goto label_3ef36c;
        case 0x3ef370u: goto label_3ef370;
        case 0x3ef374u: goto label_3ef374;
        case 0x3ef378u: goto label_3ef378;
        case 0x3ef37cu: goto label_3ef37c;
        case 0x3ef380u: goto label_3ef380;
        case 0x3ef384u: goto label_3ef384;
        case 0x3ef388u: goto label_3ef388;
        case 0x3ef38cu: goto label_3ef38c;
        case 0x3ef390u: goto label_3ef390;
        case 0x3ef394u: goto label_3ef394;
        case 0x3ef398u: goto label_3ef398;
        case 0x3ef39cu: goto label_3ef39c;
        case 0x3ef3a0u: goto label_3ef3a0;
        case 0x3ef3a4u: goto label_3ef3a4;
        case 0x3ef3a8u: goto label_3ef3a8;
        case 0x3ef3acu: goto label_3ef3ac;
        case 0x3ef3b0u: goto label_3ef3b0;
        case 0x3ef3b4u: goto label_3ef3b4;
        case 0x3ef3b8u: goto label_3ef3b8;
        case 0x3ef3bcu: goto label_3ef3bc;
        case 0x3ef3c0u: goto label_3ef3c0;
        case 0x3ef3c4u: goto label_3ef3c4;
        case 0x3ef3c8u: goto label_3ef3c8;
        case 0x3ef3ccu: goto label_3ef3cc;
        case 0x3ef3d0u: goto label_3ef3d0;
        case 0x3ef3d4u: goto label_3ef3d4;
        case 0x3ef3d8u: goto label_3ef3d8;
        case 0x3ef3dcu: goto label_3ef3dc;
        case 0x3ef3e0u: goto label_3ef3e0;
        case 0x3ef3e4u: goto label_3ef3e4;
        case 0x3ef3e8u: goto label_3ef3e8;
        case 0x3ef3ecu: goto label_3ef3ec;
        case 0x3ef3f0u: goto label_3ef3f0;
        case 0x3ef3f4u: goto label_3ef3f4;
        case 0x3ef3f8u: goto label_3ef3f8;
        case 0x3ef3fcu: goto label_3ef3fc;
        case 0x3ef400u: goto label_3ef400;
        case 0x3ef404u: goto label_3ef404;
        case 0x3ef408u: goto label_3ef408;
        case 0x3ef40cu: goto label_3ef40c;
        case 0x3ef410u: goto label_3ef410;
        case 0x3ef414u: goto label_3ef414;
        case 0x3ef418u: goto label_3ef418;
        case 0x3ef41cu: goto label_3ef41c;
        case 0x3ef420u: goto label_3ef420;
        case 0x3ef424u: goto label_3ef424;
        case 0x3ef428u: goto label_3ef428;
        case 0x3ef42cu: goto label_3ef42c;
        case 0x3ef430u: goto label_3ef430;
        case 0x3ef434u: goto label_3ef434;
        case 0x3ef438u: goto label_3ef438;
        case 0x3ef43cu: goto label_3ef43c;
        case 0x3ef440u: goto label_3ef440;
        case 0x3ef444u: goto label_3ef444;
        case 0x3ef448u: goto label_3ef448;
        case 0x3ef44cu: goto label_3ef44c;
        case 0x3ef450u: goto label_3ef450;
        case 0x3ef454u: goto label_3ef454;
        case 0x3ef458u: goto label_3ef458;
        case 0x3ef45cu: goto label_3ef45c;
        case 0x3ef460u: goto label_3ef460;
        case 0x3ef464u: goto label_3ef464;
        case 0x3ef468u: goto label_3ef468;
        case 0x3ef46cu: goto label_3ef46c;
        case 0x3ef470u: goto label_3ef470;
        case 0x3ef474u: goto label_3ef474;
        case 0x3ef478u: goto label_3ef478;
        case 0x3ef47cu: goto label_3ef47c;
        case 0x3ef480u: goto label_3ef480;
        case 0x3ef484u: goto label_3ef484;
        case 0x3ef488u: goto label_3ef488;
        case 0x3ef48cu: goto label_3ef48c;
        case 0x3ef490u: goto label_3ef490;
        case 0x3ef494u: goto label_3ef494;
        case 0x3ef498u: goto label_3ef498;
        case 0x3ef49cu: goto label_3ef49c;
        case 0x3ef4a0u: goto label_3ef4a0;
        case 0x3ef4a4u: goto label_3ef4a4;
        case 0x3ef4a8u: goto label_3ef4a8;
        case 0x3ef4acu: goto label_3ef4ac;
        case 0x3ef4b0u: goto label_3ef4b0;
        case 0x3ef4b4u: goto label_3ef4b4;
        case 0x3ef4b8u: goto label_3ef4b8;
        case 0x3ef4bcu: goto label_3ef4bc;
        case 0x3ef4c0u: goto label_3ef4c0;
        case 0x3ef4c4u: goto label_3ef4c4;
        case 0x3ef4c8u: goto label_3ef4c8;
        case 0x3ef4ccu: goto label_3ef4cc;
        case 0x3ef4d0u: goto label_3ef4d0;
        case 0x3ef4d4u: goto label_3ef4d4;
        case 0x3ef4d8u: goto label_3ef4d8;
        case 0x3ef4dcu: goto label_3ef4dc;
        case 0x3ef4e0u: goto label_3ef4e0;
        case 0x3ef4e4u: goto label_3ef4e4;
        case 0x3ef4e8u: goto label_3ef4e8;
        case 0x3ef4ecu: goto label_3ef4ec;
        case 0x3ef4f0u: goto label_3ef4f0;
        case 0x3ef4f4u: goto label_3ef4f4;
        case 0x3ef4f8u: goto label_3ef4f8;
        case 0x3ef4fcu: goto label_3ef4fc;
        case 0x3ef500u: goto label_3ef500;
        case 0x3ef504u: goto label_3ef504;
        case 0x3ef508u: goto label_3ef508;
        case 0x3ef50cu: goto label_3ef50c;
        case 0x3ef510u: goto label_3ef510;
        case 0x3ef514u: goto label_3ef514;
        case 0x3ef518u: goto label_3ef518;
        case 0x3ef51cu: goto label_3ef51c;
        case 0x3ef520u: goto label_3ef520;
        case 0x3ef524u: goto label_3ef524;
        case 0x3ef528u: goto label_3ef528;
        case 0x3ef52cu: goto label_3ef52c;
        case 0x3ef530u: goto label_3ef530;
        case 0x3ef534u: goto label_3ef534;
        case 0x3ef538u: goto label_3ef538;
        case 0x3ef53cu: goto label_3ef53c;
        case 0x3ef540u: goto label_3ef540;
        case 0x3ef544u: goto label_3ef544;
        case 0x3ef548u: goto label_3ef548;
        case 0x3ef54cu: goto label_3ef54c;
        case 0x3ef550u: goto label_3ef550;
        case 0x3ef554u: goto label_3ef554;
        case 0x3ef558u: goto label_3ef558;
        case 0x3ef55cu: goto label_3ef55c;
        case 0x3ef560u: goto label_3ef560;
        case 0x3ef564u: goto label_3ef564;
        case 0x3ef568u: goto label_3ef568;
        case 0x3ef56cu: goto label_3ef56c;
        case 0x3ef570u: goto label_3ef570;
        case 0x3ef574u: goto label_3ef574;
        case 0x3ef578u: goto label_3ef578;
        case 0x3ef57cu: goto label_3ef57c;
        case 0x3ef580u: goto label_3ef580;
        case 0x3ef584u: goto label_3ef584;
        case 0x3ef588u: goto label_3ef588;
        case 0x3ef58cu: goto label_3ef58c;
        case 0x3ef590u: goto label_3ef590;
        case 0x3ef594u: goto label_3ef594;
        case 0x3ef598u: goto label_3ef598;
        case 0x3ef59cu: goto label_3ef59c;
        case 0x3ef5a0u: goto label_3ef5a0;
        case 0x3ef5a4u: goto label_3ef5a4;
        case 0x3ef5a8u: goto label_3ef5a8;
        case 0x3ef5acu: goto label_3ef5ac;
        case 0x3ef5b0u: goto label_3ef5b0;
        case 0x3ef5b4u: goto label_3ef5b4;
        case 0x3ef5b8u: goto label_3ef5b8;
        case 0x3ef5bcu: goto label_3ef5bc;
        case 0x3ef5c0u: goto label_3ef5c0;
        case 0x3ef5c4u: goto label_3ef5c4;
        case 0x3ef5c8u: goto label_3ef5c8;
        case 0x3ef5ccu: goto label_3ef5cc;
        case 0x3ef5d0u: goto label_3ef5d0;
        case 0x3ef5d4u: goto label_3ef5d4;
        case 0x3ef5d8u: goto label_3ef5d8;
        case 0x3ef5dcu: goto label_3ef5dc;
        case 0x3ef5e0u: goto label_3ef5e0;
        case 0x3ef5e4u: goto label_3ef5e4;
        case 0x3ef5e8u: goto label_3ef5e8;
        case 0x3ef5ecu: goto label_3ef5ec;
        case 0x3ef5f0u: goto label_3ef5f0;
        case 0x3ef5f4u: goto label_3ef5f4;
        case 0x3ef5f8u: goto label_3ef5f8;
        case 0x3ef5fcu: goto label_3ef5fc;
        case 0x3ef600u: goto label_3ef600;
        case 0x3ef604u: goto label_3ef604;
        case 0x3ef608u: goto label_3ef608;
        case 0x3ef60cu: goto label_3ef60c;
        case 0x3ef610u: goto label_3ef610;
        case 0x3ef614u: goto label_3ef614;
        case 0x3ef618u: goto label_3ef618;
        case 0x3ef61cu: goto label_3ef61c;
        case 0x3ef620u: goto label_3ef620;
        case 0x3ef624u: goto label_3ef624;
        case 0x3ef628u: goto label_3ef628;
        case 0x3ef62cu: goto label_3ef62c;
        case 0x3ef630u: goto label_3ef630;
        case 0x3ef634u: goto label_3ef634;
        case 0x3ef638u: goto label_3ef638;
        case 0x3ef63cu: goto label_3ef63c;
        case 0x3ef640u: goto label_3ef640;
        case 0x3ef644u: goto label_3ef644;
        case 0x3ef648u: goto label_3ef648;
        case 0x3ef64cu: goto label_3ef64c;
        case 0x3ef650u: goto label_3ef650;
        case 0x3ef654u: goto label_3ef654;
        case 0x3ef658u: goto label_3ef658;
        case 0x3ef65cu: goto label_3ef65c;
        case 0x3ef660u: goto label_3ef660;
        case 0x3ef664u: goto label_3ef664;
        case 0x3ef668u: goto label_3ef668;
        case 0x3ef66cu: goto label_3ef66c;
        case 0x3ef670u: goto label_3ef670;
        case 0x3ef674u: goto label_3ef674;
        case 0x3ef678u: goto label_3ef678;
        case 0x3ef67cu: goto label_3ef67c;
        case 0x3ef680u: goto label_3ef680;
        case 0x3ef684u: goto label_3ef684;
        case 0x3ef688u: goto label_3ef688;
        case 0x3ef68cu: goto label_3ef68c;
        case 0x3ef690u: goto label_3ef690;
        case 0x3ef694u: goto label_3ef694;
        case 0x3ef698u: goto label_3ef698;
        case 0x3ef69cu: goto label_3ef69c;
        case 0x3ef6a0u: goto label_3ef6a0;
        case 0x3ef6a4u: goto label_3ef6a4;
        case 0x3ef6a8u: goto label_3ef6a8;
        case 0x3ef6acu: goto label_3ef6ac;
        case 0x3ef6b0u: goto label_3ef6b0;
        case 0x3ef6b4u: goto label_3ef6b4;
        case 0x3ef6b8u: goto label_3ef6b8;
        case 0x3ef6bcu: goto label_3ef6bc;
        case 0x3ef6c0u: goto label_3ef6c0;
        case 0x3ef6c4u: goto label_3ef6c4;
        case 0x3ef6c8u: goto label_3ef6c8;
        case 0x3ef6ccu: goto label_3ef6cc;
        case 0x3ef6d0u: goto label_3ef6d0;
        case 0x3ef6d4u: goto label_3ef6d4;
        case 0x3ef6d8u: goto label_3ef6d8;
        case 0x3ef6dcu: goto label_3ef6dc;
        case 0x3ef6e0u: goto label_3ef6e0;
        case 0x3ef6e4u: goto label_3ef6e4;
        case 0x3ef6e8u: goto label_3ef6e8;
        case 0x3ef6ecu: goto label_3ef6ec;
        case 0x3ef6f0u: goto label_3ef6f0;
        case 0x3ef6f4u: goto label_3ef6f4;
        case 0x3ef6f8u: goto label_3ef6f8;
        case 0x3ef6fcu: goto label_3ef6fc;
        case 0x3ef700u: goto label_3ef700;
        case 0x3ef704u: goto label_3ef704;
        case 0x3ef708u: goto label_3ef708;
        case 0x3ef70cu: goto label_3ef70c;
        case 0x3ef710u: goto label_3ef710;
        case 0x3ef714u: goto label_3ef714;
        case 0x3ef718u: goto label_3ef718;
        case 0x3ef71cu: goto label_3ef71c;
        case 0x3ef720u: goto label_3ef720;
        case 0x3ef724u: goto label_3ef724;
        case 0x3ef728u: goto label_3ef728;
        case 0x3ef72cu: goto label_3ef72c;
        case 0x3ef730u: goto label_3ef730;
        case 0x3ef734u: goto label_3ef734;
        case 0x3ef738u: goto label_3ef738;
        case 0x3ef73cu: goto label_3ef73c;
        case 0x3ef740u: goto label_3ef740;
        case 0x3ef744u: goto label_3ef744;
        case 0x3ef748u: goto label_3ef748;
        case 0x3ef74cu: goto label_3ef74c;
        case 0x3ef750u: goto label_3ef750;
        case 0x3ef754u: goto label_3ef754;
        case 0x3ef758u: goto label_3ef758;
        case 0x3ef75cu: goto label_3ef75c;
        case 0x3ef760u: goto label_3ef760;
        case 0x3ef764u: goto label_3ef764;
        case 0x3ef768u: goto label_3ef768;
        case 0x3ef76cu: goto label_3ef76c;
        case 0x3ef770u: goto label_3ef770;
        case 0x3ef774u: goto label_3ef774;
        case 0x3ef778u: goto label_3ef778;
        case 0x3ef77cu: goto label_3ef77c;
        case 0x3ef780u: goto label_3ef780;
        case 0x3ef784u: goto label_3ef784;
        case 0x3ef788u: goto label_3ef788;
        case 0x3ef78cu: goto label_3ef78c;
        case 0x3ef790u: goto label_3ef790;
        case 0x3ef794u: goto label_3ef794;
        case 0x3ef798u: goto label_3ef798;
        case 0x3ef79cu: goto label_3ef79c;
        case 0x3ef7a0u: goto label_3ef7a0;
        case 0x3ef7a4u: goto label_3ef7a4;
        case 0x3ef7a8u: goto label_3ef7a8;
        case 0x3ef7acu: goto label_3ef7ac;
        case 0x3ef7b0u: goto label_3ef7b0;
        case 0x3ef7b4u: goto label_3ef7b4;
        case 0x3ef7b8u: goto label_3ef7b8;
        case 0x3ef7bcu: goto label_3ef7bc;
        case 0x3ef7c0u: goto label_3ef7c0;
        case 0x3ef7c4u: goto label_3ef7c4;
        case 0x3ef7c8u: goto label_3ef7c8;
        case 0x3ef7ccu: goto label_3ef7cc;
        case 0x3ef7d0u: goto label_3ef7d0;
        case 0x3ef7d4u: goto label_3ef7d4;
        case 0x3ef7d8u: goto label_3ef7d8;
        case 0x3ef7dcu: goto label_3ef7dc;
        case 0x3ef7e0u: goto label_3ef7e0;
        case 0x3ef7e4u: goto label_3ef7e4;
        case 0x3ef7e8u: goto label_3ef7e8;
        case 0x3ef7ecu: goto label_3ef7ec;
        case 0x3ef7f0u: goto label_3ef7f0;
        case 0x3ef7f4u: goto label_3ef7f4;
        case 0x3ef7f8u: goto label_3ef7f8;
        case 0x3ef7fcu: goto label_3ef7fc;
        case 0x3ef800u: goto label_3ef800;
        case 0x3ef804u: goto label_3ef804;
        case 0x3ef808u: goto label_3ef808;
        case 0x3ef80cu: goto label_3ef80c;
        case 0x3ef810u: goto label_3ef810;
        case 0x3ef814u: goto label_3ef814;
        case 0x3ef818u: goto label_3ef818;
        case 0x3ef81cu: goto label_3ef81c;
        case 0x3ef820u: goto label_3ef820;
        case 0x3ef824u: goto label_3ef824;
        case 0x3ef828u: goto label_3ef828;
        case 0x3ef82cu: goto label_3ef82c;
        case 0x3ef830u: goto label_3ef830;
        case 0x3ef834u: goto label_3ef834;
        case 0x3ef838u: goto label_3ef838;
        case 0x3ef83cu: goto label_3ef83c;
        default: break;
    }

    ctx->pc = 0x3ef188u;

label_3ef188:
    // 0x3ef188: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3ef188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3ef18c:
    // 0x3ef18c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3ef18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3ef190:
    // 0x3ef190: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3ef190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3ef194:
    // 0x3ef194: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ef194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ef198:
    // 0x3ef198: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3ef198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3ef19c:
    // 0x3ef19c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ef19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef1a0:
    // 0x3ef1a0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3ef1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3ef1a4:
    // 0x3ef1a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ef1a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ef1a8:
    // 0x3ef1a8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3ef1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3ef1ac:
    // 0x3ef1ac: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3ef1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_3ef1b0:
    // 0x3ef1b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3ef1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3ef1b4:
    // 0x3ef1b4: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3ef1b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3ef1b8:
    // 0x3ef1b8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3ef1b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3ef1bc:
    // 0x3ef1bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ef1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef1c0:
    // 0x3ef1c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ef1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ef1c4:
    // 0x3ef1c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ef1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ef1c8:
    // 0x3ef1c8: 0x40f809  jalr        $v0
label_3ef1cc:
    if (ctx->pc == 0x3EF1CCu) {
        ctx->pc = 0x3EF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1C8u;
        // 0x3ef1cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF1D0u;
        goto label_3ef1d0;
    }
    ctx->pc = 0x3EF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF1D0u);
        ctx->pc = 0x3EF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1C8u;
        // 0x3ef1cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF1C8u, 0x3EF1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF1D0u;
label_3ef1d0:
    // 0x3ef1d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef1d4:
    // 0x3ef1d4: 0x2e02003d  sltiu       $v0, $s0, 0x3D
    ctx->pc = 0x3ef1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3ef1d8:
    // 0x3ef1d8: 0x1040018e  beqz        $v0, . + 4 + (0x18E << 2)
label_3ef1dc:
    if (ctx->pc == 0x3EF1DCu) {
        ctx->pc = 0x3EF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1D8u;
        // 0x3ef1dc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF1E0u;
        goto label_3ef1e0;
    }
    ctx->pc = 0x3EF1D8u;
    {
        const bool branch_taken_0x3ef1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1D8u;
        // 0x3ef1dc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1d8) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF1E0u;
label_3ef1e0:
    // 0x3ef1e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ef1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ef1e4:
    // 0x3ef1e4: 0x24425d60  addiu       $v0, $v0, 0x5D60
    ctx->pc = 0x3ef1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23904));
label_3ef1e8:
    // 0x3ef1e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ef1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ef1ec:
    // 0x3ef1ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ef1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ef1f0:
    // 0x3ef1f0: 0x800008  jr          $a0
label_3ef1f4:
    if (ctx->pc == 0x3EF1F4u) {
        ctx->pc = 0x3EF1F8u;
        goto label_3ef1f8;
    }
    ctx->pc = 0x3EF1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EF1F8u: goto label_3ef1f8;
            case 0x3EF25Cu: goto label_3ef25c;
            case 0x3EF3E0u: goto label_3ef3e0;
            case 0x3EF420u: goto label_3ef420;
            case 0x3EF464u: goto label_3ef464;
            case 0x3EF474u: goto label_3ef474;
            case 0x3EF4C0u: goto label_3ef4c0;
            case 0x3EF4DCu: goto label_3ef4dc;
            case 0x3EF51Cu: goto label_3ef51c;
            case 0x3EF55Cu: goto label_3ef55c;
            case 0x3EF56Cu: goto label_3ef56c;
            case 0x3EF7B8u: goto label_3ef7b8;
            case 0x3EF814u: goto label_3ef814;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF1F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EF1F8u;
label_3ef1f8:
    // 0x3ef1f8: 0xc0ea14c  jal         func_3A8530
label_3ef1fc:
    if (ctx->pc == 0x3EF1FCu) {
        ctx->pc = 0x3EF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1F8u;
        // 0x3ef1fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF200u;
        goto label_3ef200;
    }
    ctx->pc = 0x3EF1F8u;
    SET_GPR_U32(ctx, 31, 0x3EF200u);
    ctx->pc = 0x3EF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1F8u;
    // 0x3ef1fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF1F8u, 0x3EF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF200u;
label_3ef200:
    // 0x3ef200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ef200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef204:
    // 0x3ef204: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x3ef204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3ef208:
    // 0x3ef208: 0x3c02fcbe  lui         $v0, 0xFCBE
    ctx->pc = 0x3ef208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64702 << 16));
label_3ef20c:
    // 0x3ef20c: 0x34429fbb  ori         $v0, $v0, 0x9FBB
    ctx->pc = 0x3ef20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40891);
label_3ef210:
    // 0x3ef210: 0x14620181  bne         $v1, $v0, . + 4 + (0x181 << 2)
label_3ef214:
    if (ctx->pc == 0x3EF214u) {
        ctx->pc = 0x3EF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF210u;
        // 0x3ef214: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF218u;
        goto label_3ef218;
    }
    ctx->pc = 0x3EF210u;
    {
        const bool branch_taken_0x3ef210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF210u;
        // 0x3ef214: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef210) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF218u;
label_3ef218:
    // 0x3ef218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef21c:
    // 0x3ef21c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3ef21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_3ef220:
    // 0x3ef220: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3ef220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3ef224:
    // 0x3ef224: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ef224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef228:
    // 0x3ef228: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x3ef228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
label_3ef22c:
    // 0x3ef22c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3ef22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3ef230:
    // 0x3ef230: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x3ef230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
label_3ef234:
    // 0x3ef234: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef238:
    // 0x3ef238: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3ef238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3ef23c:
    // 0x3ef23c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3ef240:
    // 0x3ef240: 0x40f809  jalr        $v0
label_3ef244:
    if (ctx->pc == 0x3EF244u) {
        ctx->pc = 0x3EF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF240u;
        // 0x3ef244: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF248u;
        goto label_3ef248;
    }
    ctx->pc = 0x3EF240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF248u);
        ctx->pc = 0x3EF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF240u;
        // 0x3ef244: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF240u, 0x3EF248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF248u;
label_3ef248:
    // 0x3ef248: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3ef248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef24c:
    // 0x3ef24c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3ef24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_3ef250:
    // 0x3ef250: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ef250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ef254:
    // 0x3ef254: 0x1000016f  b           . + 4 + (0x16F << 2)
label_3ef258:
    if (ctx->pc == 0x3EF258u) {
        ctx->pc = 0x3EF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF254u;
        // 0x3ef258: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF25Cu;
        goto label_3ef25c;
    }
    ctx->pc = 0x3EF254u;
    {
        const bool branch_taken_0x3ef254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF254u;
        // 0x3ef258: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef254) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF25Cu;
label_3ef25c:
    // 0x3ef25c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3ef25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef260:
    // 0x3ef260: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3ef260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ef264:
    // 0x3ef264: 0x3c02404f  lui         $v0, 0x404F
    ctx->pc = 0x3ef264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16463 << 16));
label_3ef268:
    // 0x3ef268: 0x8e6500c4  lw          $a1, 0xC4($s3)
    ctx->pc = 0x3ef268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3ef26c:
    // 0x3ef26c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3ef26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3ef270:
    // 0x3ef270: 0x3442e045  ori         $v0, $v0, 0xE045
    ctx->pc = 0x3ef270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57413);
label_3ef274:
    // 0x3ef274: 0x14a20167  bne         $a1, $v0, . + 4 + (0x167 << 2)
label_3ef278:
    if (ctx->pc == 0x3EF278u) {
        ctx->pc = 0x3EF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF274u;
        // 0x3ef278: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF27Cu;
        goto label_3ef27c;
    }
    ctx->pc = 0x3EF274u;
    {
        const bool branch_taken_0x3ef274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF274u;
        // 0x3ef278: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef274) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF27Cu;
label_3ef27c:
    // 0x3ef27c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3ef27cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3ef280:
    // 0x3ef280: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3ef280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3ef284:
    // 0x3ef284: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef288:
    // 0x3ef288: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ef288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef28c:
    // 0x3ef28c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ef28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ef290:
    // 0x3ef290: 0xc136afa  jal         func_4DABE8
label_3ef294:
    if (ctx->pc == 0x3EF294u) {
        ctx->pc = 0x3EF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF290u;
        // 0x3ef294: 0x24c61740  addiu       $a2, $a2, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF298u;
        goto label_3ef298;
    }
    ctx->pc = 0x3EF290u;
    SET_GPR_U32(ctx, 31, 0x3EF298u);
    ctx->pc = 0x3EF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF290u;
    // 0x3ef294: 0x24c61740  addiu       $a2, $a2, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3EF290u, 0x3EF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF298u;
label_3ef298:
    // 0x3ef298: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3ef298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3ef29c:
    // 0x3ef29c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ef29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ef2a0:
    // 0x3ef2a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ef2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ef2a4:
    // 0x3ef2a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef2a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef2a8:
    // 0x3ef2a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ef2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ef2ac:
    // 0x3ef2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ef2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef2b0:
    // 0x3ef2b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ef2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ef2b4:
    // 0x3ef2b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ef2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ef2b8:
    // 0x3ef2b8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ef2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ef2bc:
    // 0x3ef2bc: 0xc0e9ba2  jal         func_3A6E88
label_3ef2c0:
    if (ctx->pc == 0x3EF2C0u) {
        ctx->pc = 0x3EF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2BCu;
        // 0x3ef2c0: 0x3c123030  lui         $s2, 0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12336 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF2C4u;
        goto label_3ef2c4;
    }
    ctx->pc = 0x3EF2BCu;
    SET_GPR_U32(ctx, 31, 0x3EF2C4u);
    ctx->pc = 0x3EF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF2BCu;
    // 0x3ef2c0: 0x3c123030  lui         $s2, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12336 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3EF2BCu, 0x3EF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF2C4u;
label_3ef2c4:
    // 0x3ef2c4: 0x36523080  ori         $s2, $s2, 0x3080
    ctx->pc = 0x3ef2c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)12416);
label_3ef2c8:
    // 0x3ef2c8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3ef2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3ef2cc:
    // 0x3ef2cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ef2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ef2d0:
    // 0x3ef2d0: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3ef2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3ef2d4:
    // 0x3ef2d4: 0xc0cd4ee  jal         func_3353B8
label_3ef2d8:
    if (ctx->pc == 0x3EF2D8u) {
        ctx->pc = 0x3EF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2D4u;
        // 0x3ef2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF2DCu;
        goto label_3ef2dc;
    }
    ctx->pc = 0x3EF2D4u;
    SET_GPR_U32(ctx, 31, 0x3EF2DCu);
    ctx->pc = 0x3EF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF2D4u;
    // 0x3ef2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EF2D4u, 0x3EF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF2DCu;
label_3ef2dc:
    // 0x3ef2dc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3ef2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3ef2e0:
    // 0x3ef2e0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ef2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ef2e4:
    // 0x3ef2e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ef2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef2e8:
    // 0x3ef2e8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3ef2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_3ef2ec:
    // 0x3ef2ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3ef2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3ef2f0:
    // 0x3ef2f0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3ef2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3ef2f4:
    // 0x3ef2f4: 0x3c085d4c  lui         $t0, 0x5D4C
    ctx->pc = 0x3ef2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23884 << 16));
label_3ef2f8:
    // 0x3ef2f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef2fc:
    // 0x3ef2fc: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3ef2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ef300:
    // 0x3ef300: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x3ef300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
label_3ef304:
    // 0x3ef304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ef304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef308:
    // 0x3ef308: 0x350838ff  ori         $t0, $t0, 0x38FF
    ctx->pc = 0x3ef308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14591);
label_3ef30c:
    // 0x3ef30c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3ef30cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3ef310:
    // 0x3ef310: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3ef310u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_3ef314:
    // 0x3ef314: 0xc0e97ec  jal         func_3A5FB0
label_3ef318:
    if (ctx->pc == 0x3EF318u) {
        ctx->pc = 0x3EF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF314u;
        // 0x3ef318: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF31Cu;
        goto label_3ef31c;
    }
    ctx->pc = 0x3EF314u;
    SET_GPR_U32(ctx, 31, 0x3EF31Cu);
    ctx->pc = 0x3EF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF314u;
    // 0x3ef318: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x3EF314u, 0x3EF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF31Cu;
label_3ef31c:
    // 0x3ef31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef320:
    // 0x3ef320: 0xc0cd4ee  jal         func_3353B8
label_3ef324:
    if (ctx->pc == 0x3EF324u) {
        ctx->pc = 0x3EF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF320u;
        // 0x3ef324: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF328u;
        goto label_3ef328;
    }
    ctx->pc = 0x3EF320u;
    SET_GPR_U32(ctx, 31, 0x3EF328u);
    ctx->pc = 0x3EF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF320u;
    // 0x3ef324: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EF320u, 0x3EF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF328u;
label_3ef328:
    // 0x3ef328: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3ef328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3ef32c:
    // 0x3ef32c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3ef32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3ef330:
    // 0x3ef330: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3ef330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3ef334:
    // 0x3ef334: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ef334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ef338:
    // 0x3ef338: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3ef338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_3ef33c:
    // 0x3ef33c: 0x3c085d4c  lui         $t0, 0x5D4C
    ctx->pc = 0x3ef33cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23884 << 16));
label_3ef340:
    // 0x3ef340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef344:
    // 0x3ef344: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3ef344u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3ef348:
    // 0x3ef348: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3ef348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3ef34c:
    // 0x3ef34c: 0x350838ff  ori         $t0, $t0, 0x38FF
    ctx->pc = 0x3ef34cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14591);
label_3ef350:
    // 0x3ef350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ef350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef354:
    // 0x3ef354: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x3ef354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_3ef358:
    // 0x3ef358: 0x34c60018  ori         $a2, $a2, 0x18
    ctx->pc = 0x3ef358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
label_3ef35c:
    // 0x3ef35c: 0xc0e97ec  jal         func_3A5FB0
label_3ef360:
    if (ctx->pc == 0x3EF360u) {
        ctx->pc = 0x3EF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF35Cu;
        // 0x3ef360: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF364u;
        goto label_3ef364;
    }
    ctx->pc = 0x3EF35Cu;
    SET_GPR_U32(ctx, 31, 0x3EF364u);
    ctx->pc = 0x3EF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF35Cu;
    // 0x3ef360: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x3EF35Cu, 0x3EF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF364u;
label_3ef364:
    // 0x3ef364: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ef364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ef368:
    // 0x3ef368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef36c:
    // 0x3ef36c: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3ef36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3ef370:
    // 0x3ef370: 0xc0cd4ee  jal         func_3353B8
label_3ef374:
    if (ctx->pc == 0x3EF374u) {
        ctx->pc = 0x3EF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF370u;
        // 0x3ef374: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF378u;
        goto label_3ef378;
    }
    ctx->pc = 0x3EF370u;
    SET_GPR_U32(ctx, 31, 0x3EF378u);
    ctx->pc = 0x3EF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF370u;
    // 0x3ef374: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EF370u, 0x3EF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF378u;
label_3ef378:
    // 0x3ef378: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3ef378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3ef37c:
    // 0x3ef37c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ef37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ef380:
    // 0x3ef380: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ef380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef384:
    // 0x3ef384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef388:
    // 0x3ef388: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x3ef388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3ef38c:
    // 0x3ef38c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ef38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef390:
    // 0x3ef390: 0xc0f1658  jal         func_3C5960
label_3ef394:
    if (ctx->pc == 0x3EF394u) {
        ctx->pc = 0x3EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF390u;
        // 0x3ef394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF398u;
        goto label_3ef398;
    }
    ctx->pc = 0x3EF390u;
    SET_GPR_U32(ctx, 31, 0x3EF398u);
    ctx->pc = 0x3EF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF390u;
    // 0x3ef394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3EF390u, 0x3EF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF398u;
label_3ef398:
    // 0x3ef398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ef398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef39c:
    // 0x3ef39c: 0xc0cd4ee  jal         func_3353B8
label_3ef3a0:
    if (ctx->pc == 0x3EF3A0u) {
        ctx->pc = 0x3EF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF39Cu;
        // 0x3ef3a0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF3A4u;
        goto label_3ef3a4;
    }
    ctx->pc = 0x3EF39Cu;
    SET_GPR_U32(ctx, 31, 0x3EF3A4u);
    ctx->pc = 0x3EF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF39Cu;
    // 0x3ef3a0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EF39Cu, 0x3EF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF3A4u;
label_3ef3a4:
    // 0x3ef3a4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3ef3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3ef3a8:
    // 0x3ef3a8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ef3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ef3ac:
    // 0x3ef3ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ef3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ef3b0:
    // 0x3ef3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef3b4:
    // 0x3ef3b4: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x3ef3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3ef3b8:
    // 0x3ef3b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ef3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef3bc:
    // 0x3ef3bc: 0xc0f1658  jal         func_3C5960
label_3ef3c0:
    if (ctx->pc == 0x3EF3C0u) {
        ctx->pc = 0x3EF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3BCu;
        // 0x3ef3c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF3C4u;
        goto label_3ef3c4;
    }
    ctx->pc = 0x3EF3BCu;
    SET_GPR_U32(ctx, 31, 0x3EF3C4u);
    ctx->pc = 0x3EF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF3BCu;
    // 0x3ef3c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3EF3BCu, 0x3EF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF3C4u;
label_3ef3c4:
    // 0x3ef3c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef3c8:
    // 0x3ef3c8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3ef3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3ef3cc:
    // 0x3ef3cc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ef3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ef3d0:
    // 0x3ef3d0: 0x60f809  jalr        $v1
label_3ef3d4:
    if (ctx->pc == 0x3EF3D4u) {
        ctx->pc = 0x3EF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3D0u;
        // 0x3ef3d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF3D8u;
        goto label_3ef3d8;
    }
    ctx->pc = 0x3EF3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EF3D8u);
        ctx->pc = 0x3EF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3D0u;
        // 0x3ef3d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF3D0u, 0x3EF3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF3D8u;
label_3ef3d8:
    // 0x3ef3d8: 0x1000010f  b           . + 4 + (0x10F << 2)
label_3ef3dc:
    if (ctx->pc == 0x3EF3DCu) {
        ctx->pc = 0x3EF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3D8u;
        // 0x3ef3dc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF3E0u;
        goto label_3ef3e0;
    }
    ctx->pc = 0x3EF3D8u;
    {
        const bool branch_taken_0x3ef3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3D8u;
        // 0x3ef3dc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3d8) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF3E0u;
label_3ef3e0:
    // 0x3ef3e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef3e4:
    // 0x3ef3e4: 0xc0e90ca  jal         func_3A4328
label_3ef3e8:
    if (ctx->pc == 0x3EF3E8u) {
        ctx->pc = 0x3EF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3E4u;
        // 0x3ef3e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF3ECu;
        goto label_3ef3ec;
    }
    ctx->pc = 0x3EF3E4u;
    SET_GPR_U32(ctx, 31, 0x3EF3ECu);
    ctx->pc = 0x3EF3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF3E4u;
    // 0x3ef3e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EF3E4u, 0x3EF3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF3ECu;
label_3ef3ec:
    // 0x3ef3ec: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3ef3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3ef3f0:
    // 0x3ef3f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ef3f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef3f4:
    // 0x3ef3f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef3f8:
    // 0x3ef3f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ef3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef3fc:
    // 0x3ef3fc: 0xc0e911e  jal         func_3A4478
label_3ef400:
    if (ctx->pc == 0x3EF400u) {
        ctx->pc = 0x3EF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3FCu;
        // 0x3ef400: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF404u;
        goto label_3ef404;
    }
    ctx->pc = 0x3EF3FCu;
    SET_GPR_U32(ctx, 31, 0x3EF404u);
    ctx->pc = 0x3EF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF3FCu;
    // 0x3ef400: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3EF3FCu, 0x3EF404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF404u;
label_3ef404:
    // 0x3ef404: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ef404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef408:
    // 0x3ef408: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3ef408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3ef40c:
    // 0x3ef40c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ef40cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ef410:
    // 0x3ef410: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef414:
    // 0x3ef414: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3ef414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3ef418:
    // 0x3ef418: 0x100000fe  b           . + 4 + (0xFE << 2)
label_3ef41c:
    if (ctx->pc == 0x3EF41Cu) {
        ctx->pc = 0x3EF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF418u;
        // 0x3ef41c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF420u;
        goto label_3ef420;
    }
    ctx->pc = 0x3EF418u;
    {
        const bool branch_taken_0x3ef418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF418u;
        // 0x3ef41c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef418) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF420u;
label_3ef420:
    // 0x3ef420: 0x3c02a42f  lui         $v0, 0xA42F
    ctx->pc = 0x3ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42031 << 16));
label_3ef424:
    // 0x3ef424: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x3ef424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3ef428:
    // 0x3ef428: 0x34426e78  ori         $v0, $v0, 0x6E78
    ctx->pc = 0x3ef428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28280);
label_3ef42c:
    // 0x3ef42c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_3ef430:
    if (ctx->pc == 0x3EF430u) {
        ctx->pc = 0x3EF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF42Cu;
        // 0x3ef430: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF434u;
        goto label_3ef434;
    }
    ctx->pc = 0x3EF42Cu;
    {
        const bool branch_taken_0x3ef42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ef42c) {
            ctx->pc = 0x3EF430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF42Cu;
            // 0x3ef430: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF454u;
            goto label_3ef454;
        }
    }
    ctx->pc = 0x3EF434u;
label_3ef434:
    // 0x3ef434: 0x3c02d328  lui         $v0, 0xD328
    ctx->pc = 0x3ef434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54056 << 16));
label_3ef438:
    // 0x3ef438: 0x34425eee  ori         $v0, $v0, 0x5EEE
    ctx->pc = 0x3ef438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24302);
label_3ef43c:
    // 0x3ef43c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3ef440:
    if (ctx->pc == 0x3EF440u) {
        ctx->pc = 0x3EF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF43Cu;
        // 0x3ef440: 0x3c024d4c  lui         $v0, 0x4D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19788 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF444u;
        goto label_3ef444;
    }
    ctx->pc = 0x3EF43Cu;
    {
        const bool branch_taken_0x3ef43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF43Cu;
        // 0x3ef440: 0x3c024d4c  lui         $v0, 0x4D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19788 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef43c) {
            ctx->pc = 0x3EF450u;
            goto label_3ef450;
        }
    }
    ctx->pc = 0x3EF444u;
label_3ef444:
    // 0x3ef444: 0x3442cb4d  ori         $v0, $v0, 0xCB4D
    ctx->pc = 0x3ef444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52045);
label_3ef448:
    // 0x3ef448: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3ef44c:
    if (ctx->pc == 0x3EF44Cu) {
        ctx->pc = 0x3EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF448u;
        // 0x3ef44c: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF450u;
        goto label_3ef450;
    }
    ctx->pc = 0x3EF448u;
    {
        const bool branch_taken_0x3ef448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef448) {
            ctx->pc = 0x3EF44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF448u;
            // 0x3ef44c: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF468u;
            goto label_3ef468;
        }
    }
    ctx->pc = 0x3EF450u;
label_3ef450:
    // 0x3ef450: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ef450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef454:
    // 0x3ef454: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x3ef454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_3ef458:
    // 0x3ef458: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ef458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ef45c:
    // 0x3ef45c: 0x100000ed  b           . + 4 + (0xED << 2)
label_3ef460:
    if (ctx->pc == 0x3EF460u) {
        ctx->pc = 0x3EF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF45Cu;
        // 0x3ef460: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF464u;
        goto label_3ef464;
    }
    ctx->pc = 0x3EF45Cu;
    {
        const bool branch_taken_0x3ef45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF45Cu;
        // 0x3ef460: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef45c) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF464u;
label_3ef464:
    // 0x3ef464: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef468:
    // 0x3ef468: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ef468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ef46c:
    // 0x3ef46c: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_3ef470:
    if (ctx->pc == 0x3EF470u) {
        ctx->pc = 0x3EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF46Cu;
        // 0x3ef470: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF474u;
        goto label_3ef474;
    }
    ctx->pc = 0x3EF46Cu;
    {
        const bool branch_taken_0x3ef46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF46Cu;
        // 0x3ef470: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef46c) {
            ctx->pc = 0x3EF814u;
            goto label_3ef814;
        }
    }
    ctx->pc = 0x3EF474u;
label_3ef474:
    // 0x3ef474: 0xc0ea146  jal         func_3A8518
label_3ef478:
    if (ctx->pc == 0x3EF478u) {
        ctx->pc = 0x3EF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF474u;
        // 0x3ef478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF47Cu;
        goto label_3ef47c;
    }
    ctx->pc = 0x3EF474u;
    SET_GPR_U32(ctx, 31, 0x3EF47Cu);
    ctx->pc = 0x3EF478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF474u;
    // 0x3ef478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF474u, 0x3EF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF47Cu;
label_3ef47c:
    // 0x3ef47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef480:
    // 0x3ef480: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
label_3ef484:
    if (ctx->pc == 0x3EF484u) {
        ctx->pc = 0x3EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF480u;
        // 0x3ef484: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF488u;
        goto label_3ef488;
    }
    ctx->pc = 0x3EF480u;
    {
        const bool branch_taken_0x3ef480 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ef480) {
            ctx->pc = 0x3EF484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF480u;
            // 0x3ef484: 0x8e630054  lw          $v1, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF49Cu;
            goto label_3ef49c;
        }
    }
    ctx->pc = 0x3EF488u;
label_3ef488:
    // 0x3ef488: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef48c:
    // 0x3ef48c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3ef48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3ef490:
    // 0x3ef490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ef490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ef494:
    // 0x3ef494: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ef498:
    if (ctx->pc == 0x3EF498u) {
        ctx->pc = 0x3EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF494u;
        // 0x3ef498: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF49Cu;
        goto label_3ef49c;
    }
    ctx->pc = 0x3EF494u;
    {
        const bool branch_taken_0x3ef494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF494u;
        // 0x3ef498: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef494) {
            ctx->pc = 0x3EF4ACu;
            goto label_3ef4ac;
        }
    }
    ctx->pc = 0x3EF49Cu;
label_3ef49c:
    // 0x3ef49c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3ef49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3ef4a0:
    // 0x3ef4a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ef4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ef4a4:
    // 0x3ef4a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ef4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ef4a8:
    // 0x3ef4a8: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3ef4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3ef4ac:
    // 0x3ef4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef4b0:
    // 0x3ef4b0: 0xc0e85fa  jal         func_3A17E8
label_3ef4b4:
    if (ctx->pc == 0x3EF4B4u) {
        ctx->pc = 0x3EF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4B0u;
        // 0x3ef4b4: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4B8u;
        goto label_3ef4b8;
    }
    ctx->pc = 0x3EF4B0u;
    SET_GPR_U32(ctx, 31, 0x3EF4B8u);
    ctx->pc = 0x3EF4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4B0u;
    // 0x3ef4b4: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3EF4B0u, 0x3EF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4B8u;
label_3ef4b8:
    // 0x3ef4b8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_3ef4bc:
    if (ctx->pc == 0x3EF4BCu) {
        ctx->pc = 0x3EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4B8u;
        // 0x3ef4bc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4C0u;
        goto label_3ef4c0;
    }
    ctx->pc = 0x3EF4B8u;
    {
        const bool branch_taken_0x3ef4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4B8u;
        // 0x3ef4bc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4b8) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF4C0u;
label_3ef4c0:
    // 0x3ef4c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ef4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ef4c4:
    // 0x3ef4c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3ef4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ef4c8:
    // 0x3ef4c8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ef4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ef4cc:
    // 0x3ef4cc: 0xc0440c6  jal         func_110318
label_3ef4d0:
    if (ctx->pc == 0x3EF4D0u) {
        ctx->pc = 0x3EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4CCu;
        // 0x3ef4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4D4u;
        goto label_3ef4d4;
    }
    ctx->pc = 0x3EF4CCu;
    SET_GPR_U32(ctx, 31, 0x3EF4D4u);
    ctx->pc = 0x3EF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4CCu;
    // 0x3ef4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EF4CCu, 0x3EF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4D4u;
label_3ef4d4:
    // 0x3ef4d4: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_3ef4d8:
    if (ctx->pc == 0x3EF4D8u) {
        ctx->pc = 0x3EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4D4u;
        // 0x3ef4d8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4DCu;
        goto label_3ef4dc;
    }
    ctx->pc = 0x3EF4D4u;
    {
        const bool branch_taken_0x3ef4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4D4u;
        // 0x3ef4d8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4d4) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF4DCu;
label_3ef4dc:
    // 0x3ef4dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ef4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ef4e0:
    // 0x3ef4e0: 0xc0ea12a  jal         func_3A84A8
label_3ef4e4:
    if (ctx->pc == 0x3EF4E4u) {
        ctx->pc = 0x3EF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4E0u;
        // 0x3ef4e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4E8u;
        goto label_3ef4e8;
    }
    ctx->pc = 0x3EF4E0u;
    SET_GPR_U32(ctx, 31, 0x3EF4E8u);
    ctx->pc = 0x3EF4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4E0u;
    // 0x3ef4e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF4E0u, 0x3EF4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4E8u;
label_3ef4e8:
    // 0x3ef4e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ef4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef4ec:
    // 0x3ef4ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef4f0:
    // 0x3ef4f0: 0xc0ea14c  jal         func_3A8530
label_3ef4f4:
    if (ctx->pc == 0x3EF4F4u) {
        ctx->pc = 0x3EF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4F0u;
        // 0x3ef4f4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF4F8u;
        goto label_3ef4f8;
    }
    ctx->pc = 0x3EF4F0u;
    SET_GPR_U32(ctx, 31, 0x3EF4F8u);
    ctx->pc = 0x3EF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4F0u;
    // 0x3ef4f4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF4F0u, 0x3EF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4F8u;
label_3ef4f8:
    // 0x3ef4f8: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3ef4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef4fc:
    // 0x3ef4fc: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3ef4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3ef500:
    // 0x3ef500: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ef500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ef504:
    // 0x3ef504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef508:
    // 0x3ef508: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ef508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ef50c:
    // 0x3ef50c: 0xc0e8616  jal         func_3A1858
label_3ef510:
    if (ctx->pc == 0x3EF510u) {
        ctx->pc = 0x3EF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF50Cu;
        // 0x3ef510: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF514u;
        goto label_3ef514;
    }
    ctx->pc = 0x3EF50Cu;
    SET_GPR_U32(ctx, 31, 0x3EF514u);
    ctx->pc = 0x3EF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF50Cu;
    // 0x3ef510: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3EF50Cu, 0x3EF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF514u;
label_3ef514:
    // 0x3ef514: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_3ef518:
    if (ctx->pc == 0x3EF518u) {
        ctx->pc = 0x3EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF514u;
        // 0x3ef518: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF51Cu;
        goto label_3ef51c;
    }
    ctx->pc = 0x3EF514u;
    {
        const bool branch_taken_0x3ef514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF514u;
        // 0x3ef518: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef514) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF51Cu;
label_3ef51c:
    // 0x3ef51c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef520:
    // 0x3ef520: 0xc0ea12a  jal         func_3A84A8
label_3ef524:
    if (ctx->pc == 0x3EF524u) {
        ctx->pc = 0x3EF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF520u;
        // 0x3ef524: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF528u;
        goto label_3ef528;
    }
    ctx->pc = 0x3EF520u;
    SET_GPR_U32(ctx, 31, 0x3EF528u);
    ctx->pc = 0x3EF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF520u;
    // 0x3ef524: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF520u, 0x3EF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF528u;
label_3ef528:
    // 0x3ef528: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef52c:
    // 0x3ef52c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef530:
    // 0x3ef530: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ef530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef534:
    // 0x3ef534: 0xc0ea12a  jal         func_3A84A8
label_3ef538:
    if (ctx->pc == 0x3EF538u) {
        ctx->pc = 0x3EF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF534u;
        // 0x3ef538: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF53Cu;
        goto label_3ef53c;
    }
    ctx->pc = 0x3EF534u;
    SET_GPR_U32(ctx, 31, 0x3EF53Cu);
    ctx->pc = 0x3EF538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF534u;
    // 0x3ef538: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF534u, 0x3EF53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF53Cu;
label_3ef53c:
    // 0x3ef53c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef53cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef540:
    // 0x3ef540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef544:
    // 0x3ef544: 0xc0ea146  jal         func_3A8518
label_3ef548:
    if (ctx->pc == 0x3EF548u) {
        ctx->pc = 0x3EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF544u;
        // 0x3ef548: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF54Cu;
        goto label_3ef54c;
    }
    ctx->pc = 0x3EF544u;
    SET_GPR_U32(ctx, 31, 0x3EF54Cu);
    ctx->pc = 0x3EF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF544u;
    // 0x3ef548: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF544u, 0x3EF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF54Cu;
label_3ef54c:
    // 0x3ef54c: 0xc0ea146  jal         func_3A8518
label_3ef550:
    if (ctx->pc == 0x3EF550u) {
        ctx->pc = 0x3EF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF54Cu;
        // 0x3ef550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF554u;
        goto label_3ef554;
    }
    ctx->pc = 0x3EF54Cu;
    SET_GPR_U32(ctx, 31, 0x3EF554u);
    ctx->pc = 0x3EF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF54Cu;
    // 0x3ef550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF54Cu, 0x3EF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF554u;
label_3ef554:
    // 0x3ef554: 0xc0ea14c  jal         func_3A8530
label_3ef558:
    if (ctx->pc == 0x3EF558u) {
        ctx->pc = 0x3EF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF554u;
        // 0x3ef558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF55Cu;
        goto label_3ef55c;
    }
    ctx->pc = 0x3EF554u;
    SET_GPR_U32(ctx, 31, 0x3EF55Cu);
    ctx->pc = 0x3EF558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF554u;
    // 0x3ef558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF554u, 0x3EF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF55Cu;
label_3ef55c:
    // 0x3ef55c: 0xc0ea14c  jal         func_3A8530
label_3ef560:
    if (ctx->pc == 0x3EF560u) {
        ctx->pc = 0x3EF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF55Cu;
        // 0x3ef560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF564u;
        goto label_3ef564;
    }
    ctx->pc = 0x3EF55Cu;
    SET_GPR_U32(ctx, 31, 0x3EF564u);
    ctx->pc = 0x3EF560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF55Cu;
    // 0x3ef560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF55Cu, 0x3EF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF564u;
label_3ef564:
    // 0x3ef564: 0x100000ac  b           . + 4 + (0xAC << 2)
label_3ef568:
    if (ctx->pc == 0x3EF568u) {
        ctx->pc = 0x3EF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF564u;
        // 0x3ef568: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF56Cu;
        goto label_3ef56c;
    }
    ctx->pc = 0x3EF564u;
    {
        const bool branch_taken_0x3ef564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF564u;
        // 0x3ef568: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef564) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF56Cu;
label_3ef56c:
    // 0x3ef56c: 0xc0ea146  jal         func_3A8518
label_3ef570:
    if (ctx->pc == 0x3EF570u) {
        ctx->pc = 0x3EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF56Cu;
        // 0x3ef570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF574u;
        goto label_3ef574;
    }
    ctx->pc = 0x3EF56Cu;
    SET_GPR_U32(ctx, 31, 0x3EF574u);
    ctx->pc = 0x3EF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF56Cu;
    // 0x3ef570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF56Cu, 0x3EF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF574u;
label_3ef574:
    // 0x3ef574: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef578:
    // 0x3ef578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ef578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef57c:
    // 0x3ef57c: 0xc0ea12a  jal         func_3A84A8
label_3ef580:
    if (ctx->pc == 0x3EF580u) {
        ctx->pc = 0x3EF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF57Cu;
        // 0x3ef580: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF584u;
        goto label_3ef584;
    }
    ctx->pc = 0x3EF57Cu;
    SET_GPR_U32(ctx, 31, 0x3EF584u);
    ctx->pc = 0x3EF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF57Cu;
    // 0x3ef580: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF57Cu, 0x3EF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF584u;
label_3ef584:
    // 0x3ef584: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef588:
    // 0x3ef588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef58c:
    // 0x3ef58c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ef58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef590:
    // 0x3ef590: 0xc0ea12a  jal         func_3A84A8
label_3ef594:
    if (ctx->pc == 0x3EF594u) {
        ctx->pc = 0x3EF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF590u;
        // 0x3ef594: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF598u;
        goto label_3ef598;
    }
    ctx->pc = 0x3EF590u;
    SET_GPR_U32(ctx, 31, 0x3EF598u);
    ctx->pc = 0x3EF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF590u;
    // 0x3ef594: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF590u, 0x3EF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF598u;
label_3ef598:
    // 0x3ef598: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef59c:
    // 0x3ef59c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5a0:
    // 0x3ef5a0: 0xc0ea146  jal         func_3A8518
label_3ef5a4:
    if (ctx->pc == 0x3EF5A4u) {
        ctx->pc = 0x3EF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5A0u;
        // 0x3ef5a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF5A8u;
        goto label_3ef5a8;
    }
    ctx->pc = 0x3EF5A0u;
    SET_GPR_U32(ctx, 31, 0x3EF5A8u);
    ctx->pc = 0x3EF5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF5A0u;
    // 0x3ef5a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF5A0u, 0x3EF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF5A8u;
label_3ef5a8:
    // 0x3ef5a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5ac:
    // 0x3ef5ac: 0xc0ea14c  jal         func_3A8530
label_3ef5b0:
    if (ctx->pc == 0x3EF5B0u) {
        ctx->pc = 0x3EF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5ACu;
        // 0x3ef5b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF5B4u;
        goto label_3ef5b4;
    }
    ctx->pc = 0x3EF5ACu;
    SET_GPR_U32(ctx, 31, 0x3EF5B4u);
    ctx->pc = 0x3EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF5ACu;
    // 0x3ef5b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF5ACu, 0x3EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF5B4u;
label_3ef5b4:
    // 0x3ef5b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ef5b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5b8:
    // 0x3ef5b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ef5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ef5bc:
    // 0x3ef5bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef5c0:
    // 0x3ef5c0: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3ef5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3ef5c4:
    // 0x3ef5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ef5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5c8:
    // 0x3ef5c8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3ef5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3ef5cc:
    // 0x3ef5cc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3ef5d0:
    // 0x3ef5d0: 0x60f809  jalr        $v1
label_3ef5d4:
    if (ctx->pc == 0x3EF5D4u) {
        ctx->pc = 0x3EF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5D0u;
        // 0x3ef5d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF5D8u;
        goto label_3ef5d8;
    }
    ctx->pc = 0x3EF5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EF5D8u);
        ctx->pc = 0x3EF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5D0u;
        // 0x3ef5d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF5D0u, 0x3EF5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF5D8u;
label_3ef5d8:
    // 0x3ef5d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ef5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ef5dc:
    // 0x3ef5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ef5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5e0:
    // 0x3ef5e0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3ef5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3ef5e4:
    // 0x3ef5e4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3ef5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3ef5e8:
    // 0x3ef5e8: 0x60f809  jalr        $v1
label_3ef5ec:
    if (ctx->pc == 0x3EF5ECu) {
        ctx->pc = 0x3EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5E8u;
        // 0x3ef5ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF5F0u;
        goto label_3ef5f0;
    }
    ctx->pc = 0x3EF5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EF5F0u);
        ctx->pc = 0x3EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5E8u;
        // 0x3ef5ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF5E8u, 0x3EF5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF5F0u;
label_3ef5f0:
    // 0x3ef5f0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3ef5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef5f4:
    // 0x3ef5f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ef5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5f8:
    // 0x3ef5f8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3ef5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3ef5fc:
    // 0x3ef5fc: 0xc0e896e  jal         func_3A25B8
label_3ef600:
    if (ctx->pc == 0x3EF600u) {
        ctx->pc = 0x3EF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5FCu;
        // 0x3ef600: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF604u;
        goto label_3ef604;
    }
    ctx->pc = 0x3EF5FCu;
    SET_GPR_U32(ctx, 31, 0x3EF604u);
    ctx->pc = 0x3EF600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF5FCu;
    // 0x3ef600: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3EF5FCu, 0x3EF604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF604u;
label_3ef604:
    // 0x3ef604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef608:
    // 0x3ef608: 0xc0e862e  jal         func_3A18B8
label_3ef60c:
    if (ctx->pc == 0x3EF60Cu) {
        ctx->pc = 0x3EF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF608u;
        // 0x3ef60c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF610u;
        goto label_3ef610;
    }
    ctx->pc = 0x3EF608u;
    SET_GPR_U32(ctx, 31, 0x3EF610u);
    ctx->pc = 0x3EF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF608u;
    // 0x3ef60c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3EF608u, 0x3EF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF610u;
label_3ef610:
    // 0x3ef610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ef610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef614:
    // 0x3ef614: 0xc0e896c  jal         func_3A25B0
label_3ef618:
    if (ctx->pc == 0x3EF618u) {
        ctx->pc = 0x3EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF614u;
        // 0x3ef618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF61Cu;
        goto label_3ef61c;
    }
    ctx->pc = 0x3EF614u;
    SET_GPR_U32(ctx, 31, 0x3EF61Cu);
    ctx->pc = 0x3EF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF614u;
    // 0x3ef618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3EF614u, 0x3EF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF61Cu;
label_3ef61c:
    // 0x3ef61c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x3ef61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3ef620:
    // 0x3ef620: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3ef620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_3ef624:
    // 0x3ef624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ef624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ef628:
    // 0x3ef628: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x3ef628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_3ef62c:
    // 0x3ef62c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3ef62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3ef630:
    // 0x3ef630: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3ef630u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef634:
    // 0x3ef634: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ef634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef638:
    // 0x3ef638: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ef638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3ef63c:
    // 0x3ef63c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3ef63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ef640:
    // 0x3ef640: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3ef640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ef644:
    // 0x3ef644: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x3ef644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
label_3ef648:
    // 0x3ef648: 0x7e650010  sq          $a1, 0x10($s3)
    ctx->pc = 0x3ef648u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 5));
label_3ef64c:
    // 0x3ef64c: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
label_3ef650:
    if (ctx->pc == 0x3EF650u) {
        ctx->pc = 0x3EF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF64Cu;
        // 0x3ef650: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF654u;
        goto label_3ef654;
    }
    ctx->pc = 0x3EF64Cu;
    {
        const bool branch_taken_0x3ef64c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF64Cu;
        // 0x3ef650: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef64c) {
            ctx->pc = 0x3EF700u;
            goto label_3ef700;
        }
    }
    ctx->pc = 0x3EF654u;
label_3ef654:
    // 0x3ef654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef658:
    // 0x3ef658: 0xc0e8e26  jal         func_3A3898
label_3ef65c:
    if (ctx->pc == 0x3EF65Cu) {
        ctx->pc = 0x3EF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF658u;
        // 0x3ef65c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF660u;
        goto label_3ef660;
    }
    ctx->pc = 0x3EF658u;
    SET_GPR_U32(ctx, 31, 0x3EF660u);
    ctx->pc = 0x3EF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF658u;
    // 0x3ef65c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3EF658u, 0x3EF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF660u;
label_3ef660:
    // 0x3ef660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ef660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ef664:
    // 0x3ef664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ef664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ef668:
    // 0x3ef668: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3ef668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3ef66c:
    // 0x3ef66c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3ef66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3ef670:
    // 0x3ef670: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3ef670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3ef674:
    // 0x3ef674: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3ef674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ef678:
    // 0x3ef678: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3ef678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef67c:
    // 0x3ef67c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ef67cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef680:
    // 0x3ef680: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3ef680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ef684:
    // 0x3ef684: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3ef684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3ef688:
    // 0x3ef688: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3ef688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3ef68c:
    // 0x3ef68c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3ef68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3ef690:
    // 0x3ef690: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ef690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ef694:
    // 0x3ef694: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ef694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ef698:
    // 0x3ef698: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ef698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ef69c:
    // 0x3ef69c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3ef69cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ef6a0:
    // 0x3ef6a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ef6a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ef6a4:
    // 0x3ef6a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ef6a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ef6a8:
    // 0x3ef6a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ef6a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ef6ac:
    // 0x3ef6ac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3ef6acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ef6b0:
    // 0x3ef6b0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3ef6b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ef6b4:
    // 0x3ef6b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ef6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ef6b8:
    // 0x3ef6b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ef6b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ef6bc:
    // 0x3ef6bc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3ef6bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ef6c0:
    // 0x3ef6c0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3ef6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ef6c4:
    // 0x3ef6c4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3ef6c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ef6c8:
    // 0x3ef6c8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3ef6c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ef6cc:
    // 0x3ef6cc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3ef6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ef6d0:
    // 0x3ef6d0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3ef6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ef6d4:
    // 0x3ef6d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3ef6d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ef6d8:
    // 0x3ef6d8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ef6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ef6dc:
    // 0x3ef6dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ef6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef6e0:
    // 0x3ef6e0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3ef6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3ef6e4:
    // 0x3ef6e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ef6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ef6e8:
    // 0x3ef6e8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3ef6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3ef6ec:
    // 0x3ef6ec: 0xc136b18  jal         func_4DAC60
label_3ef6f0:
    if (ctx->pc == 0x3EF6F0u) {
        ctx->pc = 0x3EF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF6ECu;
        // 0x3ef6f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF6F4u;
        goto label_3ef6f4;
    }
    ctx->pc = 0x3EF6ECu;
    SET_GPR_U32(ctx, 31, 0x3EF6F4u);
    ctx->pc = 0x3EF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF6ECu;
    // 0x3ef6f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EF6ECu, 0x3EF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF6F4u;
label_3ef6f4:
    // 0x3ef6f4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3ef6f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ef6f8:
    // 0x3ef6f8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3ef6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3ef6fc:
    // 0x3ef6fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ef6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ef700:
    // 0x3ef700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef704:
    // 0x3ef704: 0xc0ea176  jal         func_3A85D8
label_3ef708:
    if (ctx->pc == 0x3EF708u) {
        ctx->pc = 0x3EF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF704u;
        // 0x3ef708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF70Cu;
        goto label_3ef70c;
    }
    ctx->pc = 0x3EF704u;
    SET_GPR_U32(ctx, 31, 0x3EF70Cu);
    ctx->pc = 0x3EF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF704u;
    // 0x3ef708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3EF704u, 0x3EF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF70Cu;
label_3ef70c:
    // 0x3ef70c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ef70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ef710:
    // 0x3ef710: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ef710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ef714:
    // 0x3ef714: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ef714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ef718:
    // 0x3ef718: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ef718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef71c:
    // 0x3ef71c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ef71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ef720:
    // 0x3ef720: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ef720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ef724:
    // 0x3ef724: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ef724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ef728:
    // 0x3ef728: 0x40f809  jalr        $v0
label_3ef72c:
    if (ctx->pc == 0x3EF72Cu) {
        ctx->pc = 0x3EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF728u;
        // 0x3ef72c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF730u;
        goto label_3ef730;
    }
    ctx->pc = 0x3EF728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF730u);
        ctx->pc = 0x3EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF728u;
        // 0x3ef72c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF728u, 0x3EF730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF730u;
label_3ef730:
    // 0x3ef730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef734:
    // 0x3ef734: 0xc0e8e26  jal         func_3A3898
label_3ef738:
    if (ctx->pc == 0x3EF738u) {
        ctx->pc = 0x3EF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF734u;
        // 0x3ef738: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF73Cu;
        goto label_3ef73c;
    }
    ctx->pc = 0x3EF734u;
    SET_GPR_U32(ctx, 31, 0x3EF73Cu);
    ctx->pc = 0x3EF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF734u;
    // 0x3ef738: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3EF734u, 0x3EF73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF73Cu;
label_3ef73c:
    // 0x3ef73c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3ef73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3ef740:
    // 0x3ef740: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ef740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ef744:
    // 0x3ef744: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3ef744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3ef748:
    // 0x3ef748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ef748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ef74c:
    // 0x3ef74c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3ef74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3ef750:
    // 0x3ef750: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ef750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ef754:
    // 0x3ef754: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ef754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ef758:
    // 0x3ef758: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ef758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ef75c:
    // 0x3ef75c: 0xc0e8dee  jal         func_3A37B8
label_3ef760:
    if (ctx->pc == 0x3EF760u) {
        ctx->pc = 0x3EF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF75Cu;
        // 0x3ef760: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF764u;
        goto label_3ef764;
    }
    ctx->pc = 0x3EF75Cu;
    SET_GPR_U32(ctx, 31, 0x3EF764u);
    ctx->pc = 0x3EF760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF75Cu;
    // 0x3ef760: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EF75Cu, 0x3EF764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF764u;
label_3ef764:
    // 0x3ef764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ef764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef768:
    // 0x3ef768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ef768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ef76c:
    // 0x3ef76c: 0xc0ea164  jal         func_3A8590
label_3ef770:
    if (ctx->pc == 0x3EF770u) {
        ctx->pc = 0x3EF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF76Cu;
        // 0x3ef770: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF774u;
        goto label_3ef774;
    }
    ctx->pc = 0x3EF76Cu;
    SET_GPR_U32(ctx, 31, 0x3EF774u);
    ctx->pc = 0x3EF770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF76Cu;
    // 0x3ef770: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3EF76Cu, 0x3EF774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF774u;
label_3ef774:
    // 0x3ef774: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef778:
    // 0x3ef778: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3ef778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ef77c:
    // 0x3ef77c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef780:
    // 0x3ef780: 0xc0ea158  jal         func_3A8560
label_3ef784:
    if (ctx->pc == 0x3EF784u) {
        ctx->pc = 0x3EF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF780u;
        // 0x3ef784: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF788u;
        goto label_3ef788;
    }
    ctx->pc = 0x3EF780u;
    SET_GPR_U32(ctx, 31, 0x3EF788u);
    ctx->pc = 0x3EF784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF780u;
    // 0x3ef784: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3EF780u, 0x3EF788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF788u;
label_3ef788:
    // 0x3ef788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ef788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef78c:
    // 0x3ef78c: 0xc0ea16a  jal         func_3A85A8
label_3ef790:
    if (ctx->pc == 0x3EF790u) {
        ctx->pc = 0x3EF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF78Cu;
        // 0x3ef790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF794u;
        goto label_3ef794;
    }
    ctx->pc = 0x3EF78Cu;
    SET_GPR_U32(ctx, 31, 0x3EF794u);
    ctx->pc = 0x3EF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF78Cu;
    // 0x3ef790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3EF78Cu, 0x3EF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF794u;
label_3ef794:
    // 0x3ef794: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ef794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ef798:
    // 0x3ef798: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ef798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ef79c:
    // 0x3ef79c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3ef79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3ef7a0:
    // 0x3ef7a0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ef7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ef7a4:
    // 0x3ef7a4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ef7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ef7a8:
    // 0x3ef7a8: 0x40f809  jalr        $v0
label_3ef7ac:
    if (ctx->pc == 0x3EF7ACu) {
        ctx->pc = 0x3EF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7A8u;
        // 0x3ef7ac: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7B0u;
        goto label_3ef7b0;
    }
    ctx->pc = 0x3EF7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF7B0u);
        ctx->pc = 0x3EF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7A8u;
        // 0x3ef7ac: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF7A8u, 0x3EF7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF7B0u;
label_3ef7b0:
    // 0x3ef7b0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ef7b4:
    if (ctx->pc == 0x3EF7B4u) {
        ctx->pc = 0x3EF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7B0u;
        // 0x3ef7b4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7B8u;
        goto label_3ef7b8;
    }
    ctx->pc = 0x3EF7B0u;
    {
        const bool branch_taken_0x3ef7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7B0u;
        // 0x3ef7b4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7b0) {
            ctx->pc = 0x3EF818u;
            goto label_3ef818;
        }
    }
    ctx->pc = 0x3EF7B8u;
label_3ef7b8:
    // 0x3ef7b8: 0xc0ea146  jal         func_3A8518
label_3ef7bc:
    if (ctx->pc == 0x3EF7BCu) {
        ctx->pc = 0x3EF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7B8u;
        // 0x3ef7bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7C0u;
        goto label_3ef7c0;
    }
    ctx->pc = 0x3EF7B8u;
    SET_GPR_U32(ctx, 31, 0x3EF7C0u);
    ctx->pc = 0x3EF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7B8u;
    // 0x3ef7bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF7B8u, 0x3EF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7C0u;
label_3ef7c0:
    // 0x3ef7c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ef7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7c4:
    // 0x3ef7c4: 0xc0ea12a  jal         func_3A84A8
label_3ef7c8:
    if (ctx->pc == 0x3EF7C8u) {
        ctx->pc = 0x3EF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7C4u;
        // 0x3ef7c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7CCu;
        goto label_3ef7cc;
    }
    ctx->pc = 0x3EF7C4u;
    SET_GPR_U32(ctx, 31, 0x3EF7CCu);
    ctx->pc = 0x3EF7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7C4u;
    // 0x3ef7c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF7C4u, 0x3EF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7CCu;
label_3ef7cc:
    // 0x3ef7cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ef7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ef7d0:
    // 0x3ef7d0: 0xc0ea12a  jal         func_3A84A8
label_3ef7d4:
    if (ctx->pc == 0x3EF7D4u) {
        ctx->pc = 0x3EF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7D0u;
        // 0x3ef7d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7D8u;
        goto label_3ef7d8;
    }
    ctx->pc = 0x3EF7D0u;
    SET_GPR_U32(ctx, 31, 0x3EF7D8u);
    ctx->pc = 0x3EF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7D0u;
    // 0x3ef7d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF7D0u, 0x3EF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7D8u;
label_3ef7d8:
    // 0x3ef7d8: 0xc0ea146  jal         func_3A8518
label_3ef7dc:
    if (ctx->pc == 0x3EF7DCu) {
        ctx->pc = 0x3EF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7D8u;
        // 0x3ef7dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7E0u;
        goto label_3ef7e0;
    }
    ctx->pc = 0x3EF7D8u;
    SET_GPR_U32(ctx, 31, 0x3EF7E0u);
    ctx->pc = 0x3EF7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7D8u;
    // 0x3ef7dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EF7D8u, 0x3EF7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7E0u;
label_3ef7e0:
    // 0x3ef7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ef7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7e4:
    // 0x3ef7e4: 0xc0ea14c  jal         func_3A8530
label_3ef7e8:
    if (ctx->pc == 0x3EF7E8u) {
        ctx->pc = 0x3EF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7E4u;
        // 0x3ef7e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7ECu;
        goto label_3ef7ec;
    }
    ctx->pc = 0x3EF7E4u;
    SET_GPR_U32(ctx, 31, 0x3EF7ECu);
    ctx->pc = 0x3EF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7E4u;
    // 0x3ef7e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF7E4u, 0x3EF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7ECu;
label_3ef7ec:
    // 0x3ef7ec: 0xc0e896e  jal         func_3A25B8
label_3ef7f0:
    if (ctx->pc == 0x3EF7F0u) {
        ctx->pc = 0x3EF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7ECu;
        // 0x3ef7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF7F4u;
        goto label_3ef7f4;
    }
    ctx->pc = 0x3EF7ECu;
    SET_GPR_U32(ctx, 31, 0x3EF7F4u);
    ctx->pc = 0x3EF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7ECu;
    // 0x3ef7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3EF7ECu, 0x3EF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7F4u;
label_3ef7f4:
    // 0x3ef7f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ef7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7f8:
    // 0x3ef7f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ef7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef7fc:
    // 0x3ef7fc: 0xc0e8604  jal         func_3A1810
label_3ef800:
    if (ctx->pc == 0x3EF800u) {
        ctx->pc = 0x3EF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7FCu;
        // 0x3ef800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF804u;
        goto label_3ef804;
    }
    ctx->pc = 0x3EF7FCu;
    SET_GPR_U32(ctx, 31, 0x3EF804u);
    ctx->pc = 0x3EF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7FCu;
    // 0x3ef800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3EF7FCu, 0x3EF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF804u;
label_3ef804:
    // 0x3ef804: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ef804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef808:
    // 0x3ef808: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ef808u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef80c:
    // 0x3ef80c: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3ef80cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3ef810:
    // 0x3ef810: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x3ef810u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
label_3ef814:
    // 0x3ef814: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3ef814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3ef818:
    // 0x3ef818: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3ef818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ef81c:
    // 0x3ef81c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3ef81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ef820:
    // 0x3ef820: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3ef820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ef824:
    // 0x3ef824: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3ef824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ef828:
    // 0x3ef828: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3ef828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ef82c:
    // 0x3ef82c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3ef82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3ef830:
    // 0x3ef830: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3ef830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ef834:
    // 0x3ef834: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3ef834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ef838:
    // 0x3ef838: 0x3e00008  jr          $ra
label_3ef83c:
    if (ctx->pc == 0x3EF83Cu) {
        ctx->pc = 0x3EF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF838u;
        // 0x3ef83c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF840u;
        goto label_fallthrough_0x3ef838;
    }
    ctx->pc = 0x3EF838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF838u;
        // 0x3ef83c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ef838:
    ctx->pc = 0x3EF840u;
}
