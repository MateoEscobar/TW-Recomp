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

// Function: sub_002C61F8
// Address: 0x2c61f8 - 0x2c68b8
void sub_002C61F8_0x2c61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C61F8_0x2c61f8");
#endif

    switch (ctx->pc) {
        case 0x2c61f8u: goto label_2c61f8;
        case 0x2c61fcu: goto label_2c61fc;
        case 0x2c6200u: goto label_2c6200;
        case 0x2c6204u: goto label_2c6204;
        case 0x2c6208u: goto label_2c6208;
        case 0x2c620cu: goto label_2c620c;
        case 0x2c6210u: goto label_2c6210;
        case 0x2c6214u: goto label_2c6214;
        case 0x2c6218u: goto label_2c6218;
        case 0x2c621cu: goto label_2c621c;
        case 0x2c6220u: goto label_2c6220;
        case 0x2c6224u: goto label_2c6224;
        case 0x2c6228u: goto label_2c6228;
        case 0x2c622cu: goto label_2c622c;
        case 0x2c6230u: goto label_2c6230;
        case 0x2c6234u: goto label_2c6234;
        case 0x2c6238u: goto label_2c6238;
        case 0x2c623cu: goto label_2c623c;
        case 0x2c6240u: goto label_2c6240;
        case 0x2c6244u: goto label_2c6244;
        case 0x2c6248u: goto label_2c6248;
        case 0x2c624cu: goto label_2c624c;
        case 0x2c6250u: goto label_2c6250;
        case 0x2c6254u: goto label_2c6254;
        case 0x2c6258u: goto label_2c6258;
        case 0x2c625cu: goto label_2c625c;
        case 0x2c6260u: goto label_2c6260;
        case 0x2c6264u: goto label_2c6264;
        case 0x2c6268u: goto label_2c6268;
        case 0x2c626cu: goto label_2c626c;
        case 0x2c6270u: goto label_2c6270;
        case 0x2c6274u: goto label_2c6274;
        case 0x2c6278u: goto label_2c6278;
        case 0x2c627cu: goto label_2c627c;
        case 0x2c6280u: goto label_2c6280;
        case 0x2c6284u: goto label_2c6284;
        case 0x2c6288u: goto label_2c6288;
        case 0x2c628cu: goto label_2c628c;
        case 0x2c6290u: goto label_2c6290;
        case 0x2c6294u: goto label_2c6294;
        case 0x2c6298u: goto label_2c6298;
        case 0x2c629cu: goto label_2c629c;
        case 0x2c62a0u: goto label_2c62a0;
        case 0x2c62a4u: goto label_2c62a4;
        case 0x2c62a8u: goto label_2c62a8;
        case 0x2c62acu: goto label_2c62ac;
        case 0x2c62b0u: goto label_2c62b0;
        case 0x2c62b4u: goto label_2c62b4;
        case 0x2c62b8u: goto label_2c62b8;
        case 0x2c62bcu: goto label_2c62bc;
        case 0x2c62c0u: goto label_2c62c0;
        case 0x2c62c4u: goto label_2c62c4;
        case 0x2c62c8u: goto label_2c62c8;
        case 0x2c62ccu: goto label_2c62cc;
        case 0x2c62d0u: goto label_2c62d0;
        case 0x2c62d4u: goto label_2c62d4;
        case 0x2c62d8u: goto label_2c62d8;
        case 0x2c62dcu: goto label_2c62dc;
        case 0x2c62e0u: goto label_2c62e0;
        case 0x2c62e4u: goto label_2c62e4;
        case 0x2c62e8u: goto label_2c62e8;
        case 0x2c62ecu: goto label_2c62ec;
        case 0x2c62f0u: goto label_2c62f0;
        case 0x2c62f4u: goto label_2c62f4;
        case 0x2c62f8u: goto label_2c62f8;
        case 0x2c62fcu: goto label_2c62fc;
        case 0x2c6300u: goto label_2c6300;
        case 0x2c6304u: goto label_2c6304;
        case 0x2c6308u: goto label_2c6308;
        case 0x2c630cu: goto label_2c630c;
        case 0x2c6310u: goto label_2c6310;
        case 0x2c6314u: goto label_2c6314;
        case 0x2c6318u: goto label_2c6318;
        case 0x2c631cu: goto label_2c631c;
        case 0x2c6320u: goto label_2c6320;
        case 0x2c6324u: goto label_2c6324;
        case 0x2c6328u: goto label_2c6328;
        case 0x2c632cu: goto label_2c632c;
        case 0x2c6330u: goto label_2c6330;
        case 0x2c6334u: goto label_2c6334;
        case 0x2c6338u: goto label_2c6338;
        case 0x2c633cu: goto label_2c633c;
        case 0x2c6340u: goto label_2c6340;
        case 0x2c6344u: goto label_2c6344;
        case 0x2c6348u: goto label_2c6348;
        case 0x2c634cu: goto label_2c634c;
        case 0x2c6350u: goto label_2c6350;
        case 0x2c6354u: goto label_2c6354;
        case 0x2c6358u: goto label_2c6358;
        case 0x2c635cu: goto label_2c635c;
        case 0x2c6360u: goto label_2c6360;
        case 0x2c6364u: goto label_2c6364;
        case 0x2c6368u: goto label_2c6368;
        case 0x2c636cu: goto label_2c636c;
        case 0x2c6370u: goto label_2c6370;
        case 0x2c6374u: goto label_2c6374;
        case 0x2c6378u: goto label_2c6378;
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6380u: goto label_2c6380;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c6388u: goto label_2c6388;
        case 0x2c638cu: goto label_2c638c;
        case 0x2c6390u: goto label_2c6390;
        case 0x2c6394u: goto label_2c6394;
        case 0x2c6398u: goto label_2c6398;
        case 0x2c639cu: goto label_2c639c;
        case 0x2c63a0u: goto label_2c63a0;
        case 0x2c63a4u: goto label_2c63a4;
        case 0x2c63a8u: goto label_2c63a8;
        case 0x2c63acu: goto label_2c63ac;
        case 0x2c63b0u: goto label_2c63b0;
        case 0x2c63b4u: goto label_2c63b4;
        case 0x2c63b8u: goto label_2c63b8;
        case 0x2c63bcu: goto label_2c63bc;
        case 0x2c63c0u: goto label_2c63c0;
        case 0x2c63c4u: goto label_2c63c4;
        case 0x2c63c8u: goto label_2c63c8;
        case 0x2c63ccu: goto label_2c63cc;
        case 0x2c63d0u: goto label_2c63d0;
        case 0x2c63d4u: goto label_2c63d4;
        case 0x2c63d8u: goto label_2c63d8;
        case 0x2c63dcu: goto label_2c63dc;
        case 0x2c63e0u: goto label_2c63e0;
        case 0x2c63e4u: goto label_2c63e4;
        case 0x2c63e8u: goto label_2c63e8;
        case 0x2c63ecu: goto label_2c63ec;
        case 0x2c63f0u: goto label_2c63f0;
        case 0x2c63f4u: goto label_2c63f4;
        case 0x2c63f8u: goto label_2c63f8;
        case 0x2c63fcu: goto label_2c63fc;
        case 0x2c6400u: goto label_2c6400;
        case 0x2c6404u: goto label_2c6404;
        case 0x2c6408u: goto label_2c6408;
        case 0x2c640cu: goto label_2c640c;
        case 0x2c6410u: goto label_2c6410;
        case 0x2c6414u: goto label_2c6414;
        case 0x2c6418u: goto label_2c6418;
        case 0x2c641cu: goto label_2c641c;
        case 0x2c6420u: goto label_2c6420;
        case 0x2c6424u: goto label_2c6424;
        case 0x2c6428u: goto label_2c6428;
        case 0x2c642cu: goto label_2c642c;
        case 0x2c6430u: goto label_2c6430;
        case 0x2c6434u: goto label_2c6434;
        case 0x2c6438u: goto label_2c6438;
        case 0x2c643cu: goto label_2c643c;
        case 0x2c6440u: goto label_2c6440;
        case 0x2c6444u: goto label_2c6444;
        case 0x2c6448u: goto label_2c6448;
        case 0x2c644cu: goto label_2c644c;
        case 0x2c6450u: goto label_2c6450;
        case 0x2c6454u: goto label_2c6454;
        case 0x2c6458u: goto label_2c6458;
        case 0x2c645cu: goto label_2c645c;
        case 0x2c6460u: goto label_2c6460;
        case 0x2c6464u: goto label_2c6464;
        case 0x2c6468u: goto label_2c6468;
        case 0x2c646cu: goto label_2c646c;
        case 0x2c6470u: goto label_2c6470;
        case 0x2c6474u: goto label_2c6474;
        case 0x2c6478u: goto label_2c6478;
        case 0x2c647cu: goto label_2c647c;
        case 0x2c6480u: goto label_2c6480;
        case 0x2c6484u: goto label_2c6484;
        case 0x2c6488u: goto label_2c6488;
        case 0x2c648cu: goto label_2c648c;
        case 0x2c6490u: goto label_2c6490;
        case 0x2c6494u: goto label_2c6494;
        case 0x2c6498u: goto label_2c6498;
        case 0x2c649cu: goto label_2c649c;
        case 0x2c64a0u: goto label_2c64a0;
        case 0x2c64a4u: goto label_2c64a4;
        case 0x2c64a8u: goto label_2c64a8;
        case 0x2c64acu: goto label_2c64ac;
        case 0x2c64b0u: goto label_2c64b0;
        case 0x2c64b4u: goto label_2c64b4;
        case 0x2c64b8u: goto label_2c64b8;
        case 0x2c64bcu: goto label_2c64bc;
        case 0x2c64c0u: goto label_2c64c0;
        case 0x2c64c4u: goto label_2c64c4;
        case 0x2c64c8u: goto label_2c64c8;
        case 0x2c64ccu: goto label_2c64cc;
        case 0x2c64d0u: goto label_2c64d0;
        case 0x2c64d4u: goto label_2c64d4;
        case 0x2c64d8u: goto label_2c64d8;
        case 0x2c64dcu: goto label_2c64dc;
        case 0x2c64e0u: goto label_2c64e0;
        case 0x2c64e4u: goto label_2c64e4;
        case 0x2c64e8u: goto label_2c64e8;
        case 0x2c64ecu: goto label_2c64ec;
        case 0x2c64f0u: goto label_2c64f0;
        case 0x2c64f4u: goto label_2c64f4;
        case 0x2c64f8u: goto label_2c64f8;
        case 0x2c64fcu: goto label_2c64fc;
        case 0x2c6500u: goto label_2c6500;
        case 0x2c6504u: goto label_2c6504;
        case 0x2c6508u: goto label_2c6508;
        case 0x2c650cu: goto label_2c650c;
        case 0x2c6510u: goto label_2c6510;
        case 0x2c6514u: goto label_2c6514;
        case 0x2c6518u: goto label_2c6518;
        case 0x2c651cu: goto label_2c651c;
        case 0x2c6520u: goto label_2c6520;
        case 0x2c6524u: goto label_2c6524;
        case 0x2c6528u: goto label_2c6528;
        case 0x2c652cu: goto label_2c652c;
        case 0x2c6530u: goto label_2c6530;
        case 0x2c6534u: goto label_2c6534;
        case 0x2c6538u: goto label_2c6538;
        case 0x2c653cu: goto label_2c653c;
        case 0x2c6540u: goto label_2c6540;
        case 0x2c6544u: goto label_2c6544;
        case 0x2c6548u: goto label_2c6548;
        case 0x2c654cu: goto label_2c654c;
        case 0x2c6550u: goto label_2c6550;
        case 0x2c6554u: goto label_2c6554;
        case 0x2c6558u: goto label_2c6558;
        case 0x2c655cu: goto label_2c655c;
        case 0x2c6560u: goto label_2c6560;
        case 0x2c6564u: goto label_2c6564;
        case 0x2c6568u: goto label_2c6568;
        case 0x2c656cu: goto label_2c656c;
        case 0x2c6570u: goto label_2c6570;
        case 0x2c6574u: goto label_2c6574;
        case 0x2c6578u: goto label_2c6578;
        case 0x2c657cu: goto label_2c657c;
        case 0x2c6580u: goto label_2c6580;
        case 0x2c6584u: goto label_2c6584;
        case 0x2c6588u: goto label_2c6588;
        case 0x2c658cu: goto label_2c658c;
        case 0x2c6590u: goto label_2c6590;
        case 0x2c6594u: goto label_2c6594;
        case 0x2c6598u: goto label_2c6598;
        case 0x2c659cu: goto label_2c659c;
        case 0x2c65a0u: goto label_2c65a0;
        case 0x2c65a4u: goto label_2c65a4;
        case 0x2c65a8u: goto label_2c65a8;
        case 0x2c65acu: goto label_2c65ac;
        case 0x2c65b0u: goto label_2c65b0;
        case 0x2c65b4u: goto label_2c65b4;
        case 0x2c65b8u: goto label_2c65b8;
        case 0x2c65bcu: goto label_2c65bc;
        case 0x2c65c0u: goto label_2c65c0;
        case 0x2c65c4u: goto label_2c65c4;
        case 0x2c65c8u: goto label_2c65c8;
        case 0x2c65ccu: goto label_2c65cc;
        case 0x2c65d0u: goto label_2c65d0;
        case 0x2c65d4u: goto label_2c65d4;
        case 0x2c65d8u: goto label_2c65d8;
        case 0x2c65dcu: goto label_2c65dc;
        case 0x2c65e0u: goto label_2c65e0;
        case 0x2c65e4u: goto label_2c65e4;
        case 0x2c65e8u: goto label_2c65e8;
        case 0x2c65ecu: goto label_2c65ec;
        case 0x2c65f0u: goto label_2c65f0;
        case 0x2c65f4u: goto label_2c65f4;
        case 0x2c65f8u: goto label_2c65f8;
        case 0x2c65fcu: goto label_2c65fc;
        case 0x2c6600u: goto label_2c6600;
        case 0x2c6604u: goto label_2c6604;
        case 0x2c6608u: goto label_2c6608;
        case 0x2c660cu: goto label_2c660c;
        case 0x2c6610u: goto label_2c6610;
        case 0x2c6614u: goto label_2c6614;
        case 0x2c6618u: goto label_2c6618;
        case 0x2c661cu: goto label_2c661c;
        case 0x2c6620u: goto label_2c6620;
        case 0x2c6624u: goto label_2c6624;
        case 0x2c6628u: goto label_2c6628;
        case 0x2c662cu: goto label_2c662c;
        case 0x2c6630u: goto label_2c6630;
        case 0x2c6634u: goto label_2c6634;
        case 0x2c6638u: goto label_2c6638;
        case 0x2c663cu: goto label_2c663c;
        case 0x2c6640u: goto label_2c6640;
        case 0x2c6644u: goto label_2c6644;
        case 0x2c6648u: goto label_2c6648;
        case 0x2c664cu: goto label_2c664c;
        case 0x2c6650u: goto label_2c6650;
        case 0x2c6654u: goto label_2c6654;
        case 0x2c6658u: goto label_2c6658;
        case 0x2c665cu: goto label_2c665c;
        case 0x2c6660u: goto label_2c6660;
        case 0x2c6664u: goto label_2c6664;
        case 0x2c6668u: goto label_2c6668;
        case 0x2c666cu: goto label_2c666c;
        case 0x2c6670u: goto label_2c6670;
        case 0x2c6674u: goto label_2c6674;
        case 0x2c6678u: goto label_2c6678;
        case 0x2c667cu: goto label_2c667c;
        case 0x2c6680u: goto label_2c6680;
        case 0x2c6684u: goto label_2c6684;
        case 0x2c6688u: goto label_2c6688;
        case 0x2c668cu: goto label_2c668c;
        case 0x2c6690u: goto label_2c6690;
        case 0x2c6694u: goto label_2c6694;
        case 0x2c6698u: goto label_2c6698;
        case 0x2c669cu: goto label_2c669c;
        case 0x2c66a0u: goto label_2c66a0;
        case 0x2c66a4u: goto label_2c66a4;
        case 0x2c66a8u: goto label_2c66a8;
        case 0x2c66acu: goto label_2c66ac;
        case 0x2c66b0u: goto label_2c66b0;
        case 0x2c66b4u: goto label_2c66b4;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66bcu: goto label_2c66bc;
        case 0x2c66c0u: goto label_2c66c0;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66c8u: goto label_2c66c8;
        case 0x2c66ccu: goto label_2c66cc;
        case 0x2c66d0u: goto label_2c66d0;
        case 0x2c66d4u: goto label_2c66d4;
        case 0x2c66d8u: goto label_2c66d8;
        case 0x2c66dcu: goto label_2c66dc;
        case 0x2c66e0u: goto label_2c66e0;
        case 0x2c66e4u: goto label_2c66e4;
        case 0x2c66e8u: goto label_2c66e8;
        case 0x2c66ecu: goto label_2c66ec;
        case 0x2c66f0u: goto label_2c66f0;
        case 0x2c66f4u: goto label_2c66f4;
        case 0x2c66f8u: goto label_2c66f8;
        case 0x2c66fcu: goto label_2c66fc;
        case 0x2c6700u: goto label_2c6700;
        case 0x2c6704u: goto label_2c6704;
        case 0x2c6708u: goto label_2c6708;
        case 0x2c670cu: goto label_2c670c;
        case 0x2c6710u: goto label_2c6710;
        case 0x2c6714u: goto label_2c6714;
        case 0x2c6718u: goto label_2c6718;
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6720u: goto label_2c6720;
        case 0x2c6724u: goto label_2c6724;
        case 0x2c6728u: goto label_2c6728;
        case 0x2c672cu: goto label_2c672c;
        case 0x2c6730u: goto label_2c6730;
        case 0x2c6734u: goto label_2c6734;
        case 0x2c6738u: goto label_2c6738;
        case 0x2c673cu: goto label_2c673c;
        case 0x2c6740u: goto label_2c6740;
        case 0x2c6744u: goto label_2c6744;
        case 0x2c6748u: goto label_2c6748;
        case 0x2c674cu: goto label_2c674c;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6754u: goto label_2c6754;
        case 0x2c6758u: goto label_2c6758;
        case 0x2c675cu: goto label_2c675c;
        case 0x2c6760u: goto label_2c6760;
        case 0x2c6764u: goto label_2c6764;
        case 0x2c6768u: goto label_2c6768;
        case 0x2c676cu: goto label_2c676c;
        case 0x2c6770u: goto label_2c6770;
        case 0x2c6774u: goto label_2c6774;
        case 0x2c6778u: goto label_2c6778;
        case 0x2c677cu: goto label_2c677c;
        case 0x2c6780u: goto label_2c6780;
        case 0x2c6784u: goto label_2c6784;
        case 0x2c6788u: goto label_2c6788;
        case 0x2c678cu: goto label_2c678c;
        case 0x2c6790u: goto label_2c6790;
        case 0x2c6794u: goto label_2c6794;
        case 0x2c6798u: goto label_2c6798;
        case 0x2c679cu: goto label_2c679c;
        case 0x2c67a0u: goto label_2c67a0;
        case 0x2c67a4u: goto label_2c67a4;
        case 0x2c67a8u: goto label_2c67a8;
        case 0x2c67acu: goto label_2c67ac;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67b4u: goto label_2c67b4;
        case 0x2c67b8u: goto label_2c67b8;
        case 0x2c67bcu: goto label_2c67bc;
        case 0x2c67c0u: goto label_2c67c0;
        case 0x2c67c4u: goto label_2c67c4;
        case 0x2c67c8u: goto label_2c67c8;
        case 0x2c67ccu: goto label_2c67cc;
        case 0x2c67d0u: goto label_2c67d0;
        case 0x2c67d4u: goto label_2c67d4;
        case 0x2c67d8u: goto label_2c67d8;
        case 0x2c67dcu: goto label_2c67dc;
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c67e4u: goto label_2c67e4;
        case 0x2c67e8u: goto label_2c67e8;
        case 0x2c67ecu: goto label_2c67ec;
        case 0x2c67f0u: goto label_2c67f0;
        case 0x2c67f4u: goto label_2c67f4;
        case 0x2c67f8u: goto label_2c67f8;
        case 0x2c67fcu: goto label_2c67fc;
        case 0x2c6800u: goto label_2c6800;
        case 0x2c6804u: goto label_2c6804;
        case 0x2c6808u: goto label_2c6808;
        case 0x2c680cu: goto label_2c680c;
        case 0x2c6810u: goto label_2c6810;
        case 0x2c6814u: goto label_2c6814;
        case 0x2c6818u: goto label_2c6818;
        case 0x2c681cu: goto label_2c681c;
        case 0x2c6820u: goto label_2c6820;
        case 0x2c6824u: goto label_2c6824;
        case 0x2c6828u: goto label_2c6828;
        case 0x2c682cu: goto label_2c682c;
        case 0x2c6830u: goto label_2c6830;
        case 0x2c6834u: goto label_2c6834;
        case 0x2c6838u: goto label_2c6838;
        case 0x2c683cu: goto label_2c683c;
        case 0x2c6840u: goto label_2c6840;
        case 0x2c6844u: goto label_2c6844;
        case 0x2c6848u: goto label_2c6848;
        case 0x2c684cu: goto label_2c684c;
        case 0x2c6850u: goto label_2c6850;
        case 0x2c6854u: goto label_2c6854;
        case 0x2c6858u: goto label_2c6858;
        case 0x2c685cu: goto label_2c685c;
        case 0x2c6860u: goto label_2c6860;
        case 0x2c6864u: goto label_2c6864;
        case 0x2c6868u: goto label_2c6868;
        case 0x2c686cu: goto label_2c686c;
        case 0x2c6870u: goto label_2c6870;
        case 0x2c6874u: goto label_2c6874;
        case 0x2c6878u: goto label_2c6878;
        case 0x2c687cu: goto label_2c687c;
        case 0x2c6880u: goto label_2c6880;
        case 0x2c6884u: goto label_2c6884;
        case 0x2c6888u: goto label_2c6888;
        case 0x2c688cu: goto label_2c688c;
        case 0x2c6890u: goto label_2c6890;
        case 0x2c6894u: goto label_2c6894;
        case 0x2c6898u: goto label_2c6898;
        case 0x2c689cu: goto label_2c689c;
        case 0x2c68a0u: goto label_2c68a0;
        case 0x2c68a4u: goto label_2c68a4;
        case 0x2c68a8u: goto label_2c68a8;
        case 0x2c68acu: goto label_2c68ac;
        case 0x2c68b0u: goto label_2c68b0;
        case 0x2c68b4u: goto label_2c68b4;
        default: break;
    }

    ctx->pc = 0x2c61f8u;

label_2c61f8:
    // 0x2c61f8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c61f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2c61fc:
    // 0x2c61fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c6200:
    // 0x2c6200: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2c6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2c6204:
    // 0x2c6204: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2c6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2c6208:
    // 0x2c6208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c620c:
    // 0x2c620c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2c620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2c6210:
    // 0x2c6210: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2c6210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2c6214:
    // 0x2c6214: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2c6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2c6218:
    // 0x2c6218: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2c6218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2c621c:
    // 0x2c621c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2c621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2c6220:
    // 0x2c6220: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c6220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2c6224:
    // 0x2c6224: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c6224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c6228:
    // 0x2c6228: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2c6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c622c:
    // 0x2c622c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c6230:
    // 0x2c6230: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c6234:
    if (ctx->pc == 0x2C6234u) {
        ctx->pc = 0x2C6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6230u;
        // 0x2c6234: 0x8c760048  lw          $s6, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6238u;
        goto label_2c6238;
    }
    ctx->pc = 0x2C6230u;
    {
        const bool branch_taken_0x2c6230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6230u;
        // 0x2c6234: 0x8c760048  lw          $s6, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6230) {
            ctx->pc = 0x2C6244u;
            goto label_2c6244;
        }
    }
    ctx->pc = 0x2C6238u;
label_2c6238:
    // 0x2c6238: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x2c6238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2c623c:
    // 0x2c623c: 0x14400193  bnez        $v0, . + 4 + (0x193 << 2)
label_2c6240:
    if (ctx->pc == 0x2C6240u) {
        ctx->pc = 0x2C6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C623Cu;
        // 0x2c6240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6244u;
        goto label_2c6244;
    }
    ctx->pc = 0x2C623Cu;
    {
        const bool branch_taken_0x2c623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C623Cu;
        // 0x2c6240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c623c) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C6244u;
label_2c6244:
    // 0x2c6244: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c6248:
    // 0x2c6248: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2c624c:
    if (ctx->pc == 0x2C624Cu) {
        ctx->pc = 0x2C624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6248u;
        // 0x2c624c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6250u;
        goto label_2c6250;
    }
    ctx->pc = 0x2C6248u;
    {
        const bool branch_taken_0x2c6248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6248) {
            ctx->pc = 0x2C624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6248u;
            // 0x2c624c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6268u;
            goto label_2c6268;
        }
    }
    ctx->pc = 0x2C6250u;
label_2c6250:
    // 0x2c6250: 0xc0b179e  jal         func_2C5E78
label_2c6254:
    if (ctx->pc == 0x2C6254u) {
        ctx->pc = 0x2C6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6250u;
        // 0x2c6254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6258u;
        goto label_2c6258;
    }
    ctx->pc = 0x2C6250u;
    SET_GPR_U32(ctx, 31, 0x2C6258u);
    ctx->pc = 0x2C6254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6250u;
    // 0x2c6254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E78u, 0x2C6250u, 0x2C6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6258u;
label_2c6258:
    // 0x2c6258: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c625c:
    // 0x2c625c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2c625cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2c6260:
    // 0x2c6260: 0x1000018a  b           . + 4 + (0x18A << 2)
label_2c6264:
    if (ctx->pc == 0x2C6264u) {
        ctx->pc = 0x2C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6260u;
        // 0x2c6264: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6268u;
        goto label_2c6268;
    }
    ctx->pc = 0x2C6260u;
    {
        const bool branch_taken_0x2c6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6260u;
        // 0x2c6264: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6260) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C6268u;
label_2c6268:
    // 0x2c6268: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2c6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2c626c:
    // 0x2c626c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c626cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6270:
    // 0x2c6270: 0xc0e409a  jal         func_390268
label_2c6274:
    if (ctx->pc == 0x2C6274u) {
        ctx->pc = 0x2C6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6270u;
        // 0x2c6274: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6278u;
        goto label_2c6278;
    }
    ctx->pc = 0x2C6270u;
    SET_GPR_U32(ctx, 31, 0x2C6278u);
    ctx->pc = 0x2C6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6270u;
    // 0x2c6274: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C6270u, 0x2C6278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6278u;
label_2c6278:
    // 0x2c6278: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c6278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c627c:
    // 0x2c627c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6280:
    // 0x2c6280: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c6280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c6284:
    // 0x2c6284: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c6288:
    // 0x2c6288: 0x40f809  jalr        $v0
label_2c628c:
    if (ctx->pc == 0x2C628Cu) {
        ctx->pc = 0x2C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6288u;
        // 0x2c628c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6290u;
        goto label_2c6290;
    }
    ctx->pc = 0x2C6288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6290u);
        ctx->pc = 0x2C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6288u;
        // 0x2c628c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6288u, 0x2C6290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6290u;
label_2c6290:
    // 0x2c6290: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2c6290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_2c6294:
    // 0x2c6294: 0xc0e4060  jal         func_390180
label_2c6298:
    if (ctx->pc == 0x2C6298u) {
        ctx->pc = 0x2C6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6294u;
        // 0x2c6298: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C629Cu;
        goto label_2c629c;
    }
    ctx->pc = 0x2C6294u;
    SET_GPR_U32(ctx, 31, 0x2C629Cu);
    ctx->pc = 0x2C6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6294u;
    // 0x2c6298: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C6294u, 0x2C629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C629Cu;
label_2c629c:
    // 0x2c629c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2c62a0:
    if (ctx->pc == 0x2C62A0u) {
        ctx->pc = 0x2C62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C629Cu;
        // 0x2c62a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62A4u;
        goto label_2c62a4;
    }
    ctx->pc = 0x2C629Cu;
    {
        const bool branch_taken_0x2c629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c629c) {
            ctx->pc = 0x2C62A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C629Cu;
            // 0x2c62a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C62ACu;
            goto label_2c62ac;
        }
    }
    ctx->pc = 0x2C62A4u;
label_2c62a4:
    // 0x2c62a4: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_2c62a8:
    if (ctx->pc == 0x2C62A8u) {
        ctx->pc = 0x2C62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62A4u;
        // 0x2c62a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62ACu;
        goto label_2c62ac;
    }
    ctx->pc = 0x2C62A4u;
    {
        const bool branch_taken_0x2c62a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c62a4) {
            ctx->pc = 0x2C62A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C62A4u;
            // 0x2c62a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C62ACu;
            goto label_2c62ac;
        }
    }
    ctx->pc = 0x2C62ACu;
label_2c62ac:
    // 0x2c62ac: 0x16000177  bnez        $s0, . + 4 + (0x177 << 2)
label_2c62b0:
    if (ctx->pc == 0x2C62B0u) {
        ctx->pc = 0x2C62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62ACu;
        // 0x2c62b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62B4u;
        goto label_2c62b4;
    }
    ctx->pc = 0x2C62ACu;
    {
        const bool branch_taken_0x2c62ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62ACu;
        // 0x2c62b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62ac) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C62B4u;
label_2c62b4:
    // 0x2c62b4: 0xc087502  jal         func_21D408
label_2c62b8:
    if (ctx->pc == 0x2C62B8u) {
        ctx->pc = 0x2C62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62B4u;
        // 0x2c62b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62BCu;
        goto label_2c62bc;
    }
    ctx->pc = 0x2C62B4u;
    SET_GPR_U32(ctx, 31, 0x2C62BCu);
    ctx->pc = 0x2C62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C62B4u;
    // 0x2c62b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C62B4u, 0x2C62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C62BCu;
label_2c62bc:
    // 0x2c62bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c62bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c62c0:
    // 0x2c62c0: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_2c62c4:
    // 0x2c62c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c62c8:
    if (ctx->pc == 0x2C62C8u) {
        ctx->pc = 0x2C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62C4u;
        // 0x2c62c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62CCu;
        goto label_2c62cc;
    }
    ctx->pc = 0x2C62C4u;
    {
        const bool branch_taken_0x2c62c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62C4u;
        // 0x2c62c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62c4) {
            ctx->pc = 0x2C62D8u;
            goto label_2c62d8;
        }
    }
    ctx->pc = 0x2C62CCu;
label_2c62cc:
    // 0x2c62cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2c62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c62d0:
    // 0x2c62d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c62d4:
    if (ctx->pc == 0x2C62D4u) {
        ctx->pc = 0x2C62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62D0u;
        // 0x2c62d4: 0x8c550040  lw          $s5, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62D8u;
        goto label_2c62d8;
    }
    ctx->pc = 0x2C62D0u;
    {
        const bool branch_taken_0x2c62d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62D0u;
        // 0x2c62d4: 0x8c550040  lw          $s5, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62d0) {
            ctx->pc = 0x2C62DCu;
            goto label_2c62dc;
        }
    }
    ctx->pc = 0x2C62D8u;
label_2c62d8:
    // 0x2c62d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c62d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c62dc:
    // 0x2c62dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c62e0:
    // 0x2c62e0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2c62e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2c62e4:
    // 0x2c62e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c62e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c62e8:
    // 0x2c62e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c62ec:
    if (ctx->pc == 0x2C62ECu) {
        ctx->pc = 0x2C62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62E8u;
        // 0x2c62ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C62F0u;
        goto label_2c62f0;
    }
    ctx->pc = 0x2C62E8u;
    {
        const bool branch_taken_0x2c62e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62E8u;
        // 0x2c62ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62e8) {
            ctx->pc = 0x2C6314u;
            goto label_2c6314;
        }
    }
    ctx->pc = 0x2C62F0u;
label_2c62f0:
    // 0x2c62f0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_2c62f4:
    if (ctx->pc == 0x2C62F4u) {
        ctx->pc = 0x2C62F8u;
        goto label_2c62f8;
    }
    ctx->pc = 0x2C62F0u;
    {
        const bool branch_taken_0x2c62f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c62f0) {
            ctx->pc = 0x2C6314u;
            goto label_2c6314;
        }
    }
    ctx->pc = 0x2C62F8u;
label_2c62f8:
    // 0x2c62f8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2c62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2c62fc:
    // 0x2c62fc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c62fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6300:
    // 0x2c6300: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c6304:
    // 0x2c6304: 0x40f809  jalr        $v0
label_2c6308:
    if (ctx->pc == 0x2C6308u) {
        ctx->pc = 0x2C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6304u;
        // 0x2c6308: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C630Cu;
        goto label_2c630c;
    }
    ctx->pc = 0x2C6304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C630Cu);
        ctx->pc = 0x2C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6304u;
        // 0x2c6308: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6304u, 0x2C630Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C630Cu;
label_2c630c:
    // 0x2c630c: 0x3842007b  xori        $v0, $v0, 0x7B
    ctx->pc = 0x2c630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)123);
label_2c6310:
    // 0x2c6310: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2c6310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c6314:
    // 0x2c6314: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_2c6318:
    if (ctx->pc == 0x2C6318u) {
        ctx->pc = 0x2C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6314u;
        // 0x2c6318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C631Cu;
        goto label_2c631c;
    }
    ctx->pc = 0x2C6314u;
    {
        const bool branch_taken_0x2c6314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6314u;
        // 0x2c6318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6314) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C631Cu;
label_2c631c:
    // 0x2c631c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2c631cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c6320:
    // 0x2c6320: 0x56020050  bnel        $s0, $v0, . + 4 + (0x50 << 2)
label_2c6324:
    if (ctx->pc == 0x2C6324u) {
        ctx->pc = 0x2C6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6320u;
        // 0x2c6324: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6328u;
        goto label_2c6328;
    }
    ctx->pc = 0x2C6320u;
    {
        const bool branch_taken_0x2c6320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6320) {
            ctx->pc = 0x2C6324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6320u;
            // 0x2c6324: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6464u;
            goto label_2c6464;
        }
    }
    ctx->pc = 0x2C6328u;
label_2c6328:
    // 0x2c6328: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c632c:
    // 0x2c632c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2c632cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2c6330:
    // 0x2c6330: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2c6330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2c6334:
    // 0x2c6334: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c6338:
    // 0x2c6338: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c6338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c633c:
    // 0x2c633c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c633cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6340:
    // 0x2c6340: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c6340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c6344:
    // 0x2c6344: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c6344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6348:
    // 0x2c6348: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c634c:
    // 0x2c634c: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2c634cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c6350:
    // 0x2c6350: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c6350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c6354:
    // 0x2c6354: 0xc136afa  jal         func_4DABE8
label_2c6358:
    if (ctx->pc == 0x2C6358u) {
        ctx->pc = 0x2C6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6354u;
        // 0x2c6358: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C635Cu;
        goto label_2c635c;
    }
    ctx->pc = 0x2C6354u;
    SET_GPR_U32(ctx, 31, 0x2C635Cu);
    ctx->pc = 0x2C6358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6354u;
    // 0x2c6358: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C6354u, 0x2C635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C635Cu;
label_2c635c:
    // 0x2c635c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2c635cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6360:
    // 0x2c6360: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c6360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c6364:
    // 0x2c6364: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c6364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c6368:
    // 0x2c6368: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c6368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c636c:
    // 0x2c636c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c636cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c6370:
    // 0x2c6370: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c6370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c6374:
    // 0x2c6374: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2c6374u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2c6378:
    // 0x2c6378: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c6378u;
    // VWAITQ (Q already resolved in this runtime)
label_2c637c:
    // 0x2c637c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2c637cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c6380:
    // 0x2c6380: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c6380u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c6384:
    // 0x2c6384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c6388:
    // 0x2c6388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c638c:
    // 0x2c638c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2c638cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c6390:
    // 0x2c6390: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c6390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6394:
    // 0x2c6394: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2c6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2c6398:
    // 0x2c6398: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c639c:
    // 0x2c639c: 0x0  nop
    ctx->pc = 0x2c639cu;
    // NOP
label_2c63a0:
    // 0x2c63a0: 0x0  nop
    ctx->pc = 0x2c63a0u;
    // NOP
label_2c63a4:
    // 0x2c63a4: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2c63a4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_2c63a8:
    // 0x2c63a8: 0xc136b24  jal         func_4DAC90
label_2c63ac:
    if (ctx->pc == 0x2C63ACu) {
        ctx->pc = 0x2C63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A8u;
        // 0x2c63ac: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63B0u;
        goto label_2c63b0;
    }
    ctx->pc = 0x2C63A8u;
    SET_GPR_U32(ctx, 31, 0x2C63B0u);
    ctx->pc = 0x2C63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C63A8u;
    // 0x2c63ac: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C63A8u, 0x2C63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63B0u;
label_2c63b0:
    // 0x2c63b0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2c63b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_2c63b4:
    // 0x2c63b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c63b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c63b8:
    // 0x2c63b8: 0x26c21770  addiu       $v0, $s6, 0x1770
    ctx->pc = 0x2c63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6000));
label_2c63bc:
    // 0x2c63bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c63c0:
    // 0x2c63c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c63c4:
    // 0x2c63c4: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2c63c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_2c63c8:
    // 0x2c63c8: 0xc136b24  jal         func_4DAC90
label_2c63cc:
    if (ctx->pc == 0x2C63CCu) {
        ctx->pc = 0x2C63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63C8u;
        // 0x2c63cc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63D0u;
        goto label_2c63d0;
    }
    ctx->pc = 0x2C63C8u;
    SET_GPR_U32(ctx, 31, 0x2C63D0u);
    ctx->pc = 0x2C63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C63C8u;
    // 0x2c63cc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C63C8u, 0x2C63D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63D0u;
label_2c63d0:
    // 0x2c63d0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2c63d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c63d4:
    // 0x2c63d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c63d8:
    // 0x2c63d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c63d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c63dc:
    // 0x2c63dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c63dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c63e0:
    // 0x2c63e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c63e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c63e4:
    // 0x2c63e4: 0xc136b24  jal         func_4DAC90
label_2c63e8:
    if (ctx->pc == 0x2C63E8u) {
        ctx->pc = 0x2C63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63E4u;
        // 0x2c63e8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C63ECu;
        goto label_2c63ec;
    }
    ctx->pc = 0x2C63E4u;
    SET_GPR_U32(ctx, 31, 0x2C63ECu);
    ctx->pc = 0x2C63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C63E4u;
    // 0x2c63e8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C63E4u, 0x2C63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63ECu;
label_2c63ec:
    // 0x2c63ec: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2c63ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c63f0:
    // 0x2c63f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c63f4:
    // 0x2c63f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c63f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c63f8:
    // 0x2c63f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c63f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2c63fc:
    // 0x2c63fc: 0xc136b18  jal         func_4DAC60
label_2c6400:
    if (ctx->pc == 0x2C6400u) {
        ctx->pc = 0x2C6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63FCu;
        // 0x2c6400: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6404u;
        goto label_2c6404;
    }
    ctx->pc = 0x2C63FCu;
    SET_GPR_U32(ctx, 31, 0x2C6404u);
    ctx->pc = 0x2C6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C63FCu;
    // 0x2c6400: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2C63FCu, 0x2C6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6404u;
label_2c6404:
    // 0x2c6404: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2c6404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c6408:
    // 0x2c6408: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c6408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c640c:
    // 0x2c640c: 0xc0a367c  jal         func_28D9F0
label_2c6410:
    if (ctx->pc == 0x2C6410u) {
        ctx->pc = 0x2C6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C640Cu;
        // 0x2c6410: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6414u;
        goto label_2c6414;
    }
    ctx->pc = 0x2C640Cu;
    SET_GPR_U32(ctx, 31, 0x2C6414u);
    ctx->pc = 0x2C6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C640Cu;
    // 0x2c6410: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C640Cu, 0x2C6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6414u;
label_2c6414:
    // 0x2c6414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6418:
    // 0x2c6418: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2c641c:
    if (ctx->pc == 0x2C641Cu) {
        ctx->pc = 0x2C641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6418u;
        // 0x2c641c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6420u;
        goto label_2c6420;
    }
    ctx->pc = 0x2C6418u;
    {
        const bool branch_taken_0x2c6418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6418u;
        // 0x2c641c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6418) {
            ctx->pc = 0x2C644Cu;
            goto label_2c644c;
        }
    }
    ctx->pc = 0x2C6420u;
label_2c6420:
    // 0x2c6420: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c6420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6424:
    // 0x2c6424: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c6424u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c6428:
    // 0x2c6428: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c642c:
    // 0x2c642c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2c642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2c6430:
    // 0x2c6430: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2c6430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2c6434:
    // 0x2c6434: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c6438:
    // 0x2c6438: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c6438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c643c:
    // 0x2c643c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c643cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6440:
    // 0x2c6440: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c6440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6444:
    // 0x2c6444: 0xc0bee7a  jal         func_2FB9E8
label_2c6448:
    if (ctx->pc == 0x2C6448u) {
        ctx->pc = 0x2C6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6444u;
        // 0x2c6448: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C644Cu;
        goto label_2c644c;
    }
    ctx->pc = 0x2C6444u;
    SET_GPR_U32(ctx, 31, 0x2C644Cu);
    ctx->pc = 0x2C6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6444u;
    // 0x2c6448: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C6444u, 0x2C644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C644Cu;
label_2c644c:
    // 0x2c644c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2c6450:
    // 0x2c6450: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2c6454:
    if (ctx->pc == 0x2C6454u) {
        ctx->pc = 0x2C6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6450u;
        // 0x2c6454: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6458u;
        goto label_2c6458;
    }
    ctx->pc = 0x2C6450u;
    {
        const bool branch_taken_0x2c6450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c6450) {
            ctx->pc = 0x2C6454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6450u;
            // 0x2c6454: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6464u;
            goto label_2c6464;
        }
    }
    ctx->pc = 0x2C6458u;
label_2c6458:
    // 0x2c6458: 0xc0a3e2e  jal         func_28F8B8
label_2c645c:
    if (ctx->pc == 0x2C645Cu) {
        ctx->pc = 0x2C645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6458u;
        // 0x2c645c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6460u;
        goto label_2c6460;
    }
    ctx->pc = 0x2C6458u;
    SET_GPR_U32(ctx, 31, 0x2C6460u);
    ctx->pc = 0x2C645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6458u;
    // 0x2c645c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B8u, 0x2C6458u, 0x2C6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6460u;
label_2c6460:
    // 0x2c6460: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2c6460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c6464:
    // 0x2c6464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6468:
    // 0x2c6468: 0x5462004f  bnel        $v1, $v0, . + 4 + (0x4F << 2)
label_2c646c:
    if (ctx->pc == 0x2C646Cu) {
        ctx->pc = 0x2C646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6468u;
        // 0x2c646c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6470u;
        goto label_2c6470;
    }
    ctx->pc = 0x2C6468u;
    {
        const bool branch_taken_0x2c6468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6468) {
            ctx->pc = 0x2C646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6468u;
            // 0x2c646c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65A8u;
            goto label_2c65a8;
        }
    }
    ctx->pc = 0x2C6470u;
label_2c6470:
    // 0x2c6470: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c6474:
    // 0x2c6474: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2c6474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2c6478:
    // 0x2c6478: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2c6478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2c647c:
    // 0x2c647c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c6480:
    // 0x2c6480: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c6480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c6484:
    // 0x2c6484: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c6484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6488:
    // 0x2c6488: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c648c:
    // 0x2c648c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c648cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6490:
    // 0x2c6490: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c6490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c6494:
    // 0x2c6494: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2c6494u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c6498:
    // 0x2c6498: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c6498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c649c:
    // 0x2c649c: 0xc136afa  jal         func_4DABE8
label_2c64a0:
    if (ctx->pc == 0x2C64A0u) {
        ctx->pc = 0x2C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C649Cu;
        // 0x2c64a0: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64A4u;
        goto label_2c64a4;
    }
    ctx->pc = 0x2C649Cu;
    SET_GPR_U32(ctx, 31, 0x2C64A4u);
    ctx->pc = 0x2C64A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C649Cu;
    // 0x2c64a0: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C649Cu, 0x2C64A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64A4u;
label_2c64a4:
    // 0x2c64a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2c64a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c64a8:
    // 0x2c64a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c64ac:
    // 0x2c64ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c64acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c64b0:
    // 0x2c64b0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c64b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c64b4:
    // 0x2c64b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c64b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c64b8:
    // 0x2c64b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c64b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c64bc:
    // 0x2c64bc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2c64bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2c64c0:
    // 0x2c64c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c64c0u;
    // VWAITQ (Q already resolved in this runtime)
label_2c64c4:
    // 0x2c64c4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2c64c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c64c8:
    // 0x2c64c8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c64c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c64cc:
    // 0x2c64cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c64ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c64d0:
    // 0x2c64d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c64d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c64d4:
    // 0x2c64d4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2c64d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c64d8:
    // 0x2c64d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c64d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c64dc:
    // 0x2c64dc: 0x0  nop
    ctx->pc = 0x2c64dcu;
    // NOP
label_2c64e0:
    // 0x2c64e0: 0x0  nop
    ctx->pc = 0x2c64e0u;
    // NOP
label_2c64e4:
    // 0x2c64e4: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2c64e4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_2c64e8:
    // 0x2c64e8: 0xc136b24  jal         func_4DAC90
label_2c64ec:
    if (ctx->pc == 0x2C64ECu) {
        ctx->pc = 0x2C64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64E8u;
        // 0x2c64ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C64F0u;
        goto label_2c64f0;
    }
    ctx->pc = 0x2C64E8u;
    SET_GPR_U32(ctx, 31, 0x2C64F0u);
    ctx->pc = 0x2C64ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64E8u;
    // 0x2c64ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C64E8u, 0x2C64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F0u;
label_2c64f0:
    // 0x2c64f0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2c64f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_2c64f4:
    // 0x2c64f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c64f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c64f8:
    // 0x2c64f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c64fc:
    // 0x2c64fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2c64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c6500:
    // 0x2c6500: 0xc136b24  jal         func_4DAC90
label_2c6504:
    if (ctx->pc == 0x2C6504u) {
        ctx->pc = 0x2C6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6500u;
        // 0x2c6504: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6508u;
        goto label_2c6508;
    }
    ctx->pc = 0x2C6500u;
    SET_GPR_U32(ctx, 31, 0x2C6508u);
    ctx->pc = 0x2C6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6500u;
    // 0x2c6504: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C6500u, 0x2C6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6508u;
label_2c6508:
    // 0x2c6508: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c6508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c650c:
    // 0x2c650c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c6510:
    // 0x2c6510: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c6510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6514:
    // 0x2c6514: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c6514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2c6518:
    // 0x2c6518: 0xc136b18  jal         func_4DAC60
label_2c651c:
    if (ctx->pc == 0x2C651Cu) {
        ctx->pc = 0x2C651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6518u;
        // 0x2c651c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6520u;
        goto label_2c6520;
    }
    ctx->pc = 0x2C6518u;
    SET_GPR_U32(ctx, 31, 0x2C6520u);
    ctx->pc = 0x2C651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6518u;
    // 0x2c651c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2C6518u, 0x2C6520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6520u;
label_2c6520:
    // 0x2c6520: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c6520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6524:
    // 0x2c6524: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c6524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6528:
    // 0x2c6528: 0xc0a367c  jal         func_28D9F0
label_2c652c:
    if (ctx->pc == 0x2C652Cu) {
        ctx->pc = 0x2C652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6528u;
        // 0x2c652c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6530u;
        goto label_2c6530;
    }
    ctx->pc = 0x2C6528u;
    SET_GPR_U32(ctx, 31, 0x2C6530u);
    ctx->pc = 0x2C652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6528u;
    // 0x2c652c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C6528u, 0x2C6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6530u;
label_2c6530:
    // 0x2c6530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6534:
    // 0x2c6534: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2c6538:
    if (ctx->pc == 0x2C6538u) {
        ctx->pc = 0x2C6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6534u;
        // 0x2c6538: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C653Cu;
        goto label_2c653c;
    }
    ctx->pc = 0x2C6534u;
    {
        const bool branch_taken_0x2c6534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6534u;
        // 0x2c6538: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6534) {
            ctx->pc = 0x2C6568u;
            goto label_2c6568;
        }
    }
    ctx->pc = 0x2C653Cu;
label_2c653c:
    // 0x2c653c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c653cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6540:
    // 0x2c6540: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c6540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c6544:
    // 0x2c6544: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c6544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c6548:
    // 0x2c6548: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2c6548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_2c654c:
    // 0x2c654c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2c654cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_2c6550:
    // 0x2c6550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c6554:
    // 0x2c6554: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c6554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6558:
    // 0x2c6558: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c655c:
    // 0x2c655c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c655cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6560:
    // 0x2c6560: 0xc0bee7a  jal         func_2FB9E8
label_2c6564:
    if (ctx->pc == 0x2C6564u) {
        ctx->pc = 0x2C6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6560u;
        // 0x2c6564: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6568u;
        goto label_2c6568;
    }
    ctx->pc = 0x2C6560u;
    SET_GPR_U32(ctx, 31, 0x2C6568u);
    ctx->pc = 0x2C6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6560u;
    // 0x2c6564: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C6560u, 0x2C6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6568u;
label_2c6568:
    // 0x2c6568: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c656c:
    // 0x2c656c: 0x26c22710  addiu       $v0, $s6, 0x2710
    ctx->pc = 0x2c656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 10000));
label_2c6570:
    // 0x2c6570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c6574:
    // 0x2c6574: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2c6574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2c6578:
    // 0x2c6578: 0xc0a36c8  jal         func_28DB20
label_2c657c:
    if (ctx->pc == 0x2C657Cu) {
        ctx->pc = 0x2C657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6578u;
        // 0x2c657c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6580u;
        goto label_2c6580;
    }
    ctx->pc = 0x2C6578u;
    SET_GPR_U32(ctx, 31, 0x2C6580u);
    ctx->pc = 0x2C657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6578u;
    // 0x2c657c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C6578u, 0x2C6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6580u;
label_2c6580:
    // 0x2c6580: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c6584:
    // 0x2c6584: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c6584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c6588:
    // 0x2c6588: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c658c:
    // 0x2c658c: 0x40f809  jalr        $v0
label_2c6590:
    if (ctx->pc == 0x2C6590u) {
        ctx->pc = 0x2C6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C658Cu;
        // 0x2c6590: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6594u;
        goto label_2c6594;
    }
    ctx->pc = 0x2C658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6594u);
        ctx->pc = 0x2C6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C658Cu;
        // 0x2c6590: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C658Cu, 0x2C6594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6594u;
label_2c6594:
    // 0x2c6594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6598:
    // 0x2c6598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c659c:
    // 0x2c659c: 0xc0b16be  jal         func_2C5AF8
label_2c65a0:
    if (ctx->pc == 0x2C65A0u) {
        ctx->pc = 0x2C65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C659Cu;
        // 0x2c65a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65A4u;
        goto label_2c65a4;
    }
    ctx->pc = 0x2C659Cu;
    SET_GPR_U32(ctx, 31, 0x2C65A4u);
    ctx->pc = 0x2C65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C659Cu;
    // 0x2c65a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AF8u, 0x2C659Cu, 0x2C65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65A4u;
label_2c65a4:
    // 0x2c65a4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2c65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c65a8:
    // 0x2c65a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c65ac:
    // 0x2c65ac: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
label_2c65b0:
    if (ctx->pc == 0x2C65B0u) {
        ctx->pc = 0x2C65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65ACu;
        // 0x2c65b0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65B4u;
        goto label_2c65b4;
    }
    ctx->pc = 0x2C65ACu;
    {
        const bool branch_taken_0x2c65ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c65ac) {
            ctx->pc = 0x2C65B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65ACu;
            // 0x2c65b0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6684u;
            goto label_2c6684;
        }
    }
    ctx->pc = 0x2C65B4u;
label_2c65b4:
    // 0x2c65b4: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x2c65b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2c65b8:
    // 0x2c65b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2c65bc:
    if (ctx->pc == 0x2C65BCu) {
        ctx->pc = 0x2C65C0u;
        goto label_2c65c0;
    }
    ctx->pc = 0x2C65B8u;
    {
        const bool branch_taken_0x2c65b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65b8) {
            ctx->pc = 0x2C6624u;
            goto label_2c6624;
        }
    }
    ctx->pc = 0x2C65C0u;
label_2c65c0:
    // 0x2c65c0: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x2c65c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2c65c4:
    // 0x2c65c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2c65c8:
    if (ctx->pc == 0x2C65C8u) {
        ctx->pc = 0x2C65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65C4u;
        // 0x2c65c8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65CCu;
        goto label_2c65cc;
    }
    ctx->pc = 0x2C65C4u;
    {
        const bool branch_taken_0x2c65c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65C4u;
        // 0x2c65c8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65c4) {
            ctx->pc = 0x2C6624u;
            goto label_2c6624;
        }
    }
    ctx->pc = 0x2C65CCu;
label_2c65cc:
    // 0x2c65cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c65ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c65d0:
    // 0x2c65d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c65d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c65d4:
    // 0x2c65d4: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2c65d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2c65d8:
    // 0x2c65d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c65d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c65dc:
    // 0x2c65dc: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x2c65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_2c65e0:
    // 0x2c65e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c65e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c65e4:
    // 0x2c65e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c65e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c65e8:
    // 0x2c65e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c65e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c65ec:
    // 0x2c65ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c65ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c65f0:
    // 0x2c65f0: 0xc088178  jal         func_2205E0
label_2c65f4:
    if (ctx->pc == 0x2C65F4u) {
        ctx->pc = 0x2C65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F0u;
        // 0x2c65f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C65F8u;
        goto label_2c65f8;
    }
    ctx->pc = 0x2C65F0u;
    SET_GPR_U32(ctx, 31, 0x2C65F8u);
    ctx->pc = 0x2C65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C65F0u;
    // 0x2c65f4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C65F0u, 0x2C65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65F8u;
label_2c65f8:
    // 0x2c65f8: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2c65f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2c65fc:
    // 0x2c65fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c65fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c6600:
    // 0x2c6600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c6600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6604:
    // 0x2c6604: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_2c6608:
    // 0x2c6608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c660c:
    // 0x2c660c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6610:
    // 0x2c6610: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6614:
    // 0x2c6614: 0xc088178  jal         func_2205E0
label_2c6618:
    if (ctx->pc == 0x2C6618u) {
        ctx->pc = 0x2C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6614u;
        // 0x2c6618: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C661Cu;
        goto label_2c661c;
    }
    ctx->pc = 0x2C6614u;
    SET_GPR_U32(ctx, 31, 0x2C661Cu);
    ctx->pc = 0x2C6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6614u;
    // 0x2c6618: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C6614u, 0x2C661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C661Cu;
label_2c661c:
    // 0x2c661c: 0x10000017  b           . + 4 + (0x17 << 2)
label_2c6620:
    if (ctx->pc == 0x2C6620u) {
        ctx->pc = 0x2C6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C661Cu;
        // 0x2c6620: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6624u;
        goto label_2c6624;
    }
    ctx->pc = 0x2C661Cu;
    {
        const bool branch_taken_0x2c661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C661Cu;
        // 0x2c6620: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c661c) {
            ctx->pc = 0x2C667Cu;
            goto label_2c667c;
        }
    }
    ctx->pc = 0x2C6624u;
label_2c6624:
    // 0x2c6624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c6628:
    // 0x2c6628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c6628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c662c:
    // 0x2c662c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2c662cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2c6630:
    // 0x2c6630: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2c6630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2c6634:
    // 0x2c6634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6638:
    // 0x2c6638: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2c6638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2c663c:
    // 0x2c663c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c663cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6640:
    // 0x2c6640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6644:
    // 0x2c6644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c6648:
    // 0x2c6648: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c664c:
    // 0x2c664c: 0xc088178  jal         func_2205E0
label_2c6650:
    if (ctx->pc == 0x2C6650u) {
        ctx->pc = 0x2C6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C664Cu;
        // 0x2c6650: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6654u;
        goto label_2c6654;
    }
    ctx->pc = 0x2C664Cu;
    SET_GPR_U32(ctx, 31, 0x2C6654u);
    ctx->pc = 0x2C6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C664Cu;
    // 0x2c6650: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C664Cu, 0x2C6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6654u;
label_2c6654:
    // 0x2c6654: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2c6654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2c6658:
    // 0x2c6658: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6658u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c665c:
    // 0x2c665c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6660:
    // 0x2c6660: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x2c6660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_2c6664:
    // 0x2c6664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6668:
    // 0x2c6668: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c666c:
    // 0x2c666c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c666cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6670:
    // 0x2c6670: 0xc088178  jal         func_2205E0
label_2c6674:
    if (ctx->pc == 0x2C6674u) {
        ctx->pc = 0x2C6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6670u;
        // 0x2c6674: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6678u;
        goto label_2c6678;
    }
    ctx->pc = 0x2C6670u;
    SET_GPR_U32(ctx, 31, 0x2C6678u);
    ctx->pc = 0x2C6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6670u;
    // 0x2c6674: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C6670u, 0x2C6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6678u;
label_2c6678:
    // 0x2c6678: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c6678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2c667c:
    // 0x2c667c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c667cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2c6680:
    // 0x2c6680: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6684:
    // 0x2c6684: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c6684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c6688:
    // 0x2c6688: 0x1c600080  bgtz        $v1, . + 4 + (0x80 << 2)
label_2c668c:
    if (ctx->pc == 0x2C668Cu) {
        ctx->pc = 0x2C668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6688u;
        // 0x2c668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6690u;
        goto label_2c6690;
    }
    ctx->pc = 0x2C6688u;
    {
        const bool branch_taken_0x2c6688 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2C668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6688u;
        // 0x2c668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6688) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C6690u;
label_2c6690:
    // 0x2c6690: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2c6690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c6694:
    // 0x2c6694: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2c6698:
    // 0x2c6698: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_2c669c:
    if (ctx->pc == 0x2C669Cu) {
        ctx->pc = 0x2C669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6698u;
        // 0x2c669c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66A0u;
        goto label_2c66a0;
    }
    ctx->pc = 0x2C6698u;
    {
        const bool branch_taken_0x2c6698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6698) {
            ctx->pc = 0x2C669Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6698u;
            // 0x2c669c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C66B0u;
            goto label_2c66b0;
        }
    }
    ctx->pc = 0x2C66A0u;
label_2c66a0:
    // 0x2c66a0: 0x8282002e  lb          $v0, 0x2E($s4)
    ctx->pc = 0x2c66a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
label_2c66a4:
    // 0x2c66a4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2c66a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_2c66a8:
    // 0x2c66a8: 0x10000078  b           . + 4 + (0x78 << 2)
label_2c66ac:
    if (ctx->pc == 0x2C66ACu) {
        ctx->pc = 0x2C66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66A8u;
        // 0x2c66ac: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66B0u;
        goto label_2c66b0;
    }
    ctx->pc = 0x2C66A8u;
    {
        const bool branch_taken_0x2c66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66A8u;
        // 0x2c66ac: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66a8) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C66B0u;
label_2c66b0:
    // 0x2c66b0: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2c66b4:
    if (ctx->pc == 0x2C66B4u) {
        ctx->pc = 0x2C66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66B0u;
        // 0x2c66b4: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66B8u;
        goto label_2c66b8;
    }
    ctx->pc = 0x2C66B0u;
    {
        const bool branch_taken_0x2c66b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c66b0) {
            ctx->pc = 0x2C66B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C66B0u;
            // 0x2c66b4: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6718u;
            goto label_2c6718;
        }
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2c66b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c66bc:
    // 0x2c66bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c66c0:
    // 0x2c66c0: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c66c4:
    // 0x2c66c4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c66c8:
    // 0x2c66c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2c66cc:
    // 0x2c66cc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2c66ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2c66d0:
    // 0x2c66d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c66d4:
    // 0x2c66d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c66d8:
    // 0x2c66d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c66d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c66dc:
    // 0x2c66dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c66e0:
    // 0x2c66e0: 0x40f809  jalr        $v0
label_2c66e4:
    if (ctx->pc == 0x2C66E4u) {
        ctx->pc = 0x2C66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66E0u;
        // 0x2c66e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66E8u;
        goto label_2c66e8;
    }
    ctx->pc = 0x2C66E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C66E8u);
        ctx->pc = 0x2C66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66E0u;
        // 0x2c66e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C66E0u, 0x2C66E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C66E8u;
label_2c66e8:
    // 0x2c66e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c66e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c66ec:
    // 0x2c66ec: 0xc0884f6  jal         func_2213D8
label_2c66f0:
    if (ctx->pc == 0x2C66F0u) {
        ctx->pc = 0x2C66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66ECu;
        // 0x2c66f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C66F4u;
        goto label_2c66f4;
    }
    ctx->pc = 0x2C66ECu;
    SET_GPR_U32(ctx, 31, 0x2C66F4u);
    ctx->pc = 0x2C66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C66ECu;
    // 0x2c66f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C66ECu, 0x2C66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66F4u;
label_2c66f4:
    // 0x2c66f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c66f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c66f8:
    // 0x2c66f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c66f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c66fc:
    // 0x2c66fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c66fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c6700:
    // 0x2c6700: 0xc0bf7dc  jal         func_2FDF70
label_2c6704:
    if (ctx->pc == 0x2C6704u) {
        ctx->pc = 0x2C6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6700u;
        // 0x2c6704: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6708u;
        goto label_2c6708;
    }
    ctx->pc = 0x2C6700u;
    SET_GPR_U32(ctx, 31, 0x2C6708u);
    ctx->pc = 0x2C6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6700u;
    // 0x2c6704: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x2C6700u, 0x2C6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6708u;
label_2c6708:
    // 0x2c6708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c6708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c670c:
    // 0x2c670c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2c670cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2c6710:
    // 0x2c6710: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c6710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2c6714:
    // 0x2c6714: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2c6714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c6718:
    // 0x2c6718: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c671c:
    // 0x2c671c: 0x1602005b  bne         $s0, $v0, . + 4 + (0x5B << 2)
label_2c6720:
    if (ctx->pc == 0x2C6720u) {
        ctx->pc = 0x2C6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C671Cu;
        // 0x2c6720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6724u;
        goto label_2c6724;
    }
    ctx->pc = 0x2C671Cu;
    {
        const bool branch_taken_0x2c671c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C671Cu;
        // 0x2c6720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c671c) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C6724u;
label_2c6724:
    // 0x2c6724: 0x8222001f  lb          $v0, 0x1F($s1)
    ctx->pc = 0x2c6724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_2c6728:
    // 0x2c6728: 0x4400056  bltz        $v0, . + 4 + (0x56 << 2)
label_2c672c:
    if (ctx->pc == 0x2C672Cu) {
        ctx->pc = 0x2C672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6728u;
        // 0x2c672c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6730u;
        goto label_2c6730;
    }
    ctx->pc = 0x2C6728u;
    {
        const bool branch_taken_0x2c6728 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6728u;
        // 0x2c672c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6728) {
            ctx->pc = 0x2C6884u;
            goto label_2c6884;
        }
    }
    ctx->pc = 0x2C6730u;
label_2c6730:
    // 0x2c6730: 0x82a2001f  lb          $v0, 0x1F($s5)
    ctx->pc = 0x2c6730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 31)));
label_2c6734:
    // 0x2c6734: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
label_2c6738:
    if (ctx->pc == 0x2C6738u) {
        ctx->pc = 0x2C6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6734u;
        // 0x2c6738: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C673Cu;
        goto label_2c673c;
    }
    ctx->pc = 0x2C6734u;
    {
        const bool branch_taken_0x2c6734 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6734u;
        // 0x2c6738: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6734) {
            ctx->pc = 0x2C6884u;
            goto label_2c6884;
        }
    }
    ctx->pc = 0x2C673Cu;
label_2c673c:
    // 0x2c673c: 0x8282002e  lb          $v0, 0x2E($s4)
    ctx->pc = 0x2c673cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 46)));
label_2c6740:
    // 0x2c6740: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
label_2c6744:
    if (ctx->pc == 0x2C6744u) {
        ctx->pc = 0x2C6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6740u;
        // 0x2c6744: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6748u;
        goto label_2c6748;
    }
    ctx->pc = 0x2C6740u;
    {
        const bool branch_taken_0x2c6740 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6740) {
            ctx->pc = 0x2C6744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6740u;
            // 0x2c6744: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6774u;
            goto label_2c6774;
        }
    }
    ctx->pc = 0x2C6748u;
label_2c6748:
    // 0x2c6748: 0xc0a36c2  jal         func_28DB08
label_2c674c:
    if (ctx->pc == 0x2C674Cu) {
        ctx->pc = 0x2C674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6748u;
        // 0x2c674c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6750u;
        goto label_2c6750;
    }
    ctx->pc = 0x2C6748u;
    SET_GPR_U32(ctx, 31, 0x2C6750u);
    ctx->pc = 0x2C674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6748u;
    // 0x2c674c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2C6748u, 0x2C6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6750u;
label_2c6750:
    // 0x2c6750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c6750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c6754:
    // 0x2c6754: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6758:
    // 0x2c6758: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2c6758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c675c:
    // 0x2c675c: 0xa0f809  jalr        $a1
label_2c6760:
    if (ctx->pc == 0x2C6760u) {
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6764u;
        goto label_2c6764;
    }
    ctx->pc = 0x2C675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C6764u);
        ctx->pc = 0x2C6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C675Cu;
        // 0x2c6760: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C675Cu, 0x2C6764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6764u;
label_2c6764:
    // 0x2c6764: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2c6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c6768:
    // 0x2c6768: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_2c676c:
    if (ctx->pc == 0x2C676Cu) {
        ctx->pc = 0x2C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6768u;
        // 0x2c676c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6770u;
        goto label_2c6770;
    }
    ctx->pc = 0x2C6768u;
    {
        const bool branch_taken_0x2c6768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6768u;
        // 0x2c676c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6768) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C6770u;
label_2c6770:
    // 0x2c6770: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2c6770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c6774:
    // 0x2c6774: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c6774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c6778:
    // 0x2c6778: 0x86660092  lh          $a2, 0x92($s3)
    ctx->pc = 0x2c6778u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2c677c:
    // 0x2c677c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c6780:
    // 0x2c6780: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c6780u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c6784:
    // 0x2c6784: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c6784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c6788:
    // 0x2c6788: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2c678c:
    // 0x2c678c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2c6790:
    // 0x2c6790: 0xc136afa  jal         func_4DABE8
label_2c6794:
    if (ctx->pc == 0x2C6794u) {
        ctx->pc = 0x2C6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6790u;
        // 0x2c6794: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6798u;
        goto label_2c6798;
    }
    ctx->pc = 0x2C6790u;
    SET_GPR_U32(ctx, 31, 0x2C6798u);
    ctx->pc = 0x2C6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6790u;
    // 0x2c6794: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C6790u, 0x2C6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6798u;
label_2c6798:
    // 0x2c6798: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2c6798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c679c:
    // 0x2c679c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c679cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c67a0:
    // 0x2c67a0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c67a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c67a4:
    // 0x2c67a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c67a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c67a8:
    // 0x2c67a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c67a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c67ac:
    // 0x2c67ac: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c67acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c67b0:
    // 0x2c67b0: 0x3c013fc8  lui         $at, 0x3FC8
    ctx->pc = 0x2c67b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16328 << 16));
label_2c67b4:
    // 0x2c67b4: 0x342100d2  ori         $at, $at, 0xD2
    ctx->pc = 0x2c67b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)210);
label_2c67b8:
    // 0x2c67b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c67b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c67bc:
    // 0x2c67bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c67bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c67c0:
    // 0x2c67c0: 0x0  nop
    ctx->pc = 0x2c67c0u;
    // NOP
label_2c67c4:
    // 0x2c67c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c67c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c67c8:
    // 0x2c67c8: 0x0  nop
    ctx->pc = 0x2c67c8u;
    // NOP
label_2c67cc:
    // 0x2c67cc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2c67d0:
    if (ctx->pc == 0x2C67D0u) {
        ctx->pc = 0x2C67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67CCu;
        // 0x2c67d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67D4u;
        goto label_2c67d4;
    }
    ctx->pc = 0x2C67CCu;
    {
        const bool branch_taken_0x2c67cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67CCu;
        // 0x2c67d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67cc) {
            ctx->pc = 0x2C67FCu;
            goto label_2c67fc;
        }
    }
    ctx->pc = 0x2C67D4u;
label_2c67d4:
    // 0x2c67d4: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x2c67d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2c67d8:
    // 0x2c67d8: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2c67d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2c67dc:
    // 0x2c67dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c67e0:
    if (ctx->pc == 0x2C67E0u) {
        ctx->pc = 0x2C67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67DCu;
        // 0x2c67e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67E4u;
        goto label_2c67e4;
    }
    ctx->pc = 0x2C67DCu;
    {
        const bool branch_taken_0x2c67dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67DCu;
        // 0x2c67e0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67dc) {
            ctx->pc = 0x2C67ECu;
            goto label_2c67ec;
        }
    }
    ctx->pc = 0x2C67E4u;
label_2c67e4:
    // 0x2c67e4: 0x10000029  b           . + 4 + (0x29 << 2)
label_2c67e8:
    if (ctx->pc == 0x2C67E8u) {
        ctx->pc = 0x2C67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67E4u;
        // 0x2c67e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67ECu;
        goto label_2c67ec;
    }
    ctx->pc = 0x2C67E4u;
    {
        const bool branch_taken_0x2c67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67E4u;
        // 0x2c67e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67e4) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C67ECu;
label_2c67ec:
    // 0x2c67ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c67f0:
    // 0x2c67f0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2c67f4:
    // 0x2c67f4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2c67f8:
    if (ctx->pc == 0x2C67F8u) {
        ctx->pc = 0x2C67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67F4u;
        // 0x2c67f8: 0xa223001e  sb          $v1, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67FCu;
        goto label_2c67fc;
    }
    ctx->pc = 0x2C67F4u;
    {
        const bool branch_taken_0x2c67f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67F4u;
        // 0x2c67f8: 0xa223001e  sb          $v1, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67f4) {
            ctx->pc = 0x2C6888u;
            goto label_2c6888;
        }
    }
    ctx->pc = 0x2C67FCu;
label_2c67fc:
    // 0x2c67fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6800:
    // 0x2c6800: 0xc088680  jal         func_221A00
label_2c6804:
    if (ctx->pc == 0x2C6804u) {
        ctx->pc = 0x2C6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6800u;
        // 0x2c6804: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6808u;
        goto label_2c6808;
    }
    ctx->pc = 0x2C6800u;
    SET_GPR_U32(ctx, 31, 0x2C6808u);
    ctx->pc = 0x2C6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6800u;
    // 0x2c6804: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2C6800u, 0x2C6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6808u;
label_2c6808:
    // 0x2c6808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c680c:
    if (ctx->pc == 0x2C680Cu) {
        ctx->pc = 0x2C680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6808u;
        // 0x2c680c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6810u;
        goto label_2c6810;
    }
    ctx->pc = 0x2C6808u;
    {
        const bool branch_taken_0x2c6808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6808u;
        // 0x2c680c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6808) {
            ctx->pc = 0x2C6820u;
            goto label_2c6820;
        }
    }
    ctx->pc = 0x2C6810u;
label_2c6810:
    // 0x2c6810: 0xc088680  jal         func_221A00
label_2c6814:
    if (ctx->pc == 0x2C6814u) {
        ctx->pc = 0x2C6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6810u;
        // 0x2c6814: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6818u;
        goto label_2c6818;
    }
    ctx->pc = 0x2C6810u;
    SET_GPR_U32(ctx, 31, 0x2C6818u);
    ctx->pc = 0x2C6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6810u;
    // 0x2c6814: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2C6810u, 0x2C6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6818u;
label_2c6818:
    // 0x2c6818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c681c:
    if (ctx->pc == 0x2C681Cu) {
        ctx->pc = 0x2C681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6818u;
        // 0x2c681c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6820u;
        goto label_2c6820;
    }
    ctx->pc = 0x2C6818u;
    {
        const bool branch_taken_0x2c6818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6818u;
        // 0x2c681c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6818) {
            ctx->pc = 0x2C6838u;
            goto label_2c6838;
        }
    }
    ctx->pc = 0x2C6820u;
label_2c6820:
    // 0x2c6820: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2c6820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2c6824:
    // 0x2c6824: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2c6828:
    if (ctx->pc == 0x2C6828u) {
        ctx->pc = 0x2C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6824u;
        // 0x2c6828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C682Cu;
        goto label_2c682c;
    }
    ctx->pc = 0x2C6824u;
    {
        const bool branch_taken_0x2c6824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6824u;
        // 0x2c6828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6824) {
            ctx->pc = 0x2C688Cu;
            goto label_2c688c;
        }
    }
    ctx->pc = 0x2C682Cu;
label_2c682c:
    // 0x2c682c: 0x26c209c4  addiu       $v0, $s6, 0x9C4
    ctx->pc = 0x2c682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2500));
label_2c6830:
    // 0x2c6830: 0x10000015  b           . + 4 + (0x15 << 2)
label_2c6834:
    if (ctx->pc == 0x2C6834u) {
        ctx->pc = 0x2C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6830u;
        // 0x2c6834: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6838u;
        goto label_2c6838;
    }
    ctx->pc = 0x2C6830u;
    {
        const bool branch_taken_0x2c6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6830u;
        // 0x2c6834: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6830) {
            ctx->pc = 0x2C6888u;
            goto label_2c6888;
        }
    }
    ctx->pc = 0x2C6838u;
label_2c6838:
    // 0x2c6838: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c6838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c683c:
    // 0x2c683c: 0xc0a367c  jal         func_28D9F0
label_2c6840:
    if (ctx->pc == 0x2C6840u) {
        ctx->pc = 0x2C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C683Cu;
        // 0x2c6840: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6844u;
        goto label_2c6844;
    }
    ctx->pc = 0x2C683Cu;
    SET_GPR_U32(ctx, 31, 0x2C6844u);
    ctx->pc = 0x2C6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C683Cu;
    // 0x2c6840: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C683Cu, 0x2C6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6844u;
label_2c6844:
    // 0x2c6844: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c6848:
    if (ctx->pc == 0x2C6848u) {
        ctx->pc = 0x2C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6844u;
        // 0x2c6848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C684Cu;
        goto label_2c684c;
    }
    ctx->pc = 0x2C6844u;
    {
        const bool branch_taken_0x2c6844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6844u;
        // 0x2c6848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6844) {
            ctx->pc = 0x2C686Cu;
            goto label_2c686c;
        }
    }
    ctx->pc = 0x2C684Cu;
label_2c684c:
    // 0x2c684c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6850:
    // 0x2c6850: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2c6854:
    // 0x2c6854: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c6854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c6858:
    // 0x2c6858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c685c:
    // 0x2c685c: 0x2406014e  addiu       $a2, $zero, 0x14E
    ctx->pc = 0x2c685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2c6860:
    // 0x2c6860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6864:
    // 0x2c6864: 0xc0be8c0  jal         func_2FA300
label_2c6868:
    if (ctx->pc == 0x2C6868u) {
        ctx->pc = 0x2C6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6864u;
        // 0x2c6868: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C686Cu;
        goto label_2c686c;
    }
    ctx->pc = 0x2C6864u;
    SET_GPR_U32(ctx, 31, 0x2C686Cu);
    ctx->pc = 0x2C6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6864u;
    // 0x2c6868: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C6864u, 0x2C686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C686Cu;
label_2c686c:
    // 0x2c686c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2c686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2c6870:
    // 0x2c6870: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2c6874:
    if (ctx->pc == 0x2C6874u) {
        ctx->pc = 0x2C6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6870u;
        // 0x2c6874: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6878u;
        goto label_2c6878;
    }
    ctx->pc = 0x2C6870u;
    {
        const bool branch_taken_0x2c6870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6870u;
        // 0x2c6874: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6870) {
            ctx->pc = 0x2C6884u;
            goto label_2c6884;
        }
    }
    ctx->pc = 0x2C6878u;
label_2c6878:
    // 0x2c6878: 0xc0a3e2e  jal         func_28F8B8
label_2c687c:
    if (ctx->pc == 0x2C687Cu) {
        ctx->pc = 0x2C687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6878u;
        // 0x2c687c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6880u;
        goto label_2c6880;
    }
    ctx->pc = 0x2C6878u;
    SET_GPR_U32(ctx, 31, 0x2C6880u);
    ctx->pc = 0x2C687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6878u;
    // 0x2c687c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B8u, 0x2C6878u, 0x2C6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6880u;
label_2c6880:
    // 0x2c6880: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c6884:
    // 0x2c6884: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2c6884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2c6888:
    // 0x2c6888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c688c:
    // 0x2c688c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2c688cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c6890:
    // 0x2c6890: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2c6890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c6894:
    // 0x2c6894: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2c6894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c6898:
    // 0x2c6898: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2c6898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c689c:
    // 0x2c689c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2c689cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c68a0:
    // 0x2c68a0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2c68a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c68a4:
    // 0x2c68a4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2c68a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c68a8:
    // 0x2c68a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c68a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c68ac:
    // 0x2c68ac: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c68acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c68b0:
    // 0x2c68b0: 0x3e00008  jr          $ra
label_2c68b4:
    if (ctx->pc == 0x2C68B4u) {
        ctx->pc = 0x2C68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68B0u;
        // 0x2c68b4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C68B8u;
        goto label_fallthrough_0x2c68b0;
    }
    ctx->pc = 0x2C68B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68B0u;
        // 0x2c68b4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C68B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c68b0:
    ctx->pc = 0x2C68B8u;
}
