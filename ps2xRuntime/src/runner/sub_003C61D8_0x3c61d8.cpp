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

// Function: sub_003C61D8
// Address: 0x3c61d8 - 0x3c6ae0
void sub_003C61D8_0x3c61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C61D8_0x3c61d8");
#endif

    switch (ctx->pc) {
        case 0x3c61d8u: goto label_3c61d8;
        case 0x3c61dcu: goto label_3c61dc;
        case 0x3c61e0u: goto label_3c61e0;
        case 0x3c61e4u: goto label_3c61e4;
        case 0x3c61e8u: goto label_3c61e8;
        case 0x3c61ecu: goto label_3c61ec;
        case 0x3c61f0u: goto label_3c61f0;
        case 0x3c61f4u: goto label_3c61f4;
        case 0x3c61f8u: goto label_3c61f8;
        case 0x3c61fcu: goto label_3c61fc;
        case 0x3c6200u: goto label_3c6200;
        case 0x3c6204u: goto label_3c6204;
        case 0x3c6208u: goto label_3c6208;
        case 0x3c620cu: goto label_3c620c;
        case 0x3c6210u: goto label_3c6210;
        case 0x3c6214u: goto label_3c6214;
        case 0x3c6218u: goto label_3c6218;
        case 0x3c621cu: goto label_3c621c;
        case 0x3c6220u: goto label_3c6220;
        case 0x3c6224u: goto label_3c6224;
        case 0x3c6228u: goto label_3c6228;
        case 0x3c622cu: goto label_3c622c;
        case 0x3c6230u: goto label_3c6230;
        case 0x3c6234u: goto label_3c6234;
        case 0x3c6238u: goto label_3c6238;
        case 0x3c623cu: goto label_3c623c;
        case 0x3c6240u: goto label_3c6240;
        case 0x3c6244u: goto label_3c6244;
        case 0x3c6248u: goto label_3c6248;
        case 0x3c624cu: goto label_3c624c;
        case 0x3c6250u: goto label_3c6250;
        case 0x3c6254u: goto label_3c6254;
        case 0x3c6258u: goto label_3c6258;
        case 0x3c625cu: goto label_3c625c;
        case 0x3c6260u: goto label_3c6260;
        case 0x3c6264u: goto label_3c6264;
        case 0x3c6268u: goto label_3c6268;
        case 0x3c626cu: goto label_3c626c;
        case 0x3c6270u: goto label_3c6270;
        case 0x3c6274u: goto label_3c6274;
        case 0x3c6278u: goto label_3c6278;
        case 0x3c627cu: goto label_3c627c;
        case 0x3c6280u: goto label_3c6280;
        case 0x3c6284u: goto label_3c6284;
        case 0x3c6288u: goto label_3c6288;
        case 0x3c628cu: goto label_3c628c;
        case 0x3c6290u: goto label_3c6290;
        case 0x3c6294u: goto label_3c6294;
        case 0x3c6298u: goto label_3c6298;
        case 0x3c629cu: goto label_3c629c;
        case 0x3c62a0u: goto label_3c62a0;
        case 0x3c62a4u: goto label_3c62a4;
        case 0x3c62a8u: goto label_3c62a8;
        case 0x3c62acu: goto label_3c62ac;
        case 0x3c62b0u: goto label_3c62b0;
        case 0x3c62b4u: goto label_3c62b4;
        case 0x3c62b8u: goto label_3c62b8;
        case 0x3c62bcu: goto label_3c62bc;
        case 0x3c62c0u: goto label_3c62c0;
        case 0x3c62c4u: goto label_3c62c4;
        case 0x3c62c8u: goto label_3c62c8;
        case 0x3c62ccu: goto label_3c62cc;
        case 0x3c62d0u: goto label_3c62d0;
        case 0x3c62d4u: goto label_3c62d4;
        case 0x3c62d8u: goto label_3c62d8;
        case 0x3c62dcu: goto label_3c62dc;
        case 0x3c62e0u: goto label_3c62e0;
        case 0x3c62e4u: goto label_3c62e4;
        case 0x3c62e8u: goto label_3c62e8;
        case 0x3c62ecu: goto label_3c62ec;
        case 0x3c62f0u: goto label_3c62f0;
        case 0x3c62f4u: goto label_3c62f4;
        case 0x3c62f8u: goto label_3c62f8;
        case 0x3c62fcu: goto label_3c62fc;
        case 0x3c6300u: goto label_3c6300;
        case 0x3c6304u: goto label_3c6304;
        case 0x3c6308u: goto label_3c6308;
        case 0x3c630cu: goto label_3c630c;
        case 0x3c6310u: goto label_3c6310;
        case 0x3c6314u: goto label_3c6314;
        case 0x3c6318u: goto label_3c6318;
        case 0x3c631cu: goto label_3c631c;
        case 0x3c6320u: goto label_3c6320;
        case 0x3c6324u: goto label_3c6324;
        case 0x3c6328u: goto label_3c6328;
        case 0x3c632cu: goto label_3c632c;
        case 0x3c6330u: goto label_3c6330;
        case 0x3c6334u: goto label_3c6334;
        case 0x3c6338u: goto label_3c6338;
        case 0x3c633cu: goto label_3c633c;
        case 0x3c6340u: goto label_3c6340;
        case 0x3c6344u: goto label_3c6344;
        case 0x3c6348u: goto label_3c6348;
        case 0x3c634cu: goto label_3c634c;
        case 0x3c6350u: goto label_3c6350;
        case 0x3c6354u: goto label_3c6354;
        case 0x3c6358u: goto label_3c6358;
        case 0x3c635cu: goto label_3c635c;
        case 0x3c6360u: goto label_3c6360;
        case 0x3c6364u: goto label_3c6364;
        case 0x3c6368u: goto label_3c6368;
        case 0x3c636cu: goto label_3c636c;
        case 0x3c6370u: goto label_3c6370;
        case 0x3c6374u: goto label_3c6374;
        case 0x3c6378u: goto label_3c6378;
        case 0x3c637cu: goto label_3c637c;
        case 0x3c6380u: goto label_3c6380;
        case 0x3c6384u: goto label_3c6384;
        case 0x3c6388u: goto label_3c6388;
        case 0x3c638cu: goto label_3c638c;
        case 0x3c6390u: goto label_3c6390;
        case 0x3c6394u: goto label_3c6394;
        case 0x3c6398u: goto label_3c6398;
        case 0x3c639cu: goto label_3c639c;
        case 0x3c63a0u: goto label_3c63a0;
        case 0x3c63a4u: goto label_3c63a4;
        case 0x3c63a8u: goto label_3c63a8;
        case 0x3c63acu: goto label_3c63ac;
        case 0x3c63b0u: goto label_3c63b0;
        case 0x3c63b4u: goto label_3c63b4;
        case 0x3c63b8u: goto label_3c63b8;
        case 0x3c63bcu: goto label_3c63bc;
        case 0x3c63c0u: goto label_3c63c0;
        case 0x3c63c4u: goto label_3c63c4;
        case 0x3c63c8u: goto label_3c63c8;
        case 0x3c63ccu: goto label_3c63cc;
        case 0x3c63d0u: goto label_3c63d0;
        case 0x3c63d4u: goto label_3c63d4;
        case 0x3c63d8u: goto label_3c63d8;
        case 0x3c63dcu: goto label_3c63dc;
        case 0x3c63e0u: goto label_3c63e0;
        case 0x3c63e4u: goto label_3c63e4;
        case 0x3c63e8u: goto label_3c63e8;
        case 0x3c63ecu: goto label_3c63ec;
        case 0x3c63f0u: goto label_3c63f0;
        case 0x3c63f4u: goto label_3c63f4;
        case 0x3c63f8u: goto label_3c63f8;
        case 0x3c63fcu: goto label_3c63fc;
        case 0x3c6400u: goto label_3c6400;
        case 0x3c6404u: goto label_3c6404;
        case 0x3c6408u: goto label_3c6408;
        case 0x3c640cu: goto label_3c640c;
        case 0x3c6410u: goto label_3c6410;
        case 0x3c6414u: goto label_3c6414;
        case 0x3c6418u: goto label_3c6418;
        case 0x3c641cu: goto label_3c641c;
        case 0x3c6420u: goto label_3c6420;
        case 0x3c6424u: goto label_3c6424;
        case 0x3c6428u: goto label_3c6428;
        case 0x3c642cu: goto label_3c642c;
        case 0x3c6430u: goto label_3c6430;
        case 0x3c6434u: goto label_3c6434;
        case 0x3c6438u: goto label_3c6438;
        case 0x3c643cu: goto label_3c643c;
        case 0x3c6440u: goto label_3c6440;
        case 0x3c6444u: goto label_3c6444;
        case 0x3c6448u: goto label_3c6448;
        case 0x3c644cu: goto label_3c644c;
        case 0x3c6450u: goto label_3c6450;
        case 0x3c6454u: goto label_3c6454;
        case 0x3c6458u: goto label_3c6458;
        case 0x3c645cu: goto label_3c645c;
        case 0x3c6460u: goto label_3c6460;
        case 0x3c6464u: goto label_3c6464;
        case 0x3c6468u: goto label_3c6468;
        case 0x3c646cu: goto label_3c646c;
        case 0x3c6470u: goto label_3c6470;
        case 0x3c6474u: goto label_3c6474;
        case 0x3c6478u: goto label_3c6478;
        case 0x3c647cu: goto label_3c647c;
        case 0x3c6480u: goto label_3c6480;
        case 0x3c6484u: goto label_3c6484;
        case 0x3c6488u: goto label_3c6488;
        case 0x3c648cu: goto label_3c648c;
        case 0x3c6490u: goto label_3c6490;
        case 0x3c6494u: goto label_3c6494;
        case 0x3c6498u: goto label_3c6498;
        case 0x3c649cu: goto label_3c649c;
        case 0x3c64a0u: goto label_3c64a0;
        case 0x3c64a4u: goto label_3c64a4;
        case 0x3c64a8u: goto label_3c64a8;
        case 0x3c64acu: goto label_3c64ac;
        case 0x3c64b0u: goto label_3c64b0;
        case 0x3c64b4u: goto label_3c64b4;
        case 0x3c64b8u: goto label_3c64b8;
        case 0x3c64bcu: goto label_3c64bc;
        case 0x3c64c0u: goto label_3c64c0;
        case 0x3c64c4u: goto label_3c64c4;
        case 0x3c64c8u: goto label_3c64c8;
        case 0x3c64ccu: goto label_3c64cc;
        case 0x3c64d0u: goto label_3c64d0;
        case 0x3c64d4u: goto label_3c64d4;
        case 0x3c64d8u: goto label_3c64d8;
        case 0x3c64dcu: goto label_3c64dc;
        case 0x3c64e0u: goto label_3c64e0;
        case 0x3c64e4u: goto label_3c64e4;
        case 0x3c64e8u: goto label_3c64e8;
        case 0x3c64ecu: goto label_3c64ec;
        case 0x3c64f0u: goto label_3c64f0;
        case 0x3c64f4u: goto label_3c64f4;
        case 0x3c64f8u: goto label_3c64f8;
        case 0x3c64fcu: goto label_3c64fc;
        case 0x3c6500u: goto label_3c6500;
        case 0x3c6504u: goto label_3c6504;
        case 0x3c6508u: goto label_3c6508;
        case 0x3c650cu: goto label_3c650c;
        case 0x3c6510u: goto label_3c6510;
        case 0x3c6514u: goto label_3c6514;
        case 0x3c6518u: goto label_3c6518;
        case 0x3c651cu: goto label_3c651c;
        case 0x3c6520u: goto label_3c6520;
        case 0x3c6524u: goto label_3c6524;
        case 0x3c6528u: goto label_3c6528;
        case 0x3c652cu: goto label_3c652c;
        case 0x3c6530u: goto label_3c6530;
        case 0x3c6534u: goto label_3c6534;
        case 0x3c6538u: goto label_3c6538;
        case 0x3c653cu: goto label_3c653c;
        case 0x3c6540u: goto label_3c6540;
        case 0x3c6544u: goto label_3c6544;
        case 0x3c6548u: goto label_3c6548;
        case 0x3c654cu: goto label_3c654c;
        case 0x3c6550u: goto label_3c6550;
        case 0x3c6554u: goto label_3c6554;
        case 0x3c6558u: goto label_3c6558;
        case 0x3c655cu: goto label_3c655c;
        case 0x3c6560u: goto label_3c6560;
        case 0x3c6564u: goto label_3c6564;
        case 0x3c6568u: goto label_3c6568;
        case 0x3c656cu: goto label_3c656c;
        case 0x3c6570u: goto label_3c6570;
        case 0x3c6574u: goto label_3c6574;
        case 0x3c6578u: goto label_3c6578;
        case 0x3c657cu: goto label_3c657c;
        case 0x3c6580u: goto label_3c6580;
        case 0x3c6584u: goto label_3c6584;
        case 0x3c6588u: goto label_3c6588;
        case 0x3c658cu: goto label_3c658c;
        case 0x3c6590u: goto label_3c6590;
        case 0x3c6594u: goto label_3c6594;
        case 0x3c6598u: goto label_3c6598;
        case 0x3c659cu: goto label_3c659c;
        case 0x3c65a0u: goto label_3c65a0;
        case 0x3c65a4u: goto label_3c65a4;
        case 0x3c65a8u: goto label_3c65a8;
        case 0x3c65acu: goto label_3c65ac;
        case 0x3c65b0u: goto label_3c65b0;
        case 0x3c65b4u: goto label_3c65b4;
        case 0x3c65b8u: goto label_3c65b8;
        case 0x3c65bcu: goto label_3c65bc;
        case 0x3c65c0u: goto label_3c65c0;
        case 0x3c65c4u: goto label_3c65c4;
        case 0x3c65c8u: goto label_3c65c8;
        case 0x3c65ccu: goto label_3c65cc;
        case 0x3c65d0u: goto label_3c65d0;
        case 0x3c65d4u: goto label_3c65d4;
        case 0x3c65d8u: goto label_3c65d8;
        case 0x3c65dcu: goto label_3c65dc;
        case 0x3c65e0u: goto label_3c65e0;
        case 0x3c65e4u: goto label_3c65e4;
        case 0x3c65e8u: goto label_3c65e8;
        case 0x3c65ecu: goto label_3c65ec;
        case 0x3c65f0u: goto label_3c65f0;
        case 0x3c65f4u: goto label_3c65f4;
        case 0x3c65f8u: goto label_3c65f8;
        case 0x3c65fcu: goto label_3c65fc;
        case 0x3c6600u: goto label_3c6600;
        case 0x3c6604u: goto label_3c6604;
        case 0x3c6608u: goto label_3c6608;
        case 0x3c660cu: goto label_3c660c;
        case 0x3c6610u: goto label_3c6610;
        case 0x3c6614u: goto label_3c6614;
        case 0x3c6618u: goto label_3c6618;
        case 0x3c661cu: goto label_3c661c;
        case 0x3c6620u: goto label_3c6620;
        case 0x3c6624u: goto label_3c6624;
        case 0x3c6628u: goto label_3c6628;
        case 0x3c662cu: goto label_3c662c;
        case 0x3c6630u: goto label_3c6630;
        case 0x3c6634u: goto label_3c6634;
        case 0x3c6638u: goto label_3c6638;
        case 0x3c663cu: goto label_3c663c;
        case 0x3c6640u: goto label_3c6640;
        case 0x3c6644u: goto label_3c6644;
        case 0x3c6648u: goto label_3c6648;
        case 0x3c664cu: goto label_3c664c;
        case 0x3c6650u: goto label_3c6650;
        case 0x3c6654u: goto label_3c6654;
        case 0x3c6658u: goto label_3c6658;
        case 0x3c665cu: goto label_3c665c;
        case 0x3c6660u: goto label_3c6660;
        case 0x3c6664u: goto label_3c6664;
        case 0x3c6668u: goto label_3c6668;
        case 0x3c666cu: goto label_3c666c;
        case 0x3c6670u: goto label_3c6670;
        case 0x3c6674u: goto label_3c6674;
        case 0x3c6678u: goto label_3c6678;
        case 0x3c667cu: goto label_3c667c;
        case 0x3c6680u: goto label_3c6680;
        case 0x3c6684u: goto label_3c6684;
        case 0x3c6688u: goto label_3c6688;
        case 0x3c668cu: goto label_3c668c;
        case 0x3c6690u: goto label_3c6690;
        case 0x3c6694u: goto label_3c6694;
        case 0x3c6698u: goto label_3c6698;
        case 0x3c669cu: goto label_3c669c;
        case 0x3c66a0u: goto label_3c66a0;
        case 0x3c66a4u: goto label_3c66a4;
        case 0x3c66a8u: goto label_3c66a8;
        case 0x3c66acu: goto label_3c66ac;
        case 0x3c66b0u: goto label_3c66b0;
        case 0x3c66b4u: goto label_3c66b4;
        case 0x3c66b8u: goto label_3c66b8;
        case 0x3c66bcu: goto label_3c66bc;
        case 0x3c66c0u: goto label_3c66c0;
        case 0x3c66c4u: goto label_3c66c4;
        case 0x3c66c8u: goto label_3c66c8;
        case 0x3c66ccu: goto label_3c66cc;
        case 0x3c66d0u: goto label_3c66d0;
        case 0x3c66d4u: goto label_3c66d4;
        case 0x3c66d8u: goto label_3c66d8;
        case 0x3c66dcu: goto label_3c66dc;
        case 0x3c66e0u: goto label_3c66e0;
        case 0x3c66e4u: goto label_3c66e4;
        case 0x3c66e8u: goto label_3c66e8;
        case 0x3c66ecu: goto label_3c66ec;
        case 0x3c66f0u: goto label_3c66f0;
        case 0x3c66f4u: goto label_3c66f4;
        case 0x3c66f8u: goto label_3c66f8;
        case 0x3c66fcu: goto label_3c66fc;
        case 0x3c6700u: goto label_3c6700;
        case 0x3c6704u: goto label_3c6704;
        case 0x3c6708u: goto label_3c6708;
        case 0x3c670cu: goto label_3c670c;
        case 0x3c6710u: goto label_3c6710;
        case 0x3c6714u: goto label_3c6714;
        case 0x3c6718u: goto label_3c6718;
        case 0x3c671cu: goto label_3c671c;
        case 0x3c6720u: goto label_3c6720;
        case 0x3c6724u: goto label_3c6724;
        case 0x3c6728u: goto label_3c6728;
        case 0x3c672cu: goto label_3c672c;
        case 0x3c6730u: goto label_3c6730;
        case 0x3c6734u: goto label_3c6734;
        case 0x3c6738u: goto label_3c6738;
        case 0x3c673cu: goto label_3c673c;
        case 0x3c6740u: goto label_3c6740;
        case 0x3c6744u: goto label_3c6744;
        case 0x3c6748u: goto label_3c6748;
        case 0x3c674cu: goto label_3c674c;
        case 0x3c6750u: goto label_3c6750;
        case 0x3c6754u: goto label_3c6754;
        case 0x3c6758u: goto label_3c6758;
        case 0x3c675cu: goto label_3c675c;
        case 0x3c6760u: goto label_3c6760;
        case 0x3c6764u: goto label_3c6764;
        case 0x3c6768u: goto label_3c6768;
        case 0x3c676cu: goto label_3c676c;
        case 0x3c6770u: goto label_3c6770;
        case 0x3c6774u: goto label_3c6774;
        case 0x3c6778u: goto label_3c6778;
        case 0x3c677cu: goto label_3c677c;
        case 0x3c6780u: goto label_3c6780;
        case 0x3c6784u: goto label_3c6784;
        case 0x3c6788u: goto label_3c6788;
        case 0x3c678cu: goto label_3c678c;
        case 0x3c6790u: goto label_3c6790;
        case 0x3c6794u: goto label_3c6794;
        case 0x3c6798u: goto label_3c6798;
        case 0x3c679cu: goto label_3c679c;
        case 0x3c67a0u: goto label_3c67a0;
        case 0x3c67a4u: goto label_3c67a4;
        case 0x3c67a8u: goto label_3c67a8;
        case 0x3c67acu: goto label_3c67ac;
        case 0x3c67b0u: goto label_3c67b0;
        case 0x3c67b4u: goto label_3c67b4;
        case 0x3c67b8u: goto label_3c67b8;
        case 0x3c67bcu: goto label_3c67bc;
        case 0x3c67c0u: goto label_3c67c0;
        case 0x3c67c4u: goto label_3c67c4;
        case 0x3c67c8u: goto label_3c67c8;
        case 0x3c67ccu: goto label_3c67cc;
        case 0x3c67d0u: goto label_3c67d0;
        case 0x3c67d4u: goto label_3c67d4;
        case 0x3c67d8u: goto label_3c67d8;
        case 0x3c67dcu: goto label_3c67dc;
        case 0x3c67e0u: goto label_3c67e0;
        case 0x3c67e4u: goto label_3c67e4;
        case 0x3c67e8u: goto label_3c67e8;
        case 0x3c67ecu: goto label_3c67ec;
        case 0x3c67f0u: goto label_3c67f0;
        case 0x3c67f4u: goto label_3c67f4;
        case 0x3c67f8u: goto label_3c67f8;
        case 0x3c67fcu: goto label_3c67fc;
        case 0x3c6800u: goto label_3c6800;
        case 0x3c6804u: goto label_3c6804;
        case 0x3c6808u: goto label_3c6808;
        case 0x3c680cu: goto label_3c680c;
        case 0x3c6810u: goto label_3c6810;
        case 0x3c6814u: goto label_3c6814;
        case 0x3c6818u: goto label_3c6818;
        case 0x3c681cu: goto label_3c681c;
        case 0x3c6820u: goto label_3c6820;
        case 0x3c6824u: goto label_3c6824;
        case 0x3c6828u: goto label_3c6828;
        case 0x3c682cu: goto label_3c682c;
        case 0x3c6830u: goto label_3c6830;
        case 0x3c6834u: goto label_3c6834;
        case 0x3c6838u: goto label_3c6838;
        case 0x3c683cu: goto label_3c683c;
        case 0x3c6840u: goto label_3c6840;
        case 0x3c6844u: goto label_3c6844;
        case 0x3c6848u: goto label_3c6848;
        case 0x3c684cu: goto label_3c684c;
        case 0x3c6850u: goto label_3c6850;
        case 0x3c6854u: goto label_3c6854;
        case 0x3c6858u: goto label_3c6858;
        case 0x3c685cu: goto label_3c685c;
        case 0x3c6860u: goto label_3c6860;
        case 0x3c6864u: goto label_3c6864;
        case 0x3c6868u: goto label_3c6868;
        case 0x3c686cu: goto label_3c686c;
        case 0x3c6870u: goto label_3c6870;
        case 0x3c6874u: goto label_3c6874;
        case 0x3c6878u: goto label_3c6878;
        case 0x3c687cu: goto label_3c687c;
        case 0x3c6880u: goto label_3c6880;
        case 0x3c6884u: goto label_3c6884;
        case 0x3c6888u: goto label_3c6888;
        case 0x3c688cu: goto label_3c688c;
        case 0x3c6890u: goto label_3c6890;
        case 0x3c6894u: goto label_3c6894;
        case 0x3c6898u: goto label_3c6898;
        case 0x3c689cu: goto label_3c689c;
        case 0x3c68a0u: goto label_3c68a0;
        case 0x3c68a4u: goto label_3c68a4;
        case 0x3c68a8u: goto label_3c68a8;
        case 0x3c68acu: goto label_3c68ac;
        case 0x3c68b0u: goto label_3c68b0;
        case 0x3c68b4u: goto label_3c68b4;
        case 0x3c68b8u: goto label_3c68b8;
        case 0x3c68bcu: goto label_3c68bc;
        case 0x3c68c0u: goto label_3c68c0;
        case 0x3c68c4u: goto label_3c68c4;
        case 0x3c68c8u: goto label_3c68c8;
        case 0x3c68ccu: goto label_3c68cc;
        case 0x3c68d0u: goto label_3c68d0;
        case 0x3c68d4u: goto label_3c68d4;
        case 0x3c68d8u: goto label_3c68d8;
        case 0x3c68dcu: goto label_3c68dc;
        case 0x3c68e0u: goto label_3c68e0;
        case 0x3c68e4u: goto label_3c68e4;
        case 0x3c68e8u: goto label_3c68e8;
        case 0x3c68ecu: goto label_3c68ec;
        case 0x3c68f0u: goto label_3c68f0;
        case 0x3c68f4u: goto label_3c68f4;
        case 0x3c68f8u: goto label_3c68f8;
        case 0x3c68fcu: goto label_3c68fc;
        case 0x3c6900u: goto label_3c6900;
        case 0x3c6904u: goto label_3c6904;
        case 0x3c6908u: goto label_3c6908;
        case 0x3c690cu: goto label_3c690c;
        case 0x3c6910u: goto label_3c6910;
        case 0x3c6914u: goto label_3c6914;
        case 0x3c6918u: goto label_3c6918;
        case 0x3c691cu: goto label_3c691c;
        case 0x3c6920u: goto label_3c6920;
        case 0x3c6924u: goto label_3c6924;
        case 0x3c6928u: goto label_3c6928;
        case 0x3c692cu: goto label_3c692c;
        case 0x3c6930u: goto label_3c6930;
        case 0x3c6934u: goto label_3c6934;
        case 0x3c6938u: goto label_3c6938;
        case 0x3c693cu: goto label_3c693c;
        case 0x3c6940u: goto label_3c6940;
        case 0x3c6944u: goto label_3c6944;
        case 0x3c6948u: goto label_3c6948;
        case 0x3c694cu: goto label_3c694c;
        case 0x3c6950u: goto label_3c6950;
        case 0x3c6954u: goto label_3c6954;
        case 0x3c6958u: goto label_3c6958;
        case 0x3c695cu: goto label_3c695c;
        case 0x3c6960u: goto label_3c6960;
        case 0x3c6964u: goto label_3c6964;
        case 0x3c6968u: goto label_3c6968;
        case 0x3c696cu: goto label_3c696c;
        case 0x3c6970u: goto label_3c6970;
        case 0x3c6974u: goto label_3c6974;
        case 0x3c6978u: goto label_3c6978;
        case 0x3c697cu: goto label_3c697c;
        case 0x3c6980u: goto label_3c6980;
        case 0x3c6984u: goto label_3c6984;
        case 0x3c6988u: goto label_3c6988;
        case 0x3c698cu: goto label_3c698c;
        case 0x3c6990u: goto label_3c6990;
        case 0x3c6994u: goto label_3c6994;
        case 0x3c6998u: goto label_3c6998;
        case 0x3c699cu: goto label_3c699c;
        case 0x3c69a0u: goto label_3c69a0;
        case 0x3c69a4u: goto label_3c69a4;
        case 0x3c69a8u: goto label_3c69a8;
        case 0x3c69acu: goto label_3c69ac;
        case 0x3c69b0u: goto label_3c69b0;
        case 0x3c69b4u: goto label_3c69b4;
        case 0x3c69b8u: goto label_3c69b8;
        case 0x3c69bcu: goto label_3c69bc;
        case 0x3c69c0u: goto label_3c69c0;
        case 0x3c69c4u: goto label_3c69c4;
        case 0x3c69c8u: goto label_3c69c8;
        case 0x3c69ccu: goto label_3c69cc;
        case 0x3c69d0u: goto label_3c69d0;
        case 0x3c69d4u: goto label_3c69d4;
        case 0x3c69d8u: goto label_3c69d8;
        case 0x3c69dcu: goto label_3c69dc;
        case 0x3c69e0u: goto label_3c69e0;
        case 0x3c69e4u: goto label_3c69e4;
        case 0x3c69e8u: goto label_3c69e8;
        case 0x3c69ecu: goto label_3c69ec;
        case 0x3c69f0u: goto label_3c69f0;
        case 0x3c69f4u: goto label_3c69f4;
        case 0x3c69f8u: goto label_3c69f8;
        case 0x3c69fcu: goto label_3c69fc;
        case 0x3c6a00u: goto label_3c6a00;
        case 0x3c6a04u: goto label_3c6a04;
        case 0x3c6a08u: goto label_3c6a08;
        case 0x3c6a0cu: goto label_3c6a0c;
        case 0x3c6a10u: goto label_3c6a10;
        case 0x3c6a14u: goto label_3c6a14;
        case 0x3c6a18u: goto label_3c6a18;
        case 0x3c6a1cu: goto label_3c6a1c;
        case 0x3c6a20u: goto label_3c6a20;
        case 0x3c6a24u: goto label_3c6a24;
        case 0x3c6a28u: goto label_3c6a28;
        case 0x3c6a2cu: goto label_3c6a2c;
        case 0x3c6a30u: goto label_3c6a30;
        case 0x3c6a34u: goto label_3c6a34;
        case 0x3c6a38u: goto label_3c6a38;
        case 0x3c6a3cu: goto label_3c6a3c;
        case 0x3c6a40u: goto label_3c6a40;
        case 0x3c6a44u: goto label_3c6a44;
        case 0x3c6a48u: goto label_3c6a48;
        case 0x3c6a4cu: goto label_3c6a4c;
        case 0x3c6a50u: goto label_3c6a50;
        case 0x3c6a54u: goto label_3c6a54;
        case 0x3c6a58u: goto label_3c6a58;
        case 0x3c6a5cu: goto label_3c6a5c;
        case 0x3c6a60u: goto label_3c6a60;
        case 0x3c6a64u: goto label_3c6a64;
        case 0x3c6a68u: goto label_3c6a68;
        case 0x3c6a6cu: goto label_3c6a6c;
        case 0x3c6a70u: goto label_3c6a70;
        case 0x3c6a74u: goto label_3c6a74;
        case 0x3c6a78u: goto label_3c6a78;
        case 0x3c6a7cu: goto label_3c6a7c;
        case 0x3c6a80u: goto label_3c6a80;
        case 0x3c6a84u: goto label_3c6a84;
        case 0x3c6a88u: goto label_3c6a88;
        case 0x3c6a8cu: goto label_3c6a8c;
        case 0x3c6a90u: goto label_3c6a90;
        case 0x3c6a94u: goto label_3c6a94;
        case 0x3c6a98u: goto label_3c6a98;
        case 0x3c6a9cu: goto label_3c6a9c;
        case 0x3c6aa0u: goto label_3c6aa0;
        case 0x3c6aa4u: goto label_3c6aa4;
        case 0x3c6aa8u: goto label_3c6aa8;
        case 0x3c6aacu: goto label_3c6aac;
        case 0x3c6ab0u: goto label_3c6ab0;
        case 0x3c6ab4u: goto label_3c6ab4;
        case 0x3c6ab8u: goto label_3c6ab8;
        case 0x3c6abcu: goto label_3c6abc;
        case 0x3c6ac0u: goto label_3c6ac0;
        case 0x3c6ac4u: goto label_3c6ac4;
        case 0x3c6ac8u: goto label_3c6ac8;
        case 0x3c6accu: goto label_3c6acc;
        case 0x3c6ad0u: goto label_3c6ad0;
        case 0x3c6ad4u: goto label_3c6ad4;
        case 0x3c6ad8u: goto label_3c6ad8;
        case 0x3c6adcu: goto label_3c6adc;
        default: break;
    }

    ctx->pc = 0x3c61d8u;

label_3c61d8:
    // 0x3c61d8: 0x27bdfa80  addiu       $sp, $sp, -0x580
    ctx->pc = 0x3c61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965888));
label_3c61dc:
    // 0x3c61dc: 0x7fbe04c0  sq          $fp, 0x4C0($sp)
    ctx->pc = 0x3c61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 30));
label_3c61e0:
    // 0x3c61e0: 0x7fb00540  sq          $s0, 0x540($sp)
    ctx->pc = 0x3c61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 16));
label_3c61e4:
    // 0x3c61e4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3c61e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c61e8:
    // 0x3c61e8: 0x7fb10530  sq          $s1, 0x530($sp)
    ctx->pc = 0x3c61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 17));
label_3c61ec:
    // 0x3c61ec: 0x7fb20520  sq          $s2, 0x520($sp)
    ctx->pc = 0x3c61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 18));
label_3c61f0:
    // 0x3c61f0: 0x7fb30510  sq          $s3, 0x510($sp)
    ctx->pc = 0x3c61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 19));
label_3c61f4:
    // 0x3c61f4: 0x7fb40500  sq          $s4, 0x500($sp)
    ctx->pc = 0x3c61f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 20));
label_3c61f8:
    // 0x3c61f8: 0x7fb504f0  sq          $s5, 0x4F0($sp)
    ctx->pc = 0x3c61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 21));
label_3c61fc:
    // 0x3c61fc: 0x7fb604e0  sq          $s6, 0x4E0($sp)
    ctx->pc = 0x3c61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 22));
label_3c6200:
    // 0x3c6200: 0x7fb704d0  sq          $s7, 0x4D0($sp)
    ctx->pc = 0x3c6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 23));
label_3c6204:
    // 0x3c6204: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x3c6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_3c6208:
    // 0x3c6208: 0xe7b80570  swc1        $f24, 0x570($sp)
    ctx->pc = 0x3c6208u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_3c620c:
    // 0x3c620c: 0xe7b70568  swc1        $f23, 0x568($sp)
    ctx->pc = 0x3c620cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_3c6210:
    // 0x3c6210: 0xe7b60560  swc1        $f22, 0x560($sp)
    ctx->pc = 0x3c6210u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_3c6214:
    // 0x3c6214: 0xe7b50558  swc1        $f21, 0x558($sp)
    ctx->pc = 0x3c6214u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_3c6218:
    // 0x3c6218: 0xe7b40550  swc1        $f20, 0x550($sp)
    ctx->pc = 0x3c6218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_3c621c:
    // 0x3c621c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3c621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3c6220:
    // 0x3c6220: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c6220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c6224:
    // 0x3c6224: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c6224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c6228:
    // 0x3c6228: 0x40f809  jalr        $v0
label_3c622c:
    if (ctx->pc == 0x3C622Cu) {
        ctx->pc = 0x3C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6228u;
        // 0x3c622c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6230u;
        goto label_3c6230;
    }
    ctx->pc = 0x3C6228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6230u);
        ctx->pc = 0x3C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6228u;
        // 0x3c622c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6228u, 0x3C6230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6230u;
label_3c6230:
    // 0x3c6230: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x3c6230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
label_3c6234:
    // 0x3c6234: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c6234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c6238:
    // 0x3c6238: 0x8fc300c8  lw          $v1, 0xC8($fp)
    ctx->pc = 0x3c6238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 200)));
label_3c623c:
    // 0x3c623c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3c623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3c6240:
    // 0x3c6240: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c6240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c6244:
    // 0x3c6244: 0x104001a1  beqz        $v0, . + 4 + (0x1A1 << 2)
label_3c6248:
    if (ctx->pc == 0x3C6248u) {
        ctx->pc = 0x3C6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6244u;
        // 0x3c6248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C624Cu;
        goto label_3c624c;
    }
    ctx->pc = 0x3C6244u;
    {
        const bool branch_taken_0x3c6244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6244u;
        // 0x3c6248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6244) {
            ctx->pc = 0x3C68CCu;
            goto label_3c68cc;
        }
    }
    ctx->pc = 0x3C624Cu;
label_3c624c:
    // 0x3c624c: 0x7bc20010  lq          $v0, 0x10($fp)
    ctx->pc = 0x3c624cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 16)));
label_3c6250:
    // 0x3c6250: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3c6250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3c6254:
    // 0x3c6254: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6258:
    // 0x3c6258: 0xc0e947e  jal         func_3A51F8
label_3c625c:
    if (ctx->pc == 0x3C625Cu) {
        ctx->pc = 0x3C625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6258u;
        // 0x3c625c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6260u;
        goto label_3c6260;
    }
    ctx->pc = 0x3C6258u;
    SET_GPR_U32(ctx, 31, 0x3C6260u);
    ctx->pc = 0x3C625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6258u;
    // 0x3c625c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3C6258u, 0x3C6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6260u;
label_3c6260:
    // 0x3c6260: 0x1040020e  beqz        $v0, . + 4 + (0x20E << 2)
label_3c6264:
    if (ctx->pc == 0x3C6264u) {
        ctx->pc = 0x3C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6260u;
        // 0x3c6264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6268u;
        goto label_3c6268;
    }
    ctx->pc = 0x3C6260u;
    {
        const bool branch_taken_0x3c6260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6260u;
        // 0x3c6264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6260) {
            ctx->pc = 0x3C6A9Cu;
            goto label_3c6a9c;
        }
    }
    ctx->pc = 0x3C6268u;
label_3c6268:
    // 0x3c6268: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3c6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3c626c:
    // 0x3c626c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c626cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c6270:
    // 0x3c6270: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c6274:
    // 0x3c6274: 0x40f809  jalr        $v0
label_3c6278:
    if (ctx->pc == 0x3C6278u) {
        ctx->pc = 0x3C6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6274u;
        // 0x3c6278: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C627Cu;
        goto label_3c627c;
    }
    ctx->pc = 0x3C6274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C627Cu);
        ctx->pc = 0x3C6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6274u;
        // 0x3c6278: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6274u, 0x3C627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C627Cu;
label_3c627c:
    // 0x3c627c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3c627cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3c6280:
    // 0x3c6280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c6284:
    // 0x3c6284: 0x104001c8  beqz        $v0, . + 4 + (0x1C8 << 2)
label_3c6288:
    if (ctx->pc == 0x3C6288u) {
        ctx->pc = 0x3C6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6284u;
        // 0x3c6288: 0x8fa704a0  lw          $a3, 0x4A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C628Cu;
        goto label_3c628c;
    }
    ctx->pc = 0x3C6284u;
    {
        const bool branch_taken_0x3c6284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6284u;
        // 0x3c6288: 0x8fa704a0  lw          $a3, 0x4A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6284) {
            ctx->pc = 0x3C69A8u;
            goto label_3c69a8;
        }
    }
    ctx->pc = 0x3C628Cu;
label_3c628c:
    // 0x3c628c: 0x8fc40054  lw          $a0, 0x54($fp)
    ctx->pc = 0x3c628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_3c6290:
    // 0x3c6290: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3c6290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3c6294:
    // 0x3c6294: 0x7bc500b0  lq          $a1, 0xB0($fp)
    ctx->pc = 0x3c6294u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 30), 176)));
label_3c6298:
    // 0x3c6298: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c6298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c629c:
    // 0x3c629c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3c629cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3c62a0:
    // 0x3c62a0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3c62a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c62a4:
    // 0x3c62a4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3c62a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c62a8:
    // 0x3c62a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3c62a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c62ac:
    // 0x3c62ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3c62acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3c62b0:
    // 0x3c62b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3c62b0u;
    // VWAITQ (Q already resolved in this runtime)
label_3c62b4:
    // 0x3c62b4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3c62b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c62b8:
    // 0x3c62b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3c62b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c62bc:
    // 0x3c62bc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3c62bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3c62c0:
    // 0x3c62c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c62c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c62c4:
    // 0x3c62c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c62c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c62c8:
    // 0x3c62c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c62c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c62cc:
    // 0x3c62cc: 0xafc40054  sw          $a0, 0x54($fp)
    ctx->pc = 0x3c62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 4));
label_3c62d0:
    // 0x3c62d0: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3c62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_3c62d4:
    // 0x3c62d4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c62d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c62d8:
    // 0x3c62d8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c62dc:
    // 0x3c62dc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c62e0:
    // 0x3c62e0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x3c62e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3c62e4:
    // 0x3c62e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3c62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3c62e8:
    // 0x3c62e8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c62ec:
    // 0x3c62ec: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c62f0:
    // 0x3c62f0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c62f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c62f4:
    // 0x3c62f4: 0x60f809  jalr        $v1
label_3c62f8:
    if (ctx->pc == 0x3C62F8u) {
        ctx->pc = 0x3C62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62F4u;
        // 0x3c62f8: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C62FCu;
        goto label_3c62fc;
    }
    ctx->pc = 0x3C62F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C62FCu);
        ctx->pc = 0x3C62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62F4u;
        // 0x3c62f8: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C62F4u, 0x3C62FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C62FCu;
label_3c62fc:
    // 0x3c62fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3c62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3c6300:
    // 0x3c6300: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c6300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c6304:
    // 0x3c6304: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c6304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c6308:
    // 0x3c6308: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3c6308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3c630c:
    // 0x3c630c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3c630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c6310:
    // 0x3c6310: 0x60f809  jalr        $v1
label_3c6314:
    if (ctx->pc == 0x3C6314u) {
        ctx->pc = 0x3C6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6310u;
        // 0x3c6314: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6318u;
        goto label_3c6318;
    }
    ctx->pc = 0x3C6310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C6318u);
        ctx->pc = 0x3C6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6310u;
        // 0x3c6314: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6310u, 0x3C6318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6318u;
label_3c6318:
    // 0x3c6318: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3c6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c631c:
    // 0x3c631c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3c631cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3c6320:
    // 0x3c6320: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c6320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c6324:
    // 0x3c6324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c6324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6328:
    // 0x3c6328: 0x0  nop
    ctx->pc = 0x3c6328u;
    // NOP
label_3c632c:
    // 0x3c632c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c632cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c6330:
    // 0x3c6330: 0x0  nop
    ctx->pc = 0x3c6330u;
    // NOP
label_3c6334:
    // 0x3c6334: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3c6338:
    if (ctx->pc == 0x3C6338u) {
        ctx->pc = 0x3C6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6334u;
        // 0x3c6338: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C633Cu;
        goto label_3c633c;
    }
    ctx->pc = 0x3C6334u;
    {
        const bool branch_taken_0x3c6334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6334u;
        // 0x3c6338: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6334) {
            ctx->pc = 0x3C634Cu;
            goto label_3c634c;
        }
    }
    ctx->pc = 0x3C633Cu;
label_3c633c:
    // 0x3c633c: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x3c633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_3c6340:
    // 0x3c6340: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c6340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c6344:
    // 0x3c6344: 0x1000018c  b           . + 4 + (0x18C << 2)
label_3c6348:
    if (ctx->pc == 0x3C6348u) {
        ctx->pc = 0x3C6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6344u;
        // 0x3c6348: 0xafc20054  sw          $v0, 0x54($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C634Cu;
        goto label_3c634c;
    }
    ctx->pc = 0x3C6344u;
    {
        const bool branch_taken_0x3c6344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6344u;
        // 0x3c6348: 0xafc20054  sw          $v0, 0x54($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6344) {
            ctx->pc = 0x3C6978u;
            goto label_3c6978;
        }
    }
    ctx->pc = 0x3C634Cu;
label_3c634c:
    // 0x3c634c: 0x7bc20010  lq          $v0, 0x10($fp)
    ctx->pc = 0x3c634cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 16)));
label_3c6350:
    // 0x3c6350: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c6350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c6354:
    // 0x3c6354: 0x24a54210  addiu       $a1, $a1, 0x4210
    ctx->pc = 0x3c6354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16912));
label_3c6358:
    // 0x3c6358: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3c6358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c635c:
    // 0x3c635c: 0xc0e9666  jal         func_3A5998
label_3c6360:
    if (ctx->pc == 0x3C6360u) {
        ctx->pc = 0x3C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C635Cu;
        // 0x3c6360: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6364u;
        goto label_3c6364;
    }
    ctx->pc = 0x3C635Cu;
    SET_GPR_U32(ctx, 31, 0x3C6364u);
    ctx->pc = 0x3C6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C635Cu;
    // 0x3c6360: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3C635Cu, 0x3C6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6364u;
label_3c6364:
    // 0x3c6364: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3c6368:
    if (ctx->pc == 0x3C6368u) {
        ctx->pc = 0x3C6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6364u;
        // 0x3c6368: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C636Cu;
        goto label_3c636c;
    }
    ctx->pc = 0x3C6364u;
    {
        const bool branch_taken_0x3c6364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6364u;
        // 0x3c6368: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6364) {
            ctx->pc = 0x3C6424u;
            goto label_3c6424;
        }
    }
    ctx->pc = 0x3C636Cu;
label_3c636c:
    // 0x3c636c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c6370:
    // 0x3c6370: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c6370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c6374:
    // 0x3c6374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6378:
    // 0x3c6378: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3c6378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c637c:
    // 0x3c637c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c637cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c6380:
    // 0x3c6380: 0xc0cd518  jal         func_335460
label_3c6384:
    if (ctx->pc == 0x3C6384u) {
        ctx->pc = 0x3C6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6380u;
        // 0x3c6384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6388u;
        goto label_3c6388;
    }
    ctx->pc = 0x3C6380u;
    SET_GPR_U32(ctx, 31, 0x3C6388u);
    ctx->pc = 0x3C6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6380u;
    // 0x3c6384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6380u, 0x3C6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6388u;
label_3c6388:
    // 0x3c6388: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c6388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c638c:
    // 0x3c638c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c638cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c6390:
    // 0x3c6390: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3c6390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3c6394:
    // 0x3c6394: 0xc1073cc  jal         func_41CF30
label_3c6398:
    if (ctx->pc == 0x3C6398u) {
        ctx->pc = 0x3C6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6394u;
        // 0x3c6398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C639Cu;
        goto label_3c639c;
    }
    ctx->pc = 0x3C6394u;
    SET_GPR_U32(ctx, 31, 0x3C639Cu);
    ctx->pc = 0x3C6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6394u;
    // 0x3c6398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C6394u, 0x3C639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C639Cu;
label_3c639c:
    // 0x3c639c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3c639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3c63a0:
    // 0x3c63a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c63a4:
    if (ctx->pc == 0x3C63A4u) {
        ctx->pc = 0x3C63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63A0u;
        // 0x3c63a4: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C63A8u;
        goto label_3c63a8;
    }
    ctx->pc = 0x3C63A0u;
    {
        const bool branch_taken_0x3c63a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63A0u;
        // 0x3c63a4: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63a0) {
            ctx->pc = 0x3C63C8u;
            goto label_3c63c8;
        }
    }
    ctx->pc = 0x3C63A8u;
label_3c63a8:
    // 0x3c63a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3c63a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3c63ac:
    // 0x3c63ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c63acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c63b0:
    // 0x3c63b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c63b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c63b4:
    // 0x3c63b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c63b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c63b8:
    // 0x3c63b8: 0xc0cd518  jal         func_335460
label_3c63bc:
    if (ctx->pc == 0x3C63BCu) {
        ctx->pc = 0x3C63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63B8u;
        // 0x3c63bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C63C0u;
        goto label_3c63c0;
    }
    ctx->pc = 0x3C63B8u;
    SET_GPR_U32(ctx, 31, 0x3C63C0u);
    ctx->pc = 0x3C63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63B8u;
    // 0x3c63bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C63B8u, 0x3C63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63C0u;
label_3c63c0:
    // 0x3c63c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c63c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c63c4:
    // 0x3c63c4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c63c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c63c8:
    // 0x3c63c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c63c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c63cc:
    // 0x3c63cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c63ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c63d0:
    // 0x3c63d0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3c63d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3c63d4:
    // 0x3c63d4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c63d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3c63d8:
    // 0x3c63d8: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x3c63d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c63dc:
    // 0x3c63dc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c63dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c63e0:
    // 0x3c63e0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3c63e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c63e4:
    // 0x3c63e4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3c63e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c63e8:
    // 0x3c63e8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c63e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c63ec:
    // 0x3c63ec: 0x26314228  addiu       $s1, $s1, 0x4228
    ctx->pc = 0x3c63ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16936));
label_3c63f0:
    // 0x3c63f0: 0x26104460  addiu       $s0, $s0, 0x4460
    ctx->pc = 0x3c63f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17504));
label_3c63f4:
    // 0x3c63f4: 0xc0cd4ee  jal         func_3353B8
label_3c63f8:
    if (ctx->pc == 0x3C63F8u) {
        ctx->pc = 0x3C63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C63F4u;
        // 0x3c63f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C63FCu;
        goto label_3c63fc;
    }
    ctx->pc = 0x3C63F4u;
    SET_GPR_U32(ctx, 31, 0x3C63FCu);
    ctx->pc = 0x3C63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C63F4u;
    // 0x3c63f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C63F4u, 0x3C63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C63FCu;
label_3c63fc:
    // 0x3c63fc: 0xe7b40460  swc1        $f20, 0x460($sp)
    ctx->pc = 0x3c63fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c6400:
    // 0x3c6400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c6404:
    // 0x3c6404: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c6404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c6408:
    // 0x3c6408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c6408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c640c:
    // 0x3c640c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c6410:
    // 0x3c6410: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c6410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6414:
    // 0x3c6414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c6418:
    // 0x3c6418: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3c6418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c641c:
    // 0x3c641c: 0x10000125  b           . + 4 + (0x125 << 2)
label_3c6420:
    if (ctx->pc == 0x3C6420u) {
        ctx->pc = 0x3C6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C641Cu;
        // 0x3c6420: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6424u;
        goto label_3c6424;
    }
    ctx->pc = 0x3C641Cu;
    {
        const bool branch_taken_0x3c641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C641Cu;
        // 0x3c6420: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c641c) {
            ctx->pc = 0x3C68B4u;
            goto label_3c68b4;
        }
    }
    ctx->pc = 0x3C6424u;
label_3c6424:
    // 0x3c6424: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c6424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c6428:
    // 0x3c6428: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3c6428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c642c:
    // 0x3c642c: 0xc0e9666  jal         func_3A5998
label_3c6430:
    if (ctx->pc == 0x3C6430u) {
        ctx->pc = 0x3C6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C642Cu;
        // 0x3c6430: 0x24a54238  addiu       $a1, $a1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6434u;
        goto label_3c6434;
    }
    ctx->pc = 0x3C642Cu;
    SET_GPR_U32(ctx, 31, 0x3C6434u);
    ctx->pc = 0x3C6430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C642Cu;
    // 0x3c6430: 0x24a54238  addiu       $a1, $a1, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3C642Cu, 0x3C6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6434u;
label_3c6434:
    // 0x3c6434: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3c6438:
    if (ctx->pc == 0x3C6438u) {
        ctx->pc = 0x3C6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6434u;
        // 0x3c6438: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C643Cu;
        goto label_3c643c;
    }
    ctx->pc = 0x3C6434u;
    {
        const bool branch_taken_0x3c6434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6434u;
        // 0x3c6438: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6434) {
            ctx->pc = 0x3C64ACu;
            goto label_3c64ac;
        }
    }
    ctx->pc = 0x3C643Cu;
label_3c643c:
    // 0x3c643c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3c643cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6440:
    // 0x3c6440: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c6440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c6444:
    // 0x3c6444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c6444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c6448:
    // 0x3c6448: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c6448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c644c:
    // 0x3c644c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c644cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6450:
    // 0x3c6450: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c6450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c6454:
    // 0x3c6454: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c6454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c6458:
    // 0x3c6458: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c6458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c645c:
    // 0x3c645c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c645cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6460:
    // 0x3c6460: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3c6460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c6464:
    // 0x3c6464: 0x7fa50440  sq          $a1, 0x440($sp)
    ctx->pc = 0x3c6464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 5));
label_3c6468:
    // 0x3c6468: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3c6468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c646c:
    // 0x3c646c: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3c646cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c6470:
    // 0x3c6470: 0x27b30450  addiu       $s3, $sp, 0x450
    ctx->pc = 0x3c6470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c6474:
    // 0x3c6474: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3c6474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3c6478:
    // 0x3c6478: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x3c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_3c647c:
    // 0x3c647c: 0x26104228  addiu       $s0, $s0, 0x4228
    ctx->pc = 0x3c647cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16936));
label_3c6480:
    // 0x3c6480: 0xc0cd518  jal         func_335460
label_3c6484:
    if (ctx->pc == 0x3C6484u) {
        ctx->pc = 0x3C6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6480u;
        // 0x3c6484: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6488u;
        goto label_3c6488;
    }
    ctx->pc = 0x3C6480u;
    SET_GPR_U32(ctx, 31, 0x3C6488u);
    ctx->pc = 0x3C6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6480u;
    // 0x3c6484: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6480u, 0x3C6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6488u;
label_3c6488:
    // 0x3c6488: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c6488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c648c:
    // 0x3c648c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c648cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6490:
    // 0x3c6490: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c6490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6494:
    // 0x3c6494: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c6494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6498:
    // 0x3c6498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c6498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c649c:
    // 0x3c649c: 0xc0e9fd0  jal         func_3A7F40
label_3c64a0:
    if (ctx->pc == 0x3C64A0u) {
        ctx->pc = 0x3C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C649Cu;
        // 0x3c64a0: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C64A4u;
        goto label_3c64a4;
    }
    ctx->pc = 0x3C649Cu;
    SET_GPR_U32(ctx, 31, 0x3C64A4u);
    ctx->pc = 0x3C64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C649Cu;
    // 0x3c64a0: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C649Cu, 0x3C64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64A4u;
label_3c64a4:
    // 0x3c64a4: 0x10000107  b           . + 4 + (0x107 << 2)
label_3c64a8:
    if (ctx->pc == 0x3C64A8u) {
        ctx->pc = 0x3C64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64A4u;
        // 0x3c64a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C64ACu;
        goto label_3c64ac;
    }
    ctx->pc = 0x3C64A4u;
    {
        const bool branch_taken_0x3c64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64A4u;
        // 0x3c64a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64a4) {
            ctx->pc = 0x3C68C4u;
            goto label_3c68c4;
        }
    }
    ctx->pc = 0x3C64ACu;
label_3c64ac:
    // 0x3c64ac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c64acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c64b0:
    // 0x3c64b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3c64b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c64b4:
    // 0x3c64b4: 0xc0e9666  jal         func_3A5998
label_3c64b8:
    if (ctx->pc == 0x3C64B8u) {
        ctx->pc = 0x3C64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64B4u;
        // 0x3c64b8: 0x24a54250  addiu       $a1, $a1, 0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C64BCu;
        goto label_3c64bc;
    }
    ctx->pc = 0x3C64B4u;
    SET_GPR_U32(ctx, 31, 0x3C64BCu);
    ctx->pc = 0x3C64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64B4u;
    // 0x3c64b8: 0x24a54250  addiu       $a1, $a1, 0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3C64B4u, 0x3C64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64BCu;
label_3c64bc:
    // 0x3c64bc: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_3c64c0:
    if (ctx->pc == 0x3C64C0u) {
        ctx->pc = 0x3C64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64BCu;
        // 0x3c64c0: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C64C4u;
        goto label_3c64c4;
    }
    ctx->pc = 0x3C64BCu;
    {
        const bool branch_taken_0x3c64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64BCu;
        // 0x3c64c0: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64bc) {
            ctx->pc = 0x3C683Cu;
            goto label_3c683c;
        }
    }
    ctx->pc = 0x3C64C4u;
label_3c64c4:
    // 0x3c64c4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3c64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3c64c8:
    // 0x3c64c8: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3c64c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3c64cc:
    // 0x3c64cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3c64ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3c64d0:
    // 0x3c64d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c64d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c64d4:
    // 0x3c64d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3c64d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3c64d8:
    // 0x3c64d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c64d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c64dc:
    // 0x3c64dc: 0xc0cd4ee  jal         func_3353B8
label_3c64e0:
    if (ctx->pc == 0x3C64E0u) {
        ctx->pc = 0x3C64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64DCu;
        // 0x3c64e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C64E4u;
        goto label_3c64e4;
    }
    ctx->pc = 0x3C64DCu;
    SET_GPR_U32(ctx, 31, 0x3C64E4u);
    ctx->pc = 0x3C64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64DCu;
    // 0x3c64e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C64DCu, 0x3C64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64E4u;
label_3c64e4:
    // 0x3c64e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c64e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c64e8:
    // 0x3c64e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c64e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c64ec:
    // 0x3c64ec: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3c64ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c64f0:
    // 0x3c64f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c64f4:
    // 0x3c64f4: 0xafa304ac  sw          $v1, 0x4AC($sp)
    ctx->pc = 0x3c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 3));
label_3c64f8:
    // 0x3c64f8: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3c64f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3c64fc:
    // 0x3c64fc: 0x7fa40430  sq          $a0, 0x430($sp)
    ctx->pc = 0x3c64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 4));
label_3c6500:
    // 0x3c6500: 0x3c03d3cc  lui         $v1, 0xD3CC
    ctx->pc = 0x3c6500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54220 << 16));
label_3c6504:
    // 0x3c6504: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3c6504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c6508:
    // 0x3c6508: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3c6508u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c650c:
    // 0x3c650c: 0x34635f80  ori         $v1, $v1, 0x5F80
    ctx->pc = 0x3c650cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24448);
label_3c6510:
    // 0x3c6510: 0xafa404a4  sw          $a0, 0x4A4($sp)
    ctx->pc = 0x3c6510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 4));
label_3c6514:
    // 0x3c6514: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x3c6514u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c6518:
    // 0x3c6518: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3c6518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3c651c:
    // 0x3c651c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3c651cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3c6520:
    // 0x3c6520: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c6520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c6524:
    // 0x3c6524: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3c6524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3c6528:
    // 0x3c6528: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c6528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c652c:
    // 0x3c652c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c652cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6530:
    // 0x3c6530: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3c6530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c6534:
    // 0x3c6534: 0x27b50440  addiu       $s5, $sp, 0x440
    ctx->pc = 0x3c6534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c6538:
    // 0x3c6538: 0x27b00430  addiu       $s0, $sp, 0x430
    ctx->pc = 0x3c6538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c653c:
    // 0x3c653c: 0xafb70450  sw          $s7, 0x450($sp)
    ctx->pc = 0x3c653cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 23));
label_3c6540:
    // 0x3c6540: 0x26944228  addiu       $s4, $s4, 0x4228
    ctx->pc = 0x3c6540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16936));
label_3c6544:
    // 0x3c6544: 0x7fa50440  sq          $a1, 0x440($sp)
    ctx->pc = 0x3c6544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 5));
label_3c6548:
    // 0x3c6548: 0xc0cd518  jal         func_335460
label_3c654c:
    if (ctx->pc == 0x3C654Cu) {
        ctx->pc = 0x3C654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6548u;
        // 0x3c654c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6550u;
        goto label_3c6550;
    }
    ctx->pc = 0x3C6548u;
    SET_GPR_U32(ctx, 31, 0x3C6550u);
    ctx->pc = 0x3C654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6548u;
    // 0x3c654c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6548u, 0x3C6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6550u;
label_3c6550:
    // 0x3c6550: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x3c6550u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
label_3c6554:
    // 0x3c6554: 0x8fa704a4  lw          $a3, 0x4A4($sp)
    ctx->pc = 0x3c6554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_3c6558:
    // 0x3c6558: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3c6558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c655c:
    // 0x3c655c: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c6560:
    // 0x3c6560: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3c6560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c6564:
    // 0x3c6564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c6564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6568:
    // 0x3c6568: 0xc0e9fd0  jal         func_3A7F40
label_3c656c:
    if (ctx->pc == 0x3C656Cu) {
        ctx->pc = 0x3C656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6568u;
        // 0x3c656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6570u;
        goto label_3c6570;
    }
    ctx->pc = 0x3C6568u;
    SET_GPR_U32(ctx, 31, 0x3C6570u);
    ctx->pc = 0x3C656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6568u;
    // 0x3c656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C6568u, 0x3C6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6570u;
label_3c6570:
    // 0x3c6570: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6574:
    // 0x3c6574: 0xc0f15bc  jal         func_3C56F0
label_3c6578:
    if (ctx->pc == 0x3C6578u) {
        ctx->pc = 0x3C6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6574u;
        // 0x3c6578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C657Cu;
        goto label_3c657c;
    }
    ctx->pc = 0x3C6574u;
    SET_GPR_U32(ctx, 31, 0x3C657Cu);
    ctx->pc = 0x3C6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6574u;
    // 0x3c6578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C6574u, 0x3C657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C657Cu;
label_3c657c:
    // 0x3c657c: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x3c657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
label_3c6580:
    // 0x3c6580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6584:
    // 0x3c6584: 0xc0cd4ee  jal         func_3353B8
label_3c6588:
    if (ctx->pc == 0x3C6588u) {
        ctx->pc = 0x3C6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6584u;
        // 0x3c6588: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C658Cu;
        goto label_3c658c;
    }
    ctx->pc = 0x3C6584u;
    SET_GPR_U32(ctx, 31, 0x3C658Cu);
    ctx->pc = 0x3C6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6584u;
    // 0x3c6588: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C6584u, 0x3C658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C658Cu;
label_3c658c:
    // 0x3c658c: 0x8fa504ac  lw          $a1, 0x4AC($sp)
    ctx->pc = 0x3c658cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_3c6590:
    // 0x3c6590: 0x3c038924  lui         $v1, 0x8924
    ctx->pc = 0x3c6590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35108 << 16));
label_3c6594:
    // 0x3c6594: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3c6594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3c6598:
    // 0x3c6598: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c6598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c659c:
    // 0x3c659c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c659cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c65a0:
    // 0x3c65a0: 0x34632480  ori         $v1, $v1, 0x2480
    ctx->pc = 0x3c65a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9344);
label_3c65a4:
    // 0x3c65a4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x3c65a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_3c65a8:
    // 0x3c65a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c65ac:
    // 0x3c65ac: 0xafa504ac  sw          $a1, 0x4AC($sp)
    ctx->pc = 0x3c65acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 5));
label_3c65b0:
    // 0x3c65b0: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x3c65b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c65b4:
    // 0x3c65b4: 0xc136b24  jal         func_4DAC90
label_3c65b8:
    if (ctx->pc == 0x3C65B8u) {
        ctx->pc = 0x3C65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65B4u;
        // 0x3c65b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C65BCu;
        goto label_3c65bc;
    }
    ctx->pc = 0x3C65B4u;
    SET_GPR_U32(ctx, 31, 0x3C65BCu);
    ctx->pc = 0x3C65B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65B4u;
    // 0x3c65b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C65B4u, 0x3C65BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65BCu;
label_3c65bc:
    // 0x3c65bc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c65bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c65c0:
    // 0x3c65c0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3c65c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c65c4:
    // 0x3c65c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c65c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c65c8:
    // 0x3c65c8: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3c65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c65cc:
    // 0x3c65cc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c65ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c65d0:
    // 0x3c65d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c65d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c65d4:
    // 0x3c65d4: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3c65d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3c65d8:
    // 0x3c65d8: 0xc136b18  jal         func_4DAC60
label_3c65dc:
    if (ctx->pc == 0x3C65DCu) {
        ctx->pc = 0x3C65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65D8u;
        // 0x3c65dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C65E0u;
        goto label_3c65e0;
    }
    ctx->pc = 0x3C65D8u;
    SET_GPR_U32(ctx, 31, 0x3C65E0u);
    ctx->pc = 0x3C65DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65D8u;
    // 0x3c65dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C65D8u, 0x3C65E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65E0u;
label_3c65e0:
    // 0x3c65e0: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c65e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c65e4:
    // 0x3c65e4: 0x27b20470  addiu       $s2, $sp, 0x470
    ctx->pc = 0x3c65e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c65e8:
    // 0x3c65e8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3c65e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3c65ec:
    // 0x3c65ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c65ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c65f0:
    // 0x3c65f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c65f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c65f4:
    // 0x3c65f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c65f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c65f8:
    // 0x3c65f8: 0xafb70470  sw          $s7, 0x470($sp)
    ctx->pc = 0x3c65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 23));
label_3c65fc:
    // 0x3c65fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c65fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6600:
    // 0x3c6600: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c6600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c6604:
    // 0x3c6604: 0xc0cd518  jal         func_335460
label_3c6608:
    if (ctx->pc == 0x3C6608u) {
        ctx->pc = 0x3C6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6604u;
        // 0x3c6608: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C660Cu;
        goto label_3c660c;
    }
    ctx->pc = 0x3C6604u;
    SET_GPR_U32(ctx, 31, 0x3C660Cu);
    ctx->pc = 0x3C6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6604u;
    // 0x3c6608: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6604u, 0x3C660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C660Cu;
label_3c660c:
    // 0x3c660c: 0x27b60480  addiu       $s6, $sp, 0x480
    ctx->pc = 0x3c660cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3c6610:
    // 0x3c6610: 0x8fa604a4  lw          $a2, 0x4A4($sp)
    ctx->pc = 0x3c6610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_3c6614:
    // 0x3c6614: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3c6614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3c6618:
    // 0x3c6618: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c6618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c661c:
    // 0x3c661c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3c661cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c6620:
    // 0x3c6620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6624:
    // 0x3c6624: 0xc0e9fd0  jal         func_3A7F40
label_3c6628:
    if (ctx->pc == 0x3C6628u) {
        ctx->pc = 0x3C6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6624u;
        // 0x3c6628: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C662Cu;
        goto label_3c662c;
    }
    ctx->pc = 0x3C6624u;
    SET_GPR_U32(ctx, 31, 0x3C662Cu);
    ctx->pc = 0x3C6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6624u;
    // 0x3c6628: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C6624u, 0x3C662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C662Cu;
label_3c662c:
    // 0x3c662c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c6630:
    // 0x3c6630: 0xc0f15bc  jal         func_3C56F0
label_3c6634:
    if (ctx->pc == 0x3C6634u) {
        ctx->pc = 0x3C6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6630u;
        // 0x3c6634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6638u;
        goto label_3c6638;
    }
    ctx->pc = 0x3C6630u;
    SET_GPR_U32(ctx, 31, 0x3C6638u);
    ctx->pc = 0x3C6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6630u;
    // 0x3c6634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C6630u, 0x3C6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6638u;
label_3c6638:
    // 0x3c6638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c663c:
    // 0x3c663c: 0xc0cd4ee  jal         func_3353B8
label_3c6640:
    if (ctx->pc == 0x3C6640u) {
        ctx->pc = 0x3C6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C663Cu;
        // 0x3c6640: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6644u;
        goto label_3c6644;
    }
    ctx->pc = 0x3C663Cu;
    SET_GPR_U32(ctx, 31, 0x3C6644u);
    ctx->pc = 0x3C6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C663Cu;
    // 0x3c6640: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C663Cu, 0x3C6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6644u;
label_3c6644:
    // 0x3c6644: 0x3c031c4c  lui         $v1, 0x1C4C
    ctx->pc = 0x3c6644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7244 << 16));
label_3c6648:
    // 0x3c6648: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3c6648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3c664c:
    // 0x3c664c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c664cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c6650:
    // 0x3c6650: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6654:
    // 0x3c6654: 0x34632880  ori         $v1, $v1, 0x2880
    ctx->pc = 0x3c6654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10368);
label_3c6658:
    // 0x3c6658: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c6658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c665c:
    // 0x3c665c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x3c665cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c6660:
    // 0x3c6660: 0xc136b24  jal         func_4DAC90
label_3c6664:
    if (ctx->pc == 0x3C6664u) {
        ctx->pc = 0x3C6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6660u;
        // 0x3c6664: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6668u;
        goto label_3c6668;
    }
    ctx->pc = 0x3C6660u;
    SET_GPR_U32(ctx, 31, 0x3C6668u);
    ctx->pc = 0x3C6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6660u;
    // 0x3c6664: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C6660u, 0x3C6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6668u;
label_3c6668:
    // 0x3c6668: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3c6668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c666c:
    // 0x3c666c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c6670:
    // 0x3c6670: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c6670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6674:
    // 0x3c6674: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c6674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6678:
    // 0x3c6678: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c667c:
    // 0x3c667c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6680:
    // 0x3c6680: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3c6680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3c6684:
    // 0x3c6684: 0xc136b18  jal         func_4DAC60
label_3c6688:
    if (ctx->pc == 0x3C6688u) {
        ctx->pc = 0x3C6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6684u;
        // 0x3c6688: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C668Cu;
        goto label_3c668c;
    }
    ctx->pc = 0x3C6684u;
    SET_GPR_U32(ctx, 31, 0x3C668Cu);
    ctx->pc = 0x3C6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6684u;
    // 0x3c6688: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C6684u, 0x3C668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C668Cu;
label_3c668c:
    // 0x3c668c: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3c668cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c6690:
    // 0x3c6690: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c6690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c6694:
    // 0x3c6694: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c6694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c6698:
    // 0x3c6698: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c6698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c669c:
    // 0x3c669c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c669cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c66a0:
    // 0x3c66a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c66a4:
    // 0x3c66a4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3c66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3c66a8:
    // 0x3c66a8: 0xafb70470  sw          $s7, 0x470($sp)
    ctx->pc = 0x3c66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 23));
label_3c66ac:
    // 0x3c66ac: 0xc0cd518  jal         func_335460
label_3c66b0:
    if (ctx->pc == 0x3C66B0u) {
        ctx->pc = 0x3C66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66ACu;
        // 0x3c66b0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C66B4u;
        goto label_3c66b4;
    }
    ctx->pc = 0x3C66ACu;
    SET_GPR_U32(ctx, 31, 0x3C66B4u);
    ctx->pc = 0x3C66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66ACu;
    // 0x3c66b0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C66ACu, 0x3C66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66B4u;
label_3c66b4:
    // 0x3c66b4: 0x8fa604a4  lw          $a2, 0x4A4($sp)
    ctx->pc = 0x3c66b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_3c66b8:
    // 0x3c66b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c66b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c66bc:
    // 0x3c66bc: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3c66bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3c66c0:
    // 0x3c66c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c66c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c66c4:
    // 0x3c66c4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3c66c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c66c8:
    // 0x3c66c8: 0xc0e9fd0  jal         func_3A7F40
label_3c66cc:
    if (ctx->pc == 0x3C66CCu) {
        ctx->pc = 0x3C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66C8u;
        // 0x3c66cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C66D0u;
        goto label_3c66d0;
    }
    ctx->pc = 0x3C66C8u;
    SET_GPR_U32(ctx, 31, 0x3C66D0u);
    ctx->pc = 0x3C66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66C8u;
    // 0x3c66cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C66C8u, 0x3C66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66D0u;
label_3c66d0:
    // 0x3c66d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c66d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c66d4:
    // 0x3c66d4: 0xc0f15bc  jal         func_3C56F0
label_3c66d8:
    if (ctx->pc == 0x3C66D8u) {
        ctx->pc = 0x3C66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66D4u;
        // 0x3c66d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C66DCu;
        goto label_3c66dc;
    }
    ctx->pc = 0x3C66D4u;
    SET_GPR_U32(ctx, 31, 0x3C66DCu);
    ctx->pc = 0x3C66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C66D4u;
    // 0x3c66d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C66D4u, 0x3C66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C66DCu;
label_3c66dc:
    // 0x3c66dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3c66dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3c66e0:
    // 0x3c66e0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3c66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3c66e4:
    // 0x3c66e4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3c66e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_3c66e8:
    // 0x3c66e8: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3c66e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c66ec:
    // 0x3c66ec: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3c66ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3c66f0:
    // 0x3c66f0: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3c66f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c66f4:
    // 0x3c66f4: 0x24464268  addiu       $a2, $v0, 0x4268
    ctx->pc = 0x3c66f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 17000));
label_3c66f8:
    // 0x3c66f8: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x3c66f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3c66fc:
    // 0x3c66fc: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x3c66fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3c6700:
    // 0x3c6700: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c6700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3c6704:
    // 0x3c6704: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c6704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3c6708:
    // 0x3c6708: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x3c6708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3c670c:
    // 0x3c670c: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x3c670cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c6710:
    // 0x3c6710: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x3c6710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c6714:
    // 0x3c6714: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x3c6714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c6718:
    // 0x3c6718: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x3c6718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c671c:
    // 0x3c671c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x3c671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_3c6720:
    // 0x3c6720: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3c6720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c6724:
    // 0x3c6724: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c6724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c6728:
    // 0x3c6728: 0x8fa704a8  lw          $a3, 0x4A8($sp)
    ctx->pc = 0x3c6728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_3c672c:
    // 0x3c672c: 0x0  nop
    ctx->pc = 0x3c672cu;
    // NOP
label_3c6730:
    // 0x3c6730: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6734:
    // 0x3c6734: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c6738:
    // 0x3c6738: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c6738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c673c:
    // 0x3c673c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c673cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c6740:
    // 0x3c6740: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c6740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3c6744:
    // 0x3c6744: 0xc0cd518  jal         func_335460
label_3c6748:
    if (ctx->pc == 0x3C6748u) {
        ctx->pc = 0x3C6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6744u;
        // 0x3c6748: 0xafa704a8  sw          $a3, 0x4A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C674Cu;
        goto label_3c674c;
    }
    ctx->pc = 0x3C6744u;
    SET_GPR_U32(ctx, 31, 0x3C674Cu);
    ctx->pc = 0x3C6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6744u;
    // 0x3c6748: 0xafa704a8  sw          $a3, 0x4A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6744u, 0x3C674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C674Cu;
label_3c674c:
    // 0x3c674c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c674cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c6750:
    // 0x3c6750: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6754:
    // 0x3c6754: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c6758:
    // 0x3c6758: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3c6758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3c675c:
    // 0x3c675c: 0xc0cd518  jal         func_335460
label_3c6760:
    if (ctx->pc == 0x3C6760u) {
        ctx->pc = 0x3C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C675Cu;
        // 0x3c6760: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6764u;
        goto label_3c6764;
    }
    ctx->pc = 0x3C675Cu;
    SET_GPR_U32(ctx, 31, 0x3C6764u);
    ctx->pc = 0x3C6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C675Cu;
    // 0x3c6760: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C675Cu, 0x3C6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6764u;
label_3c6764:
    // 0x3c6764: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3c6764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3c6768:
    // 0x3c6768: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c676c:
    // 0x3c676c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3c676cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3c6770:
    // 0x3c6770: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c6770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c6774:
    // 0x3c6774: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6778:
    // 0x3c6778: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c6778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c677c:
    // 0x3c677c: 0xc0cd518  jal         func_335460
label_3c6780:
    if (ctx->pc == 0x3C6780u) {
        ctx->pc = 0x3C6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C677Cu;
        // 0x3c6780: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6784u;
        goto label_3c6784;
    }
    ctx->pc = 0x3C677Cu;
    SET_GPR_U32(ctx, 31, 0x3C6784u);
    ctx->pc = 0x3C6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C677Cu;
    // 0x3c6780: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C677Cu, 0x3C6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6784u;
label_3c6784:
    // 0x3c6784: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3c6784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3c6788:
    // 0x3c6788: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c678c:
    // 0x3c678c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c6790:
    // 0x3c6790: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x3c6790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c6794:
    // 0x3c6794: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3c6794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c6798:
    // 0x3c6798: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3c6798u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3c679c:
    // 0x3c679c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c67a0:
    // 0x3c67a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c67a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c67a4:
    // 0x3c67a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c67a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c67a8:
    // 0x3c67a8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3c67a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c67ac:
    // 0x3c67ac: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3c67acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3c67b0:
    // 0x3c67b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c67b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c67b4:
    // 0x3c67b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c67b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c67b8:
    // 0x3c67b8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c67b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c67bc:
    // 0x3c67bc: 0xc0cd518  jal         func_335460
label_3c67c0:
    if (ctx->pc == 0x3C67C0u) {
        ctx->pc = 0x3C67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67BCu;
        // 0x3c67c0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C67C4u;
        goto label_3c67c4;
    }
    ctx->pc = 0x3C67BCu;
    SET_GPR_U32(ctx, 31, 0x3C67C4u);
    ctx->pc = 0x3C67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C67BCu;
    // 0x3c67c0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C67BCu, 0x3C67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C67C4u;
label_3c67c4:
    // 0x3c67c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c67c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c67c8:
    // 0x3c67c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c67cc:
    // 0x3c67cc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c67d0:
    // 0x3c67d0: 0xc0cd4ee  jal         func_3353B8
label_3c67d4:
    if (ctx->pc == 0x3C67D4u) {
        ctx->pc = 0x3C67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67D0u;
        // 0x3c67d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C67D8u;
        goto label_3c67d8;
    }
    ctx->pc = 0x3C67D0u;
    SET_GPR_U32(ctx, 31, 0x3C67D8u);
    ctx->pc = 0x3C67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C67D0u;
    // 0x3c67d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C67D0u, 0x3C67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C67D8u;
label_3c67d8:
    // 0x3c67d8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3c67d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c67dc:
    // 0x3c67dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c67e0:
    // 0x3c67e0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c67e4:
    // 0x3c67e4: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x3c67e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_3c67e8:
    // 0x3c67e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c67ec:
    // 0x3c67ec: 0xc0cd4ee  jal         func_3353B8
label_3c67f0:
    if (ctx->pc == 0x3C67F0u) {
        ctx->pc = 0x3C67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67ECu;
        // 0x3c67f0: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C67F4u;
        goto label_3c67f4;
    }
    ctx->pc = 0x3C67ECu;
    SET_GPR_U32(ctx, 31, 0x3C67F4u);
    ctx->pc = 0x3C67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C67ECu;
    // 0x3c67f0: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C67ECu, 0x3C67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C67F4u;
label_3c67f4:
    // 0x3c67f4: 0x8fa304ac  lw          $v1, 0x4AC($sp)
    ctx->pc = 0x3c67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_3c67f8:
    // 0x3c67f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c67f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c67fc:
    // 0x3c67fc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3c67fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c6800:
    // 0x3c6800: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c6800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c6804:
    // 0x3c6804: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c6804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c6808:
    // 0x3c6808: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c6808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c680c:
    // 0x3c680c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c680cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6810:
    // 0x3c6810: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x3c6810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c6814:
    // 0x3c6814: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c6814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6818:
    // 0x3c6818: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3c6818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3c681c:
    // 0x3c681c: 0xc0f1618  jal         func_3C5860
label_3c6820:
    if (ctx->pc == 0x3C6820u) {
        ctx->pc = 0x3C6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C681Cu;
        // 0x3c6820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6824u;
        goto label_3c6824;
    }
    ctx->pc = 0x3C681Cu;
    SET_GPR_U32(ctx, 31, 0x3C6824u);
    ctx->pc = 0x3C6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C681Cu;
    // 0x3c6820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3C681Cu, 0x3C6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6824u;
label_3c6824:
    // 0x3c6824: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x3c6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_3c6828:
    // 0x3c6828: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x3c6828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3c682c:
    // 0x3c682c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_3c6830:
    if (ctx->pc == 0x3C6830u) {
        ctx->pc = 0x3C6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C682Cu;
        // 0x3c6830: 0x8fa704a8  lw          $a3, 0x4A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6834u;
        goto label_3c6834;
    }
    ctx->pc = 0x3C682Cu;
    {
        const bool branch_taken_0x3c682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C682Cu;
        // 0x3c6830: 0x8fa704a8  lw          $a3, 0x4A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c682c) {
            ctx->pc = 0x3C6730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6730;
        }
    }
    ctx->pc = 0x3C6834u;
label_3c6834:
    // 0x3c6834: 0x10000051  b           . + 4 + (0x51 << 2)
label_3c6838:
    if (ctx->pc == 0x3C6838u) {
        ctx->pc = 0x3C6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6834u;
        // 0x3c6838: 0x3c025902  lui         $v0, 0x5902 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22786 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C683Cu;
        goto label_3c683c;
    }
    ctx->pc = 0x3C6834u;
    {
        const bool branch_taken_0x3c6834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6834u;
        // 0x3c6838: 0x3c025902  lui         $v0, 0x5902 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6834) {
            ctx->pc = 0x3C697Cu;
            goto label_3c697c;
        }
    }
    ctx->pc = 0x3C683Cu;
label_3c683c:
    // 0x3c683c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c683cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c6840:
    // 0x3c6840: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3c6840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c6844:
    // 0x3c6844: 0xc0e9666  jal         func_3A5998
label_3c6848:
    if (ctx->pc == 0x3C6848u) {
        ctx->pc = 0x3C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6844u;
        // 0x3c6848: 0x24a54280  addiu       $a1, $a1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C684Cu;
        goto label_3c684c;
    }
    ctx->pc = 0x3C6844u;
    SET_GPR_U32(ctx, 31, 0x3C684Cu);
    ctx->pc = 0x3C6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6844u;
    // 0x3c6848: 0x24a54280  addiu       $a1, $a1, 0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3C6844u, 0x3C684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C684Cu;
label_3c684c:
    // 0x3c684c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3c6850:
    if (ctx->pc == 0x3C6850u) {
        ctx->pc = 0x3C6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C684Cu;
        // 0x3c6850: 0x3c02221a  lui         $v0, 0x221A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8730 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6854u;
        goto label_3c6854;
    }
    ctx->pc = 0x3C684Cu;
    {
        const bool branch_taken_0x3c684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C684Cu;
        // 0x3c6850: 0x3c02221a  lui         $v0, 0x221A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8730 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c684c) {
            ctx->pc = 0x3C68D4u;
            goto label_3c68d4;
        }
    }
    ctx->pc = 0x3C6854u;
label_3c6854:
    // 0x3c6854: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3c6854u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6858:
    // 0x3c6858: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c6858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c685c:
    // 0x3c685c: 0x34420460  ori         $v0, $v0, 0x460
    ctx->pc = 0x3c685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1120);
label_3c6860:
    // 0x3c6860: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x3c6860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_3c6864:
    // 0x3c6864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c6864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c6868:
    // 0x3c6868: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c6868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c686c:
    // 0x3c686c: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3c686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3c6870:
    // 0x3c6870: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c6870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c6874:
    // 0x3c6874: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6878:
    // 0x3c6878: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3c6878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c687c:
    // 0x3c687c: 0x7fa50440  sq          $a1, 0x440($sp)
    ctx->pc = 0x3c687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 5));
label_3c6880:
    // 0x3c6880: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3c6880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c6884:
    // 0x3c6884: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3c6884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c6888:
    // 0x3c6888: 0x27b30450  addiu       $s3, $sp, 0x450
    ctx->pc = 0x3c6888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c688c:
    // 0x3c688c: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3c688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3c6890:
    // 0x3c6890: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x3c6890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_3c6894:
    // 0x3c6894: 0x26104228  addiu       $s0, $s0, 0x4228
    ctx->pc = 0x3c6894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16936));
label_3c6898:
    // 0x3c6898: 0xc0cd518  jal         func_335460
label_3c689c:
    if (ctx->pc == 0x3C689Cu) {
        ctx->pc = 0x3C689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6898u;
        // 0x3c689c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68A0u;
        goto label_3c68a0;
    }
    ctx->pc = 0x3C6898u;
    SET_GPR_U32(ctx, 31, 0x3C68A0u);
    ctx->pc = 0x3C689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6898u;
    // 0x3c689c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C6898u, 0x3C68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68A0u;
label_3c68a0:
    // 0x3c68a0: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c68a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c68a4:
    // 0x3c68a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c68a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c68a8:
    // 0x3c68a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c68a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c68ac:
    // 0x3c68ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3c68acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c68b0:
    // 0x3c68b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c68b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c68b4:
    // 0x3c68b4: 0xc0e9fd0  jal         func_3A7F40
label_3c68b8:
    if (ctx->pc == 0x3C68B8u) {
        ctx->pc = 0x3C68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68B4u;
        // 0x3c68b8: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68BCu;
        goto label_3c68bc;
    }
    ctx->pc = 0x3C68B4u;
    SET_GPR_U32(ctx, 31, 0x3C68BCu);
    ctx->pc = 0x3C68B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C68B4u;
    // 0x3c68b8: 0x27a80460  addiu       $t0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C68B4u, 0x3C68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68BCu;
label_3c68bc:
    // 0x3c68bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3c68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3c68c0:
    // 0x3c68c0: 0x24844228  addiu       $a0, $a0, 0x4228
    ctx->pc = 0x3c68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16936));
label_3c68c4:
    // 0x3c68c4: 0xc0f15bc  jal         func_3C56F0
label_3c68c8:
    if (ctx->pc == 0x3C68C8u) {
        ctx->pc = 0x3C68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68C4u;
        // 0x3c68c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68CCu;
        goto label_3c68cc;
    }
    ctx->pc = 0x3C68C4u;
    SET_GPR_U32(ctx, 31, 0x3C68CCu);
    ctx->pc = 0x3C68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C68C4u;
    // 0x3c68c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C68C4u, 0x3C68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68CCu;
label_3c68cc:
    // 0x3c68cc: 0x10000073  b           . + 4 + (0x73 << 2)
label_3c68d0:
    if (ctx->pc == 0x3C68D0u) {
        ctx->pc = 0x3C68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68CCu;
        // 0x3c68d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68D4u;
        goto label_3c68d4;
    }
    ctx->pc = 0x3C68CCu;
    {
        const bool branch_taken_0x3c68cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68CCu;
        // 0x3c68d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68cc) {
            ctx->pc = 0x3C6A9Cu;
            goto label_3c6a9c;
        }
    }
    ctx->pc = 0x3C68D4u;
label_3c68d4:
    // 0x3c68d4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c68d8:
    // 0x3c68d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3c68d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c68dc:
    // 0x3c68dc: 0xc0e9666  jal         func_3A5998
label_3c68e0:
    if (ctx->pc == 0x3C68E0u) {
        ctx->pc = 0x3C68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68DCu;
        // 0x3c68e0: 0x24a54290  addiu       $a1, $a1, 0x4290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68E4u;
        goto label_3c68e4;
    }
    ctx->pc = 0x3C68DCu;
    SET_GPR_U32(ctx, 31, 0x3C68E4u);
    ctx->pc = 0x3C68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C68DCu;
    // 0x3c68e0: 0x24a54290  addiu       $a1, $a1, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3C68DCu, 0x3C68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68E4u;
label_3c68e4:
    // 0x3c68e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3c68e8:
    if (ctx->pc == 0x3C68E8u) {
        ctx->pc = 0x3C68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68E4u;
        // 0x3c68e8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C68ECu;
        goto label_3c68ec;
    }
    ctx->pc = 0x3C68E4u;
    {
        const bool branch_taken_0x3c68e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68E4u;
        // 0x3c68e8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68e4) {
            ctx->pc = 0x3C6978u;
            goto label_3c6978;
        }
    }
    ctx->pc = 0x3C68ECu;
label_3c68ec:
    // 0x3c68ec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c68f0:
    // 0x3c68f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3c68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c68f4:
    // 0x3c68f4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c68f8:
    // 0x3c68f8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3c68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c68fc:
    // 0x3c68fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c68fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3c6900:
    // 0x3c6900: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c6900u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3c6904:
    // 0x3c6904: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x3c6904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c6908:
    // 0x3c6908: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3c6908u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_3c690c:
    // 0x3c690c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3c690cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3c6910:
    // 0x3c6910: 0xe7a00490  swc1        $f0, 0x490($sp)
    ctx->pc = 0x3c6910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_3c6914:
    // 0x3c6914: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3c6914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c6918:
    // 0x3c6918: 0xe7a10494  swc1        $f1, 0x494($sp)
    ctx->pc = 0x3c6918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1172), bits); }
label_3c691c:
    // 0x3c691c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c691cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c6920:
    // 0x3c6920: 0xe7a20498  swc1        $f2, 0x498($sp)
    ctx->pc = 0x3c6920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1176), bits); }
label_3c6924:
    // 0x3c6924: 0x261042a0  addiu       $s0, $s0, 0x42A0
    ctx->pc = 0x3c6924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17056));
label_3c6928:
    // 0x3c6928: 0xe7a3049c  swc1        $f3, 0x49C($sp)
    ctx->pc = 0x3c6928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1180), bits); }
label_3c692c:
    // 0x3c692c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6930:
    // 0x3c6930: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c6930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c6934:
    // 0x3c6934: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3c6934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c6938:
    // 0x3c6938: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3c6938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c693c:
    // 0x3c693c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3c693cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c6940:
    // 0x3c6940: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3c6940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c6944:
    // 0x3c6944: 0x27a80460  addiu       $t0, $sp, 0x460
    ctx->pc = 0x3c6944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c6948:
    // 0x3c6948: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3c6948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3c694c:
    // 0x3c694c: 0x27a90470  addiu       $t1, $sp, 0x470
    ctx->pc = 0x3c694cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c6950:
    // 0x3c6950: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3c6950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3c6954:
    // 0x3c6954: 0x27aa0490  addiu       $t2, $sp, 0x490
    ctx->pc = 0x3c6954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3c6958:
    // 0x3c6958: 0xafbe0440  sw          $fp, 0x440($sp)
    ctx->pc = 0x3c6958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 30));
label_3c695c:
    // 0x3c695c: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3c695cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3c6960:
    // 0x3c6960: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3c6960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3c6964:
    // 0x3c6964: 0xc0ea040  jal         func_3A8100
label_3c6968:
    if (ctx->pc == 0x3C6968u) {
        ctx->pc = 0x3C6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6964u;
        // 0x3c6968: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C696Cu;
        goto label_3c696c;
    }
    ctx->pc = 0x3C6964u;
    SET_GPR_U32(ctx, 31, 0x3C696Cu);
    ctx->pc = 0x3C6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6964u;
    // 0x3c6968: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3C6964u, 0x3C696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C696Cu;
label_3c696c:
    // 0x3c696c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6970:
    // 0x3c6970: 0xc0f15bc  jal         func_3C56F0
label_3c6974:
    if (ctx->pc == 0x3C6974u) {
        ctx->pc = 0x3C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6970u;
        // 0x3c6974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6978u;
        goto label_3c6978;
    }
    ctx->pc = 0x3C6970u;
    SET_GPR_U32(ctx, 31, 0x3C6978u);
    ctx->pc = 0x3C6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6970u;
    // 0x3c6974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C6970u, 0x3C6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6978u;
label_3c6978:
    // 0x3c6978: 0x3c025902  lui         $v0, 0x5902
    ctx->pc = 0x3c6978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22786 << 16));
label_3c697c:
    // 0x3c697c: 0x8fc300c4  lw          $v1, 0xC4($fp)
    ctx->pc = 0x3c697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
label_3c6980:
    // 0x3c6980: 0x34426f53  ori         $v0, $v0, 0x6F53
    ctx->pc = 0x3c6980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28499);
label_3c6984:
    // 0x3c6984: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3c6988:
    if (ctx->pc == 0x3C6988u) {
        ctx->pc = 0x3C6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6984u;
        // 0x3c6988: 0x8fa704a0  lw          $a3, 0x4A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C698Cu;
        goto label_3c698c;
    }
    ctx->pc = 0x3C6984u;
    {
        const bool branch_taken_0x3c6984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6984u;
        // 0x3c6988: 0x8fa704a0  lw          $a3, 0x4A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6984) {
            ctx->pc = 0x3C69A8u;
            goto label_3c69a8;
        }
    }
    ctx->pc = 0x3C698Cu;
label_3c698c:
    // 0x3c698c: 0x8fc30124  lw          $v1, 0x124($fp)
    ctx->pc = 0x3c698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
label_3c6990:
    // 0x3c6990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6994:
    // 0x3c6994: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3c6998:
    if (ctx->pc == 0x3C6998u) {
        ctx->pc = 0x3C6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6994u;
        // 0x3c6998: 0x8ce20030  lw          $v0, 0x30($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C699Cu;
        goto label_3c699c;
    }
    ctx->pc = 0x3C6994u;
    {
        const bool branch_taken_0x3c6994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c6994) {
            ctx->pc = 0x3C6998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6994u;
            // 0x3c6998: 0x8ce20030  lw          $v0, 0x30($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C69ACu;
            goto label_3c69ac;
        }
    }
    ctx->pc = 0x3C699Cu;
label_3c699c:
    // 0x3c699c: 0x8fa604a0  lw          $a2, 0x4A0($sp)
    ctx->pc = 0x3c699cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c69a0:
    // 0x3c69a0: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x3c69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
label_3c69a4:
    // 0x3c69a4: 0x8fa704a0  lw          $a3, 0x4A0($sp)
    ctx->pc = 0x3c69a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c69a8:
    // 0x3c69a8: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x3c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_3c69ac:
    // 0x3c69ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c69acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c69b0:
    // 0x3c69b0: 0x28430ddf  slti        $v1, $v0, 0xDDF
    ctx->pc = 0x3c69b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3551) ? 1 : 0);
label_3c69b4:
    // 0x3c69b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3c69b8:
    if (ctx->pc == 0x3C69B8u) {
        ctx->pc = 0x3C69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69B4u;
        // 0x3c69b8: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69BCu;
        goto label_3c69bc;
    }
    ctx->pc = 0x3C69B4u;
    {
        const bool branch_taken_0x3c69b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69B4u;
        // 0x3c69b8: 0xace20030  sw          $v0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69b4) {
            ctx->pc = 0x3C69C8u;
            goto label_3c69c8;
        }
    }
    ctx->pc = 0x3C69BCu;
label_3c69bc:
    // 0x3c69bc: 0x8fc200c8  lw          $v0, 0xC8($fp)
    ctx->pc = 0x3c69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 200)));
label_3c69c0:
    // 0x3c69c0: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x3c69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_3c69c4:
    // 0x3c69c4: 0xafc200cc  sw          $v0, 0xCC($fp)
    ctx->pc = 0x3c69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 204), GPR_U32(ctx, 2));
label_3c69c8:
    // 0x3c69c8: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x3c69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c69cc:
    // 0x3c69cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3c69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3c69d0:
    // 0x3c69d0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3c69d4:
    if (ctx->pc == 0x3C69D4u) {
        ctx->pc = 0x3C69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69D0u;
        // 0x3c69d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69D8u;
        goto label_3c69d8;
    }
    ctx->pc = 0x3C69D0u;
    {
        const bool branch_taken_0x3c69d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69D0u;
        // 0x3c69d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69d0) {
            ctx->pc = 0x3C6A9Cu;
            goto label_3c6a9c;
        }
    }
    ctx->pc = 0x3C69D8u;
label_3c69d8:
    // 0x3c69d8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x3c69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3c69dc:
    // 0x3c69dc: 0x2842003d  slti        $v0, $v0, 0x3D
    ctx->pc = 0x3c69dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_3c69e0:
    // 0x3c69e0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_3c69e4:
    if (ctx->pc == 0x3C69E4u) {
        ctx->pc = 0x3C69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69E0u;
        // 0x3c69e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69E8u;
        goto label_3c69e8;
    }
    ctx->pc = 0x3C69E0u;
    {
        const bool branch_taken_0x3c69e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69E0u;
        // 0x3c69e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69e0) {
            ctx->pc = 0x3C6A9Cu;
            goto label_3c6a9c;
        }
    }
    ctx->pc = 0x3C69E8u;
label_3c69e8:
    // 0x3c69e8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3c69e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c69ec:
    // 0x3c69ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c69ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c69f0:
    // 0x3c69f0: 0xc0e90ca  jal         func_3A4328
label_3c69f4:
    if (ctx->pc == 0x3C69F4u) {
        ctx->pc = 0x3C69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69F0u;
        // 0x3c69f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69F8u;
        goto label_3c69f8;
    }
    ctx->pc = 0x3C69F0u;
    SET_GPR_U32(ctx, 31, 0x3C69F8u);
    ctx->pc = 0x3C69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C69F0u;
    // 0x3c69f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3C69F0u, 0x3C69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C69F8u;
label_3c69f8:
    // 0x3c69f8: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x3c69f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
label_3c69fc:
    // 0x3c69fc: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x3c69fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_3c6a00:
    // 0x3c6a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c6a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6a04:
    // 0x3c6a04: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3c6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c6a08:
    // 0x3c6a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c6a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c6a0c:
    // 0x3c6a0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c6a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c6a10:
    // 0x3c6a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c6a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a14:
    // 0x3c6a14: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3c6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3c6a18:
    // 0x3c6a18: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c6a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c6a1c:
    // 0x3c6a1c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3c6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3c6a20:
    // 0x3c6a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c6a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a24:
    // 0x3c6a24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3c6a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3c6a28:
    // 0x3c6a28: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3c6a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3c6a2c:
    // 0x3c6a2c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c6a2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6a30:
    // 0x3c6a30: 0xc136b18  jal         func_4DAC60
label_3c6a34:
    if (ctx->pc == 0x3C6A34u) {
        ctx->pc = 0x3C6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A30u;
        // 0x3c6a34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6A38u;
        goto label_3c6a38;
    }
    ctx->pc = 0x3C6A30u;
    SET_GPR_U32(ctx, 31, 0x3C6A38u);
    ctx->pc = 0x3C6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A30u;
    // 0x3c6a34: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C6A30u, 0x3C6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6A38u;
label_3c6a38:
    // 0x3c6a38: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c6a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6a3c:
    // 0x3c6a3c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3c6a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c6a40:
    // 0x3c6a40: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c6a40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c6a44:
    // 0x3c6a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a48:
    // 0x3c6a48: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c6a4c:
    // 0x3c6a4c: 0x261042a8  addiu       $s0, $s0, 0x42A8
    ctx->pc = 0x3c6a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17064));
label_3c6a50:
    // 0x3c6a50: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c6a54:
    // 0x3c6a54: 0xc0e911e  jal         func_3A4478
label_3c6a58:
    if (ctx->pc == 0x3C6A58u) {
        ctx->pc = 0x3C6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A54u;
        // 0x3c6a58: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6A5Cu;
        goto label_3c6a5c;
    }
    ctx->pc = 0x3C6A54u;
    SET_GPR_U32(ctx, 31, 0x3C6A5Cu);
    ctx->pc = 0x3C6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A54u;
    // 0x3c6a58: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C6A54u, 0x3C6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6A5Cu;
label_3c6a5c:
    // 0x3c6a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a60:
    // 0x3c6a60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c6a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a64:
    // 0x3c6a64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c6a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a68:
    // 0x3c6a68: 0xc0e94fc  jal         func_3A53F0
label_3c6a6c:
    if (ctx->pc == 0x3C6A6Cu) {
        ctx->pc = 0x3C6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A68u;
        // 0x3c6a6c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6A70u;
        goto label_3c6a70;
    }
    ctx->pc = 0x3C6A68u;
    SET_GPR_U32(ctx, 31, 0x3C6A70u);
    ctx->pc = 0x3C6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A68u;
    // 0x3c6a6c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C6A68u, 0x3C6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6A70u;
label_3c6a70:
    // 0x3c6a70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c6a74:
    // 0x3c6a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a78:
    // 0x3c6a78: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c6a7c:
    // 0x3c6a7c: 0xc0cd4ee  jal         func_3353B8
label_3c6a80:
    if (ctx->pc == 0x3C6A80u) {
        ctx->pc = 0x3C6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A7Cu;
        // 0x3c6a80: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6A84u;
        goto label_3c6a84;
    }
    ctx->pc = 0x3C6A7Cu;
    SET_GPR_U32(ctx, 31, 0x3C6A84u);
    ctx->pc = 0x3C6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A7Cu;
    // 0x3c6a80: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C6A7Cu, 0x3C6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6A84u;
label_3c6a84:
    // 0x3c6a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a88:
    // 0x3c6a88: 0xc0e932c  jal         func_3A4CB0
label_3c6a8c:
    if (ctx->pc == 0x3C6A8Cu) {
        ctx->pc = 0x3C6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A88u;
        // 0x3c6a8c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6A90u;
        goto label_3c6a90;
    }
    ctx->pc = 0x3C6A88u;
    SET_GPR_U32(ctx, 31, 0x3C6A90u);
    ctx->pc = 0x3C6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A88u;
    // 0x3c6a8c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3C6A88u, 0x3C6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6A90u;
label_3c6a90:
    // 0x3c6a90: 0x8fa404a0  lw          $a0, 0x4A0($sp)
    ctx->pc = 0x3c6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c6a94:
    // 0x3c6a94: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3c6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_3c6a98:
    // 0x3c6a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c6a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6a9c:
    // 0x3c6a9c: 0x7bb00540  lq          $s0, 0x540($sp)
    ctx->pc = 0x3c6a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3c6aa0:
    // 0x3c6aa0: 0x7bb10530  lq          $s1, 0x530($sp)
    ctx->pc = 0x3c6aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c6aa4:
    // 0x3c6aa4: 0x7bb20520  lq          $s2, 0x520($sp)
    ctx->pc = 0x3c6aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c6aa8:
    // 0x3c6aa8: 0x7bb30510  lq          $s3, 0x510($sp)
    ctx->pc = 0x3c6aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c6aac:
    // 0x3c6aac: 0x7bb40500  lq          $s4, 0x500($sp)
    ctx->pc = 0x3c6aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c6ab0:
    // 0x3c6ab0: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x3c6ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c6ab4:
    // 0x3c6ab4: 0x7bb604e0  lq          $s6, 0x4E0($sp)
    ctx->pc = 0x3c6ab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c6ab8:
    // 0x3c6ab8: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x3c6ab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c6abc:
    // 0x3c6abc: 0x7bbe04c0  lq          $fp, 0x4C0($sp)
    ctx->pc = 0x3c6abcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3c6ac0:
    // 0x3c6ac0: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x3c6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c6ac4:
    // 0x3c6ac4: 0xc7b80570  lwc1        $f24, 0x570($sp)
    ctx->pc = 0x3c6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3c6ac8:
    // 0x3c6ac8: 0xc7b70568  lwc1        $f23, 0x568($sp)
    ctx->pc = 0x3c6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c6acc:
    // 0x3c6acc: 0xc7b60560  lwc1        $f22, 0x560($sp)
    ctx->pc = 0x3c6accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c6ad0:
    // 0x3c6ad0: 0xc7b50558  lwc1        $f21, 0x558($sp)
    ctx->pc = 0x3c6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c6ad4:
    // 0x3c6ad4: 0xc7b40550  lwc1        $f20, 0x550($sp)
    ctx->pc = 0x3c6ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c6ad8:
    // 0x3c6ad8: 0x3e00008  jr          $ra
label_3c6adc:
    if (ctx->pc == 0x3C6ADCu) {
        ctx->pc = 0x3C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AD8u;
        // 0x3c6adc: 0x27bd0580  addiu       $sp, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6AE0u;
        goto label_fallthrough_0x3c6ad8;
    }
    ctx->pc = 0x3C6AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AD8u;
        // 0x3c6adc: 0x27bd0580  addiu       $sp, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c6ad8:
    ctx->pc = 0x3C6AE0u;
}
