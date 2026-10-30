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

// Function: sub_001A62C0
// Address: 0x1a62c0 - 0x1a6b80
void sub_001A62C0_0x1a62c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A62C0_0x1a62c0");
#endif

    switch (ctx->pc) {
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        case 0x1a62f8u: goto label_1a62f8;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a635cu: goto label_1a635c;
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        case 0x1a63e8u: goto label_1a63e8;
        case 0x1a63ecu: goto label_1a63ec;
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6438u: goto label_1a6438;
        case 0x1a643cu: goto label_1a643c;
        case 0x1a6440u: goto label_1a6440;
        case 0x1a6444u: goto label_1a6444;
        case 0x1a6448u: goto label_1a6448;
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6450u: goto label_1a6450;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a645cu: goto label_1a645c;
        case 0x1a6460u: goto label_1a6460;
        case 0x1a6464u: goto label_1a6464;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a646cu: goto label_1a646c;
        case 0x1a6470u: goto label_1a6470;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a6478u: goto label_1a6478;
        case 0x1a647cu: goto label_1a647c;
        case 0x1a6480u: goto label_1a6480;
        case 0x1a6484u: goto label_1a6484;
        case 0x1a6488u: goto label_1a6488;
        case 0x1a648cu: goto label_1a648c;
        case 0x1a6490u: goto label_1a6490;
        case 0x1a6494u: goto label_1a6494;
        case 0x1a6498u: goto label_1a6498;
        case 0x1a649cu: goto label_1a649c;
        case 0x1a64a0u: goto label_1a64a0;
        case 0x1a64a4u: goto label_1a64a4;
        case 0x1a64a8u: goto label_1a64a8;
        case 0x1a64acu: goto label_1a64ac;
        case 0x1a64b0u: goto label_1a64b0;
        case 0x1a64b4u: goto label_1a64b4;
        case 0x1a64b8u: goto label_1a64b8;
        case 0x1a64bcu: goto label_1a64bc;
        case 0x1a64c0u: goto label_1a64c0;
        case 0x1a64c4u: goto label_1a64c4;
        case 0x1a64c8u: goto label_1a64c8;
        case 0x1a64ccu: goto label_1a64cc;
        case 0x1a64d0u: goto label_1a64d0;
        case 0x1a64d4u: goto label_1a64d4;
        case 0x1a64d8u: goto label_1a64d8;
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64e4u: goto label_1a64e4;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a64f0u: goto label_1a64f0;
        case 0x1a64f4u: goto label_1a64f4;
        case 0x1a64f8u: goto label_1a64f8;
        case 0x1a64fcu: goto label_1a64fc;
        case 0x1a6500u: goto label_1a6500;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a6510u: goto label_1a6510;
        case 0x1a6514u: goto label_1a6514;
        case 0x1a6518u: goto label_1a6518;
        case 0x1a651cu: goto label_1a651c;
        case 0x1a6520u: goto label_1a6520;
        case 0x1a6524u: goto label_1a6524;
        case 0x1a6528u: goto label_1a6528;
        case 0x1a652cu: goto label_1a652c;
        case 0x1a6530u: goto label_1a6530;
        case 0x1a6534u: goto label_1a6534;
        case 0x1a6538u: goto label_1a6538;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a6540u: goto label_1a6540;
        case 0x1a6544u: goto label_1a6544;
        case 0x1a6548u: goto label_1a6548;
        case 0x1a654cu: goto label_1a654c;
        case 0x1a6550u: goto label_1a6550;
        case 0x1a6554u: goto label_1a6554;
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a671cu: goto label_1a671c;
        case 0x1a6720u: goto label_1a6720;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6728u: goto label_1a6728;
        case 0x1a672cu: goto label_1a672c;
        case 0x1a6730u: goto label_1a6730;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a673cu: goto label_1a673c;
        case 0x1a6740u: goto label_1a6740;
        case 0x1a6744u: goto label_1a6744;
        case 0x1a6748u: goto label_1a6748;
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6750u: goto label_1a6750;
        case 0x1a6754u: goto label_1a6754;
        case 0x1a6758u: goto label_1a6758;
        case 0x1a675cu: goto label_1a675c;
        case 0x1a6760u: goto label_1a6760;
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6768u: goto label_1a6768;
        case 0x1a676cu: goto label_1a676c;
        case 0x1a6770u: goto label_1a6770;
        case 0x1a6774u: goto label_1a6774;
        case 0x1a6778u: goto label_1a6778;
        case 0x1a677cu: goto label_1a677c;
        case 0x1a6780u: goto label_1a6780;
        case 0x1a6784u: goto label_1a6784;
        case 0x1a6788u: goto label_1a6788;
        case 0x1a678cu: goto label_1a678c;
        case 0x1a6790u: goto label_1a6790;
        case 0x1a6794u: goto label_1a6794;
        case 0x1a6798u: goto label_1a6798;
        case 0x1a679cu: goto label_1a679c;
        case 0x1a67a0u: goto label_1a67a0;
        case 0x1a67a4u: goto label_1a67a4;
        case 0x1a67a8u: goto label_1a67a8;
        case 0x1a67acu: goto label_1a67ac;
        case 0x1a67b0u: goto label_1a67b0;
        case 0x1a67b4u: goto label_1a67b4;
        case 0x1a67b8u: goto label_1a67b8;
        case 0x1a67bcu: goto label_1a67bc;
        case 0x1a67c0u: goto label_1a67c0;
        case 0x1a67c4u: goto label_1a67c4;
        case 0x1a67c8u: goto label_1a67c8;
        case 0x1a67ccu: goto label_1a67cc;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a67d4u: goto label_1a67d4;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67dcu: goto label_1a67dc;
        case 0x1a67e0u: goto label_1a67e0;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a67e8u: goto label_1a67e8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a67f0u: goto label_1a67f0;
        case 0x1a67f4u: goto label_1a67f4;
        case 0x1a67f8u: goto label_1a67f8;
        case 0x1a67fcu: goto label_1a67fc;
        case 0x1a6800u: goto label_1a6800;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6808u: goto label_1a6808;
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6810u: goto label_1a6810;
        case 0x1a6814u: goto label_1a6814;
        case 0x1a6818u: goto label_1a6818;
        case 0x1a681cu: goto label_1a681c;
        case 0x1a6820u: goto label_1a6820;
        case 0x1a6824u: goto label_1a6824;
        case 0x1a6828u: goto label_1a6828;
        case 0x1a682cu: goto label_1a682c;
        case 0x1a6830u: goto label_1a6830;
        case 0x1a6834u: goto label_1a6834;
        case 0x1a6838u: goto label_1a6838;
        case 0x1a683cu: goto label_1a683c;
        case 0x1a6840u: goto label_1a6840;
        case 0x1a6844u: goto label_1a6844;
        case 0x1a6848u: goto label_1a6848;
        case 0x1a684cu: goto label_1a684c;
        case 0x1a6850u: goto label_1a6850;
        case 0x1a6854u: goto label_1a6854;
        case 0x1a6858u: goto label_1a6858;
        case 0x1a685cu: goto label_1a685c;
        case 0x1a6860u: goto label_1a6860;
        case 0x1a6864u: goto label_1a6864;
        case 0x1a6868u: goto label_1a6868;
        case 0x1a686cu: goto label_1a686c;
        case 0x1a6870u: goto label_1a6870;
        case 0x1a6874u: goto label_1a6874;
        case 0x1a6878u: goto label_1a6878;
        case 0x1a687cu: goto label_1a687c;
        case 0x1a6880u: goto label_1a6880;
        case 0x1a6884u: goto label_1a6884;
        case 0x1a6888u: goto label_1a6888;
        case 0x1a688cu: goto label_1a688c;
        case 0x1a6890u: goto label_1a6890;
        case 0x1a6894u: goto label_1a6894;
        case 0x1a6898u: goto label_1a6898;
        case 0x1a689cu: goto label_1a689c;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68a4u: goto label_1a68a4;
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68acu: goto label_1a68ac;
        case 0x1a68b0u: goto label_1a68b0;
        case 0x1a68b4u: goto label_1a68b4;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68bcu: goto label_1a68bc;
        case 0x1a68c0u: goto label_1a68c0;
        case 0x1a68c4u: goto label_1a68c4;
        case 0x1a68c8u: goto label_1a68c8;
        case 0x1a68ccu: goto label_1a68cc;
        case 0x1a68d0u: goto label_1a68d0;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a68d8u: goto label_1a68d8;
        case 0x1a68dcu: goto label_1a68dc;
        case 0x1a68e0u: goto label_1a68e0;
        case 0x1a68e4u: goto label_1a68e4;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a68ecu: goto label_1a68ec;
        case 0x1a68f0u: goto label_1a68f0;
        case 0x1a68f4u: goto label_1a68f4;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a68fcu: goto label_1a68fc;
        case 0x1a6900u: goto label_1a6900;
        case 0x1a6904u: goto label_1a6904;
        case 0x1a6908u: goto label_1a6908;
        case 0x1a690cu: goto label_1a690c;
        case 0x1a6910u: goto label_1a6910;
        case 0x1a6914u: goto label_1a6914;
        case 0x1a6918u: goto label_1a6918;
        case 0x1a691cu: goto label_1a691c;
        case 0x1a6920u: goto label_1a6920;
        case 0x1a6924u: goto label_1a6924;
        case 0x1a6928u: goto label_1a6928;
        case 0x1a692cu: goto label_1a692c;
        case 0x1a6930u: goto label_1a6930;
        case 0x1a6934u: goto label_1a6934;
        case 0x1a6938u: goto label_1a6938;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6940u: goto label_1a6940;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6948u: goto label_1a6948;
        case 0x1a694cu: goto label_1a694c;
        case 0x1a6950u: goto label_1a6950;
        case 0x1a6954u: goto label_1a6954;
        case 0x1a6958u: goto label_1a6958;
        case 0x1a695cu: goto label_1a695c;
        case 0x1a6960u: goto label_1a6960;
        case 0x1a6964u: goto label_1a6964;
        case 0x1a6968u: goto label_1a6968;
        case 0x1a696cu: goto label_1a696c;
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a6978u: goto label_1a6978;
        case 0x1a697cu: goto label_1a697c;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6984u: goto label_1a6984;
        case 0x1a6988u: goto label_1a6988;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a6990u: goto label_1a6990;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a699cu: goto label_1a699c;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69a8u: goto label_1a69a8;
        case 0x1a69acu: goto label_1a69ac;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69b4u: goto label_1a69b4;
        case 0x1a69b8u: goto label_1a69b8;
        case 0x1a69bcu: goto label_1a69bc;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69c4u: goto label_1a69c4;
        case 0x1a69c8u: goto label_1a69c8;
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a5cu: goto label_1a6a5c;
        case 0x1a6a60u: goto label_1a6a60;
        case 0x1a6a64u: goto label_1a6a64;
        case 0x1a6a68u: goto label_1a6a68;
        case 0x1a6a6cu: goto label_1a6a6c;
        case 0x1a6a70u: goto label_1a6a70;
        case 0x1a6a74u: goto label_1a6a74;
        case 0x1a6a78u: goto label_1a6a78;
        case 0x1a6a7cu: goto label_1a6a7c;
        case 0x1a6a80u: goto label_1a6a80;
        case 0x1a6a84u: goto label_1a6a84;
        case 0x1a6a88u: goto label_1a6a88;
        case 0x1a6a8cu: goto label_1a6a8c;
        case 0x1a6a90u: goto label_1a6a90;
        case 0x1a6a94u: goto label_1a6a94;
        case 0x1a6a98u: goto label_1a6a98;
        case 0x1a6a9cu: goto label_1a6a9c;
        case 0x1a6aa0u: goto label_1a6aa0;
        case 0x1a6aa4u: goto label_1a6aa4;
        case 0x1a6aa8u: goto label_1a6aa8;
        case 0x1a6aacu: goto label_1a6aac;
        case 0x1a6ab0u: goto label_1a6ab0;
        case 0x1a6ab4u: goto label_1a6ab4;
        case 0x1a6ab8u: goto label_1a6ab8;
        case 0x1a6abcu: goto label_1a6abc;
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6ac4u: goto label_1a6ac4;
        case 0x1a6ac8u: goto label_1a6ac8;
        case 0x1a6accu: goto label_1a6acc;
        case 0x1a6ad0u: goto label_1a6ad0;
        case 0x1a6ad4u: goto label_1a6ad4;
        case 0x1a6ad8u: goto label_1a6ad8;
        case 0x1a6adcu: goto label_1a6adc;
        case 0x1a6ae0u: goto label_1a6ae0;
        case 0x1a6ae4u: goto label_1a6ae4;
        case 0x1a6ae8u: goto label_1a6ae8;
        case 0x1a6aecu: goto label_1a6aec;
        case 0x1a6af0u: goto label_1a6af0;
        case 0x1a6af4u: goto label_1a6af4;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6afcu: goto label_1a6afc;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b04u: goto label_1a6b04;
        case 0x1a6b08u: goto label_1a6b08;
        case 0x1a6b0cu: goto label_1a6b0c;
        case 0x1a6b10u: goto label_1a6b10;
        case 0x1a6b14u: goto label_1a6b14;
        case 0x1a6b18u: goto label_1a6b18;
        case 0x1a6b1cu: goto label_1a6b1c;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b24u: goto label_1a6b24;
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b2cu: goto label_1a6b2c;
        case 0x1a6b30u: goto label_1a6b30;
        case 0x1a6b34u: goto label_1a6b34;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b40u: goto label_1a6b40;
        case 0x1a6b44u: goto label_1a6b44;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b4cu: goto label_1a6b4c;
        case 0x1a6b50u: goto label_1a6b50;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b5cu: goto label_1a6b5c;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b68u: goto label_1a6b68;
        case 0x1a6b6cu: goto label_1a6b6c;
        case 0x1a6b70u: goto label_1a6b70;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b7cu: goto label_1a6b7c;
        default: break;
    }

    ctx->pc = 0x1a62c0u;

label_1a62c0:
    // 0x1a62c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a62c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a62c4:
    // 0x1a62c4: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_1a62c8:
    // 0x1a62c8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a62c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1a62cc:
    // 0x1a62cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a62ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a62d0:
    // 0x1a62d0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1a62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1a62d4:
    // 0x1a62d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a62d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a62d8:
    // 0x1a62d8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1a62d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1a62dc:
    // 0x1a62dc: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1a62dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_1a62e0:
    // 0x1a62e0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1a62e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1a62e4:
    // 0x1a62e4: 0x263106a0  addiu       $s1, $s1, 0x6A0
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
label_1a62e8:
    // 0x1a62e8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1a62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1a62ec:
    // 0x1a62ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a62f0:
    // 0x1a62f0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1a62f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1a62f4:
    // 0x1a62f4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1a62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1a62f8:
    // 0x1a62f8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1a62f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1a62fc:
    // 0x1a62fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a62fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6300:
    // 0x1a6300: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a6300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1a6304:
    // 0x1a6304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6308:
    // 0x1a6308: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1a6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1a630c:
    // 0x1a630c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6310:
    // 0x1a6310: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a6310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a6314:
    // 0x1a6314: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6318:
    // 0x1a6318: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x1a6318u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1a631c:
    // 0x1a631c: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a6320:
    // 0x1a6320: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1a6320u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1a6324:
    // 0x1a6324: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a6328:
    // 0x1a6328: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1a6328u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1a632c:
    // 0x1a632c: 0x2414006e  addiu       $s4, $zero, 0x6E
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1a6330:
    // 0x1a6330: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1a6330u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1a6334:
    // 0x1a6334: 0x2416005a  addiu       $s6, $zero, 0x5A
    ctx->pc = 0x1a6334u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a6338:
    // 0x1a6338: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1a6338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1a633c:
    // 0x1a633c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1a633cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1a6340:
    // 0x1a6340: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x1a6340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
label_1a6344:
    // 0x1a6344: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1a6348:
    // 0x1a6348: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a6348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a634c:
    // 0x1a634c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a634cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6350:
    // 0x1a6350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a6350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a6354:
    // 0x1a6354: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a6354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a6358:
    // 0x1a6358: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1a6358u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1a635c:
    // 0x1a635c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a6360:
    // 0x1a6360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a6360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a6364:
    // 0x1a6364: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6368:
    // 0x1a6368: 0xc06e424  jal         func_1B9090
label_1a636c:
    if (ctx->pc == 0x1A636Cu) {
        ctx->pc = 0x1A636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6368u;
        // 0x1a636c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6370u;
        goto label_1a6370;
    }
    ctx->pc = 0x1A6368u;
    SET_GPR_U32(ctx, 31, 0x1A6370u);
    ctx->pc = 0x1A636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6368u;
    // 0x1a636c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1A6368u, 0x1A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6370u;
label_1a6370:
    // 0x1a6370: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
label_1a6374:
    // 0x1a6374: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a6374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a6378:
    // 0x1a6378: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a637c:
    // 0x1a637c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1a6380:
    // 0x1a6380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6384:
    // 0x1a6384: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1a6388:
    // 0x1a6388: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a638c:
    // 0x1a638c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_1a6390:
    // 0x1a6390: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1a6394:
    // 0x1a6394: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1a6398:
    // 0x1a6398: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1a6398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a639c:
    // 0x1a639c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a63a0:
    // 0x1a63a0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x1a63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a63a4:
    // 0x1a63a4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a63a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a63a8:
    // 0x1a63a8: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a63ac:
    // 0x1a63ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a63acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a63b0:
    // 0x1a63b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a63b4:
    // 0x1a63b4: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1a63b8:
    // 0x1a63b8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1a63b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1a63bc:
    // 0x1a63bc: 0xc06876e  jal         func_1A1DB8
label_1a63c0:
    if (ctx->pc == 0x1A63C0u) {
        ctx->pc = 0x1A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63BCu;
        // 0x1a63c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63C4u;
        goto label_1a63c4;
    }
    ctx->pc = 0x1A63BCu;
    SET_GPR_U32(ctx, 31, 0x1A63C4u);
    ctx->pc = 0x1A63C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63BCu;
    // 0x1a63c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A63BCu, 0x1A63C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63C4u;
label_1a63c4:
    // 0x1a63c4: 0x3c014614  lui         $at, 0x4614
    ctx->pc = 0x1a63c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17940 << 16));
label_1a63c8:
    // 0x1a63c8: 0x34217000  ori         $at, $at, 0x7000
    ctx->pc = 0x1a63c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28672);
label_1a63cc:
    // 0x1a63cc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1a63ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1a63d0:
    // 0x1a63d0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1a63d4:
    // 0x1a63d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a63d8:
    // 0x1a63d8: 0xc443d21c  lwc1        $f3, -0x2DE4($v0)
    ctx->pc = 0x1a63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a63dc:
    // 0x1a63dc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1a63e0:
    // 0x1a63e0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1a63e4:
    // 0x1a63e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a63e8:
    // 0x1a63e8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a63ec:
    // 0x1a63ec: 0xc442d22c  lwc1        $f2, -0x2DD4($v0)
    ctx->pc = 0x1a63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a63f0:
    // 0x1a63f0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a63f4:
    // 0x1a63f4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a63f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a63f8:
    // 0x1a63f8: 0xc481d20c  lwc1        $f1, -0x2DF4($a0)
    ctx->pc = 0x1a63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a63fc:
    // 0x1a63fc: 0x260c0c40  addiu       $t4, $s0, 0xC40
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3136));
label_1a6400:
    // 0x1a6400: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a6400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a6404:
    // 0x1a6404: 0x8e030c40  lw          $v1, 0xC40($s0)
    ctx->pc = 0x1a6404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3136)));
label_1a6408:
    // 0x1a6408: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a640c:
    // 0x1a640c: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6410:
    // 0x1a6410: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a6414:
    // 0x1a6414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6418:
    // 0x1a6418: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a641c:
    // 0x1a641c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6420:
    // 0x1a6420: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1a6420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a6424:
    // 0x1a6424: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a6424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a6428:
    // 0x1a6428: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x1a6428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a642c:
    // 0x1a642c: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a642cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a6430:
    // 0x1a6430: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a6430u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a6434:
    // 0x1a6434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6438:
    // 0x1a6438: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a643c:
    // 0x1a643c: 0x24090055  addiu       $t1, $zero, 0x55
    ctx->pc = 0x1a643cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1a6440:
    // 0x1a6440: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6444:
    // 0x1a6444: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6448:
    // 0x1a6448: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a644c:
    // 0x1a644c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6450:
    // 0x1a6450: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6454:
    // 0x1a6454: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
label_1a6458:
    // 0x1a6458: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1a6458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
label_1a645c:
    // 0x1a645c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1a645cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1a6460:
    // 0x1a6460: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6464:
    // 0x1a6464: 0x40f809  jalr        $v0
label_1a6468:
    if (ctx->pc == 0x1A6468u) {
        ctx->pc = 0x1A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6464u;
        // 0x1a6468: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A646Cu;
        goto label_1a646c;
    }
    ctx->pc = 0x1A6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A646Cu);
        ctx->pc = 0x1A6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6464u;
        // 0x1a6468: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6464u, 0x1A646Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A646Cu;
label_1a646c:
    // 0x1a646c: 0xa3b40040  sb          $s4, 0x40($sp)
    ctx->pc = 0x1a646cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 20));
label_1a6470:
    // 0x1a6470: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a6474:
    // 0x1a6474: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a6474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a6478:
    // 0x1a6478: 0x260a0640  addiu       $t2, $s0, 0x640
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
label_1a647c:
    // 0x1a647c: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a647cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a6480:
    // 0x1a6480: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6484:
    // 0x1a6484: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a6484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a6488:
    // 0x1a6488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a648c:
    // 0x1a648c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a648cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a6490:
    // 0x1a6490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6494:
    // 0x1a6494: 0x8e030640  lw          $v1, 0x640($s0)
    ctx->pc = 0x1a6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_1a6498:
    // 0x1a6498: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a649c:
    // 0x1a649c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a649cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a64a0:
    // 0x1a64a0: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a64a4:
    // 0x1a64a4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a64a8:
    // 0x1a64a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a64a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a64ac:
    // 0x1a64ac: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a64acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a64b0:
    // 0x1a64b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a64b4:
    // 0x1a64b4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a64b8:
    // 0x1a64b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a64bc:
    // 0x1a64bc: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a64bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a64c0:
    // 0x1a64c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a64c4:
    // 0x1a64c4: 0x40f809  jalr        $v0
label_1a64c8:
    if (ctx->pc == 0x1A64C8u) {
        ctx->pc = 0x1A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64C4u;
        // 0x1a64c8: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64CCu;
        goto label_1a64cc;
    }
    ctx->pc = 0x1A64C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A64CCu);
        ctx->pc = 0x1A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64C4u;
        // 0x1a64c8: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64C4u, 0x1A64CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A64CCu;
label_1a64cc:
    // 0x1a64cc: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
label_1a64d0:
    // 0x1a64d0: 0x26021240  addiu       $v0, $s0, 0x1240
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4672));
label_1a64d4:
    // 0x1a64d4: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a64d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a64d8:
    // 0x1a64d8: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a64d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a64dc:
    // 0x1a64dc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a64dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a64e0:
    // 0x1a64e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a64e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a64e4:
    // 0x1a64e4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a64e8:
    // 0x1a64e8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a64e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a64ec:
    // 0x1a64ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a64f0:
    // 0x1a64f0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a64f4:
    // 0x1a64f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a64f8:
    // 0x1a64f8: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a64fc:
    // 0x1a64fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a64fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6500:
    // 0x1a6500: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6504:
    // 0x1a6504: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6508:
    // 0x1a6508: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a650c:
    // 0x1a650c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6510:
    // 0x1a6510: 0x40f809  jalr        $v0
label_1a6514:
    if (ctx->pc == 0x1A6514u) {
        ctx->pc = 0x1A6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6510u;
        // 0x1a6514: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6518u;
        goto label_1a6518;
    }
    ctx->pc = 0x1A6510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6518u);
        ctx->pc = 0x1A6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6510u;
        // 0x1a6514: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6510u, 0x1A6518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6518u;
label_1a6518:
    // 0x1a6518: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a651c:
    // 0x1a651c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a6520:
    // 0x1a6520: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6524:
    // 0x1a6524: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1a6524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a6528:
    // 0x1a6528: 0xc6e3d218  lwc1        $f3, -0x2DE8($s7)
    ctx->pc = 0x1a6528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a652c:
    // 0x1a652c: 0x26020b40  addiu       $v0, $s0, 0xB40
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2880));
label_1a6530:
    // 0x1a6530: 0xc6a2d214  lwc1        $f2, -0x2DEC($s5)
    ctx->pc = 0x1a6530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6534:
    // 0x1a6534: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a6534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a6538:
    // 0x1a6538: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a653c:
    // 0x1a653c: 0xc7c4d220  lwc1        $f4, -0x2DE0($fp)
    ctx->pc = 0x1a653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a6540:
    // 0x1a6540: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a6540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a6544:
    // 0x1a6544: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a6544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a6548:
    // 0x1a6548: 0xc462d230  lwc1        $f2, -0x2DD0($v1)
    ctx->pc = 0x1a6548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a654c:
    // 0x1a654c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a654cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6550:
    // 0x1a6550: 0x8e030b40  lw          $v1, 0xB40($s0)
    ctx->pc = 0x1a6550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2880)));
label_1a6554:
    // 0x1a6554: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a6554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6558:
    // 0x1a6558: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1a6558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1a655c:
    // 0x1a655c: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6560:
    // 0x1a6560: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a6560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a6564:
    // 0x1a6564: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a6564u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a6568:
    // 0x1a6568: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a6568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a656c:
    // 0x1a656c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a656cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6570:
    // 0x1a6570: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a6574:
    // 0x1a6574: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6578:
    // 0x1a6578: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1a6578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a657c:
    // 0x1a657c: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x1a657cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1a6580:
    // 0x1a6580: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a6580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a6584:
    // 0x1a6584: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6588:
    // 0x1a6588: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a658c:
    // 0x1a658c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6590:
    // 0x1a6590: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6594:
    // 0x1a6594: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6598:
    // 0x1a6598: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a659c:
    // 0x1a659c: 0x40f809  jalr        $v0
label_1a65a0:
    if (ctx->pc == 0x1A65A0u) {
        ctx->pc = 0x1A65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A659Cu;
        // 0x1a65a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65A4u;
        goto label_1a65a4;
    }
    ctx->pc = 0x1A659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A65A4u);
        ctx->pc = 0x1A65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A659Cu;
        // 0x1a65a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A659Cu, 0x1A65A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A65A4u;
label_1a65a4:
    // 0x1a65a4: 0xa3b40044  sb          $s4, 0x44($sp)
    ctx->pc = 0x1a65a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 20));
label_1a65a8:
    // 0x1a65a8: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1a65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1a65ac:
    // 0x1a65ac: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a65acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a65b0:
    // 0x1a65b0: 0x260a0540  addiu       $t2, $s0, 0x540
    ctx->pc = 0x1a65b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
label_1a65b4:
    // 0x1a65b4: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a65b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a65b8:
    // 0x1a65b8: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a65bc:
    // 0x1a65bc: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a65bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a65c0:
    // 0x1a65c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a65c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a65c4:
    // 0x1a65c4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a65c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a65c8:
    // 0x1a65c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a65c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a65cc:
    // 0x1a65cc: 0x8e030540  lw          $v1, 0x540($s0)
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1344)));
label_1a65d0:
    // 0x1a65d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65d4:
    // 0x1a65d4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1a65d8:
    // 0x1a65d8: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a65d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a65dc:
    // 0x1a65dc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a65e0:
    // 0x1a65e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a65e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a65e4:
    // 0x1a65e4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a65e8:
    // 0x1a65e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a65ec:
    // 0x1a65ec: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a65f0:
    // 0x1a65f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a65f4:
    // 0x1a65f4: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a65f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a65f8:
    // 0x1a65f8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a65fc:
    // 0x1a65fc: 0x40f809  jalr        $v0
label_1a6600:
    if (ctx->pc == 0x1A6600u) {
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6604u;
        goto label_1a6604;
    }
    ctx->pc = 0x1A65FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6604u);
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A65FCu, 0x1A6604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6604u;
label_1a6604:
    // 0x1a6604: 0x8e031140  lw          $v1, 0x1140($s0)
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
label_1a6608:
    // 0x1a6608: 0x26021140  addiu       $v0, $s0, 0x1140
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4416));
label_1a660c:
    // 0x1a660c: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6610:
    // 0x1a6610: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6614:
    // 0x1a6614: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6618:
    // 0x1a6618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a661c:
    // 0x1a661c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a661cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6620:
    // 0x1a6620: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a6620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a6624:
    // 0x1a6624: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6628:
    // 0x1a6628: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a662c:
    // 0x1a662c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6630:
    // 0x1a6630: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a6634:
    // 0x1a6634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6638:
    // 0x1a6638: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a663c:
    // 0x1a663c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6640:
    // 0x1a6640: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6640u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6644:
    // 0x1a6644: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6648:
    // 0x1a6648: 0x40f809  jalr        $v0
label_1a664c:
    if (ctx->pc == 0x1A664Cu) {
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6650u;
        goto label_1a6650;
    }
    ctx->pc = 0x1A6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6650u);
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6648u, 0x1A6650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6650u;
label_1a6650:
    // 0x1a6650: 0xc6a0d214  lwc1        $f0, -0x2DEC($s5)
    ctx->pc = 0x1a6650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6654:
    // 0x1a6654: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a6654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a6658:
    // 0x1a6658: 0xc6e1d218  lwc1        $f1, -0x2DE8($s7)
    ctx->pc = 0x1a6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a665c:
    // 0x1a665c: 0x26020a40  addiu       $v0, $s0, 0xA40
    ctx->pc = 0x1a665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
label_1a6660:
    // 0x1a6660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a6660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a6664:
    // 0x1a6664: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a6664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6668:
    // 0x1a6668: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a6668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a666c:
    // 0x1a666c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a6670:
    // 0x1a6670: 0xc465d224  lwc1        $f5, -0x2DDC($v1)
    ctx->pc = 0x1a6670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1a6674:
    // 0x1a6674: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a6674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a6678:
    // 0x1a6678: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a6678u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a667c:
    // 0x1a667c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a6680:
    // 0x1a6680: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1a6680u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1a6684:
    // 0x1a6684: 0xc464d234  lwc1        $f4, -0x2DCC($v1)
    ctx->pc = 0x1a6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a6688:
    // 0x1a6688: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a6688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a668c:
    // 0x1a668c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6690:
    // 0x1a6690: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1a6690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1a6694:
    // 0x1a6694: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a6694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6698:
    // 0x1a6698: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1a6698u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1a669c:
    // 0x1a669c: 0x8e030a40  lw          $v1, 0xA40($s0)
    ctx->pc = 0x1a669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2624)));
label_1a66a0:
    // 0x1a66a0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a66a4:
    // 0x1a66a4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a66a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a66a8:
    // 0x1a66a8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1a66a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a66ac:
    // 0x1a66ac: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a66acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a66b0:
    // 0x1a66b0: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1a66b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a66b4:
    // 0x1a66b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b8:
    // 0x1a66b8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a66b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a66bc:
    // 0x1a66bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a66bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a66c0:
    // 0x1a66c0: 0x2409005a  addiu       $t1, $zero, 0x5A
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1a66c4:
    // 0x1a66c4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a66c8:
    // 0x1a66c8: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a66cc:
    // 0x1a66cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a66ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a66d0:
    // 0x1a66d0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a66d4:
    // 0x1a66d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a66d8:
    // 0x1a66d8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a66dc:
    // 0x1a66dc: 0x40f809  jalr        $v0
label_1a66e0:
    if (ctx->pc == 0x1A66E0u) {
        ctx->pc = 0x1A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66DCu;
        // 0x1a66e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66E4u;
        goto label_1a66e4;
    }
    ctx->pc = 0x1A66DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A66E4u);
        ctx->pc = 0x1A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66DCu;
        // 0x1a66e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A66DCu, 0x1A66E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0xa3b40048  sb          $s4, 0x48($sp)
    ctx->pc = 0x1a66e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 20));
label_1a66e8:
    // 0x1a66e8: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1a66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1a66ec:
    // 0x1a66ec: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a66f0:
    // 0x1a66f0: 0x260a0440  addiu       $t2, $s0, 0x440
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_1a66f4:
    // 0x1a66f4: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a66f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a66f8:
    // 0x1a66f8: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a66fc:
    // 0x1a66fc: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a66fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a6700:
    // 0x1a6700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6704:
    // 0x1a6704: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a6704u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a6708:
    // 0x1a6708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a670c:
    // 0x1a670c: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x1a670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
label_1a6710:
    // 0x1a6710: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6714:
    // 0x1a6714: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1a6714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a6718:
    // 0x1a6718: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6718u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a671c:
    // 0x1a671c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a671cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6720:
    // 0x1a6720: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6720u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6724:
    // 0x1a6724: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6728:
    // 0x1a6728: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a672c:
    // 0x1a672c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a6730:
    // 0x1a6730: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6734:
    // 0x1a6734: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6738:
    // 0x1a6738: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a673c:
    // 0x1a673c: 0x40f809  jalr        $v0
label_1a6740:
    if (ctx->pc == 0x1A6740u) {
        ctx->pc = 0x1A6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A673Cu;
        // 0x1a6740: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6744u;
        goto label_1a6744;
    }
    ctx->pc = 0x1A673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6744u);
        ctx->pc = 0x1A6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A673Cu;
        // 0x1a6740: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A673Cu, 0x1A6744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6744u;
label_1a6744:
    // 0x1a6744: 0x8e031040  lw          $v1, 0x1040($s0)
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
label_1a6748:
    // 0x1a6748: 0x26021040  addiu       $v0, $s0, 0x1040
    ctx->pc = 0x1a6748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
label_1a674c:
    // 0x1a674c: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6750:
    // 0x1a6750: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6754:
    // 0x1a6754: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6758:
    // 0x1a6758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a675c:
    // 0x1a675c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6760:
    // 0x1a6760: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a6760u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a6764:
    // 0x1a6764: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6768:
    // 0x1a6768: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a676c:
    // 0x1a676c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6770:
    // 0x1a6770: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a6774:
    // 0x1a6774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6778:
    // 0x1a6778: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a677c:
    // 0x1a677c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6780:
    // 0x1a6780: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6780u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6784:
    // 0x1a6784: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6788:
    // 0x1a6788: 0x40f809  jalr        $v0
label_1a678c:
    if (ctx->pc == 0x1A678Cu) {
        ctx->pc = 0x1A678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6788u;
        // 0x1a678c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6790u;
        goto label_1a6790;
    }
    ctx->pc = 0x1A6788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6790u);
        ctx->pc = 0x1A678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6788u;
        // 0x1a678c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6788u, 0x1A6790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6790u;
label_1a6790:
    // 0x1a6790: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6794:
    // 0x1a6794: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a6794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a6798:
    // 0x1a6798: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a679c:
    // 0x1a679c: 0x26020d40  addiu       $v0, $s0, 0xD40
    ctx->pc = 0x1a679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3392));
label_1a67a0:
    // 0x1a67a0: 0xc6e3d218  lwc1        $f3, -0x2DE8($s7)
    ctx->pc = 0x1a67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a67a4:
    // 0x1a67a4: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a67a8:
    // 0x1a67a8: 0xc6a2d214  lwc1        $f2, -0x2DEC($s5)
    ctx->pc = 0x1a67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a67ac:
    // 0x1a67ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a67acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a67b0:
    // 0x1a67b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a67b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a67b4:
    // 0x1a67b4: 0xc7c4d220  lwc1        $f4, -0x2DE0($fp)
    ctx->pc = 0x1a67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294955552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a67b8:
    // 0x1a67b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a67b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a67bc:
    // 0x1a67bc: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a67bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a67c0:
    // 0x1a67c0: 0xc462d230  lwc1        $f2, -0x2DD0($v1)
    ctx->pc = 0x1a67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a67c4:
    // 0x1a67c4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a67c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a67c8:
    // 0x1a67c8: 0x8e030d40  lw          $v1, 0xD40($s0)
    ctx->pc = 0x1a67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
label_1a67cc:
    // 0x1a67cc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a67ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a67d0:
    // 0x1a67d0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a67d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1a67d4:
    // 0x1a67d4: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a67d8:
    // 0x1a67d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a67d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a67dc:
    // 0x1a67dc: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a67dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a67e0:
    // 0x1a67e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a67e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a67e4:
    // 0x1a67e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a67e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a67e8:
    // 0x1a67e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a67e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a67ec:
    // 0x1a67ec: 0x24090059  addiu       $t1, $zero, 0x59
    ctx->pc = 0x1a67ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1a67f0:
    // 0x1a67f0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1a67f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a67f4:
    // 0x1a67f4: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a67f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a67f8:
    // 0x1a67f8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a67fc:
    // 0x1a67fc: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a67fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6800:
    // 0x1a6800: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6804:
    // 0x1a6804: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6808:
    // 0x1a6808: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a680c:
    // 0x1a680c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6810:
    // 0x1a6810: 0x40f809  jalr        $v0
label_1a6814:
    if (ctx->pc == 0x1A6814u) {
        ctx->pc = 0x1A6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6810u;
        // 0x1a6814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6818u;
        goto label_1a6818;
    }
    ctx->pc = 0x1A6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6818u);
        ctx->pc = 0x1A6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6810u;
        // 0x1a6814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6810u, 0x1A6818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6818u;
label_1a6818:
    // 0x1a6818: 0xa3b4004c  sb          $s4, 0x4C($sp)
    ctx->pc = 0x1a6818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 20));
label_1a681c:
    // 0x1a681c: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x1a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1a6820:
    // 0x1a6820: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a6820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a6824:
    // 0x1a6824: 0x260a0740  addiu       $t2, $s0, 0x740
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
label_1a6828:
    // 0x1a6828: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a6828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a682c:
    // 0x1a682c: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a682cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6830:
    // 0x1a6830: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a6830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a6834:
    // 0x1a6834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6838:
    // 0x1a6838: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a6838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a683c:
    // 0x1a683c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a683cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6840:
    // 0x1a6840: 0x8e030740  lw          $v1, 0x740($s0)
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_1a6844:
    // 0x1a6844: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6848:
    // 0x1a6848: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x1a6848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1a684c:
    // 0x1a684c: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6850:
    // 0x1a6850: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6854:
    // 0x1a6854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6858:
    // 0x1a6858: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a685c:
    // 0x1a685c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6860:
    // 0x1a6860: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a6864:
    // 0x1a6864: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6868:
    // 0x1a6868: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a686c:
    // 0x1a686c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6870:
    // 0x1a6870: 0x40f809  jalr        $v0
label_1a6874:
    if (ctx->pc == 0x1A6874u) {
        ctx->pc = 0x1A6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6870u;
        // 0x1a6874: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6878u;
        goto label_1a6878;
    }
    ctx->pc = 0x1A6870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6878u);
        ctx->pc = 0x1A6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6870u;
        // 0x1a6874: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6870u, 0x1A6878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6878u;
label_1a6878:
    // 0x1a6878: 0x8e031340  lw          $v1, 0x1340($s0)
    ctx->pc = 0x1a6878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1a687c:
    // 0x1a687c: 0x26021340  addiu       $v0, $s0, 0x1340
    ctx->pc = 0x1a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4928));
label_1a6880:
    // 0x1a6880: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6884:
    // 0x1a6884: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6888:
    // 0x1a6888: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a688c:
    // 0x1a688c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6890:
    // 0x1a6890: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6894:
    // 0x1a6894: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a6894u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a6898:
    // 0x1a6898: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a689c:
    // 0x1a689c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a68a0:
    // 0x1a68a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a68a4:
    // 0x1a68a4: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a68a8:
    // 0x1a68a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a68a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a68ac:
    // 0x1a68ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a68b0:
    // 0x1a68b0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a68b4:
    // 0x1a68b4: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a68b8:
    // 0x1a68b8: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a68bc:
    // 0x1a68bc: 0x40f809  jalr        $v0
label_1a68c0:
    if (ctx->pc == 0x1A68C0u) {
        ctx->pc = 0x1A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68BCu;
        // 0x1a68c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68C4u;
        goto label_1a68c4;
    }
    ctx->pc = 0x1A68BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A68C4u);
        ctx->pc = 0x1A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68BCu;
        // 0x1a68c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A68BCu, 0x1A68C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A68C4u;
label_1a68c4:
    // 0x1a68c4: 0xc6a0d214  lwc1        $f0, -0x2DEC($s5)
    ctx->pc = 0x1a68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a68c8:
    // 0x1a68c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a68cc:
    // 0x1a68cc: 0xc6e1d218  lwc1        $f1, -0x2DE8($s7)
    ctx->pc = 0x1a68ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a68d0:
    // 0x1a68d0: 0x26020e40  addiu       $v0, $s0, 0xE40
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3648));
label_1a68d4:
    // 0x1a68d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a68d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a68d8:
    // 0x1a68d8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a68dc:
    // 0x1a68dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a68dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a68e0:
    // 0x1a68e0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a68e4:
    // 0x1a68e4: 0xc465d224  lwc1        $f5, -0x2DDC($v1)
    ctx->pc = 0x1a68e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1a68e8:
    // 0x1a68e8: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a68e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a68ec:
    // 0x1a68ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a68ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a68f0:
    // 0x1a68f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a68f4:
    // 0x1a68f4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1a68f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1a68f8:
    // 0x1a68f8: 0xc464d234  lwc1        $f4, -0x2DCC($v1)
    ctx->pc = 0x1a68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a68fc:
    // 0x1a68fc: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a68fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a6900:
    // 0x1a6900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6904:
    // 0x1a6904: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1a6904u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_1a6908:
    // 0x1a6908: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a6908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a690c:
    // 0x1a690c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1a690cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1a6910:
    // 0x1a6910: 0x8e030e40  lw          $v1, 0xE40($s0)
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3648)));
label_1a6914:
    // 0x1a6914: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a6914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6918:
    // 0x1a6918: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a6918u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a691c:
    // 0x1a691c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1a691cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a6920:
    // 0x1a6920: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a6920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a6924:
    // 0x1a6924: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1a6924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a6928:
    // 0x1a6928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a692c:
    // 0x1a692c: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a692cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a6930:
    // 0x1a6930: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6934:
    // 0x1a6934: 0x2409005b  addiu       $t1, $zero, 0x5B
    ctx->pc = 0x1a6934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1a6938:
    // 0x1a6938: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a693c:
    // 0x1a693c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a693cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6940:
    // 0x1a6940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6944:
    // 0x1a6944: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6948:
    // 0x1a6948: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a694c:
    // 0x1a694c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6950:
    // 0x1a6950: 0x40f809  jalr        $v0
label_1a6954:
    if (ctx->pc == 0x1A6954u) {
        ctx->pc = 0x1A6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6950u;
        // 0x1a6954: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6958u;
        goto label_1a6958;
    }
    ctx->pc = 0x1A6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6958u);
        ctx->pc = 0x1A6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6950u;
        // 0x1a6954: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6950u, 0x1A6958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6958u;
label_1a6958:
    // 0x1a6958: 0xa3b40050  sb          $s4, 0x50($sp)
    ctx->pc = 0x1a6958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 20));
label_1a695c:
    // 0x1a695c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a6960:
    // 0x1a6960: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a6960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a6964:
    // 0x1a6964: 0x260a0840  addiu       $t2, $s0, 0x840
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_1a6968:
    // 0x1a6968: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a6968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a696c:
    // 0x1a696c: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6970:
    // 0x1a6970: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a6970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a6974:
    // 0x1a6974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6978:
    // 0x1a6978: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a6978u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a697c:
    // 0x1a697c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a697cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6980:
    // 0x1a6980: 0x8e030840  lw          $v1, 0x840($s0)
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
label_1a6984:
    // 0x1a6984: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6988:
    // 0x1a6988: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1a6988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a698c:
    // 0x1a698c: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a698cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6990:
    // 0x1a6990: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6994:
    // 0x1a6994: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6998:
    // 0x1a6998: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a699c:
    // 0x1a699c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a699cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a69a0:
    // 0x1a69a0: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a69a4:
    // 0x1a69a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a69a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a69a8:
    // 0x1a69a8: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a69ac:
    // 0x1a69ac: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a69b0:
    // 0x1a69b0: 0x40f809  jalr        $v0
label_1a69b4:
    if (ctx->pc == 0x1A69B4u) {
        ctx->pc = 0x1A69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B0u;
        // 0x1a69b4: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69B8u;
        goto label_1a69b8;
    }
    ctx->pc = 0x1A69B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A69B8u);
        ctx->pc = 0x1A69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B0u;
        // 0x1a69b4: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69B0u, 0x1A69B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A69B8u;
label_1a69b8:
    // 0x1a69b8: 0x8e031440  lw          $v1, 0x1440($s0)
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5184)));
label_1a69bc:
    // 0x1a69bc: 0x26021440  addiu       $v0, $s0, 0x1440
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5184));
label_1a69c0:
    // 0x1a69c0: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a69c4:
    // 0x1a69c4: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a69c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a69c8:
    // 0x1a69c8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a69cc:
    // 0x1a69cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a69ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a69d0:
    // 0x1a69d0: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a69d4:
    // 0x1a69d4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a69d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a69d8:
    // 0x1a69d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a69dc:
    // 0x1a69dc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a69e0:
    // 0x1a69e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a69e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a69e4:
    // 0x1a69e4: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a69e8:
    // 0x1a69e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a69e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a69ec:
    // 0x1a69ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a69f0:
    // 0x1a69f0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a69f4:
    // 0x1a69f4: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a69f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a69f8:
    // 0x1a69f8: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a69fc:
    // 0x1a69fc: 0x40f809  jalr        $v0
label_1a6a00:
    if (ctx->pc == 0x1A6A00u) {
        ctx->pc = 0x1A6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69FCu;
        // 0x1a6a00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A04u;
        goto label_1a6a04;
    }
    ctx->pc = 0x1A69FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6A04u);
        ctx->pc = 0x1A6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69FCu;
        // 0x1a6a00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69FCu, 0x1A6A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A04u;
label_1a6a04:
    // 0x1a6a04: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a6a08:
    // 0x1a6a08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a6a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a6a0c:
    // 0x1a6a0c: 0x26020940  addiu       $v0, $s0, 0x940
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2368));
label_1a6a10:
    // 0x1a6a10: 0xc6e0d218  lwc1        $f0, -0x2DE8($s7)
    ctx->pc = 0x1a6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294955544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6a14:
    // 0x1a6a14: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1a6a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1a6a18:
    // 0x1a6a18: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6a1c:
    // 0x1a6a1c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1a6a1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1a6a20:
    // 0x1a6a20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a6a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a6a24:
    // 0x1a6a24: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6a28:
    // 0x1a6a28: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a6a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a6a2c:
    // 0x1a6a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a30:
    // 0x1a6a30: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a6a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a6a34:
    // 0x1a6a34: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a6a38:
    // 0x1a6a38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a6a38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a6a3c:
    // 0x1a6a3c: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6a40:
    // 0x1a6a40: 0x8e030940  lw          $v1, 0x940($s0)
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a6a44:
    // 0x1a6a44: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1a6a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1a6a48:
    // 0x1a6a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a4c:
    // 0x1a6a4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a50:
    // 0x1a6a50: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1a6a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a6a54:
    // 0x1a6a54: 0x24090056  addiu       $t1, $zero, 0x56
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1a6a58:
    // 0x1a6a58: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1a6a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a6a5c:
    // 0x1a6a5c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6a60:
    // 0x1a6a60: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6a64:
    // 0x1a6a64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6a68:
    // 0x1a6a68: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6a6c:
    // 0x1a6a6c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6a70:
    // 0x1a6a70: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6a74:
    // 0x1a6a74: 0x40f809  jalr        $v0
label_1a6a78:
    if (ctx->pc == 0x1A6A78u) {
        ctx->pc = 0x1A6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A74u;
        // 0x1a6a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A7Cu;
        goto label_1a6a7c;
    }
    ctx->pc = 0x1A6A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6A7Cu);
        ctx->pc = 0x1A6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A74u;
        // 0x1a6a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A74u, 0x1A6A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A7Cu;
label_1a6a7c:
    // 0x1a6a7c: 0xa3b40054  sb          $s4, 0x54($sp)
    ctx->pc = 0x1a6a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 20));
label_1a6a80:
    // 0x1a6a80: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1a6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1a6a84:
    // 0x1a6a84: 0xa0540001  sb          $s4, 0x1($v0)
    ctx->pc = 0x1a6a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 20));
label_1a6a88:
    // 0x1a6a88: 0x260a0340  addiu       $t2, $s0, 0x340
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1a6a8c:
    // 0x1a6a8c: 0xa0560002  sb          $s6, 0x2($v0)
    ctx->pc = 0x1a6a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 22));
label_1a6a90:
    // 0x1a6a90: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6a90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6a94:
    // 0x1a6a94: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x1a6a94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_1a6a98:
    // 0x1a6a98: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1a6a98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_1a6a9c:
    // 0x1a6a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6aa0:
    // 0x1a6aa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6aa4:
    // 0x1a6aa4: 0x8e030340  lw          $v1, 0x340($s0)
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a6aa8:
    // 0x1a6aa8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6aac:
    // 0x1a6aac: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1a6ab0:
    // 0x1a6ab0: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6ab4:
    // 0x1a6ab4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1a6ab8:
    // 0x1a6ab8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6ab8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6abc:
    // 0x1a6abc: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6ac0:
    // 0x1a6ac0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6ac4:
    // 0x1a6ac4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a6ac8:
    // 0x1a6ac8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6acc:
    // 0x1a6acc: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6ad0:
    // 0x1a6ad0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1a6ad4:
    // 0x1a6ad4: 0x40f809  jalr        $v0
label_1a6ad8:
    if (ctx->pc == 0x1A6AD8u) {
        ctx->pc = 0x1A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AD4u;
        // 0x1a6ad8: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6ADCu;
        goto label_1a6adc;
    }
    ctx->pc = 0x1A6AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6ADCu);
        ctx->pc = 0x1A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AD4u;
        // 0x1a6ad8: 0xc66cd210  lwc1        $f12, -0x2DF0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6AD4u, 0x1A6ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6ADCu;
label_1a6adc:
    // 0x1a6adc: 0x8e0a0f40  lw          $t2, 0xF40($s0)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a6ae0:
    // 0x1a6ae0: 0x26020f40  addiu       $v0, $s0, 0xF40
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1a6ae4:
    // 0x1a6ae4: 0xc66cd210  lwc1        $f12, -0x2DF0($s3)
    ctx->pc = 0x1a6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a6ae8:
    // 0x1a6ae8: 0x3c09000d  lui         $t1, 0xD
    ctx->pc = 0x1a6ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)13 << 16));
label_1a6aec:
    // 0x1a6aec: 0x85440068  lh          $a0, 0x68($t2)
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 104)));
label_1a6af0:
    // 0x1a6af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6af4:
    // 0x1a6af4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1a6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_1a6af8:
    // 0x1a6af8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1a6af8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1a6afc:
    // 0x1a6afc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a6b00:
    // 0x1a6b00: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a6b04:
    // 0x1a6b04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a6b08:
    // 0x1a6b08: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a6b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1a6b0c:
    // 0x1a6b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b10:
    // 0x1a6b10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6b14:
    // 0x1a6b14: 0x8d43006c  lw          $v1, 0x6C($t2)
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 108)));
label_1a6b18:
    // 0x1a6b18: 0x35290100  ori         $t1, $t1, 0x100
    ctx->pc = 0x1a6b18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_1a6b1c:
    // 0x1a6b1c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a6b20:
    // 0x1a6b20: 0x60f809  jalr        $v1
label_1a6b24:
    if (ctx->pc == 0x1A6B24u) {
        ctx->pc = 0x1A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B20u;
        // 0x1a6b24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B28u;
        goto label_1a6b28;
    }
    ctx->pc = 0x1A6B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6B28u);
        ctx->pc = 0x1A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B20u;
        // 0x1a6b24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6B20u, 0x1A6B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6B28u;
label_1a6b28:
    // 0x1a6b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6b2c:
    // 0x1a6b2c: 0xae001554  sw          $zero, 0x1554($s0)
    ctx->pc = 0x1a6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 0));
label_1a6b30:
    // 0x1a6b30: 0xae02155c  sw          $v0, 0x155C($s0)
    ctx->pc = 0x1a6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5468), GPR_U32(ctx, 2));
label_1a6b34:
    // 0x1a6b34: 0xae001548  sw          $zero, 0x1548($s0)
    ctx->pc = 0x1a6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 0));
label_1a6b38:
    // 0x1a6b38: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1a6b3c:
    // 0x1a6b3c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a6b40:
    // 0x1a6b40: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1a6b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a6b44:
    // 0x1a6b44: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1a6b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a6b48:
    // 0x1a6b48: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1a6b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a6b4c:
    // 0x1a6b4c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1a6b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a6b50:
    // 0x1a6b50: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1a6b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a6b54:
    // 0x1a6b54: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1a6b54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a6b58:
    // 0x1a6b58: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a6b58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6b5c:
    // 0x1a6b5c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6b60:
    // 0x1a6b60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a6b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a6b64:
    // 0x1a6b64: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x1a6b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1a6b68:
    // 0x1a6b68: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1a6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1a6b6c:
    // 0x1a6b6c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1a6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a6b70:
    // 0x1a6b70: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1a6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a6b74:
    // 0x1a6b74: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1a6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a6b78:
    // 0x1a6b78: 0x3e00008  jr          $ra
label_1a6b7c:
    if (ctx->pc == 0x1A6B7Cu) {
        ctx->pc = 0x1A6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B78u;
        // 0x1a6b7c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B80u;
        goto label_fallthrough_0x1a6b78;
    }
    ctx->pc = 0x1A6B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B78u;
        // 0x1a6b7c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6b78:
    ctx->pc = 0x1A6B80u;
}
