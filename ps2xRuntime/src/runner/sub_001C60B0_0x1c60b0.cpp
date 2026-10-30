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

// Function: sub_001C60B0
// Address: 0x1c60b0 - 0x1c6730
void sub_001C60B0_0x1c60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C60B0_0x1c60b0");
#endif

    switch (ctx->pc) {
        case 0x1c60b0u: goto label_1c60b0;
        case 0x1c60b4u: goto label_1c60b4;
        case 0x1c60b8u: goto label_1c60b8;
        case 0x1c60bcu: goto label_1c60bc;
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c60c4u: goto label_1c60c4;
        case 0x1c60c8u: goto label_1c60c8;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60d0u: goto label_1c60d0;
        case 0x1c60d4u: goto label_1c60d4;
        case 0x1c60d8u: goto label_1c60d8;
        case 0x1c60dcu: goto label_1c60dc;
        case 0x1c60e0u: goto label_1c60e0;
        case 0x1c60e4u: goto label_1c60e4;
        case 0x1c60e8u: goto label_1c60e8;
        case 0x1c60ecu: goto label_1c60ec;
        case 0x1c60f0u: goto label_1c60f0;
        case 0x1c60f4u: goto label_1c60f4;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c60fcu: goto label_1c60fc;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c6104u: goto label_1c6104;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c610cu: goto label_1c610c;
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6114u: goto label_1c6114;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c611cu: goto label_1c611c;
        case 0x1c6120u: goto label_1c6120;
        case 0x1c6124u: goto label_1c6124;
        case 0x1c6128u: goto label_1c6128;
        case 0x1c612cu: goto label_1c612c;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6134u: goto label_1c6134;
        case 0x1c6138u: goto label_1c6138;
        case 0x1c613cu: goto label_1c613c;
        case 0x1c6140u: goto label_1c6140;
        case 0x1c6144u: goto label_1c6144;
        case 0x1c6148u: goto label_1c6148;
        case 0x1c614cu: goto label_1c614c;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6154u: goto label_1c6154;
        case 0x1c6158u: goto label_1c6158;
        case 0x1c615cu: goto label_1c615c;
        case 0x1c6160u: goto label_1c6160;
        case 0x1c6164u: goto label_1c6164;
        case 0x1c6168u: goto label_1c6168;
        case 0x1c616cu: goto label_1c616c;
        case 0x1c6170u: goto label_1c6170;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6178u: goto label_1c6178;
        case 0x1c617cu: goto label_1c617c;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6184u: goto label_1c6184;
        case 0x1c6188u: goto label_1c6188;
        case 0x1c618cu: goto label_1c618c;
        case 0x1c6190u: goto label_1c6190;
        case 0x1c6194u: goto label_1c6194;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c619cu: goto label_1c619c;
        case 0x1c61a0u: goto label_1c61a0;
        case 0x1c61a4u: goto label_1c61a4;
        case 0x1c61a8u: goto label_1c61a8;
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61b4u: goto label_1c61b4;
        case 0x1c61b8u: goto label_1c61b8;
        case 0x1c61bcu: goto label_1c61bc;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61c8u: goto label_1c61c8;
        case 0x1c61ccu: goto label_1c61cc;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61d4u: goto label_1c61d4;
        case 0x1c61d8u: goto label_1c61d8;
        case 0x1c61dcu: goto label_1c61dc;
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61e4u: goto label_1c61e4;
        case 0x1c61e8u: goto label_1c61e8;
        case 0x1c61ecu: goto label_1c61ec;
        case 0x1c61f0u: goto label_1c61f0;
        case 0x1c61f4u: goto label_1c61f4;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6200u: goto label_1c6200;
        case 0x1c6204u: goto label_1c6204;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c620cu: goto label_1c620c;
        case 0x1c6210u: goto label_1c6210;
        case 0x1c6214u: goto label_1c6214;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c621cu: goto label_1c621c;
        case 0x1c6220u: goto label_1c6220;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c6228u: goto label_1c6228;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6230u: goto label_1c6230;
        case 0x1c6234u: goto label_1c6234;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6240u: goto label_1c6240;
        case 0x1c6244u: goto label_1c6244;
        case 0x1c6248u: goto label_1c6248;
        case 0x1c624cu: goto label_1c624c;
        case 0x1c6250u: goto label_1c6250;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6258u: goto label_1c6258;
        case 0x1c625cu: goto label_1c625c;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6264u: goto label_1c6264;
        case 0x1c6268u: goto label_1c6268;
        case 0x1c626cu: goto label_1c626c;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6274u: goto label_1c6274;
        case 0x1c6278u: goto label_1c6278;
        case 0x1c627cu: goto label_1c627c;
        case 0x1c6280u: goto label_1c6280;
        case 0x1c6284u: goto label_1c6284;
        case 0x1c6288u: goto label_1c6288;
        case 0x1c628cu: goto label_1c628c;
        case 0x1c6290u: goto label_1c6290;
        case 0x1c6294u: goto label_1c6294;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62a4u: goto label_1c62a4;
        case 0x1c62a8u: goto label_1c62a8;
        case 0x1c62acu: goto label_1c62ac;
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62b8u: goto label_1c62b8;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62c0u: goto label_1c62c0;
        case 0x1c62c4u: goto label_1c62c4;
        case 0x1c62c8u: goto label_1c62c8;
        case 0x1c62ccu: goto label_1c62cc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62d4u: goto label_1c62d4;
        case 0x1c62d8u: goto label_1c62d8;
        case 0x1c62dcu: goto label_1c62dc;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c62e4u: goto label_1c62e4;
        case 0x1c62e8u: goto label_1c62e8;
        case 0x1c62ecu: goto label_1c62ec;
        case 0x1c62f0u: goto label_1c62f0;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c62f8u: goto label_1c62f8;
        case 0x1c62fcu: goto label_1c62fc;
        case 0x1c6300u: goto label_1c6300;
        case 0x1c6304u: goto label_1c6304;
        case 0x1c6308u: goto label_1c6308;
        case 0x1c630cu: goto label_1c630c;
        case 0x1c6310u: goto label_1c6310;
        case 0x1c6314u: goto label_1c6314;
        case 0x1c6318u: goto label_1c6318;
        case 0x1c631cu: goto label_1c631c;
        case 0x1c6320u: goto label_1c6320;
        case 0x1c6324u: goto label_1c6324;
        case 0x1c6328u: goto label_1c6328;
        case 0x1c632cu: goto label_1c632c;
        case 0x1c6330u: goto label_1c6330;
        case 0x1c6334u: goto label_1c6334;
        case 0x1c6338u: goto label_1c6338;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6340u: goto label_1c6340;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c634cu: goto label_1c634c;
        case 0x1c6350u: goto label_1c6350;
        case 0x1c6354u: goto label_1c6354;
        case 0x1c6358u: goto label_1c6358;
        case 0x1c635cu: goto label_1c635c;
        case 0x1c6360u: goto label_1c6360;
        case 0x1c6364u: goto label_1c6364;
        case 0x1c6368u: goto label_1c6368;
        case 0x1c636cu: goto label_1c636c;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c6374u: goto label_1c6374;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c637cu: goto label_1c637c;
        case 0x1c6380u: goto label_1c6380;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6388u: goto label_1c6388;
        case 0x1c638cu: goto label_1c638c;
        case 0x1c6390u: goto label_1c6390;
        case 0x1c6394u: goto label_1c6394;
        case 0x1c6398u: goto label_1c6398;
        case 0x1c639cu: goto label_1c639c;
        case 0x1c63a0u: goto label_1c63a0;
        case 0x1c63a4u: goto label_1c63a4;
        case 0x1c63a8u: goto label_1c63a8;
        case 0x1c63acu: goto label_1c63ac;
        case 0x1c63b0u: goto label_1c63b0;
        case 0x1c63b4u: goto label_1c63b4;
        case 0x1c63b8u: goto label_1c63b8;
        case 0x1c63bcu: goto label_1c63bc;
        case 0x1c63c0u: goto label_1c63c0;
        case 0x1c63c4u: goto label_1c63c4;
        case 0x1c63c8u: goto label_1c63c8;
        case 0x1c63ccu: goto label_1c63cc;
        case 0x1c63d0u: goto label_1c63d0;
        case 0x1c63d4u: goto label_1c63d4;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63dcu: goto label_1c63dc;
        case 0x1c63e0u: goto label_1c63e0;
        case 0x1c63e4u: goto label_1c63e4;
        case 0x1c63e8u: goto label_1c63e8;
        case 0x1c63ecu: goto label_1c63ec;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c63f4u: goto label_1c63f4;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c63fcu: goto label_1c63fc;
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6404u: goto label_1c6404;
        case 0x1c6408u: goto label_1c6408;
        case 0x1c640cu: goto label_1c640c;
        case 0x1c6410u: goto label_1c6410;
        case 0x1c6414u: goto label_1c6414;
        case 0x1c6418u: goto label_1c6418;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6420u: goto label_1c6420;
        case 0x1c6424u: goto label_1c6424;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6430u: goto label_1c6430;
        case 0x1c6434u: goto label_1c6434;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c643cu: goto label_1c643c;
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6454u: goto label_1c6454;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c6460u: goto label_1c6460;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6468u: goto label_1c6468;
        case 0x1c646cu: goto label_1c646c;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6474u: goto label_1c6474;
        case 0x1c6478u: goto label_1c6478;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6484u: goto label_1c6484;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c6498u: goto label_1c6498;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64a4u: goto label_1c64a4;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64acu: goto label_1c64ac;
        case 0x1c64b0u: goto label_1c64b0;
        case 0x1c64b4u: goto label_1c64b4;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64bcu: goto label_1c64bc;
        case 0x1c64c0u: goto label_1c64c0;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64c8u: goto label_1c64c8;
        case 0x1c64ccu: goto label_1c64cc;
        case 0x1c64d0u: goto label_1c64d0;
        case 0x1c64d4u: goto label_1c64d4;
        case 0x1c64d8u: goto label_1c64d8;
        case 0x1c64dcu: goto label_1c64dc;
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c64e4u: goto label_1c64e4;
        case 0x1c64e8u: goto label_1c64e8;
        case 0x1c64ecu: goto label_1c64ec;
        case 0x1c64f0u: goto label_1c64f0;
        case 0x1c64f4u: goto label_1c64f4;
        case 0x1c64f8u: goto label_1c64f8;
        case 0x1c64fcu: goto label_1c64fc;
        case 0x1c6500u: goto label_1c6500;
        case 0x1c6504u: goto label_1c6504;
        case 0x1c6508u: goto label_1c6508;
        case 0x1c650cu: goto label_1c650c;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6514u: goto label_1c6514;
        case 0x1c6518u: goto label_1c6518;
        case 0x1c651cu: goto label_1c651c;
        case 0x1c6520u: goto label_1c6520;
        case 0x1c6524u: goto label_1c6524;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c652cu: goto label_1c652c;
        case 0x1c6530u: goto label_1c6530;
        case 0x1c6534u: goto label_1c6534;
        case 0x1c6538u: goto label_1c6538;
        case 0x1c653cu: goto label_1c653c;
        case 0x1c6540u: goto label_1c6540;
        case 0x1c6544u: goto label_1c6544;
        case 0x1c6548u: goto label_1c6548;
        case 0x1c654cu: goto label_1c654c;
        case 0x1c6550u: goto label_1c6550;
        case 0x1c6554u: goto label_1c6554;
        case 0x1c6558u: goto label_1c6558;
        case 0x1c655cu: goto label_1c655c;
        case 0x1c6560u: goto label_1c6560;
        case 0x1c6564u: goto label_1c6564;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c656cu: goto label_1c656c;
        case 0x1c6570u: goto label_1c6570;
        case 0x1c6574u: goto label_1c6574;
        case 0x1c6578u: goto label_1c6578;
        case 0x1c657cu: goto label_1c657c;
        case 0x1c6580u: goto label_1c6580;
        case 0x1c6584u: goto label_1c6584;
        case 0x1c6588u: goto label_1c6588;
        case 0x1c658cu: goto label_1c658c;
        case 0x1c6590u: goto label_1c6590;
        case 0x1c6594u: goto label_1c6594;
        case 0x1c6598u: goto label_1c6598;
        case 0x1c659cu: goto label_1c659c;
        case 0x1c65a0u: goto label_1c65a0;
        case 0x1c65a4u: goto label_1c65a4;
        case 0x1c65a8u: goto label_1c65a8;
        case 0x1c65acu: goto label_1c65ac;
        case 0x1c65b0u: goto label_1c65b0;
        case 0x1c65b4u: goto label_1c65b4;
        case 0x1c65b8u: goto label_1c65b8;
        case 0x1c65bcu: goto label_1c65bc;
        case 0x1c65c0u: goto label_1c65c0;
        case 0x1c65c4u: goto label_1c65c4;
        case 0x1c65c8u: goto label_1c65c8;
        case 0x1c65ccu: goto label_1c65cc;
        case 0x1c65d0u: goto label_1c65d0;
        case 0x1c65d4u: goto label_1c65d4;
        case 0x1c65d8u: goto label_1c65d8;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c65e0u: goto label_1c65e0;
        case 0x1c65e4u: goto label_1c65e4;
        case 0x1c65e8u: goto label_1c65e8;
        case 0x1c65ecu: goto label_1c65ec;
        case 0x1c65f0u: goto label_1c65f0;
        case 0x1c65f4u: goto label_1c65f4;
        case 0x1c65f8u: goto label_1c65f8;
        case 0x1c65fcu: goto label_1c65fc;
        case 0x1c6600u: goto label_1c6600;
        case 0x1c6604u: goto label_1c6604;
        case 0x1c6608u: goto label_1c6608;
        case 0x1c660cu: goto label_1c660c;
        case 0x1c6610u: goto label_1c6610;
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6618u: goto label_1c6618;
        case 0x1c661cu: goto label_1c661c;
        case 0x1c6620u: goto label_1c6620;
        case 0x1c6624u: goto label_1c6624;
        case 0x1c6628u: goto label_1c6628;
        case 0x1c662cu: goto label_1c662c;
        case 0x1c6630u: goto label_1c6630;
        case 0x1c6634u: goto label_1c6634;
        case 0x1c6638u: goto label_1c6638;
        case 0x1c663cu: goto label_1c663c;
        case 0x1c6640u: goto label_1c6640;
        case 0x1c6644u: goto label_1c6644;
        case 0x1c6648u: goto label_1c6648;
        case 0x1c664cu: goto label_1c664c;
        case 0x1c6650u: goto label_1c6650;
        case 0x1c6654u: goto label_1c6654;
        case 0x1c6658u: goto label_1c6658;
        case 0x1c665cu: goto label_1c665c;
        case 0x1c6660u: goto label_1c6660;
        case 0x1c6664u: goto label_1c6664;
        case 0x1c6668u: goto label_1c6668;
        case 0x1c666cu: goto label_1c666c;
        case 0x1c6670u: goto label_1c6670;
        case 0x1c6674u: goto label_1c6674;
        case 0x1c6678u: goto label_1c6678;
        case 0x1c667cu: goto label_1c667c;
        case 0x1c6680u: goto label_1c6680;
        case 0x1c6684u: goto label_1c6684;
        case 0x1c6688u: goto label_1c6688;
        case 0x1c668cu: goto label_1c668c;
        case 0x1c6690u: goto label_1c6690;
        case 0x1c6694u: goto label_1c6694;
        case 0x1c6698u: goto label_1c6698;
        case 0x1c669cu: goto label_1c669c;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66a4u: goto label_1c66a4;
        case 0x1c66a8u: goto label_1c66a8;
        case 0x1c66acu: goto label_1c66ac;
        case 0x1c66b0u: goto label_1c66b0;
        case 0x1c66b4u: goto label_1c66b4;
        case 0x1c66b8u: goto label_1c66b8;
        case 0x1c66bcu: goto label_1c66bc;
        case 0x1c66c0u: goto label_1c66c0;
        case 0x1c66c4u: goto label_1c66c4;
        case 0x1c66c8u: goto label_1c66c8;
        case 0x1c66ccu: goto label_1c66cc;
        case 0x1c66d0u: goto label_1c66d0;
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66d8u: goto label_1c66d8;
        case 0x1c66dcu: goto label_1c66dc;
        case 0x1c66e0u: goto label_1c66e0;
        case 0x1c66e4u: goto label_1c66e4;
        case 0x1c66e8u: goto label_1c66e8;
        case 0x1c66ecu: goto label_1c66ec;
        case 0x1c66f0u: goto label_1c66f0;
        case 0x1c66f4u: goto label_1c66f4;
        case 0x1c66f8u: goto label_1c66f8;
        case 0x1c66fcu: goto label_1c66fc;
        case 0x1c6700u: goto label_1c6700;
        case 0x1c6704u: goto label_1c6704;
        case 0x1c6708u: goto label_1c6708;
        case 0x1c670cu: goto label_1c670c;
        case 0x1c6710u: goto label_1c6710;
        case 0x1c6714u: goto label_1c6714;
        case 0x1c6718u: goto label_1c6718;
        case 0x1c671cu: goto label_1c671c;
        case 0x1c6720u: goto label_1c6720;
        case 0x1c6724u: goto label_1c6724;
        case 0x1c6728u: goto label_1c6728;
        case 0x1c672cu: goto label_1c672c;
        default: break;
    }

    ctx->pc = 0x1c60b0u;

label_1c60b0:
    // 0x1c60b0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1c60b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_1c60b4:
    // 0x1c60b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c60b8:
    // 0x1c60b8: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x1c60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
label_1c60bc:
    // 0x1c60bc: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x1c60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
label_1c60c0:
    // 0x1c60c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c60c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c60c4:
    // 0x1c60c4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1c60c8:
    // 0x1c60c8: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x1c60c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
label_1c60cc:
    // 0x1c60cc: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x1c60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
label_1c60d0:
    // 0x1c60d0: 0xe7b402b0  swc1        $f20, 0x2B0($sp)
    ctx->pc = 0x1c60d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_1c60d4:
    // 0x1c60d4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1c60d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c60d8:
    // 0x1c60d8: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x1c60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_1c60dc:
    // 0x1c60dc: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x1c60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
label_1c60e0:
    // 0x1c60e0: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x1c60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
label_1c60e4:
    // 0x1c60e4: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x1c60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
label_1c60e8:
    // 0x1c60e8: 0xe7b802d0  swc1        $f24, 0x2D0($sp)
    ctx->pc = 0x1c60e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_1c60ec:
    // 0x1c60ec: 0xe7b702c8  swc1        $f23, 0x2C8($sp)
    ctx->pc = 0x1c60ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_1c60f0:
    // 0x1c60f0: 0xe7b602c0  swc1        $f22, 0x2C0($sp)
    ctx->pc = 0x1c60f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_1c60f4:
    // 0x1c60f4: 0xe7b502b8  swc1        $f21, 0x2B8($sp)
    ctx->pc = 0x1c60f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_1c60f8:
    // 0x1c60f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c60f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c60fc:
    // 0x1c60fc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1c60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1c6100:
    // 0x1c6100: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x1c6100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1c6104:
    // 0x1c6104: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1c6104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1c6108:
    // 0x1c6108: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1c610c:
    // 0x1c610c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1c610cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_1c6110:
    // 0x1c6110: 0xc0e409a  jal         func_390268
label_1c6114:
    if (ctx->pc == 0x1C6114u) {
        ctx->pc = 0x1C6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6110u;
        // 0x1c6114: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6118u;
        goto label_1c6118;
    }
    ctx->pc = 0x1C6110u;
    SET_GPR_U32(ctx, 31, 0x1C6118u);
    ctx->pc = 0x1C6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6110u;
    // 0x1c6114: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C6110u, 0x1C6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6118u;
label_1c6118:
    // 0x1c6118: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1c611c:
    if (ctx->pc == 0x1C611Cu) {
        ctx->pc = 0x1C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6118u;
        // 0x1c611c: 0xc6250028  lwc1        $f5, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6120u;
        goto label_1c6120;
    }
    ctx->pc = 0x1C6118u;
    {
        const bool branch_taken_0x1c6118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6118) {
            ctx->pc = 0x1C611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6118u;
            // 0x1c611c: 0xc6250028  lwc1        $f5, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6150u;
            goto label_1c6150;
        }
    }
    ctx->pc = 0x1C6120u;
label_1c6120:
    // 0x1c6120: 0xc0e87c0  jal         func_3A1F00
label_1c6124:
    if (ctx->pc == 0x1C6124u) {
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6120u;
        // 0x1c6124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6128u;
        goto label_1c6128;
    }
    ctx->pc = 0x1C6120u;
    SET_GPR_U32(ctx, 31, 0x1C6128u);
    ctx->pc = 0x1C6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6120u;
    // 0x1c6124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x1C6120u, 0x1C6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6128u;
label_1c6128:
    // 0x1c6128: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c6128u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c612c:
    // 0x1c612c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c612cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1c6130:
    // 0x1c6130: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1c6130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c6134:
    // 0x1c6134: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1c6134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c6138:
    // 0x1c6138: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1c6138u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1c613c:
    // 0x1c613c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c613cu;
    // VWAITQ (Q already resolved in this runtime)
label_1c6140:
    // 0x1c6140: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1c6140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1c6144:
    // 0x1c6144: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1c6144u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_1c6148:
    // 0x1c6148: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c6148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c614c:
    // 0x1c614c: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x1c614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c6150:
    // 0x1c6150: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1c6150u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6154:
    // 0x1c6154: 0x0  nop
    ctx->pc = 0x1c6154u;
    // NOP
label_1c6158:
    // 0x1c6158: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c615c:
    // 0x1c615c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1c615cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1c6160:
    // 0x1c6160: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c6164:
    // 0x1c6164: 0x3c013daa  lui         $at, 0x3DAA
    ctx->pc = 0x1c6164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15786 << 16));
label_1c6168:
    // 0x1c6168: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1c6168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1c616c:
    // 0x1c616c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c616cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c6170:
    // 0x1c6170: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x1c6170u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
label_1c6174:
    // 0x1c6174: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1c6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6178:
    // 0x1c6178: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x1c6178u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1c617c:
    // 0x1c617c: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
label_1c6180:
    // 0x1c6180: 0x3421b718  ori         $at, $at, 0xB718
    ctx->pc = 0x1c6180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46872);
label_1c6184:
    // 0x1c6184: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c6188:
    // 0x1c6188: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1c6188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_1c618c:
    // 0x1c618c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c618cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c6190:
    // 0x1c6190: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1c6190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1c6194:
    // 0x1c6194: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c6198:
    // 0x1c6198: 0xc6242920  lwc1        $f4, 0x2920($s1)
    ctx->pc = 0x1c6198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c619c:
    // 0x1c619c: 0x46160869  min.s       $f1, $f1, $f22
    ctx->pc = 0x1c619cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[22]);
label_1c61a0:
    // 0x1c61a0: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1c61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c61a4:
    // 0x1c61a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c61a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c61a8:
    // 0x1c61a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c61ac:
    // 0x1c61ac: 0x4601b0c1  sub.s       $f3, $f22, $f1
    ctx->pc = 0x1c61acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_1c61b0:
    // 0x1c61b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1c61b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1c61b4:
    // 0x1c61b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c61b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1c61b8:
    // 0x1c61b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1c61b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1c61bc:
    // 0x1c61bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c61bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c61c0:
    // 0x1c61c0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1c61c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1c61c4:
    // 0x1c61c4: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
label_1c61c8:
    if (ctx->pc == 0x1C61C8u) {
        ctx->pc = 0x1C61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61C4u;
        // 0x1c61c8: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61CCu;
        goto label_1c61cc;
    }
    ctx->pc = 0x1C61C4u;
    {
        const bool branch_taken_0x1c61c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61C4u;
        // 0x1c61c8: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61c4) {
            ctx->pc = 0x1C66F8u;
            goto label_1c66f8;
        }
    }
    ctx->pc = 0x1C61CCu;
label_1c61cc:
    // 0x1c61cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c61d0:
    // 0x1c61d0: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
label_1c61d4:
    if (ctx->pc == 0x1C61D4u) {
        ctx->pc = 0x1C61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D0u;
        // 0x1c61d4: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61D8u;
        goto label_1c61d8;
    }
    ctx->pc = 0x1C61D0u;
    {
        const bool branch_taken_0x1c61d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D0u;
        // 0x1c61d4: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61d0) {
            ctx->pc = 0x1C66FCu;
            goto label_1c66fc;
        }
    }
    ctx->pc = 0x1C61D8u;
label_1c61d8:
    // 0x1c61d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c61dc:
    // 0x1c61dc: 0x50400148  beql        $v0, $zero, . + 4 + (0x148 << 2)
label_1c61e0:
    if (ctx->pc == 0x1C61E0u) {
        ctx->pc = 0x1C61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61DCu;
        // 0x1c61e0: 0x7bb10290  lq          $s1, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61E4u;
        goto label_1c61e4;
    }
    ctx->pc = 0x1C61DCu;
    {
        const bool branch_taken_0x1c61dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61dc) {
            ctx->pc = 0x1C61E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C61DCu;
            // 0x1c61e0: 0x7bb10290  lq          $s1, 0x290($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6700u;
            goto label_1c6700;
        }
    }
    ctx->pc = 0x1C61E4u;
label_1c61e4:
    // 0x1c61e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c61e8:
    // 0x1c61e8: 0x54400145  bnel        $v0, $zero, . + 4 + (0x145 << 2)
label_1c61ec:
    if (ctx->pc == 0x1C61ECu) {
        ctx->pc = 0x1C61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61E8u;
        // 0x1c61ec: 0x7bb10290  lq          $s1, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61F0u;
        goto label_1c61f0;
    }
    ctx->pc = 0x1C61E8u;
    {
        const bool branch_taken_0x1c61e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c61e8) {
            ctx->pc = 0x1C61ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C61E8u;
            // 0x1c61ec: 0x7bb10290  lq          $s1, 0x290($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6700u;
            goto label_1c6700;
        }
    }
    ctx->pc = 0x1C61F0u;
label_1c61f0:
    // 0x1c61f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c61f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c61f4:
    // 0x1c61f4: 0xc047e6c  jal         func_11F9B0
label_1c61f8:
    if (ctx->pc == 0x1C61F8u) {
        ctx->pc = 0x1C61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61F4u;
        // 0x1c61f8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61FCu;
        goto label_1c61fc;
    }
    ctx->pc = 0x1C61F4u;
    SET_GPR_U32(ctx, 31, 0x1C61FCu);
    ctx->pc = 0x1C61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61F4u;
    // 0x1c61f8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1C61F4u, 0x1C61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61FCu;
label_1c61fc:
    // 0x1c61fc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1c61fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6200:
    // 0x1c6200: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x1c6200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1c6204:
    // 0x1c6204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6208:
    // 0x1c6208: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c620c:
    // 0x1c620c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1c6210:
    // 0x1c6210: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1c6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1c6214:
    // 0x1c6214: 0x40f809  jalr        $v0
label_1c6218:
    if (ctx->pc == 0x1C6218u) {
        ctx->pc = 0x1C6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6214u;
        // 0x1c6218: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C621Cu;
        goto label_1c621c;
    }
    ctx->pc = 0x1C6214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C621Cu);
        ctx->pc = 0x1C6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6214u;
        // 0x1c6218: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6214u, 0x1C621Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C621Cu;
label_1c621c:
    // 0x1c621c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c621cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6220:
    // 0x1c6220: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x1c6220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1c6224:
    // 0x1c6224: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6228:
    // 0x1c6228: 0x27a8010c  addiu       $t0, $sp, 0x10C
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1c622c:
    // 0x1c622c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c6230:
    // 0x1c6230: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_1c6234:
    // 0x1c6234: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1c6234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1c6238:
    // 0x1c6238: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1c6238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1c623c:
    // 0x1c623c: 0x40f809  jalr        $v0
label_1c6240:
    if (ctx->pc == 0x1C6240u) {
        ctx->pc = 0x1C6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C623Cu;
        // 0x1c6240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6244u;
        goto label_1c6244;
    }
    ctx->pc = 0x1C623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6244u);
        ctx->pc = 0x1C6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C623Cu;
        // 0x1c6240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C623Cu, 0x1C6244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6244u;
label_1c6244:
    // 0x1c6244: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c6244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6248:
    // 0x1c6248: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1c6248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1c624c:
    // 0x1c624c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1c624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1c6250:
    // 0x1c6250: 0x40f809  jalr        $v0
label_1c6254:
    if (ctx->pc == 0x1C6254u) {
        ctx->pc = 0x1C6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6250u;
        // 0x1c6254: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6258u;
        goto label_1c6258;
    }
    ctx->pc = 0x1C6250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6258u);
        ctx->pc = 0x1C6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6250u;
        // 0x1c6254: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6250u, 0x1C6258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6258u;
label_1c6258:
    // 0x1c6258: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
label_1c625c:
    if (ctx->pc == 0x1C625Cu) {
        ctx->pc = 0x1C625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6258u;
        // 0x1c625c: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6260u;
        goto label_1c6260;
    }
    ctx->pc = 0x1C6258u;
    {
        const bool branch_taken_0x1c6258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6258u;
        // 0x1c625c: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6258) {
            ctx->pc = 0x1C66F8u;
            goto label_1c66f8;
        }
    }
    ctx->pc = 0x1C6260u;
label_1c6260:
    // 0x1c6260: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x1c6260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1c6264:
    // 0x1c6264: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1c6264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1c6268:
    // 0x1c6268: 0x96250096  lhu         $a1, 0x96($s1)
    ctx->pc = 0x1c6268u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
label_1c626c:
    // 0x1c626c: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x1c626cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_1c6270:
    // 0x1c6270: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_1c6274:
    // 0x1c6274: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1c6274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c6278:
    // 0x1c6278: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1c6278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c627c:
    // 0x1c627c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1c627cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c6280:
    // 0x1c6280: 0xc4d71544  lwc1        $f23, 0x1544($a2)
    ctx->pc = 0x1c6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c6284:
    // 0x1c6284: 0xc0616ac  jal         func_185AB0
label_1c6288:
    if (ctx->pc == 0x1C6288u) {
        ctx->pc = 0x1C6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6284u;
        // 0x1c6288: 0xc4741540  lwc1        $f20, 0x1540($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C628Cu;
        goto label_1c628c;
    }
    ctx->pc = 0x1C6284u;
    SET_GPR_U32(ctx, 31, 0x1C628Cu);
    ctx->pc = 0x1C6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6284u;
    // 0x1c6288: 0xc4741540  lwc1        $f20, 0x1540($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1C6284u, 0x1C628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C628Cu;
label_1c628c:
    // 0x1c628c: 0x5040011b  beql        $v0, $zero, . + 4 + (0x11B << 2)
label_1c6290:
    if (ctx->pc == 0x1C6290u) {
        ctx->pc = 0x1C6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C628Cu;
        // 0x1c6290: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6294u;
        goto label_1c6294;
    }
    ctx->pc = 0x1C628Cu;
    {
        const bool branch_taken_0x1c628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c628c) {
            ctx->pc = 0x1C6290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C628Cu;
            // 0x1c6290: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C66FCu;
            goto label_1c66fc;
        }
    }
    ctx->pc = 0x1C6294u;
label_1c6294:
    // 0x1c6294: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x1c6294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_1c6298:
    // 0x1c6298: 0x50400118  beql        $v0, $zero, . + 4 + (0x118 << 2)
label_1c629c:
    if (ctx->pc == 0x1C629Cu) {
        ctx->pc = 0x1C629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6298u;
        // 0x1c629c: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62A0u;
        goto label_1c62a0;
    }
    ctx->pc = 0x1C6298u;
    {
        const bool branch_taken_0x1c6298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6298) {
            ctx->pc = 0x1C629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6298u;
            // 0x1c629c: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C66FCu;
            goto label_1c66fc;
        }
    }
    ctx->pc = 0x1C62A0u;
label_1c62a0:
    // 0x1c62a0: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_1c62a4:
    if (ctx->pc == 0x1C62A4u) {
        ctx->pc = 0x1C62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62A0u;
        // 0x1c62a4: 0xc6202934  lwc1        $f0, 0x2934($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62A8u;
        goto label_1c62a8;
    }
    ctx->pc = 0x1C62A0u;
    {
        const bool branch_taken_0x1c62a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62a0) {
            ctx->pc = 0x1C62A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C62A0u;
            // 0x1c62a4: 0xc6202934  lwc1        $f0, 0x2934($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62C0u;
            goto label_1c62c0;
        }
    }
    ctx->pc = 0x1C62A8u;
label_1c62a8:
    // 0x1c62a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c62ac:
    // 0x1c62ac: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x1c62acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_1c62b0:
    // 0x1c62b0: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1c62b4:
    // 0x1c62b4: 0x60f809  jalr        $v1
label_1c62b8:
    if (ctx->pc == 0x1C62B8u) {
        ctx->pc = 0x1C62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62B4u;
        // 0x1c62b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62BCu;
        goto label_1c62bc;
    }
    ctx->pc = 0x1C62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C62BCu);
        ctx->pc = 0x1C62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62B4u;
        // 0x1c62b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C62B4u, 0x1C62BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C62BCu;
label_1c62bc:
    // 0x1c62bc: 0xc6202934  lwc1        $f0, 0x2934($s1)
    ctx->pc = 0x1c62bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c62c0:
    // 0x1c62c0: 0x2403008f  addiu       $v1, $zero, 0x8F
    ctx->pc = 0x1c62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_1c62c4:
    // 0x1c62c4: 0xc6212938  lwc1        $f1, 0x2938($s1)
    ctx->pc = 0x1c62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c62c8:
    // 0x1c62c8: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x1c62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1c62cc:
    // 0x1c62cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c62ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c62d0:
    // 0x1c62d0: 0xc6222930  lwc1        $f2, 0x2930($s1)
    ctx->pc = 0x1c62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c62d4:
    // 0x1c62d4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c62d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1c62d8:
    // 0x1c62d8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c62dc:
    // 0x1c62dc: 0xa3a30230  sb          $v1, 0x230($sp)
    ctx->pc = 0x1c62dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 560), (uint8_t)GPR_U32(ctx, 3));
label_1c62e0:
    // 0x1c62e0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1c62e4:
    // 0x1c62e4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c62e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1c62e8:
    // 0x1c62e8: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x1c62e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1c62ec:
    // 0x1c62ec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c62ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c62f0:
    // 0x1c62f0: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1c62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c62f4:
    // 0x1c62f4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1c62f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c62f8:
    // 0x1c62f8: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x1c62f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
label_1c62fc:
    // 0x1c62fc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1c62fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1c6300:
    // 0x1c6300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6304:
    // 0x1c6304: 0xc481e9bc  lwc1        $f1, -0x1644($a0)
    ctx->pc = 0x1c6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6308:
    // 0x1c6308: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_1c630c:
    // 0x1c630c: 0x96220094  lhu         $v0, 0x94($s1)
    ctx->pc = 0x1c630cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
label_1c6310:
    // 0x1c6310: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x1c6310u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c6314:
    // 0x1c6314: 0x104500f8  beq         $v0, $a1, . + 4 + (0xF8 << 2)
label_1c6318:
    if (ctx->pc == 0x1C6318u) {
        ctx->pc = 0x1C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6314u;
        // 0x1c6318: 0xafa300f4  sw          $v1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C631Cu;
        goto label_1c631c;
    }
    ctx->pc = 0x1C6314u;
    {
        const bool branch_taken_0x1c6314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6314u;
        // 0x1c6318: 0xafa300f4  sw          $v1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6314) {
            ctx->pc = 0x1C66F8u;
            goto label_1c66f8;
        }
    }
    ctx->pc = 0x1C631Cu;
label_1c631c:
    // 0x1c631c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1c6320:
    // 0x1c6320: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
label_1c6324:
    if (ctx->pc == 0x1C6324u) {
        ctx->pc = 0x1C6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6320u;
        // 0x1c6324: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6328u;
        goto label_1c6328;
    }
    ctx->pc = 0x1C6320u;
    {
        const bool branch_taken_0x1c6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6320u;
        // 0x1c6324: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6320) {
            ctx->pc = 0x1C66F8u;
            goto label_1c66f8;
        }
    }
    ctx->pc = 0x1C6328u;
label_1c6328:
    // 0x1c6328: 0xc0616ac  jal         func_185AB0
label_1c632c:
    if (ctx->pc == 0x1C632Cu) {
        ctx->pc = 0x1C632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6328u;
        // 0x1c632c: 0x96250094  lhu         $a1, 0x94($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6330u;
        goto label_1c6330;
    }
    ctx->pc = 0x1C6328u;
    SET_GPR_U32(ctx, 31, 0x1C6330u);
    ctx->pc = 0x1C632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6328u;
    // 0x1c632c: 0x96250094  lhu         $a1, 0x94($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1C6328u, 0x1C6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6330u;
label_1c6330:
    // 0x1c6330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6334:
    // 0x1c6334: 0x524000f1  beql        $s2, $zero, . + 4 + (0xF1 << 2)
label_1c6338:
    if (ctx->pc == 0x1C6338u) {
        ctx->pc = 0x1C6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6334u;
        // 0x1c6338: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C633Cu;
        goto label_1c633c;
    }
    ctx->pc = 0x1C6334u;
    {
        const bool branch_taken_0x1c6334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6334) {
            ctx->pc = 0x1C6338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6334u;
            // 0x1c6338: 0x7bb002a0  lq          $s0, 0x2A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C66FCu;
            goto label_1c66fc;
        }
    }
    ctx->pc = 0x1C633Cu;
label_1c633c:
    // 0x1c633c: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x1c633cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_1c6340:
    // 0x1c6340: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
label_1c6344:
    if (ctx->pc == 0x1C6344u) {
        ctx->pc = 0x1C6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6340u;
        // 0x1c6344: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6348u;
        goto label_1c6348;
    }
    ctx->pc = 0x1C6340u;
    {
        const bool branch_taken_0x1c6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6340u;
        // 0x1c6344: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6340) {
            ctx->pc = 0x1C66F8u;
            goto label_1c66f8;
        }
    }
    ctx->pc = 0x1C6348u;
label_1c6348:
    // 0x1c6348: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1c6348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1c634c:
    // 0x1c634c: 0x2446e9e8  addiu       $a2, $v0, -0x1618
    ctx->pc = 0x1c634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
label_1c6350:
    // 0x1c6350: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c6354:
    // 0x1c6354: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1c6358:
    // 0x1c6358: 0x8e65b734  lw          $a1, -0x48CC($s3)
    ctx->pc = 0x1c6358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_1c635c:
    // 0x1c635c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c6360:
    // 0x1c6360: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c6360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c6364:
    // 0x1c6364: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c6364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c6368:
    // 0x1c6368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c636c:
    // 0x1c636c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1c636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1c6370:
    // 0x1c6370: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1c6370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1c6374:
    // 0x1c6374: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1c6374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1c6378:
    // 0x1c6378: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1c6378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1c637c:
    // 0x1c637c: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x1c637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6380:
    // 0x1c6380: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x1c6380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6384:
    // 0x1c6384: 0xb3a8011f  sdl         $t0, 0x11F($sp)
    ctx->pc = 0x1c6384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6388:
    // 0x1c6388: 0xb7a80118  sdr         $t0, 0x118($sp)
    ctx->pc = 0x1c6388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c638c:
    // 0x1c638c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c6390:
    // 0x1c6390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6394:
    // 0x1c6394: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1c6394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_1c6398:
    // 0x1c6398: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c639c:
    // 0x1c639c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c63a0:
    // 0x1c63a0: 0x0  nop
    ctx->pc = 0x1c63a0u;
    // NOP
label_1c63a4:
    // 0x1c63a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c63a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c63a8:
    // 0x1c63a8: 0x46020202  mul.s       $f8, $f0, $f2
    ctx->pc = 0x1c63a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1c63ac:
    // 0x1c63ac: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x1c63acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c63b0:
    // 0x1c63b0: 0x0  nop
    ctx->pc = 0x1c63b0u;
    // NOP
label_1c63b4:
    // 0x1c63b4: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_1c63b8:
    if (ctx->pc == 0x1C63B8u) {
        ctx->pc = 0x1C63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63B4u;
        // 0x1c63b8: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C63BCu;
        goto label_1c63bc;
    }
    ctx->pc = 0x1C63B4u;
    {
        const bool branch_taken_0x1c63b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63B4u;
        // 0x1c63b8: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63b4) {
            ctx->pc = 0x1C6448u;
            goto label_1c6448;
        }
    }
    ctx->pc = 0x1C63BCu;
label_1c63bc:
    // 0x1c63bc: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x1c63bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_1c63c0:
    // 0x1c63c0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1c63c4:
    // 0x1c63c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c63c8:
    // 0x1c63c8: 0x4608b001  sub.s       $f0, $f22, $f8
    ctx->pc = 0x1c63c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[8]);
label_1c63cc:
    // 0x1c63cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c63d0:
    // 0x1c63d0: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x1c63d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1c63d4:
    // 0x1c63d4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x1c63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c63d8:
    // 0x1c63d8: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x1c63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1c63dc:
    // 0x1c63dc: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x1c63dcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1c63e0:
    // 0x1c63e0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x1c63e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c63e4:
    // 0x1c63e4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1c63e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1c63e8:
    // 0x1c63e8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x1c63e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1c63ec:
    // 0x1c63ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1c63ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1c63f0:
    // 0x1c63f0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c63f4:
    // 0x1c63f4: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x1c63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c63f8:
    // 0x1c63f8: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1c63f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1c63fc:
    // 0x1c63fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6400:
    // 0x1c6400: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c6400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6404:
    // 0x1c6404: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x1c6404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_1c6408:
    // 0x1c6408: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x1c6408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1c640c:
    // 0x1c640c: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x1c640cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1c6410:
    // 0x1c6410: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1c6410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_1c6414:
    // 0x1c6414: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x1c6414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1c6418:
    // 0x1c6418: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1c6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1c641c:
    // 0x1c641c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x1c641cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1c6420:
    // 0x1c6420: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1c6420u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1c6424:
    // 0x1c6424: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x1c6424u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1c6428:
    // 0x1c6428: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x1c6428u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1c642c:
    // 0x1c642c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1c642cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1c6430:
    // 0x1c6430: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x1c6430u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_1c6434:
    // 0x1c6434: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x1c6434u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1c6438:
    // 0x1c6438: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x1c6438u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1c643c:
    // 0x1c643c: 0xe7a7011c  swc1        $f7, 0x11C($sp)
    ctx->pc = 0x1c643cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1c6440:
    // 0x1c6440: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1c6440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c6444:
    // 0x1c6444: 0x0  nop
    ctx->pc = 0x1c6444u;
    // NOP
label_1c6448:
    // 0x1c6448: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1c644c:
    // 0x1c644c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1c6450:
    if (ctx->pc == 0x1C6450u) {
        ctx->pc = 0x1C6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C644Cu;
        // 0x1c6450: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6454u;
        goto label_1c6454;
    }
    ctx->pc = 0x1C644Cu;
    {
        const bool branch_taken_0x1c644c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1C6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C644Cu;
        // 0x1c6450: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c644c) {
            ctx->pc = 0x1C6468u;
            goto label_1c6468;
        }
    }
    ctx->pc = 0x1C6454u;
label_1c6454:
    // 0x1c6454: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c6454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c6458:
    // 0x1c6458: 0x0  nop
    ctx->pc = 0x1c6458u;
    // NOP
label_1c645c:
    // 0x1c645c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c645cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c6460:
    // 0x1c6460: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c6464:
    if (ctx->pc == 0x1C6464u) {
        ctx->pc = 0x1C6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6460u;
        // 0x1c6464: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6468u;
        goto label_1c6468;
    }
    ctx->pc = 0x1C6460u;
    {
        const bool branch_taken_0x1c6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6460u;
        // 0x1c6464: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6460) {
            ctx->pc = 0x1C6488u;
            goto label_1c6488;
        }
    }
    ctx->pc = 0x1C6468u;
label_1c6468:
    // 0x1c6468: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1c6468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1c646c:
    // 0x1c646c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1c6470:
    // 0x1c6470: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c6470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c6474:
    // 0x1c6474: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c6478:
    // 0x1c6478: 0x0  nop
    ctx->pc = 0x1c6478u;
    // NOP
label_1c647c:
    // 0x1c647c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c647cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c6480:
    // 0x1c6480: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c6480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c6484:
    // 0x1c6484: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_1c6488:
    // 0x1c6488: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1c6488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1c648c:
    // 0x1c648c: 0xc6220070  lwc1        $f2, 0x70($s1)
    ctx->pc = 0x1c648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6490:
    // 0x1c6490: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x1c6490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c6494:
    // 0x1c6494: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x1c6494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_1c6498:
    // 0x1c6498: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1c6498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1c649c:
    // 0x1c649c: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x1c649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c64a0:
    // 0x1c64a0: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x1c64a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_1c64a4:
    // 0x1c64a4: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x1c64a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1c64a8:
    // 0x1c64a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c64ac:
    // 0x1c64ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c64acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c64b0:
    // 0x1c64b0: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x1c64b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_1c64b4:
    // 0x1c64b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c64b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c64b8:
    // 0x1c64b8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c64b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1c64bc:
    // 0x1c64bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c64c0:
    // 0x1c64c0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c64c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c64c4:
    // 0x1c64c4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1c64c8:
    // 0x1c64c8: 0xc4541548  lwc1        $f20, 0x1548($v0)
    ctx->pc = 0x1c64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c64cc:
    // 0x1c64cc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1c64ccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c64d0:
    // 0x1c64d0: 0x0  nop
    ctx->pc = 0x1c64d0u;
    // NOP
label_1c64d4:
    // 0x1c64d4: 0x0  nop
    ctx->pc = 0x1c64d4u;
    // NOP
label_1c64d8:
    // 0x1c64d8: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x1c64d8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
label_1c64dc:
    // 0x1c64dc: 0x0  nop
    ctx->pc = 0x1c64dcu;
    // NOP
label_1c64e0:
    // 0x1c64e0: 0x0  nop
    ctx->pc = 0x1c64e0u;
    // NOP
label_1c64e4:
    // 0x1c64e4: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1c64e4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_1c64e8:
    // 0x1c64e8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x1c64e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1c64ec:
    // 0x1c64ec: 0xc0cd8ec  jal         func_3363B0
label_1c64f0:
    if (ctx->pc == 0x1C64F0u) {
        ctx->pc = 0x1C64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64ECu;
        // 0x1c64f0: 0xe7a10134  swc1        $f1, 0x134($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64F4u;
        goto label_1c64f4;
    }
    ctx->pc = 0x1C64ECu;
    SET_GPR_U32(ctx, 31, 0x1C64F4u);
    ctx->pc = 0x1C64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64ECu;
    // 0x1c64f0: 0xe7a10134  swc1        $f1, 0x134($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1C64ECu, 0x1C64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64F4u;
label_1c64f4:
    // 0x1c64f4: 0xc0cd766  jal         func_335D98
label_1c64f8:
    if (ctx->pc == 0x1C64F8u) {
        ctx->pc = 0x1C64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64F4u;
        // 0x1c64f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64FCu;
        goto label_1c64fc;
    }
    ctx->pc = 0x1C64F4u;
    SET_GPR_U32(ctx, 31, 0x1C64FCu);
    ctx->pc = 0x1C64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64F4u;
    // 0x1c64f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x1C64F4u, 0x1C64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64FCu;
label_1c64fc:
    // 0x1c64fc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1c6500:
    // 0x1c6500: 0x46000607  neg.s       $f24, $f0
    ctx->pc = 0x1c6500u;
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
label_1c6504:
    // 0x1c6504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6508:
    // 0x1c6508: 0xc10c1fa  jal         func_4307E8
label_1c650c:
    if (ctx->pc == 0x1C650Cu) {
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6510u;
        goto label_1c6510;
    }
    ctx->pc = 0x1C6508u;
    SET_GPR_U32(ctx, 31, 0x1C6510u);
    ctx->pc = 0x1C650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6508u;
    // 0x1c650c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1C6508u, 0x1C6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c6510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6514:
    // 0x1c6514: 0x8e85cdb4  lw          $a1, -0x324C($s4)
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_1c6518:
    // 0x1c6518: 0x0  nop
    ctx->pc = 0x1c6518u;
    // NOP
label_1c651c:
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
label_1c6520:
    // 0x1c6520: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1c6520u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1c6524:
    // 0x1c6524: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1c6524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1c6528:
    // 0x1c6528: 0x6ba70167  ldl         $a3, 0x167($sp)
    ctx->pc = 0x1c6528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1c652c:
    // 0x1c652c: 0x6fa70160  ldr         $a3, 0x160($sp)
    ctx->pc = 0x1c652cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1c6530:
    // 0x1c6530: 0xb3a70157  sdl         $a3, 0x157($sp)
    ctx->pc = 0x1c6530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6534:
    // 0x1c6534: 0xb7a70150  sdr         $a3, 0x150($sp)
    ctx->pc = 0x1c6534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6538:
    // 0x1c6538: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c653c:
    // 0x1c653c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1c653cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1c6540:
    // 0x1c6540: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1c6540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1c6544:
    // 0x1c6544: 0x60f809  jalr        $v1
label_1c6548:
    if (ctx->pc == 0x1C6548u) {
        ctx->pc = 0x1C6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6544u;
        // 0x1c6548: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C654Cu;
        goto label_1c654c;
    }
    ctx->pc = 0x1C6544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C654Cu);
        ctx->pc = 0x1C6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6544u;
        // 0x1c6548: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6544u, 0x1C654Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C654Cu;
label_1c654c:
    // 0x1c654c: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x1c654cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_1c6550:
    // 0x1c6550: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c6550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1c6554:
    // 0x1c6554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6558:
    // 0x1c6558: 0x8e82cdb4  lw          $v0, -0x324C($s4)
    ctx->pc = 0x1c6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_1c655c:
    // 0x1c655c: 0x4600b886  mov.s       $f2, $f23
    ctx->pc = 0x1c655cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[23]);
label_1c6560:
    // 0x1c6560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6564:
    // 0x1c6564: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c6564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6568:
    // 0x1c6568: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c6568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1c656c:
    // 0x1c656c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1c6570:
    if (ctx->pc == 0x1C6570u) {
        ctx->pc = 0x1C6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C656Cu;
        // 0x1c6570: 0x46170580  add.s       $f22, $f0, $f23 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6574u;
        goto label_1c6574;
    }
    ctx->pc = 0x1C656Cu;
    {
        const bool branch_taken_0x1c656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C656Cu;
        // 0x1c6570: 0x46170580  add.s       $f22, $f0, $f23 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c656c) {
            ctx->pc = 0x1C65C8u;
            goto label_1c65c8;
        }
    }
    ctx->pc = 0x1C6574u;
label_1c6574:
    // 0x1c6574: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x1c6574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_1c6578:
    // 0x1c6578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c657c:
    if (ctx->pc == 0x1C657Cu) {
        ctx->pc = 0x1C657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6578u;
        // 0x1c657c: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6580u;
        goto label_1c6580;
    }
    ctx->pc = 0x1C6578u;
    {
        const bool branch_taken_0x1c6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6578u;
        // 0x1c657c: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6578) {
            ctx->pc = 0x1C65A0u;
            goto label_1c65a0;
        }
    }
    ctx->pc = 0x1C6580u;
label_1c6580:
    // 0x1c6580: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1c6584:
    if (ctx->pc == 0x1C6584u) {
        ctx->pc = 0x1C6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6580u;
        // 0x1c6584: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6588u;
        goto label_1c6588;
    }
    ctx->pc = 0x1C6580u;
    {
        const bool branch_taken_0x1c6580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6580u;
        // 0x1c6584: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6580) {
            ctx->pc = 0x1C65F4u;
            goto label_1c65f4;
        }
    }
    ctx->pc = 0x1C6588u;
label_1c6588:
    // 0x1c6588: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x1c6588u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_1c658c:
    // 0x1c658c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1c658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1c6590:
    // 0x1c6590: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c6590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c6594:
    // 0x1c6594: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c6594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c6598:
    // 0x1c6598: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c659c:
    if (ctx->pc == 0x1C659Cu) {
        ctx->pc = 0x1C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6598u;
        // 0x1c659c: 0x4616ad02  mul.s       $f20, $f21, $f22 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65A0u;
        goto label_1c65a0;
    }
    ctx->pc = 0x1C6598u;
    {
        const bool branch_taken_0x1c6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6598u;
        // 0x1c659c: 0x4616ad02  mul.s       $f20, $f21, $f22 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6598) {
            ctx->pc = 0x1C65FCu;
            goto label_1c65fc;
        }
    }
    ctx->pc = 0x1C65A0u;
label_1c65a0:
    // 0x1c65a0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c65a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1c65a4:
    // 0x1c65a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c65a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c65a8:
    // 0x1c65a8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c65a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c65ac:
    // 0x1c65ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1c65b0:
    if (ctx->pc == 0x1C65B0u) {
        ctx->pc = 0x1C65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ACu;
        // 0x1c65b0: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65B4u;
        goto label_1c65b4;
    }
    ctx->pc = 0x1C65ACu;
    {
        const bool branch_taken_0x1c65ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ACu;
        // 0x1c65b0: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65ac) {
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65B4u;
label_1c65b4:
    // 0x1c65b4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1c65b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1c65b8:
    // 0x1c65b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c65b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c65bc:
    // 0x1c65bc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c65bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c65c0:
    // 0x1c65c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c65c4:
    if (ctx->pc == 0x1C65C4u) {
        ctx->pc = 0x1C65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65C0u;
        // 0x1c65c4: 0x46001586  mov.s       $f22, $f2 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65C8u;
        goto label_1c65c8;
    }
    ctx->pc = 0x1C65C0u;
    {
        const bool branch_taken_0x1c65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65C0u;
        // 0x1c65c4: 0x46001586  mov.s       $f22, $f2 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65c0) {
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65C8u;
label_1c65c8:
    // 0x1c65c8: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x1c65c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_1c65cc:
    // 0x1c65cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c65d0:
    if (ctx->pc == 0x1C65D0u) {
        ctx->pc = 0x1C65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65CCu;
        // 0x1c65d0: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65D4u;
        goto label_1c65d4;
    }
    ctx->pc = 0x1C65CCu;
    {
        const bool branch_taken_0x1c65cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65CCu;
        // 0x1c65d0: 0x46000d86  mov.s       $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65cc) {
            ctx->pc = 0x1C65E8u;
            goto label_1c65e8;
        }
    }
    ctx->pc = 0x1C65D4u;
label_1c65d4:
    // 0x1c65d4: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1c65d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1c65d8:
    // 0x1c65d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c65d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c65dc:
    // 0x1c65dc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c65dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c65e0:
    // 0x1c65e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c65e4:
    if (ctx->pc == 0x1C65E4u) {
        ctx->pc = 0x1C65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65E0u;
        // 0x1c65e4: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65E8u;
        goto label_1c65e8;
    }
    ctx->pc = 0x1C65E0u;
    {
        const bool branch_taken_0x1c65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65E0u;
        // 0x1c65e4: 0xc7a10150  lwc1        $f1, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65e0) {
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65E8u;
label_1c65e8:
    // 0x1c65e8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1c65e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1c65ec:
    // 0x1c65ec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c65ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1c65f0:
    // 0x1c65f0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1c65f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1c65f4:
    // 0x1c65f4: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1c65f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c65f8:
    // 0x1c65f8: 0x4616ad02  mul.s       $f20, $f21, $f22
    ctx->pc = 0x1c65f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_1c65fc:
    // 0x1c65fc: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x1c65fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
label_1c6600:
    // 0x1c6600: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1c6600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c6604:
    // 0x1c6604: 0x46160882  mul.s       $f2, $f1, $f22
    ctx->pc = 0x1c6604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_1c6608:
    // 0x1c6608: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1c6608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1c660c:
    // 0x1c660c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c660cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c6610:
    // 0x1c6610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6614:
    // 0x1c6614: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1c6614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_1c6618:
    // 0x1c6618: 0xe7b4018c  swc1        $f20, 0x18C($sp)
    ctx->pc = 0x1c6618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1c661c:
    // 0x1c661c: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1c661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1c6620:
    // 0x1c6620: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c6624:
    // 0x1c6624: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x1c6624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1c6628:
    // 0x1c6628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c662c:
    // 0x1c662c: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x1c662cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1c6630:
    // 0x1c6630: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x1c6630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1c6634:
    // 0x1c6634: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x1c6634u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1c6638:
    // 0x1c6638: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1c6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1c663c:
    // 0x1c663c: 0x6ba50137  ldl         $a1, 0x137($sp)
    ctx->pc = 0x1c663cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c6640:
    // 0x1c6640: 0x6fa50130  ldr         $a1, 0x130($sp)
    ctx->pc = 0x1c6640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c6644:
    // 0x1c6644: 0xb3a501c3  sdl         $a1, 0x1C3($sp)
    ctx->pc = 0x1c6644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6648:
    // 0x1c6648: 0xb7a501bc  sdr         $a1, 0x1BC($sp)
    ctx->pc = 0x1c6648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c664c:
    // 0x1c664c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c6650:
    // 0x1c6650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6654:
    // 0x1c6654: 0x6ba90117  ldl         $t1, 0x117($sp)
    ctx->pc = 0x1c6654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1c6658:
    // 0x1c6658: 0x6fa90110  ldr         $t1, 0x110($sp)
    ctx->pc = 0x1c6658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1c665c:
    // 0x1c665c: 0x6ba2011f  ldl         $v0, 0x11F($sp)
    ctx->pc = 0x1c665cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1c6660:
    // 0x1c6660: 0x6fa20118  ldr         $v0, 0x118($sp)
    ctx->pc = 0x1c6660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1c6664:
    // 0x1c6664: 0xb3a901b3  sdl         $t1, 0x1B3($sp)
    ctx->pc = 0x1c6664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6668:
    // 0x1c6668: 0xb7a901ac  sdr         $t1, 0x1AC($sp)
    ctx->pc = 0x1c6668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c666c:
    // 0x1c666c: 0xb3a201bb  sdl         $v0, 0x1BB($sp)
    ctx->pc = 0x1c666cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6670:
    // 0x1c6670: 0xb7a201b4  sdr         $v0, 0x1B4($sp)
    ctx->pc = 0x1c6670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c6674:
    // 0x1c6674: 0xa3a3019c  sb          $v1, 0x19C($sp)
    ctx->pc = 0x1c6674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 412), (uint8_t)GPR_U32(ctx, 3));
label_1c6678:
    // 0x1c6678: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1c6678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_1c667c:
    // 0x1c667c: 0xc060b58  jal         func_182D60
label_1c6680:
    if (ctx->pc == 0x1C6680u) {
        ctx->pc = 0x1C6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C667Cu;
        // 0x1c6680: 0xe7a001c4  swc1        $f0, 0x1C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6684u;
        goto label_1c6684;
    }
    ctx->pc = 0x1C667Cu;
    SET_GPR_U32(ctx, 31, 0x1C6684u);
    ctx->pc = 0x1C6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C667Cu;
    // 0x1c6680: 0xe7a001c4  swc1        $f0, 0x1C4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1C667Cu, 0x1C6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6684u;
label_1c6684:
    // 0x1c6684: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c6688:
    // 0x1c6688: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1c668c:
    // 0x1c668c: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
label_1c6690:
    // 0x1c6690: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c6690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1c6694:
    // 0x1c6694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6698:
    // 0x1c6698: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1c669c:
    // 0x1c669c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c66a0:
    // 0x1c66a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c66a4:
    // 0x1c66a4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1c66a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1c66a8:
    // 0x1c66a8: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1c66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_1c66ac:
    // 0x1c66ac: 0xa3a50225  sb          $a1, 0x225($sp)
    ctx->pc = 0x1c66acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 549), (uint8_t)GPR_U32(ctx, 5));
label_1c66b0:
    // 0x1c66b0: 0xa3a00224  sb          $zero, 0x224($sp)
    ctx->pc = 0x1c66b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 548), (uint8_t)GPR_U32(ctx, 0));
label_1c66b4:
    // 0x1c66b4: 0xc05ee2a  jal         func_17B8A8
label_1c66b8:
    if (ctx->pc == 0x1C66B8u) {
        ctx->pc = 0x1C66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66B4u;
        // 0x1c66b8: 0xafa00198  sw          $zero, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66BCu;
        goto label_1c66bc;
    }
    ctx->pc = 0x1C66B4u;
    SET_GPR_U32(ctx, 31, 0x1C66BCu);
    ctx->pc = 0x1C66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66B4u;
    // 0x1c66b8: 0xafa00198  sw          $zero, 0x198($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8A8u, 0x1C66B4u, 0x1C66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66BCu;
label_1c66bc:
    // 0x1c66bc: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1c66bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c66c0:
    // 0x1c66c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c66c4:
    // 0x1c66c4: 0xc440e9dc  lwc1        $f0, -0x1624($v0)
    ctx->pc = 0x1c66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c66c8:
    // 0x1c66c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c66c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c66cc:
    // 0x1c66cc: 0x46160882  mul.s       $f2, $f1, $f22
    ctx->pc = 0x1c66ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_1c66d0:
    // 0x1c66d0: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1c66d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_1c66d4:
    // 0x1c66d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1c66d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c66d8:
    // 0x1c66d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1c66d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c66dc:
    // 0x1c66dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c66dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c66e0:
    // 0x1c66e0: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1c66e0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c66e4:
    // 0x1c66e4: 0xe7b4018c  swc1        $f20, 0x18C($sp)
    ctx->pc = 0x1c66e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1c66e8:
    // 0x1c66e8: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x1c66e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1c66ec:
    // 0x1c66ec: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x1c66ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1c66f0:
    // 0x1c66f0: 0xc05ef0a  jal         func_17BC28
label_1c66f4:
    if (ctx->pc == 0x1C66F4u) {
        ctx->pc = 0x1C66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66F0u;
        // 0x1c66f4: 0xe7b50188  swc1        $f21, 0x188($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66F8u;
        goto label_1c66f8;
    }
    ctx->pc = 0x1C66F0u;
    SET_GPR_U32(ctx, 31, 0x1C66F8u);
    ctx->pc = 0x1C66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66F0u;
    // 0x1c66f4: 0xe7b50188  swc1        $f21, 0x188($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC28u, 0x1C66F0u, 0x1C66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66F8u;
label_1c66f8:
    // 0x1c66f8: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x1c66f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_1c66fc:
    // 0x1c66fc: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x1c66fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_1c6700:
    // 0x1c6700: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x1c6700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1c6704:
    // 0x1c6704: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x1c6704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1c6708:
    // 0x1c6708: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x1c6708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1c670c:
    // 0x1c670c: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x1c670cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1c6710:
    // 0x1c6710: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x1c6710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_1c6714:
    // 0x1c6714: 0xc7b802d0  lwc1        $f24, 0x2D0($sp)
    ctx->pc = 0x1c6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1c6718:
    // 0x1c6718: 0xc7b702c8  lwc1        $f23, 0x2C8($sp)
    ctx->pc = 0x1c6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c671c:
    // 0x1c671c: 0xc7b602c0  lwc1        $f22, 0x2C0($sp)
    ctx->pc = 0x1c671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c6720:
    // 0x1c6720: 0xc7b502b8  lwc1        $f21, 0x2B8($sp)
    ctx->pc = 0x1c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c6724:
    // 0x1c6724: 0xc7b402b0  lwc1        $f20, 0x2B0($sp)
    ctx->pc = 0x1c6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c6728:
    // 0x1c6728: 0x3e00008  jr          $ra
label_1c672c:
    if (ctx->pc == 0x1C672Cu) {
        ctx->pc = 0x1C672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6728u;
        // 0x1c672c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6730u;
        goto label_fallthrough_0x1c6728;
    }
    ctx->pc = 0x1C6728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6728u;
        // 0x1c672c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c6728:
    ctx->pc = 0x1C6730u;
}
