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

// Function: sub_003CB220
// Address: 0x3cb220 - 0x3cc098
void sub_003CB220_0x3cb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB220_0x3cb220");
#endif

    switch (ctx->pc) {
        case 0x3cb220u: goto label_3cb220;
        case 0x3cb224u: goto label_3cb224;
        case 0x3cb228u: goto label_3cb228;
        case 0x3cb22cu: goto label_3cb22c;
        case 0x3cb230u: goto label_3cb230;
        case 0x3cb234u: goto label_3cb234;
        case 0x3cb238u: goto label_3cb238;
        case 0x3cb23cu: goto label_3cb23c;
        case 0x3cb240u: goto label_3cb240;
        case 0x3cb244u: goto label_3cb244;
        case 0x3cb248u: goto label_3cb248;
        case 0x3cb24cu: goto label_3cb24c;
        case 0x3cb250u: goto label_3cb250;
        case 0x3cb254u: goto label_3cb254;
        case 0x3cb258u: goto label_3cb258;
        case 0x3cb25cu: goto label_3cb25c;
        case 0x3cb260u: goto label_3cb260;
        case 0x3cb264u: goto label_3cb264;
        case 0x3cb268u: goto label_3cb268;
        case 0x3cb26cu: goto label_3cb26c;
        case 0x3cb270u: goto label_3cb270;
        case 0x3cb274u: goto label_3cb274;
        case 0x3cb278u: goto label_3cb278;
        case 0x3cb27cu: goto label_3cb27c;
        case 0x3cb280u: goto label_3cb280;
        case 0x3cb284u: goto label_3cb284;
        case 0x3cb288u: goto label_3cb288;
        case 0x3cb28cu: goto label_3cb28c;
        case 0x3cb290u: goto label_3cb290;
        case 0x3cb294u: goto label_3cb294;
        case 0x3cb298u: goto label_3cb298;
        case 0x3cb29cu: goto label_3cb29c;
        case 0x3cb2a0u: goto label_3cb2a0;
        case 0x3cb2a4u: goto label_3cb2a4;
        case 0x3cb2a8u: goto label_3cb2a8;
        case 0x3cb2acu: goto label_3cb2ac;
        case 0x3cb2b0u: goto label_3cb2b0;
        case 0x3cb2b4u: goto label_3cb2b4;
        case 0x3cb2b8u: goto label_3cb2b8;
        case 0x3cb2bcu: goto label_3cb2bc;
        case 0x3cb2c0u: goto label_3cb2c0;
        case 0x3cb2c4u: goto label_3cb2c4;
        case 0x3cb2c8u: goto label_3cb2c8;
        case 0x3cb2ccu: goto label_3cb2cc;
        case 0x3cb2d0u: goto label_3cb2d0;
        case 0x3cb2d4u: goto label_3cb2d4;
        case 0x3cb2d8u: goto label_3cb2d8;
        case 0x3cb2dcu: goto label_3cb2dc;
        case 0x3cb2e0u: goto label_3cb2e0;
        case 0x3cb2e4u: goto label_3cb2e4;
        case 0x3cb2e8u: goto label_3cb2e8;
        case 0x3cb2ecu: goto label_3cb2ec;
        case 0x3cb2f0u: goto label_3cb2f0;
        case 0x3cb2f4u: goto label_3cb2f4;
        case 0x3cb2f8u: goto label_3cb2f8;
        case 0x3cb2fcu: goto label_3cb2fc;
        case 0x3cb300u: goto label_3cb300;
        case 0x3cb304u: goto label_3cb304;
        case 0x3cb308u: goto label_3cb308;
        case 0x3cb30cu: goto label_3cb30c;
        case 0x3cb310u: goto label_3cb310;
        case 0x3cb314u: goto label_3cb314;
        case 0x3cb318u: goto label_3cb318;
        case 0x3cb31cu: goto label_3cb31c;
        case 0x3cb320u: goto label_3cb320;
        case 0x3cb324u: goto label_3cb324;
        case 0x3cb328u: goto label_3cb328;
        case 0x3cb32cu: goto label_3cb32c;
        case 0x3cb330u: goto label_3cb330;
        case 0x3cb334u: goto label_3cb334;
        case 0x3cb338u: goto label_3cb338;
        case 0x3cb33cu: goto label_3cb33c;
        case 0x3cb340u: goto label_3cb340;
        case 0x3cb344u: goto label_3cb344;
        case 0x3cb348u: goto label_3cb348;
        case 0x3cb34cu: goto label_3cb34c;
        case 0x3cb350u: goto label_3cb350;
        case 0x3cb354u: goto label_3cb354;
        case 0x3cb358u: goto label_3cb358;
        case 0x3cb35cu: goto label_3cb35c;
        case 0x3cb360u: goto label_3cb360;
        case 0x3cb364u: goto label_3cb364;
        case 0x3cb368u: goto label_3cb368;
        case 0x3cb36cu: goto label_3cb36c;
        case 0x3cb370u: goto label_3cb370;
        case 0x3cb374u: goto label_3cb374;
        case 0x3cb378u: goto label_3cb378;
        case 0x3cb37cu: goto label_3cb37c;
        case 0x3cb380u: goto label_3cb380;
        case 0x3cb384u: goto label_3cb384;
        case 0x3cb388u: goto label_3cb388;
        case 0x3cb38cu: goto label_3cb38c;
        case 0x3cb390u: goto label_3cb390;
        case 0x3cb394u: goto label_3cb394;
        case 0x3cb398u: goto label_3cb398;
        case 0x3cb39cu: goto label_3cb39c;
        case 0x3cb3a0u: goto label_3cb3a0;
        case 0x3cb3a4u: goto label_3cb3a4;
        case 0x3cb3a8u: goto label_3cb3a8;
        case 0x3cb3acu: goto label_3cb3ac;
        case 0x3cb3b0u: goto label_3cb3b0;
        case 0x3cb3b4u: goto label_3cb3b4;
        case 0x3cb3b8u: goto label_3cb3b8;
        case 0x3cb3bcu: goto label_3cb3bc;
        case 0x3cb3c0u: goto label_3cb3c0;
        case 0x3cb3c4u: goto label_3cb3c4;
        case 0x3cb3c8u: goto label_3cb3c8;
        case 0x3cb3ccu: goto label_3cb3cc;
        case 0x3cb3d0u: goto label_3cb3d0;
        case 0x3cb3d4u: goto label_3cb3d4;
        case 0x3cb3d8u: goto label_3cb3d8;
        case 0x3cb3dcu: goto label_3cb3dc;
        case 0x3cb3e0u: goto label_3cb3e0;
        case 0x3cb3e4u: goto label_3cb3e4;
        case 0x3cb3e8u: goto label_3cb3e8;
        case 0x3cb3ecu: goto label_3cb3ec;
        case 0x3cb3f0u: goto label_3cb3f0;
        case 0x3cb3f4u: goto label_3cb3f4;
        case 0x3cb3f8u: goto label_3cb3f8;
        case 0x3cb3fcu: goto label_3cb3fc;
        case 0x3cb400u: goto label_3cb400;
        case 0x3cb404u: goto label_3cb404;
        case 0x3cb408u: goto label_3cb408;
        case 0x3cb40cu: goto label_3cb40c;
        case 0x3cb410u: goto label_3cb410;
        case 0x3cb414u: goto label_3cb414;
        case 0x3cb418u: goto label_3cb418;
        case 0x3cb41cu: goto label_3cb41c;
        case 0x3cb420u: goto label_3cb420;
        case 0x3cb424u: goto label_3cb424;
        case 0x3cb428u: goto label_3cb428;
        case 0x3cb42cu: goto label_3cb42c;
        case 0x3cb430u: goto label_3cb430;
        case 0x3cb434u: goto label_3cb434;
        case 0x3cb438u: goto label_3cb438;
        case 0x3cb43cu: goto label_3cb43c;
        case 0x3cb440u: goto label_3cb440;
        case 0x3cb444u: goto label_3cb444;
        case 0x3cb448u: goto label_3cb448;
        case 0x3cb44cu: goto label_3cb44c;
        case 0x3cb450u: goto label_3cb450;
        case 0x3cb454u: goto label_3cb454;
        case 0x3cb458u: goto label_3cb458;
        case 0x3cb45cu: goto label_3cb45c;
        case 0x3cb460u: goto label_3cb460;
        case 0x3cb464u: goto label_3cb464;
        case 0x3cb468u: goto label_3cb468;
        case 0x3cb46cu: goto label_3cb46c;
        case 0x3cb470u: goto label_3cb470;
        case 0x3cb474u: goto label_3cb474;
        case 0x3cb478u: goto label_3cb478;
        case 0x3cb47cu: goto label_3cb47c;
        case 0x3cb480u: goto label_3cb480;
        case 0x3cb484u: goto label_3cb484;
        case 0x3cb488u: goto label_3cb488;
        case 0x3cb48cu: goto label_3cb48c;
        case 0x3cb490u: goto label_3cb490;
        case 0x3cb494u: goto label_3cb494;
        case 0x3cb498u: goto label_3cb498;
        case 0x3cb49cu: goto label_3cb49c;
        case 0x3cb4a0u: goto label_3cb4a0;
        case 0x3cb4a4u: goto label_3cb4a4;
        case 0x3cb4a8u: goto label_3cb4a8;
        case 0x3cb4acu: goto label_3cb4ac;
        case 0x3cb4b0u: goto label_3cb4b0;
        case 0x3cb4b4u: goto label_3cb4b4;
        case 0x3cb4b8u: goto label_3cb4b8;
        case 0x3cb4bcu: goto label_3cb4bc;
        case 0x3cb4c0u: goto label_3cb4c0;
        case 0x3cb4c4u: goto label_3cb4c4;
        case 0x3cb4c8u: goto label_3cb4c8;
        case 0x3cb4ccu: goto label_3cb4cc;
        case 0x3cb4d0u: goto label_3cb4d0;
        case 0x3cb4d4u: goto label_3cb4d4;
        case 0x3cb4d8u: goto label_3cb4d8;
        case 0x3cb4dcu: goto label_3cb4dc;
        case 0x3cb4e0u: goto label_3cb4e0;
        case 0x3cb4e4u: goto label_3cb4e4;
        case 0x3cb4e8u: goto label_3cb4e8;
        case 0x3cb4ecu: goto label_3cb4ec;
        case 0x3cb4f0u: goto label_3cb4f0;
        case 0x3cb4f4u: goto label_3cb4f4;
        case 0x3cb4f8u: goto label_3cb4f8;
        case 0x3cb4fcu: goto label_3cb4fc;
        case 0x3cb500u: goto label_3cb500;
        case 0x3cb504u: goto label_3cb504;
        case 0x3cb508u: goto label_3cb508;
        case 0x3cb50cu: goto label_3cb50c;
        case 0x3cb510u: goto label_3cb510;
        case 0x3cb514u: goto label_3cb514;
        case 0x3cb518u: goto label_3cb518;
        case 0x3cb51cu: goto label_3cb51c;
        case 0x3cb520u: goto label_3cb520;
        case 0x3cb524u: goto label_3cb524;
        case 0x3cb528u: goto label_3cb528;
        case 0x3cb52cu: goto label_3cb52c;
        case 0x3cb530u: goto label_3cb530;
        case 0x3cb534u: goto label_3cb534;
        case 0x3cb538u: goto label_3cb538;
        case 0x3cb53cu: goto label_3cb53c;
        case 0x3cb540u: goto label_3cb540;
        case 0x3cb544u: goto label_3cb544;
        case 0x3cb548u: goto label_3cb548;
        case 0x3cb54cu: goto label_3cb54c;
        case 0x3cb550u: goto label_3cb550;
        case 0x3cb554u: goto label_3cb554;
        case 0x3cb558u: goto label_3cb558;
        case 0x3cb55cu: goto label_3cb55c;
        case 0x3cb560u: goto label_3cb560;
        case 0x3cb564u: goto label_3cb564;
        case 0x3cb568u: goto label_3cb568;
        case 0x3cb56cu: goto label_3cb56c;
        case 0x3cb570u: goto label_3cb570;
        case 0x3cb574u: goto label_3cb574;
        case 0x3cb578u: goto label_3cb578;
        case 0x3cb57cu: goto label_3cb57c;
        case 0x3cb580u: goto label_3cb580;
        case 0x3cb584u: goto label_3cb584;
        case 0x3cb588u: goto label_3cb588;
        case 0x3cb58cu: goto label_3cb58c;
        case 0x3cb590u: goto label_3cb590;
        case 0x3cb594u: goto label_3cb594;
        case 0x3cb598u: goto label_3cb598;
        case 0x3cb59cu: goto label_3cb59c;
        case 0x3cb5a0u: goto label_3cb5a0;
        case 0x3cb5a4u: goto label_3cb5a4;
        case 0x3cb5a8u: goto label_3cb5a8;
        case 0x3cb5acu: goto label_3cb5ac;
        case 0x3cb5b0u: goto label_3cb5b0;
        case 0x3cb5b4u: goto label_3cb5b4;
        case 0x3cb5b8u: goto label_3cb5b8;
        case 0x3cb5bcu: goto label_3cb5bc;
        case 0x3cb5c0u: goto label_3cb5c0;
        case 0x3cb5c4u: goto label_3cb5c4;
        case 0x3cb5c8u: goto label_3cb5c8;
        case 0x3cb5ccu: goto label_3cb5cc;
        case 0x3cb5d0u: goto label_3cb5d0;
        case 0x3cb5d4u: goto label_3cb5d4;
        case 0x3cb5d8u: goto label_3cb5d8;
        case 0x3cb5dcu: goto label_3cb5dc;
        case 0x3cb5e0u: goto label_3cb5e0;
        case 0x3cb5e4u: goto label_3cb5e4;
        case 0x3cb5e8u: goto label_3cb5e8;
        case 0x3cb5ecu: goto label_3cb5ec;
        case 0x3cb5f0u: goto label_3cb5f0;
        case 0x3cb5f4u: goto label_3cb5f4;
        case 0x3cb5f8u: goto label_3cb5f8;
        case 0x3cb5fcu: goto label_3cb5fc;
        case 0x3cb600u: goto label_3cb600;
        case 0x3cb604u: goto label_3cb604;
        case 0x3cb608u: goto label_3cb608;
        case 0x3cb60cu: goto label_3cb60c;
        case 0x3cb610u: goto label_3cb610;
        case 0x3cb614u: goto label_3cb614;
        case 0x3cb618u: goto label_3cb618;
        case 0x3cb61cu: goto label_3cb61c;
        case 0x3cb620u: goto label_3cb620;
        case 0x3cb624u: goto label_3cb624;
        case 0x3cb628u: goto label_3cb628;
        case 0x3cb62cu: goto label_3cb62c;
        case 0x3cb630u: goto label_3cb630;
        case 0x3cb634u: goto label_3cb634;
        case 0x3cb638u: goto label_3cb638;
        case 0x3cb63cu: goto label_3cb63c;
        case 0x3cb640u: goto label_3cb640;
        case 0x3cb644u: goto label_3cb644;
        case 0x3cb648u: goto label_3cb648;
        case 0x3cb64cu: goto label_3cb64c;
        case 0x3cb650u: goto label_3cb650;
        case 0x3cb654u: goto label_3cb654;
        case 0x3cb658u: goto label_3cb658;
        case 0x3cb65cu: goto label_3cb65c;
        case 0x3cb660u: goto label_3cb660;
        case 0x3cb664u: goto label_3cb664;
        case 0x3cb668u: goto label_3cb668;
        case 0x3cb66cu: goto label_3cb66c;
        case 0x3cb670u: goto label_3cb670;
        case 0x3cb674u: goto label_3cb674;
        case 0x3cb678u: goto label_3cb678;
        case 0x3cb67cu: goto label_3cb67c;
        case 0x3cb680u: goto label_3cb680;
        case 0x3cb684u: goto label_3cb684;
        case 0x3cb688u: goto label_3cb688;
        case 0x3cb68cu: goto label_3cb68c;
        case 0x3cb690u: goto label_3cb690;
        case 0x3cb694u: goto label_3cb694;
        case 0x3cb698u: goto label_3cb698;
        case 0x3cb69cu: goto label_3cb69c;
        case 0x3cb6a0u: goto label_3cb6a0;
        case 0x3cb6a4u: goto label_3cb6a4;
        case 0x3cb6a8u: goto label_3cb6a8;
        case 0x3cb6acu: goto label_3cb6ac;
        case 0x3cb6b0u: goto label_3cb6b0;
        case 0x3cb6b4u: goto label_3cb6b4;
        case 0x3cb6b8u: goto label_3cb6b8;
        case 0x3cb6bcu: goto label_3cb6bc;
        case 0x3cb6c0u: goto label_3cb6c0;
        case 0x3cb6c4u: goto label_3cb6c4;
        case 0x3cb6c8u: goto label_3cb6c8;
        case 0x3cb6ccu: goto label_3cb6cc;
        case 0x3cb6d0u: goto label_3cb6d0;
        case 0x3cb6d4u: goto label_3cb6d4;
        case 0x3cb6d8u: goto label_3cb6d8;
        case 0x3cb6dcu: goto label_3cb6dc;
        case 0x3cb6e0u: goto label_3cb6e0;
        case 0x3cb6e4u: goto label_3cb6e4;
        case 0x3cb6e8u: goto label_3cb6e8;
        case 0x3cb6ecu: goto label_3cb6ec;
        case 0x3cb6f0u: goto label_3cb6f0;
        case 0x3cb6f4u: goto label_3cb6f4;
        case 0x3cb6f8u: goto label_3cb6f8;
        case 0x3cb6fcu: goto label_3cb6fc;
        case 0x3cb700u: goto label_3cb700;
        case 0x3cb704u: goto label_3cb704;
        case 0x3cb708u: goto label_3cb708;
        case 0x3cb70cu: goto label_3cb70c;
        case 0x3cb710u: goto label_3cb710;
        case 0x3cb714u: goto label_3cb714;
        case 0x3cb718u: goto label_3cb718;
        case 0x3cb71cu: goto label_3cb71c;
        case 0x3cb720u: goto label_3cb720;
        case 0x3cb724u: goto label_3cb724;
        case 0x3cb728u: goto label_3cb728;
        case 0x3cb72cu: goto label_3cb72c;
        case 0x3cb730u: goto label_3cb730;
        case 0x3cb734u: goto label_3cb734;
        case 0x3cb738u: goto label_3cb738;
        case 0x3cb73cu: goto label_3cb73c;
        case 0x3cb740u: goto label_3cb740;
        case 0x3cb744u: goto label_3cb744;
        case 0x3cb748u: goto label_3cb748;
        case 0x3cb74cu: goto label_3cb74c;
        case 0x3cb750u: goto label_3cb750;
        case 0x3cb754u: goto label_3cb754;
        case 0x3cb758u: goto label_3cb758;
        case 0x3cb75cu: goto label_3cb75c;
        case 0x3cb760u: goto label_3cb760;
        case 0x3cb764u: goto label_3cb764;
        case 0x3cb768u: goto label_3cb768;
        case 0x3cb76cu: goto label_3cb76c;
        case 0x3cb770u: goto label_3cb770;
        case 0x3cb774u: goto label_3cb774;
        case 0x3cb778u: goto label_3cb778;
        case 0x3cb77cu: goto label_3cb77c;
        case 0x3cb780u: goto label_3cb780;
        case 0x3cb784u: goto label_3cb784;
        case 0x3cb788u: goto label_3cb788;
        case 0x3cb78cu: goto label_3cb78c;
        case 0x3cb790u: goto label_3cb790;
        case 0x3cb794u: goto label_3cb794;
        case 0x3cb798u: goto label_3cb798;
        case 0x3cb79cu: goto label_3cb79c;
        case 0x3cb7a0u: goto label_3cb7a0;
        case 0x3cb7a4u: goto label_3cb7a4;
        case 0x3cb7a8u: goto label_3cb7a8;
        case 0x3cb7acu: goto label_3cb7ac;
        case 0x3cb7b0u: goto label_3cb7b0;
        case 0x3cb7b4u: goto label_3cb7b4;
        case 0x3cb7b8u: goto label_3cb7b8;
        case 0x3cb7bcu: goto label_3cb7bc;
        case 0x3cb7c0u: goto label_3cb7c0;
        case 0x3cb7c4u: goto label_3cb7c4;
        case 0x3cb7c8u: goto label_3cb7c8;
        case 0x3cb7ccu: goto label_3cb7cc;
        case 0x3cb7d0u: goto label_3cb7d0;
        case 0x3cb7d4u: goto label_3cb7d4;
        case 0x3cb7d8u: goto label_3cb7d8;
        case 0x3cb7dcu: goto label_3cb7dc;
        case 0x3cb7e0u: goto label_3cb7e0;
        case 0x3cb7e4u: goto label_3cb7e4;
        case 0x3cb7e8u: goto label_3cb7e8;
        case 0x3cb7ecu: goto label_3cb7ec;
        case 0x3cb7f0u: goto label_3cb7f0;
        case 0x3cb7f4u: goto label_3cb7f4;
        case 0x3cb7f8u: goto label_3cb7f8;
        case 0x3cb7fcu: goto label_3cb7fc;
        case 0x3cb800u: goto label_3cb800;
        case 0x3cb804u: goto label_3cb804;
        case 0x3cb808u: goto label_3cb808;
        case 0x3cb80cu: goto label_3cb80c;
        case 0x3cb810u: goto label_3cb810;
        case 0x3cb814u: goto label_3cb814;
        case 0x3cb818u: goto label_3cb818;
        case 0x3cb81cu: goto label_3cb81c;
        case 0x3cb820u: goto label_3cb820;
        case 0x3cb824u: goto label_3cb824;
        case 0x3cb828u: goto label_3cb828;
        case 0x3cb82cu: goto label_3cb82c;
        case 0x3cb830u: goto label_3cb830;
        case 0x3cb834u: goto label_3cb834;
        case 0x3cb838u: goto label_3cb838;
        case 0x3cb83cu: goto label_3cb83c;
        case 0x3cb840u: goto label_3cb840;
        case 0x3cb844u: goto label_3cb844;
        case 0x3cb848u: goto label_3cb848;
        case 0x3cb84cu: goto label_3cb84c;
        case 0x3cb850u: goto label_3cb850;
        case 0x3cb854u: goto label_3cb854;
        case 0x3cb858u: goto label_3cb858;
        case 0x3cb85cu: goto label_3cb85c;
        case 0x3cb860u: goto label_3cb860;
        case 0x3cb864u: goto label_3cb864;
        case 0x3cb868u: goto label_3cb868;
        case 0x3cb86cu: goto label_3cb86c;
        case 0x3cb870u: goto label_3cb870;
        case 0x3cb874u: goto label_3cb874;
        case 0x3cb878u: goto label_3cb878;
        case 0x3cb87cu: goto label_3cb87c;
        case 0x3cb880u: goto label_3cb880;
        case 0x3cb884u: goto label_3cb884;
        case 0x3cb888u: goto label_3cb888;
        case 0x3cb88cu: goto label_3cb88c;
        case 0x3cb890u: goto label_3cb890;
        case 0x3cb894u: goto label_3cb894;
        case 0x3cb898u: goto label_3cb898;
        case 0x3cb89cu: goto label_3cb89c;
        case 0x3cb8a0u: goto label_3cb8a0;
        case 0x3cb8a4u: goto label_3cb8a4;
        case 0x3cb8a8u: goto label_3cb8a8;
        case 0x3cb8acu: goto label_3cb8ac;
        case 0x3cb8b0u: goto label_3cb8b0;
        case 0x3cb8b4u: goto label_3cb8b4;
        case 0x3cb8b8u: goto label_3cb8b8;
        case 0x3cb8bcu: goto label_3cb8bc;
        case 0x3cb8c0u: goto label_3cb8c0;
        case 0x3cb8c4u: goto label_3cb8c4;
        case 0x3cb8c8u: goto label_3cb8c8;
        case 0x3cb8ccu: goto label_3cb8cc;
        case 0x3cb8d0u: goto label_3cb8d0;
        case 0x3cb8d4u: goto label_3cb8d4;
        case 0x3cb8d8u: goto label_3cb8d8;
        case 0x3cb8dcu: goto label_3cb8dc;
        case 0x3cb8e0u: goto label_3cb8e0;
        case 0x3cb8e4u: goto label_3cb8e4;
        case 0x3cb8e8u: goto label_3cb8e8;
        case 0x3cb8ecu: goto label_3cb8ec;
        case 0x3cb8f0u: goto label_3cb8f0;
        case 0x3cb8f4u: goto label_3cb8f4;
        case 0x3cb8f8u: goto label_3cb8f8;
        case 0x3cb8fcu: goto label_3cb8fc;
        case 0x3cb900u: goto label_3cb900;
        case 0x3cb904u: goto label_3cb904;
        case 0x3cb908u: goto label_3cb908;
        case 0x3cb90cu: goto label_3cb90c;
        case 0x3cb910u: goto label_3cb910;
        case 0x3cb914u: goto label_3cb914;
        case 0x3cb918u: goto label_3cb918;
        case 0x3cb91cu: goto label_3cb91c;
        case 0x3cb920u: goto label_3cb920;
        case 0x3cb924u: goto label_3cb924;
        case 0x3cb928u: goto label_3cb928;
        case 0x3cb92cu: goto label_3cb92c;
        case 0x3cb930u: goto label_3cb930;
        case 0x3cb934u: goto label_3cb934;
        case 0x3cb938u: goto label_3cb938;
        case 0x3cb93cu: goto label_3cb93c;
        case 0x3cb940u: goto label_3cb940;
        case 0x3cb944u: goto label_3cb944;
        case 0x3cb948u: goto label_3cb948;
        case 0x3cb94cu: goto label_3cb94c;
        case 0x3cb950u: goto label_3cb950;
        case 0x3cb954u: goto label_3cb954;
        case 0x3cb958u: goto label_3cb958;
        case 0x3cb95cu: goto label_3cb95c;
        case 0x3cb960u: goto label_3cb960;
        case 0x3cb964u: goto label_3cb964;
        case 0x3cb968u: goto label_3cb968;
        case 0x3cb96cu: goto label_3cb96c;
        case 0x3cb970u: goto label_3cb970;
        case 0x3cb974u: goto label_3cb974;
        case 0x3cb978u: goto label_3cb978;
        case 0x3cb97cu: goto label_3cb97c;
        case 0x3cb980u: goto label_3cb980;
        case 0x3cb984u: goto label_3cb984;
        case 0x3cb988u: goto label_3cb988;
        case 0x3cb98cu: goto label_3cb98c;
        case 0x3cb990u: goto label_3cb990;
        case 0x3cb994u: goto label_3cb994;
        case 0x3cb998u: goto label_3cb998;
        case 0x3cb99cu: goto label_3cb99c;
        case 0x3cb9a0u: goto label_3cb9a0;
        case 0x3cb9a4u: goto label_3cb9a4;
        case 0x3cb9a8u: goto label_3cb9a8;
        case 0x3cb9acu: goto label_3cb9ac;
        case 0x3cb9b0u: goto label_3cb9b0;
        case 0x3cb9b4u: goto label_3cb9b4;
        case 0x3cb9b8u: goto label_3cb9b8;
        case 0x3cb9bcu: goto label_3cb9bc;
        case 0x3cb9c0u: goto label_3cb9c0;
        case 0x3cb9c4u: goto label_3cb9c4;
        case 0x3cb9c8u: goto label_3cb9c8;
        case 0x3cb9ccu: goto label_3cb9cc;
        case 0x3cb9d0u: goto label_3cb9d0;
        case 0x3cb9d4u: goto label_3cb9d4;
        case 0x3cb9d8u: goto label_3cb9d8;
        case 0x3cb9dcu: goto label_3cb9dc;
        case 0x3cb9e0u: goto label_3cb9e0;
        case 0x3cb9e4u: goto label_3cb9e4;
        case 0x3cb9e8u: goto label_3cb9e8;
        case 0x3cb9ecu: goto label_3cb9ec;
        case 0x3cb9f0u: goto label_3cb9f0;
        case 0x3cb9f4u: goto label_3cb9f4;
        case 0x3cb9f8u: goto label_3cb9f8;
        case 0x3cb9fcu: goto label_3cb9fc;
        case 0x3cba00u: goto label_3cba00;
        case 0x3cba04u: goto label_3cba04;
        case 0x3cba08u: goto label_3cba08;
        case 0x3cba0cu: goto label_3cba0c;
        case 0x3cba10u: goto label_3cba10;
        case 0x3cba14u: goto label_3cba14;
        case 0x3cba18u: goto label_3cba18;
        case 0x3cba1cu: goto label_3cba1c;
        case 0x3cba20u: goto label_3cba20;
        case 0x3cba24u: goto label_3cba24;
        case 0x3cba28u: goto label_3cba28;
        case 0x3cba2cu: goto label_3cba2c;
        case 0x3cba30u: goto label_3cba30;
        case 0x3cba34u: goto label_3cba34;
        case 0x3cba38u: goto label_3cba38;
        case 0x3cba3cu: goto label_3cba3c;
        case 0x3cba40u: goto label_3cba40;
        case 0x3cba44u: goto label_3cba44;
        case 0x3cba48u: goto label_3cba48;
        case 0x3cba4cu: goto label_3cba4c;
        case 0x3cba50u: goto label_3cba50;
        case 0x3cba54u: goto label_3cba54;
        case 0x3cba58u: goto label_3cba58;
        case 0x3cba5cu: goto label_3cba5c;
        case 0x3cba60u: goto label_3cba60;
        case 0x3cba64u: goto label_3cba64;
        case 0x3cba68u: goto label_3cba68;
        case 0x3cba6cu: goto label_3cba6c;
        case 0x3cba70u: goto label_3cba70;
        case 0x3cba74u: goto label_3cba74;
        case 0x3cba78u: goto label_3cba78;
        case 0x3cba7cu: goto label_3cba7c;
        case 0x3cba80u: goto label_3cba80;
        case 0x3cba84u: goto label_3cba84;
        case 0x3cba88u: goto label_3cba88;
        case 0x3cba8cu: goto label_3cba8c;
        case 0x3cba90u: goto label_3cba90;
        case 0x3cba94u: goto label_3cba94;
        case 0x3cba98u: goto label_3cba98;
        case 0x3cba9cu: goto label_3cba9c;
        case 0x3cbaa0u: goto label_3cbaa0;
        case 0x3cbaa4u: goto label_3cbaa4;
        case 0x3cbaa8u: goto label_3cbaa8;
        case 0x3cbaacu: goto label_3cbaac;
        case 0x3cbab0u: goto label_3cbab0;
        case 0x3cbab4u: goto label_3cbab4;
        case 0x3cbab8u: goto label_3cbab8;
        case 0x3cbabcu: goto label_3cbabc;
        case 0x3cbac0u: goto label_3cbac0;
        case 0x3cbac4u: goto label_3cbac4;
        case 0x3cbac8u: goto label_3cbac8;
        case 0x3cbaccu: goto label_3cbacc;
        case 0x3cbad0u: goto label_3cbad0;
        case 0x3cbad4u: goto label_3cbad4;
        case 0x3cbad8u: goto label_3cbad8;
        case 0x3cbadcu: goto label_3cbadc;
        case 0x3cbae0u: goto label_3cbae0;
        case 0x3cbae4u: goto label_3cbae4;
        case 0x3cbae8u: goto label_3cbae8;
        case 0x3cbaecu: goto label_3cbaec;
        case 0x3cbaf0u: goto label_3cbaf0;
        case 0x3cbaf4u: goto label_3cbaf4;
        case 0x3cbaf8u: goto label_3cbaf8;
        case 0x3cbafcu: goto label_3cbafc;
        case 0x3cbb00u: goto label_3cbb00;
        case 0x3cbb04u: goto label_3cbb04;
        case 0x3cbb08u: goto label_3cbb08;
        case 0x3cbb0cu: goto label_3cbb0c;
        case 0x3cbb10u: goto label_3cbb10;
        case 0x3cbb14u: goto label_3cbb14;
        case 0x3cbb18u: goto label_3cbb18;
        case 0x3cbb1cu: goto label_3cbb1c;
        case 0x3cbb20u: goto label_3cbb20;
        case 0x3cbb24u: goto label_3cbb24;
        case 0x3cbb28u: goto label_3cbb28;
        case 0x3cbb2cu: goto label_3cbb2c;
        case 0x3cbb30u: goto label_3cbb30;
        case 0x3cbb34u: goto label_3cbb34;
        case 0x3cbb38u: goto label_3cbb38;
        case 0x3cbb3cu: goto label_3cbb3c;
        case 0x3cbb40u: goto label_3cbb40;
        case 0x3cbb44u: goto label_3cbb44;
        case 0x3cbb48u: goto label_3cbb48;
        case 0x3cbb4cu: goto label_3cbb4c;
        case 0x3cbb50u: goto label_3cbb50;
        case 0x3cbb54u: goto label_3cbb54;
        case 0x3cbb58u: goto label_3cbb58;
        case 0x3cbb5cu: goto label_3cbb5c;
        case 0x3cbb60u: goto label_3cbb60;
        case 0x3cbb64u: goto label_3cbb64;
        case 0x3cbb68u: goto label_3cbb68;
        case 0x3cbb6cu: goto label_3cbb6c;
        case 0x3cbb70u: goto label_3cbb70;
        case 0x3cbb74u: goto label_3cbb74;
        case 0x3cbb78u: goto label_3cbb78;
        case 0x3cbb7cu: goto label_3cbb7c;
        case 0x3cbb80u: goto label_3cbb80;
        case 0x3cbb84u: goto label_3cbb84;
        case 0x3cbb88u: goto label_3cbb88;
        case 0x3cbb8cu: goto label_3cbb8c;
        case 0x3cbb90u: goto label_3cbb90;
        case 0x3cbb94u: goto label_3cbb94;
        case 0x3cbb98u: goto label_3cbb98;
        case 0x3cbb9cu: goto label_3cbb9c;
        case 0x3cbba0u: goto label_3cbba0;
        case 0x3cbba4u: goto label_3cbba4;
        case 0x3cbba8u: goto label_3cbba8;
        case 0x3cbbacu: goto label_3cbbac;
        case 0x3cbbb0u: goto label_3cbbb0;
        case 0x3cbbb4u: goto label_3cbbb4;
        case 0x3cbbb8u: goto label_3cbbb8;
        case 0x3cbbbcu: goto label_3cbbbc;
        case 0x3cbbc0u: goto label_3cbbc0;
        case 0x3cbbc4u: goto label_3cbbc4;
        case 0x3cbbc8u: goto label_3cbbc8;
        case 0x3cbbccu: goto label_3cbbcc;
        case 0x3cbbd0u: goto label_3cbbd0;
        case 0x3cbbd4u: goto label_3cbbd4;
        case 0x3cbbd8u: goto label_3cbbd8;
        case 0x3cbbdcu: goto label_3cbbdc;
        case 0x3cbbe0u: goto label_3cbbe0;
        case 0x3cbbe4u: goto label_3cbbe4;
        case 0x3cbbe8u: goto label_3cbbe8;
        case 0x3cbbecu: goto label_3cbbec;
        case 0x3cbbf0u: goto label_3cbbf0;
        case 0x3cbbf4u: goto label_3cbbf4;
        case 0x3cbbf8u: goto label_3cbbf8;
        case 0x3cbbfcu: goto label_3cbbfc;
        case 0x3cbc00u: goto label_3cbc00;
        case 0x3cbc04u: goto label_3cbc04;
        case 0x3cbc08u: goto label_3cbc08;
        case 0x3cbc0cu: goto label_3cbc0c;
        case 0x3cbc10u: goto label_3cbc10;
        case 0x3cbc14u: goto label_3cbc14;
        case 0x3cbc18u: goto label_3cbc18;
        case 0x3cbc1cu: goto label_3cbc1c;
        case 0x3cbc20u: goto label_3cbc20;
        case 0x3cbc24u: goto label_3cbc24;
        case 0x3cbc28u: goto label_3cbc28;
        case 0x3cbc2cu: goto label_3cbc2c;
        case 0x3cbc30u: goto label_3cbc30;
        case 0x3cbc34u: goto label_3cbc34;
        case 0x3cbc38u: goto label_3cbc38;
        case 0x3cbc3cu: goto label_3cbc3c;
        case 0x3cbc40u: goto label_3cbc40;
        case 0x3cbc44u: goto label_3cbc44;
        case 0x3cbc48u: goto label_3cbc48;
        case 0x3cbc4cu: goto label_3cbc4c;
        case 0x3cbc50u: goto label_3cbc50;
        case 0x3cbc54u: goto label_3cbc54;
        case 0x3cbc58u: goto label_3cbc58;
        case 0x3cbc5cu: goto label_3cbc5c;
        case 0x3cbc60u: goto label_3cbc60;
        case 0x3cbc64u: goto label_3cbc64;
        case 0x3cbc68u: goto label_3cbc68;
        case 0x3cbc6cu: goto label_3cbc6c;
        case 0x3cbc70u: goto label_3cbc70;
        case 0x3cbc74u: goto label_3cbc74;
        case 0x3cbc78u: goto label_3cbc78;
        case 0x3cbc7cu: goto label_3cbc7c;
        case 0x3cbc80u: goto label_3cbc80;
        case 0x3cbc84u: goto label_3cbc84;
        case 0x3cbc88u: goto label_3cbc88;
        case 0x3cbc8cu: goto label_3cbc8c;
        case 0x3cbc90u: goto label_3cbc90;
        case 0x3cbc94u: goto label_3cbc94;
        case 0x3cbc98u: goto label_3cbc98;
        case 0x3cbc9cu: goto label_3cbc9c;
        case 0x3cbca0u: goto label_3cbca0;
        case 0x3cbca4u: goto label_3cbca4;
        case 0x3cbca8u: goto label_3cbca8;
        case 0x3cbcacu: goto label_3cbcac;
        case 0x3cbcb0u: goto label_3cbcb0;
        case 0x3cbcb4u: goto label_3cbcb4;
        case 0x3cbcb8u: goto label_3cbcb8;
        case 0x3cbcbcu: goto label_3cbcbc;
        case 0x3cbcc0u: goto label_3cbcc0;
        case 0x3cbcc4u: goto label_3cbcc4;
        case 0x3cbcc8u: goto label_3cbcc8;
        case 0x3cbcccu: goto label_3cbccc;
        case 0x3cbcd0u: goto label_3cbcd0;
        case 0x3cbcd4u: goto label_3cbcd4;
        case 0x3cbcd8u: goto label_3cbcd8;
        case 0x3cbcdcu: goto label_3cbcdc;
        case 0x3cbce0u: goto label_3cbce0;
        case 0x3cbce4u: goto label_3cbce4;
        case 0x3cbce8u: goto label_3cbce8;
        case 0x3cbcecu: goto label_3cbcec;
        case 0x3cbcf0u: goto label_3cbcf0;
        case 0x3cbcf4u: goto label_3cbcf4;
        case 0x3cbcf8u: goto label_3cbcf8;
        case 0x3cbcfcu: goto label_3cbcfc;
        case 0x3cbd00u: goto label_3cbd00;
        case 0x3cbd04u: goto label_3cbd04;
        case 0x3cbd08u: goto label_3cbd08;
        case 0x3cbd0cu: goto label_3cbd0c;
        case 0x3cbd10u: goto label_3cbd10;
        case 0x3cbd14u: goto label_3cbd14;
        case 0x3cbd18u: goto label_3cbd18;
        case 0x3cbd1cu: goto label_3cbd1c;
        case 0x3cbd20u: goto label_3cbd20;
        case 0x3cbd24u: goto label_3cbd24;
        case 0x3cbd28u: goto label_3cbd28;
        case 0x3cbd2cu: goto label_3cbd2c;
        case 0x3cbd30u: goto label_3cbd30;
        case 0x3cbd34u: goto label_3cbd34;
        case 0x3cbd38u: goto label_3cbd38;
        case 0x3cbd3cu: goto label_3cbd3c;
        case 0x3cbd40u: goto label_3cbd40;
        case 0x3cbd44u: goto label_3cbd44;
        case 0x3cbd48u: goto label_3cbd48;
        case 0x3cbd4cu: goto label_3cbd4c;
        case 0x3cbd50u: goto label_3cbd50;
        case 0x3cbd54u: goto label_3cbd54;
        case 0x3cbd58u: goto label_3cbd58;
        case 0x3cbd5cu: goto label_3cbd5c;
        case 0x3cbd60u: goto label_3cbd60;
        case 0x3cbd64u: goto label_3cbd64;
        case 0x3cbd68u: goto label_3cbd68;
        case 0x3cbd6cu: goto label_3cbd6c;
        case 0x3cbd70u: goto label_3cbd70;
        case 0x3cbd74u: goto label_3cbd74;
        case 0x3cbd78u: goto label_3cbd78;
        case 0x3cbd7cu: goto label_3cbd7c;
        case 0x3cbd80u: goto label_3cbd80;
        case 0x3cbd84u: goto label_3cbd84;
        case 0x3cbd88u: goto label_3cbd88;
        case 0x3cbd8cu: goto label_3cbd8c;
        case 0x3cbd90u: goto label_3cbd90;
        case 0x3cbd94u: goto label_3cbd94;
        case 0x3cbd98u: goto label_3cbd98;
        case 0x3cbd9cu: goto label_3cbd9c;
        case 0x3cbda0u: goto label_3cbda0;
        case 0x3cbda4u: goto label_3cbda4;
        case 0x3cbda8u: goto label_3cbda8;
        case 0x3cbdacu: goto label_3cbdac;
        case 0x3cbdb0u: goto label_3cbdb0;
        case 0x3cbdb4u: goto label_3cbdb4;
        case 0x3cbdb8u: goto label_3cbdb8;
        case 0x3cbdbcu: goto label_3cbdbc;
        case 0x3cbdc0u: goto label_3cbdc0;
        case 0x3cbdc4u: goto label_3cbdc4;
        case 0x3cbdc8u: goto label_3cbdc8;
        case 0x3cbdccu: goto label_3cbdcc;
        case 0x3cbdd0u: goto label_3cbdd0;
        case 0x3cbdd4u: goto label_3cbdd4;
        case 0x3cbdd8u: goto label_3cbdd8;
        case 0x3cbddcu: goto label_3cbddc;
        case 0x3cbde0u: goto label_3cbde0;
        case 0x3cbde4u: goto label_3cbde4;
        case 0x3cbde8u: goto label_3cbde8;
        case 0x3cbdecu: goto label_3cbdec;
        case 0x3cbdf0u: goto label_3cbdf0;
        case 0x3cbdf4u: goto label_3cbdf4;
        case 0x3cbdf8u: goto label_3cbdf8;
        case 0x3cbdfcu: goto label_3cbdfc;
        case 0x3cbe00u: goto label_3cbe00;
        case 0x3cbe04u: goto label_3cbe04;
        case 0x3cbe08u: goto label_3cbe08;
        case 0x3cbe0cu: goto label_3cbe0c;
        case 0x3cbe10u: goto label_3cbe10;
        case 0x3cbe14u: goto label_3cbe14;
        case 0x3cbe18u: goto label_3cbe18;
        case 0x3cbe1cu: goto label_3cbe1c;
        case 0x3cbe20u: goto label_3cbe20;
        case 0x3cbe24u: goto label_3cbe24;
        case 0x3cbe28u: goto label_3cbe28;
        case 0x3cbe2cu: goto label_3cbe2c;
        case 0x3cbe30u: goto label_3cbe30;
        case 0x3cbe34u: goto label_3cbe34;
        case 0x3cbe38u: goto label_3cbe38;
        case 0x3cbe3cu: goto label_3cbe3c;
        case 0x3cbe40u: goto label_3cbe40;
        case 0x3cbe44u: goto label_3cbe44;
        case 0x3cbe48u: goto label_3cbe48;
        case 0x3cbe4cu: goto label_3cbe4c;
        case 0x3cbe50u: goto label_3cbe50;
        case 0x3cbe54u: goto label_3cbe54;
        case 0x3cbe58u: goto label_3cbe58;
        case 0x3cbe5cu: goto label_3cbe5c;
        case 0x3cbe60u: goto label_3cbe60;
        case 0x3cbe64u: goto label_3cbe64;
        case 0x3cbe68u: goto label_3cbe68;
        case 0x3cbe6cu: goto label_3cbe6c;
        case 0x3cbe70u: goto label_3cbe70;
        case 0x3cbe74u: goto label_3cbe74;
        case 0x3cbe78u: goto label_3cbe78;
        case 0x3cbe7cu: goto label_3cbe7c;
        case 0x3cbe80u: goto label_3cbe80;
        case 0x3cbe84u: goto label_3cbe84;
        case 0x3cbe88u: goto label_3cbe88;
        case 0x3cbe8cu: goto label_3cbe8c;
        case 0x3cbe90u: goto label_3cbe90;
        case 0x3cbe94u: goto label_3cbe94;
        case 0x3cbe98u: goto label_3cbe98;
        case 0x3cbe9cu: goto label_3cbe9c;
        case 0x3cbea0u: goto label_3cbea0;
        case 0x3cbea4u: goto label_3cbea4;
        case 0x3cbea8u: goto label_3cbea8;
        case 0x3cbeacu: goto label_3cbeac;
        case 0x3cbeb0u: goto label_3cbeb0;
        case 0x3cbeb4u: goto label_3cbeb4;
        case 0x3cbeb8u: goto label_3cbeb8;
        case 0x3cbebcu: goto label_3cbebc;
        case 0x3cbec0u: goto label_3cbec0;
        case 0x3cbec4u: goto label_3cbec4;
        case 0x3cbec8u: goto label_3cbec8;
        case 0x3cbeccu: goto label_3cbecc;
        case 0x3cbed0u: goto label_3cbed0;
        case 0x3cbed4u: goto label_3cbed4;
        case 0x3cbed8u: goto label_3cbed8;
        case 0x3cbedcu: goto label_3cbedc;
        case 0x3cbee0u: goto label_3cbee0;
        case 0x3cbee4u: goto label_3cbee4;
        case 0x3cbee8u: goto label_3cbee8;
        case 0x3cbeecu: goto label_3cbeec;
        case 0x3cbef0u: goto label_3cbef0;
        case 0x3cbef4u: goto label_3cbef4;
        case 0x3cbef8u: goto label_3cbef8;
        case 0x3cbefcu: goto label_3cbefc;
        case 0x3cbf00u: goto label_3cbf00;
        case 0x3cbf04u: goto label_3cbf04;
        case 0x3cbf08u: goto label_3cbf08;
        case 0x3cbf0cu: goto label_3cbf0c;
        case 0x3cbf10u: goto label_3cbf10;
        case 0x3cbf14u: goto label_3cbf14;
        case 0x3cbf18u: goto label_3cbf18;
        case 0x3cbf1cu: goto label_3cbf1c;
        case 0x3cbf20u: goto label_3cbf20;
        case 0x3cbf24u: goto label_3cbf24;
        case 0x3cbf28u: goto label_3cbf28;
        case 0x3cbf2cu: goto label_3cbf2c;
        case 0x3cbf30u: goto label_3cbf30;
        case 0x3cbf34u: goto label_3cbf34;
        case 0x3cbf38u: goto label_3cbf38;
        case 0x3cbf3cu: goto label_3cbf3c;
        case 0x3cbf40u: goto label_3cbf40;
        case 0x3cbf44u: goto label_3cbf44;
        case 0x3cbf48u: goto label_3cbf48;
        case 0x3cbf4cu: goto label_3cbf4c;
        case 0x3cbf50u: goto label_3cbf50;
        case 0x3cbf54u: goto label_3cbf54;
        case 0x3cbf58u: goto label_3cbf58;
        case 0x3cbf5cu: goto label_3cbf5c;
        case 0x3cbf60u: goto label_3cbf60;
        case 0x3cbf64u: goto label_3cbf64;
        case 0x3cbf68u: goto label_3cbf68;
        case 0x3cbf6cu: goto label_3cbf6c;
        case 0x3cbf70u: goto label_3cbf70;
        case 0x3cbf74u: goto label_3cbf74;
        case 0x3cbf78u: goto label_3cbf78;
        case 0x3cbf7cu: goto label_3cbf7c;
        case 0x3cbf80u: goto label_3cbf80;
        case 0x3cbf84u: goto label_3cbf84;
        case 0x3cbf88u: goto label_3cbf88;
        case 0x3cbf8cu: goto label_3cbf8c;
        case 0x3cbf90u: goto label_3cbf90;
        case 0x3cbf94u: goto label_3cbf94;
        case 0x3cbf98u: goto label_3cbf98;
        case 0x3cbf9cu: goto label_3cbf9c;
        case 0x3cbfa0u: goto label_3cbfa0;
        case 0x3cbfa4u: goto label_3cbfa4;
        case 0x3cbfa8u: goto label_3cbfa8;
        case 0x3cbfacu: goto label_3cbfac;
        case 0x3cbfb0u: goto label_3cbfb0;
        case 0x3cbfb4u: goto label_3cbfb4;
        case 0x3cbfb8u: goto label_3cbfb8;
        case 0x3cbfbcu: goto label_3cbfbc;
        case 0x3cbfc0u: goto label_3cbfc0;
        case 0x3cbfc4u: goto label_3cbfc4;
        case 0x3cbfc8u: goto label_3cbfc8;
        case 0x3cbfccu: goto label_3cbfcc;
        case 0x3cbfd0u: goto label_3cbfd0;
        case 0x3cbfd4u: goto label_3cbfd4;
        case 0x3cbfd8u: goto label_3cbfd8;
        case 0x3cbfdcu: goto label_3cbfdc;
        case 0x3cbfe0u: goto label_3cbfe0;
        case 0x3cbfe4u: goto label_3cbfe4;
        case 0x3cbfe8u: goto label_3cbfe8;
        case 0x3cbfecu: goto label_3cbfec;
        case 0x3cbff0u: goto label_3cbff0;
        case 0x3cbff4u: goto label_3cbff4;
        case 0x3cbff8u: goto label_3cbff8;
        case 0x3cbffcu: goto label_3cbffc;
        case 0x3cc000u: goto label_3cc000;
        case 0x3cc004u: goto label_3cc004;
        case 0x3cc008u: goto label_3cc008;
        case 0x3cc00cu: goto label_3cc00c;
        case 0x3cc010u: goto label_3cc010;
        case 0x3cc014u: goto label_3cc014;
        case 0x3cc018u: goto label_3cc018;
        case 0x3cc01cu: goto label_3cc01c;
        case 0x3cc020u: goto label_3cc020;
        case 0x3cc024u: goto label_3cc024;
        case 0x3cc028u: goto label_3cc028;
        case 0x3cc02cu: goto label_3cc02c;
        case 0x3cc030u: goto label_3cc030;
        case 0x3cc034u: goto label_3cc034;
        case 0x3cc038u: goto label_3cc038;
        case 0x3cc03cu: goto label_3cc03c;
        case 0x3cc040u: goto label_3cc040;
        case 0x3cc044u: goto label_3cc044;
        case 0x3cc048u: goto label_3cc048;
        case 0x3cc04cu: goto label_3cc04c;
        case 0x3cc050u: goto label_3cc050;
        case 0x3cc054u: goto label_3cc054;
        case 0x3cc058u: goto label_3cc058;
        case 0x3cc05cu: goto label_3cc05c;
        case 0x3cc060u: goto label_3cc060;
        case 0x3cc064u: goto label_3cc064;
        case 0x3cc068u: goto label_3cc068;
        case 0x3cc06cu: goto label_3cc06c;
        case 0x3cc070u: goto label_3cc070;
        case 0x3cc074u: goto label_3cc074;
        case 0x3cc078u: goto label_3cc078;
        case 0x3cc07cu: goto label_3cc07c;
        case 0x3cc080u: goto label_3cc080;
        case 0x3cc084u: goto label_3cc084;
        case 0x3cc088u: goto label_3cc088;
        case 0x3cc08cu: goto label_3cc08c;
        case 0x3cc090u: goto label_3cc090;
        case 0x3cc094u: goto label_3cc094;
        default: break;
    }

    ctx->pc = 0x3cb220u;

label_3cb220:
    // 0x3cb220: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3cb220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3cb224:
    // 0x3cb224: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3cb224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3cb228:
    // 0x3cb228: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3cb228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3cb22c:
    // 0x3cb22c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cb22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cb230:
    // 0x3cb230: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3cb230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3cb234:
    // 0x3cb234: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3cb234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb238:
    // 0x3cb238: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3cb238u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cb23c:
    // 0x3cb23c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cb240:
    // 0x3cb240: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3cb240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3cb244:
    // 0x3cb244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb248:
    // 0x3cb248: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3cb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3cb24c:
    // 0x3cb24c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3cb24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3cb250:
    // 0x3cb250: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3cb250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3cb254:
    // 0x3cb254: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3cb254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_3cb258:
    // 0x3cb258: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3cb258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3cb25c:
    // 0x3cb25c: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x3cb25cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3cb260:
    // 0x3cb260: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x3cb260u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3cb264:
    // 0x3cb264: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x3cb264u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3cb268:
    // 0x3cb268: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x3cb268u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3cb26c:
    // 0x3cb26c: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3cb26cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3cb270:
    // 0x3cb270: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3cb270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3cb274:
    // 0x3cb274: 0xc0ea12a  jal         func_3A84A8
label_3cb278:
    if (ctx->pc == 0x3CB278u) {
        ctx->pc = 0x3CB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB274u;
        // 0x3cb278: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB27Cu;
        goto label_3cb27c;
    }
    ctx->pc = 0x3CB274u;
    SET_GPR_U32(ctx, 31, 0x3CB27Cu);
    ctx->pc = 0x3CB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB274u;
    // 0x3cb278: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CB274u, 0x3CB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB27Cu;
label_3cb27c:
    // 0x3cb27c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cb27cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb280:
    // 0x3cb280: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cb280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cb284:
    // 0x3cb284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb288:
    // 0x3cb288: 0xc0ea12a  jal         func_3A84A8
label_3cb28c:
    if (ctx->pc == 0x3CB28Cu) {
        ctx->pc = 0x3CB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB288u;
        // 0x3cb28c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB290u;
        goto label_3cb290;
    }
    ctx->pc = 0x3CB288u;
    SET_GPR_U32(ctx, 31, 0x3CB290u);
    ctx->pc = 0x3CB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB288u;
    // 0x3cb28c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CB288u, 0x3CB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB290u;
label_3cb290:
    // 0x3cb290: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cb290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb294:
    // 0x3cb294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb298:
    // 0x3cb298: 0xc0ea146  jal         func_3A8518
label_3cb29c:
    if (ctx->pc == 0x3CB29Cu) {
        ctx->pc = 0x3CB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB298u;
        // 0x3cb29c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2A0u;
        goto label_3cb2a0;
    }
    ctx->pc = 0x3CB298u;
    SET_GPR_U32(ctx, 31, 0x3CB2A0u);
    ctx->pc = 0x3CB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB298u;
    // 0x3cb29c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CB298u, 0x3CB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2A0u;
label_3cb2a0:
    // 0x3cb2a0: 0xc0ea146  jal         func_3A8518
label_3cb2a4:
    if (ctx->pc == 0x3CB2A4u) {
        ctx->pc = 0x3CB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2A0u;
        // 0x3cb2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2A8u;
        goto label_3cb2a8;
    }
    ctx->pc = 0x3CB2A0u;
    SET_GPR_U32(ctx, 31, 0x3CB2A8u);
    ctx->pc = 0x3CB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2A0u;
    // 0x3cb2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CB2A0u, 0x3CB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2A8u;
label_3cb2a8:
    // 0x3cb2a8: 0xc0ea14c  jal         func_3A8530
label_3cb2ac:
    if (ctx->pc == 0x3CB2ACu) {
        ctx->pc = 0x3CB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2A8u;
        // 0x3cb2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2B0u;
        goto label_3cb2b0;
    }
    ctx->pc = 0x3CB2A8u;
    SET_GPR_U32(ctx, 31, 0x3CB2B0u);
    ctx->pc = 0x3CB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2A8u;
    // 0x3cb2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CB2A8u, 0x3CB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2B0u;
label_3cb2b0:
    // 0x3cb2b0: 0xc0ea14c  jal         func_3A8530
label_3cb2b4:
    if (ctx->pc == 0x3CB2B4u) {
        ctx->pc = 0x3CB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2B0u;
        // 0x3cb2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2B8u;
        goto label_3cb2b8;
    }
    ctx->pc = 0x3CB2B0u;
    SET_GPR_U32(ctx, 31, 0x3CB2B8u);
    ctx->pc = 0x3CB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2B0u;
    // 0x3cb2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CB2B0u, 0x3CB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2B8u;
label_3cb2b8:
    // 0x3cb2b8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3cb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3cb2bc:
    // 0x3cb2bc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3cb2c0:
    if (ctx->pc == 0x3CB2C0u) {
        ctx->pc = 0x3CB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2BCu;
        // 0x3cb2c0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2C4u;
        goto label_3cb2c4;
    }
    ctx->pc = 0x3CB2BCu;
    {
        const bool branch_taken_0x3cb2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2BCu;
        // 0x3cb2c0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb2bc) {
            ctx->pc = 0x3CB2ECu;
            goto label_3cb2ec;
        }
    }
    ctx->pc = 0x3CB2C4u;
label_3cb2c4:
    // 0x3cb2c4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3cb2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb2c8:
    // 0x3cb2c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cb2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2cc:
    // 0x3cb2cc: 0xc0e90ca  jal         func_3A4328
label_3cb2d0:
    if (ctx->pc == 0x3CB2D0u) {
        ctx->pc = 0x3CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2CCu;
        // 0x3cb2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2D4u;
        goto label_3cb2d4;
    }
    ctx->pc = 0x3CB2CCu;
    SET_GPR_U32(ctx, 31, 0x3CB2D4u);
    ctx->pc = 0x3CB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2CCu;
    // 0x3cb2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CB2CCu, 0x3CB2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2D4u;
label_3cb2d4:
    // 0x3cb2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb2d8:
    // 0x3cb2d8: 0xc0e91f0  jal         func_3A47C0
label_3cb2dc:
    if (ctx->pc == 0x3CB2DCu) {
        ctx->pc = 0x3CB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB2D8u;
        // 0x3cb2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB2E0u;
        goto label_3cb2e0;
    }
    ctx->pc = 0x3CB2D8u;
    SET_GPR_U32(ctx, 31, 0x3CB2E0u);
    ctx->pc = 0x3CB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB2D8u;
    // 0x3cb2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CB2D8u, 0x3CB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB2E0u;
label_3cb2e0:
    // 0x3cb2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb2e4:
    // 0x3cb2e4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x3cb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_3cb2e8:
    // 0x3cb2e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3cb2e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb2ec:
    // 0x3cb2ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3cb2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3cb2f0:
    // 0x3cb2f0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3cb2f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cb2f4:
    // 0x3cb2f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3cb2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cb2f8:
    // 0x3cb2f8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3cb2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3cb2fc:
    // 0x3cb2fc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3cb2fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3cb300:
    // 0x3cb300: 0x4a0003bf  vwaitq
    ctx->pc = 0x3cb300u;
    // VWAITQ (Q already resolved in this runtime)
label_3cb304:
    // 0x3cb304: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3cb304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3cb308:
    // 0x3cb308: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3cb308u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3cb30c:
    // 0x3cb30c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3cb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3cb310:
    // 0x3cb310: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3cb310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3cb314:
    // 0x3cb314: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3cb314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3cb318:
    // 0x3cb318: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb31c:
    // 0x3cb31c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3cb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3cb320:
    // 0x3cb320: 0x1460034a  bnez        $v1, . + 4 + (0x34A << 2)
label_3cb324:
    if (ctx->pc == 0x3CB324u) {
        ctx->pc = 0x3CB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB320u;
        // 0x3cb324: 0x8e7600c4  lw          $s6, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB328u;
        goto label_3cb328;
    }
    ctx->pc = 0x3CB320u;
    {
        const bool branch_taken_0x3cb320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB320u;
        // 0x3cb324: 0x8e7600c4  lw          $s6, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb320) {
            ctx->pc = 0x3CC04Cu;
            goto label_3cc04c;
        }
    }
    ctx->pc = 0x3CB328u;
label_3cb328:
    // 0x3cb328: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3cb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3cb32c:
    // 0x3cb32c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3cb32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3cb330:
    // 0x3cb330: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cb330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cb334:
    // 0x3cb334: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x3cb334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3cb338:
    // 0x3cb338: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3cb338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3cb33c:
    // 0x3cb33c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cb33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cb340:
    // 0x3cb340: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cb340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cb344:
    // 0x3cb344: 0xc0e9168  jal         func_3A45A0
label_3cb348:
    if (ctx->pc == 0x3CB348u) {
        ctx->pc = 0x3CB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB344u;
        // 0x3cb348: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB34Cu;
        goto label_3cb34c;
    }
    ctx->pc = 0x3CB344u;
    SET_GPR_U32(ctx, 31, 0x3CB34Cu);
    ctx->pc = 0x3CB348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB344u;
    // 0x3cb348: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45A0u, 0x3CB344u, 0x3CB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB34Cu;
label_3cb34c:
    // 0x3cb34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cb34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cb350:
    // 0x3cb350: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3cb350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3cb354:
    // 0x3cb354: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3cb354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3cb358:
    // 0x3cb358: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3cb358u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3cb35c:
    // 0x3cb35c: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3cb35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3cb360:
    // 0x3cb360: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3cb360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3cb364:
    // 0x3cb364: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3cb364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3cb368:
    // 0x3cb368: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3cb368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3cb36c:
    // 0x3cb36c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3cb36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3cb370:
    // 0x3cb370: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3cb370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3cb374:
    // 0x3cb374: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cb374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cb378:
    // 0x3cb378: 0xc0cd518  jal         func_335460
label_3cb37c:
    if (ctx->pc == 0x3CB37Cu) {
        ctx->pc = 0x3CB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB378u;
        // 0x3cb37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB380u;
        goto label_3cb380;
    }
    ctx->pc = 0x3CB378u;
    SET_GPR_U32(ctx, 31, 0x3CB380u);
    ctx->pc = 0x3CB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB378u;
    // 0x3cb37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CB378u, 0x3CB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB380u;
label_3cb380:
    // 0x3cb380: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3cb380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3cb384:
    // 0x3cb384: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3cb384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3cb388:
    // 0x3cb388: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cb388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cb38c:
    // 0x3cb38c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3cb38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb390:
    // 0x3cb390: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3cb390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3cb394:
    // 0x3cb394: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb394u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb398:
    // 0x3cb398: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cb398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb39c:
    // 0x3cb39c: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb39cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb3a0:
    // 0x3cb3a0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cb3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb3a4:
    // 0x3cb3a4: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3cb3a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cb3a8:
    // 0x3cb3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb3ac:
    // 0x3cb3ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3cb3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3cb3b0:
    // 0x3cb3b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cb3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cb3b4:
    // 0x3cb3b4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3cb3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb3b8:
    // 0x3cb3b8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb3bc:
    // 0x3cb3bc: 0xc136b18  jal         func_4DAC60
label_3cb3c0:
    if (ctx->pc == 0x3CB3C0u) {
        ctx->pc = 0x3CB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3BCu;
        // 0x3cb3c0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3C4u;
        goto label_3cb3c4;
    }
    ctx->pc = 0x3CB3BCu;
    SET_GPR_U32(ctx, 31, 0x3CB3C4u);
    ctx->pc = 0x3CB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB3BCu;
    // 0x3cb3c0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CB3BCu, 0x3CB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB3C4u;
label_3cb3c4:
    // 0x3cb3c4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb3c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb3c8:
    // 0x3cb3c8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x3cb3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cb3cc:
    // 0x3cb3cc: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3cb3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3cb3d0:
    // 0x3cb3d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cb3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb3d4:
    // 0x3cb3d4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3cb3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3cb3d8:
    // 0x3cb3d8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb3dc:
    // 0x3cb3dc: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3cb3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3cb3e0:
    // 0x3cb3e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cb3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cb3e4:
    // 0x3cb3e4: 0xc0f15f6  jal         func_3C57D8
label_3cb3e8:
    if (ctx->pc == 0x3CB3E8u) {
        ctx->pc = 0x3CB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3E4u;
        // 0x3cb3e8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3ECu;
        goto label_3cb3ec;
    }
    ctx->pc = 0x3CB3E4u;
    SET_GPR_U32(ctx, 31, 0x3CB3ECu);
    ctx->pc = 0x3CB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB3E4u;
    // 0x3cb3e8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3CB3E4u, 0x3CB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB3ECu;
label_3cb3ec:
    // 0x3cb3ec: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3cb3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3cb3f0:
    // 0x3cb3f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3cb3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cb3f4:
    // 0x3cb3f4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3cb3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3cb3f8:
    // 0x3cb3f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cb3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb3fc:
    // 0x3cb3fc: 0xc0cd518  jal         func_335460
label_3cb400:
    if (ctx->pc == 0x3CB400u) {
        ctx->pc = 0x3CB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3FCu;
        // 0x3cb400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB404u;
        goto label_3cb404;
    }
    ctx->pc = 0x3CB3FCu;
    SET_GPR_U32(ctx, 31, 0x3CB404u);
    ctx->pc = 0x3CB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB3FCu;
    // 0x3cb400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3CB3FCu, 0x3CB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB404u;
label_3cb404:
    // 0x3cb404: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3cb404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3cb408:
    // 0x3cb408: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cb408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb40c:
    // 0x3cb40c: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb40cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb410:
    // 0x3cb410: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cb410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb414:
    // 0x3cb414: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb414u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb418:
    // 0x3cb418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb41c:
    // 0x3cb41c: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3cb41cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cb420:
    // 0x3cb420: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb424:
    // 0x3cb424: 0xc136b18  jal         func_4DAC60
label_3cb428:
    if (ctx->pc == 0x3CB428u) {
        ctx->pc = 0x3CB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB424u;
        // 0x3cb428: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB42Cu;
        goto label_3cb42c;
    }
    ctx->pc = 0x3CB424u;
    SET_GPR_U32(ctx, 31, 0x3CB42Cu);
    ctx->pc = 0x3CB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB424u;
    // 0x3cb428: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CB424u, 0x3CB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB42Cu;
label_3cb42c:
    // 0x3cb42c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb42cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb430:
    // 0x3cb430: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3cb430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3cb434:
    // 0x3cb434: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3cb434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3cb438:
    // 0x3cb438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cb438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb43c:
    // 0x3cb43c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cb43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cb440:
    // 0x3cb440: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb444:
    // 0x3cb444: 0xc0f15f6  jal         func_3C57D8
label_3cb448:
    if (ctx->pc == 0x3CB448u) {
        ctx->pc = 0x3CB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB444u;
        // 0x3cb448: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB44Cu;
        goto label_3cb44c;
    }
    ctx->pc = 0x3CB444u;
    SET_GPR_U32(ctx, 31, 0x3CB44Cu);
    ctx->pc = 0x3CB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB444u;
    // 0x3cb448: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3CB444u, 0x3CB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB44Cu;
label_3cb44c:
    // 0x3cb44c: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb44cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb450:
    // 0x3cb450: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cb450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cb454:
    // 0x3cb454: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb454u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb458:
    // 0x3cb458: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cb458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb45c:
    // 0x3cb45c: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x3cb45cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3cb460:
    // 0x3cb460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb464:
    // 0x3cb464: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3cb464u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cb468:
    // 0x3cb468: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb46c:
    // 0x3cb46c: 0xc136b18  jal         func_4DAC60
label_3cb470:
    if (ctx->pc == 0x3CB470u) {
        ctx->pc = 0x3CB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB46Cu;
        // 0x3cb470: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB474u;
        goto label_3cb474;
    }
    ctx->pc = 0x3CB46Cu;
    SET_GPR_U32(ctx, 31, 0x3CB474u);
    ctx->pc = 0x3CB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB46Cu;
    // 0x3cb470: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CB46Cu, 0x3CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB474u;
label_3cb474:
    // 0x3cb474: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb478:
    // 0x3cb478: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cb478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cb47c:
    // 0x3cb47c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3cb47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3cb480:
    // 0x3cb480: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cb480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cb484:
    // 0x3cb484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cb484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb488:
    // 0x3cb488: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3cb488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb48c:
    // 0x3cb48c: 0xc136b24  jal         func_4DAC90
label_3cb490:
    if (ctx->pc == 0x3CB490u) {
        ctx->pc = 0x3CB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB48Cu;
        // 0x3cb490: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB494u;
        goto label_3cb494;
    }
    ctx->pc = 0x3CB48Cu;
    SET_GPR_U32(ctx, 31, 0x3CB494u);
    ctx->pc = 0x3CB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB48Cu;
    // 0x3cb490: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3CB48Cu, 0x3CB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB494u;
label_3cb494:
    // 0x3cb494: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3cb494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cb498:
    // 0x3cb498: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3cb498u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3cb49c:
    // 0x3cb49c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3cb49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3cb4a0:
    // 0x3cb4a0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3cb4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3cb4a4:
    // 0x3cb4a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cb4a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cb4a8:
    // 0x3cb4a8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3cb4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3cb4ac:
    // 0x3cb4ac: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3cb4acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3cb4b0:
    // 0x3cb4b0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x3cb4b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_3cb4b4:
    // 0x3cb4b4: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3cb4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3cb4b8:
    // 0x3cb4b8: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3cb4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3cb4bc:
    // 0x3cb4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cb4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cb4c0:
    // 0x3cb4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb4c4:
    // 0x3cb4c4: 0xc0f16c0  jal         func_3C5B00
label_3cb4c8:
    if (ctx->pc == 0x3CB4C8u) {
        ctx->pc = 0x3CB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4C4u;
        // 0x3cb4c8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4CCu;
        goto label_3cb4cc;
    }
    ctx->pc = 0x3CB4C4u;
    SET_GPR_U32(ctx, 31, 0x3CB4CCu);
    ctx->pc = 0x3CB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB4C4u;
    // 0x3cb4c8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3CB4C4u, 0x3CB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB4CCu;
label_3cb4cc:
    // 0x3cb4cc: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb4ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb4d0:
    // 0x3cb4d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cb4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb4d4:
    // 0x3cb4d4: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb4d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb4d8:
    // 0x3cb4d8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cb4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb4dc:
    // 0x3cb4dc: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x3cb4dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3cb4e0:
    // 0x3cb4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb4e4:
    // 0x3cb4e4: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3cb4e4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cb4e8:
    // 0x3cb4e8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb4ec:
    // 0x3cb4ec: 0xc136b18  jal         func_4DAC60
label_3cb4f0:
    if (ctx->pc == 0x3CB4F0u) {
        ctx->pc = 0x3CB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB4ECu;
        // 0x3cb4f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB4F4u;
        goto label_3cb4f4;
    }
    ctx->pc = 0x3CB4ECu;
    SET_GPR_U32(ctx, 31, 0x3CB4F4u);
    ctx->pc = 0x3CB4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB4ECu;
    // 0x3cb4f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CB4ECu, 0x3CB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB4F4u;
label_3cb4f4:
    // 0x3cb4f4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb4f8:
    // 0x3cb4f8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3cb4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb4fc:
    // 0x3cb4fc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3cb4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3cb500:
    // 0x3cb500: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3cb500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3cb504:
    // 0x3cb504: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3cb504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3cb508:
    // 0x3cb508: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3cb508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3cb50c:
    // 0x3cb50c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb510:
    // 0x3cb510: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3cb510u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3cb514:
    // 0x3cb514: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x3cb514u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_3cb518:
    // 0x3cb518: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3cb518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3cb51c:
    // 0x3cb51c: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3cb51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3cb520:
    // 0x3cb520: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cb520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cb524:
    // 0x3cb524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cb524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb528:
    // 0x3cb528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cb528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cb52c:
    // 0x3cb52c: 0xc0f16c0  jal         func_3C5B00
label_3cb530:
    if (ctx->pc == 0x3CB530u) {
        ctx->pc = 0x3CB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB52Cu;
        // 0x3cb530: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB534u;
        goto label_3cb534;
    }
    ctx->pc = 0x3CB52Cu;
    SET_GPR_U32(ctx, 31, 0x3CB534u);
    ctx->pc = 0x3CB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB52Cu;
    // 0x3cb530: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3CB52Cu, 0x3CB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB534u;
label_3cb534:
    // 0x3cb534: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb534u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb538:
    // 0x3cb538: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cb538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb53c:
    // 0x3cb53c: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb53cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb540:
    // 0x3cb540: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3cb540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb544:
    // 0x3cb544: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x3cb544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3cb548:
    // 0x3cb548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb54c:
    // 0x3cb54c: 0xe61a000c  swc1        $f26, 0xC($s0)
    ctx->pc = 0x3cb54cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cb550:
    // 0x3cb550: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb554:
    // 0x3cb554: 0xc136b18  jal         func_4DAC60
label_3cb558:
    if (ctx->pc == 0x3CB558u) {
        ctx->pc = 0x3CB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB554u;
        // 0x3cb558: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB55Cu;
        goto label_3cb55c;
    }
    ctx->pc = 0x3CB554u;
    SET_GPR_U32(ctx, 31, 0x3CB55Cu);
    ctx->pc = 0x3CB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB554u;
    // 0x3cb558: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3CB554u, 0x3CB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB55Cu;
label_3cb55c:
    // 0x3cb55c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb55cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb560:
    // 0x3cb560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cb560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb564:
    // 0x3cb564: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cb568:
    // 0x3cb568: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3cb568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3cb56c:
    // 0x3cb56c: 0xc136b24  jal         func_4DAC90
label_3cb570:
    if (ctx->pc == 0x3CB570u) {
        ctx->pc = 0x3CB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB56Cu;
        // 0x3cb570: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB574u;
        goto label_3cb574;
    }
    ctx->pc = 0x3CB56Cu;
    SET_GPR_U32(ctx, 31, 0x3CB574u);
    ctx->pc = 0x3CB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB56Cu;
    // 0x3cb570: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3CB56Cu, 0x3CB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB574u;
label_3cb574:
    // 0x3cb574: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3cb574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cb578:
    // 0x3cb578: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3cb578u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3cb57c:
    // 0x3cb57c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3cb57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3cb580:
    // 0x3cb580: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3cb580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3cb584:
    // 0x3cb584: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cb584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cb588:
    // 0x3cb588: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3cb588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3cb58c:
    // 0x3cb58c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x3cb58cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_3cb590:
    // 0x3cb590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cb590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cb594:
    // 0x3cb594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb598:
    // 0x3cb598: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3cb598u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3cb59c:
    // 0x3cb59c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3cb59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3cb5a0:
    // 0x3cb5a0: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3cb5a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3cb5a4:
    // 0x3cb5a4: 0xc0f16c0  jal         func_3C5B00
label_3cb5a8:
    if (ctx->pc == 0x3CB5A8u) {
        ctx->pc = 0x3CB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5A4u;
        // 0x3cb5a8: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5ACu;
        goto label_3cb5ac;
    }
    ctx->pc = 0x3CB5A4u;
    SET_GPR_U32(ctx, 31, 0x3CB5ACu);
    ctx->pc = 0x3CB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB5A4u;
    // 0x3cb5a8: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3CB5A4u, 0x3CB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB5ACu;
label_3cb5ac:
    // 0x3cb5ac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3cb5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_3cb5b0:
    // 0x3cb5b0: 0x34424d2d  ori         $v0, $v0, 0x4D2D
    ctx->pc = 0x3cb5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19757);
label_3cb5b4:
    // 0x3cb5b4: 0x16c2008f  bne         $s6, $v0, . + 4 + (0x8F << 2)
label_3cb5b8:
    if (ctx->pc == 0x3CB5B8u) {
        ctx->pc = 0x3CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5B4u;
        // 0x3cb5b8: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5BCu;
        goto label_3cb5bc;
    }
    ctx->pc = 0x3CB5B4u;
    {
        const bool branch_taken_0x3cb5b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5B4u;
        // 0x3cb5b8: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5b4) {
            ctx->pc = 0x3CB7F4u;
            goto label_3cb7f4;
        }
    }
    ctx->pc = 0x3CB5BCu;
label_3cb5bc:
    // 0x3cb5bc: 0x3c013ece  lui         $at, 0x3ECE
    ctx->pc = 0x3cb5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16078 << 16));
label_3cb5c0:
    // 0x3cb5c0: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cb5c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cb5c4:
    // 0x3cb5c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb5c8:
    // 0x3cb5c8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cb5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cb5cc:
    // 0x3cb5cc: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x3cb5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_3cb5d0:
    // 0x3cb5d0: 0x3421cb71  ori         $at, $at, 0xCB71
    ctx->pc = 0x3cb5d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52081);
label_3cb5d4:
    // 0x3cb5d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cb5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cb5d8:
    // 0x3cb5d8: 0x261047c8  addiu       $s0, $s0, 0x47C8
    ctx->pc = 0x3cb5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18376));
label_3cb5dc:
    // 0x3cb5dc: 0xe7b90060  swc1        $f25, 0x60($sp)
    ctx->pc = 0x3cb5dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb5e0:
    // 0x3cb5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5e4:
    // 0x3cb5e4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cb5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb5e8:
    // 0x3cb5e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5ec:
    // 0x3cb5ec: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cb5ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb5f0:
    // 0x3cb5f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5f4:
    // 0x3cb5f4: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb5f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb5f8:
    // 0x3cb5f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5fc:
    // 0x3cb5fc: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb5fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb600:
    // 0x3cb600: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb604:
    // 0x3cb604: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb604u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb608:
    // 0x3cb608: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb60c:
    // 0x3cb60c: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x3cb60cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3cb610:
    // 0x3cb610: 0xe6ba000c  swc1        $f26, 0xC($s5)
    ctx->pc = 0x3cb610u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cb614:
    // 0x3cb614: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3cb614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3cb618:
    // 0x3cb618: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cb618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cb61c:
    // 0x3cb61c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb61cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb620:
    // 0x3cb620: 0x3c013cb8  lui         $at, 0x3CB8
    ctx->pc = 0x3cb620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15544 << 16));
label_3cb624:
    // 0x3cb624: 0x3421da3c  ori         $at, $at, 0xDA3C
    ctx->pc = 0x3cb624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55868);
label_3cb628:
    // 0x3cb628: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cb628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cb62c:
    // 0x3cb62c: 0xc0e954c  jal         func_3A5530
label_3cb630:
    if (ctx->pc == 0x3CB630u) {
        ctx->pc = 0x3CB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB62Cu;
        // 0x3cb630: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB634u;
        goto label_3cb634;
    }
    ctx->pc = 0x3CB62Cu;
    SET_GPR_U32(ctx, 31, 0x3CB634u);
    ctx->pc = 0x3CB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB62Cu;
    // 0x3cb630: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB62Cu, 0x3CB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB634u;
label_3cb634:
    // 0x3cb634: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x3cb634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
label_3cb638:
    // 0x3cb638: 0x342119b1  ori         $at, $at, 0x19B1
    ctx->pc = 0x3cb638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6577);
label_3cb63c:
    // 0x3cb63c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cb63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cb640:
    // 0x3cb640: 0x3c01bece  lui         $at, 0xBECE
    ctx->pc = 0x3cb640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48846 << 16));
label_3cb644:
    // 0x3cb644: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cb644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cb648:
    // 0x3cb648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb64c:
    // 0x3cb64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb650:
    // 0x3cb650: 0xe7b90060  swc1        $f25, 0x60($sp)
    ctx->pc = 0x3cb650u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb654:
    // 0x3cb654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb658:
    // 0x3cb658: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cb658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb65c:
    // 0x3cb65c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb660:
    // 0x3cb660: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cb660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb664:
    // 0x3cb664: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb668:
    // 0x3cb668: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb668u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb66c:
    // 0x3cb66c: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb66cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb670:
    // 0x3cb670: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb674:
    // 0x3cb674: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb674u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb678:
    // 0x3cb678: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb67c:
    // 0x3cb67c: 0xe7b9007c  swc1        $f25, 0x7C($sp)
    ctx->pc = 0x3cb67cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3cb680:
    // 0x3cb680: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3cb680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cb684:
    // 0x3cb684: 0x3c01bf08  lui         $at, 0xBF08
    ctx->pc = 0x3cb684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48904 << 16));
label_3cb688:
    // 0x3cb688: 0x3421c804  ori         $at, $at, 0xC804
    ctx->pc = 0x3cb688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51204);
label_3cb68c:
    // 0x3cb68c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cb68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3cb690:
    // 0x3cb690: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb694:
    // 0x3cb694: 0xc0e954c  jal         func_3A5530
label_3cb698:
    if (ctx->pc == 0x3CB698u) {
        ctx->pc = 0x3CB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB694u;
        // 0x3cb698: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB69Cu;
        goto label_3cb69c;
    }
    ctx->pc = 0x3CB694u;
    SET_GPR_U32(ctx, 31, 0x3CB69Cu);
    ctx->pc = 0x3CB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB694u;
    // 0x3cb698: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB694u, 0x3CB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB69Cu;
label_3cb69c:
    // 0x3cb69c: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cb69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cb6a0:
    // 0x3cb6a0: 0x3421aca8  ori         $at, $at, 0xACA8
    ctx->pc = 0x3cb6a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44200);
label_3cb6a4:
    // 0x3cb6a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb6a8:
    // 0x3cb6a8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cb6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cb6ac:
    // 0x3cb6ac: 0x261047d8  addiu       $s0, $s0, 0x47D8
    ctx->pc = 0x3cb6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18392));
label_3cb6b0:
    // 0x3cb6b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb6b4:
    // 0x3cb6b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb6b8:
    // 0x3cb6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb6bc:
    // 0x3cb6bc: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x3cb6bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb6c0:
    // 0x3cb6c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb6c4:
    // 0x3cb6c4: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3cb6c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb6c8:
    // 0x3cb6c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb6cc:
    // 0x3cb6cc: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb6ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb6d0:
    // 0x3cb6d0: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb6d0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb6d4:
    // 0x3cb6d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb6d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb6d8:
    // 0x3cb6d8: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb6d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb6dc:
    // 0x3cb6dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb6e0:
    // 0x3cb6e0: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x3cb6e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3cb6e4:
    // 0x3cb6e4: 0xe6ba000c  swc1        $f26, 0xC($s5)
    ctx->pc = 0x3cb6e4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cb6e8:
    // 0x3cb6e8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb6e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb6ec:
    // 0x3cb6ec: 0xc0e954c  jal         func_3A5530
label_3cb6f0:
    if (ctx->pc == 0x3CB6F0u) {
        ctx->pc = 0x3CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6ECu;
        // 0x3cb6f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6F4u;
        goto label_3cb6f4;
    }
    ctx->pc = 0x3CB6ECu;
    SET_GPR_U32(ctx, 31, 0x3CB6F4u);
    ctx->pc = 0x3CB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB6ECu;
    // 0x3cb6f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB6ECu, 0x3CB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB6F4u;
label_3cb6f4:
    // 0x3cb6f4: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cb6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cb6f8:
    // 0x3cb6f8: 0x342176f7  ori         $at, $at, 0x76F7
    ctx->pc = 0x3cb6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30455);
label_3cb6fc:
    // 0x3cb6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb700:
    // 0x3cb700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb704:
    // 0x3cb704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb708:
    // 0x3cb708: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb70c:
    // 0x3cb70c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb710:
    // 0x3cb710: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb714:
    // 0x3cb714: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x3cb714u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb718:
    // 0x3cb718: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3cb718u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb71c:
    // 0x3cb71c: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb71cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb720:
    // 0x3cb720: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb720u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb724:
    // 0x3cb724: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb728:
    // 0x3cb728: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb728u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb72c:
    // 0x3cb72c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb730:
    // 0x3cb730: 0xe7b9007c  swc1        $f25, 0x7C($sp)
    ctx->pc = 0x3cb730u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3cb734:
    // 0x3cb734: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3cb734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cb738:
    // 0x3cb738: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb73c:
    // 0x3cb73c: 0xc0e954c  jal         func_3A5530
label_3cb740:
    if (ctx->pc == 0x3CB740u) {
        ctx->pc = 0x3CB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB73Cu;
        // 0x3cb740: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB744u;
        goto label_3cb744;
    }
    ctx->pc = 0x3CB73Cu;
    SET_GPR_U32(ctx, 31, 0x3CB744u);
    ctx->pc = 0x3CB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB73Cu;
    // 0x3cb740: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB73Cu, 0x3CB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB744u;
label_3cb744:
    // 0x3cb744: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cb744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cb748:
    // 0x3cb748: 0x34210026  ori         $at, $at, 0x26
    ctx->pc = 0x3cb748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38);
label_3cb74c:
    // 0x3cb74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb750:
    // 0x3cb750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb754:
    // 0x3cb754: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x3cb754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
label_3cb758:
    // 0x3cb758: 0x3421e421  ori         $at, $at, 0xE421
    ctx->pc = 0x3cb758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58401);
label_3cb75c:
    // 0x3cb75c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cb75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb760:
    // 0x3cb760: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb764:
    // 0x3cb764: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb768:
    // 0x3cb768: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb76c:
    // 0x3cb76c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3cb76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb770:
    // 0x3cb770: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb774:
    // 0x3cb774: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cb774u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb778:
    // 0x3cb778: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb778u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb77c:
    // 0x3cb77c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb77cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb780:
    // 0x3cb780: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb784:
    // 0x3cb784: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3cb784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cb788:
    // 0x3cb788: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb788u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb78c:
    // 0x3cb78c: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb78cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb790:
    // 0x3cb790: 0xe7b9007c  swc1        $f25, 0x7C($sp)
    ctx->pc = 0x3cb790u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3cb794:
    // 0x3cb794: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb798:
    // 0x3cb798: 0xc0e954c  jal         func_3A5530
label_3cb79c:
    if (ctx->pc == 0x3CB79Cu) {
        ctx->pc = 0x3CB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB798u;
        // 0x3cb79c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7A0u;
        goto label_3cb7a0;
    }
    ctx->pc = 0x3CB798u;
    SET_GPR_U32(ctx, 31, 0x3CB7A0u);
    ctx->pc = 0x3CB79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB798u;
    // 0x3cb79c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB798u, 0x3CB7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB7A0u;
label_3cb7a0:
    // 0x3cb7a0: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cb7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cb7a4:
    // 0x3cb7a4: 0x34212b49  ori         $at, $at, 0x2B49
    ctx->pc = 0x3cb7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11081);
label_3cb7a8:
    // 0x3cb7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb7ac:
    // 0x3cb7ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3cb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3cb7b0:
    // 0x3cb7b0: 0x248447e8  addiu       $a0, $a0, 0x47E8
    ctx->pc = 0x3cb7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18408));
label_3cb7b4:
    // 0x3cb7b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7b8:
    // 0x3cb7b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb7bc:
    // 0x3cb7bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7c0:
    // 0x3cb7c0: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cb7c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb7c4:
    // 0x3cb7c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb7c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7c8:
    // 0x3cb7c8: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3cb7c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb7cc:
    // 0x3cb7cc: 0xe63a000c  swc1        $f26, 0xC($s1)
    ctx->pc = 0x3cb7ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb7d0:
    // 0x3cb7d0: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x3cb7d0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3cb7d4:
    // 0x3cb7d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb7d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb7d8:
    // 0x3cb7d8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb7dc:
    // 0x3cb7dc: 0xe6ba000c  swc1        $f26, 0xC($s5)
    ctx->pc = 0x3cb7dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cb7e0:
    // 0x3cb7e0: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x3cb7e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb7e4:
    // 0x3cb7e4: 0xe7b90074  swc1        $f25, 0x74($sp)
    ctx->pc = 0x3cb7e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb7e8:
    // 0x3cb7e8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb7ec:
    // 0x3cb7ec: 0xc0e954c  jal         func_3A5530
label_3cb7f0:
    if (ctx->pc == 0x3CB7F0u) {
        ctx->pc = 0x3CB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7ECu;
        // 0x3cb7f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB7F4u;
        goto label_3cb7f4;
    }
    ctx->pc = 0x3CB7ECu;
    SET_GPR_U32(ctx, 31, 0x3CB7F4u);
    ctx->pc = 0x3CB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB7ECu;
    // 0x3cb7f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB7ECu, 0x3CB7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB7F4u;
label_3cb7f4:
    // 0x3cb7f4: 0x3c02baff  lui         $v0, 0xBAFF
    ctx->pc = 0x3cb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47871 << 16));
label_3cb7f8:
    // 0x3cb7f8: 0x3442425f  ori         $v0, $v0, 0x425F
    ctx->pc = 0x3cb7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16991);
label_3cb7fc:
    // 0x3cb7fc: 0x12c2000d  beq         $s6, $v0, . + 4 + (0xD << 2)
label_3cb800:
    if (ctx->pc == 0x3CB800u) {
        ctx->pc = 0x3CB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7FCu;
        // 0x3cb800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB804u;
        goto label_3cb804;
    }
    ctx->pc = 0x3CB7FCu;
    {
        const bool branch_taken_0x3cb7fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB7FCu;
        // 0x3cb800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb7fc) {
            ctx->pc = 0x3CB834u;
            goto label_3cb834;
        }
    }
    ctx->pc = 0x3CB804u;
label_3cb804:
    // 0x3cb804: 0x3c02ea90  lui         $v0, 0xEA90
    ctx->pc = 0x3cb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60048 << 16));
label_3cb808:
    // 0x3cb808: 0x344227a8  ori         $v0, $v0, 0x27A8
    ctx->pc = 0x3cb808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10152);
label_3cb80c:
    // 0x3cb80c: 0x12c20008  beq         $s6, $v0, . + 4 + (0x8 << 2)
label_3cb810:
    if (ctx->pc == 0x3CB810u) {
        ctx->pc = 0x3CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB80Cu;
        // 0x3cb810: 0x3c021c92  lui         $v0, 0x1C92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7314 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB814u;
        goto label_3cb814;
    }
    ctx->pc = 0x3CB80Cu;
    {
        const bool branch_taken_0x3cb80c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB80Cu;
        // 0x3cb810: 0x3c021c92  lui         $v0, 0x1C92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7314 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb80c) {
            ctx->pc = 0x3CB830u;
            goto label_3cb830;
        }
    }
    ctx->pc = 0x3CB814u;
label_3cb814:
    // 0x3cb814: 0x34423a0a  ori         $v0, $v0, 0x3A0A
    ctx->pc = 0x3cb814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14858);
label_3cb818:
    // 0x3cb818: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
label_3cb81c:
    if (ctx->pc == 0x3CB81Cu) {
        ctx->pc = 0x3CB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB818u;
        // 0x3cb81c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB820u;
        goto label_3cb820;
    }
    ctx->pc = 0x3CB818u;
    {
        const bool branch_taken_0x3cb818 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB818u;
        // 0x3cb81c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb818) {
            ctx->pc = 0x3CB834u;
            goto label_3cb834;
        }
    }
    ctx->pc = 0x3CB820u;
label_3cb820:
    // 0x3cb820: 0x3c02cdf8  lui         $v0, 0xCDF8
    ctx->pc = 0x3cb820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52728 << 16));
label_3cb824:
    // 0x3cb824: 0x344272c9  ori         $v0, $v0, 0x72C9
    ctx->pc = 0x3cb824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29385);
label_3cb828:
    // 0x3cb828: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
label_3cb82c:
    if (ctx->pc == 0x3CB82Cu) {
        ctx->pc = 0x3CB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB828u;
        // 0x3cb82c: 0x3c0279a3  lui         $v0, 0x79A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31139 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB830u;
        goto label_3cb830;
    }
    ctx->pc = 0x3CB828u;
    {
        const bool branch_taken_0x3cb828 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB828u;
        // 0x3cb82c: 0x3c0279a3  lui         $v0, 0x79A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31139 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb828) {
            ctx->pc = 0x3CB894u;
            goto label_3cb894;
        }
    }
    ctx->pc = 0x3CB830u;
label_3cb830:
    // 0x3cb830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cb830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb834:
    // 0x3cb834: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x3cb834u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_3cb838:
    // 0x3cb838: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3cb838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cb83c:
    // 0x3cb83c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3cb83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3cb840:
    // 0x3cb840: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3cb840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3cb844:
    // 0x3cb844: 0x40f809  jalr        $v0
label_3cb848:
    if (ctx->pc == 0x3CB848u) {
        ctx->pc = 0x3CB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB844u;
        // 0x3cb848: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB84Cu;
        goto label_3cb84c;
    }
    ctx->pc = 0x3CB844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CB84Cu);
        ctx->pc = 0x3CB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB844u;
        // 0x3cb848: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB844u, 0x3CB84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB84Cu;
label_3cb84c:
    // 0x3cb84c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cb84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cb850:
    // 0x3cb850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb854:
    // 0x3cb854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cb854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb858:
    // 0x3cb858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cb858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cb85c:
    // 0x3cb85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cb85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb860:
    // 0x3cb860: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb864:
    // 0x3cb864: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cb864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cb868:
    // 0x3cb868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cb868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb86c:
    // 0x3cb86c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3cb86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3cb870:
    // 0x3cb870: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3cb870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb874:
    // 0x3cb874: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3cb874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb878:
    // 0x3cb878: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3cb878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3cb87c:
    // 0x3cb87c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3cb87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3cb880:
    // 0x3cb880: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cb880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cb884:
    // 0x3cb884: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb888:
    // 0x3cb888: 0xc0e5874  jal         func_3961D0
label_3cb88c:
    if (ctx->pc == 0x3CB88Cu) {
        ctx->pc = 0x3CB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB888u;
        // 0x3cb88c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB890u;
        goto label_3cb890;
    }
    ctx->pc = 0x3CB888u;
    SET_GPR_U32(ctx, 31, 0x3CB890u);
    ctx->pc = 0x3CB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB888u;
    // 0x3cb88c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3961D0u, 0x3CB888u, 0x3CB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB890u;
label_3cb890:
    // 0x3cb890: 0x3c0279a3  lui         $v0, 0x79A3
    ctx->pc = 0x3cb890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31139 << 16));
label_3cb894:
    // 0x3cb894: 0x3442f589  ori         $v0, $v0, 0xF589
    ctx->pc = 0x3cb894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62857);
label_3cb898:
    // 0x3cb898: 0x16c20092  bne         $s6, $v0, . + 4 + (0x92 << 2)
label_3cb89c:
    if (ctx->pc == 0x3CB89Cu) {
        ctx->pc = 0x3CB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB898u;
        // 0x3cb89c: 0x3c026acf  lui         $v0, 0x6ACF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27343 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8A0u;
        goto label_3cb8a0;
    }
    ctx->pc = 0x3CB898u;
    {
        const bool branch_taken_0x3cb898 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB898u;
        // 0x3cb89c: 0x3c026acf  lui         $v0, 0x6ACF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27343 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb898) {
            ctx->pc = 0x3CBAE4u;
            goto label_3cbae4;
        }
    }
    ctx->pc = 0x3CB8A0u;
label_3cb8a0:
    // 0x3cb8a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cb8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cb8a4:
    // 0x3cb8a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cb8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cb8a8:
    // 0x3cb8a8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cb8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cb8ac:
    // 0x3cb8ac: 0x3c013ece  lui         $at, 0x3ECE
    ctx->pc = 0x3cb8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16078 << 16));
label_3cb8b0:
    // 0x3cb8b0: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cb8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cb8b4:
    // 0x3cb8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb8b8:
    // 0x3cb8b8: 0x261047f8  addiu       $s0, $s0, 0x47F8
    ctx->pc = 0x3cb8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18424));
label_3cb8bc:
    // 0x3cb8bc: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x3cb8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_3cb8c0:
    // 0x3cb8c0: 0x3421cb71  ori         $at, $at, 0xCB71
    ctx->pc = 0x3cb8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52081);
label_3cb8c4:
    // 0x3cb8c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cb8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cb8c8:
    // 0x3cb8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb8cc:
    // 0x3cb8cc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cb8d0:
    // 0x3cb8d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb8d4:
    // 0x3cb8d4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cb8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb8d8:
    // 0x3cb8d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb8dc:
    // 0x3cb8dc: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cb8dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb8e0:
    // 0x3cb8e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb8e4:
    // 0x3cb8e4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cb8e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb8e8:
    // 0x3cb8e8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cb8ec:
    // 0x3cb8ec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb8ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb8f0:
    // 0x3cb8f0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cb8f4:
    // 0x3cb8f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb8f8:
    // 0x3cb8f8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cb8fc:
    // 0x3cb8fc: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cb8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cb900:
    // 0x3cb900: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3cb900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3cb904:
    // 0x3cb904: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cb904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cb908:
    // 0x3cb908: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb90c:
    // 0x3cb90c: 0x3c013cb8  lui         $at, 0x3CB8
    ctx->pc = 0x3cb90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15544 << 16));
label_3cb910:
    // 0x3cb910: 0x3421da3c  ori         $at, $at, 0xDA3C
    ctx->pc = 0x3cb910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55868);
label_3cb914:
    // 0x3cb914: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cb914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cb918:
    // 0x3cb918: 0xc0e954c  jal         func_3A5530
label_3cb91c:
    if (ctx->pc == 0x3CB91Cu) {
        ctx->pc = 0x3CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB918u;
        // 0x3cb91c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB920u;
        goto label_3cb920;
    }
    ctx->pc = 0x3CB918u;
    SET_GPR_U32(ctx, 31, 0x3CB920u);
    ctx->pc = 0x3CB91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB918u;
    // 0x3cb91c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB918u, 0x3CB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB920u;
label_3cb920:
    // 0x3cb920: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x3cb920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
label_3cb924:
    // 0x3cb924: 0x342119b1  ori         $at, $at, 0x19B1
    ctx->pc = 0x3cb924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6577);
label_3cb928:
    // 0x3cb928: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cb928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3cb92c:
    // 0x3cb92c: 0x3c01bece  lui         $at, 0xBECE
    ctx->pc = 0x3cb92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48846 << 16));
label_3cb930:
    // 0x3cb930: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cb930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cb934:
    // 0x3cb934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb938:
    // 0x3cb938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb93c:
    // 0x3cb93c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cb93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cb940:
    // 0x3cb940: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb944:
    // 0x3cb944: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb948:
    // 0x3cb948: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb94c:
    // 0x3cb94c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cb94cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb950:
    // 0x3cb950: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb954:
    // 0x3cb954: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cb954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb958:
    // 0x3cb958: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cb958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cb95c:
    // 0x3cb95c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb960:
    // 0x3cb960: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cb960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cb964:
    // 0x3cb964: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb968:
    // 0x3cb968: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cb968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cb96c:
    // 0x3cb96c: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cb96cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cb970:
    // 0x3cb970: 0x3c01bf08  lui         $at, 0xBF08
    ctx->pc = 0x3cb970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48904 << 16));
label_3cb974:
    // 0x3cb974: 0x3421c804  ori         $at, $at, 0xC804
    ctx->pc = 0x3cb974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51204);
label_3cb978:
    // 0x3cb978: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3cb978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3cb97c:
    // 0x3cb97c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb97cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb980:
    // 0x3cb980: 0xc0e954c  jal         func_3A5530
label_3cb984:
    if (ctx->pc == 0x3CB984u) {
        ctx->pc = 0x3CB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB980u;
        // 0x3cb984: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB988u;
        goto label_3cb988;
    }
    ctx->pc = 0x3CB980u;
    SET_GPR_U32(ctx, 31, 0x3CB988u);
    ctx->pc = 0x3CB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB980u;
    // 0x3cb984: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB980u, 0x3CB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB988u;
label_3cb988:
    // 0x3cb988: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cb988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cb98c:
    // 0x3cb98c: 0x3421aca8  ori         $at, $at, 0xACA8
    ctx->pc = 0x3cb98cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44200);
label_3cb990:
    // 0x3cb990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb994:
    // 0x3cb994: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cb994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cb998:
    // 0x3cb998: 0x26104808  addiu       $s0, $s0, 0x4808
    ctx->pc = 0x3cb998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18440));
label_3cb99c:
    // 0x3cb99c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9a0:
    // 0x3cb9a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb9a4:
    // 0x3cb9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9a8:
    // 0x3cb9a8: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cb9a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cb9ac:
    // 0x3cb9ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9b0:
    // 0x3cb9b0: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cb9b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cb9b4:
    // 0x3cb9b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9b8:
    // 0x3cb9b8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cb9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cb9bc:
    // 0x3cb9bc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cb9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cb9c0:
    // 0x3cb9c0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cb9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb9c4:
    // 0x3cb9c4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cb9c8:
    // 0x3cb9c8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cb9cc:
    // 0x3cb9cc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cb9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cb9d0:
    // 0x3cb9d0: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cb9d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cb9d4:
    // 0x3cb9d4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cb9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb9d8:
    // 0x3cb9d8: 0xc0e954c  jal         func_3A5530
label_3cb9dc:
    if (ctx->pc == 0x3CB9DCu) {
        ctx->pc = 0x3CB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9D8u;
        // 0x3cb9dc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB9E0u;
        goto label_3cb9e0;
    }
    ctx->pc = 0x3CB9D8u;
    SET_GPR_U32(ctx, 31, 0x3CB9E0u);
    ctx->pc = 0x3CB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB9D8u;
    // 0x3cb9dc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CB9D8u, 0x3CB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB9E0u;
label_3cb9e0:
    // 0x3cb9e0: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cb9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cb9e4:
    // 0x3cb9e4: 0x342176f7  ori         $at, $at, 0x76F7
    ctx->pc = 0x3cb9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30455);
label_3cb9e8:
    // 0x3cb9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb9ec:
    // 0x3cb9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cb9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9f0:
    // 0x3cb9f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cb9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9f4:
    // 0x3cb9f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cb9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb9f8:
    // 0x3cb9f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cb9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb9fc:
    // 0x3cb9fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cb9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cba00:
    // 0x3cba00: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cba00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cba04:
    // 0x3cba04: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cba04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cba08:
    // 0x3cba08: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cba08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cba0c:
    // 0x3cba0c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cba10:
    // 0x3cba10: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cba10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cba14:
    // 0x3cba14: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cba14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cba18:
    // 0x3cba18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cba1c:
    // 0x3cba1c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cba20:
    // 0x3cba20: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cba20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cba24:
    // 0x3cba24: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cba24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cba28:
    // 0x3cba28: 0xc0e954c  jal         func_3A5530
label_3cba2c:
    if (ctx->pc == 0x3CBA2Cu) {
        ctx->pc = 0x3CBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA28u;
        // 0x3cba2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA30u;
        goto label_3cba30;
    }
    ctx->pc = 0x3CBA28u;
    SET_GPR_U32(ctx, 31, 0x3CBA30u);
    ctx->pc = 0x3CBA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBA28u;
    // 0x3cba2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBA28u, 0x3CBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBA30u;
label_3cba30:
    // 0x3cba30: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cba34:
    // 0x3cba34: 0x34210026  ori         $at, $at, 0x26
    ctx->pc = 0x3cba34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38);
label_3cba38:
    // 0x3cba38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cba38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cba3c:
    // 0x3cba3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cba40:
    // 0x3cba40: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x3cba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
label_3cba44:
    // 0x3cba44: 0x3421e421  ori         $at, $at, 0xE421
    ctx->pc = 0x3cba44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58401);
label_3cba48:
    // 0x3cba48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cba48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cba4c:
    // 0x3cba4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cba50:
    // 0x3cba50: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cba54:
    // 0x3cba54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cba58:
    // 0x3cba58: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3cba58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cba5c:
    // 0x3cba5c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cba5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cba60:
    // 0x3cba60: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cba60u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cba64:
    // 0x3cba64: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cba64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cba68:
    // 0x3cba68: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cba68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cba6c:
    // 0x3cba6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cba70:
    // 0x3cba70: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cba70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cba74:
    // 0x3cba74: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cba78:
    // 0x3cba78: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cba7c:
    // 0x3cba7c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cba80:
    // 0x3cba80: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cba80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cba84:
    // 0x3cba84: 0xc0e954c  jal         func_3A5530
label_3cba88:
    if (ctx->pc == 0x3CBA88u) {
        ctx->pc = 0x3CBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA84u;
        // 0x3cba88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA8Cu;
        goto label_3cba8c;
    }
    ctx->pc = 0x3CBA84u;
    SET_GPR_U32(ctx, 31, 0x3CBA8Cu);
    ctx->pc = 0x3CBA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBA84u;
    // 0x3cba88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBA84u, 0x3CBA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBA8Cu;
label_3cba8c:
    // 0x3cba8c: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cba8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cba90:
    // 0x3cba90: 0x34212b49  ori         $at, $at, 0x2B49
    ctx->pc = 0x3cba90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11081);
label_3cba94:
    // 0x3cba94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cba94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cba98:
    // 0x3cba98: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3cba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3cba9c:
    // 0x3cba9c: 0x24844818  addiu       $a0, $a0, 0x4818
    ctx->pc = 0x3cba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18456));
label_3cbaa0:
    // 0x3cbaa0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbaa4:
    // 0x3cbaa4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbaa8:
    // 0x3cbaa8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbaac:
    // 0x3cbaac: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cbaacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbab0:
    // 0x3cbab0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbab4:
    // 0x3cbab4: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbab4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbab8:
    // 0x3cbab8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbabc:
    // 0x3cbabc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbac0:
    // 0x3cbac0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbac4:
    // 0x3cbac4: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbac8:
    // 0x3cbac8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbacc:
    // 0x3cbacc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbad0:
    // 0x3cbad0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbad4:
    // 0x3cbad4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbad8:
    // 0x3cbad8: 0xc0e954c  jal         func_3A5530
label_3cbadc:
    if (ctx->pc == 0x3CBADCu) {
        ctx->pc = 0x3CBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAD8u;
        // 0x3cbadc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAE0u;
        goto label_3cbae0;
    }
    ctx->pc = 0x3CBAD8u;
    SET_GPR_U32(ctx, 31, 0x3CBAE0u);
    ctx->pc = 0x3CBADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBAD8u;
    // 0x3cbadc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBAD8u, 0x3CBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBAE0u;
label_3cbae0:
    // 0x3cbae0: 0x3c026acf  lui         $v0, 0x6ACF
    ctx->pc = 0x3cbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27343 << 16));
label_3cbae4:
    // 0x3cbae4: 0x34426ddf  ori         $v0, $v0, 0x6DDF
    ctx->pc = 0x3cbae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28127);
label_3cbae8:
    // 0x3cbae8: 0x16c20092  bne         $s6, $v0, . + 4 + (0x92 << 2)
label_3cbaec:
    if (ctx->pc == 0x3CBAECu) {
        ctx->pc = 0x3CBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAE8u;
        // 0x3cbaec: 0x3c026da2  lui         $v0, 0x6DA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28066 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAF0u;
        goto label_3cbaf0;
    }
    ctx->pc = 0x3CBAE8u;
    {
        const bool branch_taken_0x3cbae8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAE8u;
        // 0x3cbaec: 0x3c026da2  lui         $v0, 0x6DA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28066 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbae8) {
            ctx->pc = 0x3CBD34u;
            goto label_3cbd34;
        }
    }
    ctx->pc = 0x3CBAF0u;
label_3cbaf0:
    // 0x3cbaf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cbaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cbaf4:
    // 0x3cbaf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cbaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cbaf8:
    // 0x3cbaf8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cbaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cbafc:
    // 0x3cbafc: 0x3c013ece  lui         $at, 0x3ECE
    ctx->pc = 0x3cbafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16078 << 16));
label_3cbb00:
    // 0x3cbb00: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cbb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cbb04:
    // 0x3cbb04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbb08:
    // 0x3cbb08: 0x26104828  addiu       $s0, $s0, 0x4828
    ctx->pc = 0x3cbb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18472));
label_3cbb0c:
    // 0x3cbb0c: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x3cbb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_3cbb10:
    // 0x3cbb10: 0x3421cb71  ori         $at, $at, 0xCB71
    ctx->pc = 0x3cbb10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52081);
label_3cbb14:
    // 0x3cbb14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cbb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cbb18:
    // 0x3cbb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb1c:
    // 0x3cbb1c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cbb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cbb20:
    // 0x3cbb20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb24:
    // 0x3cbb24: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cbb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbb28:
    // 0x3cbb28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb2c:
    // 0x3cbb2c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cbb2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbb30:
    // 0x3cbb30: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb34:
    // 0x3cbb34: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbb38:
    // 0x3cbb38: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbb3c:
    // 0x3cbb3c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbb3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbb40:
    // 0x3cbb40: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbb44:
    // 0x3cbb44: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbb48:
    // 0x3cbb48: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbb4c:
    // 0x3cbb4c: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbb4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbb50:
    // 0x3cbb50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3cbb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3cbb54:
    // 0x3cbb54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cbb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cbb58:
    // 0x3cbb58: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbb58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbb5c:
    // 0x3cbb5c: 0x3c013cb8  lui         $at, 0x3CB8
    ctx->pc = 0x3cbb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15544 << 16));
label_3cbb60:
    // 0x3cbb60: 0x3421da3c  ori         $at, $at, 0xDA3C
    ctx->pc = 0x3cbb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55868);
label_3cbb64:
    // 0x3cbb64: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cbb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cbb68:
    // 0x3cbb68: 0xc0e954c  jal         func_3A5530
label_3cbb6c:
    if (ctx->pc == 0x3CBB6Cu) {
        ctx->pc = 0x3CBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB68u;
        // 0x3cbb6c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB70u;
        goto label_3cbb70;
    }
    ctx->pc = 0x3CBB68u;
    SET_GPR_U32(ctx, 31, 0x3CBB70u);
    ctx->pc = 0x3CBB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBB68u;
    // 0x3cbb6c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBB68u, 0x3CBB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBB70u;
label_3cbb70:
    // 0x3cbb70: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x3cbb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
label_3cbb74:
    // 0x3cbb74: 0x342119b1  ori         $at, $at, 0x19B1
    ctx->pc = 0x3cbb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6577);
label_3cbb78:
    // 0x3cbb78: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cbb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3cbb7c:
    // 0x3cbb7c: 0x3c01bece  lui         $at, 0xBECE
    ctx->pc = 0x3cbb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48846 << 16));
label_3cbb80:
    // 0x3cbb80: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cbb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cbb84:
    // 0x3cbb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbb88:
    // 0x3cbb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb8c:
    // 0x3cbb8c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cbb90:
    // 0x3cbb90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb94:
    // 0x3cbb94: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cbb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbb98:
    // 0x3cbb98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb9c:
    // 0x3cbb9c: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cbb9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbba0:
    // 0x3cbba0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbba4:
    // 0x3cbba4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbba8:
    // 0x3cbba8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbbac:
    // 0x3cbbac: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbbacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbbb0:
    // 0x3cbbb0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbbb4:
    // 0x3cbbb4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbbb8:
    // 0x3cbbb8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbbbc:
    // 0x3cbbbc: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbbbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbbc0:
    // 0x3cbbc0: 0x3c01bf08  lui         $at, 0xBF08
    ctx->pc = 0x3cbbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48904 << 16));
label_3cbbc4:
    // 0x3cbbc4: 0x3421c804  ori         $at, $at, 0xC804
    ctx->pc = 0x3cbbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51204);
label_3cbbc8:
    // 0x3cbbc8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3cbbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3cbbcc:
    // 0x3cbbcc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbbccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbbd0:
    // 0x3cbbd0: 0xc0e954c  jal         func_3A5530
label_3cbbd4:
    if (ctx->pc == 0x3CBBD4u) {
        ctx->pc = 0x3CBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBD0u;
        // 0x3cbbd4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBD8u;
        goto label_3cbbd8;
    }
    ctx->pc = 0x3CBBD0u;
    SET_GPR_U32(ctx, 31, 0x3CBBD8u);
    ctx->pc = 0x3CBBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBBD0u;
    // 0x3cbbd4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBBD0u, 0x3CBBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBBD8u;
label_3cbbd8:
    // 0x3cbbd8: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cbbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cbbdc:
    // 0x3cbbdc: 0x3421aca8  ori         $at, $at, 0xACA8
    ctx->pc = 0x3cbbdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44200);
label_3cbbe0:
    // 0x3cbbe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbbe4:
    // 0x3cbbe4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cbbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cbbe8:
    // 0x3cbbe8: 0x26104838  addiu       $s0, $s0, 0x4838
    ctx->pc = 0x3cbbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18488));
label_3cbbec:
    // 0x3cbbec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbbf0:
    // 0x3cbbf0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbbf4:
    // 0x3cbbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbbf8:
    // 0x3cbbf8: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cbbf8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbbfc:
    // 0x3cbbfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc00:
    // 0x3cbc00: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbc00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbc04:
    // 0x3cbc04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc08:
    // 0x3cbc08: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbc08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbc0c:
    // 0x3cbc0c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbc10:
    // 0x3cbc10: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbc10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbc14:
    // 0x3cbc14: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbc18:
    // 0x3cbc18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbc1c:
    // 0x3cbc1c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbc20:
    // 0x3cbc20: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbc20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbc24:
    // 0x3cbc24: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbc28:
    // 0x3cbc28: 0xc0e954c  jal         func_3A5530
label_3cbc2c:
    if (ctx->pc == 0x3CBC2Cu) {
        ctx->pc = 0x3CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC28u;
        // 0x3cbc2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC30u;
        goto label_3cbc30;
    }
    ctx->pc = 0x3CBC28u;
    SET_GPR_U32(ctx, 31, 0x3CBC30u);
    ctx->pc = 0x3CBC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBC28u;
    // 0x3cbc2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBC28u, 0x3CBC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBC30u;
label_3cbc30:
    // 0x3cbc30: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cbc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cbc34:
    // 0x3cbc34: 0x342176f7  ori         $at, $at, 0x76F7
    ctx->pc = 0x3cbc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30455);
label_3cbc38:
    // 0x3cbc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbc3c:
    // 0x3cbc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc40:
    // 0x3cbc40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc44:
    // 0x3cbc44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc48:
    // 0x3cbc48: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbc4c:
    // 0x3cbc4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc50:
    // 0x3cbc50: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cbc50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbc54:
    // 0x3cbc54: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbc54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbc58:
    // 0x3cbc58: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbc58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbc5c:
    // 0x3cbc5c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbc60:
    // 0x3cbc60: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbc60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbc64:
    // 0x3cbc64: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbc68:
    // 0x3cbc68: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbc6c:
    // 0x3cbc6c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbc70:
    // 0x3cbc70: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbc70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbc74:
    // 0x3cbc74: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbc74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbc78:
    // 0x3cbc78: 0xc0e954c  jal         func_3A5530
label_3cbc7c:
    if (ctx->pc == 0x3CBC7Cu) {
        ctx->pc = 0x3CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC78u;
        // 0x3cbc7c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC80u;
        goto label_3cbc80;
    }
    ctx->pc = 0x3CBC78u;
    SET_GPR_U32(ctx, 31, 0x3CBC80u);
    ctx->pc = 0x3CBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBC78u;
    // 0x3cbc7c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBC78u, 0x3CBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBC80u;
label_3cbc80:
    // 0x3cbc80: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cbc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cbc84:
    // 0x3cbc84: 0x34210026  ori         $at, $at, 0x26
    ctx->pc = 0x3cbc84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38);
label_3cbc88:
    // 0x3cbc88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbc8c:
    // 0x3cbc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc90:
    // 0x3cbc90: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x3cbc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
label_3cbc94:
    // 0x3cbc94: 0x3421e421  ori         $at, $at, 0xE421
    ctx->pc = 0x3cbc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58401);
label_3cbc98:
    // 0x3cbc98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cbc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cbc9c:
    // 0x3cbc9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbca0:
    // 0x3cbca0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbca4:
    // 0x3cbca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbca8:
    // 0x3cbca8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3cbca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbcac:
    // 0x3cbcac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcb0:
    // 0x3cbcb0: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cbcb0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbcb4:
    // 0x3cbcb4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbcb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbcb8:
    // 0x3cbcb8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbcb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbcbc:
    // 0x3cbcbc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbcc0:
    // 0x3cbcc0: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbcc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbcc4:
    // 0x3cbcc4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbcc8:
    // 0x3cbcc8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbccc:
    // 0x3cbccc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbcd0:
    // 0x3cbcd0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbcd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbcd4:
    // 0x3cbcd4: 0xc0e954c  jal         func_3A5530
label_3cbcd8:
    if (ctx->pc == 0x3CBCD8u) {
        ctx->pc = 0x3CBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCD4u;
        // 0x3cbcd8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBCDCu;
        goto label_3cbcdc;
    }
    ctx->pc = 0x3CBCD4u;
    SET_GPR_U32(ctx, 31, 0x3CBCDCu);
    ctx->pc = 0x3CBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBCD4u;
    // 0x3cbcd8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBCD4u, 0x3CBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBCDCu;
label_3cbcdc:
    // 0x3cbcdc: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cbcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cbce0:
    // 0x3cbce0: 0x34212b49  ori         $at, $at, 0x2B49
    ctx->pc = 0x3cbce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11081);
label_3cbce4:
    // 0x3cbce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbce8:
    // 0x3cbce8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3cbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3cbcec:
    // 0x3cbcec: 0x24844848  addiu       $a0, $a0, 0x4848
    ctx->pc = 0x3cbcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18504));
label_3cbcf0:
    // 0x3cbcf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcf4:
    // 0x3cbcf4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbcf8:
    // 0x3cbcf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcfc:
    // 0x3cbcfc: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cbcfcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbd00:
    // 0x3cbd00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbd00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd04:
    // 0x3cbd04: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbd04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbd08:
    // 0x3cbd08: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbd08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbd0c:
    // 0x3cbd0c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbd0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbd10:
    // 0x3cbd10: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbd14:
    // 0x3cbd14: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbd14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbd18:
    // 0x3cbd18: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbd1c:
    // 0x3cbd1c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbd20:
    // 0x3cbd20: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbd24:
    // 0x3cbd24: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbd24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbd28:
    // 0x3cbd28: 0xc0e954c  jal         func_3A5530
label_3cbd2c:
    if (ctx->pc == 0x3CBD2Cu) {
        ctx->pc = 0x3CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD28u;
        // 0x3cbd2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD30u;
        goto label_3cbd30;
    }
    ctx->pc = 0x3CBD28u;
    SET_GPR_U32(ctx, 31, 0x3CBD30u);
    ctx->pc = 0x3CBD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBD28u;
    // 0x3cbd2c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBD28u, 0x3CBD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBD30u;
label_3cbd30:
    // 0x3cbd30: 0x3c026da2  lui         $v0, 0x6DA2
    ctx->pc = 0x3cbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28066 << 16));
label_3cbd34:
    // 0x3cbd34: 0x3442a9c6  ori         $v0, $v0, 0xA9C6
    ctx->pc = 0x3cbd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43462);
label_3cbd38:
    // 0x3cbd38: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
label_3cbd3c:
    if (ctx->pc == 0x3CBD3Cu) {
        ctx->pc = 0x3CBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD38u;
        // 0x3cbd3c: 0x3c0242c3  lui         $v0, 0x42C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17091 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD40u;
        goto label_3cbd40;
    }
    ctx->pc = 0x3CBD38u;
    {
        const bool branch_taken_0x3cbd38 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD38u;
        // 0x3cbd3c: 0x3c0242c3  lui         $v0, 0x42C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17091 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd38) {
            ctx->pc = 0x3CBD4Cu;
            goto label_3cbd4c;
        }
    }
    ctx->pc = 0x3CBD40u;
label_3cbd40:
    // 0x3cbd40: 0x3442bb7c  ori         $v0, $v0, 0xBB7C
    ctx->pc = 0x3cbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47996);
label_3cbd44:
    // 0x3cbd44: 0x16c20092  bne         $s6, $v0, . + 4 + (0x92 << 2)
label_3cbd48:
    if (ctx->pc == 0x3CBD48u) {
        ctx->pc = 0x3CBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD44u;
        // 0x3cbd48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD4Cu;
        goto label_3cbd4c;
    }
    ctx->pc = 0x3CBD44u;
    {
        const bool branch_taken_0x3cbd44 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD44u;
        // 0x3cbd48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd44) {
            ctx->pc = 0x3CBF90u;
            goto label_3cbf90;
        }
    }
    ctx->pc = 0x3CBD4Cu;
label_3cbd4c:
    // 0x3cbd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cbd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cbd50:
    // 0x3cbd50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cbd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cbd54:
    // 0x3cbd54: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cbd54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cbd58:
    // 0x3cbd58: 0x3c013ece  lui         $at, 0x3ECE
    ctx->pc = 0x3cbd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16078 << 16));
label_3cbd5c:
    // 0x3cbd5c: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cbd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cbd60:
    // 0x3cbd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbd64:
    // 0x3cbd64: 0x26104858  addiu       $s0, $s0, 0x4858
    ctx->pc = 0x3cbd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18520));
label_3cbd68:
    // 0x3cbd68: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x3cbd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_3cbd6c:
    // 0x3cbd6c: 0x3421cb71  ori         $at, $at, 0xCB71
    ctx->pc = 0x3cbd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52081);
label_3cbd70:
    // 0x3cbd70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cbd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cbd74:
    // 0x3cbd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd78:
    // 0x3cbd78: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cbd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cbd7c:
    // 0x3cbd7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd80:
    // 0x3cbd80: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cbd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbd84:
    // 0x3cbd84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd88:
    // 0x3cbd88: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cbd88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbd8c:
    // 0x3cbd8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbd8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd90:
    // 0x3cbd90: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbd94:
    // 0x3cbd94: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbd98:
    // 0x3cbd98: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbd98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbd9c:
    // 0x3cbd9c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbda0:
    // 0x3cbda0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbda4:
    // 0x3cbda4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbda8:
    // 0x3cbda8: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbda8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbdac:
    // 0x3cbdac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3cbdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3cbdb0:
    // 0x3cbdb0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cbdb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cbdb4:
    // 0x3cbdb4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbdb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbdb8:
    // 0x3cbdb8: 0x3c013cb8  lui         $at, 0x3CB8
    ctx->pc = 0x3cbdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15544 << 16));
label_3cbdbc:
    // 0x3cbdbc: 0x3421da3c  ori         $at, $at, 0xDA3C
    ctx->pc = 0x3cbdbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55868);
label_3cbdc0:
    // 0x3cbdc0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3cbdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3cbdc4:
    // 0x3cbdc4: 0xc0e954c  jal         func_3A5530
label_3cbdc8:
    if (ctx->pc == 0x3CBDC8u) {
        ctx->pc = 0x3CBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDC4u;
        // 0x3cbdc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBDCCu;
        goto label_3cbdcc;
    }
    ctx->pc = 0x3CBDC4u;
    SET_GPR_U32(ctx, 31, 0x3CBDCCu);
    ctx->pc = 0x3CBDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBDC4u;
    // 0x3cbdc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBDC4u, 0x3CBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBDCCu;
label_3cbdcc:
    // 0x3cbdcc: 0x3c013f04  lui         $at, 0x3F04
    ctx->pc = 0x3cbdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16132 << 16));
label_3cbdd0:
    // 0x3cbdd0: 0x342119b1  ori         $at, $at, 0x19B1
    ctx->pc = 0x3cbdd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6577);
label_3cbdd4:
    // 0x3cbdd4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3cbdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3cbdd8:
    // 0x3cbdd8: 0x3c01bece  lui         $at, 0xBECE
    ctx->pc = 0x3cbdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48846 << 16));
label_3cbddc:
    // 0x3cbddc: 0x34215908  ori         $at, $at, 0x5908
    ctx->pc = 0x3cbddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22792);
label_3cbde0:
    // 0x3cbde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbde4:
    // 0x3cbde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbde8:
    // 0x3cbde8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cbdec:
    // 0x3cbdec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbdf0:
    // 0x3cbdf0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3cbdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbdf4:
    // 0x3cbdf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbdf8:
    // 0x3cbdf8: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x3cbdf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbdfc:
    // 0x3cbdfc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe00:
    // 0x3cbe00: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbe00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbe04:
    // 0x3cbe04: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbe08:
    // 0x3cbe08: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbe08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbe0c:
    // 0x3cbe0c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbe10:
    // 0x3cbe10: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbe14:
    // 0x3cbe14: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbe18:
    // 0x3cbe18: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbe18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbe1c:
    // 0x3cbe1c: 0x3c01bf08  lui         $at, 0xBF08
    ctx->pc = 0x3cbe1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48904 << 16));
label_3cbe20:
    // 0x3cbe20: 0x3421c804  ori         $at, $at, 0xC804
    ctx->pc = 0x3cbe20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51204);
label_3cbe24:
    // 0x3cbe24: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3cbe24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3cbe28:
    // 0x3cbe28: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbe28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbe2c:
    // 0x3cbe2c: 0xc0e954c  jal         func_3A5530
label_3cbe30:
    if (ctx->pc == 0x3CBE30u) {
        ctx->pc = 0x3CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE2Cu;
        // 0x3cbe30: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE34u;
        goto label_3cbe34;
    }
    ctx->pc = 0x3CBE2Cu;
    SET_GPR_U32(ctx, 31, 0x3CBE34u);
    ctx->pc = 0x3CBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBE2Cu;
    // 0x3cbe30: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBE2Cu, 0x3CBE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBE34u;
label_3cbe34:
    // 0x3cbe34: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cbe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cbe38:
    // 0x3cbe38: 0x3421aca8  ori         $at, $at, 0xACA8
    ctx->pc = 0x3cbe38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44200);
label_3cbe3c:
    // 0x3cbe3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbe3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbe40:
    // 0x3cbe40: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3cbe40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3cbe44:
    // 0x3cbe44: 0x26104868  addiu       $s0, $s0, 0x4868
    ctx->pc = 0x3cbe44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18536));
label_3cbe48:
    // 0x3cbe48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe4c:
    // 0x3cbe4c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbe50:
    // 0x3cbe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe54:
    // 0x3cbe54: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cbe54u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbe58:
    // 0x3cbe58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe5c:
    // 0x3cbe5c: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbe5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbe60:
    // 0x3cbe60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbe60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe64:
    // 0x3cbe64: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbe64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbe68:
    // 0x3cbe68: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbe6c:
    // 0x3cbe6c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbe6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbe70:
    // 0x3cbe70: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbe74:
    // 0x3cbe74: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbe78:
    // 0x3cbe78: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbe7c:
    // 0x3cbe7c: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbe7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbe80:
    // 0x3cbe80: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbe80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbe84:
    // 0x3cbe84: 0xc0e954c  jal         func_3A5530
label_3cbe88:
    if (ctx->pc == 0x3CBE88u) {
        ctx->pc = 0x3CBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE84u;
        // 0x3cbe88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE8Cu;
        goto label_3cbe8c;
    }
    ctx->pc = 0x3CBE84u;
    SET_GPR_U32(ctx, 31, 0x3CBE8Cu);
    ctx->pc = 0x3CBE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBE84u;
    // 0x3cbe88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBE84u, 0x3CBE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBE8Cu;
label_3cbe8c:
    // 0x3cbe8c: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cbe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cbe90:
    // 0x3cbe90: 0x342176f7  ori         $at, $at, 0x76F7
    ctx->pc = 0x3cbe90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30455);
label_3cbe94:
    // 0x3cbe94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbe94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbe98:
    // 0x3cbe98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe9c:
    // 0x3cbe9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbea0:
    // 0x3cbea0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbea4:
    // 0x3cbea4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbea8:
    // 0x3cbea8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbeac:
    // 0x3cbeac: 0xe6380004  swc1        $f24, 0x4($s1)
    ctx->pc = 0x3cbeacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbeb0:
    // 0x3cbeb0: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbeb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbeb4:
    // 0x3cbeb4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbeb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbeb8:
    // 0x3cbeb8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbebc:
    // 0x3cbebc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbec0:
    // 0x3cbec0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbec4:
    // 0x3cbec4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbec8:
    // 0x3cbec8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbecc:
    // 0x3cbecc: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbeccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbed0:
    // 0x3cbed0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbed4:
    // 0x3cbed4: 0xc0e954c  jal         func_3A5530
label_3cbed8:
    if (ctx->pc == 0x3CBED8u) {
        ctx->pc = 0x3CBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED4u;
        // 0x3cbed8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEDCu;
        goto label_3cbedc;
    }
    ctx->pc = 0x3CBED4u;
    SET_GPR_U32(ctx, 31, 0x3CBEDCu);
    ctx->pc = 0x3CBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBED4u;
    // 0x3cbed8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBED4u, 0x3CBEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBEDCu;
label_3cbedc:
    // 0x3cbedc: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x3cbedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_3cbee0:
    // 0x3cbee0: 0x34210026  ori         $at, $at, 0x26
    ctx->pc = 0x3cbee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38);
label_3cbee4:
    // 0x3cbee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbee8:
    // 0x3cbee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cbee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cbeec:
    // 0x3cbeec: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x3cbeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
label_3cbef0:
    // 0x3cbef0: 0x3421e421  ori         $at, $at, 0xE421
    ctx->pc = 0x3cbef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58401);
label_3cbef4:
    // 0x3cbef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cbef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cbef8:
    // 0x3cbef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbefc:
    // 0x3cbefc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbf00:
    // 0x3cbf00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf04:
    // 0x3cbf04: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3cbf04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbf08:
    // 0x3cbf08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbf08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf0c:
    // 0x3cbf0c: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cbf0cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbf10:
    // 0x3cbf10: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbf10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbf14:
    // 0x3cbf14: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbf14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbf18:
    // 0x3cbf18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbf1c:
    // 0x3cbf1c: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3cbf1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3cbf20:
    // 0x3cbf20: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbf24:
    // 0x3cbf24: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbf28:
    // 0x3cbf28: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3cbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3cbf2c:
    // 0x3cbf2c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbf2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbf30:
    // 0x3cbf30: 0xc0e954c  jal         func_3A5530
label_3cbf34:
    if (ctx->pc == 0x3CBF34u) {
        ctx->pc = 0x3CBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF30u;
        // 0x3cbf34: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF38u;
        goto label_3cbf38;
    }
    ctx->pc = 0x3CBF30u;
    SET_GPR_U32(ctx, 31, 0x3CBF38u);
    ctx->pc = 0x3CBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBF30u;
    // 0x3cbf34: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBF30u, 0x3CBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBF38u;
label_3cbf38:
    // 0x3cbf38: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3cbf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3cbf3c:
    // 0x3cbf3c: 0x34212b49  ori         $at, $at, 0x2B49
    ctx->pc = 0x3cbf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11081);
label_3cbf40:
    // 0x3cbf40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cbf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbf44:
    // 0x3cbf44: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3cbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3cbf48:
    // 0x3cbf48: 0x24844878  addiu       $a0, $a0, 0x4878
    ctx->pc = 0x3cbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18552));
label_3cbf4c:
    // 0x3cbf4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cbf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf50:
    // 0x3cbf50: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3cbf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cbf54:
    // 0x3cbf54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf58:
    // 0x3cbf58: 0xe6390004  swc1        $f25, 0x4($s1)
    ctx->pc = 0x3cbf58u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3cbf5c:
    // 0x3cbf5c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cbf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf60:
    // 0x3cbf60: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x3cbf60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cbf64:
    // 0x3cbf64: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3cbf64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cbf68:
    // 0x3cbf68: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cbf68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cbf6c:
    // 0x3cbf6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3cbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3cbf70:
    // 0x3cbf70: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3cbf70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3cbf74:
    // 0x3cbf74: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3cbf78:
    // 0x3cbf78: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3cbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3cbf7c:
    // 0x3cbf7c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3cbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3cbf80:
    // 0x3cbf80: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3cbf80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cbf84:
    // 0x3cbf84: 0xc0e954c  jal         func_3A5530
label_3cbf88:
    if (ctx->pc == 0x3CBF88u) {
        ctx->pc = 0x3CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF84u;
        // 0x3cbf88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF8Cu;
        goto label_3cbf8c;
    }
    ctx->pc = 0x3CBF84u;
    SET_GPR_U32(ctx, 31, 0x3CBF8Cu);
    ctx->pc = 0x3CBF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBF84u;
    // 0x3cbf88: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3CBF84u, 0x3CBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBF8Cu;
label_3cbf8c:
    // 0x3cbf8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3cbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3cbf90:
    // 0x3cbf90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cbf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cbf94:
    // 0x3cbf94: 0xc1073cc  jal         func_41CF30
label_3cbf98:
    if (ctx->pc == 0x3CBF98u) {
        ctx->pc = 0x3CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF94u;
        // 0x3cbf98: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF9Cu;
        goto label_3cbf9c;
    }
    ctx->pc = 0x3CBF94u;
    SET_GPR_U32(ctx, 31, 0x3CBF9Cu);
    ctx->pc = 0x3CBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBF94u;
    // 0x3cbf98: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3CBF94u, 0x3CBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBF9Cu;
label_3cbf9c:
    // 0x3cbf9c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cbf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3cbfa0:
    // 0x3cbfa0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3cbfa4:
    if (ctx->pc == 0x3CBFA4u) {
        ctx->pc = 0x3CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFA0u;
        // 0x3cbfa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFA8u;
        goto label_3cbfa8;
    }
    ctx->pc = 0x3CBFA0u;
    {
        const bool branch_taken_0x3cbfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFA0u;
        // 0x3cbfa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbfa0) {
            ctx->pc = 0x3CBFC8u;
            goto label_3cbfc8;
        }
    }
    ctx->pc = 0x3CBFA8u;
label_3cbfa8:
    // 0x3cbfa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cbfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbfac:
    // 0x3cbfac: 0xc0e8dee  jal         func_3A37B8
label_3cbfb0:
    if (ctx->pc == 0x3CBFB0u) {
        ctx->pc = 0x3CBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFACu;
        // 0x3cbfb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFB4u;
        goto label_3cbfb4;
    }
    ctx->pc = 0x3CBFACu;
    SET_GPR_U32(ctx, 31, 0x3CBFB4u);
    ctx->pc = 0x3CBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBFACu;
    // 0x3cbfb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3CBFACu, 0x3CBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBFB4u;
label_3cbfb4:
    // 0x3cbfb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cbfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cbfb8:
    // 0x3cbfb8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3cbfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cbfbc:
    // 0x3cbfbc: 0xc045ca0  jal         func_117280
label_3cbfc0:
    if (ctx->pc == 0x3CBFC0u) {
        ctx->pc = 0x3CBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFBCu;
        // 0x3cbfc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFC4u;
        goto label_3cbfc4;
    }
    ctx->pc = 0x3CBFBCu;
    SET_GPR_U32(ctx, 31, 0x3CBFC4u);
    ctx->pc = 0x3CBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBFBCu;
    // 0x3cbfc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3CBFBCu, 0x3CBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBFC4u;
label_3cbfc4:
    // 0x3cbfc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3cbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cbfc8:
    // 0x3cbfc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3cbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cbfcc:
    // 0x3cbfcc: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x3cbfccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_3cbfd0:
    // 0x3cbfd0: 0xc0e858c  jal         func_3A1630
label_3cbfd4:
    if (ctx->pc == 0x3CBFD4u) {
        ctx->pc = 0x3CBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFD0u;
        // 0x3cbfd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFD8u;
        goto label_3cbfd8;
    }
    ctx->pc = 0x3CBFD0u;
    SET_GPR_U32(ctx, 31, 0x3CBFD8u);
    ctx->pc = 0x3CBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBFD0u;
    // 0x3cbfd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CBFD0u, 0x3CBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBFD8u;
label_3cbfd8:
    // 0x3cbfd8: 0xc0e916a  jal         func_3A45A8
label_3cbfdc:
    if (ctx->pc == 0x3CBFDCu) {
        ctx->pc = 0x3CBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFD8u;
        // 0x3cbfdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFE0u;
        goto label_3cbfe0;
    }
    ctx->pc = 0x3CBFD8u;
    SET_GPR_U32(ctx, 31, 0x3CBFE0u);
    ctx->pc = 0x3CBFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBFD8u;
    // 0x3cbfdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45A8u, 0x3CBFD8u, 0x3CBFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBFE0u;
label_3cbfe0:
    // 0x3cbfe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cbfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbfe4:
    // 0x3cbfe4: 0xc0e9176  jal         func_3A45D8
label_3cbfe8:
    if (ctx->pc == 0x3CBFE8u) {
        ctx->pc = 0x3CBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFE4u;
        // 0x3cbfe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFECu;
        goto label_3cbfec;
    }
    ctx->pc = 0x3CBFE4u;
    SET_GPR_U32(ctx, 31, 0x3CBFECu);
    ctx->pc = 0x3CBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBFE4u;
    // 0x3cbfe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45D8u, 0x3CBFE4u, 0x3CBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBFECu;
label_3cbfec:
    // 0x3cbfec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbff0:
    // 0x3cbff0: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x3cbff0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
label_3cbff4:
    // 0x3cbff4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3cbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3cbff8:
    // 0x3cbff8: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x3cbff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_3cbffc:
    // 0x3cbffc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x3cbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3cc000:
    // 0x3cc000: 0x40f809  jalr        $v0
label_3cc004:
    if (ctx->pc == 0x3CC004u) {
        ctx->pc = 0x3CC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC000u;
        // 0x3cc004: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC008u;
        goto label_3cc008;
    }
    ctx->pc = 0x3CC000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC008u);
        ctx->pc = 0x3CC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC000u;
        // 0x3cc004: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC000u, 0x3CC008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC008u;
label_3cc008:
    // 0x3cc008: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cc008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cc00c:
    // 0x3cc00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cc00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc010:
    // 0x3cc010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cc010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc014:
    // 0x3cc014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cc014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cc018:
    // 0x3cc018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cc018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc01c:
    // 0x3cc01c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3cc01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc020:
    // 0x3cc020: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3cc020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3cc024:
    // 0x3cc024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cc024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc028:
    // 0x3cc028: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3cc028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3cc02c:
    // 0x3cc02c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3cc02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3cc030:
    // 0x3cc030: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3cc030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3cc034:
    // 0x3cc034: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3cc034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3cc038:
    // 0x3cc038: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3cc038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3cc03c:
    // 0x3cc03c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cc03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cc040:
    // 0x3cc040: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3cc040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc044:
    // 0x3cc044: 0xc0e5874  jal         func_3961D0
label_3cc048:
    if (ctx->pc == 0x3CC048u) {
        ctx->pc = 0x3CC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC044u;
        // 0x3cc048: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC04Cu;
        goto label_3cc04c;
    }
    ctx->pc = 0x3CC044u;
    SET_GPR_U32(ctx, 31, 0x3CC04Cu);
    ctx->pc = 0x3CC048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC044u;
    // 0x3cc048: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3961D0u, 0x3CC044u, 0x3CC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC04Cu;
label_3cc04c:
    // 0x3cc04c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3cc04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3cc050:
    // 0x3cc050: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3cc050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3cc054:
    // 0x3cc054: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3cc054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3cc058:
    // 0x3cc058: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3cc058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3cc05c:
    // 0x3cc05c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3cc05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cc060:
    // 0x3cc060: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3cc060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cc064:
    // 0x3cc064: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3cc064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cc068:
    // 0x3cc068: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3cc068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cc06c:
    // 0x3cc06c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3cc06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3cc070:
    // 0x3cc070: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x3cc070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3cc074:
    // 0x3cc074: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x3cc074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3cc078:
    // 0x3cc078: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x3cc078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3cc07c:
    // 0x3cc07c: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x3cc07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cc080:
    // 0x3cc080: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3cc080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cc084:
    // 0x3cc084: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3cc084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cc088:
    // 0x3cc088: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3cc088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cc08c:
    // 0x3cc08c: 0x3e00008  jr          $ra
label_3cc090:
    if (ctx->pc == 0x3CC090u) {
        ctx->pc = 0x3CC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC08Cu;
        // 0x3cc090: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC094u;
        goto label_3cc094;
    }
    ctx->pc = 0x3CC08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC08Cu;
        // 0x3cc090: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC094u;
label_3cc094:
    // 0x3cc094: 0x0  nop
    ctx->pc = 0x3cc094u;
    // NOP
    ctx->pc = 0x3cc098u;
}
