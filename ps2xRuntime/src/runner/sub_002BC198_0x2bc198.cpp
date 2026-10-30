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

// Function: sub_002BC198
// Address: 0x2bc198 - 0x2bca20
void sub_002BC198_0x2bc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC198_0x2bc198");
#endif

    switch (ctx->pc) {
        case 0x2bc198u: goto label_2bc198;
        case 0x2bc19cu: goto label_2bc19c;
        case 0x2bc1a0u: goto label_2bc1a0;
        case 0x2bc1a4u: goto label_2bc1a4;
        case 0x2bc1a8u: goto label_2bc1a8;
        case 0x2bc1acu: goto label_2bc1ac;
        case 0x2bc1b0u: goto label_2bc1b0;
        case 0x2bc1b4u: goto label_2bc1b4;
        case 0x2bc1b8u: goto label_2bc1b8;
        case 0x2bc1bcu: goto label_2bc1bc;
        case 0x2bc1c0u: goto label_2bc1c0;
        case 0x2bc1c4u: goto label_2bc1c4;
        case 0x2bc1c8u: goto label_2bc1c8;
        case 0x2bc1ccu: goto label_2bc1cc;
        case 0x2bc1d0u: goto label_2bc1d0;
        case 0x2bc1d4u: goto label_2bc1d4;
        case 0x2bc1d8u: goto label_2bc1d8;
        case 0x2bc1dcu: goto label_2bc1dc;
        case 0x2bc1e0u: goto label_2bc1e0;
        case 0x2bc1e4u: goto label_2bc1e4;
        case 0x2bc1e8u: goto label_2bc1e8;
        case 0x2bc1ecu: goto label_2bc1ec;
        case 0x2bc1f0u: goto label_2bc1f0;
        case 0x2bc1f4u: goto label_2bc1f4;
        case 0x2bc1f8u: goto label_2bc1f8;
        case 0x2bc1fcu: goto label_2bc1fc;
        case 0x2bc200u: goto label_2bc200;
        case 0x2bc204u: goto label_2bc204;
        case 0x2bc208u: goto label_2bc208;
        case 0x2bc20cu: goto label_2bc20c;
        case 0x2bc210u: goto label_2bc210;
        case 0x2bc214u: goto label_2bc214;
        case 0x2bc218u: goto label_2bc218;
        case 0x2bc21cu: goto label_2bc21c;
        case 0x2bc220u: goto label_2bc220;
        case 0x2bc224u: goto label_2bc224;
        case 0x2bc228u: goto label_2bc228;
        case 0x2bc22cu: goto label_2bc22c;
        case 0x2bc230u: goto label_2bc230;
        case 0x2bc234u: goto label_2bc234;
        case 0x2bc238u: goto label_2bc238;
        case 0x2bc23cu: goto label_2bc23c;
        case 0x2bc240u: goto label_2bc240;
        case 0x2bc244u: goto label_2bc244;
        case 0x2bc248u: goto label_2bc248;
        case 0x2bc24cu: goto label_2bc24c;
        case 0x2bc250u: goto label_2bc250;
        case 0x2bc254u: goto label_2bc254;
        case 0x2bc258u: goto label_2bc258;
        case 0x2bc25cu: goto label_2bc25c;
        case 0x2bc260u: goto label_2bc260;
        case 0x2bc264u: goto label_2bc264;
        case 0x2bc268u: goto label_2bc268;
        case 0x2bc26cu: goto label_2bc26c;
        case 0x2bc270u: goto label_2bc270;
        case 0x2bc274u: goto label_2bc274;
        case 0x2bc278u: goto label_2bc278;
        case 0x2bc27cu: goto label_2bc27c;
        case 0x2bc280u: goto label_2bc280;
        case 0x2bc284u: goto label_2bc284;
        case 0x2bc288u: goto label_2bc288;
        case 0x2bc28cu: goto label_2bc28c;
        case 0x2bc290u: goto label_2bc290;
        case 0x2bc294u: goto label_2bc294;
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc29cu: goto label_2bc29c;
        case 0x2bc2a0u: goto label_2bc2a0;
        case 0x2bc2a4u: goto label_2bc2a4;
        case 0x2bc2a8u: goto label_2bc2a8;
        case 0x2bc2acu: goto label_2bc2ac;
        case 0x2bc2b0u: goto label_2bc2b0;
        case 0x2bc2b4u: goto label_2bc2b4;
        case 0x2bc2b8u: goto label_2bc2b8;
        case 0x2bc2bcu: goto label_2bc2bc;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2c4u: goto label_2bc2c4;
        case 0x2bc2c8u: goto label_2bc2c8;
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2d0u: goto label_2bc2d0;
        case 0x2bc2d4u: goto label_2bc2d4;
        case 0x2bc2d8u: goto label_2bc2d8;
        case 0x2bc2dcu: goto label_2bc2dc;
        case 0x2bc2e0u: goto label_2bc2e0;
        case 0x2bc2e4u: goto label_2bc2e4;
        case 0x2bc2e8u: goto label_2bc2e8;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc2f0u: goto label_2bc2f0;
        case 0x2bc2f4u: goto label_2bc2f4;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc2fcu: goto label_2bc2fc;
        case 0x2bc300u: goto label_2bc300;
        case 0x2bc304u: goto label_2bc304;
        case 0x2bc308u: goto label_2bc308;
        case 0x2bc30cu: goto label_2bc30c;
        case 0x2bc310u: goto label_2bc310;
        case 0x2bc314u: goto label_2bc314;
        case 0x2bc318u: goto label_2bc318;
        case 0x2bc31cu: goto label_2bc31c;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc324u: goto label_2bc324;
        case 0x2bc328u: goto label_2bc328;
        case 0x2bc32cu: goto label_2bc32c;
        case 0x2bc330u: goto label_2bc330;
        case 0x2bc334u: goto label_2bc334;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc33cu: goto label_2bc33c;
        case 0x2bc340u: goto label_2bc340;
        case 0x2bc344u: goto label_2bc344;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc34cu: goto label_2bc34c;
        case 0x2bc350u: goto label_2bc350;
        case 0x2bc354u: goto label_2bc354;
        case 0x2bc358u: goto label_2bc358;
        case 0x2bc35cu: goto label_2bc35c;
        case 0x2bc360u: goto label_2bc360;
        case 0x2bc364u: goto label_2bc364;
        case 0x2bc368u: goto label_2bc368;
        case 0x2bc36cu: goto label_2bc36c;
        case 0x2bc370u: goto label_2bc370;
        case 0x2bc374u: goto label_2bc374;
        case 0x2bc378u: goto label_2bc378;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc380u: goto label_2bc380;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc388u: goto label_2bc388;
        case 0x2bc38cu: goto label_2bc38c;
        case 0x2bc390u: goto label_2bc390;
        case 0x2bc394u: goto label_2bc394;
        case 0x2bc398u: goto label_2bc398;
        case 0x2bc39cu: goto label_2bc39c;
        case 0x2bc3a0u: goto label_2bc3a0;
        case 0x2bc3a4u: goto label_2bc3a4;
        case 0x2bc3a8u: goto label_2bc3a8;
        case 0x2bc3acu: goto label_2bc3ac;
        case 0x2bc3b0u: goto label_2bc3b0;
        case 0x2bc3b4u: goto label_2bc3b4;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3bcu: goto label_2bc3bc;
        case 0x2bc3c0u: goto label_2bc3c0;
        case 0x2bc3c4u: goto label_2bc3c4;
        case 0x2bc3c8u: goto label_2bc3c8;
        case 0x2bc3ccu: goto label_2bc3cc;
        case 0x2bc3d0u: goto label_2bc3d0;
        case 0x2bc3d4u: goto label_2bc3d4;
        case 0x2bc3d8u: goto label_2bc3d8;
        case 0x2bc3dcu: goto label_2bc3dc;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc3e4u: goto label_2bc3e4;
        case 0x2bc3e8u: goto label_2bc3e8;
        case 0x2bc3ecu: goto label_2bc3ec;
        case 0x2bc3f0u: goto label_2bc3f0;
        case 0x2bc3f4u: goto label_2bc3f4;
        case 0x2bc3f8u: goto label_2bc3f8;
        case 0x2bc3fcu: goto label_2bc3fc;
        case 0x2bc400u: goto label_2bc400;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc408u: goto label_2bc408;
        case 0x2bc40cu: goto label_2bc40c;
        case 0x2bc410u: goto label_2bc410;
        case 0x2bc414u: goto label_2bc414;
        case 0x2bc418u: goto label_2bc418;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc420u: goto label_2bc420;
        case 0x2bc424u: goto label_2bc424;
        case 0x2bc428u: goto label_2bc428;
        case 0x2bc42cu: goto label_2bc42c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc434u: goto label_2bc434;
        case 0x2bc438u: goto label_2bc438;
        case 0x2bc43cu: goto label_2bc43c;
        case 0x2bc440u: goto label_2bc440;
        case 0x2bc444u: goto label_2bc444;
        case 0x2bc448u: goto label_2bc448;
        case 0x2bc44cu: goto label_2bc44c;
        case 0x2bc450u: goto label_2bc450;
        case 0x2bc454u: goto label_2bc454;
        case 0x2bc458u: goto label_2bc458;
        case 0x2bc45cu: goto label_2bc45c;
        case 0x2bc460u: goto label_2bc460;
        case 0x2bc464u: goto label_2bc464;
        case 0x2bc468u: goto label_2bc468;
        case 0x2bc46cu: goto label_2bc46c;
        case 0x2bc470u: goto label_2bc470;
        case 0x2bc474u: goto label_2bc474;
        case 0x2bc478u: goto label_2bc478;
        case 0x2bc47cu: goto label_2bc47c;
        case 0x2bc480u: goto label_2bc480;
        case 0x2bc484u: goto label_2bc484;
        case 0x2bc488u: goto label_2bc488;
        case 0x2bc48cu: goto label_2bc48c;
        case 0x2bc490u: goto label_2bc490;
        case 0x2bc494u: goto label_2bc494;
        case 0x2bc498u: goto label_2bc498;
        case 0x2bc49cu: goto label_2bc49c;
        case 0x2bc4a0u: goto label_2bc4a0;
        case 0x2bc4a4u: goto label_2bc4a4;
        case 0x2bc4a8u: goto label_2bc4a8;
        case 0x2bc4acu: goto label_2bc4ac;
        case 0x2bc4b0u: goto label_2bc4b0;
        case 0x2bc4b4u: goto label_2bc4b4;
        case 0x2bc4b8u: goto label_2bc4b8;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c4u: goto label_2bc4c4;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d4u: goto label_2bc4d4;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4e8u: goto label_2bc4e8;
        case 0x2bc4ecu: goto label_2bc4ec;
        case 0x2bc4f0u: goto label_2bc4f0;
        case 0x2bc4f4u: goto label_2bc4f4;
        case 0x2bc4f8u: goto label_2bc4f8;
        case 0x2bc4fcu: goto label_2bc4fc;
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc504u: goto label_2bc504;
        case 0x2bc508u: goto label_2bc508;
        case 0x2bc50cu: goto label_2bc50c;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc514u: goto label_2bc514;
        case 0x2bc518u: goto label_2bc518;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        case 0x2bc558u: goto label_2bc558;
        case 0x2bc55cu: goto label_2bc55c;
        case 0x2bc560u: goto label_2bc560;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc568u: goto label_2bc568;
        case 0x2bc56cu: goto label_2bc56c;
        case 0x2bc570u: goto label_2bc570;
        case 0x2bc574u: goto label_2bc574;
        case 0x2bc578u: goto label_2bc578;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc580u: goto label_2bc580;
        case 0x2bc584u: goto label_2bc584;
        case 0x2bc588u: goto label_2bc588;
        case 0x2bc58cu: goto label_2bc58c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc594u: goto label_2bc594;
        case 0x2bc598u: goto label_2bc598;
        case 0x2bc59cu: goto label_2bc59c;
        case 0x2bc5a0u: goto label_2bc5a0;
        case 0x2bc5a4u: goto label_2bc5a4;
        case 0x2bc5a8u: goto label_2bc5a8;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5b0u: goto label_2bc5b0;
        case 0x2bc5b4u: goto label_2bc5b4;
        case 0x2bc5b8u: goto label_2bc5b8;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc5c0u: goto label_2bc5c0;
        case 0x2bc5c4u: goto label_2bc5c4;
        case 0x2bc5c8u: goto label_2bc5c8;
        case 0x2bc5ccu: goto label_2bc5cc;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5d4u: goto label_2bc5d4;
        case 0x2bc5d8u: goto label_2bc5d8;
        case 0x2bc5dcu: goto label_2bc5dc;
        case 0x2bc5e0u: goto label_2bc5e0;
        case 0x2bc5e4u: goto label_2bc5e4;
        case 0x2bc5e8u: goto label_2bc5e8;
        case 0x2bc5ecu: goto label_2bc5ec;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc5f4u: goto label_2bc5f4;
        case 0x2bc5f8u: goto label_2bc5f8;
        case 0x2bc5fcu: goto label_2bc5fc;
        case 0x2bc600u: goto label_2bc600;
        case 0x2bc604u: goto label_2bc604;
        case 0x2bc608u: goto label_2bc608;
        case 0x2bc60cu: goto label_2bc60c;
        case 0x2bc610u: goto label_2bc610;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc618u: goto label_2bc618;
        case 0x2bc61cu: goto label_2bc61c;
        case 0x2bc620u: goto label_2bc620;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc62cu: goto label_2bc62c;
        case 0x2bc630u: goto label_2bc630;
        case 0x2bc634u: goto label_2bc634;
        case 0x2bc638u: goto label_2bc638;
        case 0x2bc63cu: goto label_2bc63c;
        case 0x2bc640u: goto label_2bc640;
        case 0x2bc644u: goto label_2bc644;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc64cu: goto label_2bc64c;
        case 0x2bc650u: goto label_2bc650;
        case 0x2bc654u: goto label_2bc654;
        case 0x2bc658u: goto label_2bc658;
        case 0x2bc65cu: goto label_2bc65c;
        case 0x2bc660u: goto label_2bc660;
        case 0x2bc664u: goto label_2bc664;
        case 0x2bc668u: goto label_2bc668;
        case 0x2bc66cu: goto label_2bc66c;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc674u: goto label_2bc674;
        case 0x2bc678u: goto label_2bc678;
        case 0x2bc67cu: goto label_2bc67c;
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc684u: goto label_2bc684;
        case 0x2bc688u: goto label_2bc688;
        case 0x2bc68cu: goto label_2bc68c;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc694u: goto label_2bc694;
        case 0x2bc698u: goto label_2bc698;
        case 0x2bc69cu: goto label_2bc69c;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc6acu: goto label_2bc6ac;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6b8u: goto label_2bc6b8;
        case 0x2bc6bcu: goto label_2bc6bc;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6c4u: goto label_2bc6c4;
        case 0x2bc6c8u: goto label_2bc6c8;
        case 0x2bc6ccu: goto label_2bc6cc;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6dcu: goto label_2bc6dc;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e4u: goto label_2bc6e4;
        case 0x2bc6e8u: goto label_2bc6e8;
        case 0x2bc6ecu: goto label_2bc6ec;
        case 0x2bc6f0u: goto label_2bc6f0;
        case 0x2bc6f4u: goto label_2bc6f4;
        case 0x2bc6f8u: goto label_2bc6f8;
        case 0x2bc6fcu: goto label_2bc6fc;
        case 0x2bc700u: goto label_2bc700;
        case 0x2bc704u: goto label_2bc704;
        case 0x2bc708u: goto label_2bc708;
        case 0x2bc70cu: goto label_2bc70c;
        case 0x2bc710u: goto label_2bc710;
        case 0x2bc714u: goto label_2bc714;
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc71cu: goto label_2bc71c;
        case 0x2bc720u: goto label_2bc720;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc728u: goto label_2bc728;
        case 0x2bc72cu: goto label_2bc72c;
        case 0x2bc730u: goto label_2bc730;
        case 0x2bc734u: goto label_2bc734;
        case 0x2bc738u: goto label_2bc738;
        case 0x2bc73cu: goto label_2bc73c;
        case 0x2bc740u: goto label_2bc740;
        case 0x2bc744u: goto label_2bc744;
        case 0x2bc748u: goto label_2bc748;
        case 0x2bc74cu: goto label_2bc74c;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc754u: goto label_2bc754;
        case 0x2bc758u: goto label_2bc758;
        case 0x2bc75cu: goto label_2bc75c;
        case 0x2bc760u: goto label_2bc760;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc768u: goto label_2bc768;
        case 0x2bc76cu: goto label_2bc76c;
        case 0x2bc770u: goto label_2bc770;
        case 0x2bc774u: goto label_2bc774;
        case 0x2bc778u: goto label_2bc778;
        case 0x2bc77cu: goto label_2bc77c;
        case 0x2bc780u: goto label_2bc780;
        case 0x2bc784u: goto label_2bc784;
        case 0x2bc788u: goto label_2bc788;
        case 0x2bc78cu: goto label_2bc78c;
        case 0x2bc790u: goto label_2bc790;
        case 0x2bc794u: goto label_2bc794;
        case 0x2bc798u: goto label_2bc798;
        case 0x2bc79cu: goto label_2bc79c;
        case 0x2bc7a0u: goto label_2bc7a0;
        case 0x2bc7a4u: goto label_2bc7a4;
        case 0x2bc7a8u: goto label_2bc7a8;
        case 0x2bc7acu: goto label_2bc7ac;
        case 0x2bc7b0u: goto label_2bc7b0;
        case 0x2bc7b4u: goto label_2bc7b4;
        case 0x2bc7b8u: goto label_2bc7b8;
        case 0x2bc7bcu: goto label_2bc7bc;
        case 0x2bc7c0u: goto label_2bc7c0;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc7c8u: goto label_2bc7c8;
        case 0x2bc7ccu: goto label_2bc7cc;
        case 0x2bc7d0u: goto label_2bc7d0;
        case 0x2bc7d4u: goto label_2bc7d4;
        case 0x2bc7d8u: goto label_2bc7d8;
        case 0x2bc7dcu: goto label_2bc7dc;
        case 0x2bc7e0u: goto label_2bc7e0;
        case 0x2bc7e4u: goto label_2bc7e4;
        case 0x2bc7e8u: goto label_2bc7e8;
        case 0x2bc7ecu: goto label_2bc7ec;
        case 0x2bc7f0u: goto label_2bc7f0;
        case 0x2bc7f4u: goto label_2bc7f4;
        case 0x2bc7f8u: goto label_2bc7f8;
        case 0x2bc7fcu: goto label_2bc7fc;
        case 0x2bc800u: goto label_2bc800;
        case 0x2bc804u: goto label_2bc804;
        case 0x2bc808u: goto label_2bc808;
        case 0x2bc80cu: goto label_2bc80c;
        case 0x2bc810u: goto label_2bc810;
        case 0x2bc814u: goto label_2bc814;
        case 0x2bc818u: goto label_2bc818;
        case 0x2bc81cu: goto label_2bc81c;
        case 0x2bc820u: goto label_2bc820;
        case 0x2bc824u: goto label_2bc824;
        case 0x2bc828u: goto label_2bc828;
        case 0x2bc82cu: goto label_2bc82c;
        case 0x2bc830u: goto label_2bc830;
        case 0x2bc834u: goto label_2bc834;
        case 0x2bc838u: goto label_2bc838;
        case 0x2bc83cu: goto label_2bc83c;
        case 0x2bc840u: goto label_2bc840;
        case 0x2bc844u: goto label_2bc844;
        case 0x2bc848u: goto label_2bc848;
        case 0x2bc84cu: goto label_2bc84c;
        case 0x2bc850u: goto label_2bc850;
        case 0x2bc854u: goto label_2bc854;
        case 0x2bc858u: goto label_2bc858;
        case 0x2bc85cu: goto label_2bc85c;
        case 0x2bc860u: goto label_2bc860;
        case 0x2bc864u: goto label_2bc864;
        case 0x2bc868u: goto label_2bc868;
        case 0x2bc86cu: goto label_2bc86c;
        case 0x2bc870u: goto label_2bc870;
        case 0x2bc874u: goto label_2bc874;
        case 0x2bc878u: goto label_2bc878;
        case 0x2bc87cu: goto label_2bc87c;
        case 0x2bc880u: goto label_2bc880;
        case 0x2bc884u: goto label_2bc884;
        case 0x2bc888u: goto label_2bc888;
        case 0x2bc88cu: goto label_2bc88c;
        case 0x2bc890u: goto label_2bc890;
        case 0x2bc894u: goto label_2bc894;
        case 0x2bc898u: goto label_2bc898;
        case 0x2bc89cu: goto label_2bc89c;
        case 0x2bc8a0u: goto label_2bc8a0;
        case 0x2bc8a4u: goto label_2bc8a4;
        case 0x2bc8a8u: goto label_2bc8a8;
        case 0x2bc8acu: goto label_2bc8ac;
        case 0x2bc8b0u: goto label_2bc8b0;
        case 0x2bc8b4u: goto label_2bc8b4;
        case 0x2bc8b8u: goto label_2bc8b8;
        case 0x2bc8bcu: goto label_2bc8bc;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc8c4u: goto label_2bc8c4;
        case 0x2bc8c8u: goto label_2bc8c8;
        case 0x2bc8ccu: goto label_2bc8cc;
        case 0x2bc8d0u: goto label_2bc8d0;
        case 0x2bc8d4u: goto label_2bc8d4;
        case 0x2bc8d8u: goto label_2bc8d8;
        case 0x2bc8dcu: goto label_2bc8dc;
        case 0x2bc8e0u: goto label_2bc8e0;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc8e8u: goto label_2bc8e8;
        case 0x2bc8ecu: goto label_2bc8ec;
        case 0x2bc8f0u: goto label_2bc8f0;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc8f8u: goto label_2bc8f8;
        case 0x2bc8fcu: goto label_2bc8fc;
        case 0x2bc900u: goto label_2bc900;
        case 0x2bc904u: goto label_2bc904;
        case 0x2bc908u: goto label_2bc908;
        case 0x2bc90cu: goto label_2bc90c;
        case 0x2bc910u: goto label_2bc910;
        case 0x2bc914u: goto label_2bc914;
        case 0x2bc918u: goto label_2bc918;
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc920u: goto label_2bc920;
        case 0x2bc924u: goto label_2bc924;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc92cu: goto label_2bc92c;
        case 0x2bc930u: goto label_2bc930;
        case 0x2bc934u: goto label_2bc934;
        case 0x2bc938u: goto label_2bc938;
        case 0x2bc93cu: goto label_2bc93c;
        case 0x2bc940u: goto label_2bc940;
        case 0x2bc944u: goto label_2bc944;
        case 0x2bc948u: goto label_2bc948;
        case 0x2bc94cu: goto label_2bc94c;
        case 0x2bc950u: goto label_2bc950;
        case 0x2bc954u: goto label_2bc954;
        case 0x2bc958u: goto label_2bc958;
        case 0x2bc95cu: goto label_2bc95c;
        case 0x2bc960u: goto label_2bc960;
        case 0x2bc964u: goto label_2bc964;
        case 0x2bc968u: goto label_2bc968;
        case 0x2bc96cu: goto label_2bc96c;
        case 0x2bc970u: goto label_2bc970;
        case 0x2bc974u: goto label_2bc974;
        case 0x2bc978u: goto label_2bc978;
        case 0x2bc97cu: goto label_2bc97c;
        case 0x2bc980u: goto label_2bc980;
        case 0x2bc984u: goto label_2bc984;
        case 0x2bc988u: goto label_2bc988;
        case 0x2bc98cu: goto label_2bc98c;
        case 0x2bc990u: goto label_2bc990;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc998u: goto label_2bc998;
        case 0x2bc99cu: goto label_2bc99c;
        case 0x2bc9a0u: goto label_2bc9a0;
        case 0x2bc9a4u: goto label_2bc9a4;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9acu: goto label_2bc9ac;
        case 0x2bc9b0u: goto label_2bc9b0;
        case 0x2bc9b4u: goto label_2bc9b4;
        case 0x2bc9b8u: goto label_2bc9b8;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9c0u: goto label_2bc9c0;
        case 0x2bc9c4u: goto label_2bc9c4;
        case 0x2bc9c8u: goto label_2bc9c8;
        case 0x2bc9ccu: goto label_2bc9cc;
        case 0x2bc9d0u: goto label_2bc9d0;
        case 0x2bc9d4u: goto label_2bc9d4;
        case 0x2bc9d8u: goto label_2bc9d8;
        case 0x2bc9dcu: goto label_2bc9dc;
        case 0x2bc9e0u: goto label_2bc9e0;
        case 0x2bc9e4u: goto label_2bc9e4;
        case 0x2bc9e8u: goto label_2bc9e8;
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bc9f0u: goto label_2bc9f0;
        case 0x2bc9f4u: goto label_2bc9f4;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bc9fcu: goto label_2bc9fc;
        case 0x2bca00u: goto label_2bca00;
        case 0x2bca04u: goto label_2bca04;
        case 0x2bca08u: goto label_2bca08;
        case 0x2bca0cu: goto label_2bca0c;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca18u: goto label_2bca18;
        case 0x2bca1cu: goto label_2bca1c;
        default: break;
    }

    ctx->pc = 0x2bc198u;

label_2bc198:
    // 0x2bc198: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2bc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2bc19c:
    // 0x2bc19c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2bc19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2bc1a0:
    // 0x2bc1a0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2bc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2bc1a4:
    // 0x2bc1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc1a8:
    // 0x2bc1a8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2bc1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2bc1ac:
    // 0x2bc1ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2bc1b0:
    // 0x2bc1b0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2bc1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2bc1b4:
    // 0x2bc1b4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2bc1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2bc1b8:
    // 0x2bc1b8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2bc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2bc1bc:
    // 0x2bc1bc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2bc1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2bc1c0:
    // 0x2bc1c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bc1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2bc1c4:
    // 0x2bc1c4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2bc1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2bc1c8:
    // 0x2bc1c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2bc1cc:
    // 0x2bc1cc: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2bc1ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2bc1d0:
    // 0x2bc1d0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2bc1d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2bc1d4:
    // 0x2bc1d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bc1d8:
    // 0x2bc1d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bc1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc1dc:
    // 0x2bc1dc: 0xc0e409a  jal         func_390268
label_2bc1e0:
    if (ctx->pc == 0x2BC1E0u) {
        ctx->pc = 0x2BC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1DCu;
        // 0x2bc1e0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1E4u;
        goto label_2bc1e4;
    }
    ctx->pc = 0x2BC1DCu;
    SET_GPR_U32(ctx, 31, 0x2BC1E4u);
    ctx->pc = 0x2BC1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1DCu;
    // 0x2bc1e0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BC1DCu, 0x2BC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1E4u;
label_2bc1e4:
    // 0x2bc1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc1e8:
    // 0x2bc1e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bc1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc1ec:
    // 0x2bc1ec: 0xc0a352c  jal         func_28D4B0
label_2bc1f0:
    if (ctx->pc == 0x2BC1F0u) {
        ctx->pc = 0x2BC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1ECu;
        // 0x2bc1f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1F4u;
        goto label_2bc1f4;
    }
    ctx->pc = 0x2BC1ECu;
    SET_GPR_U32(ctx, 31, 0x2BC1F4u);
    ctx->pc = 0x2BC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1ECu;
    // 0x2bc1f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BC1ECu, 0x2BC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1F4u;
label_2bc1f4:
    // 0x2bc1f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bc1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc1f8:
    // 0x2bc1f8: 0x126001fa  beqz        $s3, . + 4 + (0x1FA << 2)
label_2bc1fc:
    if (ctx->pc == 0x2BC1FCu) {
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC200u;
        goto label_2bc200;
    }
    ctx->pc = 0x2BC1F8u;
    {
        const bool branch_taken_0x2bc1f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1f8) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC200u;
label_2bc200:
    // 0x2bc200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc204:
    // 0x2bc204: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2bc208:
    // 0x2bc208: 0x1c6001f6  bgtz        $v1, . + 4 + (0x1F6 << 2)
label_2bc20c:
    if (ctx->pc == 0x2BC20Cu) {
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC210u;
        goto label_2bc210;
    }
    ctx->pc = 0x2BC208u;
    {
        const bool branch_taken_0x2bc208 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc208) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC210u;
label_2bc210:
    // 0x2bc210: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2bc210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2bc214:
    // 0x2bc214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc218:
    // 0x2bc218: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9
    ctx->pc = 0x2bc218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
label_2bc21c:
    // 0x2bc21c: 0xc0a7c8c  jal         func_29F230
label_2bc220:
    if (ctx->pc == 0x2BC220u) {
        ctx->pc = 0x2BC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC21Cu;
        // 0x2bc220: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC224u;
        goto label_2bc224;
    }
    ctx->pc = 0x2BC21Cu;
    SET_GPR_U32(ctx, 31, 0x2BC224u);
    ctx->pc = 0x2BC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC21Cu;
    // 0x2bc220: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2BC21Cu, 0x2BC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC224u;
label_2bc224:
    // 0x2bc224: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc228:
    // 0x2bc228: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_2bc22c:
    if (ctx->pc == 0x2BC22Cu) {
        ctx->pc = 0x2BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC228u;
        // 0x2bc22c: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC230u;
        goto label_2bc230;
    }
    ctx->pc = 0x2BC228u;
    {
        const bool branch_taken_0x2bc228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC228u;
        // 0x2bc22c: 0x27c24b00  addiu       $v0, $fp, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc228) {
            ctx->pc = 0x2BC278u;
            goto label_2bc278;
        }
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2bc230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2bc234:
    // 0x2bc234: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2bc234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bc238:
    // 0x2bc238: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bc238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2bc23c:
    // 0x2bc23c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bc23cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bc240:
    // 0x2bc240: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2bc244:
    // 0x2bc244: 0xc0cdb38  jal         func_336CE0
label_2bc248:
    if (ctx->pc == 0x2BC248u) {
        ctx->pc = 0x2BC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC244u;
        // 0x2bc248: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC24Cu;
        goto label_2bc24c;
    }
    ctx->pc = 0x2BC244u;
    SET_GPR_U32(ctx, 31, 0x2BC24Cu);
    ctx->pc = 0x2BC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC244u;
    // 0x2bc248: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BC244u, 0x2BC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC24Cu;
label_2bc24c:
    // 0x2bc24c: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x2bc24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_2bc250:
    // 0x2bc250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bc254:
    // 0x2bc254: 0x0  nop
    ctx->pc = 0x2bc254u;
    // NOP
label_2bc258:
    // 0x2bc258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc25c:
    // 0x2bc25c: 0x0  nop
    ctx->pc = 0x2bc25cu;
    // NOP
label_2bc260:
    // 0x2bc260: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2bc264:
    if (ctx->pc == 0x2BC264u) {
        ctx->pc = 0x2BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC260u;
        // 0x2bc264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC268u;
        goto label_2bc268;
    }
    ctx->pc = 0x2BC260u;
    {
        const bool branch_taken_0x2bc260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC260u;
        // 0x2bc264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc260) {
            ctx->pc = 0x2BC278u;
            goto label_2bc278;
        }
    }
    ctx->pc = 0x2BC268u;
label_2bc268:
    // 0x2bc268: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc26c:
    // 0x2bc26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc270:
    // 0x2bc270: 0xc0a33f8  jal         func_28CFE0
label_2bc274:
    if (ctx->pc == 0x2BC274u) {
        ctx->pc = 0x2BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC270u;
        // 0x2bc274: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC278u;
        goto label_2bc278;
    }
    ctx->pc = 0x2BC270u;
    SET_GPR_U32(ctx, 31, 0x2BC278u);
    ctx->pc = 0x2BC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC270u;
    // 0x2bc274: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2BC270u, 0x2BC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC278u;
label_2bc278:
    // 0x2bc278: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc27c:
    // 0x2bc27c: 0x27d04b00  addiu       $s0, $fp, 0x4B00
    ctx->pc = 0x2bc27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2bc280:
    // 0x2bc280: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc284:
    // 0x2bc284: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2bc284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2bc288:
    // 0x2bc288: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bc288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bc28c:
    // 0x2bc28c: 0x12400148  beqz        $s2, . + 4 + (0x148 << 2)
label_2bc290:
    if (ctx->pc == 0x2BC290u) {
        ctx->pc = 0x2BC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC28Cu;
        // 0x2bc290: 0x50b021  addu        $s6, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC294u;
        goto label_2bc294;
    }
    ctx->pc = 0x2BC28Cu;
    {
        const bool branch_taken_0x2bc28c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC28Cu;
        // 0x2bc290: 0x50b021  addu        $s6, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc28c) {
            ctx->pc = 0x2BC7B0u;
            goto label_2bc7b0;
        }
    }
    ctx->pc = 0x2BC294u;
label_2bc294:
    // 0x2bc294: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc298:
    // 0x2bc298: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bc298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc29c:
    // 0x2bc29c: 0x8c850284  lw          $a1, 0x284($a0)
    ctx->pc = 0x2bc29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2bc2a0:
    // 0x2bc2a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc2a4:
    // 0x2bc2a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc2a8:
    // 0x2bc2a8: 0x5a82b  sltu        $s5, $zero, $a1
    ctx->pc = 0x2bc2a8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2bc2ac:
    // 0x2bc2ac: 0x40f809  jalr        $v0
label_2bc2b0:
    if (ctx->pc == 0x2BC2B0u) {
        ctx->pc = 0x2BC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2ACu;
        // 0x2bc2b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2B4u;
        goto label_2bc2b4;
    }
    ctx->pc = 0x2BC2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC2B4u);
        ctx->pc = 0x2BC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2ACu;
        // 0x2bc2b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC2ACu, 0x2BC2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC2B4u;
label_2bc2b4:
    // 0x2bc2b4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2bc2b8:
    // 0x2bc2b8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2bc2bc:
    if (ctx->pc == 0x2BC2BCu) {
        ctx->pc = 0x2BC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2B8u;
        // 0x2bc2bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2C0u;
        goto label_2bc2c0;
    }
    ctx->pc = 0x2BC2B8u;
    {
        const bool branch_taken_0x2bc2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc2b8) {
            ctx->pc = 0x2BC2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC2B8u;
            // 0x2bc2bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC2D0u;
            goto label_2bc2d0;
        }
    }
    ctx->pc = 0x2BC2C0u;
label_2bc2c0:
    // 0x2bc2c0: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x2bc2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_2bc2c4:
    // 0x2bc2c4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2bc2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2bc2c8:
    // 0x2bc2c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2bc2cc:
    if (ctx->pc == 0x2BC2CCu) {
        ctx->pc = 0x2BC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C8u;
        // 0x2bc2cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2D0u;
        goto label_2bc2d0;
    }
    ctx->pc = 0x2BC2C8u;
    {
        const bool branch_taken_0x2bc2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2c8) {
            ctx->pc = 0x2BC2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC2C8u;
            // 0x2bc2cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC2D0u;
            goto label_2bc2d0;
        }
    }
    ctx->pc = 0x2BC2D0u;
label_2bc2d0:
    // 0x2bc2d0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2bc2d4:
    if (ctx->pc == 0x2BC2D4u) {
        ctx->pc = 0x2BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2D0u;
        // 0x2bc2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2D8u;
        goto label_2bc2d8;
    }
    ctx->pc = 0x2BC2D0u;
    {
        const bool branch_taken_0x2bc2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2D0u;
        // 0x2bc2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2d0) {
            ctx->pc = 0x2BC30Cu;
            goto label_2bc30c;
        }
    }
    ctx->pc = 0x2BC2D8u;
label_2bc2d8:
    // 0x2bc2d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc2dc:
    // 0x2bc2dc: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_2bc2e0:
    if (ctx->pc == 0x2BC2E0u) {
        ctx->pc = 0x2BC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2DCu;
        // 0x2bc2e0: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2E4u;
        goto label_2bc2e4;
    }
    ctx->pc = 0x2BC2DCu;
    {
        const bool branch_taken_0x2bc2dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2DCu;
        // 0x2bc2e0: 0xa06202d3  sb          $v0, 0x2D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2dc) {
            ctx->pc = 0x2BC2F0u;
            goto label_2bc2f0;
        }
    }
    ctx->pc = 0x2BC2E4u;
label_2bc2e4:
    // 0x2bc2e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc2e8:
    // 0x2bc2e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bc2e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc2ec:
    // 0x2bc2ec: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2bc2f0:
    // 0x2bc2f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc2f4:
    // 0x2bc2f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc2f8:
    // 0x2bc2f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc2fc:
    // 0x2bc2fc: 0x40f809  jalr        $v0
label_2bc300:
    if (ctx->pc == 0x2BC300u) {
        ctx->pc = 0x2BC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2FCu;
        // 0x2bc300: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC304u;
        goto label_2bc304;
    }
    ctx->pc = 0x2BC2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC304u);
        ctx->pc = 0x2BC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2FCu;
        // 0x2bc300: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC2FCu, 0x2BC304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC304u;
label_2bc304:
    // 0x2bc304: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2bc304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2bc308:
    // 0x2bc308: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x2bc308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
label_2bc30c:
    // 0x2bc30c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2bc30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2bc310:
    // 0x2bc310: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2bc314:
    // 0x2bc314: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bc314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bc318:
    // 0x2bc318: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bc31c:
    // 0x2bc31c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x2bc31cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bc320:
    // 0x2bc320: 0xc0cdb38  jal         func_336CE0
label_2bc324:
    if (ctx->pc == 0x2BC324u) {
        ctx->pc = 0x2BC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC320u;
        // 0x2bc324: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC328u;
        goto label_2bc328;
    }
    ctx->pc = 0x2BC320u;
    SET_GPR_U32(ctx, 31, 0x2BC328u);
    ctx->pc = 0x2BC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC320u;
    // 0x2bc324: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BC320u, 0x2BC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC328u;
label_2bc328:
    // 0x2bc328: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc32c:
    // 0x2bc32c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bc32cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bc330:
    // 0x2bc330: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2bc330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2bc334:
    // 0x2bc334: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bc334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2bc338:
    // 0x2bc338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bc33c:
    // 0x2bc33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc340:
    // 0x2bc340: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2bc340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc344:
    // 0x2bc344: 0xc087502  jal         func_21D408
label_2bc348:
    if (ctx->pc == 0x2BC348u) {
        ctx->pc = 0x2BC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC344u;
        // 0x2bc348: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC34Cu;
        goto label_2bc34c;
    }
    ctx->pc = 0x2BC344u;
    SET_GPR_U32(ctx, 31, 0x2BC34Cu);
    ctx->pc = 0x2BC348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC344u;
    // 0x2bc348: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BC344u, 0x2BC34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC34Cu;
label_2bc34c:
    // 0x2bc34c: 0xc0a2af0  jal         func_28ABC0
label_2bc350:
    if (ctx->pc == 0x2BC350u) {
        ctx->pc = 0x2BC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC34Cu;
        // 0x2bc350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC354u;
        goto label_2bc354;
    }
    ctx->pc = 0x2BC34Cu;
    SET_GPR_U32(ctx, 31, 0x2BC354u);
    ctx->pc = 0x2BC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC34Cu;
    // 0x2bc350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2BC34Cu, 0x2BC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC354u;
label_2bc354:
    // 0x2bc354: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2bc354u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bc358:
    // 0x2bc358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bc35c:
    // 0x2bc35c: 0xc088fa8  jal         func_223EA0
label_2bc360:
    if (ctx->pc == 0x2BC360u) {
        ctx->pc = 0x2BC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC35Cu;
        // 0x2bc360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC364u;
        goto label_2bc364;
    }
    ctx->pc = 0x2BC35Cu;
    SET_GPR_U32(ctx, 31, 0x2BC364u);
    ctx->pc = 0x2BC360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC35Cu;
    // 0x2bc360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2BC35Cu, 0x2BC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC364u;
label_2bc364:
    // 0x2bc364: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_2bc368:
    if (ctx->pc == 0x2BC368u) {
        ctx->pc = 0x2BC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC364u;
        // 0x2bc368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC36Cu;
        goto label_2bc36c;
    }
    ctx->pc = 0x2BC364u;
    {
        const bool branch_taken_0x2bc364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC364u;
        // 0x2bc368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc364) {
            ctx->pc = 0x2BC53Cu;
            goto label_2bc53c;
        }
    }
    ctx->pc = 0x2BC36Cu;
label_2bc36c:
    // 0x2bc36c: 0xc089000  jal         func_224000
label_2bc370:
    if (ctx->pc == 0x2BC370u) {
        ctx->pc = 0x2BC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC36Cu;
        // 0x2bc370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC374u;
        goto label_2bc374;
    }
    ctx->pc = 0x2BC36Cu;
    SET_GPR_U32(ctx, 31, 0x2BC374u);
    ctx->pc = 0x2BC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC36Cu;
    // 0x2bc370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2BC36Cu, 0x2BC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC374u;
label_2bc374:
    // 0x2bc374: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_2bc378:
    if (ctx->pc == 0x2BC378u) {
        ctx->pc = 0x2BC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC374u;
        // 0x2bc378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC37Cu;
        goto label_2bc37c;
    }
    ctx->pc = 0x2BC374u;
    {
        const bool branch_taken_0x2bc374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC374u;
        // 0x2bc378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc374) {
            ctx->pc = 0x2BC53Cu;
            goto label_2bc53c;
        }
    }
    ctx->pc = 0x2BC37Cu;
label_2bc37c:
    // 0x2bc37c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc380:
    // 0x2bc380: 0x904302d3  lbu         $v1, 0x2D3($v0)
    ctx->pc = 0x2bc380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 723)));
label_2bc384:
    // 0x2bc384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc388:
    // 0x2bc388: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2bc38c:
    if (ctx->pc == 0x2BC38Cu) {
        ctx->pc = 0x2BC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC388u;
        // 0x2bc38c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC390u;
        goto label_2bc390;
    }
    ctx->pc = 0x2BC388u;
    {
        const bool branch_taken_0x2bc388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC388u;
        // 0x2bc38c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc388) {
            ctx->pc = 0x2BC3A4u;
            goto label_2bc3a4;
        }
    }
    ctx->pc = 0x2BC390u;
label_2bc390:
    // 0x2bc390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc394:
    // 0x2bc394: 0x52a20004  beql        $s5, $v0, . + 4 + (0x4 << 2)
label_2bc398:
    if (ctx->pc == 0x2BC398u) {
        ctx->pc = 0x2BC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC394u;
        // 0x2bc398: 0xa08002d3  sb          $zero, 0x2D3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC39Cu;
        goto label_2bc39c;
    }
    ctx->pc = 0x2BC394u;
    {
        const bool branch_taken_0x2bc394 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc394) {
            ctx->pc = 0x2BC398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC394u;
            // 0x2bc398: 0xa08002d3  sb          $zero, 0x2D3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 723), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC3A8u;
            goto label_2bc3a8;
        }
    }
    ctx->pc = 0x2BC39Cu;
label_2bc39c:
    // 0x2bc39c: 0x54600049  bnel        $v1, $zero, . + 4 + (0x49 << 2)
label_2bc3a0:
    if (ctx->pc == 0x2BC3A0u) {
        ctx->pc = 0x2BC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC39Cu;
        // 0x2bc3a0: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3A4u;
        goto label_2bc3a4;
    }
    ctx->pc = 0x2BC39Cu;
    {
        const bool branch_taken_0x2bc39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc39c) {
            ctx->pc = 0x2BC3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC39Cu;
            // 0x2bc3a0: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4C4u;
            goto label_2bc4c4;
        }
    }
    ctx->pc = 0x2BC3A4u;
label_2bc3a4:
    // 0x2bc3a4: 0xa08002d3  sb          $zero, 0x2D3($a0)
    ctx->pc = 0x2bc3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 723), (uint8_t)GPR_U32(ctx, 0));
label_2bc3a8:
    // 0x2bc3a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc3a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bc3ac:
    // 0x2bc3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3b0:
    // 0x2bc3b0: 0xc0aefe8  jal         func_2BBFA0
label_2bc3b4:
    if (ctx->pc == 0x2BC3B4u) {
        ctx->pc = 0x2BC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B0u;
        // 0x2bc3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3B8u;
        goto label_2bc3b8;
    }
    ctx->pc = 0x2BC3B0u;
    SET_GPR_U32(ctx, 31, 0x2BC3B8u);
    ctx->pc = 0x2BC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3B0u;
    // 0x2bc3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBFA0u, 0x2BC3B0u, 0x2BC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3B8u;
label_2bc3b8:
    // 0x2bc3b8: 0x1440018a  bnez        $v0, . + 4 + (0x18A << 2)
label_2bc3bc:
    if (ctx->pc == 0x2BC3BCu) {
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3C0u;
        goto label_2bc3c0;
    }
    ctx->pc = 0x2BC3B8u;
    {
        const bool branch_taken_0x2bc3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3b8) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC3C0u;
label_2bc3c0:
    // 0x2bc3c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3c4:
    // 0x2bc3c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3c8:
    // 0x2bc3c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3cc:
    // 0x2bc3cc: 0xc0888a2  jal         func_222288
label_2bc3d0:
    if (ctx->pc == 0x2BC3D0u) {
        ctx->pc = 0x2BC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3CCu;
        // 0x2bc3d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3D4u;
        goto label_2bc3d4;
    }
    ctx->pc = 0x2BC3CCu;
    SET_GPR_U32(ctx, 31, 0x2BC3D4u);
    ctx->pc = 0x2BC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3CCu;
    // 0x2bc3d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BC3CCu, 0x2BC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3D4u;
label_2bc3d4:
    // 0x2bc3d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bc3d8:
    // 0x2bc3d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3dc:
    // 0x2bc3dc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2bc3e0:
    // 0x2bc3e0: 0xc0cd4ee  jal         func_3353B8
label_2bc3e4:
    if (ctx->pc == 0x2BC3E4u) {
        ctx->pc = 0x2BC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E0u;
        // 0x2bc3e4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3E8u;
        goto label_2bc3e8;
    }
    ctx->pc = 0x2BC3E0u;
    SET_GPR_U32(ctx, 31, 0x2BC3E8u);
    ctx->pc = 0x2BC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3E0u;
    // 0x2bc3e4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BC3E0u, 0x2BC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3E8u;
label_2bc3e8:
    // 0x2bc3e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bc3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3ec:
    // 0x2bc3ec: 0xc08bfa0  jal         func_22FE80
label_2bc3f0:
    if (ctx->pc == 0x2BC3F0u) {
        ctx->pc = 0x2BC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3ECu;
        // 0x2bc3f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3F4u;
        goto label_2bc3f4;
    }
    ctx->pc = 0x2BC3ECu;
    SET_GPR_U32(ctx, 31, 0x2BC3F4u);
    ctx->pc = 0x2BC3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3ECu;
    // 0x2bc3f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BC3ECu, 0x2BC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3F4u;
label_2bc3f4:
    // 0x2bc3f4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2bc3f8:
    if (ctx->pc == 0x2BC3F8u) {
        ctx->pc = 0x2BC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F4u;
        // 0x2bc3f8: 0x2e62001e  sltiu       $v0, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3FCu;
        goto label_2bc3fc;
    }
    ctx->pc = 0x2BC3F4u;
    {
        const bool branch_taken_0x2bc3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F4u;
        // 0x2bc3f8: 0x2e62001e  sltiu       $v0, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3f4) {
            ctx->pc = 0x2BC404u;
            goto label_2bc404;
        }
    }
    ctx->pc = 0x2BC3FCu;
label_2bc3fc:
    // 0x2bc3fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2bc400:
    if (ctx->pc == 0x2BC400u) {
        ctx->pc = 0x2BC404u;
        goto label_2bc404;
    }
    ctx->pc = 0x2BC3FCu;
    {
        const bool branch_taken_0x2bc3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3fc) {
            ctx->pc = 0x2BC458u;
            goto label_2bc458;
        }
    }
    ctx->pc = 0x2BC404u;
label_2bc404:
    // 0x2bc404: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2bc404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2bc408:
    // 0x2bc408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bc40c:
    // 0x2bc40c: 0x0  nop
    ctx->pc = 0x2bc40cu;
    // NOP
label_2bc410:
    // 0x2bc410: 0x0  nop
    ctx->pc = 0x2bc410u;
    // NOP
label_2bc414:
    // 0x2bc414: 0x46140004  c1          0x140004
    ctx->pc = 0x2bc414u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2bc418:
    // 0x2bc418: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc41c:
    // 0x2bc41c: 0xc0a367c  jal         func_28D9F0
label_2bc420:
    if (ctx->pc == 0x2BC420u) {
        ctx->pc = 0x2BC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC41Cu;
        // 0x2bc420: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC424u;
        goto label_2bc424;
    }
    ctx->pc = 0x2BC41Cu;
    SET_GPR_U32(ctx, 31, 0x2BC424u);
    ctx->pc = 0x2BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC41Cu;
    // 0x2bc420: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC41Cu, 0x2BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC424u;
label_2bc424:
    // 0x2bc424: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2bc428:
    if (ctx->pc == 0x2BC428u) {
        ctx->pc = 0x2BC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC424u;
        // 0x2bc428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC42Cu;
        goto label_2bc42c;
    }
    ctx->pc = 0x2BC424u;
    {
        const bool branch_taken_0x2bc424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC424u;
        // 0x2bc428: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc424) {
            ctx->pc = 0x2BC498u;
            goto label_2bc498;
        }
    }
    ctx->pc = 0x2BC42Cu;
label_2bc42c:
    // 0x2bc42c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bc430:
    // 0x2bc430: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bc430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bc434:
    // 0x2bc434: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc438:
    // 0x2bc438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc43c:
    // 0x2bc43c: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2bc43cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2bc440:
    // 0x2bc440: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bc440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc444:
    // 0x2bc444: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bc444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bc448:
    // 0x2bc448: 0xc0bf3d4  jal         func_2FCF50
label_2bc44c:
    if (ctx->pc == 0x2BC44Cu) {
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC448u;
        // 0x2bc44c: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC450u;
        goto label_2bc450;
    }
    ctx->pc = 0x2BC448u;
    SET_GPR_U32(ctx, 31, 0x2BC450u);
    ctx->pc = 0x2BC44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC448u;
    // 0x2bc44c: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BC448u, 0x2BC450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC450u;
label_2bc450:
    // 0x2bc450: 0x10000012  b           . + 4 + (0x12 << 2)
label_2bc454:
    if (ctx->pc == 0x2BC454u) {
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC458u;
        goto label_2bc458;
    }
    ctx->pc = 0x2BC450u;
    {
        const bool branch_taken_0x2bc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc450) {
            ctx->pc = 0x2BC49Cu;
            goto label_2bc49c;
        }
    }
    ctx->pc = 0x2BC458u;
label_2bc458:
    // 0x2bc458: 0xc0a367c  jal         func_28D9F0
label_2bc45c:
    if (ctx->pc == 0x2BC45Cu) {
        ctx->pc = 0x2BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC458u;
        // 0x2bc45c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC460u;
        goto label_2bc460;
    }
    ctx->pc = 0x2BC458u;
    SET_GPR_U32(ctx, 31, 0x2BC460u);
    ctx->pc = 0x2BC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC458u;
    // 0x2bc45c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC458u, 0x2BC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC460u;
label_2bc460:
    // 0x2bc460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc464:
    // 0x2bc464: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2bc468:
    if (ctx->pc == 0x2BC468u) {
        ctx->pc = 0x2BC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC464u;
        // 0x2bc468: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC46Cu;
        goto label_2bc46c;
    }
    ctx->pc = 0x2BC464u;
    {
        const bool branch_taken_0x2bc464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc464) {
            ctx->pc = 0x2BC468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC464u;
            // 0x2bc468: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC49Cu;
            goto label_2bc49c;
        }
    }
    ctx->pc = 0x2BC46Cu;
label_2bc46c:
    // 0x2bc46c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc470:
    // 0x2bc470: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc474:
    // 0x2bc474: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc478:
    // 0x2bc478: 0x40f809  jalr        $v0
label_2bc47c:
    if (ctx->pc == 0x2BC47Cu) {
        ctx->pc = 0x2BC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC478u;
        // 0x2bc47c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC480u;
        goto label_2bc480;
    }
    ctx->pc = 0x2BC478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC480u);
        ctx->pc = 0x2BC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC478u;
        // 0x2bc47c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC478u, 0x2BC480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC480u;
label_2bc480:
    // 0x2bc480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc484:
    // 0x2bc484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc488:
    // 0x2bc488: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bc488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc48c:
    // 0x2bc48c: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2bc48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2bc490:
    // 0x2bc490: 0xc0bfabe  jal         func_2FEAF8
label_2bc494:
    if (ctx->pc == 0x2BC494u) {
        ctx->pc = 0x2BC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC490u;
        // 0x2bc494: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC498u;
        goto label_2bc498;
    }
    ctx->pc = 0x2BC490u;
    SET_GPR_U32(ctx, 31, 0x2BC498u);
    ctx->pc = 0x2BC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC490u;
    // 0x2bc494: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2BC490u, 0x2BC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC498u;
label_2bc498:
    // 0x2bc498: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc49c:
    // 0x2bc49c: 0x52b00006  beql        $s5, $s0, . + 4 + (0x6 << 2)
label_2bc4a0:
    if (ctx->pc == 0x2BC4A0u) {
        ctx->pc = 0x2BC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC49Cu;
        // 0x2bc4a0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4A4u;
        goto label_2bc4a4;
    }
    ctx->pc = 0x2BC49Cu;
    {
        const bool branch_taken_0x2bc49c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bc49c) {
            ctx->pc = 0x2BC4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC49Cu;
            // 0x2bc4a0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC4A4u;
label_2bc4a4:
    // 0x2bc4a4: 0xc089fee  jal         func_227FB8
label_2bc4a8:
    if (ctx->pc == 0x2BC4A8u) {
        ctx->pc = 0x2BC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4A4u;
        // 0x2bc4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4ACu;
        goto label_2bc4ac;
    }
    ctx->pc = 0x2BC4A4u;
    SET_GPR_U32(ctx, 31, 0x2BC4ACu);
    ctx->pc = 0x2BC4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4A4u;
    // 0x2bc4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x2BC4A4u, 0x2BC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4ACu;
label_2bc4ac:
    // 0x2bc4ac: 0x1450014d  bne         $v0, $s0, . + 4 + (0x14D << 2)
label_2bc4b0:
    if (ctx->pc == 0x2BC4B0u) {
        ctx->pc = 0x2BC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4ACu;
        // 0x2bc4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4B4u;
        goto label_2bc4b4;
    }
    ctx->pc = 0x2BC4ACu;
    {
        const bool branch_taken_0x2bc4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4ACu;
        // 0x2bc4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4ac) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC4B4u;
label_2bc4b4:
    // 0x2bc4b4: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x2bc4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_2bc4b8:
    // 0x2bc4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bc4bc:
    // 0x2bc4bc: 0x10000148  b           . + 4 + (0x148 << 2)
label_2bc4c0:
    if (ctx->pc == 0x2BC4C0u) {
        ctx->pc = 0x2BC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4BCu;
        // 0x2bc4c0: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4C4u;
        goto label_2bc4c4;
    }
    ctx->pc = 0x2BC4BCu;
    {
        const bool branch_taken_0x2bc4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4BCu;
        // 0x2bc4c0: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4bc) {
            ctx->pc = 0x2BC9E0u;
            goto label_2bc9e0;
        }
    }
    ctx->pc = 0x2BC4C4u;
label_2bc4c4:
    // 0x2bc4c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bc4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc4c8:
    // 0x2bc4c8: 0x0  nop
    ctx->pc = 0x2bc4c8u;
    // NOP
label_2bc4cc:
    // 0x2bc4cc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2bc4d0:
    if (ctx->pc == 0x2BC4D0u) {
        ctx->pc = 0x2BC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4CCu;
        // 0x2bc4d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4D4u;
        goto label_2bc4d4;
    }
    ctx->pc = 0x2BC4CCu;
    {
        const bool branch_taken_0x2bc4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4CCu;
        // 0x2bc4d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4cc) {
            ctx->pc = 0x2BC538u;
            goto label_2bc538;
        }
    }
    ctx->pc = 0x2BC4D4u;
label_2bc4d4:
    // 0x2bc4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4d8:
    // 0x2bc4d8: 0xc0aefe8  jal         func_2BBFA0
label_2bc4dc:
    if (ctx->pc == 0x2BC4DCu) {
        ctx->pc = 0x2BC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4D8u;
        // 0x2bc4dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4E0u;
        goto label_2bc4e0;
    }
    ctx->pc = 0x2BC4D8u;
    SET_GPR_U32(ctx, 31, 0x2BC4E0u);
    ctx->pc = 0x2BC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4D8u;
    // 0x2bc4dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBFA0u, 0x2BC4D8u, 0x2BC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4E0u;
label_2bc4e0:
    // 0x2bc4e0: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
label_2bc4e4:
    if (ctx->pc == 0x2BC4E4u) {
        ctx->pc = 0x2BC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4E0u;
        // 0x2bc4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4E8u;
        goto label_2bc4e8;
    }
    ctx->pc = 0x2BC4E0u;
    {
        const bool branch_taken_0x2bc4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4E0u;
        // 0x2bc4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4e0) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC4E8u;
label_2bc4e8:
    // 0x2bc4e8: 0xc0a4e54  jal         func_293950
label_2bc4ec:
    if (ctx->pc == 0x2BC4ECu) {
        ctx->pc = 0x2BC4F0u;
        goto label_2bc4f0;
    }
    ctx->pc = 0x2BC4E8u;
    SET_GPR_U32(ctx, 31, 0x2BC4F0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BC4E8u, 0x2BC4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4F0u;
label_2bc4f0:
    // 0x2bc4f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc4f4:
    // 0x2bc4f4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2bc4f8:
    if (ctx->pc == 0x2BC4F8u) {
        ctx->pc = 0x2BC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4F4u;
        // 0x2bc4f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4FCu;
        goto label_2bc4fc;
    }
    ctx->pc = 0x2BC4F4u;
    {
        const bool branch_taken_0x2bc4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4f4) {
            ctx->pc = 0x2BC4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC4F4u;
            // 0x2bc4f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC528u;
            goto label_2bc528;
        }
    }
    ctx->pc = 0x2BC4FCu;
label_2bc4fc:
    // 0x2bc4fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc500:
    // 0x2bc500: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc504:
    // 0x2bc504: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc508:
    // 0x2bc508: 0x40f809  jalr        $v0
label_2bc50c:
    if (ctx->pc == 0x2BC50Cu) {
        ctx->pc = 0x2BC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC508u;
        // 0x2bc50c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC510u;
        goto label_2bc510;
    }
    ctx->pc = 0x2BC508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC510u);
        ctx->pc = 0x2BC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC508u;
        // 0x2bc50c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC508u, 0x2BC510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC510u;
label_2bc510:
    // 0x2bc510: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc514:
    // 0x2bc514: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bc514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc518:
    // 0x2bc518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc51c:
    // 0x2bc51c: 0xc0abd6c  jal         func_2AF5B0
label_2bc520:
    if (ctx->pc == 0x2BC520u) {
        ctx->pc = 0x2BC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC51Cu;
        // 0x2bc520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC524u;
        goto label_2bc524;
    }
    ctx->pc = 0x2BC51Cu;
    SET_GPR_U32(ctx, 31, 0x2BC524u);
    ctx->pc = 0x2BC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC51Cu;
    // 0x2bc520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2BC51Cu, 0x2BC524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC524u;
label_2bc524:
    // 0x2bc524: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc528:
    // 0x2bc528: 0xc0a35d6  jal         func_28D758
label_2bc52c:
    if (ctx->pc == 0x2BC52Cu) {
        ctx->pc = 0x2BC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC528u;
        // 0x2bc52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC530u;
        goto label_2bc530;
    }
    ctx->pc = 0x2BC528u;
    SET_GPR_U32(ctx, 31, 0x2BC530u);
    ctx->pc = 0x2BC52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC528u;
    // 0x2bc52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BC528u, 0x2BC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC530u;
label_2bc530:
    // 0x2bc530: 0x1000012c  b           . + 4 + (0x12C << 2)
label_2bc534:
    if (ctx->pc == 0x2BC534u) {
        ctx->pc = 0x2BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC530u;
        // 0x2bc534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC538u;
        goto label_2bc538;
    }
    ctx->pc = 0x2BC530u;
    {
        const bool branch_taken_0x2bc530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC530u;
        // 0x2bc534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc530) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC538u;
label_2bc538:
    // 0x2bc538: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bc538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc53c:
    // 0x2bc53c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bc540:
    // 0x2bc540: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x2bc540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_2bc544:
    // 0x2bc544: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc548:
    // 0x2bc548: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x2bc548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2bc54c:
    // 0x2bc54c: 0xc0888a2  jal         func_222288
label_2bc550:
    if (ctx->pc == 0x2BC550u) {
        ctx->pc = 0x2BC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC54Cu;
        // 0x2bc550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC554u;
        goto label_2bc554;
    }
    ctx->pc = 0x2BC54Cu;
    SET_GPR_U32(ctx, 31, 0x2BC554u);
    ctx->pc = 0x2BC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC54Cu;
    // 0x2bc550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2BC54Cu, 0x2BC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC554u;
label_2bc554:
    // 0x2bc554: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_2bc558:
    if (ctx->pc == 0x2BC558u) {
        ctx->pc = 0x2BC55Cu;
        goto label_2bc55c;
    }
    ctx->pc = 0x2BC554u;
    {
        const bool branch_taken_0x2bc554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc554) {
            ctx->pc = 0x2BC628u;
            goto label_2bc628;
        }
    }
    ctx->pc = 0x2BC55Cu;
label_2bc55c:
    // 0x2bc55c: 0x56700012  bnel        $s3, $s0, . + 4 + (0x12 << 2)
label_2bc560:
    if (ctx->pc == 0x2BC560u) {
        ctx->pc = 0x2BC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC55Cu;
        // 0x2bc560: 0xc6e10008  lwc1        $f1, 0x8($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC564u;
        goto label_2bc564;
    }
    ctx->pc = 0x2BC55Cu;
    {
        const bool branch_taken_0x2bc55c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bc55c) {
            ctx->pc = 0x2BC560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC55Cu;
            // 0x2bc560: 0xc6e10008  lwc1        $f1, 0x8($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5A8u;
            goto label_2bc5a8;
        }
    }
    ctx->pc = 0x2BC564u;
label_2bc564:
    // 0x2bc564: 0xc0a4e54  jal         func_293950
label_2bc568:
    if (ctx->pc == 0x2BC568u) {
        ctx->pc = 0x2BC56Cu;
        goto label_2bc56c;
    }
    ctx->pc = 0x2BC564u;
    SET_GPR_U32(ctx, 31, 0x2BC56Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BC564u, 0x2BC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC56Cu;
label_2bc56c:
    // 0x2bc56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc570:
    // 0x2bc570: 0x5200008b  beql        $s0, $zero, . + 4 + (0x8B << 2)
label_2bc574:
    if (ctx->pc == 0x2BC574u) {
        ctx->pc = 0x2BC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC570u;
        // 0x2bc574: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC578u;
        goto label_2bc578;
    }
    ctx->pc = 0x2BC570u;
    {
        const bool branch_taken_0x2bc570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc570) {
            ctx->pc = 0x2BC574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC570u;
            // 0x2bc574: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC7A0u;
            goto label_2bc7a0;
        }
    }
    ctx->pc = 0x2BC578u;
label_2bc578:
    // 0x2bc578: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc57c:
    // 0x2bc57c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc580:
    // 0x2bc580: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc584:
    // 0x2bc584: 0x40f809  jalr        $v0
label_2bc588:
    if (ctx->pc == 0x2BC588u) {
        ctx->pc = 0x2BC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC584u;
        // 0x2bc588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC58Cu;
        goto label_2bc58c;
    }
    ctx->pc = 0x2BC584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC58Cu);
        ctx->pc = 0x2BC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC584u;
        // 0x2bc588: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC584u, 0x2BC58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC58Cu;
label_2bc58c:
    // 0x2bc58c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc590:
    // 0x2bc590: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bc590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc594:
    // 0x2bc594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc598:
    // 0x2bc598: 0xc0abd6c  jal         func_2AF5B0
label_2bc59c:
    if (ctx->pc == 0x2BC59Cu) {
        ctx->pc = 0x2BC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC598u;
        // 0x2bc59c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5A0u;
        goto label_2bc5a0;
    }
    ctx->pc = 0x2BC598u;
    SET_GPR_U32(ctx, 31, 0x2BC5A0u);
    ctx->pc = 0x2BC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC598u;
    // 0x2bc59c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2BC598u, 0x2BC5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5A0u;
label_2bc5a0:
    // 0x2bc5a0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2bc5a4:
    if (ctx->pc == 0x2BC5A4u) {
        ctx->pc = 0x2BC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5A0u;
        // 0x2bc5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5A8u;
        goto label_2bc5a8;
    }
    ctx->pc = 0x2BC5A0u;
    {
        const bool branch_taken_0x2bc5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5A0u;
        // 0x2bc5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5a0) {
            ctx->pc = 0x2BC7A0u;
            goto label_2bc7a0;
        }
    }
    ctx->pc = 0x2BC5A8u;
label_2bc5a8:
    // 0x2bc5a8: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2bc5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc5ac:
    // 0x2bc5ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bc5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc5b0:
    // 0x2bc5b0: 0x0  nop
    ctx->pc = 0x2bc5b0u;
    // NOP
label_2bc5b4:
    // 0x2bc5b4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_2bc5b8:
    if (ctx->pc == 0x2BC5B8u) {
        ctx->pc = 0x2BC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5B4u;
        // 0x2bc5b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5BCu;
        goto label_2bc5bc;
    }
    ctx->pc = 0x2BC5B4u;
    {
        const bool branch_taken_0x2bc5b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc5b4) {
            ctx->pc = 0x2BC5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC5B4u;
            // 0x2bc5b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC5E4u;
            goto label_2bc5e4;
        }
    }
    ctx->pc = 0x2BC5BCu;
label_2bc5bc:
    // 0x2bc5bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2bc5c0:
    // 0x2bc5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bc5c4:
    // 0x2bc5c4: 0x0  nop
    ctx->pc = 0x2bc5c4u;
    // NOP
label_2bc5c8:
    // 0x2bc5c8: 0x0  nop
    ctx->pc = 0x2bc5c8u;
    // NOP
label_2bc5cc:
    // 0x2bc5cc: 0x46140044  c1          0x140044
    ctx->pc = 0x2bc5ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2bc5d0:
    // 0x2bc5d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bc5d4:
    // 0x2bc5d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bc5d8:
    // 0x2bc5d8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2bc5d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2bc5dc:
    // 0x2bc5dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bc5e0:
    if (ctx->pc == 0x2BC5E0u) {
        ctx->pc = 0x2BC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5DCu;
        // 0x2bc5e0: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5E4u;
        goto label_2bc5e4;
    }
    ctx->pc = 0x2BC5DCu;
    {
        const bool branch_taken_0x2bc5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5DCu;
        // 0x2bc5e0: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5dc) {
            ctx->pc = 0x2BC5ECu;
            goto label_2bc5ec;
        }
    }
    ctx->pc = 0x2BC5E4u;
label_2bc5e4:
    // 0x2bc5e4: 0xc4550140  lwc1        $f21, 0x140($v0)
    ctx->pc = 0x2bc5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bc5e8:
    // 0x2bc5e8: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2bc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bc5ec:
    // 0x2bc5ec: 0xc08bfa0  jal         func_22FE80
label_2bc5f0:
    if (ctx->pc == 0x2BC5F0u) {
        ctx->pc = 0x2BC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5ECu;
        // 0x2bc5f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5F4u;
        goto label_2bc5f4;
    }
    ctx->pc = 0x2BC5ECu;
    SET_GPR_U32(ctx, 31, 0x2BC5F4u);
    ctx->pc = 0x2BC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC5ECu;
    // 0x2bc5f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BC5ECu, 0x2BC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5F4u;
label_2bc5f4:
    // 0x2bc5f4: 0xc0a367c  jal         func_28D9F0
label_2bc5f8:
    if (ctx->pc == 0x2BC5F8u) {
        ctx->pc = 0x2BC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5F4u;
        // 0x2bc5f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC5FCu;
        goto label_2bc5fc;
    }
    ctx->pc = 0x2BC5F4u;
    SET_GPR_U32(ctx, 31, 0x2BC5FCu);
    ctx->pc = 0x2BC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC5F4u;
    // 0x2bc5f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC5F4u, 0x2BC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5FCu;
label_2bc5fc:
    // 0x2bc5fc: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
label_2bc600:
    if (ctx->pc == 0x2BC600u) {
        ctx->pc = 0x2BC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5FCu;
        // 0x2bc600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC604u;
        goto label_2bc604;
    }
    ctx->pc = 0x2BC5FCu;
    {
        const bool branch_taken_0x2bc5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5FCu;
        // 0x2bc600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5fc) {
            ctx->pc = 0x2BC9E0u;
            goto label_2bc9e0;
        }
    }
    ctx->pc = 0x2BC604u;
label_2bc604:
    // 0x2bc604: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc608:
    // 0x2bc608: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bc608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc60c:
    // 0x2bc60c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc60cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2bc610:
    // 0x2bc610: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bc610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2bc614:
    // 0x2bc614: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bc614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bc618:
    // 0x2bc618: 0xc0bf3d4  jal         func_2FCF50
label_2bc61c:
    if (ctx->pc == 0x2BC61Cu) {
        ctx->pc = 0x2BC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC618u;
        // 0x2bc61c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC620u;
        goto label_2bc620;
    }
    ctx->pc = 0x2BC618u;
    SET_GPR_U32(ctx, 31, 0x2BC620u);
    ctx->pc = 0x2BC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC618u;
    // 0x2bc61c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2BC618u, 0x2BC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC620u;
label_2bc620:
    // 0x2bc620: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_2bc624:
    if (ctx->pc == 0x2BC624u) {
        ctx->pc = 0x2BC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC620u;
        // 0x2bc624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC628u;
        goto label_2bc628;
    }
    ctx->pc = 0x2BC620u;
    {
        const bool branch_taken_0x2bc620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC620u;
        // 0x2bc624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc620) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC628u;
label_2bc628:
    // 0x2bc628: 0x16a00053  bnez        $s5, . + 4 + (0x53 << 2)
label_2bc62c:
    if (ctx->pc == 0x2BC62Cu) {
        ctx->pc = 0x2BC630u;
        goto label_2bc630;
    }
    ctx->pc = 0x2BC628u;
    {
        const bool branch_taken_0x2bc628 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc628) {
            ctx->pc = 0x2BC778u;
            goto label_2bc778;
        }
    }
    ctx->pc = 0x2BC630u;
label_2bc630:
    // 0x2bc630: 0x16700051  bne         $s3, $s0, . + 4 + (0x51 << 2)
label_2bc634:
    if (ctx->pc == 0x2BC634u) {
        ctx->pc = 0x2BC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC630u;
        // 0x2bc634: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC638u;
        goto label_2bc638;
    }
    ctx->pc = 0x2BC630u;
    {
        const bool branch_taken_0x2bc630 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC630u;
        // 0x2bc634: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc630) {
            ctx->pc = 0x2BC778u;
            goto label_2bc778;
        }
    }
    ctx->pc = 0x2BC638u;
label_2bc638:
    // 0x2bc638: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2bc638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2bc63c:
    // 0x2bc63c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2bc640:
    if (ctx->pc == 0x2BC640u) {
        ctx->pc = 0x2BC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC63Cu;
        // 0x2bc640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC644u;
        goto label_2bc644;
    }
    ctx->pc = 0x2BC63Cu;
    {
        const bool branch_taken_0x2bc63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC63Cu;
        // 0x2bc640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc63c) {
            ctx->pc = 0x2BC664u;
            goto label_2bc664;
        }
    }
    ctx->pc = 0x2BC644u;
label_2bc644:
    // 0x2bc644: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2bc648:
    if (ctx->pc == 0x2BC648u) {
        ctx->pc = 0x2BC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC644u;
        // 0x2bc648: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC64Cu;
        goto label_2bc64c;
    }
    ctx->pc = 0x2BC644u;
    {
        const bool branch_taken_0x2bc644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC644u;
        // 0x2bc648: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc644) {
            ctx->pc = 0x2BC664u;
            goto label_2bc664;
        }
    }
    ctx->pc = 0x2BC64Cu;
label_2bc64c:
    // 0x2bc64c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bc650:
    if (ctx->pc == 0x2BC650u) {
        ctx->pc = 0x2BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC64Cu;
        // 0x2bc650: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC654u;
        goto label_2bc654;
    }
    ctx->pc = 0x2BC64Cu;
    {
        const bool branch_taken_0x2bc64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC64Cu;
        // 0x2bc650: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc64c) {
            ctx->pc = 0x2BC664u;
            goto label_2bc664;
        }
    }
    ctx->pc = 0x2BC654u;
label_2bc654:
    // 0x2bc654: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2bc658:
    if (ctx->pc == 0x2BC658u) {
        ctx->pc = 0x2BC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC654u;
        // 0x2bc658: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC65Cu;
        goto label_2bc65c;
    }
    ctx->pc = 0x2BC654u;
    {
        const bool branch_taken_0x2bc654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC654u;
        // 0x2bc658: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc654) {
            ctx->pc = 0x2BC664u;
            goto label_2bc664;
        }
    }
    ctx->pc = 0x2BC65Cu;
label_2bc65c:
    // 0x2bc65c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2bc660:
    if (ctx->pc == 0x2BC660u) {
        ctx->pc = 0x2BC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC65Cu;
        // 0x2bc660: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC664u;
        goto label_2bc664;
    }
    ctx->pc = 0x2BC65Cu;
    {
        const bool branch_taken_0x2bc65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc65c) {
            ctx->pc = 0x2BC660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC65Cu;
            // 0x2bc660: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6C4u;
            goto label_2bc6c4;
        }
    }
    ctx->pc = 0x2BC664u;
label_2bc664:
    // 0x2bc664: 0xc08bfbc  jal         func_22FEF0
label_2bc668:
    if (ctx->pc == 0x2BC668u) {
        ctx->pc = 0x2BC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC664u;
        // 0x2bc668: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC66Cu;
        goto label_2bc66c;
    }
    ctx->pc = 0x2BC664u;
    SET_GPR_U32(ctx, 31, 0x2BC66Cu);
    ctx->pc = 0x2BC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC664u;
    // 0x2bc668: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BC664u, 0x2BC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC66Cu;
label_2bc66c:
    // 0x2bc66c: 0xc0a367c  jal         func_28D9F0
label_2bc670:
    if (ctx->pc == 0x2BC670u) {
        ctx->pc = 0x2BC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC66Cu;
        // 0x2bc670: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC674u;
        goto label_2bc674;
    }
    ctx->pc = 0x2BC66Cu;
    SET_GPR_U32(ctx, 31, 0x2BC674u);
    ctx->pc = 0x2BC670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC66Cu;
    // 0x2bc670: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC66Cu, 0x2BC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC674u;
label_2bc674:
    // 0x2bc674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc678:
    // 0x2bc678: 0x120000da  beqz        $s0, . + 4 + (0xDA << 2)
label_2bc67c:
    if (ctx->pc == 0x2BC67Cu) {
        ctx->pc = 0x2BC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC678u;
        // 0x2bc67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC680u;
        goto label_2bc680;
    }
    ctx->pc = 0x2BC678u;
    {
        const bool branch_taken_0x2bc678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC678u;
        // 0x2bc67c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc678) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC680u;
label_2bc680:
    // 0x2bc680: 0xc087420  jal         func_21D080
label_2bc684:
    if (ctx->pc == 0x2BC684u) {
        ctx->pc = 0x2BC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC680u;
        // 0x2bc684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC688u;
        goto label_2bc688;
    }
    ctx->pc = 0x2BC680u;
    SET_GPR_U32(ctx, 31, 0x2BC688u);
    ctx->pc = 0x2BC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC680u;
    // 0x2bc684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BC680u, 0x2BC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC688u;
label_2bc688:
    // 0x2bc688: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2bc688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2bc68c:
    // 0x2bc68c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc690:
    // 0x2bc690: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2bc694:
    // 0x2bc694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc698:
    // 0x2bc698: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2bc698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_2bc69c:
    // 0x2bc69c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2bc69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2bc6a0:
    // 0x2bc6a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc6a4:
    // 0x2bc6a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bc6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc6a8:
    // 0x2bc6a8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bc6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bc6ac:
    // 0x2bc6ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bc6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc6b0:
    // 0x2bc6b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bc6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc6b4:
    // 0x2bc6b4: 0xc0bee7a  jal         func_2FB9E8
label_2bc6b8:
    if (ctx->pc == 0x2BC6B8u) {
        ctx->pc = 0x2BC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6B4u;
        // 0x2bc6b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC6BCu;
        goto label_2bc6bc;
    }
    ctx->pc = 0x2BC6B4u;
    SET_GPR_U32(ctx, 31, 0x2BC6BCu);
    ctx->pc = 0x2BC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6B4u;
    // 0x2bc6b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BC6B4u, 0x2BC6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6BCu;
label_2bc6bc:
    // 0x2bc6bc: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_2bc6c0:
    if (ctx->pc == 0x2BC6C0u) {
        ctx->pc = 0x2BC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6BCu;
        // 0x2bc6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC6C4u;
        goto label_2bc6c4;
    }
    ctx->pc = 0x2BC6BCu;
    {
        const bool branch_taken_0x2bc6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6BCu;
        // 0x2bc6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc6bc) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC6C4u;
label_2bc6c4:
    // 0x2bc6c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc6c8:
    // 0x2bc6c8: 0x0  nop
    ctx->pc = 0x2bc6c8u;
    // NOP
label_2bc6cc:
    // 0x2bc6cc: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_2bc6d0:
    if (ctx->pc == 0x2BC6D0u) {
        ctx->pc = 0x2BC6D4u;
        goto label_2bc6d4;
    }
    ctx->pc = 0x2BC6CCu;
    {
        const bool branch_taken_0x2bc6cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc6cc) {
            ctx->pc = 0x2BC778u;
            goto label_2bc778;
        }
    }
    ctx->pc = 0x2BC6D4u;
label_2bc6d4:
    // 0x2bc6d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bc6d8:
    // 0x2bc6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bc6dc:
    // 0x2bc6dc: 0x0  nop
    ctx->pc = 0x2bc6dcu;
    // NOP
label_2bc6e0:
    // 0x2bc6e0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bc6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc6e4:
    // 0x2bc6e4: 0x0  nop
    ctx->pc = 0x2bc6e4u;
    // NOP
label_2bc6e8:
    // 0x2bc6e8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_2bc6ec:
    if (ctx->pc == 0x2BC6ECu) {
        ctx->pc = 0x2BC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6E8u;
        // 0x2bc6ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC6F0u;
        goto label_2bc6f0;
    }
    ctx->pc = 0x2BC6E8u;
    {
        const bool branch_taken_0x2bc6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6E8u;
        // 0x2bc6ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc6e8) {
            ctx->pc = 0x2BC778u;
            goto label_2bc778;
        }
    }
    ctx->pc = 0x2BC6F0u;
label_2bc6f0:
    // 0x2bc6f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc6f4:
    // 0x2bc6f4: 0xc08886c  jal         func_2221B0
label_2bc6f8:
    if (ctx->pc == 0x2BC6F8u) {
        ctx->pc = 0x2BC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6F4u;
        // 0x2bc6f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC6FCu;
        goto label_2bc6fc;
    }
    ctx->pc = 0x2BC6F4u;
    SET_GPR_U32(ctx, 31, 0x2BC6FCu);
    ctx->pc = 0x2BC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC6F4u;
    // 0x2bc6f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2BC6F4u, 0x2BC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6FCu;
label_2bc6fc:
    // 0x2bc6fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2bc700:
    if (ctx->pc == 0x2BC700u) {
        ctx->pc = 0x2BC704u;
        goto label_2bc704;
    }
    ctx->pc = 0x2BC6FCu;
    {
        const bool branch_taken_0x2bc6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6fc) {
            ctx->pc = 0x2BC778u;
            goto label_2bc778;
        }
    }
    ctx->pc = 0x2BC704u;
label_2bc704:
    // 0x2bc704: 0xc08bfa0  jal         func_22FE80
label_2bc708:
    if (ctx->pc == 0x2BC708u) {
        ctx->pc = 0x2BC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC704u;
        // 0x2bc708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC70Cu;
        goto label_2bc70c;
    }
    ctx->pc = 0x2BC704u;
    SET_GPR_U32(ctx, 31, 0x2BC70Cu);
    ctx->pc = 0x2BC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC704u;
    // 0x2bc708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BC704u, 0x2BC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC70Cu;
label_2bc70c:
    // 0x2bc70c: 0xc0a367c  jal         func_28D9F0
label_2bc710:
    if (ctx->pc == 0x2BC710u) {
        ctx->pc = 0x2BC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC70Cu;
        // 0x2bc710: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC714u;
        goto label_2bc714;
    }
    ctx->pc = 0x2BC70Cu;
    SET_GPR_U32(ctx, 31, 0x2BC714u);
    ctx->pc = 0x2BC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC70Cu;
    // 0x2bc710: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC70Cu, 0x2BC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC714u;
label_2bc714:
    // 0x2bc714: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bc714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc718:
    // 0x2bc718: 0x126000b2  beqz        $s3, . + 4 + (0xB2 << 2)
label_2bc71c:
    if (ctx->pc == 0x2BC71Cu) {
        ctx->pc = 0x2BC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC718u;
        // 0x2bc71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC720u;
        goto label_2bc720;
    }
    ctx->pc = 0x2BC718u;
    {
        const bool branch_taken_0x2bc718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC718u;
        // 0x2bc71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc718) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC720u;
label_2bc720:
    // 0x2bc720: 0xc087420  jal         func_21D080
label_2bc724:
    if (ctx->pc == 0x2BC724u) {
        ctx->pc = 0x2BC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC720u;
        // 0x2bc724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC728u;
        goto label_2bc728;
    }
    ctx->pc = 0x2BC720u;
    SET_GPR_U32(ctx, 31, 0x2BC728u);
    ctx->pc = 0x2BC724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC720u;
    // 0x2bc724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2BC720u, 0x2BC728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC728u;
label_2bc728:
    // 0x2bc728: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2bc728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bc72c:
    // 0x2bc72c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc730:
    // 0x2bc730: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2bc734:
    // 0x2bc734: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2bc734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2bc738:
    // 0x2bc738: 0x40f809  jalr        $v0
label_2bc73c:
    if (ctx->pc == 0x2BC73Cu) {
        ctx->pc = 0x2BC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC738u;
        // 0x2bc73c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC740u;
        goto label_2bc740;
    }
    ctx->pc = 0x2BC738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC740u);
        ctx->pc = 0x2BC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC738u;
        // 0x2bc73c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC738u, 0x2BC740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC740u;
label_2bc740:
    // 0x2bc740: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc744:
    // 0x2bc744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bc748:
    // 0x2bc748: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2bc74c:
    // 0x2bc74c: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x2bc74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_2bc750:
    // 0x2bc750: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc754:
    // 0x2bc754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc758:
    // 0x2bc758: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2bc758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc75c:
    // 0x2bc75c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2bc75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bc760:
    // 0x2bc760: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bc760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc764:
    // 0x2bc764: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bc764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc768:
    // 0x2bc768: 0xc0bee7a  jal         func_2FB9E8
label_2bc76c:
    if (ctx->pc == 0x2BC76Cu) {
        ctx->pc = 0x2BC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC768u;
        // 0x2bc76c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC770u;
        goto label_2bc770;
    }
    ctx->pc = 0x2BC768u;
    SET_GPR_U32(ctx, 31, 0x2BC770u);
    ctx->pc = 0x2BC76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC768u;
    // 0x2bc76c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BC768u, 0x2BC770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC770u;
label_2bc770:
    // 0x2bc770: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2bc774:
    if (ctx->pc == 0x2BC774u) {
        ctx->pc = 0x2BC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC770u;
        // 0x2bc774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC778u;
        goto label_2bc778;
    }
    ctx->pc = 0x2BC770u;
    {
        const bool branch_taken_0x2bc770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC770u;
        // 0x2bc774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc770) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC778u;
label_2bc778:
    // 0x2bc778: 0xc0a4e54  jal         func_293950
label_2bc77c:
    if (ctx->pc == 0x2BC77Cu) {
        ctx->pc = 0x2BC780u;
        goto label_2bc780;
    }
    ctx->pc = 0x2BC778u;
    SET_GPR_U32(ctx, 31, 0x2BC780u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BC778u, 0x2BC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC780u;
label_2bc780:
    // 0x2bc780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc784:
    // 0x2bc784: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2bc788:
    if (ctx->pc == 0x2BC788u) {
        ctx->pc = 0x2BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC784u;
        // 0x2bc788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC78Cu;
        goto label_2bc78c;
    }
    ctx->pc = 0x2BC784u;
    {
        const bool branch_taken_0x2bc784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC784u;
        // 0x2bc788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc784) {
            ctx->pc = 0x2BC79Cu;
            goto label_2bc79c;
        }
    }
    ctx->pc = 0x2BC78Cu;
label_2bc78c:
    // 0x2bc78c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc790:
    // 0x2bc790: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2bc790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2bc794:
    // 0x2bc794: 0xc0acb08  jal         func_2B2C20
label_2bc798:
    if (ctx->pc == 0x2BC798u) {
        ctx->pc = 0x2BC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC794u;
        // 0x2bc798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC79Cu;
        goto label_2bc79c;
    }
    ctx->pc = 0x2BC794u;
    SET_GPR_U32(ctx, 31, 0x2BC79Cu);
    ctx->pc = 0x2BC798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC794u;
    // 0x2bc798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2BC794u, 0x2BC79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC79Cu;
label_2bc79c:
    // 0x2bc79c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc7a0:
    // 0x2bc7a0: 0xc0a35d6  jal         func_28D758
label_2bc7a4:
    if (ctx->pc == 0x2BC7A4u) {
        ctx->pc = 0x2BC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7A0u;
        // 0x2bc7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7A8u;
        goto label_2bc7a8;
    }
    ctx->pc = 0x2BC7A0u;
    SET_GPR_U32(ctx, 31, 0x2BC7A8u);
    ctx->pc = 0x2BC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7A0u;
    // 0x2bc7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BC7A0u, 0x2BC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7A8u;
label_2bc7a8:
    // 0x2bc7a8: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2bc7ac:
    if (ctx->pc == 0x2BC7ACu) {
        ctx->pc = 0x2BC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7A8u;
        // 0x2bc7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7B0u;
        goto label_2bc7b0;
    }
    ctx->pc = 0x2BC7A8u;
    {
        const bool branch_taken_0x2bc7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7A8u;
        // 0x2bc7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7a8) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC7B0u;
label_2bc7b0:
    // 0x2bc7b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc7b4:
    // 0x2bc7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc7b8:
    // 0x2bc7b8: 0xc0aefe8  jal         func_2BBFA0
label_2bc7bc:
    if (ctx->pc == 0x2BC7BCu) {
        ctx->pc = 0x2BC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7B8u;
        // 0x2bc7bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7C0u;
        goto label_2bc7c0;
    }
    ctx->pc = 0x2BC7B8u;
    SET_GPR_U32(ctx, 31, 0x2BC7C0u);
    ctx->pc = 0x2BC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7B8u;
    // 0x2bc7bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBFA0u, 0x2BC7B8u, 0x2BC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7C0u;
label_2bc7c0:
    // 0x2bc7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc7c4:
    // 0x2bc7c4: 0x10430086  beq         $v0, $v1, . + 4 + (0x86 << 2)
label_2bc7c8:
    if (ctx->pc == 0x2BC7C8u) {
        ctx->pc = 0x2BC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7C4u;
        // 0x2bc7c8: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7CCu;
        goto label_2bc7cc;
    }
    ctx->pc = 0x2BC7C4u;
    {
        const bool branch_taken_0x2bc7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7C4u;
        // 0x2bc7c8: 0x26630090  addiu       $v1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7c4) {
            ctx->pc = 0x2BC9E0u;
            goto label_2bc9e0;
        }
    }
    ctx->pc = 0x2BC7CCu;
label_2bc7cc:
    // 0x2bc7cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc7d0:
    // 0x2bc7d0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2bc7d4:
    // 0x2bc7d4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2bc7d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bc7d8:
    // 0x2bc7d8: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x2bc7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2bc7dc:
    // 0x2bc7dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2bc7e0:
    // 0x2bc7e0: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x2bc7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2bc7e4:
    // 0x2bc7e4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_2bc7e8:
    if (ctx->pc == 0x2BC7E8u) {
        ctx->pc = 0x2BC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7E4u;
        // 0x2bc7e8: 0x50a821  addu        $s5, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC7ECu;
        goto label_2bc7ec;
    }
    ctx->pc = 0x2BC7E4u;
    {
        const bool branch_taken_0x2bc7e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7E4u;
        // 0x2bc7e8: 0x50a821  addu        $s5, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7e4) {
            ctx->pc = 0x2BC800u;
            goto label_2bc800;
        }
    }
    ctx->pc = 0x2BC7ECu;
label_2bc7ec:
    // 0x2bc7ec: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_2bc7f0:
    // 0x2bc7f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2bc7f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2bc7f4:
    // 0x2bc7f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2bc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2bc7f8:
    // 0x2bc7f8: 0x40f809  jalr        $v0
label_2bc7fc:
    if (ctx->pc == 0x2BC7FCu) {
        ctx->pc = 0x2BC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F8u;
        // 0x2bc7fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC800u;
        goto label_2bc800;
    }
    ctx->pc = 0x2BC7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC800u);
        ctx->pc = 0x2BC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7F8u;
        // 0x2bc7fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC7F8u, 0x2BC800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC800u;
label_2bc800:
    // 0x2bc800: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc804:
    // 0x2bc804: 0xc137832  jal         func_4DE0C8
label_2bc808:
    if (ctx->pc == 0x2BC808u) {
        ctx->pc = 0x2BC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC804u;
        // 0x2bc808: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC80Cu;
        goto label_2bc80c;
    }
    ctx->pc = 0x2BC804u;
    SET_GPR_U32(ctx, 31, 0x2BC80Cu);
    ctx->pc = 0x2BC808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC804u;
    // 0x2bc808: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BC804u, 0x2BC80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC80Cu;
label_2bc80c:
    // 0x2bc80c: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x2bc80cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2bc810:
    // 0x2bc810: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bc810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bc814:
    // 0x2bc814: 0xc0cdb38  jal         func_336CE0
label_2bc818:
    if (ctx->pc == 0x2BC818u) {
        ctx->pc = 0x2BC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC814u;
        // 0x2bc818: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC81Cu;
        goto label_2bc81c;
    }
    ctx->pc = 0x2BC814u;
    SET_GPR_U32(ctx, 31, 0x2BC81Cu);
    ctx->pc = 0x2BC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC814u;
    // 0x2bc818: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BC814u, 0x2BC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC81Cu;
label_2bc81c:
    // 0x2bc81c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_2bc820:
    // 0x2bc820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bc824:
    // 0x2bc824: 0x0  nop
    ctx->pc = 0x2bc824u;
    // NOP
label_2bc828:
    // 0x2bc828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bc82c:
    // 0x2bc82c: 0x0  nop
    ctx->pc = 0x2bc82cu;
    // NOP
label_2bc830:
    // 0x2bc830: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2bc834:
    if (ctx->pc == 0x2BC834u) {
        ctx->pc = 0x2BC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC830u;
        // 0x2bc834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC838u;
        goto label_2bc838;
    }
    ctx->pc = 0x2BC830u;
    {
        const bool branch_taken_0x2bc830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC830u;
        // 0x2bc834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc830) {
            ctx->pc = 0x2BC884u;
            goto label_2bc884;
        }
    }
    ctx->pc = 0x2BC838u;
label_2bc838:
    // 0x2bc838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc83c:
    // 0x2bc83c: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x2bc83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_2bc840:
    // 0x2bc840: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2bc844:
    if (ctx->pc == 0x2BC844u) {
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC848u;
        goto label_2bc848;
    }
    ctx->pc = 0x2BC840u;
    {
        const bool branch_taken_0x2bc840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC840u;
        // 0x2bc844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc840) {
            ctx->pc = 0x2BC84Cu;
            goto label_2bc84c;
        }
    }
    ctx->pc = 0x2BC848u;
label_2bc848:
    // 0x2bc848: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2bc848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2bc84c:
    // 0x2bc84c: 0xc0a4e54  jal         func_293950
label_2bc850:
    if (ctx->pc == 0x2BC850u) {
        ctx->pc = 0x2BC854u;
        goto label_2bc854;
    }
    ctx->pc = 0x2BC84Cu;
    SET_GPR_U32(ctx, 31, 0x2BC854u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BC84Cu, 0x2BC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC854u;
label_2bc854:
    // 0x2bc854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc858:
    // 0x2bc858: 0x1200ffd0  beqz        $s0, . + 4 + (-0x30 << 2)
label_2bc85c:
    if (ctx->pc == 0x2BC85Cu) {
        ctx->pc = 0x2BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC858u;
        // 0x2bc85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC860u;
        goto label_2bc860;
    }
    ctx->pc = 0x2BC858u;
    {
        const bool branch_taken_0x2bc858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC858u;
        // 0x2bc85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc858) {
            ctx->pc = 0x2BC79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc79c;
        }
    }
    ctx->pc = 0x2BC860u;
label_2bc860:
    // 0x2bc860: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc864:
    // 0x2bc864: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2bc864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bc868:
    // 0x2bc868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bc868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc86c:
    // 0x2bc86c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2bc870:
    // 0x2bc870: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bc874:
    // 0x2bc874: 0xc0b7eea  jal         func_2DFBA8
label_2bc878:
    if (ctx->pc == 0x2BC878u) {
        ctx->pc = 0x2BC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC874u;
        // 0x2bc878: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC87Cu;
        goto label_2bc87c;
    }
    ctx->pc = 0x2BC874u;
    SET_GPR_U32(ctx, 31, 0x2BC87Cu);
    ctx->pc = 0x2BC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC874u;
    // 0x2bc878: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2BC874u, 0x2BC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC87Cu;
label_2bc87c:
    // 0x2bc87c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_2bc880:
    if (ctx->pc == 0x2BC880u) {
        ctx->pc = 0x2BC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC87Cu;
        // 0x2bc880: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC884u;
        goto label_2bc884;
    }
    ctx->pc = 0x2BC87Cu;
    {
        const bool branch_taken_0x2bc87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC87Cu;
        // 0x2bc880: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc87c) {
            ctx->pc = 0x2BC7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc7a0;
        }
    }
    ctx->pc = 0x2BC884u;
label_2bc884:
    // 0x2bc884: 0xc08a0d0  jal         func_228340
label_2bc888:
    if (ctx->pc == 0x2BC888u) {
        ctx->pc = 0x2BC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC884u;
        // 0x2bc888: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC88Cu;
        goto label_2bc88c;
    }
    ctx->pc = 0x2BC884u;
    SET_GPR_U32(ctx, 31, 0x2BC88Cu);
    ctx->pc = 0x2BC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC884u;
    // 0x2bc888: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BC884u, 0x2BC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC88Cu;
label_2bc88c:
    // 0x2bc88c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2bc890:
    if (ctx->pc == 0x2BC890u) {
        ctx->pc = 0x2BC894u;
        goto label_2bc894;
    }
    ctx->pc = 0x2BC88Cu;
    {
        const bool branch_taken_0x2bc88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2bc88c) {
            ctx->pc = 0x2BC8A4u;
            goto label_2bc8a4;
        }
    }
    ctx->pc = 0x2BC894u;
label_2bc894:
    // 0x2bc894: 0xc08a0d0  jal         func_228340
label_2bc898:
    if (ctx->pc == 0x2BC898u) {
        ctx->pc = 0x2BC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC894u;
        // 0x2bc898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC89Cu;
        goto label_2bc89c;
    }
    ctx->pc = 0x2BC894u;
    SET_GPR_U32(ctx, 31, 0x2BC89Cu);
    ctx->pc = 0x2BC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC894u;
    // 0x2bc898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2BC894u, 0x2BC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC89Cu;
label_2bc89c:
    // 0x2bc89c: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_2bc8a0:
    if (ctx->pc == 0x2BC8A0u) {
        ctx->pc = 0x2BC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC89Cu;
        // 0x2bc8a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8A4u;
        goto label_2bc8a4;
    }
    ctx->pc = 0x2BC89Cu;
    {
        const bool branch_taken_0x2bc89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bc89c) {
            ctx->pc = 0x2BC8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC89Cu;
            // 0x2bc8a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC8E8u;
            goto label_2bc8e8;
        }
    }
    ctx->pc = 0x2BC8A4u;
label_2bc8a4:
    // 0x2bc8a4: 0x1640004f  bnez        $s2, . + 4 + (0x4F << 2)
label_2bc8a8:
    if (ctx->pc == 0x2BC8A8u) {
        ctx->pc = 0x2BC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8A4u;
        // 0x2bc8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8ACu;
        goto label_2bc8ac;
    }
    ctx->pc = 0x2BC8A4u;
    {
        const bool branch_taken_0x2bc8a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8A4u;
        // 0x2bc8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8a4) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC8ACu;
label_2bc8ac:
    // 0x2bc8ac: 0xc0a367c  jal         func_28D9F0
label_2bc8b0:
    if (ctx->pc == 0x2BC8B0u) {
        ctx->pc = 0x2BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8ACu;
        // 0x2bc8b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8B4u;
        goto label_2bc8b4;
    }
    ctx->pc = 0x2BC8ACu;
    SET_GPR_U32(ctx, 31, 0x2BC8B4u);
    ctx->pc = 0x2BC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8ACu;
    // 0x2bc8b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC8ACu, 0x2BC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8B4u;
label_2bc8b4:
    // 0x2bc8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8b8:
    // 0x2bc8b8: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_2bc8bc:
    if (ctx->pc == 0x2BC8BCu) {
        ctx->pc = 0x2BC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B8u;
        // 0x2bc8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8C0u;
        goto label_2bc8c0;
    }
    ctx->pc = 0x2BC8B8u;
    {
        const bool branch_taken_0x2bc8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8B8u;
        // 0x2bc8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8b8) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC8C0u;
label_2bc8c0:
    // 0x2bc8c0: 0xc0884f6  jal         func_2213D8
label_2bc8c4:
    if (ctx->pc == 0x2BC8C4u) {
        ctx->pc = 0x2BC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8C0u;
        // 0x2bc8c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8C8u;
        goto label_2bc8c8;
    }
    ctx->pc = 0x2BC8C0u;
    SET_GPR_U32(ctx, 31, 0x2BC8C8u);
    ctx->pc = 0x2BC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8C0u;
    // 0x2bc8c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BC8C0u, 0x2BC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8C8u;
label_2bc8c8:
    // 0x2bc8c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc8cc:
    // 0x2bc8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8d0:
    // 0x2bc8d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bc8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8d4:
    // 0x2bc8d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bc8d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bc8d8:
    // 0x2bc8d8: 0xc0bf800  jal         func_2FE000
label_2bc8dc:
    if (ctx->pc == 0x2BC8DCu) {
        ctx->pc = 0x2BC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8D8u;
        // 0x2bc8dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8E0u;
        goto label_2bc8e0;
    }
    ctx->pc = 0x2BC8D8u;
    SET_GPR_U32(ctx, 31, 0x2BC8E0u);
    ctx->pc = 0x2BC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8D8u;
    // 0x2bc8dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BC8D8u, 0x2BC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8E0u;
label_2bc8e0:
    // 0x2bc8e0: 0x10000040  b           . + 4 + (0x40 << 2)
label_2bc8e4:
    if (ctx->pc == 0x2BC8E4u) {
        ctx->pc = 0x2BC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8E0u;
        // 0x2bc8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC8E8u;
        goto label_2bc8e8;
    }
    ctx->pc = 0x2BC8E0u;
    {
        const bool branch_taken_0x2bc8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8E0u;
        // 0x2bc8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8e0) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC8E8u;
label_2bc8e8:
    // 0x2bc8e8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2bc8ec:
    // 0x2bc8ec: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2bc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2bc8f0:
    // 0x2bc8f0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2bc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2bc8f4:
    // 0x2bc8f4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2bc8f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bc8f8:
    // 0x2bc8f8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2bc8fc:
    if (ctx->pc == 0x2BC8FCu) {
        ctx->pc = 0x2BC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F8u;
        // 0x2bc8fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC900u;
        goto label_2bc900;
    }
    ctx->pc = 0x2BC8F8u;
    {
        const bool branch_taken_0x2bc8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F8u;
        // 0x2bc8fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8f8) {
            ctx->pc = 0x2BC980u;
            goto label_2bc980;
        }
    }
    ctx->pc = 0x2BC900u;
label_2bc900:
    // 0x2bc900: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2bc904:
    // 0x2bc904: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2bc904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_2bc908:
    // 0x2bc908: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2bc908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2bc90c:
    // 0x2bc90c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bc910:
    // 0x2bc910: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2bc910u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2bc914:
    // 0x2bc914: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bc914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2bc918:
    // 0x2bc918: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2bc91c:
    // 0x2bc91c: 0xc0cd8ec  jal         func_3363B0
label_2bc920:
    if (ctx->pc == 0x2BC920u) {
        ctx->pc = 0x2BC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC91Cu;
        // 0x2bc920: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC924u;
        goto label_2bc924;
    }
    ctx->pc = 0x2BC91Cu;
    SET_GPR_U32(ctx, 31, 0x2BC924u);
    ctx->pc = 0x2BC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC91Cu;
    // 0x2bc920: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2BC91Cu, 0x2BC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC924u;
label_2bc924:
    // 0x2bc924: 0xc0a367c  jal         func_28D9F0
label_2bc928:
    if (ctx->pc == 0x2BC928u) {
        ctx->pc = 0x2BC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC924u;
        // 0x2bc928: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC92Cu;
        goto label_2bc92c;
    }
    ctx->pc = 0x2BC924u;
    SET_GPR_U32(ctx, 31, 0x2BC92Cu);
    ctx->pc = 0x2BC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC924u;
    // 0x2bc928: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC924u, 0x2BC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC92Cu;
label_2bc92c:
    // 0x2bc92c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc930:
    // 0x2bc930: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_2bc934:
    if (ctx->pc == 0x2BC934u) {
        ctx->pc = 0x2BC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC930u;
        // 0x2bc934: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC938u;
        goto label_2bc938;
    }
    ctx->pc = 0x2BC930u;
    {
        const bool branch_taken_0x2bc930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC930u;
        // 0x2bc934: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc930) {
            ctx->pc = 0x2BC980u;
            goto label_2bc980;
        }
    }
    ctx->pc = 0x2BC938u;
label_2bc938:
    // 0x2bc938: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2bc938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2bc93c:
    // 0x2bc93c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2bc93cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc940:
    // 0x2bc940: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bc944:
    // 0x2bc944: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bc944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2bc948:
    // 0x2bc948: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bc948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2bc94c:
    // 0x2bc94c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2bc94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2bc950:
    // 0x2bc950: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2bc950u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2bc954:
    // 0x2bc954: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2bc954u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2bc958:
    // 0x2bc958: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2bc958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2bc95c:
    // 0x2bc95c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2bc95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2bc960:
    // 0x2bc960: 0xc0884f6  jal         func_2213D8
label_2bc964:
    if (ctx->pc == 0x2BC964u) {
        ctx->pc = 0x2BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC960u;
        // 0x2bc964: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC968u;
        goto label_2bc968;
    }
    ctx->pc = 0x2BC960u;
    SET_GPR_U32(ctx, 31, 0x2BC968u);
    ctx->pc = 0x2BC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC960u;
    // 0x2bc964: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BC960u, 0x2BC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC968u;
label_2bc968:
    // 0x2bc968: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc96c:
    // 0x2bc96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bc970:
    // 0x2bc970: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc974:
    // 0x2bc974: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bc974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2bc978:
    // 0x2bc978: 0xc0bf800  jal         func_2FE000
label_2bc97c:
    if (ctx->pc == 0x2BC97Cu) {
        ctx->pc = 0x2BC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC978u;
        // 0x2bc97c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC980u;
        goto label_2bc980;
    }
    ctx->pc = 0x2BC978u;
    SET_GPR_U32(ctx, 31, 0x2BC980u);
    ctx->pc = 0x2BC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC978u;
    // 0x2bc97c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BC978u, 0x2BC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC980u;
label_2bc980:
    // 0x2bc980: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_2bc984:
    // 0x2bc984: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2bc988:
    // 0x2bc988: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2bc98c:
    // 0x2bc98c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2bc98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2bc990:
    // 0x2bc990: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2bc994:
    if (ctx->pc == 0x2BC994u) {
        ctx->pc = 0x2BC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC990u;
        // 0x2bc994: 0x24820bb8  addiu       $v0, $a0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC998u;
        goto label_2bc998;
    }
    ctx->pc = 0x2BC990u;
    {
        const bool branch_taken_0x2bc990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC990u;
        // 0x2bc994: 0x24820bb8  addiu       $v0, $a0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc990) {
            ctx->pc = 0x2BC9E0u;
            goto label_2bc9e0;
        }
    }
    ctx->pc = 0x2BC998u;
label_2bc998:
    // 0x2bc998: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2bc998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2bc99c:
    // 0x2bc99c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2bc9a0:
    // 0x2bc9a0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2bc9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2bc9a4:
    // 0x2bc9a4: 0xc0cd4ee  jal         func_3353B8
label_2bc9a8:
    if (ctx->pc == 0x2BC9A8u) {
        ctx->pc = 0x2BC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A4u;
        // 0x2bc9a8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9ACu;
        goto label_2bc9ac;
    }
    ctx->pc = 0x2BC9A4u;
    SET_GPR_U32(ctx, 31, 0x2BC9ACu);
    ctx->pc = 0x2BC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9A4u;
    // 0x2bc9a8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2BC9A4u, 0x2BC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9ACu;
label_2bc9ac:
    // 0x2bc9ac: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2bc9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2bc9b0:
    // 0x2bc9b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bc9b4:
    if (ctx->pc == 0x2BC9B4u) {
        ctx->pc = 0x2BC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9B0u;
        // 0x2bc9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9B8u;
        goto label_2bc9b8;
    }
    ctx->pc = 0x2BC9B0u;
    {
        const bool branch_taken_0x2bc9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9B0u;
        // 0x2bc9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9b0) {
            ctx->pc = 0x2BC9E4u;
            goto label_2bc9e4;
        }
    }
    ctx->pc = 0x2BC9B8u;
label_2bc9b8:
    // 0x2bc9b8: 0xc0a367c  jal         func_28D9F0
label_2bc9bc:
    if (ctx->pc == 0x2BC9BCu) {
        ctx->pc = 0x2BC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9B8u;
        // 0x2bc9bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9C0u;
        goto label_2bc9c0;
    }
    ctx->pc = 0x2BC9B8u;
    SET_GPR_U32(ctx, 31, 0x2BC9C0u);
    ctx->pc = 0x2BC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9B8u;
    // 0x2bc9bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BC9B8u, 0x2BC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9C0u;
label_2bc9c0:
    // 0x2bc9c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2bc9c4:
    if (ctx->pc == 0x2BC9C4u) {
        ctx->pc = 0x2BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9C0u;
        // 0x2bc9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9C8u;
        goto label_2bc9c8;
    }
    ctx->pc = 0x2BC9C0u;
    {
        const bool branch_taken_0x2bc9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9C0u;
        // 0x2bc9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9c0) {
            ctx->pc = 0x2BC9E0u;
            goto label_2bc9e0;
        }
    }
    ctx->pc = 0x2BC9C8u;
label_2bc9c8:
    // 0x2bc9c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc9cc:
    // 0x2bc9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc9d0:
    // 0x2bc9d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc9d4:
    // 0x2bc9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bc9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc9d8:
    // 0x2bc9d8: 0xc0be7d2  jal         func_2F9F48
label_2bc9dc:
    if (ctx->pc == 0x2BC9DCu) {
        ctx->pc = 0x2BC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9D8u;
        // 0x2bc9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9E0u;
        goto label_2bc9e0;
    }
    ctx->pc = 0x2BC9D8u;
    SET_GPR_U32(ctx, 31, 0x2BC9E0u);
    ctx->pc = 0x2BC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9D8u;
    // 0x2bc9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2BC9D8u, 0x2BC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9E0u;
label_2bc9e0:
    // 0x2bc9e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc9e4:
    // 0x2bc9e4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2bc9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2bc9e8:
    // 0x2bc9e8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2bc9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2bc9ec:
    // 0x2bc9ec: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2bc9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2bc9f0:
    // 0x2bc9f0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2bc9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2bc9f4:
    // 0x2bc9f4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2bc9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bc9f8:
    // 0x2bc9f8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2bc9f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2bc9fc:
    // 0x2bc9fc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2bc9fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bca00:
    // 0x2bca00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bca00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bca04:
    // 0x2bca04: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2bca04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bca08:
    // 0x2bca08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bca0c:
    // 0x2bca0c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2bca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bca10:
    // 0x2bca10: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2bca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bca14:
    // 0x2bca14: 0x3e00008  jr          $ra
label_2bca18:
    if (ctx->pc == 0x2BCA18u) {
        ctx->pc = 0x2BCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA14u;
        // 0x2bca18: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA1Cu;
        goto label_2bca1c;
    }
    ctx->pc = 0x2BCA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA14u;
        // 0x2bca18: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA1Cu;
label_2bca1c:
    // 0x2bca1c: 0x0  nop
    ctx->pc = 0x2bca1cu;
    // NOP
    ctx->pc = 0x2bca20u;
}
