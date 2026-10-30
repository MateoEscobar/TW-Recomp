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

// Function: sub_0033F110
// Address: 0x33f110 - 0x33feb0
void sub_0033F110_0x33f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F110_0x33f110");
#endif

    switch (ctx->pc) {
        case 0x33f110u: goto label_33f110;
        case 0x33f114u: goto label_33f114;
        case 0x33f118u: goto label_33f118;
        case 0x33f11cu: goto label_33f11c;
        case 0x33f120u: goto label_33f120;
        case 0x33f124u: goto label_33f124;
        case 0x33f128u: goto label_33f128;
        case 0x33f12cu: goto label_33f12c;
        case 0x33f130u: goto label_33f130;
        case 0x33f134u: goto label_33f134;
        case 0x33f138u: goto label_33f138;
        case 0x33f13cu: goto label_33f13c;
        case 0x33f140u: goto label_33f140;
        case 0x33f144u: goto label_33f144;
        case 0x33f148u: goto label_33f148;
        case 0x33f14cu: goto label_33f14c;
        case 0x33f150u: goto label_33f150;
        case 0x33f154u: goto label_33f154;
        case 0x33f158u: goto label_33f158;
        case 0x33f15cu: goto label_33f15c;
        case 0x33f160u: goto label_33f160;
        case 0x33f164u: goto label_33f164;
        case 0x33f168u: goto label_33f168;
        case 0x33f16cu: goto label_33f16c;
        case 0x33f170u: goto label_33f170;
        case 0x33f174u: goto label_33f174;
        case 0x33f178u: goto label_33f178;
        case 0x33f17cu: goto label_33f17c;
        case 0x33f180u: goto label_33f180;
        case 0x33f184u: goto label_33f184;
        case 0x33f188u: goto label_33f188;
        case 0x33f18cu: goto label_33f18c;
        case 0x33f190u: goto label_33f190;
        case 0x33f194u: goto label_33f194;
        case 0x33f198u: goto label_33f198;
        case 0x33f19cu: goto label_33f19c;
        case 0x33f1a0u: goto label_33f1a0;
        case 0x33f1a4u: goto label_33f1a4;
        case 0x33f1a8u: goto label_33f1a8;
        case 0x33f1acu: goto label_33f1ac;
        case 0x33f1b0u: goto label_33f1b0;
        case 0x33f1b4u: goto label_33f1b4;
        case 0x33f1b8u: goto label_33f1b8;
        case 0x33f1bcu: goto label_33f1bc;
        case 0x33f1c0u: goto label_33f1c0;
        case 0x33f1c4u: goto label_33f1c4;
        case 0x33f1c8u: goto label_33f1c8;
        case 0x33f1ccu: goto label_33f1cc;
        case 0x33f1d0u: goto label_33f1d0;
        case 0x33f1d4u: goto label_33f1d4;
        case 0x33f1d8u: goto label_33f1d8;
        case 0x33f1dcu: goto label_33f1dc;
        case 0x33f1e0u: goto label_33f1e0;
        case 0x33f1e4u: goto label_33f1e4;
        case 0x33f1e8u: goto label_33f1e8;
        case 0x33f1ecu: goto label_33f1ec;
        case 0x33f1f0u: goto label_33f1f0;
        case 0x33f1f4u: goto label_33f1f4;
        case 0x33f1f8u: goto label_33f1f8;
        case 0x33f1fcu: goto label_33f1fc;
        case 0x33f200u: goto label_33f200;
        case 0x33f204u: goto label_33f204;
        case 0x33f208u: goto label_33f208;
        case 0x33f20cu: goto label_33f20c;
        case 0x33f210u: goto label_33f210;
        case 0x33f214u: goto label_33f214;
        case 0x33f218u: goto label_33f218;
        case 0x33f21cu: goto label_33f21c;
        case 0x33f220u: goto label_33f220;
        case 0x33f224u: goto label_33f224;
        case 0x33f228u: goto label_33f228;
        case 0x33f22cu: goto label_33f22c;
        case 0x33f230u: goto label_33f230;
        case 0x33f234u: goto label_33f234;
        case 0x33f238u: goto label_33f238;
        case 0x33f23cu: goto label_33f23c;
        case 0x33f240u: goto label_33f240;
        case 0x33f244u: goto label_33f244;
        case 0x33f248u: goto label_33f248;
        case 0x33f24cu: goto label_33f24c;
        case 0x33f250u: goto label_33f250;
        case 0x33f254u: goto label_33f254;
        case 0x33f258u: goto label_33f258;
        case 0x33f25cu: goto label_33f25c;
        case 0x33f260u: goto label_33f260;
        case 0x33f264u: goto label_33f264;
        case 0x33f268u: goto label_33f268;
        case 0x33f26cu: goto label_33f26c;
        case 0x33f270u: goto label_33f270;
        case 0x33f274u: goto label_33f274;
        case 0x33f278u: goto label_33f278;
        case 0x33f27cu: goto label_33f27c;
        case 0x33f280u: goto label_33f280;
        case 0x33f284u: goto label_33f284;
        case 0x33f288u: goto label_33f288;
        case 0x33f28cu: goto label_33f28c;
        case 0x33f290u: goto label_33f290;
        case 0x33f294u: goto label_33f294;
        case 0x33f298u: goto label_33f298;
        case 0x33f29cu: goto label_33f29c;
        case 0x33f2a0u: goto label_33f2a0;
        case 0x33f2a4u: goto label_33f2a4;
        case 0x33f2a8u: goto label_33f2a8;
        case 0x33f2acu: goto label_33f2ac;
        case 0x33f2b0u: goto label_33f2b0;
        case 0x33f2b4u: goto label_33f2b4;
        case 0x33f2b8u: goto label_33f2b8;
        case 0x33f2bcu: goto label_33f2bc;
        case 0x33f2c0u: goto label_33f2c0;
        case 0x33f2c4u: goto label_33f2c4;
        case 0x33f2c8u: goto label_33f2c8;
        case 0x33f2ccu: goto label_33f2cc;
        case 0x33f2d0u: goto label_33f2d0;
        case 0x33f2d4u: goto label_33f2d4;
        case 0x33f2d8u: goto label_33f2d8;
        case 0x33f2dcu: goto label_33f2dc;
        case 0x33f2e0u: goto label_33f2e0;
        case 0x33f2e4u: goto label_33f2e4;
        case 0x33f2e8u: goto label_33f2e8;
        case 0x33f2ecu: goto label_33f2ec;
        case 0x33f2f0u: goto label_33f2f0;
        case 0x33f2f4u: goto label_33f2f4;
        case 0x33f2f8u: goto label_33f2f8;
        case 0x33f2fcu: goto label_33f2fc;
        case 0x33f300u: goto label_33f300;
        case 0x33f304u: goto label_33f304;
        case 0x33f308u: goto label_33f308;
        case 0x33f30cu: goto label_33f30c;
        case 0x33f310u: goto label_33f310;
        case 0x33f314u: goto label_33f314;
        case 0x33f318u: goto label_33f318;
        case 0x33f31cu: goto label_33f31c;
        case 0x33f320u: goto label_33f320;
        case 0x33f324u: goto label_33f324;
        case 0x33f328u: goto label_33f328;
        case 0x33f32cu: goto label_33f32c;
        case 0x33f330u: goto label_33f330;
        case 0x33f334u: goto label_33f334;
        case 0x33f338u: goto label_33f338;
        case 0x33f33cu: goto label_33f33c;
        case 0x33f340u: goto label_33f340;
        case 0x33f344u: goto label_33f344;
        case 0x33f348u: goto label_33f348;
        case 0x33f34cu: goto label_33f34c;
        case 0x33f350u: goto label_33f350;
        case 0x33f354u: goto label_33f354;
        case 0x33f358u: goto label_33f358;
        case 0x33f35cu: goto label_33f35c;
        case 0x33f360u: goto label_33f360;
        case 0x33f364u: goto label_33f364;
        case 0x33f368u: goto label_33f368;
        case 0x33f36cu: goto label_33f36c;
        case 0x33f370u: goto label_33f370;
        case 0x33f374u: goto label_33f374;
        case 0x33f378u: goto label_33f378;
        case 0x33f37cu: goto label_33f37c;
        case 0x33f380u: goto label_33f380;
        case 0x33f384u: goto label_33f384;
        case 0x33f388u: goto label_33f388;
        case 0x33f38cu: goto label_33f38c;
        case 0x33f390u: goto label_33f390;
        case 0x33f394u: goto label_33f394;
        case 0x33f398u: goto label_33f398;
        case 0x33f39cu: goto label_33f39c;
        case 0x33f3a0u: goto label_33f3a0;
        case 0x33f3a4u: goto label_33f3a4;
        case 0x33f3a8u: goto label_33f3a8;
        case 0x33f3acu: goto label_33f3ac;
        case 0x33f3b0u: goto label_33f3b0;
        case 0x33f3b4u: goto label_33f3b4;
        case 0x33f3b8u: goto label_33f3b8;
        case 0x33f3bcu: goto label_33f3bc;
        case 0x33f3c0u: goto label_33f3c0;
        case 0x33f3c4u: goto label_33f3c4;
        case 0x33f3c8u: goto label_33f3c8;
        case 0x33f3ccu: goto label_33f3cc;
        case 0x33f3d0u: goto label_33f3d0;
        case 0x33f3d4u: goto label_33f3d4;
        case 0x33f3d8u: goto label_33f3d8;
        case 0x33f3dcu: goto label_33f3dc;
        case 0x33f3e0u: goto label_33f3e0;
        case 0x33f3e4u: goto label_33f3e4;
        case 0x33f3e8u: goto label_33f3e8;
        case 0x33f3ecu: goto label_33f3ec;
        case 0x33f3f0u: goto label_33f3f0;
        case 0x33f3f4u: goto label_33f3f4;
        case 0x33f3f8u: goto label_33f3f8;
        case 0x33f3fcu: goto label_33f3fc;
        case 0x33f400u: goto label_33f400;
        case 0x33f404u: goto label_33f404;
        case 0x33f408u: goto label_33f408;
        case 0x33f40cu: goto label_33f40c;
        case 0x33f410u: goto label_33f410;
        case 0x33f414u: goto label_33f414;
        case 0x33f418u: goto label_33f418;
        case 0x33f41cu: goto label_33f41c;
        case 0x33f420u: goto label_33f420;
        case 0x33f424u: goto label_33f424;
        case 0x33f428u: goto label_33f428;
        case 0x33f42cu: goto label_33f42c;
        case 0x33f430u: goto label_33f430;
        case 0x33f434u: goto label_33f434;
        case 0x33f438u: goto label_33f438;
        case 0x33f43cu: goto label_33f43c;
        case 0x33f440u: goto label_33f440;
        case 0x33f444u: goto label_33f444;
        case 0x33f448u: goto label_33f448;
        case 0x33f44cu: goto label_33f44c;
        case 0x33f450u: goto label_33f450;
        case 0x33f454u: goto label_33f454;
        case 0x33f458u: goto label_33f458;
        case 0x33f45cu: goto label_33f45c;
        case 0x33f460u: goto label_33f460;
        case 0x33f464u: goto label_33f464;
        case 0x33f468u: goto label_33f468;
        case 0x33f46cu: goto label_33f46c;
        case 0x33f470u: goto label_33f470;
        case 0x33f474u: goto label_33f474;
        case 0x33f478u: goto label_33f478;
        case 0x33f47cu: goto label_33f47c;
        case 0x33f480u: goto label_33f480;
        case 0x33f484u: goto label_33f484;
        case 0x33f488u: goto label_33f488;
        case 0x33f48cu: goto label_33f48c;
        case 0x33f490u: goto label_33f490;
        case 0x33f494u: goto label_33f494;
        case 0x33f498u: goto label_33f498;
        case 0x33f49cu: goto label_33f49c;
        case 0x33f4a0u: goto label_33f4a0;
        case 0x33f4a4u: goto label_33f4a4;
        case 0x33f4a8u: goto label_33f4a8;
        case 0x33f4acu: goto label_33f4ac;
        case 0x33f4b0u: goto label_33f4b0;
        case 0x33f4b4u: goto label_33f4b4;
        case 0x33f4b8u: goto label_33f4b8;
        case 0x33f4bcu: goto label_33f4bc;
        case 0x33f4c0u: goto label_33f4c0;
        case 0x33f4c4u: goto label_33f4c4;
        case 0x33f4c8u: goto label_33f4c8;
        case 0x33f4ccu: goto label_33f4cc;
        case 0x33f4d0u: goto label_33f4d0;
        case 0x33f4d4u: goto label_33f4d4;
        case 0x33f4d8u: goto label_33f4d8;
        case 0x33f4dcu: goto label_33f4dc;
        case 0x33f4e0u: goto label_33f4e0;
        case 0x33f4e4u: goto label_33f4e4;
        case 0x33f4e8u: goto label_33f4e8;
        case 0x33f4ecu: goto label_33f4ec;
        case 0x33f4f0u: goto label_33f4f0;
        case 0x33f4f4u: goto label_33f4f4;
        case 0x33f4f8u: goto label_33f4f8;
        case 0x33f4fcu: goto label_33f4fc;
        case 0x33f500u: goto label_33f500;
        case 0x33f504u: goto label_33f504;
        case 0x33f508u: goto label_33f508;
        case 0x33f50cu: goto label_33f50c;
        case 0x33f510u: goto label_33f510;
        case 0x33f514u: goto label_33f514;
        case 0x33f518u: goto label_33f518;
        case 0x33f51cu: goto label_33f51c;
        case 0x33f520u: goto label_33f520;
        case 0x33f524u: goto label_33f524;
        case 0x33f528u: goto label_33f528;
        case 0x33f52cu: goto label_33f52c;
        case 0x33f530u: goto label_33f530;
        case 0x33f534u: goto label_33f534;
        case 0x33f538u: goto label_33f538;
        case 0x33f53cu: goto label_33f53c;
        case 0x33f540u: goto label_33f540;
        case 0x33f544u: goto label_33f544;
        case 0x33f548u: goto label_33f548;
        case 0x33f54cu: goto label_33f54c;
        case 0x33f550u: goto label_33f550;
        case 0x33f554u: goto label_33f554;
        case 0x33f558u: goto label_33f558;
        case 0x33f55cu: goto label_33f55c;
        case 0x33f560u: goto label_33f560;
        case 0x33f564u: goto label_33f564;
        case 0x33f568u: goto label_33f568;
        case 0x33f56cu: goto label_33f56c;
        case 0x33f570u: goto label_33f570;
        case 0x33f574u: goto label_33f574;
        case 0x33f578u: goto label_33f578;
        case 0x33f57cu: goto label_33f57c;
        case 0x33f580u: goto label_33f580;
        case 0x33f584u: goto label_33f584;
        case 0x33f588u: goto label_33f588;
        case 0x33f58cu: goto label_33f58c;
        case 0x33f590u: goto label_33f590;
        case 0x33f594u: goto label_33f594;
        case 0x33f598u: goto label_33f598;
        case 0x33f59cu: goto label_33f59c;
        case 0x33f5a0u: goto label_33f5a0;
        case 0x33f5a4u: goto label_33f5a4;
        case 0x33f5a8u: goto label_33f5a8;
        case 0x33f5acu: goto label_33f5ac;
        case 0x33f5b0u: goto label_33f5b0;
        case 0x33f5b4u: goto label_33f5b4;
        case 0x33f5b8u: goto label_33f5b8;
        case 0x33f5bcu: goto label_33f5bc;
        case 0x33f5c0u: goto label_33f5c0;
        case 0x33f5c4u: goto label_33f5c4;
        case 0x33f5c8u: goto label_33f5c8;
        case 0x33f5ccu: goto label_33f5cc;
        case 0x33f5d0u: goto label_33f5d0;
        case 0x33f5d4u: goto label_33f5d4;
        case 0x33f5d8u: goto label_33f5d8;
        case 0x33f5dcu: goto label_33f5dc;
        case 0x33f5e0u: goto label_33f5e0;
        case 0x33f5e4u: goto label_33f5e4;
        case 0x33f5e8u: goto label_33f5e8;
        case 0x33f5ecu: goto label_33f5ec;
        case 0x33f5f0u: goto label_33f5f0;
        case 0x33f5f4u: goto label_33f5f4;
        case 0x33f5f8u: goto label_33f5f8;
        case 0x33f5fcu: goto label_33f5fc;
        case 0x33f600u: goto label_33f600;
        case 0x33f604u: goto label_33f604;
        case 0x33f608u: goto label_33f608;
        case 0x33f60cu: goto label_33f60c;
        case 0x33f610u: goto label_33f610;
        case 0x33f614u: goto label_33f614;
        case 0x33f618u: goto label_33f618;
        case 0x33f61cu: goto label_33f61c;
        case 0x33f620u: goto label_33f620;
        case 0x33f624u: goto label_33f624;
        case 0x33f628u: goto label_33f628;
        case 0x33f62cu: goto label_33f62c;
        case 0x33f630u: goto label_33f630;
        case 0x33f634u: goto label_33f634;
        case 0x33f638u: goto label_33f638;
        case 0x33f63cu: goto label_33f63c;
        case 0x33f640u: goto label_33f640;
        case 0x33f644u: goto label_33f644;
        case 0x33f648u: goto label_33f648;
        case 0x33f64cu: goto label_33f64c;
        case 0x33f650u: goto label_33f650;
        case 0x33f654u: goto label_33f654;
        case 0x33f658u: goto label_33f658;
        case 0x33f65cu: goto label_33f65c;
        case 0x33f660u: goto label_33f660;
        case 0x33f664u: goto label_33f664;
        case 0x33f668u: goto label_33f668;
        case 0x33f66cu: goto label_33f66c;
        case 0x33f670u: goto label_33f670;
        case 0x33f674u: goto label_33f674;
        case 0x33f678u: goto label_33f678;
        case 0x33f67cu: goto label_33f67c;
        case 0x33f680u: goto label_33f680;
        case 0x33f684u: goto label_33f684;
        case 0x33f688u: goto label_33f688;
        case 0x33f68cu: goto label_33f68c;
        case 0x33f690u: goto label_33f690;
        case 0x33f694u: goto label_33f694;
        case 0x33f698u: goto label_33f698;
        case 0x33f69cu: goto label_33f69c;
        case 0x33f6a0u: goto label_33f6a0;
        case 0x33f6a4u: goto label_33f6a4;
        case 0x33f6a8u: goto label_33f6a8;
        case 0x33f6acu: goto label_33f6ac;
        case 0x33f6b0u: goto label_33f6b0;
        case 0x33f6b4u: goto label_33f6b4;
        case 0x33f6b8u: goto label_33f6b8;
        case 0x33f6bcu: goto label_33f6bc;
        case 0x33f6c0u: goto label_33f6c0;
        case 0x33f6c4u: goto label_33f6c4;
        case 0x33f6c8u: goto label_33f6c8;
        case 0x33f6ccu: goto label_33f6cc;
        case 0x33f6d0u: goto label_33f6d0;
        case 0x33f6d4u: goto label_33f6d4;
        case 0x33f6d8u: goto label_33f6d8;
        case 0x33f6dcu: goto label_33f6dc;
        case 0x33f6e0u: goto label_33f6e0;
        case 0x33f6e4u: goto label_33f6e4;
        case 0x33f6e8u: goto label_33f6e8;
        case 0x33f6ecu: goto label_33f6ec;
        case 0x33f6f0u: goto label_33f6f0;
        case 0x33f6f4u: goto label_33f6f4;
        case 0x33f6f8u: goto label_33f6f8;
        case 0x33f6fcu: goto label_33f6fc;
        case 0x33f700u: goto label_33f700;
        case 0x33f704u: goto label_33f704;
        case 0x33f708u: goto label_33f708;
        case 0x33f70cu: goto label_33f70c;
        case 0x33f710u: goto label_33f710;
        case 0x33f714u: goto label_33f714;
        case 0x33f718u: goto label_33f718;
        case 0x33f71cu: goto label_33f71c;
        case 0x33f720u: goto label_33f720;
        case 0x33f724u: goto label_33f724;
        case 0x33f728u: goto label_33f728;
        case 0x33f72cu: goto label_33f72c;
        case 0x33f730u: goto label_33f730;
        case 0x33f734u: goto label_33f734;
        case 0x33f738u: goto label_33f738;
        case 0x33f73cu: goto label_33f73c;
        case 0x33f740u: goto label_33f740;
        case 0x33f744u: goto label_33f744;
        case 0x33f748u: goto label_33f748;
        case 0x33f74cu: goto label_33f74c;
        case 0x33f750u: goto label_33f750;
        case 0x33f754u: goto label_33f754;
        case 0x33f758u: goto label_33f758;
        case 0x33f75cu: goto label_33f75c;
        case 0x33f760u: goto label_33f760;
        case 0x33f764u: goto label_33f764;
        case 0x33f768u: goto label_33f768;
        case 0x33f76cu: goto label_33f76c;
        case 0x33f770u: goto label_33f770;
        case 0x33f774u: goto label_33f774;
        case 0x33f778u: goto label_33f778;
        case 0x33f77cu: goto label_33f77c;
        case 0x33f780u: goto label_33f780;
        case 0x33f784u: goto label_33f784;
        case 0x33f788u: goto label_33f788;
        case 0x33f78cu: goto label_33f78c;
        case 0x33f790u: goto label_33f790;
        case 0x33f794u: goto label_33f794;
        case 0x33f798u: goto label_33f798;
        case 0x33f79cu: goto label_33f79c;
        case 0x33f7a0u: goto label_33f7a0;
        case 0x33f7a4u: goto label_33f7a4;
        case 0x33f7a8u: goto label_33f7a8;
        case 0x33f7acu: goto label_33f7ac;
        case 0x33f7b0u: goto label_33f7b0;
        case 0x33f7b4u: goto label_33f7b4;
        case 0x33f7b8u: goto label_33f7b8;
        case 0x33f7bcu: goto label_33f7bc;
        case 0x33f7c0u: goto label_33f7c0;
        case 0x33f7c4u: goto label_33f7c4;
        case 0x33f7c8u: goto label_33f7c8;
        case 0x33f7ccu: goto label_33f7cc;
        case 0x33f7d0u: goto label_33f7d0;
        case 0x33f7d4u: goto label_33f7d4;
        case 0x33f7d8u: goto label_33f7d8;
        case 0x33f7dcu: goto label_33f7dc;
        case 0x33f7e0u: goto label_33f7e0;
        case 0x33f7e4u: goto label_33f7e4;
        case 0x33f7e8u: goto label_33f7e8;
        case 0x33f7ecu: goto label_33f7ec;
        case 0x33f7f0u: goto label_33f7f0;
        case 0x33f7f4u: goto label_33f7f4;
        case 0x33f7f8u: goto label_33f7f8;
        case 0x33f7fcu: goto label_33f7fc;
        case 0x33f800u: goto label_33f800;
        case 0x33f804u: goto label_33f804;
        case 0x33f808u: goto label_33f808;
        case 0x33f80cu: goto label_33f80c;
        case 0x33f810u: goto label_33f810;
        case 0x33f814u: goto label_33f814;
        case 0x33f818u: goto label_33f818;
        case 0x33f81cu: goto label_33f81c;
        case 0x33f820u: goto label_33f820;
        case 0x33f824u: goto label_33f824;
        case 0x33f828u: goto label_33f828;
        case 0x33f82cu: goto label_33f82c;
        case 0x33f830u: goto label_33f830;
        case 0x33f834u: goto label_33f834;
        case 0x33f838u: goto label_33f838;
        case 0x33f83cu: goto label_33f83c;
        case 0x33f840u: goto label_33f840;
        case 0x33f844u: goto label_33f844;
        case 0x33f848u: goto label_33f848;
        case 0x33f84cu: goto label_33f84c;
        case 0x33f850u: goto label_33f850;
        case 0x33f854u: goto label_33f854;
        case 0x33f858u: goto label_33f858;
        case 0x33f85cu: goto label_33f85c;
        case 0x33f860u: goto label_33f860;
        case 0x33f864u: goto label_33f864;
        case 0x33f868u: goto label_33f868;
        case 0x33f86cu: goto label_33f86c;
        case 0x33f870u: goto label_33f870;
        case 0x33f874u: goto label_33f874;
        case 0x33f878u: goto label_33f878;
        case 0x33f87cu: goto label_33f87c;
        case 0x33f880u: goto label_33f880;
        case 0x33f884u: goto label_33f884;
        case 0x33f888u: goto label_33f888;
        case 0x33f88cu: goto label_33f88c;
        case 0x33f890u: goto label_33f890;
        case 0x33f894u: goto label_33f894;
        case 0x33f898u: goto label_33f898;
        case 0x33f89cu: goto label_33f89c;
        case 0x33f8a0u: goto label_33f8a0;
        case 0x33f8a4u: goto label_33f8a4;
        case 0x33f8a8u: goto label_33f8a8;
        case 0x33f8acu: goto label_33f8ac;
        case 0x33f8b0u: goto label_33f8b0;
        case 0x33f8b4u: goto label_33f8b4;
        case 0x33f8b8u: goto label_33f8b8;
        case 0x33f8bcu: goto label_33f8bc;
        case 0x33f8c0u: goto label_33f8c0;
        case 0x33f8c4u: goto label_33f8c4;
        case 0x33f8c8u: goto label_33f8c8;
        case 0x33f8ccu: goto label_33f8cc;
        case 0x33f8d0u: goto label_33f8d0;
        case 0x33f8d4u: goto label_33f8d4;
        case 0x33f8d8u: goto label_33f8d8;
        case 0x33f8dcu: goto label_33f8dc;
        case 0x33f8e0u: goto label_33f8e0;
        case 0x33f8e4u: goto label_33f8e4;
        case 0x33f8e8u: goto label_33f8e8;
        case 0x33f8ecu: goto label_33f8ec;
        case 0x33f8f0u: goto label_33f8f0;
        case 0x33f8f4u: goto label_33f8f4;
        case 0x33f8f8u: goto label_33f8f8;
        case 0x33f8fcu: goto label_33f8fc;
        case 0x33f900u: goto label_33f900;
        case 0x33f904u: goto label_33f904;
        case 0x33f908u: goto label_33f908;
        case 0x33f90cu: goto label_33f90c;
        case 0x33f910u: goto label_33f910;
        case 0x33f914u: goto label_33f914;
        case 0x33f918u: goto label_33f918;
        case 0x33f91cu: goto label_33f91c;
        case 0x33f920u: goto label_33f920;
        case 0x33f924u: goto label_33f924;
        case 0x33f928u: goto label_33f928;
        case 0x33f92cu: goto label_33f92c;
        case 0x33f930u: goto label_33f930;
        case 0x33f934u: goto label_33f934;
        case 0x33f938u: goto label_33f938;
        case 0x33f93cu: goto label_33f93c;
        case 0x33f940u: goto label_33f940;
        case 0x33f944u: goto label_33f944;
        case 0x33f948u: goto label_33f948;
        case 0x33f94cu: goto label_33f94c;
        case 0x33f950u: goto label_33f950;
        case 0x33f954u: goto label_33f954;
        case 0x33f958u: goto label_33f958;
        case 0x33f95cu: goto label_33f95c;
        case 0x33f960u: goto label_33f960;
        case 0x33f964u: goto label_33f964;
        case 0x33f968u: goto label_33f968;
        case 0x33f96cu: goto label_33f96c;
        case 0x33f970u: goto label_33f970;
        case 0x33f974u: goto label_33f974;
        case 0x33f978u: goto label_33f978;
        case 0x33f97cu: goto label_33f97c;
        case 0x33f980u: goto label_33f980;
        case 0x33f984u: goto label_33f984;
        case 0x33f988u: goto label_33f988;
        case 0x33f98cu: goto label_33f98c;
        case 0x33f990u: goto label_33f990;
        case 0x33f994u: goto label_33f994;
        case 0x33f998u: goto label_33f998;
        case 0x33f99cu: goto label_33f99c;
        case 0x33f9a0u: goto label_33f9a0;
        case 0x33f9a4u: goto label_33f9a4;
        case 0x33f9a8u: goto label_33f9a8;
        case 0x33f9acu: goto label_33f9ac;
        case 0x33f9b0u: goto label_33f9b0;
        case 0x33f9b4u: goto label_33f9b4;
        case 0x33f9b8u: goto label_33f9b8;
        case 0x33f9bcu: goto label_33f9bc;
        case 0x33f9c0u: goto label_33f9c0;
        case 0x33f9c4u: goto label_33f9c4;
        case 0x33f9c8u: goto label_33f9c8;
        case 0x33f9ccu: goto label_33f9cc;
        case 0x33f9d0u: goto label_33f9d0;
        case 0x33f9d4u: goto label_33f9d4;
        case 0x33f9d8u: goto label_33f9d8;
        case 0x33f9dcu: goto label_33f9dc;
        case 0x33f9e0u: goto label_33f9e0;
        case 0x33f9e4u: goto label_33f9e4;
        case 0x33f9e8u: goto label_33f9e8;
        case 0x33f9ecu: goto label_33f9ec;
        case 0x33f9f0u: goto label_33f9f0;
        case 0x33f9f4u: goto label_33f9f4;
        case 0x33f9f8u: goto label_33f9f8;
        case 0x33f9fcu: goto label_33f9fc;
        case 0x33fa00u: goto label_33fa00;
        case 0x33fa04u: goto label_33fa04;
        case 0x33fa08u: goto label_33fa08;
        case 0x33fa0cu: goto label_33fa0c;
        case 0x33fa10u: goto label_33fa10;
        case 0x33fa14u: goto label_33fa14;
        case 0x33fa18u: goto label_33fa18;
        case 0x33fa1cu: goto label_33fa1c;
        case 0x33fa20u: goto label_33fa20;
        case 0x33fa24u: goto label_33fa24;
        case 0x33fa28u: goto label_33fa28;
        case 0x33fa2cu: goto label_33fa2c;
        case 0x33fa30u: goto label_33fa30;
        case 0x33fa34u: goto label_33fa34;
        case 0x33fa38u: goto label_33fa38;
        case 0x33fa3cu: goto label_33fa3c;
        case 0x33fa40u: goto label_33fa40;
        case 0x33fa44u: goto label_33fa44;
        case 0x33fa48u: goto label_33fa48;
        case 0x33fa4cu: goto label_33fa4c;
        case 0x33fa50u: goto label_33fa50;
        case 0x33fa54u: goto label_33fa54;
        case 0x33fa58u: goto label_33fa58;
        case 0x33fa5cu: goto label_33fa5c;
        case 0x33fa60u: goto label_33fa60;
        case 0x33fa64u: goto label_33fa64;
        case 0x33fa68u: goto label_33fa68;
        case 0x33fa6cu: goto label_33fa6c;
        case 0x33fa70u: goto label_33fa70;
        case 0x33fa74u: goto label_33fa74;
        case 0x33fa78u: goto label_33fa78;
        case 0x33fa7cu: goto label_33fa7c;
        case 0x33fa80u: goto label_33fa80;
        case 0x33fa84u: goto label_33fa84;
        case 0x33fa88u: goto label_33fa88;
        case 0x33fa8cu: goto label_33fa8c;
        case 0x33fa90u: goto label_33fa90;
        case 0x33fa94u: goto label_33fa94;
        case 0x33fa98u: goto label_33fa98;
        case 0x33fa9cu: goto label_33fa9c;
        case 0x33faa0u: goto label_33faa0;
        case 0x33faa4u: goto label_33faa4;
        case 0x33faa8u: goto label_33faa8;
        case 0x33faacu: goto label_33faac;
        case 0x33fab0u: goto label_33fab0;
        case 0x33fab4u: goto label_33fab4;
        case 0x33fab8u: goto label_33fab8;
        case 0x33fabcu: goto label_33fabc;
        case 0x33fac0u: goto label_33fac0;
        case 0x33fac4u: goto label_33fac4;
        case 0x33fac8u: goto label_33fac8;
        case 0x33faccu: goto label_33facc;
        case 0x33fad0u: goto label_33fad0;
        case 0x33fad4u: goto label_33fad4;
        case 0x33fad8u: goto label_33fad8;
        case 0x33fadcu: goto label_33fadc;
        case 0x33fae0u: goto label_33fae0;
        case 0x33fae4u: goto label_33fae4;
        case 0x33fae8u: goto label_33fae8;
        case 0x33faecu: goto label_33faec;
        case 0x33faf0u: goto label_33faf0;
        case 0x33faf4u: goto label_33faf4;
        case 0x33faf8u: goto label_33faf8;
        case 0x33fafcu: goto label_33fafc;
        case 0x33fb00u: goto label_33fb00;
        case 0x33fb04u: goto label_33fb04;
        case 0x33fb08u: goto label_33fb08;
        case 0x33fb0cu: goto label_33fb0c;
        case 0x33fb10u: goto label_33fb10;
        case 0x33fb14u: goto label_33fb14;
        case 0x33fb18u: goto label_33fb18;
        case 0x33fb1cu: goto label_33fb1c;
        case 0x33fb20u: goto label_33fb20;
        case 0x33fb24u: goto label_33fb24;
        case 0x33fb28u: goto label_33fb28;
        case 0x33fb2cu: goto label_33fb2c;
        case 0x33fb30u: goto label_33fb30;
        case 0x33fb34u: goto label_33fb34;
        case 0x33fb38u: goto label_33fb38;
        case 0x33fb3cu: goto label_33fb3c;
        case 0x33fb40u: goto label_33fb40;
        case 0x33fb44u: goto label_33fb44;
        case 0x33fb48u: goto label_33fb48;
        case 0x33fb4cu: goto label_33fb4c;
        case 0x33fb50u: goto label_33fb50;
        case 0x33fb54u: goto label_33fb54;
        case 0x33fb58u: goto label_33fb58;
        case 0x33fb5cu: goto label_33fb5c;
        case 0x33fb60u: goto label_33fb60;
        case 0x33fb64u: goto label_33fb64;
        case 0x33fb68u: goto label_33fb68;
        case 0x33fb6cu: goto label_33fb6c;
        case 0x33fb70u: goto label_33fb70;
        case 0x33fb74u: goto label_33fb74;
        case 0x33fb78u: goto label_33fb78;
        case 0x33fb7cu: goto label_33fb7c;
        case 0x33fb80u: goto label_33fb80;
        case 0x33fb84u: goto label_33fb84;
        case 0x33fb88u: goto label_33fb88;
        case 0x33fb8cu: goto label_33fb8c;
        case 0x33fb90u: goto label_33fb90;
        case 0x33fb94u: goto label_33fb94;
        case 0x33fb98u: goto label_33fb98;
        case 0x33fb9cu: goto label_33fb9c;
        case 0x33fba0u: goto label_33fba0;
        case 0x33fba4u: goto label_33fba4;
        case 0x33fba8u: goto label_33fba8;
        case 0x33fbacu: goto label_33fbac;
        case 0x33fbb0u: goto label_33fbb0;
        case 0x33fbb4u: goto label_33fbb4;
        case 0x33fbb8u: goto label_33fbb8;
        case 0x33fbbcu: goto label_33fbbc;
        case 0x33fbc0u: goto label_33fbc0;
        case 0x33fbc4u: goto label_33fbc4;
        case 0x33fbc8u: goto label_33fbc8;
        case 0x33fbccu: goto label_33fbcc;
        case 0x33fbd0u: goto label_33fbd0;
        case 0x33fbd4u: goto label_33fbd4;
        case 0x33fbd8u: goto label_33fbd8;
        case 0x33fbdcu: goto label_33fbdc;
        case 0x33fbe0u: goto label_33fbe0;
        case 0x33fbe4u: goto label_33fbe4;
        case 0x33fbe8u: goto label_33fbe8;
        case 0x33fbecu: goto label_33fbec;
        case 0x33fbf0u: goto label_33fbf0;
        case 0x33fbf4u: goto label_33fbf4;
        case 0x33fbf8u: goto label_33fbf8;
        case 0x33fbfcu: goto label_33fbfc;
        case 0x33fc00u: goto label_33fc00;
        case 0x33fc04u: goto label_33fc04;
        case 0x33fc08u: goto label_33fc08;
        case 0x33fc0cu: goto label_33fc0c;
        case 0x33fc10u: goto label_33fc10;
        case 0x33fc14u: goto label_33fc14;
        case 0x33fc18u: goto label_33fc18;
        case 0x33fc1cu: goto label_33fc1c;
        case 0x33fc20u: goto label_33fc20;
        case 0x33fc24u: goto label_33fc24;
        case 0x33fc28u: goto label_33fc28;
        case 0x33fc2cu: goto label_33fc2c;
        case 0x33fc30u: goto label_33fc30;
        case 0x33fc34u: goto label_33fc34;
        case 0x33fc38u: goto label_33fc38;
        case 0x33fc3cu: goto label_33fc3c;
        case 0x33fc40u: goto label_33fc40;
        case 0x33fc44u: goto label_33fc44;
        case 0x33fc48u: goto label_33fc48;
        case 0x33fc4cu: goto label_33fc4c;
        case 0x33fc50u: goto label_33fc50;
        case 0x33fc54u: goto label_33fc54;
        case 0x33fc58u: goto label_33fc58;
        case 0x33fc5cu: goto label_33fc5c;
        case 0x33fc60u: goto label_33fc60;
        case 0x33fc64u: goto label_33fc64;
        case 0x33fc68u: goto label_33fc68;
        case 0x33fc6cu: goto label_33fc6c;
        case 0x33fc70u: goto label_33fc70;
        case 0x33fc74u: goto label_33fc74;
        case 0x33fc78u: goto label_33fc78;
        case 0x33fc7cu: goto label_33fc7c;
        case 0x33fc80u: goto label_33fc80;
        case 0x33fc84u: goto label_33fc84;
        case 0x33fc88u: goto label_33fc88;
        case 0x33fc8cu: goto label_33fc8c;
        case 0x33fc90u: goto label_33fc90;
        case 0x33fc94u: goto label_33fc94;
        case 0x33fc98u: goto label_33fc98;
        case 0x33fc9cu: goto label_33fc9c;
        case 0x33fca0u: goto label_33fca0;
        case 0x33fca4u: goto label_33fca4;
        case 0x33fca8u: goto label_33fca8;
        case 0x33fcacu: goto label_33fcac;
        case 0x33fcb0u: goto label_33fcb0;
        case 0x33fcb4u: goto label_33fcb4;
        case 0x33fcb8u: goto label_33fcb8;
        case 0x33fcbcu: goto label_33fcbc;
        case 0x33fcc0u: goto label_33fcc0;
        case 0x33fcc4u: goto label_33fcc4;
        case 0x33fcc8u: goto label_33fcc8;
        case 0x33fcccu: goto label_33fccc;
        case 0x33fcd0u: goto label_33fcd0;
        case 0x33fcd4u: goto label_33fcd4;
        case 0x33fcd8u: goto label_33fcd8;
        case 0x33fcdcu: goto label_33fcdc;
        case 0x33fce0u: goto label_33fce0;
        case 0x33fce4u: goto label_33fce4;
        case 0x33fce8u: goto label_33fce8;
        case 0x33fcecu: goto label_33fcec;
        case 0x33fcf0u: goto label_33fcf0;
        case 0x33fcf4u: goto label_33fcf4;
        case 0x33fcf8u: goto label_33fcf8;
        case 0x33fcfcu: goto label_33fcfc;
        case 0x33fd00u: goto label_33fd00;
        case 0x33fd04u: goto label_33fd04;
        case 0x33fd08u: goto label_33fd08;
        case 0x33fd0cu: goto label_33fd0c;
        case 0x33fd10u: goto label_33fd10;
        case 0x33fd14u: goto label_33fd14;
        case 0x33fd18u: goto label_33fd18;
        case 0x33fd1cu: goto label_33fd1c;
        case 0x33fd20u: goto label_33fd20;
        case 0x33fd24u: goto label_33fd24;
        case 0x33fd28u: goto label_33fd28;
        case 0x33fd2cu: goto label_33fd2c;
        case 0x33fd30u: goto label_33fd30;
        case 0x33fd34u: goto label_33fd34;
        case 0x33fd38u: goto label_33fd38;
        case 0x33fd3cu: goto label_33fd3c;
        case 0x33fd40u: goto label_33fd40;
        case 0x33fd44u: goto label_33fd44;
        case 0x33fd48u: goto label_33fd48;
        case 0x33fd4cu: goto label_33fd4c;
        case 0x33fd50u: goto label_33fd50;
        case 0x33fd54u: goto label_33fd54;
        case 0x33fd58u: goto label_33fd58;
        case 0x33fd5cu: goto label_33fd5c;
        case 0x33fd60u: goto label_33fd60;
        case 0x33fd64u: goto label_33fd64;
        case 0x33fd68u: goto label_33fd68;
        case 0x33fd6cu: goto label_33fd6c;
        case 0x33fd70u: goto label_33fd70;
        case 0x33fd74u: goto label_33fd74;
        case 0x33fd78u: goto label_33fd78;
        case 0x33fd7cu: goto label_33fd7c;
        case 0x33fd80u: goto label_33fd80;
        case 0x33fd84u: goto label_33fd84;
        case 0x33fd88u: goto label_33fd88;
        case 0x33fd8cu: goto label_33fd8c;
        case 0x33fd90u: goto label_33fd90;
        case 0x33fd94u: goto label_33fd94;
        case 0x33fd98u: goto label_33fd98;
        case 0x33fd9cu: goto label_33fd9c;
        case 0x33fda0u: goto label_33fda0;
        case 0x33fda4u: goto label_33fda4;
        case 0x33fda8u: goto label_33fda8;
        case 0x33fdacu: goto label_33fdac;
        case 0x33fdb0u: goto label_33fdb0;
        case 0x33fdb4u: goto label_33fdb4;
        case 0x33fdb8u: goto label_33fdb8;
        case 0x33fdbcu: goto label_33fdbc;
        case 0x33fdc0u: goto label_33fdc0;
        case 0x33fdc4u: goto label_33fdc4;
        case 0x33fdc8u: goto label_33fdc8;
        case 0x33fdccu: goto label_33fdcc;
        case 0x33fdd0u: goto label_33fdd0;
        case 0x33fdd4u: goto label_33fdd4;
        case 0x33fdd8u: goto label_33fdd8;
        case 0x33fddcu: goto label_33fddc;
        case 0x33fde0u: goto label_33fde0;
        case 0x33fde4u: goto label_33fde4;
        case 0x33fde8u: goto label_33fde8;
        case 0x33fdecu: goto label_33fdec;
        case 0x33fdf0u: goto label_33fdf0;
        case 0x33fdf4u: goto label_33fdf4;
        case 0x33fdf8u: goto label_33fdf8;
        case 0x33fdfcu: goto label_33fdfc;
        case 0x33fe00u: goto label_33fe00;
        case 0x33fe04u: goto label_33fe04;
        case 0x33fe08u: goto label_33fe08;
        case 0x33fe0cu: goto label_33fe0c;
        case 0x33fe10u: goto label_33fe10;
        case 0x33fe14u: goto label_33fe14;
        case 0x33fe18u: goto label_33fe18;
        case 0x33fe1cu: goto label_33fe1c;
        case 0x33fe20u: goto label_33fe20;
        case 0x33fe24u: goto label_33fe24;
        case 0x33fe28u: goto label_33fe28;
        case 0x33fe2cu: goto label_33fe2c;
        case 0x33fe30u: goto label_33fe30;
        case 0x33fe34u: goto label_33fe34;
        case 0x33fe38u: goto label_33fe38;
        case 0x33fe3cu: goto label_33fe3c;
        case 0x33fe40u: goto label_33fe40;
        case 0x33fe44u: goto label_33fe44;
        case 0x33fe48u: goto label_33fe48;
        case 0x33fe4cu: goto label_33fe4c;
        case 0x33fe50u: goto label_33fe50;
        case 0x33fe54u: goto label_33fe54;
        case 0x33fe58u: goto label_33fe58;
        case 0x33fe5cu: goto label_33fe5c;
        case 0x33fe60u: goto label_33fe60;
        case 0x33fe64u: goto label_33fe64;
        case 0x33fe68u: goto label_33fe68;
        case 0x33fe6cu: goto label_33fe6c;
        case 0x33fe70u: goto label_33fe70;
        case 0x33fe74u: goto label_33fe74;
        case 0x33fe78u: goto label_33fe78;
        case 0x33fe7cu: goto label_33fe7c;
        case 0x33fe80u: goto label_33fe80;
        case 0x33fe84u: goto label_33fe84;
        case 0x33fe88u: goto label_33fe88;
        case 0x33fe8cu: goto label_33fe8c;
        case 0x33fe90u: goto label_33fe90;
        case 0x33fe94u: goto label_33fe94;
        case 0x33fe98u: goto label_33fe98;
        case 0x33fe9cu: goto label_33fe9c;
        case 0x33fea0u: goto label_33fea0;
        case 0x33fea4u: goto label_33fea4;
        case 0x33fea8u: goto label_33fea8;
        case 0x33feacu: goto label_33feac;
        default: break;
    }

    ctx->pc = 0x33f110u;

label_33f110:
    // 0x33f110: 0x27bdf4e0  addiu       $sp, $sp, -0xB20
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964448));
label_33f114:
    // 0x33f114: 0x7fb30ae0  sq          $s3, 0xAE0($sp)
    ctx->pc = 0x33f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2784), GPR_VEC(ctx, 19));
label_33f118:
    // 0x33f118: 0x7fb00b10  sq          $s0, 0xB10($sp)
    ctx->pc = 0x33f118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2832), GPR_VEC(ctx, 16));
label_33f11c:
    // 0x33f11c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33f11cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33f120:
    // 0x33f120: 0x7fb10b00  sq          $s1, 0xB00($sp)
    ctx->pc = 0x33f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2816), GPR_VEC(ctx, 17));
label_33f124:
    // 0x33f124: 0x7fb20af0  sq          $s2, 0xAF0($sp)
    ctx->pc = 0x33f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2800), GPR_VEC(ctx, 18));
label_33f128:
    // 0x33f128: 0x7fb40ad0  sq          $s4, 0xAD0($sp)
    ctx->pc = 0x33f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2768), GPR_VEC(ctx, 20));
label_33f12c:
    // 0x33f12c: 0x7fb50ac0  sq          $s5, 0xAC0($sp)
    ctx->pc = 0x33f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2752), GPR_VEC(ctx, 21));
label_33f130:
    // 0x33f130: 0x7fb60ab0  sq          $s6, 0xAB0($sp)
    ctx->pc = 0x33f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2736), GPR_VEC(ctx, 22));
label_33f134:
    // 0x33f134: 0x7fb70aa0  sq          $s7, 0xAA0($sp)
    ctx->pc = 0x33f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2720), GPR_VEC(ctx, 23));
label_33f138:
    // 0x33f138: 0x7fbe0a90  sq          $fp, 0xA90($sp)
    ctx->pc = 0x33f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2704), GPR_VEC(ctx, 30));
label_33f13c:
    // 0x33f13c: 0xffbf0a80  sd          $ra, 0xA80($sp)
    ctx->pc = 0x33f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2688), GPR_U64(ctx, 31));
label_33f140:
    // 0x33f140: 0xafa40a60  sw          $a0, 0xA60($sp)
    ctx->pc = 0x33f140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2656), GPR_U32(ctx, 4));
label_33f144:
    // 0x33f144: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x33f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_33f148:
    // 0x33f148: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_33f14c:
    if (ctx->pc == 0x33F14Cu) {
        ctx->pc = 0x33F150u;
        goto label_33f150;
    }
    ctx->pc = 0x33F148u;
    {
        const bool branch_taken_0x33f148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f148) {
            ctx->pc = 0x33F15Cu;
            goto label_33f15c;
        }
    }
    ctx->pc = 0x33F150u;
label_33f150:
    // 0x33f150: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x33f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_33f154:
    // 0x33f154: 0x1040034a  beqz        $v0, . + 4 + (0x34A << 2)
label_33f158:
    if (ctx->pc == 0x33F158u) {
        ctx->pc = 0x33F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F154u;
        // 0x33f158: 0x7bb00b10  lq          $s0, 0xB10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F15Cu;
        goto label_33f15c;
    }
    ctx->pc = 0x33F154u;
    {
        const bool branch_taken_0x33f154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F154u;
        // 0x33f158: 0x7bb00b10  lq          $s0, 0xB10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f154) {
            ctx->pc = 0x33FE80u;
            goto label_33fe80;
        }
    }
    ctx->pc = 0x33F15Cu;
label_33f15c:
    // 0x33f15c: 0xc089bfc  jal         func_226FF0
label_33f160:
    if (ctx->pc == 0x33F160u) {
        ctx->pc = 0x33F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F15Cu;
        // 0x33f160: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F164u;
        goto label_33f164;
    }
    ctx->pc = 0x33F15Cu;
    SET_GPR_U32(ctx, 31, 0x33F164u);
    ctx->pc = 0x33F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F15Cu;
    // 0x33f160: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x33F15Cu, 0x33F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F164u;
label_33f164:
    // 0x33f164: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_33f168:
    if (ctx->pc == 0x33F168u) {
        ctx->pc = 0x33F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F164u;
        // 0x33f168: 0xafa20a64  sw          $v0, 0xA64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F16Cu;
        goto label_33f16c;
    }
    ctx->pc = 0x33F164u;
    {
        const bool branch_taken_0x33f164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F164u;
        // 0x33f168: 0xafa20a64  sw          $v0, 0xA64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f164) {
            ctx->pc = 0x33F218u;
            goto label_33f218;
        }
    }
    ctx->pc = 0x33F16Cu;
label_33f16c:
    // 0x33f16c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x33f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f170:
    // 0x33f170: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x33f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33f174:
    // 0x33f174: 0xafa30a6c  sw          $v1, 0xA6C($sp)
    ctx->pc = 0x33f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2668), GPR_U32(ctx, 3));
label_33f178:
    // 0x33f178: 0x26770090  addiu       $s7, $s3, 0x90
    ctx->pc = 0x33f178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_33f17c:
    // 0x33f17c: 0xafa20a64  sw          $v0, 0xA64($sp)
    ctx->pc = 0x33f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2660), GPR_U32(ctx, 2));
label_33f180:
    // 0x33f180: 0x10000074  b           . + 4 + (0x74 << 2)
label_33f184:
    if (ctx->pc == 0x33F184u) {
        ctx->pc = 0x33F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F180u;
        // 0x33f184: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F188u;
        goto label_33f188;
    }
    ctx->pc = 0x33F180u;
    {
        const bool branch_taken_0x33f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F180u;
        // 0x33f184: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f180) {
            ctx->pc = 0x33F354u;
            goto label_33f354;
        }
    }
    ctx->pc = 0x33F188u;
label_33f188:
    // 0x33f188: 0xafa00990  sw          $zero, 0x990($sp)
    ctx->pc = 0x33f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2448), GPR_U32(ctx, 0));
label_33f18c:
    // 0x33f18c: 0xafa00994  sw          $zero, 0x994($sp)
    ctx->pc = 0x33f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2452), GPR_U32(ctx, 0));
label_33f190:
    // 0x33f190: 0xafa009d0  sw          $zero, 0x9D0($sp)
    ctx->pc = 0x33f190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2512), GPR_U32(ctx, 0));
label_33f194:
    // 0x33f194: 0xafa009d4  sw          $zero, 0x9D4($sp)
    ctx->pc = 0x33f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2516), GPR_U32(ctx, 0));
label_33f198:
    // 0x33f198: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f19c:
    // 0x33f19c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33f19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33f1a0:
    // 0x33f1a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33f1a4:
    // 0x33f1a4: 0x60f809  jalr        $v1
label_33f1a8:
    if (ctx->pc == 0x33F1A8u) {
        ctx->pc = 0x33F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1A4u;
        // 0x33f1a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1ACu;
        goto label_33f1ac;
    }
    ctx->pc = 0x33F1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F1ACu);
        ctx->pc = 0x33F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1A4u;
        // 0x33f1a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1A4u, 0x33F1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F1ACu;
label_33f1ac:
    // 0x33f1ac: 0x8fa90a64  lw          $t1, 0xA64($sp)
    ctx->pc = 0x33f1acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
label_33f1b0:
    // 0x33f1b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f1b4:
    // 0x33f1b4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x33f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_33f1b8:
    // 0x33f1b8: 0x84c400f8  lh          $a0, 0xF8($a2)
    ctx->pc = 0x33f1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 248)));
label_33f1bc:
    // 0x33f1bc: 0x8cc200fc  lw          $v0, 0xFC($a2)
    ctx->pc = 0x33f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 252)));
label_33f1c0:
    // 0x33f1c0: 0x40f809  jalr        $v0
label_33f1c4:
    if (ctx->pc == 0x33F1C4u) {
        ctx->pc = 0x33F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C0u;
        // 0x33f1c4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1C8u;
        goto label_33f1c8;
    }
    ctx->pc = 0x33F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F1C8u);
        ctx->pc = 0x33F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C0u;
        // 0x33f1c4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1C0u, 0x33F1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F1C8u;
label_33f1c8:
    // 0x33f1c8: 0x10000063  b           . + 4 + (0x63 << 2)
label_33f1cc:
    if (ctx->pc == 0x33F1CCu) {
        ctx->pc = 0x33F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C8u;
        // 0x33f1cc: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1D0u;
        goto label_33f1d0;
    }
    ctx->pc = 0x33F1C8u;
    {
        const bool branch_taken_0x33f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C8u;
        // 0x33f1cc: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1c8) {
            ctx->pc = 0x33F358u;
            goto label_33f358;
        }
    }
    ctx->pc = 0x33F1D0u;
label_33f1d0:
    // 0x33f1d0: 0xafa00990  sw          $zero, 0x990($sp)
    ctx->pc = 0x33f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2448), GPR_U32(ctx, 0));
label_33f1d4:
    // 0x33f1d4: 0xafa00994  sw          $zero, 0x994($sp)
    ctx->pc = 0x33f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2452), GPR_U32(ctx, 0));
label_33f1d8:
    // 0x33f1d8: 0xafa009d0  sw          $zero, 0x9D0($sp)
    ctx->pc = 0x33f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2512), GPR_U32(ctx, 0));
label_33f1dc:
    // 0x33f1dc: 0xafa009d4  sw          $zero, 0x9D4($sp)
    ctx->pc = 0x33f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2516), GPR_U32(ctx, 0));
label_33f1e0:
    // 0x33f1e0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f1e4:
    // 0x33f1e4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33f1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33f1e8:
    // 0x33f1e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33f1ec:
    // 0x33f1ec: 0x60f809  jalr        $v1
label_33f1f0:
    if (ctx->pc == 0x33F1F0u) {
        ctx->pc = 0x33F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1ECu;
        // 0x33f1f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1F4u;
        goto label_33f1f4;
    }
    ctx->pc = 0x33F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F1F4u);
        ctx->pc = 0x33F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1ECu;
        // 0x33f1f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1ECu, 0x33F1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F1F4u;
label_33f1f4:
    // 0x33f1f4: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f1f8:
    // 0x33f1f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33f1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f1fc:
    // 0x33f1fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33f200:
    // 0x33f200: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x33f200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_33f204:
    // 0x33f204: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x33f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_33f208:
    // 0x33f208: 0x40f809  jalr        $v0
label_33f20c:
    if (ctx->pc == 0x33F20Cu) {
        ctx->pc = 0x33F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F208u;
        // 0x33f20c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F210u;
        goto label_33f210;
    }
    ctx->pc = 0x33F208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F210u);
        ctx->pc = 0x33F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F208u;
        // 0x33f20c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F208u, 0x33F210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F210u;
label_33f210:
    // 0x33f210: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_33f214:
    if (ctx->pc == 0x33F214u) {
        ctx->pc = 0x33F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F210u;
        // 0x33f214: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F218u;
        goto label_33f218;
    }
    ctx->pc = 0x33F210u;
    {
        const bool branch_taken_0x33f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F210u;
        // 0x33f214: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f210) {
            ctx->pc = 0x33F4A4u;
            goto label_33f4a4;
        }
    }
    ctx->pc = 0x33F218u;
label_33f218:
    // 0x33f218: 0x8e7100c4  lw          $s1, 0xC4($s3)
    ctx->pc = 0x33f218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_33f21c:
    // 0x33f21c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x33f21cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33f220:
    // 0x33f220: 0xafaa0a6c  sw          $t2, 0xA6C($sp)
    ctx->pc = 0x33f220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2668), GPR_U32(ctx, 10));
label_33f224:
    // 0x33f224: 0x26770090  addiu       $s7, $s3, 0x90
    ctx->pc = 0x33f224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_33f228:
    // 0x33f228: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
label_33f22c:
    if (ctx->pc == 0x33F22Cu) {
        ctx->pc = 0x33F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F228u;
        // 0x33f22c: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F230u;
        goto label_33f230;
    }
    ctx->pc = 0x33F228u;
    {
        const bool branch_taken_0x33f228 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F228u;
        // 0x33f22c: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f228) {
            ctx->pc = 0x33F354u;
            goto label_33f354;
        }
    }
    ctx->pc = 0x33F230u;
label_33f230:
    // 0x33f230: 0x8fab0a60  lw          $t3, 0xA60($sp)
    ctx->pc = 0x33f230u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
label_33f234:
    // 0x33f234: 0x27b00960  addiu       $s0, $sp, 0x960
    ctx->pc = 0x33f234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_33f238:
    // 0x33f238: 0x27b40930  addiu       $s4, $sp, 0x930
    ctx->pc = 0x33f238u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_33f23c:
    // 0x33f23c: 0x257500e0  addiu       $s5, $t3, 0xE0
    ctx->pc = 0x33f23cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 224));
label_33f240:
    // 0x33f240: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x33f240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f244:
    // 0x33f244: 0x0  nop
    ctx->pc = 0x33f244u;
    // NOP
label_33f248:
    // 0x33f248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33f24c:
    // 0x33f24c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x33f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_33f250:
    // 0x33f250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f254:
    // 0x33f254: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
label_33f258:
    if (ctx->pc == 0x33F258u) {
        ctx->pc = 0x33F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F254u;
        // 0x33f258: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F25Cu;
        goto label_33f25c;
    }
    ctx->pc = 0x33F254u;
    {
        const bool branch_taken_0x33f254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f254) {
            ctx->pc = 0x33F258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F254u;
            // 0x33f258: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F34Cu;
            goto label_33f34c;
        }
    }
    ctx->pc = 0x33F25Cu;
label_33f25c:
    // 0x33f25c: 0xc0d0456  jal         func_341158
label_33f260:
    if (ctx->pc == 0x33F260u) {
        ctx->pc = 0x33F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F25Cu;
        // 0x33f260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F264u;
        goto label_33f264;
    }
    ctx->pc = 0x33F25Cu;
    SET_GPR_U32(ctx, 31, 0x33F264u);
    ctx->pc = 0x33F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F25Cu;
    // 0x33f260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33F25Cu, 0x33F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F264u;
label_33f264:
    // 0x33f264: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f268:
    // 0x33f268: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33f268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33f26c:
    // 0x33f26c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33f270:
    // 0x33f270: 0x40f809  jalr        $v0
label_33f274:
    if (ctx->pc == 0x33F274u) {
        ctx->pc = 0x33F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F270u;
        // 0x33f274: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F278u;
        goto label_33f278;
    }
    ctx->pc = 0x33F270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F278u);
        ctx->pc = 0x33F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F270u;
        // 0x33f274: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F270u, 0x33F278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F278u;
label_33f278:
    // 0x33f278: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f27c:
    // 0x33f27c: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33f280:
    // 0x33f280: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33f284:
    // 0x33f284: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33f284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33f288:
    // 0x33f288: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33f28c:
    // 0x33f28c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f290:
    // 0x33f290: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33f290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33f294:
    // 0x33f294: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33f298:
    // 0x33f298: 0x40f809  jalr        $v0
label_33f29c:
    if (ctx->pc == 0x33F29Cu) {
        ctx->pc = 0x33F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F298u;
        // 0x33f29c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F2A0u;
        goto label_33f2a0;
    }
    ctx->pc = 0x33F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F2A0u);
        ctx->pc = 0x33F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F298u;
        // 0x33f29c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F298u, 0x33F2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F2A0u;
label_33f2a0:
    // 0x33f2a0: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33f2a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33f2a4:
    // 0x33f2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f2a8:
    // 0x33f2a8: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33f2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33f2ac:
    // 0x33f2ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f2b0:
    // 0x33f2b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f2b4:
    // 0x33f2b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33f2b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33f2b8:
    // 0x33f2b8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33f2b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33f2bc:
    // 0x33f2bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33f2bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33f2c0:
    // 0x33f2c0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33f2c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33f2c4:
    // 0x33f2c4: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33f2c8:
    // 0x33f2c8: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33f2cc:
    // 0x33f2cc: 0xc0d058e  jal         func_341638
label_33f2d0:
    if (ctx->pc == 0x33F2D0u) {
        ctx->pc = 0x33F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2CCu;
        // 0x33f2d0: 0x7fa20a50  sq          $v0, 0xA50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F2D4u;
        goto label_33f2d4;
    }
    ctx->pc = 0x33F2CCu;
    SET_GPR_U32(ctx, 31, 0x33F2D4u);
    ctx->pc = 0x33F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2CCu;
    // 0x33f2d0: 0x7fa20a50  sq          $v0, 0xA50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x33F2CCu, 0x33F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2D4u;
label_33f2d4:
    // 0x33f2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f2d8:
    // 0x33f2d8: 0xc0d0610  jal         func_341840
label_33f2dc:
    if (ctx->pc == 0x33F2DCu) {
        ctx->pc = 0x33F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2D8u;
        // 0x33f2dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F2E0u;
        goto label_33f2e0;
    }
    ctx->pc = 0x33F2D8u;
    SET_GPR_U32(ctx, 31, 0x33F2E0u);
    ctx->pc = 0x33F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2D8u;
    // 0x33f2dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x33F2D8u, 0x33F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2E0u;
label_33f2e0:
    // 0x33f2e0: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33f2e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f2e4:
    // 0x33f2e4: 0x27b20990  addiu       $s2, $sp, 0x990
    ctx->pc = 0x33f2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
label_33f2e8:
    // 0x33f2e8: 0x3c01bf26  lui         $at, 0xBF26
    ctx->pc = 0x33f2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48934 << 16));
label_33f2ec:
    // 0x33f2ec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x33f2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_33f2f0:
    // 0x33f2f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33f2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33f2f4:
    // 0x33f2f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f2f8:
    // 0x33f2f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33f2fc:
    // 0x33f2fc: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x33f2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_33f300:
    // 0x33f300: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x33f300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_33f304:
    // 0x33f304: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x33f304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33f308:
    // 0x33f308: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x33f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_33f30c:
    // 0x33f30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f310:
    // 0x33f310: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33f314:
    // 0x33f314: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33f314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f318:
    // 0x33f318: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33f318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33f31c:
    // 0x33f31c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33f31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f320:
    // 0x33f320: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x33f320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33f324:
    // 0x33f324: 0x40f809  jalr        $v0
label_33f328:
    if (ctx->pc == 0x33F328u) {
        ctx->pc = 0x33F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F324u;
        // 0x33f328: 0x340a800c  ori         $t2, $zero, 0x800C (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32780);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F32Cu;
        goto label_33f32c;
    }
    ctx->pc = 0x33F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F32Cu);
        ctx->pc = 0x33F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F324u;
        // 0x33f328: 0x340a800c  ori         $t2, $zero, 0x800C (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32780);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F324u, 0x33F32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F32Cu;
label_33f32c:
    // 0x33f32c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
label_33f330:
    if (ctx->pc == 0x33F330u) {
        ctx->pc = 0x33F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F32Cu;
        // 0x33f330: 0x27a50950  addiu       $a1, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F334u;
        goto label_33f334;
    }
    ctx->pc = 0x33F32Cu;
    {
        const bool branch_taken_0x33f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F32Cu;
        // 0x33f330: 0x27a50950  addiu       $a1, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f32c) {
            ctx->pc = 0x33F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f188;
        }
    }
    ctx->pc = 0x33F334u;
label_33f334:
    // 0x33f334: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f338:
    // 0x33f338: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33f338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33f33c:
    // 0x33f33c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33f340:
    // 0x33f340: 0x60f809  jalr        $v1
label_33f344:
    if (ctx->pc == 0x33F344u) {
        ctx->pc = 0x33F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F340u;
        // 0x33f344: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F348u;
        goto label_33f348;
    }
    ctx->pc = 0x33F340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F348u);
        ctx->pc = 0x33F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F340u;
        // 0x33f344: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F340u, 0x33F348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F348u;
label_33f348:
    // 0x33f348: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33f348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f34c:
    // 0x33f34c: 0x5620ffbe  bnel        $s1, $zero, . + 4 + (-0x42 << 2)
label_33f350:
    if (ctx->pc == 0x33F350u) {
        ctx->pc = 0x33F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F34Cu;
        // 0x33f350: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F354u;
        goto label_33f354;
    }
    ctx->pc = 0x33F34Cu;
    {
        const bool branch_taken_0x33f34c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f34c) {
            ctx->pc = 0x33F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F34Cu;
            // 0x33f350: 0x92220030  lbu         $v0, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f248;
        }
    }
    ctx->pc = 0x33F354u;
label_33f354:
    // 0x33f354: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x33f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_33f358:
    // 0x33f358: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_33f35c:
    if (ctx->pc == 0x33F35Cu) {
        ctx->pc = 0x33F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F358u;
        // 0x33f35c: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F360u;
        goto label_33f360;
    }
    ctx->pc = 0x33F358u;
    {
        const bool branch_taken_0x33f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F358u;
        // 0x33f35c: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f358) {
            ctx->pc = 0x33F4A4u;
            goto label_33f4a4;
        }
    }
    ctx->pc = 0x33F360u;
label_33f360:
    // 0x33f360: 0x8e710080  lw          $s1, 0x80($s3)
    ctx->pc = 0x33f360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_33f364:
    // 0x33f364: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_33f368:
    if (ctx->pc == 0x33F368u) {
        ctx->pc = 0x33F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F364u;
        // 0x33f368: 0x8fa20a60  lw          $v0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F36Cu;
        goto label_33f36c;
    }
    ctx->pc = 0x33F364u;
    {
        const bool branch_taken_0x33f364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F364u;
        // 0x33f368: 0x8fa20a60  lw          $v0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f364) {
            ctx->pc = 0x33F4A4u;
            goto label_33f4a4;
        }
    }
    ctx->pc = 0x33F36Cu;
label_33f36c:
    // 0x33f36c: 0x27b00960  addiu       $s0, $sp, 0x960
    ctx->pc = 0x33f36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_33f370:
    // 0x33f370: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x33f370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33f374:
    // 0x33f374: 0x27b40930  addiu       $s4, $sp, 0x930
    ctx->pc = 0x33f374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_33f378:
    // 0x33f378: 0x245500e0  addiu       $s5, $v0, 0xE0
    ctx->pc = 0x33f378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_33f37c:
    // 0x33f37c: 0x0  nop
    ctx->pc = 0x33f37cu;
    // NOP
label_33f380:
    // 0x33f380: 0xc0d0456  jal         func_341158
label_33f384:
    if (ctx->pc == 0x33F384u) {
        ctx->pc = 0x33F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F380u;
        // 0x33f384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F388u;
        goto label_33f388;
    }
    ctx->pc = 0x33F380u;
    SET_GPR_U32(ctx, 31, 0x33F388u);
    ctx->pc = 0x33F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F380u;
    // 0x33f384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33F380u, 0x33F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F388u;
label_33f388:
    // 0x33f388: 0x96230032  lhu         $v1, 0x32($s1)
    ctx->pc = 0x33f388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33f38c:
    // 0x33f38c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33f38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33f390:
    // 0x33f390: 0x50600042  beql        $v1, $zero, . + 4 + (0x42 << 2)
label_33f394:
    if (ctx->pc == 0x33F394u) {
        ctx->pc = 0x33F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F390u;
        // 0x33f394: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F398u;
        goto label_33f398;
    }
    ctx->pc = 0x33F390u;
    {
        const bool branch_taken_0x33f390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f390) {
            ctx->pc = 0x33F394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F390u;
            // 0x33f394: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F49Cu;
            goto label_33f49c;
        }
    }
    ctx->pc = 0x33F398u;
label_33f398:
    // 0x33f398: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33f398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33f39c:
    // 0x33f39c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33f3a0:
    // 0x33f3a0: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_33f3a4:
    if (ctx->pc == 0x33F3A4u) {
        ctx->pc = 0x33F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3A0u;
        // 0x33f3a4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F3A8u;
        goto label_33f3a8;
    }
    ctx->pc = 0x33F3A0u;
    {
        const bool branch_taken_0x33f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3a0) {
            ctx->pc = 0x33F3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F3A0u;
            // 0x33f3a4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F49Cu;
            goto label_33f49c;
        }
    }
    ctx->pc = 0x33F3A8u;
label_33f3a8:
    // 0x33f3a8: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x33f3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f3ac:
    // 0x33f3ac: 0x5456003b  bnel        $v0, $s6, . + 4 + (0x3B << 2)
label_33f3b0:
    if (ctx->pc == 0x33F3B0u) {
        ctx->pc = 0x33F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3ACu;
        // 0x33f3b0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F3B4u;
        goto label_33f3b4;
    }
    ctx->pc = 0x33F3ACu;
    {
        const bool branch_taken_0x33f3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x33f3ac) {
            ctx->pc = 0x33F3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F3ACu;
            // 0x33f3b0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F49Cu;
            goto label_33f49c;
        }
    }
    ctx->pc = 0x33F3B4u;
label_33f3b4:
    // 0x33f3b4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f3b8:
    // 0x33f3b8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33f3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33f3bc:
    // 0x33f3bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33f3c0:
    // 0x33f3c0: 0x40f809  jalr        $v0
label_33f3c4:
    if (ctx->pc == 0x33F3C4u) {
        ctx->pc = 0x33F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3C0u;
        // 0x33f3c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F3C8u;
        goto label_33f3c8;
    }
    ctx->pc = 0x33F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F3C8u);
        ctx->pc = 0x33F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3C0u;
        // 0x33f3c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F3C0u, 0x33F3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F3C8u;
label_33f3c8:
    // 0x33f3c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f3c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f3cc:
    // 0x33f3cc: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33f3d0:
    // 0x33f3d0: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33f3d4:
    // 0x33f3d4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33f3d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33f3d8:
    // 0x33f3d8: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33f3dc:
    // 0x33f3dc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f3e0:
    // 0x33f3e0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33f3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33f3e4:
    // 0x33f3e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33f3e8:
    // 0x33f3e8: 0x40f809  jalr        $v0
label_33f3ec:
    if (ctx->pc == 0x33F3ECu) {
        ctx->pc = 0x33F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3E8u;
        // 0x33f3ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F3F0u;
        goto label_33f3f0;
    }
    ctx->pc = 0x33F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F3F0u);
        ctx->pc = 0x33F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F3E8u;
        // 0x33f3ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F3E8u, 0x33F3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F3F0u;
label_33f3f0:
    // 0x33f3f0: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33f3f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33f3f4:
    // 0x33f3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f3f8:
    // 0x33f3f8: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33f3f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33f3fc:
    // 0x33f3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33f3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f400:
    // 0x33f400: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f404:
    // 0x33f404: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33f404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33f408:
    // 0x33f408: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33f408u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33f40c:
    // 0x33f40c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33f40cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33f410:
    // 0x33f410: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33f410u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33f414:
    // 0x33f414: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33f418:
    // 0x33f418: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33f41c:
    // 0x33f41c: 0xc0d058e  jal         func_341638
label_33f420:
    if (ctx->pc == 0x33F420u) {
        ctx->pc = 0x33F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F41Cu;
        // 0x33f420: 0x7fa20a50  sq          $v0, 0xA50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2640), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F424u;
        goto label_33f424;
    }
    ctx->pc = 0x33F41Cu;
    SET_GPR_U32(ctx, 31, 0x33F424u);
    ctx->pc = 0x33F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F41Cu;
    // 0x33f420: 0x7fa20a50  sq          $v0, 0xA50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2640), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x33F41Cu, 0x33F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F424u;
label_33f424:
    // 0x33f424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f428:
    // 0x33f428: 0xc0d0610  jal         func_341840
label_33f42c:
    if (ctx->pc == 0x33F42Cu) {
        ctx->pc = 0x33F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F428u;
        // 0x33f42c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F430u;
        goto label_33f430;
    }
    ctx->pc = 0x33F428u;
    SET_GPR_U32(ctx, 31, 0x33F430u);
    ctx->pc = 0x33F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F428u;
    // 0x33f42c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x33F428u, 0x33F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F430u;
label_33f430:
    // 0x33f430: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33f430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f434:
    // 0x33f434: 0x27b20990  addiu       $s2, $sp, 0x990
    ctx->pc = 0x33f434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
label_33f438:
    // 0x33f438: 0x3c01bf26  lui         $at, 0xBF26
    ctx->pc = 0x33f438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48934 << 16));
label_33f43c:
    // 0x33f43c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x33f43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_33f440:
    // 0x33f440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33f440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33f444:
    // 0x33f444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f448:
    // 0x33f448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33f44c:
    // 0x33f44c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x33f44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_33f450:
    // 0x33f450: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x33f450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_33f454:
    // 0x33f454: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x33f454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33f458:
    // 0x33f458: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x33f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_33f45c:
    // 0x33f45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f460:
    // 0x33f460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33f464:
    // 0x33f464: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33f464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f468:
    // 0x33f468: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33f468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33f46c:
    // 0x33f46c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33f46cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f470:
    // 0x33f470: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x33f470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33f474:
    // 0x33f474: 0x40f809  jalr        $v0
label_33f478:
    if (ctx->pc == 0x33F478u) {
        ctx->pc = 0x33F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F474u;
        // 0x33f478: 0x340a804c  ori         $t2, $zero, 0x804C (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32844);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F47Cu;
        goto label_33f47c;
    }
    ctx->pc = 0x33F474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F47Cu);
        ctx->pc = 0x33F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F474u;
        // 0x33f478: 0x340a804c  ori         $t2, $zero, 0x804C (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32844);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F474u, 0x33F47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F47Cu;
label_33f47c:
    // 0x33f47c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_33f480:
    if (ctx->pc == 0x33F480u) {
        ctx->pc = 0x33F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F47Cu;
        // 0x33f480: 0x27a50950  addiu       $a1, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F484u;
        goto label_33f484;
    }
    ctx->pc = 0x33F47Cu;
    {
        const bool branch_taken_0x33f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F47Cu;
        // 0x33f480: 0x27a50950  addiu       $a1, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f47c) {
            ctx->pc = 0x33F1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f1d0;
        }
    }
    ctx->pc = 0x33F484u;
label_33f484:
    // 0x33f484: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f488:
    // 0x33f488: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33f488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33f48c:
    // 0x33f48c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33f490:
    // 0x33f490: 0x60f809  jalr        $v1
label_33f494:
    if (ctx->pc == 0x33F494u) {
        ctx->pc = 0x33F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F490u;
        // 0x33f494: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F498u;
        goto label_33f498;
    }
    ctx->pc = 0x33F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F498u);
        ctx->pc = 0x33F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F490u;
        // 0x33f494: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F490u, 0x33F498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F498u;
label_33f498:
    // 0x33f498: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f49c:
    // 0x33f49c: 0x1620ffb8  bnez        $s1, . + 4 + (-0x48 << 2)
label_33f4a0:
    if (ctx->pc == 0x33F4A0u) {
        ctx->pc = 0x33F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F49Cu;
        // 0x33f4a0: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F4A4u;
        goto label_33f4a4;
    }
    ctx->pc = 0x33F49Cu;
    {
        const bool branch_taken_0x33f49c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F49Cu;
        // 0x33f4a0: 0x8fa40a60  lw          $a0, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f49c) {
            ctx->pc = 0x33F380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f380;
        }
    }
    ctx->pc = 0x33F4A4u;
label_33f4a4:
    // 0x33f4a4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x33f4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_33f4a8:
    // 0x33f4a8: 0x8e680034  lw          $t0, 0x34($s3)
    ctx->pc = 0x33f4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f4ac:
    // 0x33f4ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x33f4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33f4b0:
    // 0x33f4b0: 0x8fa50a6c  lw          $a1, 0xA6C($sp)
    ctx->pc = 0x33f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2668)));
label_33f4b4:
    // 0x33f4b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f4b8:
    // 0x33f4b8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x33f4b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_33f4bc:
    // 0x33f4bc: 0xc0cffac  jal         func_33FEB0
label_33f4c0:
    if (ctx->pc == 0x33F4C0u) {
        ctx->pc = 0x33F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4BCu;
        // 0x33f4c0: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F4C4u;
        goto label_33f4c4;
    }
    ctx->pc = 0x33F4BCu;
    SET_GPR_U32(ctx, 31, 0x33F4C4u);
    ctx->pc = 0x33F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F4BCu;
    // 0x33f4c0: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FEB0u, 0x33F4BCu, 0x33F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F4C4u;
label_33f4c4:
    // 0x33f4c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33f4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f4c8:
    // 0x33f4c8: 0xafa20a68  sw          $v0, 0xA68($sp)
    ctx->pc = 0x33f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2664), GPR_U32(ctx, 2));
label_33f4cc:
    // 0x33f4cc: 0x27c44b00  addiu       $a0, $fp, 0x4B00
    ctx->pc = 0x33f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
label_33f4d0:
    // 0x33f4d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_33f4d4:
    // 0x33f4d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33f4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33f4d8:
    // 0x33f4d8: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x33f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f4dc:
    // 0x33f4dc: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_33f4e0:
    // 0x33f4e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_33f4e4:
    // 0x33f4e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33f4e8:
    // 0x33f4e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f4e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f4ec:
    // 0x33f4ec: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x33f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_33f4f0:
    // 0x33f4f0: 0x8fa30a68  lw          $v1, 0xA68($sp)
    ctx->pc = 0x33f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2664)));
label_33f4f4:
    // 0x33f4f4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x33f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33f4f8:
    // 0x33f4f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33f4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33f4fc:
    // 0x33f4fc: 0x10600254  beqz        $v1, . + 4 + (0x254 << 2)
label_33f500:
    if (ctx->pc == 0x33F500u) {
        ctx->pc = 0x33F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4FCu;
        // 0x33f500: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F504u;
        goto label_33f504;
    }
    ctx->pc = 0x33F4FCu;
    {
        const bool branch_taken_0x33f4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4FCu;
        // 0x33f500: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f4fc) {
            ctx->pc = 0x33FE50u;
            goto label_33fe50;
        }
    }
    ctx->pc = 0x33F504u;
label_33f504:
    // 0x33f504: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x33f504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33f508:
    // 0x33f508: 0x8faa0a6c  lw          $t2, 0xA6C($sp)
    ctx->pc = 0x33f508u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2668)));
label_33f50c:
    // 0x33f50c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_33f510:
    // 0x33f510: 0xafa90a70  sw          $t1, 0xA70($sp)
    ctx->pc = 0x33f510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2672), GPR_U32(ctx, 9));
label_33f514:
    // 0x33f514: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x33f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_33f518:
    // 0x33f518: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x33f518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f51c:
    // 0x33f51c: 0x52400248  beql        $s2, $zero, . + 4 + (0x248 << 2)
label_33f520:
    if (ctx->pc == 0x33F520u) {
        ctx->pc = 0x33F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F51Cu;
        // 0x33f520: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F524u;
        goto label_33f524;
    }
    ctx->pc = 0x33F51Cu;
    {
        const bool branch_taken_0x33f51c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f51c) {
            ctx->pc = 0x33F520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F51Cu;
            // 0x33f520: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F524u;
label_33f524:
    // 0x33f524: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33f524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f528:
    // 0x33f528: 0x50a00245  beql        $a1, $zero, . + 4 + (0x245 << 2)
label_33f52c:
    if (ctx->pc == 0x33F52Cu) {
        ctx->pc = 0x33F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F528u;
        // 0x33f52c: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F530u;
        goto label_33f530;
    }
    ctx->pc = 0x33F528u;
    {
        const bool branch_taken_0x33f528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f528) {
            ctx->pc = 0x33F52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F528u;
            // 0x33f52c: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F530u;
label_33f530:
    // 0x33f530: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x33f530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_33f534:
    // 0x33f534: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_33f538:
    if (ctx->pc == 0x33F538u) {
        ctx->pc = 0x33F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F534u;
        // 0x33f538: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F53Cu;
        goto label_33f53c;
    }
    ctx->pc = 0x33F534u;
    {
        const bool branch_taken_0x33f534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f534) {
            ctx->pc = 0x33F538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F534u;
            // 0x33f538: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F54Cu;
            goto label_33f54c;
        }
    }
    ctx->pc = 0x33F53Cu;
label_33f53c:
    // 0x33f53c: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x33f53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_33f540:
    // 0x33f540: 0x5062023f  beql        $v1, $v0, . + 4 + (0x23F << 2)
label_33f544:
    if (ctx->pc == 0x33F544u) {
        ctx->pc = 0x33F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F540u;
        // 0x33f544: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F548u;
        goto label_33f548;
    }
    ctx->pc = 0x33F540u;
    {
        const bool branch_taken_0x33f540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33f540) {
            ctx->pc = 0x33F544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F540u;
            // 0x33f544: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F548u;
label_33f548:
    // 0x33f548: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x33f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33f54c:
    // 0x33f54c: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x33f54cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33f550:
    // 0x33f550: 0xafab0a70  sw          $t3, 0xA70($sp)
    ctx->pc = 0x33f550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2672), GPR_U32(ctx, 11));
label_33f554:
    // 0x33f554: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x33f554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_33f558:
    // 0x33f558: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x33f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_33f55c:
    // 0x33f55c: 0x40f809  jalr        $v0
label_33f560:
    if (ctx->pc == 0x33F560u) {
        ctx->pc = 0x33F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F55Cu;
        // 0x33f560: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F564u;
        goto label_33f564;
    }
    ctx->pc = 0x33F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F564u);
        ctx->pc = 0x33F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F55Cu;
        // 0x33f560: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F55Cu, 0x33F564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F564u;
label_33f564:
    // 0x33f564: 0x54400236  bnel        $v0, $zero, . + 4 + (0x236 << 2)
label_33f568:
    if (ctx->pc == 0x33F568u) {
        ctx->pc = 0x33F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F564u;
        // 0x33f568: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F56Cu;
        goto label_33f56c;
    }
    ctx->pc = 0x33F564u;
    {
        const bool branch_taken_0x33f564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f564) {
            ctx->pc = 0x33F568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F564u;
            // 0x33f568: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F56Cu;
label_33f56c:
    // 0x33f56c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x33f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_33f570:
    // 0x33f570: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x33f570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33f574:
    // 0x33f574: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_33f578:
    if (ctx->pc == 0x33F578u) {
        ctx->pc = 0x33F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F574u;
        // 0x33f578: 0x8e430074  lw          $v1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F57Cu;
        goto label_33f57c;
    }
    ctx->pc = 0x33F574u;
    {
        const bool branch_taken_0x33f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f574) {
            ctx->pc = 0x33F578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F574u;
            // 0x33f578: 0x8e430074  lw          $v1, 0x74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F5A8u;
            goto label_33f5a8;
        }
    }
    ctx->pc = 0x33F57Cu;
label_33f57c:
    // 0x33f57c: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f580:
    // 0x33f580: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33f584:
    // 0x33f584: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33f584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33f588:
    // 0x33f588: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33f58c:
    // 0x33f58c: 0x40f809  jalr        $v0
label_33f590:
    if (ctx->pc == 0x33F590u) {
        ctx->pc = 0x33F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F58Cu;
        // 0x33f590: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F594u;
        goto label_33f594;
    }
    ctx->pc = 0x33F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F594u);
        ctx->pc = 0x33F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F58Cu;
        // 0x33f590: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F58Cu, 0x33F594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F594u;
label_33f594:
    // 0x33f594: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33f594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_33f598:
    // 0x33f598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33f59c:
    // 0x33f59c: 0x54400228  bnel        $v0, $zero, . + 4 + (0x228 << 2)
label_33f5a0:
    if (ctx->pc == 0x33F5A0u) {
        ctx->pc = 0x33F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F59Cu;
        // 0x33f5a0: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F5A4u;
        goto label_33f5a4;
    }
    ctx->pc = 0x33F59Cu;
    {
        const bool branch_taken_0x33f59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f59c) {
            ctx->pc = 0x33F5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F59Cu;
            // 0x33f5a0: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F5A4u;
label_33f5a4:
    // 0x33f5a4: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x33f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_33f5a8:
    // 0x33f5a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f5ac:
    // 0x33f5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f5b0:
    // 0x33f5b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f5b4:
    // 0x33f5b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33f5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33f5b8:
    // 0x33f5b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33f5bc:
    // 0x33f5bc: 0x40f809  jalr        $v0
label_33f5c0:
    if (ctx->pc == 0x33F5C0u) {
        ctx->pc = 0x33F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5BCu;
        // 0x33f5c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F5C4u;
        goto label_33f5c4;
    }
    ctx->pc = 0x33F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F5C4u);
        ctx->pc = 0x33F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5BCu;
        // 0x33f5c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F5BCu, 0x33F5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F5C4u;
label_33f5c4:
    // 0x33f5c4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x33f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_33f5c8:
    // 0x33f5c8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33f5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33f5cc:
    // 0x33f5cc: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x33f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33f5d0:
    // 0x33f5d0: 0xa0f809  jalr        $a1
label_33f5d4:
    if (ctx->pc == 0x33F5D4u) {
        ctx->pc = 0x33F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5D0u;
        // 0x33f5d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F5D8u;
        goto label_33f5d8;
    }
    ctx->pc = 0x33F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x33F5D8u);
        ctx->pc = 0x33F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5D0u;
        // 0x33f5d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F5D0u, 0x33F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F5D8u;
label_33f5d8:
    // 0x33f5d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f5d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f5dc:
    // 0x33f5dc: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x33f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_33f5e0:
    // 0x33f5e0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x33f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_33f5e4:
    // 0x33f5e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33f5e8:
    // 0x33f5e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33f5ec:
    if (ctx->pc == 0x33F5ECu) {
        ctx->pc = 0x33F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5E8u;
        // 0x33f5ec: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F5F0u;
        goto label_33f5f0;
    }
    ctx->pc = 0x33F5E8u;
    {
        const bool branch_taken_0x33f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5E8u;
        // 0x33f5ec: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5e8) {
            ctx->pc = 0x33F604u;
            goto label_33f604;
        }
    }
    ctx->pc = 0x33F5F0u;
label_33f5f0:
    // 0x33f5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_33f5f4:
    // 0x33f5f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33f5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33f5f8:
    // 0x33f5f8: 0x0  nop
    ctx->pc = 0x33f5f8u;
    // NOP
label_33f5fc:
    // 0x33f5fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33f5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_33f600:
    // 0x33f600: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x33f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_33f604:
    // 0x33f604: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x33f604u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33f608:
    // 0x33f608: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x33f608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33f60c:
    // 0x33f60c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x33f60cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33f610:
    // 0x33f610: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x33f610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_33f614:
    // 0x33f614: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f618:
    // 0x33f618: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33f618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33f61c:
    // 0x33f61c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33f61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33f620:
    // 0x33f620: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33f620u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33f624:
    // 0x33f624: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33f624u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_33f628:
    // 0x33f628: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_33f62c:
    // 0x33f62c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33f62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33f630:
    // 0x33f630: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f634:
    // 0x33f634: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x33f634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33f638:
    // 0x33f638: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x33f638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33f63c:
    // 0x33f63c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x33f63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33f640:
    // 0x33f640: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x33f640u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_33f644:
    // 0x33f644: 0x4a0003bf  vwaitq
    ctx->pc = 0x33f644u;
    // VWAITQ (Q already resolved in this runtime)
label_33f648:
    // 0x33f648: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x33f648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_33f64c:
    // 0x33f64c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x33f64cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_33f650:
    // 0x33f650: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x33f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_33f654:
    // 0x33f654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33f654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33f658:
    // 0x33f658: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x33f658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_33f65c:
    // 0x33f65c: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33f660:
    // 0x33f660: 0x27a70930  addiu       $a3, $sp, 0x930
    ctx->pc = 0x33f660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_33f664:
    // 0x33f664: 0x0  nop
    ctx->pc = 0x33f664u;
    // NOP
label_33f668:
    // 0x33f668: 0x0  nop
    ctx->pc = 0x33f668u;
    // NOP
label_33f66c:
    // 0x33f66c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x33f66cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_33f670:
    // 0x33f670: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x33f670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_33f674:
    // 0x33f674: 0x8ca447c4  lw          $a0, 0x47C4($a1)
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18372)));
label_33f678:
    // 0x33f678: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33f678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33f67c:
    // 0x33f67c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x33f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_33f680:
    // 0x33f680: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x33f680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_33f684:
    // 0x33f684: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f688:
    // 0x33f688: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x33f688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_33f68c:
    // 0x33f68c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33f68cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33f690:
    // 0x33f690: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x33f690u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_33f694:
    // 0x33f694: 0x7fa600d0  sq          $a2, 0xD0($sp)
    ctx->pc = 0x33f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 6));
label_33f698:
    // 0x33f698: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x33f698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_33f69c:
    // 0x33f69c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x33f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_33f6a0:
    // 0x33f6a0: 0x7fa60930  sq          $a2, 0x930($sp)
    ctx->pc = 0x33f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 6));
label_33f6a4:
    // 0x33f6a4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33f6a8:
    // 0x33f6a8: 0x122400b  movn        $t0, $t1, $v0
    ctx->pc = 0x33f6a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 9));
label_33f6ac:
    // 0x33f6ac: 0x246a71c8  addiu       $t2, $v1, 0x71C8
    ctx->pc = 0x33f6acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 29128));
label_33f6b0:
    // 0x33f6b0: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x33f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_33f6b4:
    // 0x33f6b4: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x33f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_33f6b8:
    // 0x33f6b8: 0xb3ab0937  sdl         $t3, 0x937($sp)
    ctx->pc = 0x33f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33f6bc:
    // 0x33f6bc: 0xb7ab0930  sdr         $t3, 0x930($sp)
    ctx->pc = 0x33f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33f6c0:
    // 0x33f6c0: 0xc1036e2  jal         func_40DB88
label_33f6c4:
    if (ctx->pc == 0x33F6C4u) {
        ctx->pc = 0x33F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6C0u;
        // 0x33f6c4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F6C8u;
        goto label_33f6c8;
    }
    ctx->pc = 0x33F6C0u;
    SET_GPR_U32(ctx, 31, 0x33F6C8u);
    ctx->pc = 0x33F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F6C0u;
    // 0x33f6c4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x33F6C0u, 0x33F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6C8u;
label_33f6c8:
    // 0x33f6c8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x33f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_33f6cc:
    // 0x33f6cc: 0x144001db  bnez        $v0, . + 4 + (0x1DB << 2)
label_33f6d0:
    if (ctx->pc == 0x33F6D0u) {
        ctx->pc = 0x33F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6CCu;
        // 0x33f6d0: 0xafb00a70  sw          $s0, 0xA70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2672), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F6D4u;
        goto label_33f6d4;
    }
    ctx->pc = 0x33F6CCu;
    {
        const bool branch_taken_0x33f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6CCu;
        // 0x33f6d0: 0xafb00a70  sw          $s0, 0xA70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2672), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6cc) {
            ctx->pc = 0x33FE3Cu;
            goto label_33fe3c;
        }
    }
    ctx->pc = 0x33F6D4u;
label_33f6d4:
    // 0x33f6d4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x33f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_33f6d8:
    // 0x33f6d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x33f6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33f6dc:
    // 0x33f6dc: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
label_33f6e0:
    if (ctx->pc == 0x33F6E0u) {
        ctx->pc = 0x33F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6DCu;
        // 0x33f6e0: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F6E4u;
        goto label_33f6e4;
    }
    ctx->pc = 0x33F6DCu;
    {
        const bool branch_taken_0x33f6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6dc) {
            ctx->pc = 0x33F6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F6DCu;
            // 0x33f6e0: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F93Cu;
            goto label_33f93c;
        }
    }
    ctx->pc = 0x33F6E4u;
label_33f6e4:
    // 0x33f6e4: 0x8e7100c4  lw          $s1, 0xC4($s3)
    ctx->pc = 0x33f6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_33f6e8:
    // 0x33f6e8: 0x12200093  beqz        $s1, . + 4 + (0x93 << 2)
label_33f6ec:
    if (ctx->pc == 0x33F6ECu) {
        ctx->pc = 0x33F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6E8u;
        // 0x33f6ec: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F6F0u;
        goto label_33f6f0;
    }
    ctx->pc = 0x33F6E8u;
    {
        const bool branch_taken_0x33f6e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6E8u;
        // 0x33f6ec: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6e8) {
            ctx->pc = 0x33F938u;
            goto label_33f938;
        }
    }
    ctx->pc = 0x33F6F0u;
label_33f6f0:
    // 0x33f6f0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f6f4:
    // 0x33f6f4: 0x0  nop
    ctx->pc = 0x33f6f4u;
    // NOP
label_33f6f8:
    // 0x33f6f8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33f6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33f6fc:
    // 0x33f6fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33f700:
    // 0x33f700: 0x40f809  jalr        $v0
label_33f704:
    if (ctx->pc == 0x33F704u) {
        ctx->pc = 0x33F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F700u;
        // 0x33f704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F708u;
        goto label_33f708;
    }
    ctx->pc = 0x33F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F708u);
        ctx->pc = 0x33F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F700u;
        // 0x33f704: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F700u, 0x33F708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F708u;
label_33f708:
    // 0x33f708: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f70c:
    // 0x33f70c: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33f710:
    // 0x33f710: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33f714:
    // 0x33f714: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33f714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33f718:
    // 0x33f718: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33f71c:
    // 0x33f71c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f720:
    // 0x33f720: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33f720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33f724:
    // 0x33f724: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33f728:
    // 0x33f728: 0x40f809  jalr        $v0
label_33f72c:
    if (ctx->pc == 0x33F72Cu) {
        ctx->pc = 0x33F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F728u;
        // 0x33f72c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F730u;
        goto label_33f730;
    }
    ctx->pc = 0x33F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F730u);
        ctx->pc = 0x33F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F728u;
        // 0x33f72c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F728u, 0x33F730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F730u;
label_33f730:
    // 0x33f730: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33f730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33f734:
    // 0x33f734: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33f734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33f738:
    // 0x33f738: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33f738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33f73c:
    // 0x33f73c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33f73cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33f740:
    // 0x33f740: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33f740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33f744:
    // 0x33f744: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33f744u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33f748:
    // 0x33f748: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33f748u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33f74c:
    // 0x33f74c: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33f750:
    // 0x33f750: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33f754:
    // 0x33f754: 0x7fa20960  sq          $v0, 0x960($sp)
    ctx->pc = 0x33f754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 2));
label_33f758:
    // 0x33f758: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x33f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_33f75c:
    // 0x33f75c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x33f75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_33f760:
    // 0x33f760: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
label_33f764:
    if (ctx->pc == 0x33F764u) {
        ctx->pc = 0x33F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F760u;
        // 0x33f764: 0x8e430074  lw          $v1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F768u;
        goto label_33f768;
    }
    ctx->pc = 0x33F760u;
    {
        const bool branch_taken_0x33f760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f760) {
            ctx->pc = 0x33F764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F760u;
            // 0x33f764: 0x8e430074  lw          $v1, 0x74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F824u;
            goto label_33f824;
        }
    }
    ctx->pc = 0x33F768u;
label_33f768:
    // 0x33f768: 0x8e500080  lw          $s0, 0x80($s2)
    ctx->pc = 0x33f768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_33f76c:
    // 0x33f76c: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
label_33f770:
    if (ctx->pc == 0x33F770u) {
        ctx->pc = 0x33F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F76Cu;
        // 0x33f770: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F774u;
        goto label_33f774;
    }
    ctx->pc = 0x33F76Cu;
    {
        const bool branch_taken_0x33f76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F76Cu;
        // 0x33f770: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f76c) {
            ctx->pc = 0x33F90Cu;
            goto label_33f90c;
        }
    }
    ctx->pc = 0x33F774u;
label_33f774:
    // 0x33f774: 0x8fab0a60  lw          $t3, 0xA60($sp)
    ctx->pc = 0x33f774u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
label_33f778:
    // 0x33f778: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x33f778u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33f77c:
    // 0x33f77c: 0x2574007c  addiu       $s4, $t3, 0x7C
    ctx->pc = 0x33f77cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 124));
label_33f780:
    // 0x33f780: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x33f780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_33f784:
    // 0x33f784: 0x0  nop
    ctx->pc = 0x33f784u;
    // NOP
label_33f788:
    // 0x33f788: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33f788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_33f78c:
    // 0x33f78c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_33f790:
    if (ctx->pc == 0x33F790u) {
        ctx->pc = 0x33F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F78Cu;
        // 0x33f790: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F794u;
        goto label_33f794;
    }
    ctx->pc = 0x33F78Cu;
    {
        const bool branch_taken_0x33f78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f78c) {
            ctx->pc = 0x33F790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F78Cu;
            // 0x33f790: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F814u;
            goto label_33f814;
        }
    }
    ctx->pc = 0x33F794u;
label_33f794:
    // 0x33f794: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33f794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f798:
    // 0x33f798: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33f798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33f79c:
    // 0x33f79c: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x33f79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33f7a0:
    // 0x33f7a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33f7a4:
    // 0x33f7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33f7a8:
    // 0x33f7a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33f7ac:
    // 0x33f7ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f7b0:
    // 0x33f7b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_33f7b4:
    if (ctx->pc == 0x33F7B4u) {
        ctx->pc = 0x33F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7B0u;
        // 0x33f7b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F7B8u;
        goto label_33f7b8;
    }
    ctx->pc = 0x33F7B0u;
    {
        const bool branch_taken_0x33f7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7B0u;
        // 0x33f7b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f7b0) {
            ctx->pc = 0x33F810u;
            goto label_33f810;
        }
    }
    ctx->pc = 0x33F7B8u;
label_33f7b8:
    // 0x33f7b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33f7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33f7bc:
    // 0x33f7bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33f7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f7c0:
    // 0x33f7c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33f7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f7c4:
    // 0x33f7c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33f7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f7c8:
    // 0x33f7c8: 0x40f809  jalr        $v0
label_33f7cc:
    if (ctx->pc == 0x33F7CCu) {
        ctx->pc = 0x33F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7C8u;
        // 0x33f7cc: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F7D0u;
        goto label_33f7d0;
    }
    ctx->pc = 0x33F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F7D0u);
        ctx->pc = 0x33F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7C8u;
        // 0x33f7cc: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F7C8u, 0x33F7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F7D0u;
label_33f7d0:
    // 0x33f7d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33f7d4:
    if (ctx->pc == 0x33F7D4u) {
        ctx->pc = 0x33F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7D0u;
        // 0x33f7d4: 0x8fa20a64  lw          $v0, 0xA64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F7D8u;
        goto label_33f7d8;
    }
    ctx->pc = 0x33F7D0u;
    {
        const bool branch_taken_0x33f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7D0u;
        // 0x33f7d4: 0x8fa20a64  lw          $v0, 0xA64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f7d0) {
            ctx->pc = 0x33F810u;
            goto label_33f810;
        }
    }
    ctx->pc = 0x33F7D8u;
label_33f7d8:
    // 0x33f7d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33f7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33f7dc:
    // 0x33f7dc: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x33f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_33f7e0:
    // 0x33f7e0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x33f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_33f7e4:
    // 0x33f7e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_33f7e8:
    // 0x33f7e8: 0x8fa90a64  lw          $t1, 0xA64($sp)
    ctx->pc = 0x33f7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
label_33f7ec:
    // 0x33f7ec: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x33f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f7f0:
    // 0x33f7f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x33f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33f7f4:
    // 0x33f7f4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_33f7f8:
    // 0x33f7f8: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x33f7f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_33f7fc:
    // 0x33f7fc: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x33f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_33f800:
    // 0x33f800: 0x40f809  jalr        $v0
label_33f804:
    if (ctx->pc == 0x33F804u) {
        ctx->pc = 0x33F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F800u;
        // 0x33f804: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F808u;
        goto label_33f808;
    }
    ctx->pc = 0x33F800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F808u);
        ctx->pc = 0x33F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F800u;
        // 0x33f804: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F800u, 0x33F808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F808u;
label_33f808:
    // 0x33f808: 0x10000034  b           . + 4 + (0x34 << 2)
label_33f80c:
    if (ctx->pc == 0x33F80Cu) {
        ctx->pc = 0x33F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F808u;
        // 0x33f80c: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F810u;
        goto label_33f810;
    }
    ctx->pc = 0x33F808u;
    {
        const bool branch_taken_0x33f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F808u;
        // 0x33f80c: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f808) {
            ctx->pc = 0x33F8DCu;
            goto label_33f8dc;
        }
    }
    ctx->pc = 0x33F810u;
label_33f810:
    // 0x33f810: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33f814:
    // 0x33f814: 0x5600ffdc  bnel        $s0, $zero, . + 4 + (-0x24 << 2)
label_33f818:
    if (ctx->pc == 0x33F818u) {
        ctx->pc = 0x33F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F814u;
        // 0x33f818: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F81Cu;
        goto label_33f81c;
    }
    ctx->pc = 0x33F814u;
    {
        const bool branch_taken_0x33f814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f814) {
            ctx->pc = 0x33F818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F814u;
            // 0x33f818: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f788;
        }
    }
    ctx->pc = 0x33F81Cu;
label_33f81c:
    // 0x33f81c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_33f820:
    if (ctx->pc == 0x33F820u) {
        ctx->pc = 0x33F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F81Cu;
        // 0x33f820: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F824u;
        goto label_33f824;
    }
    ctx->pc = 0x33F81Cu;
    {
        const bool branch_taken_0x33f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F81Cu;
        // 0x33f820: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f81c) {
            ctx->pc = 0x33F910u;
            goto label_33f910;
        }
    }
    ctx->pc = 0x33F824u;
label_33f824:
    // 0x33f824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33f828:
    // 0x33f828: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x33f828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f82c:
    // 0x33f82c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33f830:
    // 0x33f830: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33f830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33f834:
    // 0x33f834: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33f838:
    // 0x33f838: 0x40f809  jalr        $v0
label_33f83c:
    if (ctx->pc == 0x33F83Cu) {
        ctx->pc = 0x33F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F838u;
        // 0x33f83c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F840u;
        goto label_33f840;
    }
    ctx->pc = 0x33F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F840u);
        ctx->pc = 0x33F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F838u;
        // 0x33f83c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F838u, 0x33F840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F840u;
label_33f840:
    // 0x33f840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33f840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f844:
    // 0x33f844: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_33f848:
    if (ctx->pc == 0x33F848u) {
        ctx->pc = 0x33F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F844u;
        // 0x33f848: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F84Cu;
        goto label_33f84c;
    }
    ctx->pc = 0x33F844u;
    {
        const bool branch_taken_0x33f844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F844u;
        // 0x33f848: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f844) {
            ctx->pc = 0x33F90Cu;
            goto label_33f90c;
        }
    }
    ctx->pc = 0x33F84Cu;
label_33f84c:
    // 0x33f84c: 0x8faa0a60  lw          $t2, 0xA60($sp)
    ctx->pc = 0x33f84cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
label_33f850:
    // 0x33f850: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x33f850u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33f854:
    // 0x33f854: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x33f854u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33f858:
    // 0x33f858: 0x2554007c  addiu       $s4, $t2, 0x7C
    ctx->pc = 0x33f858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 124));
label_33f85c:
    // 0x33f85c: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33f85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33f860:
    // 0x33f860: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33f860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33f864:
    // 0x33f864: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x33f864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33f868:
    // 0x33f868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33f868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33f86c:
    // 0x33f86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33f870:
    // 0x33f870: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33f874:
    // 0x33f874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f878:
    // 0x33f878: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_33f87c:
    if (ctx->pc == 0x33F87Cu) {
        ctx->pc = 0x33F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F878u;
        // 0x33f87c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F880u;
        goto label_33f880;
    }
    ctx->pc = 0x33F878u;
    {
        const bool branch_taken_0x33f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F878u;
        // 0x33f87c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f878) {
            ctx->pc = 0x33F900u;
            goto label_33f900;
        }
    }
    ctx->pc = 0x33F880u;
label_33f880:
    // 0x33f880: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33f880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33f884:
    // 0x33f884: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33f884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f888:
    // 0x33f888: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33f888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f88c:
    // 0x33f88c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33f88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f890:
    // 0x33f890: 0x40f809  jalr        $v0
label_33f894:
    if (ctx->pc == 0x33F894u) {
        ctx->pc = 0x33F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F890u;
        // 0x33f894: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F898u;
        goto label_33f898;
    }
    ctx->pc = 0x33F890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F898u);
        ctx->pc = 0x33F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F890u;
        // 0x33f894: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F890u, 0x33F898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F898u;
label_33f898:
    // 0x33f898: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33f89c:
    if (ctx->pc == 0x33F89Cu) {
        ctx->pc = 0x33F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F898u;
        // 0x33f89c: 0x8fab0a64  lw          $t3, 0xA64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F8A0u;
        goto label_33f8a0;
    }
    ctx->pc = 0x33F898u;
    {
        const bool branch_taken_0x33f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F898u;
        // 0x33f89c: 0x8fab0a64  lw          $t3, 0xA64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f898) {
            ctx->pc = 0x33F900u;
            goto label_33f900;
        }
    }
    ctx->pc = 0x33F8A0u;
label_33f8a0:
    // 0x33f8a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33f8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33f8a4:
    // 0x33f8a4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x33f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_33f8a8:
    // 0x33f8a8: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x33f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_33f8ac:
    // 0x33f8ac: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x33f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_33f8b0:
    // 0x33f8b0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x33f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f8b4:
    // 0x33f8b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x33f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33f8b8:
    // 0x33f8b8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x33f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_33f8bc:
    // 0x33f8bc: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x33f8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_33f8c0:
    // 0x33f8c0: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x33f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_33f8c4:
    // 0x33f8c4: 0x40f809  jalr        $v0
label_33f8c8:
    if (ctx->pc == 0x33F8C8u) {
        ctx->pc = 0x33F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8C4u;
        // 0x33f8c8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F8CCu;
        goto label_33f8cc;
    }
    ctx->pc = 0x33F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F8CCu);
        ctx->pc = 0x33F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8C4u;
        // 0x33f8c8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F8C4u, 0x33F8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F8CCu;
label_33f8cc:
    // 0x33f8cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33f8d0:
    // 0x33f8d0: 0x5056000c  beql        $v0, $s6, . + 4 + (0xC << 2)
label_33f8d4:
    if (ctx->pc == 0x33F8D4u) {
        ctx->pc = 0x33F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8D0u;
        // 0x33f8d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F8D8u;
        goto label_33f8d8;
    }
    ctx->pc = 0x33F8D0u;
    {
        const bool branch_taken_0x33f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x33f8d0) {
            ctx->pc = 0x33F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F8D0u;
            // 0x33f8d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F904u;
            goto label_33f904;
        }
    }
    ctx->pc = 0x33F8D8u;
label_33f8d8:
    // 0x33f8d8: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f8dc:
    // 0x33f8dc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_33f8e0:
    if (ctx->pc == 0x33F8E0u) {
        ctx->pc = 0x33F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8DCu;
        // 0x33f8e0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F8E4u;
        goto label_33f8e4;
    }
    ctx->pc = 0x33F8DCu;
    {
        const bool branch_taken_0x33f8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8DCu;
        // 0x33f8e0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8dc) {
            ctx->pc = 0x33F90Cu;
            goto label_33f90c;
        }
    }
    ctx->pc = 0x33F8E4u;
label_33f8e4:
    // 0x33f8e4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x33f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33f8e8:
    // 0x33f8e8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x33f8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_33f8ec:
    // 0x33f8ec: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x33f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_33f8f0:
    // 0x33f8f0: 0x60f809  jalr        $v1
label_33f8f4:
    if (ctx->pc == 0x33F8F4u) {
        ctx->pc = 0x33F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8F0u;
        // 0x33f8f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F8F8u;
        goto label_33f8f8;
    }
    ctx->pc = 0x33F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F8F8u);
        ctx->pc = 0x33F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8F0u;
        // 0x33f8f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F8F0u, 0x33F8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F8F8u;
label_33f8f8:
    // 0x33f8f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_33f8fc:
    if (ctx->pc == 0x33F8FCu) {
        ctx->pc = 0x33F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8F8u;
        // 0x33f8fc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F900u;
        goto label_33f900;
    }
    ctx->pc = 0x33F8F8u;
    {
        const bool branch_taken_0x33f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8F8u;
        // 0x33f8fc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8f8) {
            ctx->pc = 0x33F90Cu;
            goto label_33f90c;
        }
    }
    ctx->pc = 0x33F900u;
label_33f900:
    // 0x33f900: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33f900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33f904:
    // 0x33f904: 0x5600ffd6  bnel        $s0, $zero, . + 4 + (-0x2A << 2)
label_33f908:
    if (ctx->pc == 0x33F908u) {
        ctx->pc = 0x33F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F904u;
        // 0x33f908: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F90Cu;
        goto label_33f90c;
    }
    ctx->pc = 0x33F904u;
    {
        const bool branch_taken_0x33f904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f904) {
            ctx->pc = 0x33F908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F904u;
            // 0x33f908: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f860;
        }
    }
    ctx->pc = 0x33F90Cu;
label_33f90c:
    // 0x33f90c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f910:
    // 0x33f910: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33f910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33f914:
    // 0x33f914: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33f914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33f918:
    // 0x33f918: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33f918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33f91c:
    // 0x33f91c: 0x60f809  jalr        $v1
label_33f920:
    if (ctx->pc == 0x33F920u) {
        ctx->pc = 0x33F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F91Cu;
        // 0x33f920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F924u;
        goto label_33f924;
    }
    ctx->pc = 0x33F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F924u);
        ctx->pc = 0x33F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F91Cu;
        // 0x33f920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F91Cu, 0x33F924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F924u;
label_33f924:
    // 0x33f924: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33f924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f928:
    // 0x33f928: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_33f92c:
    if (ctx->pc == 0x33F92Cu) {
        ctx->pc = 0x33F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F928u;
        // 0x33f92c: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F930u;
        goto label_33f930;
    }
    ctx->pc = 0x33F928u;
    {
        const bool branch_taken_0x33f928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f928) {
            ctx->pc = 0x33F92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F928u;
            // 0x33f92c: 0x8e6200c0  lw          $v0, 0xC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F93Cu;
            goto label_33f93c;
        }
    }
    ctx->pc = 0x33F930u;
label_33f930:
    // 0x33f930: 0x53c0ff71  beql        $fp, $zero, . + 4 + (-0x8F << 2)
label_33f934:
    if (ctx->pc == 0x33F934u) {
        ctx->pc = 0x33F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F930u;
        // 0x33f934: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F938u;
        goto label_33f938;
    }
    ctx->pc = 0x33F930u;
    {
        const bool branch_taken_0x33f930 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f930) {
            ctx->pc = 0x33F934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F930u;
            // 0x33f934: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f6f8;
        }
    }
    ctx->pc = 0x33F938u;
label_33f938:
    // 0x33f938: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x33f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_33f93c:
    // 0x33f93c: 0x50400140  beql        $v0, $zero, . + 4 + (0x140 << 2)
label_33f940:
    if (ctx->pc == 0x33F940u) {
        ctx->pc = 0x33F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F93Cu;
        // 0x33f940: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F944u;
        goto label_33f944;
    }
    ctx->pc = 0x33F93Cu;
    {
        const bool branch_taken_0x33f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f93c) {
            ctx->pc = 0x33F940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F93Cu;
            // 0x33f940: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F944u;
label_33f944:
    // 0x33f944: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x33f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_33f948:
    // 0x33f948: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x33f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_33f94c:
    // 0x33f94c: 0x5040013c  beql        $v0, $zero, . + 4 + (0x13C << 2)
label_33f950:
    if (ctx->pc == 0x33F950u) {
        ctx->pc = 0x33F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F94Cu;
        // 0x33f950: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F954u;
        goto label_33f954;
    }
    ctx->pc = 0x33F94Cu;
    {
        const bool branch_taken_0x33f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f94c) {
            ctx->pc = 0x33F950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F94Cu;
            // 0x33f950: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F954u;
label_33f954:
    // 0x33f954: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33f954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f958:
    // 0x33f958: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33f958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33f95c:
    // 0x33f95c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33f960:
    // 0x33f960: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x33f960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_33f964:
    // 0x33f964: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x33f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_33f968:
    // 0x33f968: 0x40f809  jalr        $v0
label_33f96c:
    if (ctx->pc == 0x33F96Cu) {
        ctx->pc = 0x33F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F968u;
        // 0x33f96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F970u;
        goto label_33f970;
    }
    ctx->pc = 0x33F968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F970u);
        ctx->pc = 0x33F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F968u;
        // 0x33f96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F968u, 0x33F970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F970u;
label_33f970:
    // 0x33f970: 0x50400133  beql        $v0, $zero, . + 4 + (0x133 << 2)
label_33f974:
    if (ctx->pc == 0x33F974u) {
        ctx->pc = 0x33F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F970u;
        // 0x33f974: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F978u;
        goto label_33f978;
    }
    ctx->pc = 0x33F970u;
    {
        const bool branch_taken_0x33f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f970) {
            ctx->pc = 0x33F974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F970u;
            // 0x33f974: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F978u;
label_33f978:
    // 0x33f978: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x33f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_33f97c:
    // 0x33f97c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33f980:
    // 0x33f980: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_33f984:
    if (ctx->pc == 0x33F984u) {
        ctx->pc = 0x33F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F980u;
        // 0x33f984: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F988u;
        goto label_33f988;
    }
    ctx->pc = 0x33F980u;
    {
        const bool branch_taken_0x33f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F980u;
        // 0x33f984: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f980) {
            ctx->pc = 0x33FC9Cu;
            goto label_33fc9c;
        }
    }
    ctx->pc = 0x33F988u;
label_33f988:
    // 0x33f988: 0x8e700034  lw          $s0, 0x34($s3)
    ctx->pc = 0x33f988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33f98c:
    // 0x33f98c: 0xc0899ae  jal         func_2266B8
label_33f990:
    if (ctx->pc == 0x33F990u) {
        ctx->pc = 0x33F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F98Cu;
        // 0x33f990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F994u;
        goto label_33f994;
    }
    ctx->pc = 0x33F98Cu;
    SET_GPR_U32(ctx, 31, 0x33F994u);
    ctx->pc = 0x33F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F98Cu;
    // 0x33f990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x33F98Cu, 0x33F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F994u;
label_33f994:
    // 0x33f994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f998:
    // 0x33f998: 0xc0406e2  jal         func_101B88
label_33f99c:
    if (ctx->pc == 0x33F99Cu) {
        ctx->pc = 0x33F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F998u;
        // 0x33f99c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9A0u;
        goto label_33f9a0;
    }
    ctx->pc = 0x33F998u;
    SET_GPR_U32(ctx, 31, 0x33F9A0u);
    ctx->pc = 0x33F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F998u;
    // 0x33f99c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B88u, 0x33F998u, 0x33F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F9A0u;
label_33f9a0:
    // 0x33f9a0: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_33f9a4:
    if (ctx->pc == 0x33F9A4u) {
        ctx->pc = 0x33F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9A0u;
        // 0x33f9a4: 0x8e710080  lw          $s1, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9A8u;
        goto label_33f9a8;
    }
    ctx->pc = 0x33F9A0u;
    {
        const bool branch_taken_0x33f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9A0u;
        // 0x33f9a4: 0x8e710080  lw          $s1, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9a0) {
            ctx->pc = 0x33FB0Cu;
            goto label_33fb0c;
        }
    }
    ctx->pc = 0x33F9A8u;
label_33f9a8:
    // 0x33f9a8: 0x12200125  beqz        $s1, . + 4 + (0x125 << 2)
label_33f9ac:
    if (ctx->pc == 0x33F9ACu) {
        ctx->pc = 0x33F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9A8u;
        // 0x33f9ac: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9B0u;
        goto label_33f9b0;
    }
    ctx->pc = 0x33F9A8u;
    {
        const bool branch_taken_0x33f9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9A8u;
        // 0x33f9ac: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9a8) {
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33F9B0u;
label_33f9b0:
    // 0x33f9b0: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33f9b4:
    // 0x33f9b4: 0x0  nop
    ctx->pc = 0x33f9b4u;
    // NOP
label_33f9b8:
    // 0x33f9b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33f9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33f9bc:
    // 0x33f9bc: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
label_33f9c0:
    if (ctx->pc == 0x33F9C0u) {
        ctx->pc = 0x33F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9BCu;
        // 0x33f9c0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9C4u;
        goto label_33f9c4;
    }
    ctx->pc = 0x33F9BCu;
    {
        const bool branch_taken_0x33f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f9bc) {
            ctx->pc = 0x33F9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F9BCu;
            // 0x33f9c0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FAF4u;
            goto label_33faf4;
        }
    }
    ctx->pc = 0x33F9C4u;
label_33f9c4:
    // 0x33f9c4: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33f9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33f9c8:
    // 0x33f9c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33f9cc:
    // 0x33f9cc: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
label_33f9d0:
    if (ctx->pc == 0x33F9D0u) {
        ctx->pc = 0x33F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9CCu;
        // 0x33f9d0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9D4u;
        goto label_33f9d4;
    }
    ctx->pc = 0x33F9CCu;
    {
        const bool branch_taken_0x33f9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f9cc) {
            ctx->pc = 0x33F9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F9CCu;
            // 0x33f9d0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FAF4u;
            goto label_33faf4;
        }
    }
    ctx->pc = 0x33F9D4u;
label_33f9d4:
    // 0x33f9d4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33f9d8:
    // 0x33f9d8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33f9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33f9dc:
    // 0x33f9dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33f9e0:
    // 0x33f9e0: 0x40f809  jalr        $v0
label_33f9e4:
    if (ctx->pc == 0x33F9E4u) {
        ctx->pc = 0x33F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9E0u;
        // 0x33f9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F9E8u;
        goto label_33f9e8;
    }
    ctx->pc = 0x33F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F9E8u);
        ctx->pc = 0x33F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9E0u;
        // 0x33f9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9E0u, 0x33F9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F9E8u;
label_33f9e8:
    // 0x33f9e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33f9e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33f9ec:
    // 0x33f9ec: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33f9f0:
    // 0x33f9f0: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33f9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33f9f4:
    // 0x33f9f4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33f9f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33f9f8:
    // 0x33f9f8: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33f9fc:
    // 0x33f9fc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fa00:
    // 0x33fa00: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33fa00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33fa04:
    // 0x33fa04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33fa08:
    // 0x33fa08: 0x40f809  jalr        $v0
label_33fa0c:
    if (ctx->pc == 0x33FA0Cu) {
        ctx->pc = 0x33FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA08u;
        // 0x33fa0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FA10u;
        goto label_33fa10;
    }
    ctx->pc = 0x33FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FA10u);
        ctx->pc = 0x33FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA08u;
        // 0x33fa0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA08u, 0x33FA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FA10u;
label_33fa10:
    // 0x33fa10: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33fa10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33fa14:
    // 0x33fa14: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x33fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33fa18:
    // 0x33fa18: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33fa18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33fa1c:
    // 0x33fa1c: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33fa20:
    // 0x33fa20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33fa20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33fa24:
    // 0x33fa24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33fa24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33fa28:
    // 0x33fa28: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33fa28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33fa2c:
    // 0x33fa2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33fa2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33fa30:
    // 0x33fa30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33fa30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33fa34:
    // 0x33fa34: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33fa38:
    // 0x33fa38: 0x7fa20960  sq          $v0, 0x960($sp)
    ctx->pc = 0x33fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 2));
label_33fa3c:
    // 0x33fa3c: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33fa3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33fa40:
    // 0x33fa40: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x33fa40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_33fa44:
    // 0x33fa44: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x33fa44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33fa48:
    // 0x33fa48: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33fa48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33fa4c:
    // 0x33fa4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33fa50:
    // 0x33fa50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33fa54:
    // 0x33fa54: 0x8fa30a60  lw          $v1, 0xA60($sp)
    ctx->pc = 0x33fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
label_33fa58:
    // 0x33fa58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33fa5c:
    // 0x33fa5c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x33fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_33fa60:
    // 0x33fa60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_33fa64:
    if (ctx->pc == 0x33FA64u) {
        ctx->pc = 0x33FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA60u;
        // 0x33fa64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FA68u;
        goto label_33fa68;
    }
    ctx->pc = 0x33FA60u;
    {
        const bool branch_taken_0x33fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA60u;
        // 0x33fa64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa60) {
            ctx->pc = 0x33FAD8u;
            goto label_33fad8;
        }
    }
    ctx->pc = 0x33FA68u;
label_33fa68:
    // 0x33fa68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33fa6c:
    // 0x33fa6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33fa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33fa70:
    // 0x33fa70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33fa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33fa74:
    // 0x33fa74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33fa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fa78:
    // 0x33fa78: 0x40f809  jalr        $v0
label_33fa7c:
    if (ctx->pc == 0x33FA7Cu) {
        ctx->pc = 0x33FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA78u;
        // 0x33fa7c: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FA80u;
        goto label_33fa80;
    }
    ctx->pc = 0x33FA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FA80u);
        ctx->pc = 0x33FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA78u;
        // 0x33fa7c: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA78u, 0x33FA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FA80u;
label_33fa80:
    // 0x33fa80: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_33fa84:
    if (ctx->pc == 0x33FA84u) {
        ctx->pc = 0x33FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA80u;
        // 0x33fa84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FA88u;
        goto label_33fa88;
    }
    ctx->pc = 0x33FA80u;
    {
        const bool branch_taken_0x33fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA80u;
        // 0x33fa84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa80) {
            ctx->pc = 0x33FAD8u;
            goto label_33fad8;
        }
    }
    ctx->pc = 0x33FA88u;
label_33fa88:
    // 0x33fa88: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33fa8c:
    // 0x33fa8c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x33fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_33fa90:
    // 0x33fa90: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x33fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_33fa94:
    // 0x33fa94: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_33fa98:
    // 0x33fa98: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x33fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fa9c:
    // 0x33fa9c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x33fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33faa0:
    // 0x33faa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33faa4:
    // 0x33faa4: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x33faa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_33faa8:
    // 0x33faa8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x33faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_33faac:
    // 0x33faac: 0x40f809  jalr        $v0
label_33fab0:
    if (ctx->pc == 0x33FAB0u) {
        ctx->pc = 0x33FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAACu;
        // 0x33fab0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FAB4u;
        goto label_33fab4;
    }
    ctx->pc = 0x33FAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FAB4u);
        ctx->pc = 0x33FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAACu;
        // 0x33fab0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FAACu, 0x33FAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FAB4u;
label_33fab4:
    // 0x33fab4: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fab8:
    // 0x33fab8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_33fabc:
    if (ctx->pc == 0x33FABCu) {
        ctx->pc = 0x33FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAB8u;
        // 0x33fabc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FAC0u;
        goto label_33fac0;
    }
    ctx->pc = 0x33FAB8u;
    {
        const bool branch_taken_0x33fab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAB8u;
        // 0x33fabc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fab8) {
            ctx->pc = 0x33FAD8u;
            goto label_33fad8;
        }
    }
    ctx->pc = 0x33FAC0u;
label_33fac0:
    // 0x33fac0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x33fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33fac4:
    // 0x33fac4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x33fac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_33fac8:
    // 0x33fac8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x33fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_33facc:
    // 0x33facc: 0x60f809  jalr        $v1
label_33fad0:
    if (ctx->pc == 0x33FAD0u) {
        ctx->pc = 0x33FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FACCu;
        // 0x33fad0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FAD4u;
        goto label_33fad4;
    }
    ctx->pc = 0x33FACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FAD4u);
        ctx->pc = 0x33FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FACCu;
        // 0x33fad0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FACCu, 0x33FAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FAD4u;
label_33fad4:
    // 0x33fad4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x33fad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33fad8:
    // 0x33fad8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fadc:
    // 0x33fadc: 0x27a50950  addiu       $a1, $sp, 0x950
    ctx->pc = 0x33fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
label_33fae0:
    // 0x33fae0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33fae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33fae4:
    // 0x33fae4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33fae8:
    // 0x33fae8: 0x60f809  jalr        $v1
label_33faec:
    if (ctx->pc == 0x33FAECu) {
        ctx->pc = 0x33FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAE8u;
        // 0x33faec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FAF0u;
        goto label_33faf0;
    }
    ctx->pc = 0x33FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FAF0u);
        ctx->pc = 0x33FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAE8u;
        // 0x33faec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FAE8u, 0x33FAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FAF0u;
label_33faf0:
    // 0x33faf0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33faf4:
    // 0x33faf4: 0x122000d2  beqz        $s1, . + 4 + (0xD2 << 2)
label_33faf8:
    if (ctx->pc == 0x33FAF8u) {
        ctx->pc = 0x33FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAF4u;
        // 0x33faf8: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FAFCu;
        goto label_33fafc;
    }
    ctx->pc = 0x33FAF4u;
    {
        const bool branch_taken_0x33faf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAF4u;
        // 0x33faf8: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33faf4) {
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FAFCu;
label_33fafc:
    // 0x33fafc: 0x52e0ffae  beql        $s7, $zero, . + 4 + (-0x52 << 2)
label_33fb00:
    if (ctx->pc == 0x33FB00u) {
        ctx->pc = 0x33FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAFCu;
        // 0x33fb00: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB04u;
        goto label_33fb04;
    }
    ctx->pc = 0x33FAFCu;
    {
        const bool branch_taken_0x33fafc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fafc) {
            ctx->pc = 0x33FB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FAFCu;
            // 0x33fb00: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f9b8;
        }
    }
    ctx->pc = 0x33FB04u;
label_33fb04:
    // 0x33fb04: 0x100000cf  b           . + 4 + (0xCF << 2)
label_33fb08:
    if (ctx->pc == 0x33FB08u) {
        ctx->pc = 0x33FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB04u;
        // 0x33fb08: 0x8fab0a68  lw          $t3, 0xA68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB0Cu;
        goto label_33fb0c;
    }
    ctx->pc = 0x33FB04u;
    {
        const bool branch_taken_0x33fb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB04u;
        // 0x33fb08: 0x8fab0a68  lw          $t3, 0xA68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb04) {
            ctx->pc = 0x33FE44u;
            goto label_33fe44;
        }
    }
    ctx->pc = 0x33FB0Cu;
label_33fb0c:
    // 0x33fb0c: 0x122000cc  beqz        $s1, . + 4 + (0xCC << 2)
label_33fb10:
    if (ctx->pc == 0x33FB10u) {
        ctx->pc = 0x33FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB0Cu;
        // 0x33fb10: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB14u;
        goto label_33fb14;
    }
    ctx->pc = 0x33FB0Cu;
    {
        const bool branch_taken_0x33fb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB0Cu;
        // 0x33fb10: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb0c) {
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FB14u;
label_33fb14:
    // 0x33fb14: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33fb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33fb18:
    // 0x33fb18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33fb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33fb1c:
    // 0x33fb1c: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_33fb20:
    if (ctx->pc == 0x33FB20u) {
        ctx->pc = 0x33FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB1Cu;
        // 0x33fb20: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB24u;
        goto label_33fb24;
    }
    ctx->pc = 0x33FB1Cu;
    {
        const bool branch_taken_0x33fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb1c) {
            ctx->pc = 0x33FB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FB1Cu;
            // 0x33fb20: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FC84u;
            goto label_33fc84;
        }
    }
    ctx->pc = 0x33FB24u;
label_33fb24:
    // 0x33fb24: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33fb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33fb28:
    // 0x33fb28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33fb2c:
    // 0x33fb2c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_33fb30:
    if (ctx->pc == 0x33FB30u) {
        ctx->pc = 0x33FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB2Cu;
        // 0x33fb30: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB34u;
        goto label_33fb34;
    }
    ctx->pc = 0x33FB2Cu;
    {
        const bool branch_taken_0x33fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb2c) {
            ctx->pc = 0x33FB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FB2Cu;
            // 0x33fb30: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FC84u;
            goto label_33fc84;
        }
    }
    ctx->pc = 0x33FB34u;
label_33fb34:
    // 0x33fb34: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fb38:
    // 0x33fb38: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33fb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33fb3c:
    // 0x33fb3c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33fb40:
    // 0x33fb40: 0x40f809  jalr        $v0
label_33fb44:
    if (ctx->pc == 0x33FB44u) {
        ctx->pc = 0x33FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB40u;
        // 0x33fb44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB48u;
        goto label_33fb48;
    }
    ctx->pc = 0x33FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FB48u);
        ctx->pc = 0x33FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB40u;
        // 0x33fb44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB40u, 0x33FB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FB48u;
label_33fb48:
    // 0x33fb48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33fb48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33fb4c:
    // 0x33fb4c: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33fb50:
    // 0x33fb50: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33fb54:
    // 0x33fb54: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33fb54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33fb58:
    // 0x33fb58: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33fb5c:
    // 0x33fb5c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fb60:
    // 0x33fb60: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33fb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33fb64:
    // 0x33fb64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33fb68:
    // 0x33fb68: 0x40f809  jalr        $v0
label_33fb6c:
    if (ctx->pc == 0x33FB6Cu) {
        ctx->pc = 0x33FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB68u;
        // 0x33fb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FB70u;
        goto label_33fb70;
    }
    ctx->pc = 0x33FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FB70u);
        ctx->pc = 0x33FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB68u;
        // 0x33fb6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB68u, 0x33FB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FB70u;
label_33fb70:
    // 0x33fb70: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33fb70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33fb74:
    // 0x33fb74: 0x27b50950  addiu       $s5, $sp, 0x950
    ctx->pc = 0x33fb74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
label_33fb78:
    // 0x33fb78: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33fb78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33fb7c:
    // 0x33fb7c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33fb7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33fb80:
    // 0x33fb80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33fb80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33fb84:
    // 0x33fb84: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33fb84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33fb88:
    // 0x33fb88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33fb88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33fb8c:
    // 0x33fb8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33fb8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33fb90:
    // 0x33fb90: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33fb94:
    // 0x33fb94: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33fb98:
    // 0x33fb98: 0x7fa20960  sq          $v0, 0x960($sp)
    ctx->pc = 0x33fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 2));
label_33fb9c:
    // 0x33fb9c: 0x8e500080  lw          $s0, 0x80($s2)
    ctx->pc = 0x33fb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_33fba0:
    // 0x33fba0: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_33fba4:
    if (ctx->pc == 0x33FBA4u) {
        ctx->pc = 0x33FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBA0u;
        // 0x33fba4: 0x8fa90a60  lw          $t1, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FBA8u;
        goto label_33fba8;
    }
    ctx->pc = 0x33FBA0u;
    {
        const bool branch_taken_0x33fba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBA0u;
        // 0x33fba4: 0x8fa90a60  lw          $t1, 0xA60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fba0) {
            ctx->pc = 0x33FC68u;
            goto label_33fc68;
        }
    }
    ctx->pc = 0x33FBA8u;
label_33fba8:
    // 0x33fba8: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33fbac:
    // 0x33fbac: 0x2534007c  addiu       $s4, $t1, 0x7C
    ctx->pc = 0x33fbacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 124));
label_33fbb0:
    // 0x33fbb0: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x33fbb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_33fbb4:
    // 0x33fbb4: 0x0  nop
    ctx->pc = 0x33fbb4u;
    // NOP
label_33fbb8:
    // 0x33fbb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_33fbbc:
    // 0x33fbbc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_33fbc0:
    if (ctx->pc == 0x33FBC0u) {
        ctx->pc = 0x33FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBBCu;
        // 0x33fbc0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FBC4u;
        goto label_33fbc4;
    }
    ctx->pc = 0x33FBBCu;
    {
        const bool branch_taken_0x33fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fbbc) {
            ctx->pc = 0x33FBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FBBCu;
            // 0x33fbc0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FC60u;
            goto label_33fc60;
        }
    }
    ctx->pc = 0x33FBC4u;
label_33fbc4:
    // 0x33fbc4: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33fbc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33fbc8:
    // 0x33fbc8: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33fbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33fbcc:
    // 0x33fbcc: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x33fbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33fbd0:
    // 0x33fbd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33fbd4:
    // 0x33fbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33fbd8:
    // 0x33fbd8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33fbdc:
    // 0x33fbdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33fbe0:
    // 0x33fbe0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_33fbe4:
    if (ctx->pc == 0x33FBE4u) {
        ctx->pc = 0x33FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBE0u;
        // 0x33fbe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FBE8u;
        goto label_33fbe8;
    }
    ctx->pc = 0x33FBE0u;
    {
        const bool branch_taken_0x33fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBE0u;
        // 0x33fbe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbe0) {
            ctx->pc = 0x33FC5Cu;
            goto label_33fc5c;
        }
    }
    ctx->pc = 0x33FBE8u;
label_33fbe8:
    // 0x33fbe8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33fbec:
    // 0x33fbec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33fbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33fbf0:
    // 0x33fbf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33fbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33fbf4:
    // 0x33fbf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33fbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fbf8:
    // 0x33fbf8: 0x40f809  jalr        $v0
label_33fbfc:
    if (ctx->pc == 0x33FBFCu) {
        ctx->pc = 0x33FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBF8u;
        // 0x33fbfc: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC00u;
        goto label_33fc00;
    }
    ctx->pc = 0x33FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FC00u);
        ctx->pc = 0x33FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBF8u;
        // 0x33fbfc: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FBF8u, 0x33FC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FC00u;
label_33fc00:
    // 0x33fc00: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_33fc04:
    if (ctx->pc == 0x33FC04u) {
        ctx->pc = 0x33FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC00u;
        // 0x33fc04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC08u;
        goto label_33fc08;
    }
    ctx->pc = 0x33FC00u;
    {
        const bool branch_taken_0x33fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC00u;
        // 0x33fc04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc00) {
            ctx->pc = 0x33FC5Cu;
            goto label_33fc5c;
        }
    }
    ctx->pc = 0x33FC08u;
label_33fc08:
    // 0x33fc08: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33fc0c:
    // 0x33fc0c: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x33fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_33fc10:
    // 0x33fc10: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x33fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_33fc14:
    // 0x33fc14: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_33fc18:
    // 0x33fc18: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x33fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fc1c:
    // 0x33fc1c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x33fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33fc20:
    // 0x33fc20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33fc24:
    // 0x33fc24: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x33fc24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_33fc28:
    // 0x33fc28: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x33fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_33fc2c:
    // 0x33fc2c: 0x40f809  jalr        $v0
label_33fc30:
    if (ctx->pc == 0x33FC30u) {
        ctx->pc = 0x33FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC2Cu;
        // 0x33fc30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC34u;
        goto label_33fc34;
    }
    ctx->pc = 0x33FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FC34u);
        ctx->pc = 0x33FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC2Cu;
        // 0x33fc30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FC2Cu, 0x33FC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FC34u;
label_33fc34:
    // 0x33fc34: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fc38:
    // 0x33fc38: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_33fc3c:
    if (ctx->pc == 0x33FC3Cu) {
        ctx->pc = 0x33FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC38u;
        // 0x33fc3c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC40u;
        goto label_33fc40;
    }
    ctx->pc = 0x33FC38u;
    {
        const bool branch_taken_0x33fc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC38u;
        // 0x33fc3c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc38) {
            ctx->pc = 0x33FC68u;
            goto label_33fc68;
        }
    }
    ctx->pc = 0x33FC40u;
label_33fc40:
    // 0x33fc40: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x33fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33fc44:
    // 0x33fc44: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x33fc44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_33fc48:
    // 0x33fc48: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x33fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_33fc4c:
    // 0x33fc4c: 0x60f809  jalr        $v1
label_33fc50:
    if (ctx->pc == 0x33FC50u) {
        ctx->pc = 0x33FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC4Cu;
        // 0x33fc50: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC54u;
        goto label_33fc54;
    }
    ctx->pc = 0x33FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FC54u);
        ctx->pc = 0x33FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC4Cu;
        // 0x33fc50: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FC4Cu, 0x33FC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FC54u;
label_33fc54:
    // 0x33fc54: 0x10000004  b           . + 4 + (0x4 << 2)
label_33fc58:
    if (ctx->pc == 0x33FC58u) {
        ctx->pc = 0x33FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC54u;
        // 0x33fc58: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC5Cu;
        goto label_33fc5c;
    }
    ctx->pc = 0x33FC54u;
    {
        const bool branch_taken_0x33fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC54u;
        // 0x33fc58: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc54) {
            ctx->pc = 0x33FC68u;
            goto label_33fc68;
        }
    }
    ctx->pc = 0x33FC5Cu;
label_33fc5c:
    // 0x33fc5c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33fc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33fc60:
    // 0x33fc60: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
label_33fc64:
    if (ctx->pc == 0x33FC64u) {
        ctx->pc = 0x33FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC60u;
        // 0x33fc64: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC68u;
        goto label_33fc68;
    }
    ctx->pc = 0x33FC60u;
    {
        const bool branch_taken_0x33fc60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fc60) {
            ctx->pc = 0x33FC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FC60u;
            // 0x33fc64: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fbb8;
        }
    }
    ctx->pc = 0x33FC68u;
label_33fc68:
    // 0x33fc68: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fc6c:
    // 0x33fc6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33fc70:
    // 0x33fc70: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33fc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33fc74:
    // 0x33fc74: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33fc78:
    // 0x33fc78: 0x60f809  jalr        $v1
label_33fc7c:
    if (ctx->pc == 0x33FC7Cu) {
        ctx->pc = 0x33FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC78u;
        // 0x33fc7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC80u;
        goto label_33fc80;
    }
    ctx->pc = 0x33FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FC80u);
        ctx->pc = 0x33FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC78u;
        // 0x33fc7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FC78u, 0x33FC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FC80u;
label_33fc80:
    // 0x33fc80: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33fc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33fc84:
    // 0x33fc84: 0x5220006e  beql        $s1, $zero, . + 4 + (0x6E << 2)
label_33fc88:
    if (ctx->pc == 0x33FC88u) {
        ctx->pc = 0x33FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC84u;
        // 0x33fc88: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC8Cu;
        goto label_33fc8c;
    }
    ctx->pc = 0x33FC84u;
    {
        const bool branch_taken_0x33fc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc84) {
            ctx->pc = 0x33FC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FC84u;
            // 0x33fc88: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FC8Cu;
label_33fc8c:
    // 0x33fc8c: 0x52e0ffa2  beql        $s7, $zero, . + 4 + (-0x5E << 2)
label_33fc90:
    if (ctx->pc == 0x33FC90u) {
        ctx->pc = 0x33FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC8Cu;
        // 0x33fc90: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC94u;
        goto label_33fc94;
    }
    ctx->pc = 0x33FC8Cu;
    {
        const bool branch_taken_0x33fc8c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc8c) {
            ctx->pc = 0x33FC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FC8Cu;
            // 0x33fc90: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fb18;
        }
    }
    ctx->pc = 0x33FC94u;
label_33fc94:
    // 0x33fc94: 0x1000006a  b           . + 4 + (0x6A << 2)
label_33fc98:
    if (ctx->pc == 0x33FC98u) {
        ctx->pc = 0x33FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC94u;
        // 0x33fc98: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FC9Cu;
        goto label_33fc9c;
    }
    ctx->pc = 0x33FC94u;
    {
        const bool branch_taken_0x33fc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC94u;
        // 0x33fc98: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc94) {
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FC9Cu;
label_33fc9c:
    // 0x33fc9c: 0x8e710080  lw          $s1, 0x80($s3)
    ctx->pc = 0x33fc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_33fca0:
    // 0x33fca0: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
label_33fca4:
    if (ctx->pc == 0x33FCA4u) {
        ctx->pc = 0x33FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCA0u;
        // 0x33fca4: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FCA8u;
        goto label_33fca8;
    }
    ctx->pc = 0x33FCA0u;
    {
        const bool branch_taken_0x33fca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCA0u;
        // 0x33fca4: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fca0) {
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FCA8u;
label_33fca8:
    // 0x33fca8: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33fca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33fcac:
    // 0x33fcac: 0x0  nop
    ctx->pc = 0x33fcacu;
    // NOP
label_33fcb0:
    // 0x33fcb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33fcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33fcb4:
    // 0x33fcb4: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_33fcb8:
    if (ctx->pc == 0x33FCB8u) {
        ctx->pc = 0x33FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCB4u;
        // 0x33fcb8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FCBCu;
        goto label_33fcbc;
    }
    ctx->pc = 0x33FCB4u;
    {
        const bool branch_taken_0x33fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fcb4) {
            ctx->pc = 0x33FCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FCB4u;
            // 0x33fcb8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE2Cu;
            goto label_33fe2c;
        }
    }
    ctx->pc = 0x33FCBCu;
label_33fcbc:
    // 0x33fcbc: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33fcbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33fcc0:
    // 0x33fcc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33fcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33fcc4:
    // 0x33fcc4: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_33fcc8:
    if (ctx->pc == 0x33FCC8u) {
        ctx->pc = 0x33FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCC4u;
        // 0x33fcc8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FCCCu;
        goto label_33fccc;
    }
    ctx->pc = 0x33FCC4u;
    {
        const bool branch_taken_0x33fcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fcc4) {
            ctx->pc = 0x33FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FCC4u;
            // 0x33fcc8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE2Cu;
            goto label_33fe2c;
        }
    }
    ctx->pc = 0x33FCCCu;
label_33fccc:
    // 0x33fccc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fcd0:
    // 0x33fcd0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x33fcd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_33fcd4:
    // 0x33fcd4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33fcd8:
    // 0x33fcd8: 0x40f809  jalr        $v0
label_33fcdc:
    if (ctx->pc == 0x33FCDCu) {
        ctx->pc = 0x33FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCD8u;
        // 0x33fcdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FCE0u;
        goto label_33fce0;
    }
    ctx->pc = 0x33FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FCE0u);
        ctx->pc = 0x33FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCD8u;
        // 0x33fcdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FCD8u, 0x33FCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FCE0u;
label_33fce0:
    // 0x33fce0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33fce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33fce4:
    // 0x33fce4: 0x27a50940  addiu       $a1, $sp, 0x940
    ctx->pc = 0x33fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_33fce8:
    // 0x33fce8: 0x7fa30950  sq          $v1, 0x950($sp)
    ctx->pc = 0x33fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 3));
label_33fcec:
    // 0x33fcec: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33fcecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_33fcf0:
    // 0x33fcf0: 0x7fa20940  sq          $v0, 0x940($sp)
    ctx->pc = 0x33fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 2));
label_33fcf4:
    // 0x33fcf4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fcf8:
    // 0x33fcf8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x33fcf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_33fcfc:
    // 0x33fcfc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33fd00:
    // 0x33fd00: 0x40f809  jalr        $v0
label_33fd04:
    if (ctx->pc == 0x33FD04u) {
        ctx->pc = 0x33FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD00u;
        // 0x33fd04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FD08u;
        goto label_33fd08;
    }
    ctx->pc = 0x33FD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FD08u);
        ctx->pc = 0x33FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD00u;
        // 0x33fd04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FD00u, 0x33FD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FD08u;
label_33fd08:
    // 0x33fd08: 0x7ba30950  lq          $v1, 0x950($sp)
    ctx->pc = 0x33fd08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_33fd0c:
    // 0x33fd0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33fd10:
    // 0x33fd10: 0x7ba20940  lq          $v0, 0x940($sp)
    ctx->pc = 0x33fd10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_33fd14:
    // 0x33fd14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33fd18:
    // 0x33fd18: 0x7fa30930  sq          $v1, 0x930($sp)
    ctx->pc = 0x33fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 3));
label_33fd1c:
    // 0x33fd1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33fd1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33fd20:
    // 0x33fd20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33fd20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33fd24:
    // 0x33fd24: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33fd24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33fd28:
    // 0x33fd28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33fd28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33fd2c:
    // 0x33fd2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33fd2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33fd30:
    // 0x33fd30: 0x7fa20930  sq          $v0, 0x930($sp)
    ctx->pc = 0x33fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 2));
label_33fd34:
    // 0x33fd34: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x33fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_33fd38:
    // 0x33fd38: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x33fd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33fd3c:
    // 0x33fd3c: 0x7fa20960  sq          $v0, 0x960($sp)
    ctx->pc = 0x33fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 2));
label_33fd40:
    // 0x33fd40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33fd44:
    // 0x33fd44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33fd44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33fd48:
    // 0x33fd48: 0x40f809  jalr        $v0
label_33fd4c:
    if (ctx->pc == 0x33FD4Cu) {
        ctx->pc = 0x33FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD48u;
        // 0x33fd4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FD50u;
        goto label_33fd50;
    }
    ctx->pc = 0x33FD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FD50u);
        ctx->pc = 0x33FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD48u;
        // 0x33fd4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FD48u, 0x33FD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FD50u;
label_33fd50:
    // 0x33fd50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33fd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33fd54:
    // 0x33fd54: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_33fd58:
    if (ctx->pc == 0x33FD58u) {
        ctx->pc = 0x33FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD54u;
        // 0x33fd58: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FD5Cu;
        goto label_33fd5c;
    }
    ctx->pc = 0x33FD54u;
    {
        const bool branch_taken_0x33fd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD54u;
        // 0x33fd58: 0x27b50950  addiu       $s5, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd54) {
            ctx->pc = 0x33FE10u;
            goto label_33fe10;
        }
    }
    ctx->pc = 0x33FD5Cu;
label_33fd5c:
    // 0x33fd5c: 0x8faa0a60  lw          $t2, 0xA60($sp)
    ctx->pc = 0x33fd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2656)));
label_33fd60:
    // 0x33fd60: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x33fd60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33fd64:
    // 0x33fd64: 0x2554007c  addiu       $s4, $t2, 0x7C
    ctx->pc = 0x33fd64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 124));
label_33fd68:
    // 0x33fd68: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x33fd68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33fd6c:
    // 0x33fd6c: 0x0  nop
    ctx->pc = 0x33fd6cu;
    // NOP
label_33fd70:
    // 0x33fd70: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33fd70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33fd74:
    // 0x33fd74: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x33fd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33fd78:
    // 0x33fd78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33fd7c:
    // 0x33fd7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33fd80:
    // 0x33fd80: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33fd84:
    // 0x33fd84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33fd88:
    // 0x33fd88: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_33fd8c:
    if (ctx->pc == 0x33FD8Cu) {
        ctx->pc = 0x33FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD88u;
        // 0x33fd8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FD90u;
        goto label_33fd90;
    }
    ctx->pc = 0x33FD88u;
    {
        const bool branch_taken_0x33fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD88u;
        // 0x33fd8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd88) {
            ctx->pc = 0x33FE04u;
            goto label_33fe04;
        }
    }
    ctx->pc = 0x33FD90u;
label_33fd90:
    // 0x33fd90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33fd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33fd94:
    // 0x33fd94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33fd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33fd98:
    // 0x33fd98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33fd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33fd9c:
    // 0x33fd9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33fd9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33fda0:
    // 0x33fda0: 0x40f809  jalr        $v0
label_33fda4:
    if (ctx->pc == 0x33FDA4u) {
        ctx->pc = 0x33FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDA0u;
        // 0x33fda4: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDA8u;
        goto label_33fda8;
    }
    ctx->pc = 0x33FDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FDA8u);
        ctx->pc = 0x33FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDA0u;
        // 0x33fda4: 0x27a90930  addiu       $t1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FDA0u, 0x33FDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FDA8u;
label_33fda8:
    // 0x33fda8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_33fdac:
    if (ctx->pc == 0x33FDACu) {
        ctx->pc = 0x33FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDA8u;
        // 0x33fdac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDB0u;
        goto label_33fdb0;
    }
    ctx->pc = 0x33FDA8u;
    {
        const bool branch_taken_0x33fda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDA8u;
        // 0x33fdac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fda8) {
            ctx->pc = 0x33FE04u;
            goto label_33fe04;
        }
    }
    ctx->pc = 0x33FDB0u;
label_33fdb0:
    // 0x33fdb0: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33fdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33fdb4:
    // 0x33fdb4: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x33fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_33fdb8:
    // 0x33fdb8: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x33fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_33fdbc:
    // 0x33fdbc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_33fdc0:
    // 0x33fdc0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fdc4:
    // 0x33fdc4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x33fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33fdc8:
    // 0x33fdc8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33fdcc:
    // 0x33fdcc: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x33fdccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_33fdd0:
    // 0x33fdd0: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x33fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_33fdd4:
    // 0x33fdd4: 0x40f809  jalr        $v0
label_33fdd8:
    if (ctx->pc == 0x33FDD8u) {
        ctx->pc = 0x33FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDD4u;
        // 0x33fdd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDDCu;
        goto label_33fddc;
    }
    ctx->pc = 0x33FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33FDDCu);
        ctx->pc = 0x33FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDD4u;
        // 0x33fdd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FDD4u, 0x33FDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FDDCu;
label_33fddc:
    // 0x33fddc: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33fde0:
    // 0x33fde0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_33fde4:
    if (ctx->pc == 0x33FDE4u) {
        ctx->pc = 0x33FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDE0u;
        // 0x33fde4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDE8u;
        goto label_33fde8;
    }
    ctx->pc = 0x33FDE0u;
    {
        const bool branch_taken_0x33fde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDE0u;
        // 0x33fde4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fde0) {
            ctx->pc = 0x33FE10u;
            goto label_33fe10;
        }
    }
    ctx->pc = 0x33FDE8u;
label_33fde8:
    // 0x33fde8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x33fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33fdec:
    // 0x33fdec: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x33fdecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_33fdf0:
    // 0x33fdf0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x33fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_33fdf4:
    // 0x33fdf4: 0x60f809  jalr        $v1
label_33fdf8:
    if (ctx->pc == 0x33FDF8u) {
        ctx->pc = 0x33FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDF4u;
        // 0x33fdf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FDFCu;
        goto label_33fdfc;
    }
    ctx->pc = 0x33FDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FDFCu);
        ctx->pc = 0x33FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDF4u;
        // 0x33fdf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FDF4u, 0x33FDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FDFCu;
label_33fdfc:
    // 0x33fdfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_33fe00:
    if (ctx->pc == 0x33FE00u) {
        ctx->pc = 0x33FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDFCu;
        // 0x33fe00: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE04u;
        goto label_33fe04;
    }
    ctx->pc = 0x33FDFCu;
    {
        const bool branch_taken_0x33fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDFCu;
        // 0x33fe00: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdfc) {
            ctx->pc = 0x33FE10u;
            goto label_33fe10;
        }
    }
    ctx->pc = 0x33FE04u;
label_33fe04:
    // 0x33fe04: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33fe04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33fe08:
    // 0x33fe08: 0x5600ffd9  bnel        $s0, $zero, . + 4 + (-0x27 << 2)
label_33fe0c:
    if (ctx->pc == 0x33FE0Cu) {
        ctx->pc = 0x33FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE08u;
        // 0x33fe0c: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE10u;
        goto label_33fe10;
    }
    ctx->pc = 0x33FE08u;
    {
        const bool branch_taken_0x33fe08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fe08) {
            ctx->pc = 0x33FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FE08u;
            // 0x33fe0c: 0x92230030  lbu         $v1, 0x30($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fd70;
        }
    }
    ctx->pc = 0x33FE10u;
label_33fe10:
    // 0x33fe10: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33fe14:
    // 0x33fe14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33fe14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33fe18:
    // 0x33fe18: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x33fe18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_33fe1c:
    // 0x33fe1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33fe20:
    // 0x33fe20: 0x60f809  jalr        $v1
label_33fe24:
    if (ctx->pc == 0x33FE24u) {
        ctx->pc = 0x33FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE20u;
        // 0x33fe24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE28u;
        goto label_33fe28;
    }
    ctx->pc = 0x33FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33FE28u);
        ctx->pc = 0x33FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE20u;
        // 0x33fe24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FE20u, 0x33FE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33FE28u;
label_33fe28:
    // 0x33fe28: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33fe2c:
    // 0x33fe2c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_33fe30:
    if (ctx->pc == 0x33FE30u) {
        ctx->pc = 0x33FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE2Cu;
        // 0x33fe30: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE34u;
        goto label_33fe34;
    }
    ctx->pc = 0x33FE2Cu;
    {
        const bool branch_taken_0x33fe2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe2c) {
            ctx->pc = 0x33FE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FE2Cu;
            // 0x33fe30: 0x8fb00a70  lw          $s0, 0xA70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FE40u;
            goto label_33fe40;
        }
    }
    ctx->pc = 0x33FE34u;
label_33fe34:
    // 0x33fe34: 0x52e0ff9e  beql        $s7, $zero, . + 4 + (-0x62 << 2)
label_33fe38:
    if (ctx->pc == 0x33FE38u) {
        ctx->pc = 0x33FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE34u;
        // 0x33fe38: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE3Cu;
        goto label_33fe3c;
    }
    ctx->pc = 0x33FE34u;
    {
        const bool branch_taken_0x33fe34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe34) {
            ctx->pc = 0x33FE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FE34u;
            // 0x33fe38: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fcb0;
        }
    }
    ctx->pc = 0x33FE3Cu;
label_33fe3c:
    // 0x33fe3c: 0x8fb00a70  lw          $s0, 0xA70($sp)
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2672)));
label_33fe40:
    // 0x33fe40: 0x8fab0a68  lw          $t3, 0xA68($sp)
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2664)));
label_33fe44:
    // 0x33fe44: 0x20b102b  sltu        $v0, $s0, $t3
    ctx->pc = 0x33fe44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_33fe48:
    // 0x33fe48: 0x1440fdaf  bnez        $v0, . + 4 + (-0x251 << 2)
label_33fe4c:
    if (ctx->pc == 0x33FE4Cu) {
        ctx->pc = 0x33FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE48u;
        // 0x33fe4c: 0x26090001  addiu       $t1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE50u;
        goto label_33fe50;
    }
    ctx->pc = 0x33FE48u;
    {
        const bool branch_taken_0x33fe48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE48u;
        // 0x33fe4c: 0x26090001  addiu       $t1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe48) {
            ctx->pc = 0x33F508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f508;
        }
    }
    ctx->pc = 0x33FE50u;
label_33fe50:
    // 0x33fe50: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x33fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_33fe54:
    // 0x33fe54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_33fe58:
    if (ctx->pc == 0x33FE58u) {
        ctx->pc = 0x33FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE54u;
        // 0x33fe58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE5Cu;
        goto label_33fe5c;
    }
    ctx->pc = 0x33FE54u;
    {
        const bool branch_taken_0x33fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE54u;
        // 0x33fe58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe54) {
            ctx->pc = 0x33FE7Cu;
            goto label_33fe7c;
        }
    }
    ctx->pc = 0x33FE5Cu;
label_33fe5c:
    // 0x33fe5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33fe60:
    if (ctx->pc == 0x33FE60u) {
        ctx->pc = 0x33FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE5Cu;
        // 0x33fe60: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE64u;
        goto label_33fe64;
    }
    ctx->pc = 0x33FE5Cu;
    {
        const bool branch_taken_0x33fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE5Cu;
        // 0x33fe60: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe5c) {
            ctx->pc = 0x33FE6Cu;
            goto label_33fe6c;
        }
    }
    ctx->pc = 0x33FE64u;
label_33fe64:
    // 0x33fe64: 0xc0d085a  jal         func_342168
label_33fe68:
    if (ctx->pc == 0x33FE68u) {
        ctx->pc = 0x33FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE64u;
        // 0x33fe68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FE6Cu;
        goto label_33fe6c;
    }
    ctx->pc = 0x33FE64u;
    SET_GPR_U32(ctx, 31, 0x33FE6Cu);
    ctx->pc = 0x33FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE64u;
    // 0x33fe68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342168u, 0x33FE64u, 0x33FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE6Cu;
label_33fe6c:
    // 0x33fe6c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_33fe70:
    // 0x33fe70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33fe74:
    // 0x33fe74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33fe78:
    // 0x33fe78: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x33fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
label_33fe7c:
    // 0x33fe7c: 0x7bb00b10  lq          $s0, 0xB10($sp)
    ctx->pc = 0x33fe7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
label_33fe80:
    // 0x33fe80: 0x7bb10b00  lq          $s1, 0xB00($sp)
    ctx->pc = 0x33fe80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2816)));
label_33fe84:
    // 0x33fe84: 0x7bb20af0  lq          $s2, 0xAF0($sp)
    ctx->pc = 0x33fe84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
label_33fe88:
    // 0x33fe88: 0x7bb30ae0  lq          $s3, 0xAE0($sp)
    ctx->pc = 0x33fe88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2784)));
label_33fe8c:
    // 0x33fe8c: 0x7bb40ad0  lq          $s4, 0xAD0($sp)
    ctx->pc = 0x33fe8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2768)));
label_33fe90:
    // 0x33fe90: 0x7bb50ac0  lq          $s5, 0xAC0($sp)
    ctx->pc = 0x33fe90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2752)));
label_33fe94:
    // 0x33fe94: 0x7bb60ab0  lq          $s6, 0xAB0($sp)
    ctx->pc = 0x33fe94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2736)));
label_33fe98:
    // 0x33fe98: 0x7bb70aa0  lq          $s7, 0xAA0($sp)
    ctx->pc = 0x33fe98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2720)));
label_33fe9c:
    // 0x33fe9c: 0x7bbe0a90  lq          $fp, 0xA90($sp)
    ctx->pc = 0x33fe9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2704)));
label_33fea0:
    // 0x33fea0: 0xdfbf0a80  ld          $ra, 0xA80($sp)
    ctx->pc = 0x33fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2688)));
label_33fea4:
    // 0x33fea4: 0x3e00008  jr          $ra
label_33fea8:
    if (ctx->pc == 0x33FEA8u) {
        ctx->pc = 0x33FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEA4u;
        // 0x33fea8: 0x27bd0b20  addiu       $sp, $sp, 0xB20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33FEACu;
        goto label_33feac;
    }
    ctx->pc = 0x33FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEA4u;
        // 0x33fea8: 0x27bd0b20  addiu       $sp, $sp, 0xB20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FEACu;
label_33feac:
    // 0x33feac: 0x0  nop
    ctx->pc = 0x33feacu;
    // NOP
    ctx->pc = 0x33feb0u;
}
