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

// Function: sub_001BE198
// Address: 0x1be198 - 0x1be848
void sub_001BE198_0x1be198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE198_0x1be198");
#endif

    switch (ctx->pc) {
        case 0x1be198u: goto label_1be198;
        case 0x1be19cu: goto label_1be19c;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1a8u: goto label_1be1a8;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1b0u: goto label_1be1b0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1b8u: goto label_1be1b8;
        case 0x1be1bcu: goto label_1be1bc;
        case 0x1be1c0u: goto label_1be1c0;
        case 0x1be1c4u: goto label_1be1c4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1ccu: goto label_1be1cc;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be1f8u: goto label_1be1f8;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be200u: goto label_1be200;
        case 0x1be204u: goto label_1be204;
        case 0x1be208u: goto label_1be208;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be210u: goto label_1be210;
        case 0x1be214u: goto label_1be214;
        case 0x1be218u: goto label_1be218;
        case 0x1be21cu: goto label_1be21c;
        case 0x1be220u: goto label_1be220;
        case 0x1be224u: goto label_1be224;
        case 0x1be228u: goto label_1be228;
        case 0x1be22cu: goto label_1be22c;
        case 0x1be230u: goto label_1be230;
        case 0x1be234u: goto label_1be234;
        case 0x1be238u: goto label_1be238;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be240u: goto label_1be240;
        case 0x1be244u: goto label_1be244;
        case 0x1be248u: goto label_1be248;
        case 0x1be24cu: goto label_1be24c;
        case 0x1be250u: goto label_1be250;
        case 0x1be254u: goto label_1be254;
        case 0x1be258u: goto label_1be258;
        case 0x1be25cu: goto label_1be25c;
        case 0x1be260u: goto label_1be260;
        case 0x1be264u: goto label_1be264;
        case 0x1be268u: goto label_1be268;
        case 0x1be26cu: goto label_1be26c;
        case 0x1be270u: goto label_1be270;
        case 0x1be274u: goto label_1be274;
        case 0x1be278u: goto label_1be278;
        case 0x1be27cu: goto label_1be27c;
        case 0x1be280u: goto label_1be280;
        case 0x1be284u: goto label_1be284;
        case 0x1be288u: goto label_1be288;
        case 0x1be28cu: goto label_1be28c;
        case 0x1be290u: goto label_1be290;
        case 0x1be294u: goto label_1be294;
        case 0x1be298u: goto label_1be298;
        case 0x1be29cu: goto label_1be29c;
        case 0x1be2a0u: goto label_1be2a0;
        case 0x1be2a4u: goto label_1be2a4;
        case 0x1be2a8u: goto label_1be2a8;
        case 0x1be2acu: goto label_1be2ac;
        case 0x1be2b0u: goto label_1be2b0;
        case 0x1be2b4u: goto label_1be2b4;
        case 0x1be2b8u: goto label_1be2b8;
        case 0x1be2bcu: goto label_1be2bc;
        case 0x1be2c0u: goto label_1be2c0;
        case 0x1be2c4u: goto label_1be2c4;
        case 0x1be2c8u: goto label_1be2c8;
        case 0x1be2ccu: goto label_1be2cc;
        case 0x1be2d0u: goto label_1be2d0;
        case 0x1be2d4u: goto label_1be2d4;
        case 0x1be2d8u: goto label_1be2d8;
        case 0x1be2dcu: goto label_1be2dc;
        case 0x1be2e0u: goto label_1be2e0;
        case 0x1be2e4u: goto label_1be2e4;
        case 0x1be2e8u: goto label_1be2e8;
        case 0x1be2ecu: goto label_1be2ec;
        case 0x1be2f0u: goto label_1be2f0;
        case 0x1be2f4u: goto label_1be2f4;
        case 0x1be2f8u: goto label_1be2f8;
        case 0x1be2fcu: goto label_1be2fc;
        case 0x1be300u: goto label_1be300;
        case 0x1be304u: goto label_1be304;
        case 0x1be308u: goto label_1be308;
        case 0x1be30cu: goto label_1be30c;
        case 0x1be310u: goto label_1be310;
        case 0x1be314u: goto label_1be314;
        case 0x1be318u: goto label_1be318;
        case 0x1be31cu: goto label_1be31c;
        case 0x1be320u: goto label_1be320;
        case 0x1be324u: goto label_1be324;
        case 0x1be328u: goto label_1be328;
        case 0x1be32cu: goto label_1be32c;
        case 0x1be330u: goto label_1be330;
        case 0x1be334u: goto label_1be334;
        case 0x1be338u: goto label_1be338;
        case 0x1be33cu: goto label_1be33c;
        case 0x1be340u: goto label_1be340;
        case 0x1be344u: goto label_1be344;
        case 0x1be348u: goto label_1be348;
        case 0x1be34cu: goto label_1be34c;
        case 0x1be350u: goto label_1be350;
        case 0x1be354u: goto label_1be354;
        case 0x1be358u: goto label_1be358;
        case 0x1be35cu: goto label_1be35c;
        case 0x1be360u: goto label_1be360;
        case 0x1be364u: goto label_1be364;
        case 0x1be368u: goto label_1be368;
        case 0x1be36cu: goto label_1be36c;
        case 0x1be370u: goto label_1be370;
        case 0x1be374u: goto label_1be374;
        case 0x1be378u: goto label_1be378;
        case 0x1be37cu: goto label_1be37c;
        case 0x1be380u: goto label_1be380;
        case 0x1be384u: goto label_1be384;
        case 0x1be388u: goto label_1be388;
        case 0x1be38cu: goto label_1be38c;
        case 0x1be390u: goto label_1be390;
        case 0x1be394u: goto label_1be394;
        case 0x1be398u: goto label_1be398;
        case 0x1be39cu: goto label_1be39c;
        case 0x1be3a0u: goto label_1be3a0;
        case 0x1be3a4u: goto label_1be3a4;
        case 0x1be3a8u: goto label_1be3a8;
        case 0x1be3acu: goto label_1be3ac;
        case 0x1be3b0u: goto label_1be3b0;
        case 0x1be3b4u: goto label_1be3b4;
        case 0x1be3b8u: goto label_1be3b8;
        case 0x1be3bcu: goto label_1be3bc;
        case 0x1be3c0u: goto label_1be3c0;
        case 0x1be3c4u: goto label_1be3c4;
        case 0x1be3c8u: goto label_1be3c8;
        case 0x1be3ccu: goto label_1be3cc;
        case 0x1be3d0u: goto label_1be3d0;
        case 0x1be3d4u: goto label_1be3d4;
        case 0x1be3d8u: goto label_1be3d8;
        case 0x1be3dcu: goto label_1be3dc;
        case 0x1be3e0u: goto label_1be3e0;
        case 0x1be3e4u: goto label_1be3e4;
        case 0x1be3e8u: goto label_1be3e8;
        case 0x1be3ecu: goto label_1be3ec;
        case 0x1be3f0u: goto label_1be3f0;
        case 0x1be3f4u: goto label_1be3f4;
        case 0x1be3f8u: goto label_1be3f8;
        case 0x1be3fcu: goto label_1be3fc;
        case 0x1be400u: goto label_1be400;
        case 0x1be404u: goto label_1be404;
        case 0x1be408u: goto label_1be408;
        case 0x1be40cu: goto label_1be40c;
        case 0x1be410u: goto label_1be410;
        case 0x1be414u: goto label_1be414;
        case 0x1be418u: goto label_1be418;
        case 0x1be41cu: goto label_1be41c;
        case 0x1be420u: goto label_1be420;
        case 0x1be424u: goto label_1be424;
        case 0x1be428u: goto label_1be428;
        case 0x1be42cu: goto label_1be42c;
        case 0x1be430u: goto label_1be430;
        case 0x1be434u: goto label_1be434;
        case 0x1be438u: goto label_1be438;
        case 0x1be43cu: goto label_1be43c;
        case 0x1be440u: goto label_1be440;
        case 0x1be444u: goto label_1be444;
        case 0x1be448u: goto label_1be448;
        case 0x1be44cu: goto label_1be44c;
        case 0x1be450u: goto label_1be450;
        case 0x1be454u: goto label_1be454;
        case 0x1be458u: goto label_1be458;
        case 0x1be45cu: goto label_1be45c;
        case 0x1be460u: goto label_1be460;
        case 0x1be464u: goto label_1be464;
        case 0x1be468u: goto label_1be468;
        case 0x1be46cu: goto label_1be46c;
        case 0x1be470u: goto label_1be470;
        case 0x1be474u: goto label_1be474;
        case 0x1be478u: goto label_1be478;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be480u: goto label_1be480;
        case 0x1be484u: goto label_1be484;
        case 0x1be488u: goto label_1be488;
        case 0x1be48cu: goto label_1be48c;
        case 0x1be490u: goto label_1be490;
        case 0x1be494u: goto label_1be494;
        case 0x1be498u: goto label_1be498;
        case 0x1be49cu: goto label_1be49c;
        case 0x1be4a0u: goto label_1be4a0;
        case 0x1be4a4u: goto label_1be4a4;
        case 0x1be4a8u: goto label_1be4a8;
        case 0x1be4acu: goto label_1be4ac;
        case 0x1be4b0u: goto label_1be4b0;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be4b8u: goto label_1be4b8;
        case 0x1be4bcu: goto label_1be4bc;
        case 0x1be4c0u: goto label_1be4c0;
        case 0x1be4c4u: goto label_1be4c4;
        case 0x1be4c8u: goto label_1be4c8;
        case 0x1be4ccu: goto label_1be4cc;
        case 0x1be4d0u: goto label_1be4d0;
        case 0x1be4d4u: goto label_1be4d4;
        case 0x1be4d8u: goto label_1be4d8;
        case 0x1be4dcu: goto label_1be4dc;
        case 0x1be4e0u: goto label_1be4e0;
        case 0x1be4e4u: goto label_1be4e4;
        case 0x1be4e8u: goto label_1be4e8;
        case 0x1be4ecu: goto label_1be4ec;
        case 0x1be4f0u: goto label_1be4f0;
        case 0x1be4f4u: goto label_1be4f4;
        case 0x1be4f8u: goto label_1be4f8;
        case 0x1be4fcu: goto label_1be4fc;
        case 0x1be500u: goto label_1be500;
        case 0x1be504u: goto label_1be504;
        case 0x1be508u: goto label_1be508;
        case 0x1be50cu: goto label_1be50c;
        case 0x1be510u: goto label_1be510;
        case 0x1be514u: goto label_1be514;
        case 0x1be518u: goto label_1be518;
        case 0x1be51cu: goto label_1be51c;
        case 0x1be520u: goto label_1be520;
        case 0x1be524u: goto label_1be524;
        case 0x1be528u: goto label_1be528;
        case 0x1be52cu: goto label_1be52c;
        case 0x1be530u: goto label_1be530;
        case 0x1be534u: goto label_1be534;
        case 0x1be538u: goto label_1be538;
        case 0x1be53cu: goto label_1be53c;
        case 0x1be540u: goto label_1be540;
        case 0x1be544u: goto label_1be544;
        case 0x1be548u: goto label_1be548;
        case 0x1be54cu: goto label_1be54c;
        case 0x1be550u: goto label_1be550;
        case 0x1be554u: goto label_1be554;
        case 0x1be558u: goto label_1be558;
        case 0x1be55cu: goto label_1be55c;
        case 0x1be560u: goto label_1be560;
        case 0x1be564u: goto label_1be564;
        case 0x1be568u: goto label_1be568;
        case 0x1be56cu: goto label_1be56c;
        case 0x1be570u: goto label_1be570;
        case 0x1be574u: goto label_1be574;
        case 0x1be578u: goto label_1be578;
        case 0x1be57cu: goto label_1be57c;
        case 0x1be580u: goto label_1be580;
        case 0x1be584u: goto label_1be584;
        case 0x1be588u: goto label_1be588;
        case 0x1be58cu: goto label_1be58c;
        case 0x1be590u: goto label_1be590;
        case 0x1be594u: goto label_1be594;
        case 0x1be598u: goto label_1be598;
        case 0x1be59cu: goto label_1be59c;
        case 0x1be5a0u: goto label_1be5a0;
        case 0x1be5a4u: goto label_1be5a4;
        case 0x1be5a8u: goto label_1be5a8;
        case 0x1be5acu: goto label_1be5ac;
        case 0x1be5b0u: goto label_1be5b0;
        case 0x1be5b4u: goto label_1be5b4;
        case 0x1be5b8u: goto label_1be5b8;
        case 0x1be5bcu: goto label_1be5bc;
        case 0x1be5c0u: goto label_1be5c0;
        case 0x1be5c4u: goto label_1be5c4;
        case 0x1be5c8u: goto label_1be5c8;
        case 0x1be5ccu: goto label_1be5cc;
        case 0x1be5d0u: goto label_1be5d0;
        case 0x1be5d4u: goto label_1be5d4;
        case 0x1be5d8u: goto label_1be5d8;
        case 0x1be5dcu: goto label_1be5dc;
        case 0x1be5e0u: goto label_1be5e0;
        case 0x1be5e4u: goto label_1be5e4;
        case 0x1be5e8u: goto label_1be5e8;
        case 0x1be5ecu: goto label_1be5ec;
        case 0x1be5f0u: goto label_1be5f0;
        case 0x1be5f4u: goto label_1be5f4;
        case 0x1be5f8u: goto label_1be5f8;
        case 0x1be5fcu: goto label_1be5fc;
        case 0x1be600u: goto label_1be600;
        case 0x1be604u: goto label_1be604;
        case 0x1be608u: goto label_1be608;
        case 0x1be60cu: goto label_1be60c;
        case 0x1be610u: goto label_1be610;
        case 0x1be614u: goto label_1be614;
        case 0x1be618u: goto label_1be618;
        case 0x1be61cu: goto label_1be61c;
        case 0x1be620u: goto label_1be620;
        case 0x1be624u: goto label_1be624;
        case 0x1be628u: goto label_1be628;
        case 0x1be62cu: goto label_1be62c;
        case 0x1be630u: goto label_1be630;
        case 0x1be634u: goto label_1be634;
        case 0x1be638u: goto label_1be638;
        case 0x1be63cu: goto label_1be63c;
        case 0x1be640u: goto label_1be640;
        case 0x1be644u: goto label_1be644;
        case 0x1be648u: goto label_1be648;
        case 0x1be64cu: goto label_1be64c;
        case 0x1be650u: goto label_1be650;
        case 0x1be654u: goto label_1be654;
        case 0x1be658u: goto label_1be658;
        case 0x1be65cu: goto label_1be65c;
        case 0x1be660u: goto label_1be660;
        case 0x1be664u: goto label_1be664;
        case 0x1be668u: goto label_1be668;
        case 0x1be66cu: goto label_1be66c;
        case 0x1be670u: goto label_1be670;
        case 0x1be674u: goto label_1be674;
        case 0x1be678u: goto label_1be678;
        case 0x1be67cu: goto label_1be67c;
        case 0x1be680u: goto label_1be680;
        case 0x1be684u: goto label_1be684;
        case 0x1be688u: goto label_1be688;
        case 0x1be68cu: goto label_1be68c;
        case 0x1be690u: goto label_1be690;
        case 0x1be694u: goto label_1be694;
        case 0x1be698u: goto label_1be698;
        case 0x1be69cu: goto label_1be69c;
        case 0x1be6a0u: goto label_1be6a0;
        case 0x1be6a4u: goto label_1be6a4;
        case 0x1be6a8u: goto label_1be6a8;
        case 0x1be6acu: goto label_1be6ac;
        case 0x1be6b0u: goto label_1be6b0;
        case 0x1be6b4u: goto label_1be6b4;
        case 0x1be6b8u: goto label_1be6b8;
        case 0x1be6bcu: goto label_1be6bc;
        case 0x1be6c0u: goto label_1be6c0;
        case 0x1be6c4u: goto label_1be6c4;
        case 0x1be6c8u: goto label_1be6c8;
        case 0x1be6ccu: goto label_1be6cc;
        case 0x1be6d0u: goto label_1be6d0;
        case 0x1be6d4u: goto label_1be6d4;
        case 0x1be6d8u: goto label_1be6d8;
        case 0x1be6dcu: goto label_1be6dc;
        case 0x1be6e0u: goto label_1be6e0;
        case 0x1be6e4u: goto label_1be6e4;
        case 0x1be6e8u: goto label_1be6e8;
        case 0x1be6ecu: goto label_1be6ec;
        case 0x1be6f0u: goto label_1be6f0;
        case 0x1be6f4u: goto label_1be6f4;
        case 0x1be6f8u: goto label_1be6f8;
        case 0x1be6fcu: goto label_1be6fc;
        case 0x1be700u: goto label_1be700;
        case 0x1be704u: goto label_1be704;
        case 0x1be708u: goto label_1be708;
        case 0x1be70cu: goto label_1be70c;
        case 0x1be710u: goto label_1be710;
        case 0x1be714u: goto label_1be714;
        case 0x1be718u: goto label_1be718;
        case 0x1be71cu: goto label_1be71c;
        case 0x1be720u: goto label_1be720;
        case 0x1be724u: goto label_1be724;
        case 0x1be728u: goto label_1be728;
        case 0x1be72cu: goto label_1be72c;
        case 0x1be730u: goto label_1be730;
        case 0x1be734u: goto label_1be734;
        case 0x1be738u: goto label_1be738;
        case 0x1be73cu: goto label_1be73c;
        case 0x1be740u: goto label_1be740;
        case 0x1be744u: goto label_1be744;
        case 0x1be748u: goto label_1be748;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be750u: goto label_1be750;
        case 0x1be754u: goto label_1be754;
        case 0x1be758u: goto label_1be758;
        case 0x1be75cu: goto label_1be75c;
        case 0x1be760u: goto label_1be760;
        case 0x1be764u: goto label_1be764;
        case 0x1be768u: goto label_1be768;
        case 0x1be76cu: goto label_1be76c;
        case 0x1be770u: goto label_1be770;
        case 0x1be774u: goto label_1be774;
        case 0x1be778u: goto label_1be778;
        case 0x1be77cu: goto label_1be77c;
        case 0x1be780u: goto label_1be780;
        case 0x1be784u: goto label_1be784;
        case 0x1be788u: goto label_1be788;
        case 0x1be78cu: goto label_1be78c;
        case 0x1be790u: goto label_1be790;
        case 0x1be794u: goto label_1be794;
        case 0x1be798u: goto label_1be798;
        case 0x1be79cu: goto label_1be79c;
        case 0x1be7a0u: goto label_1be7a0;
        case 0x1be7a4u: goto label_1be7a4;
        case 0x1be7a8u: goto label_1be7a8;
        case 0x1be7acu: goto label_1be7ac;
        case 0x1be7b0u: goto label_1be7b0;
        case 0x1be7b4u: goto label_1be7b4;
        case 0x1be7b8u: goto label_1be7b8;
        case 0x1be7bcu: goto label_1be7bc;
        case 0x1be7c0u: goto label_1be7c0;
        case 0x1be7c4u: goto label_1be7c4;
        case 0x1be7c8u: goto label_1be7c8;
        case 0x1be7ccu: goto label_1be7cc;
        case 0x1be7d0u: goto label_1be7d0;
        case 0x1be7d4u: goto label_1be7d4;
        case 0x1be7d8u: goto label_1be7d8;
        case 0x1be7dcu: goto label_1be7dc;
        case 0x1be7e0u: goto label_1be7e0;
        case 0x1be7e4u: goto label_1be7e4;
        case 0x1be7e8u: goto label_1be7e8;
        case 0x1be7ecu: goto label_1be7ec;
        case 0x1be7f0u: goto label_1be7f0;
        case 0x1be7f4u: goto label_1be7f4;
        case 0x1be7f8u: goto label_1be7f8;
        case 0x1be7fcu: goto label_1be7fc;
        case 0x1be800u: goto label_1be800;
        case 0x1be804u: goto label_1be804;
        case 0x1be808u: goto label_1be808;
        case 0x1be80cu: goto label_1be80c;
        case 0x1be810u: goto label_1be810;
        case 0x1be814u: goto label_1be814;
        case 0x1be818u: goto label_1be818;
        case 0x1be81cu: goto label_1be81c;
        case 0x1be820u: goto label_1be820;
        case 0x1be824u: goto label_1be824;
        case 0x1be828u: goto label_1be828;
        case 0x1be82cu: goto label_1be82c;
        case 0x1be830u: goto label_1be830;
        case 0x1be834u: goto label_1be834;
        case 0x1be838u: goto label_1be838;
        case 0x1be83cu: goto label_1be83c;
        case 0x1be840u: goto label_1be840;
        case 0x1be844u: goto label_1be844;
        default: break;
    }

    ctx->pc = 0x1be198u;

label_1be198:
    // 0x1be198: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1be19c:
    // 0x1be19c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1be19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1be1a0:
    // 0x1be1a0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1be1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1be1a4:
    // 0x1be1a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be1a8:
    // 0x1be1a8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1be1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1be1ac:
    // 0x1be1ac: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1be1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1be1b0:
    // 0x1be1b0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1be1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1be1b4:
    // 0x1be1b4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1be1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1be1b8:
    // 0x1be1b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1be1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1be1bc:
    // 0x1be1bc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1be1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1be1c0:
    // 0x1be1c0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1be1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1be1c4:
    // 0x1be1c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1be1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1be1c8:
    // 0x1be1c8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1be1c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1be1cc:
    // 0x1be1cc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1be1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1be1d0:
    // 0x1be1d0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1be1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1be1d4:
    // 0x1be1d4: 0xc05756c  jal         func_15D5B0
label_1be1d8:
    if (ctx->pc == 0x1BE1D8u) {
        ctx->pc = 0x1BE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1D4u;
        // 0x1be1d8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1DCu;
        goto label_1be1dc;
    }
    ctx->pc = 0x1BE1D4u;
    SET_GPR_U32(ctx, 31, 0x1BE1DCu);
    ctx->pc = 0x1BE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1D4u;
    // 0x1be1d8: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D5B0u, 0x1BE1D4u, 0x1BE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1DCu;
label_1be1dc:
    // 0x1be1dc: 0x1440018a  bnez        $v0, . + 4 + (0x18A << 2)
label_1be1e0:
    if (ctx->pc == 0x1BE1E0u) {
        ctx->pc = 0x1BE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1DCu;
        // 0x1be1e0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1E4u;
        goto label_1be1e4;
    }
    ctx->pc = 0x1BE1DCu;
    {
        const bool branch_taken_0x1be1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1DCu;
        // 0x1be1e0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1dc) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE1E4u;
label_1be1e4:
    // 0x1be1e4: 0x9243069c  lbu         $v1, 0x69C($s2)
    ctx->pc = 0x1be1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1692)));
label_1be1e8:
    // 0x1be1e8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1be1ec:
    if (ctx->pc == 0x1BE1ECu) {
        ctx->pc = 0x1BE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E8u;
        // 0x1be1ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1F0u;
        goto label_1be1f0;
    }
    ctx->pc = 0x1BE1E8u;
    {
        const bool branch_taken_0x1be1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E8u;
        // 0x1be1ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e8) {
            ctx->pc = 0x1BE240u;
            goto label_1be240;
        }
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0x14620186  bne         $v1, $v0, . + 4 + (0x186 << 2)
label_1be1f4:
    if (ctx->pc == 0x1BE1F4u) {
        ctx->pc = 0x1BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1F0u;
        // 0x1be1f4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1F8u;
        goto label_1be1f8;
    }
    ctx->pc = 0x1BE1F0u;
    {
        const bool branch_taken_0x1be1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1F0u;
        // 0x1be1f4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1f0) {
            ctx->pc = 0x1BE80Cu;
            goto label_1be80c;
        }
    }
    ctx->pc = 0x1BE1F8u;
label_1be1f8:
    // 0x1be1f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be1fc:
    // 0x1be1fc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1be200:
    // 0x1be200: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1be204:
    // 0x1be204: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1be208:
    // 0x1be208: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1be208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1be20c:
    // 0x1be20c: 0x40f809  jalr        $v0
label_1be210:
    if (ctx->pc == 0x1BE210u) {
        ctx->pc = 0x1BE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE20Cu;
        // 0x1be210: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE214u;
        goto label_1be214;
    }
    ctx->pc = 0x1BE20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE214u);
        ctx->pc = 0x1BE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE20Cu;
        // 0x1be210: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE20Cu, 0x1BE214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE214u;
label_1be214:
    // 0x1be214: 0x8e4306a0  lw          $v1, 0x6A0($s2)
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
label_1be218:
    // 0x1be218: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be21c:
    // 0x1be21c: 0x2c4208fd  sltiu       $v0, $v0, 0x8FD
    ctx->pc = 0x1be21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2301) ? 1 : 0);
label_1be220:
    // 0x1be220: 0x14400179  bnez        $v0, . + 4 + (0x179 << 2)
label_1be224:
    if (ctx->pc == 0x1BE224u) {
        ctx->pc = 0x1BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE220u;
        // 0x1be224: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE228u;
        goto label_1be228;
    }
    ctx->pc = 0x1BE220u;
    {
        const bool branch_taken_0x1be220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE220u;
        // 0x1be224: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be220) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE228u;
label_1be228:
    // 0x1be228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1be22c:
    // 0x1be22c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be230:
    // 0x1be230: 0xc06f74e  jal         func_1BDD38
label_1be234:
    if (ctx->pc == 0x1BE234u) {
        ctx->pc = 0x1BE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE230u;
        // 0x1be234: 0xa242069c  sb          $v0, 0x69C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1692), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE238u;
        goto label_1be238;
    }
    ctx->pc = 0x1BE230u;
    SET_GPR_U32(ctx, 31, 0x1BE238u);
    ctx->pc = 0x1BE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE230u;
    // 0x1be234: 0xa242069c  sb          $v0, 0x69C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1692), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD38u, 0x1BE230u, 0x1BE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE238u;
label_1be238:
    // 0x1be238: 0x10000173  b           . + 4 + (0x173 << 2)
label_1be23c:
    if (ctx->pc == 0x1BE23Cu) {
        ctx->pc = 0x1BE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE238u;
        // 0x1be23c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE240u;
        goto label_1be240;
    }
    ctx->pc = 0x1BE238u;
    {
        const bool branch_taken_0x1be238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE238u;
        // 0x1be23c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be238) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE240u;
label_1be240:
    // 0x1be240: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1be244:
    // 0x1be244: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x1be244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1be248:
    // 0x1be248: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1be248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1be24c:
    // 0x1be24c: 0x8e420584  lw          $v0, 0x584($s2)
    ctx->pc = 0x1be24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
label_1be250:
    // 0x1be250: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1be254:
    // 0x1be254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be258:
    // 0x1be258: 0x84a40088  lh          $a0, 0x88($a1)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
label_1be25c:
    // 0x1be25c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be260:
    // 0x1be260: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_1be264:
    // 0x1be264: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1be264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1be268:
    // 0x1be268: 0x40f809  jalr        $v0
label_1be26c:
    if (ctx->pc == 0x1BE26Cu) {
        ctx->pc = 0x1BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE268u;
        // 0x1be26c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE270u;
        goto label_1be270;
    }
    ctx->pc = 0x1BE268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE270u);
        ctx->pc = 0x1BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE268u;
        // 0x1be26c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE268u, 0x1BE270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE270u;
label_1be270:
    // 0x1be270: 0x50400165  beql        $v0, $zero, . + 4 + (0x165 << 2)
label_1be274:
    if (ctx->pc == 0x1BE274u) {
        ctx->pc = 0x1BE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE270u;
        // 0x1be274: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE278u;
        goto label_1be278;
    }
    ctx->pc = 0x1BE270u;
    {
        const bool branch_taken_0x1be270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be270) {
            ctx->pc = 0x1BE274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE270u;
            // 0x1be274: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE278u;
label_1be278:
    // 0x1be278: 0xc078710  jal         func_1E1C40
label_1be27c:
    if (ctx->pc == 0x1BE27Cu) {
        ctx->pc = 0x1BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE278u;
        // 0x1be27c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE280u;
        goto label_1be280;
    }
    ctx->pc = 0x1BE278u;
    SET_GPR_U32(ctx, 31, 0x1BE280u);
    ctx->pc = 0x1BE27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE278u;
    // 0x1be27c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C40u, 0x1BE278u, 0x1BE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE280u;
label_1be280:
    // 0x1be280: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
label_1be284:
    if (ctx->pc == 0x1BE284u) {
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE288u;
        goto label_1be288;
    }
    ctx->pc = 0x1BE280u;
    {
        const bool branch_taken_0x1be280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be280) {
            ctx->pc = 0x1BE804u;
            goto label_1be804;
        }
    }
    ctx->pc = 0x1BE288u;
label_1be288:
    // 0x1be288: 0x8e440580  lw          $a0, 0x580($s2)
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1be28c:
    // 0x1be28c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1be28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1be290:
    // 0x1be290: 0x8e460584  lw          $a2, 0x584($s2)
    ctx->pc = 0x1be290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
label_1be294:
    // 0x1be294: 0x10860016  beq         $a0, $a2, . + 4 + (0x16 << 2)
label_1be298:
    if (ctx->pc == 0x1BE298u) {
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0x247714d4  addiu       $s7, $v1, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE29Cu;
        goto label_1be29c;
    }
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE294u;
        // 0x1be298: 0x247714d4  addiu       $s7, $v1, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE2F0u;
            goto label_1be2f0;
        }
    }
    ctx->pc = 0x1BE29Cu;
label_1be29c:
    // 0x1be29c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be2a0:
    // 0x1be2a0: 0xae460580  sw          $a2, 0x580($s2)
    ctx->pc = 0x1be2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1408), GPR_U32(ctx, 6));
label_1be2a4:
    // 0x1be2a4: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1be2a8:
    // 0x1be2a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1be2ac:
    // 0x1be2ac: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x1be2acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
label_1be2b0:
    // 0x1be2b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1be2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1be2b4:
    // 0x1be2b4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_1be2b8:
    // 0x1be2b8: 0xae430694  sw          $v1, 0x694($s2)
    ctx->pc = 0x1be2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
label_1be2bc:
    // 0x1be2bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1be2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1be2c0:
    // 0x1be2c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1be2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1be2c4:
    // 0x1be2c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1be2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1be2c8:
    // 0x1be2c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be2cc:
    // 0x1be2cc: 0xc107cfa  jal         func_41F3E8
label_1be2d0:
    if (ctx->pc == 0x1BE2D0u) {
        ctx->pc = 0x1BE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2CCu;
        // 0x1be2d0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2D4u;
        goto label_1be2d4;
    }
    ctx->pc = 0x1BE2CCu;
    SET_GPR_U32(ctx, 31, 0x1BE2D4u);
    ctx->pc = 0x1BE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE2CCu;
    // 0x1be2d0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F3E8u, 0x1BE2CCu, 0x1BE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2D4u;
label_1be2d4:
    // 0x1be2d4: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1be2d8:
    // 0x1be2d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be2dc:
    // 0x1be2dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1be2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1be2e0:
    // 0x1be2e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1be2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1be2e4:
    // 0x1be2e4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1be2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1be2e8:
    // 0x1be2e8: 0x60f809  jalr        $v1
label_1be2ec:
    if (ctx->pc == 0x1BE2ECu) {
        ctx->pc = 0x1BE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2E8u;
        // 0x1be2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE2F0u;
        goto label_1be2f0;
    }
    ctx->pc = 0x1BE2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE2F0u);
        ctx->pc = 0x1BE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2E8u;
        // 0x1be2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2E8u, 0x1BE2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE2F0u;
label_1be2f0:
    // 0x1be2f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1be2f4:
    // 0x1be2f4: 0x8e420580  lw          $v0, 0x580($s2)
    ctx->pc = 0x1be2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1be2f8:
    // 0x1be2f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1be2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1be2fc:
    // 0x1be2fc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1be300:
    // 0x1be300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be304:
    // 0x1be304: 0x84a400a0  lh          $a0, 0xA0($a1)
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 160)));
label_1be308:
    // 0x1be308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be30c:
    // 0x1be30c: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1be310:
    // 0x1be310: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1be314:
    // 0x1be314: 0x40f809  jalr        $v0
label_1be318:
    if (ctx->pc == 0x1BE318u) {
        ctx->pc = 0x1BE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE314u;
        // 0x1be318: 0x8c7e0000  lw          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE31Cu;
        goto label_1be31c;
    }
    ctx->pc = 0x1BE314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE31Cu);
        ctx->pc = 0x1BE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE314u;
        // 0x1be318: 0x8c7e0000  lw          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE314u, 0x1BE31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE31Cu;
label_1be31c:
    // 0x1be31c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1be320:
    if (ctx->pc == 0x1BE320u) {
        ctx->pc = 0x1BE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE31Cu;
        // 0x1be320: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE324u;
        goto label_1be324;
    }
    ctx->pc = 0x1BE31Cu;
    {
        const bool branch_taken_0x1be31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be31c) {
            ctx->pc = 0x1BE320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE31Cu;
            // 0x1be320: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE36Cu;
            goto label_1be36c;
        }
    }
    ctx->pc = 0x1BE324u;
label_1be324:
    // 0x1be324: 0xc05181e  jal         func_146078
label_1be328:
    if (ctx->pc == 0x1BE328u) {
        ctx->pc = 0x1BE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE324u;
        // 0x1be328: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE32Cu;
        goto label_1be32c;
    }
    ctx->pc = 0x1BE324u;
    SET_GPR_U32(ctx, 31, 0x1BE32Cu);
    ctx->pc = 0x1BE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE324u;
    // 0x1be328: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1BE324u, 0x1BE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE32Cu;
label_1be32c:
    // 0x1be32c: 0x8e4206a8  lw          $v0, 0x6A8($s2)
    ctx->pc = 0x1be32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1704)));
label_1be330:
    // 0x1be330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1be334:
    if (ctx->pc == 0x1BE334u) {
        ctx->pc = 0x1BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE330u;
        // 0x1be334: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE338u;
        goto label_1be338;
    }
    ctx->pc = 0x1BE330u;
    {
        const bool branch_taken_0x1be330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE330u;
        // 0x1be334: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be330) {
            ctx->pc = 0x1BE34Cu;
            goto label_1be34c;
        }
    }
    ctx->pc = 0x1BE338u;
label_1be338:
    // 0x1be338: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1be338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1be33c:
    // 0x1be33c: 0xc07a546  jal         func_1E9518
label_1be340:
    if (ctx->pc == 0x1BE340u) {
        ctx->pc = 0x1BE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE33Cu;
        // 0x1be340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE344u;
        goto label_1be344;
    }
    ctx->pc = 0x1BE33Cu;
    SET_GPR_U32(ctx, 31, 0x1BE344u);
    ctx->pc = 0x1BE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE33Cu;
    // 0x1be340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1BE33Cu, 0x1BE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE344u;
label_1be344:
    // 0x1be344: 0x10000005  b           . + 4 + (0x5 << 2)
label_1be348:
    if (ctx->pc == 0x1BE348u) {
        ctx->pc = 0x1BE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE344u;
        // 0x1be348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE34Cu;
        goto label_1be34c;
    }
    ctx->pc = 0x1BE344u;
    {
        const bool branch_taken_0x1be344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE344u;
        // 0x1be348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be344) {
            ctx->pc = 0x1BE35Cu;
            goto label_1be35c;
        }
    }
    ctx->pc = 0x1BE34Cu;
label_1be34c:
    // 0x1be34c: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1be34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1be350:
    // 0x1be350: 0xc07a4f0  jal         func_1E93C0
label_1be354:
    if (ctx->pc == 0x1BE354u) {
        ctx->pc = 0x1BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE350u;
        // 0x1be354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE358u;
        goto label_1be358;
    }
    ctx->pc = 0x1BE350u;
    SET_GPR_U32(ctx, 31, 0x1BE358u);
    ctx->pc = 0x1BE354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE350u;
    // 0x1be354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1BE350u, 0x1BE358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE358u;
label_1be358:
    // 0x1be358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be35c:
    // 0x1be35c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1be360:
    // 0x1be360: 0xc07a51a  jal         func_1E9468
label_1be364:
    if (ctx->pc == 0x1BE364u) {
        ctx->pc = 0x1BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE360u;
        // 0x1be364: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE368u;
        goto label_1be368;
    }
    ctx->pc = 0x1BE360u;
    SET_GPR_U32(ctx, 31, 0x1BE368u);
    ctx->pc = 0x1BE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE360u;
    // 0x1be364: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1BE360u, 0x1BE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE368u;
label_1be368:
    // 0x1be368: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1be36c:
    // 0x1be36c: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
label_1be370:
    if (ctx->pc == 0x1BE370u) {
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x265300a0  addiu       $s3, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE374u;
        goto label_1be374;
    }
    ctx->pc = 0x1BE36Cu;
    {
        const bool branch_taken_0x1be36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x265300a0  addiu       $s3, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be36c) {
            ctx->pc = 0x1BE804u;
            goto label_1be804;
        }
    }
    ctx->pc = 0x1BE374u;
label_1be374:
    // 0x1be374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1be378:
    // 0x1be378: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1be378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1be37c:
    // 0x1be37c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be380:
    // 0x1be380: 0xc06886e  jal         func_1A21B8
label_1be384:
    if (ctx->pc == 0x1BE384u) {
        ctx->pc = 0x1BE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE380u;
        // 0x1be384: 0x265101b0  addiu       $s1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE388u;
        goto label_1be388;
    }
    ctx->pc = 0x1BE380u;
    SET_GPR_U32(ctx, 31, 0x1BE388u);
    ctx->pc = 0x1BE384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE380u;
    // 0x1be384: 0x265101b0  addiu       $s1, $s2, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1BE380u, 0x1BE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE388u;
label_1be388:
    // 0x1be388: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be38c:
    // 0x1be38c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1be38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1be390:
    // 0x1be390: 0xc44ce878  lwc1        $f12, -0x1788($v0)
    ctx->pc = 0x1be390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1be394:
    // 0x1be394: 0x27c50020  addiu       $a1, $fp, 0x20
    ctx->pc = 0x1be394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_1be398:
    // 0x1be398: 0xc46de87c  lwc1        $f13, -0x1784($v1)
    ctx->pc = 0x1be398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1be39c:
    // 0x1be39c: 0x264202b0  addiu       $v0, $s2, 0x2B0
    ctx->pc = 0x1be39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
label_1be3a0:
    // 0x1be3a0: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1be3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
label_1be3a4:
    // 0x1be3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be3a8:
    // 0x1be3a8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1be3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1be3ac:
    // 0x1be3ac: 0xc068848  jal         func_1A2120
label_1be3b0:
    if (ctx->pc == 0x1BE3B0u) {
        ctx->pc = 0x1BE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3ACu;
        // 0x1be3b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3B4u;
        goto label_1be3b4;
    }
    ctx->pc = 0x1BE3ACu;
    SET_GPR_U32(ctx, 31, 0x1BE3B4u);
    ctx->pc = 0x1BE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3ACu;
    // 0x1be3b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BE3ACu, 0x1BE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3B4u;
label_1be3b4:
    // 0x1be3b4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1be3b8:
    // 0x1be3b8: 0xc107d7e  jal         func_41F5F8
label_1be3bc:
    if (ctx->pc == 0x1BE3BCu) {
        ctx->pc = 0x1BE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B8u;
        // 0x1be3bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3C0u;
        goto label_1be3c0;
    }
    ctx->pc = 0x1BE3B8u;
    SET_GPR_U32(ctx, 31, 0x1BE3C0u);
    ctx->pc = 0x1BE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3B8u;
    // 0x1be3bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F5F8u, 0x1BE3B8u, 0x1BE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3C0u;
label_1be3c0:
    // 0x1be3c0: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1be3c4:
    // 0x1be3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be3c8:
    // 0x1be3c8: 0xc107d7e  jal         func_41F5F8
label_1be3cc:
    if (ctx->pc == 0x1BE3CCu) {
        ctx->pc = 0x1BE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3C8u;
        // 0x1be3cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3D0u;
        goto label_1be3d0;
    }
    ctx->pc = 0x1BE3C8u;
    SET_GPR_U32(ctx, 31, 0x1BE3D0u);
    ctx->pc = 0x1BE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3C8u;
    // 0x1be3cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F5F8u, 0x1BE3C8u, 0x1BE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3D0u;
label_1be3d0:
    // 0x1be3d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1be3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be3d4:
    // 0x1be3d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be3d8:
    // 0x1be3d8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1be3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be3dc:
    // 0x1be3dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be3e0:
    // 0x1be3e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1be3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1be3e4:
    // 0x1be3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be3e8:
    // 0x1be3e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1be3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1be3ec:
    // 0x1be3ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1be3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1be3f0:
    // 0x1be3f0: 0xc068818  jal         func_1A2060
label_1be3f4:
    if (ctx->pc == 0x1BE3F4u) {
        ctx->pc = 0x1BE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3F0u;
        // 0x1be3f4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3F8u;
        goto label_1be3f8;
    }
    ctx->pc = 0x1BE3F0u;
    SET_GPR_U32(ctx, 31, 0x1BE3F8u);
    ctx->pc = 0x1BE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3F0u;
    // 0x1be3f4: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1BE3F0u, 0x1BE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3F8u;
label_1be3f8:
    // 0x1be3f8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1be3fc:
    // 0x1be3fc: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1be400:
    // 0x1be400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be404:
    // 0x1be404: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1be404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1be408:
    // 0x1be408: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1be408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_1be40c:
    // 0x1be40c: 0xc068a44  jal         func_1A2910
label_1be410:
    if (ctx->pc == 0x1BE410u) {
        ctx->pc = 0x1BE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE40Cu;
        // 0x1be410: 0x8c450078  lw          $a1, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE414u;
        goto label_1be414;
    }
    ctx->pc = 0x1BE40Cu;
    SET_GPR_U32(ctx, 31, 0x1BE414u);
    ctx->pc = 0x1BE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE40Cu;
    // 0x1be410: 0x8c450078  lw          $a1, 0x78($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1BE40Cu, 0x1BE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE414u;
label_1be414:
    // 0x1be414: 0xc06886e  jal         func_1A21B8
label_1be418:
    if (ctx->pc == 0x1BE418u) {
        ctx->pc = 0x1BE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE414u;
        // 0x1be418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE41Cu;
        goto label_1be41c;
    }
    ctx->pc = 0x1BE414u;
    SET_GPR_U32(ctx, 31, 0x1BE41Cu);
    ctx->pc = 0x1BE418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE414u;
    // 0x1be418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1BE414u, 0x1BE41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE41Cu;
label_1be41c:
    // 0x1be41c: 0x26430254  addiu       $v1, $s2, 0x254
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
label_1be420:
    // 0x1be420: 0xc6400254  lwc1        $f0, 0x254($s2)
    ctx->pc = 0x1be420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be424:
    // 0x1be424: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1be424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1be428:
    // 0x1be428: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1be428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1be42c:
    // 0x1be42c: 0xc442e880  lwc1        $f2, -0x1780($v0)
    ctx->pc = 0x1be42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1be430:
    // 0x1be430: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1be430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1be434:
    // 0x1be434: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1be434u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1be438:
    // 0x1be438: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1be438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be43c:
    // 0x1be43c: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x1be43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1be440:
    // 0x1be440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be444:
    // 0x1be444: 0xc4a0e884  lwc1        $f0, -0x177C($a1)
    ctx->pc = 0x1be444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be448:
    // 0x1be448: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x1be448u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_1be44c:
    // 0x1be44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be450:
    // 0x1be450: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1be450u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1be454:
    // 0x1be454: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x1be454u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_1be458:
    // 0x1be458: 0xc068848  jal         func_1A2120
label_1be45c:
    if (ctx->pc == 0x1BE45Cu) {
        ctx->pc = 0x1BE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE458u;
        // 0x1be45c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE460u;
        goto label_1be460;
    }
    ctx->pc = 0x1BE458u;
    SET_GPR_U32(ctx, 31, 0x1BE460u);
    ctx->pc = 0x1BE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE458u;
    // 0x1be45c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BE458u, 0x1BE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE460u;
label_1be460:
    // 0x1be460: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1be464:
    // 0x1be464: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x1be464u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1be468:
    // 0x1be468: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1be468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1be46c:
    // 0x1be46c: 0x12a200db  beq         $s5, $v0, . + 4 + (0xDB << 2)
label_1be470:
    if (ctx->pc == 0x1BE470u) {
        ctx->pc = 0x1BE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE46Cu;
        // 0x1be470: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE474u;
        goto label_1be474;
    }
    ctx->pc = 0x1BE46Cu;
    {
        const bool branch_taken_0x1be46c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE46Cu;
        // 0x1be470: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be46c) {
            ctx->pc = 0x1BE7DCu;
            goto label_1be7dc;
        }
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1be474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1be478:
    // 0x1be478: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1be478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_1be47c:
    // 0x1be47c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1be47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_1be480:
    // 0x1be480: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1be480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1be484:
    // 0x1be484: 0x26560590  addiu       $s6, $s2, 0x590
    ctx->pc = 0x1be484u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
label_1be488:
    // 0x1be488: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x1be488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
label_1be48c:
    // 0x1be48c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1be48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1be490:
    // 0x1be490: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x1be490u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1be494:
    // 0x1be494: 0x0  nop
    ctx->pc = 0x1be494u;
    // NOP
label_1be498:
    // 0x1be498: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1be498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1be49c:
    // 0x1be49c: 0xc46ce888  lwc1        $f12, -0x1778($v1)
    ctx->pc = 0x1be49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1be4a0:
    // 0x1be4a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1be4a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1be4a4:
    // 0x1be4a4: 0x26710130  addiu       $s1, $s3, 0x130
    ctx->pc = 0x1be4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_1be4a8:
    // 0x1be4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be4ac:
    // 0x1be4ac: 0xc068848  jal         func_1A2120
label_1be4b0:
    if (ctx->pc == 0x1BE4B0u) {
        ctx->pc = 0x1BE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4ACu;
        // 0x1be4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4B4u;
        goto label_1be4b4;
    }
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x1BE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4ACu;
    // 0x1be4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BE4ACu, 0x1BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1be4b8:
    // 0x1be4b8: 0xc107d50  jal         func_41F540
label_1be4bc:
    if (ctx->pc == 0x1BE4BCu) {
        ctx->pc = 0x1BE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4B8u;
        // 0x1be4bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4C0u;
        goto label_1be4c0;
    }
    ctx->pc = 0x1BE4B8u;
    SET_GPR_U32(ctx, 31, 0x1BE4C0u);
    ctx->pc = 0x1BE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4B8u;
    // 0x1be4bc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BE4B8u, 0x1BE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4C0u;
label_1be4c0:
    // 0x1be4c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1be4c4:
    // 0x1be4c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be4c8:
    // 0x1be4c8: 0xc107d50  jal         func_41F540
label_1be4cc:
    if (ctx->pc == 0x1BE4CCu) {
        ctx->pc = 0x1BE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4C8u;
        // 0x1be4cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4D0u;
        goto label_1be4d0;
    }
    ctx->pc = 0x1BE4C8u;
    SET_GPR_U32(ctx, 31, 0x1BE4D0u);
    ctx->pc = 0x1BE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4C8u;
    // 0x1be4cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BE4C8u, 0x1BE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4D0u;
label_1be4d0:
    // 0x1be4d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1be4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be4d4:
    // 0x1be4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be4d8:
    // 0x1be4d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1be4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be4dc:
    // 0x1be4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be4e0:
    // 0x1be4e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be4e4:
    // 0x1be4e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1be4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1be4e8:
    // 0x1be4e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1be4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1be4ec:
    // 0x1be4ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1be4ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1be4f0:
    // 0x1be4f0: 0xc068818  jal         func_1A2060
label_1be4f4:
    if (ctx->pc == 0x1BE4F4u) {
        ctx->pc = 0x1BE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4F0u;
        // 0x1be4f4: 0xe7b7000c  swc1        $f23, 0xC($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4F8u;
        goto label_1be4f8;
    }
    ctx->pc = 0x1BE4F0u;
    SET_GPR_U32(ctx, 31, 0x1BE4F8u);
    ctx->pc = 0x1BE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4F0u;
    // 0x1be4f4: 0xe7b7000c  swc1        $f23, 0xC($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1BE4F0u, 0x1BE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4F8u;
label_1be4f8:
    // 0x1be4f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1be4fc:
    // 0x1be4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be500:
    // 0x1be500: 0xc068992  jal         func_1A2648
label_1be504:
    if (ctx->pc == 0x1BE504u) {
        ctx->pc = 0x1BE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE500u;
        // 0x1be504: 0x2445d310  addiu       $a1, $v0, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE508u;
        goto label_1be508;
    }
    ctx->pc = 0x1BE500u;
    SET_GPR_U32(ctx, 31, 0x1BE508u);
    ctx->pc = 0x1BE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE500u;
    // 0x1be504: 0x2445d310  addiu       $a1, $v0, -0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1BE500u, 0x1BE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE508u;
label_1be508:
    // 0x1be508: 0x167e00ae  bne         $s3, $fp, . + 4 + (0xAE << 2)
label_1be50c:
    if (ctx->pc == 0x1BE50Cu) {
        ctx->pc = 0x1BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE508u;
        // 0x1be50c: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE510u;
        goto label_1be510;
    }
    ctx->pc = 0x1BE508u;
    {
        const bool branch_taken_0x1be508 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x1BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE508u;
        // 0x1be50c: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be508) {
            ctx->pc = 0x1BE7C4u;
            goto label_1be7c4;
        }
    }
    ctx->pc = 0x1BE510u;
label_1be510:
    // 0x1be510: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1be514:
    // 0x1be514: 0x8e450694  lw          $a1, 0x694($s2)
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
label_1be518:
    // 0x1be518: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x1be518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_1be51c:
    // 0x1be51c: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x1be51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_1be520:
    // 0x1be520: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1be520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1be524:
    // 0x1be524: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1be524u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1be528:
    // 0x1be528: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1be528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1be52c:
    // 0x1be52c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1be530:
    if (ctx->pc == 0x1BE530u) {
        ctx->pc = 0x1BE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE52Cu;
        // 0x1be530: 0x8e420690  lw          $v0, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE534u;
        goto label_1be534;
    }
    ctx->pc = 0x1BE52Cu;
    {
        const bool branch_taken_0x1be52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE52Cu;
        // 0x1be530: 0x8e420690  lw          $v0, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be52c) {
            ctx->pc = 0x1BE548u;
            goto label_1be548;
        }
    }
    ctx->pc = 0x1BE534u;
label_1be534:
    // 0x1be534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be538:
    // 0x1be538: 0xae430694  sw          $v1, 0x694($s2)
    ctx->pc = 0x1be538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
label_1be53c:
    // 0x1be53c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1be53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1be540:
    // 0x1be540: 0xae420690  sw          $v0, 0x690($s2)
    ctx->pc = 0x1be540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 2));
label_1be544:
    // 0x1be544: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x1be544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
label_1be548:
    // 0x1be548: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1be54c:
    if (ctx->pc == 0x1BE54Cu) {
        ctx->pc = 0x1BE550u;
        goto label_1be550;
    }
    ctx->pc = 0x1BE548u;
    {
        const bool branch_taken_0x1be548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be548) {
            ctx->pc = 0x1BE5D8u;
            goto label_1be5d8;
        }
    }
    ctx->pc = 0x1BE550u;
label_1be550:
    // 0x1be550: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1be554:
    if (ctx->pc == 0x1BE554u) {
        ctx->pc = 0x1BE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE550u;
        // 0x1be554: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE558u;
        goto label_1be558;
    }
    ctx->pc = 0x1BE550u;
    {
        const bool branch_taken_0x1be550 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1BE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE550u;
        // 0x1be554: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be550) {
            ctx->pc = 0x1BE56Cu;
            goto label_1be56c;
        }
    }
    ctx->pc = 0x1BE558u;
label_1be558:
    // 0x1be558: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1be558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be55c:
    // 0x1be55c: 0x0  nop
    ctx->pc = 0x1be55cu;
    // NOP
label_1be560:
    // 0x1be560: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be564:
    // 0x1be564: 0x10000008  b           . + 4 + (0x8 << 2)
label_1be568:
    if (ctx->pc == 0x1BE568u) {
        ctx->pc = 0x1BE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE564u;
        // 0x1be568: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE56Cu;
        goto label_1be56c;
    }
    ctx->pc = 0x1BE564u;
    {
        const bool branch_taken_0x1be564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE564u;
        // 0x1be568: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be564) {
            ctx->pc = 0x1BE588u;
            goto label_1be588;
        }
    }
    ctx->pc = 0x1BE56Cu;
label_1be56c:
    // 0x1be56c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1be56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1be570:
    // 0x1be570: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1be574:
    // 0x1be574: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be578:
    // 0x1be578: 0x0  nop
    ctx->pc = 0x1be578u;
    // NOP
label_1be57c:
    // 0x1be57c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be580:
    // 0x1be580: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1be580u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1be584:
    // 0x1be584: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_1be588:
    // 0x1be588: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1be58c:
    if (ctx->pc == 0x1BE58Cu) {
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE590u;
        goto label_1be590;
    }
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE5A4u;
            goto label_1be5a4;
        }
    }
    ctx->pc = 0x1BE590u;
label_1be590:
    // 0x1be590: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1be590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1be594:
    // 0x1be594: 0x0  nop
    ctx->pc = 0x1be594u;
    // NOP
label_1be598:
    // 0x1be598: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1be598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1be59c:
    // 0x1be59c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be5a0:
    if (ctx->pc == 0x1BE5A0u) {
        ctx->pc = 0x1BE5A4u;
        goto label_1be5a4;
    }
    ctx->pc = 0x1BE59Cu;
    {
        const bool branch_taken_0x1be59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be59c) {
            ctx->pc = 0x1BE5BCu;
            goto label_1be5bc;
        }
    }
    ctx->pc = 0x1BE5A4u;
label_1be5a4:
    // 0x1be5a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1be5a8:
    // 0x1be5a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1be5ac:
    // 0x1be5ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1be5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1be5b0:
    // 0x1be5b0: 0x0  nop
    ctx->pc = 0x1be5b0u;
    // NOP
label_1be5b4:
    // 0x1be5b4: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1be5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1be5b8:
    // 0x1be5b8: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1be5b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1be5bc:
    // 0x1be5bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1be5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1be5c0:
    // 0x1be5c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1be5c4:
    // 0x1be5c4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1be5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1be5c8:
    // 0x1be5c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1be5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1be5cc:
    // 0x1be5cc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1be5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1be5d0:
    // 0x1be5d0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1be5d4:
    if (ctx->pc == 0x1BE5D4u) {
        ctx->pc = 0x1BE5D8u;
        goto label_1be5d8;
    }
    ctx->pc = 0x1BE5D0u;
    {
        const bool branch_taken_0x1be5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5d0) {
            ctx->pc = 0x1BE658u;
            goto label_1be658;
        }
    }
    ctx->pc = 0x1BE5D8u;
label_1be5d8:
    // 0x1be5d8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1be5dc:
    if (ctx->pc == 0x1BE5DCu) {
        ctx->pc = 0x1BE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5D8u;
        // 0x1be5dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5E0u;
        goto label_1be5e0;
    }
    ctx->pc = 0x1BE5D8u;
    {
        const bool branch_taken_0x1be5d8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1BE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5D8u;
        // 0x1be5dc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5d8) {
            ctx->pc = 0x1BE5F4u;
            goto label_1be5f4;
        }
    }
    ctx->pc = 0x1BE5E0u;
label_1be5e0:
    // 0x1be5e0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1be5e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be5e4:
    // 0x1be5e4: 0x0  nop
    ctx->pc = 0x1be5e4u;
    // NOP
label_1be5e8:
    // 0x1be5e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be5ec:
    // 0x1be5ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1be5f0:
    if (ctx->pc == 0x1BE5F0u) {
        ctx->pc = 0x1BE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ECu;
        // 0x1be5f0: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5F4u;
        goto label_1be5f4;
    }
    ctx->pc = 0x1BE5ECu;
    {
        const bool branch_taken_0x1be5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ECu;
        // 0x1be5f0: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5ec) {
            ctx->pc = 0x1BE610u;
            goto label_1be610;
        }
    }
    ctx->pc = 0x1BE5F4u;
label_1be5f4:
    // 0x1be5f4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1be5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1be5f8:
    // 0x1be5f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1be5fc:
    // 0x1be5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be600:
    // 0x1be600: 0x0  nop
    ctx->pc = 0x1be600u;
    // NOP
label_1be604:
    // 0x1be604: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be608:
    // 0x1be608: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1be608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1be60c:
    // 0x1be60c: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_1be610:
    // 0x1be610: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1be614:
    if (ctx->pc == 0x1BE614u) {
        ctx->pc = 0x1BE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE610u;
        // 0x1be614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE618u;
        goto label_1be618;
    }
    ctx->pc = 0x1BE610u;
    {
        const bool branch_taken_0x1be610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE610u;
        // 0x1be614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be610) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE618u;
label_1be618:
    // 0x1be618: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1be618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1be61c:
    // 0x1be61c: 0x0  nop
    ctx->pc = 0x1be61cu;
    // NOP
label_1be620:
    // 0x1be620: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1be620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1be624:
    // 0x1be624: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be628:
    if (ctx->pc == 0x1BE628u) {
        ctx->pc = 0x1BE62Cu;
        goto label_1be62c;
    }
    ctx->pc = 0x1BE624u;
    {
        const bool branch_taken_0x1be624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be624) {
            ctx->pc = 0x1BE644u;
            goto label_1be644;
        }
    }
    ctx->pc = 0x1BE62Cu;
label_1be62c:
    // 0x1be62c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1be630:
    // 0x1be630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1be634:
    // 0x1be634: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1be634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1be638:
    // 0x1be638: 0x0  nop
    ctx->pc = 0x1be638u;
    // NOP
label_1be63c:
    // 0x1be63c: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1be63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1be640:
    // 0x1be640: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1be640u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1be644:
    // 0x1be644: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1be644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1be648:
    // 0x1be648: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1be64c:
    // 0x1be64c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1be64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1be650:
    // 0x1be650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1be654:
    // 0x1be654: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1be654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1be658:
    // 0x1be658: 0xc0cdd5a  jal         func_337568
label_1be65c:
    if (ctx->pc == 0x1BE65Cu) {
        ctx->pc = 0x1BE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE658u;
        // 0x1be65c: 0x26710130  addiu       $s1, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE660u;
        goto label_1be660;
    }
    ctx->pc = 0x1BE658u;
    SET_GPR_U32(ctx, 31, 0x1BE660u);
    ctx->pc = 0x1BE65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE658u;
    // 0x1be65c: 0x26710130  addiu       $s1, $s3, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1BE658u, 0x1BE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE660u;
label_1be660:
    // 0x1be660: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1be660u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1be664:
    // 0x1be664: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1be668:
    // 0x1be668: 0xc107d50  jal         func_41F540
label_1be66c:
    if (ctx->pc == 0x1BE66Cu) {
        ctx->pc = 0x1BE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE668u;
        // 0x1be66c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE670u;
        goto label_1be670;
    }
    ctx->pc = 0x1BE668u;
    SET_GPR_U32(ctx, 31, 0x1BE670u);
    ctx->pc = 0x1BE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE668u;
    // 0x1be66c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BE668u, 0x1BE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE670u;
label_1be670:
    // 0x1be670: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1be674:
    // 0x1be674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be678:
    // 0x1be678: 0xc107d50  jal         func_41F540
label_1be67c:
    if (ctx->pc == 0x1BE67Cu) {
        ctx->pc = 0x1BE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE678u;
        // 0x1be67c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE680u;
        goto label_1be680;
    }
    ctx->pc = 0x1BE678u;
    SET_GPR_U32(ctx, 31, 0x1BE680u);
    ctx->pc = 0x1BE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE678u;
    // 0x1be67c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BE678u, 0x1BE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE680u;
label_1be680:
    // 0x1be680: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1be680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1be684:
    // 0x1be684: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x1be684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
label_1be688:
    // 0x1be688: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1be688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1be68c:
    // 0x1be68c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1be68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1be690:
    // 0x1be690: 0xc46ce888  lwc1        $f12, -0x1778($v1)
    ctx->pc = 0x1be690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1be694:
    // 0x1be694: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1be694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1be698:
    // 0x1be698: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1be698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be69c:
    // 0x1be69c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1be69cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1be6a0:
    // 0x1be6a0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1be6a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_1be6a4:
    // 0x1be6a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1be6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be6a8:
    // 0x1be6a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1be6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1be6ac:
    // 0x1be6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be6b0:
    // 0x1be6b0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1be6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1be6b4:
    // 0x1be6b4: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1be6b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1be6b8:
    // 0x1be6b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1be6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1be6bc:
    // 0x1be6bc: 0xc068848  jal         func_1A2120
label_1be6c0:
    if (ctx->pc == 0x1BE6C0u) {
        ctx->pc = 0x1BE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6BCu;
        // 0x1be6c0: 0xe7b7000c  swc1        $f23, 0xC($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6C4u;
        goto label_1be6c4;
    }
    ctx->pc = 0x1BE6BCu;
    SET_GPR_U32(ctx, 31, 0x1BE6C4u);
    ctx->pc = 0x1BE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6BCu;
    // 0x1be6c0: 0xe7b7000c  swc1        $f23, 0xC($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BE6BCu, 0x1BE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6C4u;
label_1be6c4:
    // 0x1be6c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1be6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1be6c8:
    // 0x1be6c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1be6c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1be6cc:
    // 0x1be6cc: 0xc48ce888  lwc1        $f12, -0x1778($a0)
    ctx->pc = 0x1be6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1be6d0:
    // 0x1be6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be6d4:
    // 0x1be6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be6d8:
    // 0x1be6d8: 0xc068848  jal         func_1A2120
label_1be6dc:
    if (ctx->pc == 0x1BE6DCu) {
        ctx->pc = 0x1BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D8u;
        // 0x1be6dc: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6E0u;
        goto label_1be6e0;
    }
    ctx->pc = 0x1BE6D8u;
    SET_GPR_U32(ctx, 31, 0x1BE6E0u);
    ctx->pc = 0x1BE6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6D8u;
    // 0x1be6dc: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1BE6D8u, 0x1BE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6E0u;
label_1be6e0:
    // 0x1be6e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1be6e4:
    // 0x1be6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be6e8:
    // 0x1be6e8: 0xc068992  jal         func_1A2648
label_1be6ec:
    if (ctx->pc == 0x1BE6ECu) {
        ctx->pc = 0x1BE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E8u;
        // 0x1be6ec: 0x2445d310  addiu       $a1, $v0, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6F0u;
        goto label_1be6f0;
    }
    ctx->pc = 0x1BE6E8u;
    SET_GPR_U32(ctx, 31, 0x1BE6F0u);
    ctx->pc = 0x1BE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6E8u;
    // 0x1be6ec: 0x2445d310  addiu       $a1, $v0, -0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1BE6E8u, 0x1BE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6F0u;
label_1be6f0:
    // 0x1be6f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be6f4:
    // 0x1be6f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1be6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1be6f8:
    // 0x1be6f8: 0xc068818  jal         func_1A2060
label_1be6fc:
    if (ctx->pc == 0x1BE6FCu) {
        ctx->pc = 0x1BE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6F8u;
        // 0x1be6fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE700u;
        goto label_1be700;
    }
    ctx->pc = 0x1BE6F8u;
    SET_GPR_U32(ctx, 31, 0x1BE700u);
    ctx->pc = 0x1BE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F8u;
    // 0x1be6fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1BE6F8u, 0x1BE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE700u;
label_1be700:
    // 0x1be700: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1be704:
    // 0x1be704: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1be704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1be708:
    // 0x1be708: 0xc107cd0  jal         func_41F340
label_1be70c:
    if (ctx->pc == 0x1BE70Cu) {
        ctx->pc = 0x1BE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE708u;
        // 0x1be70c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE710u;
        goto label_1be710;
    }
    ctx->pc = 0x1BE708u;
    SET_GPR_U32(ctx, 31, 0x1BE710u);
    ctx->pc = 0x1BE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE708u;
    // 0x1be70c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F340u, 0x1BE708u, 0x1BE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE710u;
label_1be710:
    // 0x1be710: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x1be710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_1be714:
    // 0x1be714: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1be714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1be718:
    // 0x1be718: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be71c:
    // 0x1be71c: 0x0  nop
    ctx->pc = 0x1be71cu;
    // NOP
label_1be720:
    // 0x1be720: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be724:
    // 0x1be724: 0x908300b4  lbu         $v1, 0xB4($a0)
    ctx->pc = 0x1be724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 180)));
label_1be728:
    // 0x1be728: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x1be728u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_1be72c:
    // 0x1be72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be730:
    // 0x1be730: 0x0  nop
    ctx->pc = 0x1be730u;
    // NOP
label_1be734:
    // 0x1be734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be738:
    // 0x1be738: 0xc10b1c6  jal         func_42C718
label_1be73c:
    if (ctx->pc == 0x1BE73Cu) {
        ctx->pc = 0x1BE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE738u;
        // 0x1be73c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE740u;
        goto label_1be740;
    }
    ctx->pc = 0x1BE738u;
    SET_GPR_U32(ctx, 31, 0x1BE740u);
    ctx->pc = 0x1BE73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE738u;
    // 0x1be73c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1BE738u, 0x1BE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE740u;
label_1be740:
    // 0x1be740: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1be740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_1be744:
    // 0x1be744: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1be744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1be748:
    // 0x1be748: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x1be748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1be74c:
    // 0x1be74c: 0x90a300b5  lbu         $v1, 0xB5($a1)
    ctx->pc = 0x1be74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 181)));
label_1be750:
    // 0x1be750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be754:
    // 0x1be754: 0x0  nop
    ctx->pc = 0x1be754u;
    // NOP
label_1be758:
    // 0x1be758: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be75c:
    // 0x1be75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be760:
    // 0x1be760: 0x0  nop
    ctx->pc = 0x1be760u;
    // NOP
label_1be764:
    // 0x1be764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be768:
    // 0x1be768: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x1be768u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_1be76c:
    // 0x1be76c: 0xc10b1c6  jal         func_42C718
label_1be770:
    if (ctx->pc == 0x1BE770u) {
        ctx->pc = 0x1BE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE76Cu;
        // 0x1be770: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE774u;
        goto label_1be774;
    }
    ctx->pc = 0x1BE76Cu;
    SET_GPR_U32(ctx, 31, 0x1BE774u);
    ctx->pc = 0x1BE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE76Cu;
    // 0x1be770: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1BE76Cu, 0x1BE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE774u;
label_1be774:
    // 0x1be774: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x1be774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1be778:
    // 0x1be778: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x1be778u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_1be77c:
    // 0x1be77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be780:
    // 0x1be780: 0x0  nop
    ctx->pc = 0x1be780u;
    // NOP
label_1be784:
    // 0x1be784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be788:
    // 0x1be788: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1be788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1be78c:
    // 0x1be78c: 0x906200b6  lbu         $v0, 0xB6($v1)
    ctx->pc = 0x1be78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
label_1be790:
    // 0x1be790: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1be790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1be794:
    // 0x1be794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1be798:
    // 0x1be798: 0x0  nop
    ctx->pc = 0x1be798u;
    // NOP
label_1be79c:
    // 0x1be79c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1be79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1be7a0:
    // 0x1be7a0: 0xc10b1c6  jal         func_42C718
label_1be7a4:
    if (ctx->pc == 0x1BE7A4u) {
        ctx->pc = 0x1BE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7A0u;
        // 0x1be7a4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7A8u;
        goto label_1be7a8;
    }
    ctx->pc = 0x1BE7A0u;
    SET_GPR_U32(ctx, 31, 0x1BE7A8u);
    ctx->pc = 0x1BE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7A0u;
    // 0x1be7a4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1BE7A0u, 0x1BE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7A8u;
label_1be7a8:
    // 0x1be7a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1be7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1be7ac:
    // 0x1be7ac: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x1be7acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_1be7b0:
    // 0x1be7b0: 0xc068992  jal         func_1A2648
label_1be7b4:
    if (ctx->pc == 0x1BE7B4u) {
        ctx->pc = 0x1BE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7B0u;
        // 0x1be7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7B8u;
        goto label_1be7b8;
    }
    ctx->pc = 0x1BE7B0u;
    SET_GPR_U32(ctx, 31, 0x1BE7B8u);
    ctx->pc = 0x1BE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7B0u;
    // 0x1be7b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1BE7B0u, 0x1BE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7B8u;
label_1be7b8:
    // 0x1be7b8: 0xc06886e  jal         func_1A21B8
label_1be7bc:
    if (ctx->pc == 0x1BE7BCu) {
        ctx->pc = 0x1BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7B8u;
        // 0x1be7bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7C0u;
        goto label_1be7c0;
    }
    ctx->pc = 0x1BE7B8u;
    SET_GPR_U32(ctx, 31, 0x1BE7C0u);
    ctx->pc = 0x1BE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7B8u;
    // 0x1be7bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1BE7B8u, 0x1BE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7C0u;
label_1be7c0:
    // 0x1be7c0: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_1be7c4:
    // 0x1be7c4: 0xc06886e  jal         func_1A21B8
label_1be7c8:
    if (ctx->pc == 0x1BE7C8u) {
        ctx->pc = 0x1BE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C4u;
        // 0x1be7c8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7CCu;
        goto label_1be7cc;
    }
    ctx->pc = 0x1BE7C4u;
    SET_GPR_U32(ctx, 31, 0x1BE7CCu);
    ctx->pc = 0x1BE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7C4u;
    // 0x1be7c8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1BE7C4u, 0x1BE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7CCu;
label_1be7cc:
    // 0x1be7cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1be7d0:
    // 0x1be7d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1be7d4:
    // 0x1be7d4: 0x56a2ff30  bnel        $s5, $v0, . + 4 + (-0xD0 << 2)
label_1be7d8:
    if (ctx->pc == 0x1BE7D8u) {
        ctx->pc = 0x1BE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D4u;
        // 0x1be7d8: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7DCu;
        goto label_1be7dc;
    }
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE7D4u;
            // 0x1be7d8: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be498;
        }
    }
    ctx->pc = 0x1BE7DCu;
label_1be7dc:
    // 0x1be7dc: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x1be7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1be7e0:
    // 0x1be7e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1be7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1be7e4:
    // 0x1be7e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1be7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1be7e8:
    // 0x1be7e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1be7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1be7ec:
    // 0x1be7ec: 0x60f809  jalr        $v1
label_1be7f0:
    if (ctx->pc == 0x1BE7F0u) {
        ctx->pc = 0x1BE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7ECu;
        // 0x1be7f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7F4u;
        goto label_1be7f4;
    }
    ctx->pc = 0x1BE7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE7F4u);
        ctx->pc = 0x1BE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7ECu;
        // 0x1be7f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7ECu, 0x1BE7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE7F4u;
label_1be7f4:
    // 0x1be7f4: 0xc078876  jal         func_1E21D8
label_1be7f8:
    if (ctx->pc == 0x1BE7F8u) {
        ctx->pc = 0x1BE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7F4u;
        // 0x1be7f8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7FCu;
        goto label_1be7fc;
    }
    ctx->pc = 0x1BE7F4u;
    SET_GPR_U32(ctx, 31, 0x1BE7FCu);
    ctx->pc = 0x1BE7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7F4u;
    // 0x1be7f8: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E21D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21D8u, 0x1BE7F4u, 0x1BE7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7FCu;
label_1be7fc:
    // 0x1be7fc: 0xc073b50  jal         func_1CED40
label_1be800:
    if (ctx->pc == 0x1BE800u) {
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7FCu;
        // 0x1be800: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE804u;
        goto label_1be804;
    }
    ctx->pc = 0x1BE7FCu;
    SET_GPR_U32(ctx, 31, 0x1BE804u);
    ctx->pc = 0x1BE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7FCu;
    // 0x1be800: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1BE7FCu, 0x1BE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE804u;
label_1be804:
    // 0x1be804: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1be804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1be808:
    // 0x1be808: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1be808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1be80c:
    // 0x1be80c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1be80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1be810:
    // 0x1be810: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1be810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1be814:
    // 0x1be814: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1be814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1be818:
    // 0x1be818: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1be818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1be81c:
    // 0x1be81c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1be81cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1be820:
    // 0x1be820: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1be820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1be824:
    // 0x1be824: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1be824u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1be828:
    // 0x1be828: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1be82c:
    // 0x1be82c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1be82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1be830:
    // 0x1be830: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1be830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1be834:
    // 0x1be834: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1be834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1be838:
    // 0x1be838: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1be838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1be83c:
    // 0x1be83c: 0x3e00008  jr          $ra
label_1be840:
    if (ctx->pc == 0x1BE840u) {
        ctx->pc = 0x1BE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE83Cu;
        // 0x1be840: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE844u;
        goto label_1be844;
    }
    ctx->pc = 0x1BE83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE83Cu;
        // 0x1be840: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE844u;
label_1be844:
    // 0x1be844: 0x0  nop
    ctx->pc = 0x1be844u;
    // NOP
    ctx->pc = 0x1be848u;
}
