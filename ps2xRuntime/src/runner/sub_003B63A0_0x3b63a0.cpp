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

// Function: sub_003B63A0
// Address: 0x3b63a0 - 0x3b74e0
void sub_003B63A0_0x3b63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B63A0_0x3b63a0");
#endif

    switch (ctx->pc) {
        case 0x3b63a0u: goto label_3b63a0;
        case 0x3b63a4u: goto label_3b63a4;
        case 0x3b63a8u: goto label_3b63a8;
        case 0x3b63acu: goto label_3b63ac;
        case 0x3b63b0u: goto label_3b63b0;
        case 0x3b63b4u: goto label_3b63b4;
        case 0x3b63b8u: goto label_3b63b8;
        case 0x3b63bcu: goto label_3b63bc;
        case 0x3b63c0u: goto label_3b63c0;
        case 0x3b63c4u: goto label_3b63c4;
        case 0x3b63c8u: goto label_3b63c8;
        case 0x3b63ccu: goto label_3b63cc;
        case 0x3b63d0u: goto label_3b63d0;
        case 0x3b63d4u: goto label_3b63d4;
        case 0x3b63d8u: goto label_3b63d8;
        case 0x3b63dcu: goto label_3b63dc;
        case 0x3b63e0u: goto label_3b63e0;
        case 0x3b63e4u: goto label_3b63e4;
        case 0x3b63e8u: goto label_3b63e8;
        case 0x3b63ecu: goto label_3b63ec;
        case 0x3b63f0u: goto label_3b63f0;
        case 0x3b63f4u: goto label_3b63f4;
        case 0x3b63f8u: goto label_3b63f8;
        case 0x3b63fcu: goto label_3b63fc;
        case 0x3b6400u: goto label_3b6400;
        case 0x3b6404u: goto label_3b6404;
        case 0x3b6408u: goto label_3b6408;
        case 0x3b640cu: goto label_3b640c;
        case 0x3b6410u: goto label_3b6410;
        case 0x3b6414u: goto label_3b6414;
        case 0x3b6418u: goto label_3b6418;
        case 0x3b641cu: goto label_3b641c;
        case 0x3b6420u: goto label_3b6420;
        case 0x3b6424u: goto label_3b6424;
        case 0x3b6428u: goto label_3b6428;
        case 0x3b642cu: goto label_3b642c;
        case 0x3b6430u: goto label_3b6430;
        case 0x3b6434u: goto label_3b6434;
        case 0x3b6438u: goto label_3b6438;
        case 0x3b643cu: goto label_3b643c;
        case 0x3b6440u: goto label_3b6440;
        case 0x3b6444u: goto label_3b6444;
        case 0x3b6448u: goto label_3b6448;
        case 0x3b644cu: goto label_3b644c;
        case 0x3b6450u: goto label_3b6450;
        case 0x3b6454u: goto label_3b6454;
        case 0x3b6458u: goto label_3b6458;
        case 0x3b645cu: goto label_3b645c;
        case 0x3b6460u: goto label_3b6460;
        case 0x3b6464u: goto label_3b6464;
        case 0x3b6468u: goto label_3b6468;
        case 0x3b646cu: goto label_3b646c;
        case 0x3b6470u: goto label_3b6470;
        case 0x3b6474u: goto label_3b6474;
        case 0x3b6478u: goto label_3b6478;
        case 0x3b647cu: goto label_3b647c;
        case 0x3b6480u: goto label_3b6480;
        case 0x3b6484u: goto label_3b6484;
        case 0x3b6488u: goto label_3b6488;
        case 0x3b648cu: goto label_3b648c;
        case 0x3b6490u: goto label_3b6490;
        case 0x3b6494u: goto label_3b6494;
        case 0x3b6498u: goto label_3b6498;
        case 0x3b649cu: goto label_3b649c;
        case 0x3b64a0u: goto label_3b64a0;
        case 0x3b64a4u: goto label_3b64a4;
        case 0x3b64a8u: goto label_3b64a8;
        case 0x3b64acu: goto label_3b64ac;
        case 0x3b64b0u: goto label_3b64b0;
        case 0x3b64b4u: goto label_3b64b4;
        case 0x3b64b8u: goto label_3b64b8;
        case 0x3b64bcu: goto label_3b64bc;
        case 0x3b64c0u: goto label_3b64c0;
        case 0x3b64c4u: goto label_3b64c4;
        case 0x3b64c8u: goto label_3b64c8;
        case 0x3b64ccu: goto label_3b64cc;
        case 0x3b64d0u: goto label_3b64d0;
        case 0x3b64d4u: goto label_3b64d4;
        case 0x3b64d8u: goto label_3b64d8;
        case 0x3b64dcu: goto label_3b64dc;
        case 0x3b64e0u: goto label_3b64e0;
        case 0x3b64e4u: goto label_3b64e4;
        case 0x3b64e8u: goto label_3b64e8;
        case 0x3b64ecu: goto label_3b64ec;
        case 0x3b64f0u: goto label_3b64f0;
        case 0x3b64f4u: goto label_3b64f4;
        case 0x3b64f8u: goto label_3b64f8;
        case 0x3b64fcu: goto label_3b64fc;
        case 0x3b6500u: goto label_3b6500;
        case 0x3b6504u: goto label_3b6504;
        case 0x3b6508u: goto label_3b6508;
        case 0x3b650cu: goto label_3b650c;
        case 0x3b6510u: goto label_3b6510;
        case 0x3b6514u: goto label_3b6514;
        case 0x3b6518u: goto label_3b6518;
        case 0x3b651cu: goto label_3b651c;
        case 0x3b6520u: goto label_3b6520;
        case 0x3b6524u: goto label_3b6524;
        case 0x3b6528u: goto label_3b6528;
        case 0x3b652cu: goto label_3b652c;
        case 0x3b6530u: goto label_3b6530;
        case 0x3b6534u: goto label_3b6534;
        case 0x3b6538u: goto label_3b6538;
        case 0x3b653cu: goto label_3b653c;
        case 0x3b6540u: goto label_3b6540;
        case 0x3b6544u: goto label_3b6544;
        case 0x3b6548u: goto label_3b6548;
        case 0x3b654cu: goto label_3b654c;
        case 0x3b6550u: goto label_3b6550;
        case 0x3b6554u: goto label_3b6554;
        case 0x3b6558u: goto label_3b6558;
        case 0x3b655cu: goto label_3b655c;
        case 0x3b6560u: goto label_3b6560;
        case 0x3b6564u: goto label_3b6564;
        case 0x3b6568u: goto label_3b6568;
        case 0x3b656cu: goto label_3b656c;
        case 0x3b6570u: goto label_3b6570;
        case 0x3b6574u: goto label_3b6574;
        case 0x3b6578u: goto label_3b6578;
        case 0x3b657cu: goto label_3b657c;
        case 0x3b6580u: goto label_3b6580;
        case 0x3b6584u: goto label_3b6584;
        case 0x3b6588u: goto label_3b6588;
        case 0x3b658cu: goto label_3b658c;
        case 0x3b6590u: goto label_3b6590;
        case 0x3b6594u: goto label_3b6594;
        case 0x3b6598u: goto label_3b6598;
        case 0x3b659cu: goto label_3b659c;
        case 0x3b65a0u: goto label_3b65a0;
        case 0x3b65a4u: goto label_3b65a4;
        case 0x3b65a8u: goto label_3b65a8;
        case 0x3b65acu: goto label_3b65ac;
        case 0x3b65b0u: goto label_3b65b0;
        case 0x3b65b4u: goto label_3b65b4;
        case 0x3b65b8u: goto label_3b65b8;
        case 0x3b65bcu: goto label_3b65bc;
        case 0x3b65c0u: goto label_3b65c0;
        case 0x3b65c4u: goto label_3b65c4;
        case 0x3b65c8u: goto label_3b65c8;
        case 0x3b65ccu: goto label_3b65cc;
        case 0x3b65d0u: goto label_3b65d0;
        case 0x3b65d4u: goto label_3b65d4;
        case 0x3b65d8u: goto label_3b65d8;
        case 0x3b65dcu: goto label_3b65dc;
        case 0x3b65e0u: goto label_3b65e0;
        case 0x3b65e4u: goto label_3b65e4;
        case 0x3b65e8u: goto label_3b65e8;
        case 0x3b65ecu: goto label_3b65ec;
        case 0x3b65f0u: goto label_3b65f0;
        case 0x3b65f4u: goto label_3b65f4;
        case 0x3b65f8u: goto label_3b65f8;
        case 0x3b65fcu: goto label_3b65fc;
        case 0x3b6600u: goto label_3b6600;
        case 0x3b6604u: goto label_3b6604;
        case 0x3b6608u: goto label_3b6608;
        case 0x3b660cu: goto label_3b660c;
        case 0x3b6610u: goto label_3b6610;
        case 0x3b6614u: goto label_3b6614;
        case 0x3b6618u: goto label_3b6618;
        case 0x3b661cu: goto label_3b661c;
        case 0x3b6620u: goto label_3b6620;
        case 0x3b6624u: goto label_3b6624;
        case 0x3b6628u: goto label_3b6628;
        case 0x3b662cu: goto label_3b662c;
        case 0x3b6630u: goto label_3b6630;
        case 0x3b6634u: goto label_3b6634;
        case 0x3b6638u: goto label_3b6638;
        case 0x3b663cu: goto label_3b663c;
        case 0x3b6640u: goto label_3b6640;
        case 0x3b6644u: goto label_3b6644;
        case 0x3b6648u: goto label_3b6648;
        case 0x3b664cu: goto label_3b664c;
        case 0x3b6650u: goto label_3b6650;
        case 0x3b6654u: goto label_3b6654;
        case 0x3b6658u: goto label_3b6658;
        case 0x3b665cu: goto label_3b665c;
        case 0x3b6660u: goto label_3b6660;
        case 0x3b6664u: goto label_3b6664;
        case 0x3b6668u: goto label_3b6668;
        case 0x3b666cu: goto label_3b666c;
        case 0x3b6670u: goto label_3b6670;
        case 0x3b6674u: goto label_3b6674;
        case 0x3b6678u: goto label_3b6678;
        case 0x3b667cu: goto label_3b667c;
        case 0x3b6680u: goto label_3b6680;
        case 0x3b6684u: goto label_3b6684;
        case 0x3b6688u: goto label_3b6688;
        case 0x3b668cu: goto label_3b668c;
        case 0x3b6690u: goto label_3b6690;
        case 0x3b6694u: goto label_3b6694;
        case 0x3b6698u: goto label_3b6698;
        case 0x3b669cu: goto label_3b669c;
        case 0x3b66a0u: goto label_3b66a0;
        case 0x3b66a4u: goto label_3b66a4;
        case 0x3b66a8u: goto label_3b66a8;
        case 0x3b66acu: goto label_3b66ac;
        case 0x3b66b0u: goto label_3b66b0;
        case 0x3b66b4u: goto label_3b66b4;
        case 0x3b66b8u: goto label_3b66b8;
        case 0x3b66bcu: goto label_3b66bc;
        case 0x3b66c0u: goto label_3b66c0;
        case 0x3b66c4u: goto label_3b66c4;
        case 0x3b66c8u: goto label_3b66c8;
        case 0x3b66ccu: goto label_3b66cc;
        case 0x3b66d0u: goto label_3b66d0;
        case 0x3b66d4u: goto label_3b66d4;
        case 0x3b66d8u: goto label_3b66d8;
        case 0x3b66dcu: goto label_3b66dc;
        case 0x3b66e0u: goto label_3b66e0;
        case 0x3b66e4u: goto label_3b66e4;
        case 0x3b66e8u: goto label_3b66e8;
        case 0x3b66ecu: goto label_3b66ec;
        case 0x3b66f0u: goto label_3b66f0;
        case 0x3b66f4u: goto label_3b66f4;
        case 0x3b66f8u: goto label_3b66f8;
        case 0x3b66fcu: goto label_3b66fc;
        case 0x3b6700u: goto label_3b6700;
        case 0x3b6704u: goto label_3b6704;
        case 0x3b6708u: goto label_3b6708;
        case 0x3b670cu: goto label_3b670c;
        case 0x3b6710u: goto label_3b6710;
        case 0x3b6714u: goto label_3b6714;
        case 0x3b6718u: goto label_3b6718;
        case 0x3b671cu: goto label_3b671c;
        case 0x3b6720u: goto label_3b6720;
        case 0x3b6724u: goto label_3b6724;
        case 0x3b6728u: goto label_3b6728;
        case 0x3b672cu: goto label_3b672c;
        case 0x3b6730u: goto label_3b6730;
        case 0x3b6734u: goto label_3b6734;
        case 0x3b6738u: goto label_3b6738;
        case 0x3b673cu: goto label_3b673c;
        case 0x3b6740u: goto label_3b6740;
        case 0x3b6744u: goto label_3b6744;
        case 0x3b6748u: goto label_3b6748;
        case 0x3b674cu: goto label_3b674c;
        case 0x3b6750u: goto label_3b6750;
        case 0x3b6754u: goto label_3b6754;
        case 0x3b6758u: goto label_3b6758;
        case 0x3b675cu: goto label_3b675c;
        case 0x3b6760u: goto label_3b6760;
        case 0x3b6764u: goto label_3b6764;
        case 0x3b6768u: goto label_3b6768;
        case 0x3b676cu: goto label_3b676c;
        case 0x3b6770u: goto label_3b6770;
        case 0x3b6774u: goto label_3b6774;
        case 0x3b6778u: goto label_3b6778;
        case 0x3b677cu: goto label_3b677c;
        case 0x3b6780u: goto label_3b6780;
        case 0x3b6784u: goto label_3b6784;
        case 0x3b6788u: goto label_3b6788;
        case 0x3b678cu: goto label_3b678c;
        case 0x3b6790u: goto label_3b6790;
        case 0x3b6794u: goto label_3b6794;
        case 0x3b6798u: goto label_3b6798;
        case 0x3b679cu: goto label_3b679c;
        case 0x3b67a0u: goto label_3b67a0;
        case 0x3b67a4u: goto label_3b67a4;
        case 0x3b67a8u: goto label_3b67a8;
        case 0x3b67acu: goto label_3b67ac;
        case 0x3b67b0u: goto label_3b67b0;
        case 0x3b67b4u: goto label_3b67b4;
        case 0x3b67b8u: goto label_3b67b8;
        case 0x3b67bcu: goto label_3b67bc;
        case 0x3b67c0u: goto label_3b67c0;
        case 0x3b67c4u: goto label_3b67c4;
        case 0x3b67c8u: goto label_3b67c8;
        case 0x3b67ccu: goto label_3b67cc;
        case 0x3b67d0u: goto label_3b67d0;
        case 0x3b67d4u: goto label_3b67d4;
        case 0x3b67d8u: goto label_3b67d8;
        case 0x3b67dcu: goto label_3b67dc;
        case 0x3b67e0u: goto label_3b67e0;
        case 0x3b67e4u: goto label_3b67e4;
        case 0x3b67e8u: goto label_3b67e8;
        case 0x3b67ecu: goto label_3b67ec;
        case 0x3b67f0u: goto label_3b67f0;
        case 0x3b67f4u: goto label_3b67f4;
        case 0x3b67f8u: goto label_3b67f8;
        case 0x3b67fcu: goto label_3b67fc;
        case 0x3b6800u: goto label_3b6800;
        case 0x3b6804u: goto label_3b6804;
        case 0x3b6808u: goto label_3b6808;
        case 0x3b680cu: goto label_3b680c;
        case 0x3b6810u: goto label_3b6810;
        case 0x3b6814u: goto label_3b6814;
        case 0x3b6818u: goto label_3b6818;
        case 0x3b681cu: goto label_3b681c;
        case 0x3b6820u: goto label_3b6820;
        case 0x3b6824u: goto label_3b6824;
        case 0x3b6828u: goto label_3b6828;
        case 0x3b682cu: goto label_3b682c;
        case 0x3b6830u: goto label_3b6830;
        case 0x3b6834u: goto label_3b6834;
        case 0x3b6838u: goto label_3b6838;
        case 0x3b683cu: goto label_3b683c;
        case 0x3b6840u: goto label_3b6840;
        case 0x3b6844u: goto label_3b6844;
        case 0x3b6848u: goto label_3b6848;
        case 0x3b684cu: goto label_3b684c;
        case 0x3b6850u: goto label_3b6850;
        case 0x3b6854u: goto label_3b6854;
        case 0x3b6858u: goto label_3b6858;
        case 0x3b685cu: goto label_3b685c;
        case 0x3b6860u: goto label_3b6860;
        case 0x3b6864u: goto label_3b6864;
        case 0x3b6868u: goto label_3b6868;
        case 0x3b686cu: goto label_3b686c;
        case 0x3b6870u: goto label_3b6870;
        case 0x3b6874u: goto label_3b6874;
        case 0x3b6878u: goto label_3b6878;
        case 0x3b687cu: goto label_3b687c;
        case 0x3b6880u: goto label_3b6880;
        case 0x3b6884u: goto label_3b6884;
        case 0x3b6888u: goto label_3b6888;
        case 0x3b688cu: goto label_3b688c;
        case 0x3b6890u: goto label_3b6890;
        case 0x3b6894u: goto label_3b6894;
        case 0x3b6898u: goto label_3b6898;
        case 0x3b689cu: goto label_3b689c;
        case 0x3b68a0u: goto label_3b68a0;
        case 0x3b68a4u: goto label_3b68a4;
        case 0x3b68a8u: goto label_3b68a8;
        case 0x3b68acu: goto label_3b68ac;
        case 0x3b68b0u: goto label_3b68b0;
        case 0x3b68b4u: goto label_3b68b4;
        case 0x3b68b8u: goto label_3b68b8;
        case 0x3b68bcu: goto label_3b68bc;
        case 0x3b68c0u: goto label_3b68c0;
        case 0x3b68c4u: goto label_3b68c4;
        case 0x3b68c8u: goto label_3b68c8;
        case 0x3b68ccu: goto label_3b68cc;
        case 0x3b68d0u: goto label_3b68d0;
        case 0x3b68d4u: goto label_3b68d4;
        case 0x3b68d8u: goto label_3b68d8;
        case 0x3b68dcu: goto label_3b68dc;
        case 0x3b68e0u: goto label_3b68e0;
        case 0x3b68e4u: goto label_3b68e4;
        case 0x3b68e8u: goto label_3b68e8;
        case 0x3b68ecu: goto label_3b68ec;
        case 0x3b68f0u: goto label_3b68f0;
        case 0x3b68f4u: goto label_3b68f4;
        case 0x3b68f8u: goto label_3b68f8;
        case 0x3b68fcu: goto label_3b68fc;
        case 0x3b6900u: goto label_3b6900;
        case 0x3b6904u: goto label_3b6904;
        case 0x3b6908u: goto label_3b6908;
        case 0x3b690cu: goto label_3b690c;
        case 0x3b6910u: goto label_3b6910;
        case 0x3b6914u: goto label_3b6914;
        case 0x3b6918u: goto label_3b6918;
        case 0x3b691cu: goto label_3b691c;
        case 0x3b6920u: goto label_3b6920;
        case 0x3b6924u: goto label_3b6924;
        case 0x3b6928u: goto label_3b6928;
        case 0x3b692cu: goto label_3b692c;
        case 0x3b6930u: goto label_3b6930;
        case 0x3b6934u: goto label_3b6934;
        case 0x3b6938u: goto label_3b6938;
        case 0x3b693cu: goto label_3b693c;
        case 0x3b6940u: goto label_3b6940;
        case 0x3b6944u: goto label_3b6944;
        case 0x3b6948u: goto label_3b6948;
        case 0x3b694cu: goto label_3b694c;
        case 0x3b6950u: goto label_3b6950;
        case 0x3b6954u: goto label_3b6954;
        case 0x3b6958u: goto label_3b6958;
        case 0x3b695cu: goto label_3b695c;
        case 0x3b6960u: goto label_3b6960;
        case 0x3b6964u: goto label_3b6964;
        case 0x3b6968u: goto label_3b6968;
        case 0x3b696cu: goto label_3b696c;
        case 0x3b6970u: goto label_3b6970;
        case 0x3b6974u: goto label_3b6974;
        case 0x3b6978u: goto label_3b6978;
        case 0x3b697cu: goto label_3b697c;
        case 0x3b6980u: goto label_3b6980;
        case 0x3b6984u: goto label_3b6984;
        case 0x3b6988u: goto label_3b6988;
        case 0x3b698cu: goto label_3b698c;
        case 0x3b6990u: goto label_3b6990;
        case 0x3b6994u: goto label_3b6994;
        case 0x3b6998u: goto label_3b6998;
        case 0x3b699cu: goto label_3b699c;
        case 0x3b69a0u: goto label_3b69a0;
        case 0x3b69a4u: goto label_3b69a4;
        case 0x3b69a8u: goto label_3b69a8;
        case 0x3b69acu: goto label_3b69ac;
        case 0x3b69b0u: goto label_3b69b0;
        case 0x3b69b4u: goto label_3b69b4;
        case 0x3b69b8u: goto label_3b69b8;
        case 0x3b69bcu: goto label_3b69bc;
        case 0x3b69c0u: goto label_3b69c0;
        case 0x3b69c4u: goto label_3b69c4;
        case 0x3b69c8u: goto label_3b69c8;
        case 0x3b69ccu: goto label_3b69cc;
        case 0x3b69d0u: goto label_3b69d0;
        case 0x3b69d4u: goto label_3b69d4;
        case 0x3b69d8u: goto label_3b69d8;
        case 0x3b69dcu: goto label_3b69dc;
        case 0x3b69e0u: goto label_3b69e0;
        case 0x3b69e4u: goto label_3b69e4;
        case 0x3b69e8u: goto label_3b69e8;
        case 0x3b69ecu: goto label_3b69ec;
        case 0x3b69f0u: goto label_3b69f0;
        case 0x3b69f4u: goto label_3b69f4;
        case 0x3b69f8u: goto label_3b69f8;
        case 0x3b69fcu: goto label_3b69fc;
        case 0x3b6a00u: goto label_3b6a00;
        case 0x3b6a04u: goto label_3b6a04;
        case 0x3b6a08u: goto label_3b6a08;
        case 0x3b6a0cu: goto label_3b6a0c;
        case 0x3b6a10u: goto label_3b6a10;
        case 0x3b6a14u: goto label_3b6a14;
        case 0x3b6a18u: goto label_3b6a18;
        case 0x3b6a1cu: goto label_3b6a1c;
        case 0x3b6a20u: goto label_3b6a20;
        case 0x3b6a24u: goto label_3b6a24;
        case 0x3b6a28u: goto label_3b6a28;
        case 0x3b6a2cu: goto label_3b6a2c;
        case 0x3b6a30u: goto label_3b6a30;
        case 0x3b6a34u: goto label_3b6a34;
        case 0x3b6a38u: goto label_3b6a38;
        case 0x3b6a3cu: goto label_3b6a3c;
        case 0x3b6a40u: goto label_3b6a40;
        case 0x3b6a44u: goto label_3b6a44;
        case 0x3b6a48u: goto label_3b6a48;
        case 0x3b6a4cu: goto label_3b6a4c;
        case 0x3b6a50u: goto label_3b6a50;
        case 0x3b6a54u: goto label_3b6a54;
        case 0x3b6a58u: goto label_3b6a58;
        case 0x3b6a5cu: goto label_3b6a5c;
        case 0x3b6a60u: goto label_3b6a60;
        case 0x3b6a64u: goto label_3b6a64;
        case 0x3b6a68u: goto label_3b6a68;
        case 0x3b6a6cu: goto label_3b6a6c;
        case 0x3b6a70u: goto label_3b6a70;
        case 0x3b6a74u: goto label_3b6a74;
        case 0x3b6a78u: goto label_3b6a78;
        case 0x3b6a7cu: goto label_3b6a7c;
        case 0x3b6a80u: goto label_3b6a80;
        case 0x3b6a84u: goto label_3b6a84;
        case 0x3b6a88u: goto label_3b6a88;
        case 0x3b6a8cu: goto label_3b6a8c;
        case 0x3b6a90u: goto label_3b6a90;
        case 0x3b6a94u: goto label_3b6a94;
        case 0x3b6a98u: goto label_3b6a98;
        case 0x3b6a9cu: goto label_3b6a9c;
        case 0x3b6aa0u: goto label_3b6aa0;
        case 0x3b6aa4u: goto label_3b6aa4;
        case 0x3b6aa8u: goto label_3b6aa8;
        case 0x3b6aacu: goto label_3b6aac;
        case 0x3b6ab0u: goto label_3b6ab0;
        case 0x3b6ab4u: goto label_3b6ab4;
        case 0x3b6ab8u: goto label_3b6ab8;
        case 0x3b6abcu: goto label_3b6abc;
        case 0x3b6ac0u: goto label_3b6ac0;
        case 0x3b6ac4u: goto label_3b6ac4;
        case 0x3b6ac8u: goto label_3b6ac8;
        case 0x3b6accu: goto label_3b6acc;
        case 0x3b6ad0u: goto label_3b6ad0;
        case 0x3b6ad4u: goto label_3b6ad4;
        case 0x3b6ad8u: goto label_3b6ad8;
        case 0x3b6adcu: goto label_3b6adc;
        case 0x3b6ae0u: goto label_3b6ae0;
        case 0x3b6ae4u: goto label_3b6ae4;
        case 0x3b6ae8u: goto label_3b6ae8;
        case 0x3b6aecu: goto label_3b6aec;
        case 0x3b6af0u: goto label_3b6af0;
        case 0x3b6af4u: goto label_3b6af4;
        case 0x3b6af8u: goto label_3b6af8;
        case 0x3b6afcu: goto label_3b6afc;
        case 0x3b6b00u: goto label_3b6b00;
        case 0x3b6b04u: goto label_3b6b04;
        case 0x3b6b08u: goto label_3b6b08;
        case 0x3b6b0cu: goto label_3b6b0c;
        case 0x3b6b10u: goto label_3b6b10;
        case 0x3b6b14u: goto label_3b6b14;
        case 0x3b6b18u: goto label_3b6b18;
        case 0x3b6b1cu: goto label_3b6b1c;
        case 0x3b6b20u: goto label_3b6b20;
        case 0x3b6b24u: goto label_3b6b24;
        case 0x3b6b28u: goto label_3b6b28;
        case 0x3b6b2cu: goto label_3b6b2c;
        case 0x3b6b30u: goto label_3b6b30;
        case 0x3b6b34u: goto label_3b6b34;
        case 0x3b6b38u: goto label_3b6b38;
        case 0x3b6b3cu: goto label_3b6b3c;
        case 0x3b6b40u: goto label_3b6b40;
        case 0x3b6b44u: goto label_3b6b44;
        case 0x3b6b48u: goto label_3b6b48;
        case 0x3b6b4cu: goto label_3b6b4c;
        case 0x3b6b50u: goto label_3b6b50;
        case 0x3b6b54u: goto label_3b6b54;
        case 0x3b6b58u: goto label_3b6b58;
        case 0x3b6b5cu: goto label_3b6b5c;
        case 0x3b6b60u: goto label_3b6b60;
        case 0x3b6b64u: goto label_3b6b64;
        case 0x3b6b68u: goto label_3b6b68;
        case 0x3b6b6cu: goto label_3b6b6c;
        case 0x3b6b70u: goto label_3b6b70;
        case 0x3b6b74u: goto label_3b6b74;
        case 0x3b6b78u: goto label_3b6b78;
        case 0x3b6b7cu: goto label_3b6b7c;
        case 0x3b6b80u: goto label_3b6b80;
        case 0x3b6b84u: goto label_3b6b84;
        case 0x3b6b88u: goto label_3b6b88;
        case 0x3b6b8cu: goto label_3b6b8c;
        case 0x3b6b90u: goto label_3b6b90;
        case 0x3b6b94u: goto label_3b6b94;
        case 0x3b6b98u: goto label_3b6b98;
        case 0x3b6b9cu: goto label_3b6b9c;
        case 0x3b6ba0u: goto label_3b6ba0;
        case 0x3b6ba4u: goto label_3b6ba4;
        case 0x3b6ba8u: goto label_3b6ba8;
        case 0x3b6bacu: goto label_3b6bac;
        case 0x3b6bb0u: goto label_3b6bb0;
        case 0x3b6bb4u: goto label_3b6bb4;
        case 0x3b6bb8u: goto label_3b6bb8;
        case 0x3b6bbcu: goto label_3b6bbc;
        case 0x3b6bc0u: goto label_3b6bc0;
        case 0x3b6bc4u: goto label_3b6bc4;
        case 0x3b6bc8u: goto label_3b6bc8;
        case 0x3b6bccu: goto label_3b6bcc;
        case 0x3b6bd0u: goto label_3b6bd0;
        case 0x3b6bd4u: goto label_3b6bd4;
        case 0x3b6bd8u: goto label_3b6bd8;
        case 0x3b6bdcu: goto label_3b6bdc;
        case 0x3b6be0u: goto label_3b6be0;
        case 0x3b6be4u: goto label_3b6be4;
        case 0x3b6be8u: goto label_3b6be8;
        case 0x3b6becu: goto label_3b6bec;
        case 0x3b6bf0u: goto label_3b6bf0;
        case 0x3b6bf4u: goto label_3b6bf4;
        case 0x3b6bf8u: goto label_3b6bf8;
        case 0x3b6bfcu: goto label_3b6bfc;
        case 0x3b6c00u: goto label_3b6c00;
        case 0x3b6c04u: goto label_3b6c04;
        case 0x3b6c08u: goto label_3b6c08;
        case 0x3b6c0cu: goto label_3b6c0c;
        case 0x3b6c10u: goto label_3b6c10;
        case 0x3b6c14u: goto label_3b6c14;
        case 0x3b6c18u: goto label_3b6c18;
        case 0x3b6c1cu: goto label_3b6c1c;
        case 0x3b6c20u: goto label_3b6c20;
        case 0x3b6c24u: goto label_3b6c24;
        case 0x3b6c28u: goto label_3b6c28;
        case 0x3b6c2cu: goto label_3b6c2c;
        case 0x3b6c30u: goto label_3b6c30;
        case 0x3b6c34u: goto label_3b6c34;
        case 0x3b6c38u: goto label_3b6c38;
        case 0x3b6c3cu: goto label_3b6c3c;
        case 0x3b6c40u: goto label_3b6c40;
        case 0x3b6c44u: goto label_3b6c44;
        case 0x3b6c48u: goto label_3b6c48;
        case 0x3b6c4cu: goto label_3b6c4c;
        case 0x3b6c50u: goto label_3b6c50;
        case 0x3b6c54u: goto label_3b6c54;
        case 0x3b6c58u: goto label_3b6c58;
        case 0x3b6c5cu: goto label_3b6c5c;
        case 0x3b6c60u: goto label_3b6c60;
        case 0x3b6c64u: goto label_3b6c64;
        case 0x3b6c68u: goto label_3b6c68;
        case 0x3b6c6cu: goto label_3b6c6c;
        case 0x3b6c70u: goto label_3b6c70;
        case 0x3b6c74u: goto label_3b6c74;
        case 0x3b6c78u: goto label_3b6c78;
        case 0x3b6c7cu: goto label_3b6c7c;
        case 0x3b6c80u: goto label_3b6c80;
        case 0x3b6c84u: goto label_3b6c84;
        case 0x3b6c88u: goto label_3b6c88;
        case 0x3b6c8cu: goto label_3b6c8c;
        case 0x3b6c90u: goto label_3b6c90;
        case 0x3b6c94u: goto label_3b6c94;
        case 0x3b6c98u: goto label_3b6c98;
        case 0x3b6c9cu: goto label_3b6c9c;
        case 0x3b6ca0u: goto label_3b6ca0;
        case 0x3b6ca4u: goto label_3b6ca4;
        case 0x3b6ca8u: goto label_3b6ca8;
        case 0x3b6cacu: goto label_3b6cac;
        case 0x3b6cb0u: goto label_3b6cb0;
        case 0x3b6cb4u: goto label_3b6cb4;
        case 0x3b6cb8u: goto label_3b6cb8;
        case 0x3b6cbcu: goto label_3b6cbc;
        case 0x3b6cc0u: goto label_3b6cc0;
        case 0x3b6cc4u: goto label_3b6cc4;
        case 0x3b6cc8u: goto label_3b6cc8;
        case 0x3b6cccu: goto label_3b6ccc;
        case 0x3b6cd0u: goto label_3b6cd0;
        case 0x3b6cd4u: goto label_3b6cd4;
        case 0x3b6cd8u: goto label_3b6cd8;
        case 0x3b6cdcu: goto label_3b6cdc;
        case 0x3b6ce0u: goto label_3b6ce0;
        case 0x3b6ce4u: goto label_3b6ce4;
        case 0x3b6ce8u: goto label_3b6ce8;
        case 0x3b6cecu: goto label_3b6cec;
        case 0x3b6cf0u: goto label_3b6cf0;
        case 0x3b6cf4u: goto label_3b6cf4;
        case 0x3b6cf8u: goto label_3b6cf8;
        case 0x3b6cfcu: goto label_3b6cfc;
        case 0x3b6d00u: goto label_3b6d00;
        case 0x3b6d04u: goto label_3b6d04;
        case 0x3b6d08u: goto label_3b6d08;
        case 0x3b6d0cu: goto label_3b6d0c;
        case 0x3b6d10u: goto label_3b6d10;
        case 0x3b6d14u: goto label_3b6d14;
        case 0x3b6d18u: goto label_3b6d18;
        case 0x3b6d1cu: goto label_3b6d1c;
        case 0x3b6d20u: goto label_3b6d20;
        case 0x3b6d24u: goto label_3b6d24;
        case 0x3b6d28u: goto label_3b6d28;
        case 0x3b6d2cu: goto label_3b6d2c;
        case 0x3b6d30u: goto label_3b6d30;
        case 0x3b6d34u: goto label_3b6d34;
        case 0x3b6d38u: goto label_3b6d38;
        case 0x3b6d3cu: goto label_3b6d3c;
        case 0x3b6d40u: goto label_3b6d40;
        case 0x3b6d44u: goto label_3b6d44;
        case 0x3b6d48u: goto label_3b6d48;
        case 0x3b6d4cu: goto label_3b6d4c;
        case 0x3b6d50u: goto label_3b6d50;
        case 0x3b6d54u: goto label_3b6d54;
        case 0x3b6d58u: goto label_3b6d58;
        case 0x3b6d5cu: goto label_3b6d5c;
        case 0x3b6d60u: goto label_3b6d60;
        case 0x3b6d64u: goto label_3b6d64;
        case 0x3b6d68u: goto label_3b6d68;
        case 0x3b6d6cu: goto label_3b6d6c;
        case 0x3b6d70u: goto label_3b6d70;
        case 0x3b6d74u: goto label_3b6d74;
        case 0x3b6d78u: goto label_3b6d78;
        case 0x3b6d7cu: goto label_3b6d7c;
        case 0x3b6d80u: goto label_3b6d80;
        case 0x3b6d84u: goto label_3b6d84;
        case 0x3b6d88u: goto label_3b6d88;
        case 0x3b6d8cu: goto label_3b6d8c;
        case 0x3b6d90u: goto label_3b6d90;
        case 0x3b6d94u: goto label_3b6d94;
        case 0x3b6d98u: goto label_3b6d98;
        case 0x3b6d9cu: goto label_3b6d9c;
        case 0x3b6da0u: goto label_3b6da0;
        case 0x3b6da4u: goto label_3b6da4;
        case 0x3b6da8u: goto label_3b6da8;
        case 0x3b6dacu: goto label_3b6dac;
        case 0x3b6db0u: goto label_3b6db0;
        case 0x3b6db4u: goto label_3b6db4;
        case 0x3b6db8u: goto label_3b6db8;
        case 0x3b6dbcu: goto label_3b6dbc;
        case 0x3b6dc0u: goto label_3b6dc0;
        case 0x3b6dc4u: goto label_3b6dc4;
        case 0x3b6dc8u: goto label_3b6dc8;
        case 0x3b6dccu: goto label_3b6dcc;
        case 0x3b6dd0u: goto label_3b6dd0;
        case 0x3b6dd4u: goto label_3b6dd4;
        case 0x3b6dd8u: goto label_3b6dd8;
        case 0x3b6ddcu: goto label_3b6ddc;
        case 0x3b6de0u: goto label_3b6de0;
        case 0x3b6de4u: goto label_3b6de4;
        case 0x3b6de8u: goto label_3b6de8;
        case 0x3b6decu: goto label_3b6dec;
        case 0x3b6df0u: goto label_3b6df0;
        case 0x3b6df4u: goto label_3b6df4;
        case 0x3b6df8u: goto label_3b6df8;
        case 0x3b6dfcu: goto label_3b6dfc;
        case 0x3b6e00u: goto label_3b6e00;
        case 0x3b6e04u: goto label_3b6e04;
        case 0x3b6e08u: goto label_3b6e08;
        case 0x3b6e0cu: goto label_3b6e0c;
        case 0x3b6e10u: goto label_3b6e10;
        case 0x3b6e14u: goto label_3b6e14;
        case 0x3b6e18u: goto label_3b6e18;
        case 0x3b6e1cu: goto label_3b6e1c;
        case 0x3b6e20u: goto label_3b6e20;
        case 0x3b6e24u: goto label_3b6e24;
        case 0x3b6e28u: goto label_3b6e28;
        case 0x3b6e2cu: goto label_3b6e2c;
        case 0x3b6e30u: goto label_3b6e30;
        case 0x3b6e34u: goto label_3b6e34;
        case 0x3b6e38u: goto label_3b6e38;
        case 0x3b6e3cu: goto label_3b6e3c;
        case 0x3b6e40u: goto label_3b6e40;
        case 0x3b6e44u: goto label_3b6e44;
        case 0x3b6e48u: goto label_3b6e48;
        case 0x3b6e4cu: goto label_3b6e4c;
        case 0x3b6e50u: goto label_3b6e50;
        case 0x3b6e54u: goto label_3b6e54;
        case 0x3b6e58u: goto label_3b6e58;
        case 0x3b6e5cu: goto label_3b6e5c;
        case 0x3b6e60u: goto label_3b6e60;
        case 0x3b6e64u: goto label_3b6e64;
        case 0x3b6e68u: goto label_3b6e68;
        case 0x3b6e6cu: goto label_3b6e6c;
        case 0x3b6e70u: goto label_3b6e70;
        case 0x3b6e74u: goto label_3b6e74;
        case 0x3b6e78u: goto label_3b6e78;
        case 0x3b6e7cu: goto label_3b6e7c;
        case 0x3b6e80u: goto label_3b6e80;
        case 0x3b6e84u: goto label_3b6e84;
        case 0x3b6e88u: goto label_3b6e88;
        case 0x3b6e8cu: goto label_3b6e8c;
        case 0x3b6e90u: goto label_3b6e90;
        case 0x3b6e94u: goto label_3b6e94;
        case 0x3b6e98u: goto label_3b6e98;
        case 0x3b6e9cu: goto label_3b6e9c;
        case 0x3b6ea0u: goto label_3b6ea0;
        case 0x3b6ea4u: goto label_3b6ea4;
        case 0x3b6ea8u: goto label_3b6ea8;
        case 0x3b6eacu: goto label_3b6eac;
        case 0x3b6eb0u: goto label_3b6eb0;
        case 0x3b6eb4u: goto label_3b6eb4;
        case 0x3b6eb8u: goto label_3b6eb8;
        case 0x3b6ebcu: goto label_3b6ebc;
        case 0x3b6ec0u: goto label_3b6ec0;
        case 0x3b6ec4u: goto label_3b6ec4;
        case 0x3b6ec8u: goto label_3b6ec8;
        case 0x3b6eccu: goto label_3b6ecc;
        case 0x3b6ed0u: goto label_3b6ed0;
        case 0x3b6ed4u: goto label_3b6ed4;
        case 0x3b6ed8u: goto label_3b6ed8;
        case 0x3b6edcu: goto label_3b6edc;
        case 0x3b6ee0u: goto label_3b6ee0;
        case 0x3b6ee4u: goto label_3b6ee4;
        case 0x3b6ee8u: goto label_3b6ee8;
        case 0x3b6eecu: goto label_3b6eec;
        case 0x3b6ef0u: goto label_3b6ef0;
        case 0x3b6ef4u: goto label_3b6ef4;
        case 0x3b6ef8u: goto label_3b6ef8;
        case 0x3b6efcu: goto label_3b6efc;
        case 0x3b6f00u: goto label_3b6f00;
        case 0x3b6f04u: goto label_3b6f04;
        case 0x3b6f08u: goto label_3b6f08;
        case 0x3b6f0cu: goto label_3b6f0c;
        case 0x3b6f10u: goto label_3b6f10;
        case 0x3b6f14u: goto label_3b6f14;
        case 0x3b6f18u: goto label_3b6f18;
        case 0x3b6f1cu: goto label_3b6f1c;
        case 0x3b6f20u: goto label_3b6f20;
        case 0x3b6f24u: goto label_3b6f24;
        case 0x3b6f28u: goto label_3b6f28;
        case 0x3b6f2cu: goto label_3b6f2c;
        case 0x3b6f30u: goto label_3b6f30;
        case 0x3b6f34u: goto label_3b6f34;
        case 0x3b6f38u: goto label_3b6f38;
        case 0x3b6f3cu: goto label_3b6f3c;
        case 0x3b6f40u: goto label_3b6f40;
        case 0x3b6f44u: goto label_3b6f44;
        case 0x3b6f48u: goto label_3b6f48;
        case 0x3b6f4cu: goto label_3b6f4c;
        case 0x3b6f50u: goto label_3b6f50;
        case 0x3b6f54u: goto label_3b6f54;
        case 0x3b6f58u: goto label_3b6f58;
        case 0x3b6f5cu: goto label_3b6f5c;
        case 0x3b6f60u: goto label_3b6f60;
        case 0x3b6f64u: goto label_3b6f64;
        case 0x3b6f68u: goto label_3b6f68;
        case 0x3b6f6cu: goto label_3b6f6c;
        case 0x3b6f70u: goto label_3b6f70;
        case 0x3b6f74u: goto label_3b6f74;
        case 0x3b6f78u: goto label_3b6f78;
        case 0x3b6f7cu: goto label_3b6f7c;
        case 0x3b6f80u: goto label_3b6f80;
        case 0x3b6f84u: goto label_3b6f84;
        case 0x3b6f88u: goto label_3b6f88;
        case 0x3b6f8cu: goto label_3b6f8c;
        case 0x3b6f90u: goto label_3b6f90;
        case 0x3b6f94u: goto label_3b6f94;
        case 0x3b6f98u: goto label_3b6f98;
        case 0x3b6f9cu: goto label_3b6f9c;
        case 0x3b6fa0u: goto label_3b6fa0;
        case 0x3b6fa4u: goto label_3b6fa4;
        case 0x3b6fa8u: goto label_3b6fa8;
        case 0x3b6facu: goto label_3b6fac;
        case 0x3b6fb0u: goto label_3b6fb0;
        case 0x3b6fb4u: goto label_3b6fb4;
        case 0x3b6fb8u: goto label_3b6fb8;
        case 0x3b6fbcu: goto label_3b6fbc;
        case 0x3b6fc0u: goto label_3b6fc0;
        case 0x3b6fc4u: goto label_3b6fc4;
        case 0x3b6fc8u: goto label_3b6fc8;
        case 0x3b6fccu: goto label_3b6fcc;
        case 0x3b6fd0u: goto label_3b6fd0;
        case 0x3b6fd4u: goto label_3b6fd4;
        case 0x3b6fd8u: goto label_3b6fd8;
        case 0x3b6fdcu: goto label_3b6fdc;
        case 0x3b6fe0u: goto label_3b6fe0;
        case 0x3b6fe4u: goto label_3b6fe4;
        case 0x3b6fe8u: goto label_3b6fe8;
        case 0x3b6fecu: goto label_3b6fec;
        case 0x3b6ff0u: goto label_3b6ff0;
        case 0x3b6ff4u: goto label_3b6ff4;
        case 0x3b6ff8u: goto label_3b6ff8;
        case 0x3b6ffcu: goto label_3b6ffc;
        case 0x3b7000u: goto label_3b7000;
        case 0x3b7004u: goto label_3b7004;
        case 0x3b7008u: goto label_3b7008;
        case 0x3b700cu: goto label_3b700c;
        case 0x3b7010u: goto label_3b7010;
        case 0x3b7014u: goto label_3b7014;
        case 0x3b7018u: goto label_3b7018;
        case 0x3b701cu: goto label_3b701c;
        case 0x3b7020u: goto label_3b7020;
        case 0x3b7024u: goto label_3b7024;
        case 0x3b7028u: goto label_3b7028;
        case 0x3b702cu: goto label_3b702c;
        case 0x3b7030u: goto label_3b7030;
        case 0x3b7034u: goto label_3b7034;
        case 0x3b7038u: goto label_3b7038;
        case 0x3b703cu: goto label_3b703c;
        case 0x3b7040u: goto label_3b7040;
        case 0x3b7044u: goto label_3b7044;
        case 0x3b7048u: goto label_3b7048;
        case 0x3b704cu: goto label_3b704c;
        case 0x3b7050u: goto label_3b7050;
        case 0x3b7054u: goto label_3b7054;
        case 0x3b7058u: goto label_3b7058;
        case 0x3b705cu: goto label_3b705c;
        case 0x3b7060u: goto label_3b7060;
        case 0x3b7064u: goto label_3b7064;
        case 0x3b7068u: goto label_3b7068;
        case 0x3b706cu: goto label_3b706c;
        case 0x3b7070u: goto label_3b7070;
        case 0x3b7074u: goto label_3b7074;
        case 0x3b7078u: goto label_3b7078;
        case 0x3b707cu: goto label_3b707c;
        case 0x3b7080u: goto label_3b7080;
        case 0x3b7084u: goto label_3b7084;
        case 0x3b7088u: goto label_3b7088;
        case 0x3b708cu: goto label_3b708c;
        case 0x3b7090u: goto label_3b7090;
        case 0x3b7094u: goto label_3b7094;
        case 0x3b7098u: goto label_3b7098;
        case 0x3b709cu: goto label_3b709c;
        case 0x3b70a0u: goto label_3b70a0;
        case 0x3b70a4u: goto label_3b70a4;
        case 0x3b70a8u: goto label_3b70a8;
        case 0x3b70acu: goto label_3b70ac;
        case 0x3b70b0u: goto label_3b70b0;
        case 0x3b70b4u: goto label_3b70b4;
        case 0x3b70b8u: goto label_3b70b8;
        case 0x3b70bcu: goto label_3b70bc;
        case 0x3b70c0u: goto label_3b70c0;
        case 0x3b70c4u: goto label_3b70c4;
        case 0x3b70c8u: goto label_3b70c8;
        case 0x3b70ccu: goto label_3b70cc;
        case 0x3b70d0u: goto label_3b70d0;
        case 0x3b70d4u: goto label_3b70d4;
        case 0x3b70d8u: goto label_3b70d8;
        case 0x3b70dcu: goto label_3b70dc;
        case 0x3b70e0u: goto label_3b70e0;
        case 0x3b70e4u: goto label_3b70e4;
        case 0x3b70e8u: goto label_3b70e8;
        case 0x3b70ecu: goto label_3b70ec;
        case 0x3b70f0u: goto label_3b70f0;
        case 0x3b70f4u: goto label_3b70f4;
        case 0x3b70f8u: goto label_3b70f8;
        case 0x3b70fcu: goto label_3b70fc;
        case 0x3b7100u: goto label_3b7100;
        case 0x3b7104u: goto label_3b7104;
        case 0x3b7108u: goto label_3b7108;
        case 0x3b710cu: goto label_3b710c;
        case 0x3b7110u: goto label_3b7110;
        case 0x3b7114u: goto label_3b7114;
        case 0x3b7118u: goto label_3b7118;
        case 0x3b711cu: goto label_3b711c;
        case 0x3b7120u: goto label_3b7120;
        case 0x3b7124u: goto label_3b7124;
        case 0x3b7128u: goto label_3b7128;
        case 0x3b712cu: goto label_3b712c;
        case 0x3b7130u: goto label_3b7130;
        case 0x3b7134u: goto label_3b7134;
        case 0x3b7138u: goto label_3b7138;
        case 0x3b713cu: goto label_3b713c;
        case 0x3b7140u: goto label_3b7140;
        case 0x3b7144u: goto label_3b7144;
        case 0x3b7148u: goto label_3b7148;
        case 0x3b714cu: goto label_3b714c;
        case 0x3b7150u: goto label_3b7150;
        case 0x3b7154u: goto label_3b7154;
        case 0x3b7158u: goto label_3b7158;
        case 0x3b715cu: goto label_3b715c;
        case 0x3b7160u: goto label_3b7160;
        case 0x3b7164u: goto label_3b7164;
        case 0x3b7168u: goto label_3b7168;
        case 0x3b716cu: goto label_3b716c;
        case 0x3b7170u: goto label_3b7170;
        case 0x3b7174u: goto label_3b7174;
        case 0x3b7178u: goto label_3b7178;
        case 0x3b717cu: goto label_3b717c;
        case 0x3b7180u: goto label_3b7180;
        case 0x3b7184u: goto label_3b7184;
        case 0x3b7188u: goto label_3b7188;
        case 0x3b718cu: goto label_3b718c;
        case 0x3b7190u: goto label_3b7190;
        case 0x3b7194u: goto label_3b7194;
        case 0x3b7198u: goto label_3b7198;
        case 0x3b719cu: goto label_3b719c;
        case 0x3b71a0u: goto label_3b71a0;
        case 0x3b71a4u: goto label_3b71a4;
        case 0x3b71a8u: goto label_3b71a8;
        case 0x3b71acu: goto label_3b71ac;
        case 0x3b71b0u: goto label_3b71b0;
        case 0x3b71b4u: goto label_3b71b4;
        case 0x3b71b8u: goto label_3b71b8;
        case 0x3b71bcu: goto label_3b71bc;
        case 0x3b71c0u: goto label_3b71c0;
        case 0x3b71c4u: goto label_3b71c4;
        case 0x3b71c8u: goto label_3b71c8;
        case 0x3b71ccu: goto label_3b71cc;
        case 0x3b71d0u: goto label_3b71d0;
        case 0x3b71d4u: goto label_3b71d4;
        case 0x3b71d8u: goto label_3b71d8;
        case 0x3b71dcu: goto label_3b71dc;
        case 0x3b71e0u: goto label_3b71e0;
        case 0x3b71e4u: goto label_3b71e4;
        case 0x3b71e8u: goto label_3b71e8;
        case 0x3b71ecu: goto label_3b71ec;
        case 0x3b71f0u: goto label_3b71f0;
        case 0x3b71f4u: goto label_3b71f4;
        case 0x3b71f8u: goto label_3b71f8;
        case 0x3b71fcu: goto label_3b71fc;
        case 0x3b7200u: goto label_3b7200;
        case 0x3b7204u: goto label_3b7204;
        case 0x3b7208u: goto label_3b7208;
        case 0x3b720cu: goto label_3b720c;
        case 0x3b7210u: goto label_3b7210;
        case 0x3b7214u: goto label_3b7214;
        case 0x3b7218u: goto label_3b7218;
        case 0x3b721cu: goto label_3b721c;
        case 0x3b7220u: goto label_3b7220;
        case 0x3b7224u: goto label_3b7224;
        case 0x3b7228u: goto label_3b7228;
        case 0x3b722cu: goto label_3b722c;
        case 0x3b7230u: goto label_3b7230;
        case 0x3b7234u: goto label_3b7234;
        case 0x3b7238u: goto label_3b7238;
        case 0x3b723cu: goto label_3b723c;
        case 0x3b7240u: goto label_3b7240;
        case 0x3b7244u: goto label_3b7244;
        case 0x3b7248u: goto label_3b7248;
        case 0x3b724cu: goto label_3b724c;
        case 0x3b7250u: goto label_3b7250;
        case 0x3b7254u: goto label_3b7254;
        case 0x3b7258u: goto label_3b7258;
        case 0x3b725cu: goto label_3b725c;
        case 0x3b7260u: goto label_3b7260;
        case 0x3b7264u: goto label_3b7264;
        case 0x3b7268u: goto label_3b7268;
        case 0x3b726cu: goto label_3b726c;
        case 0x3b7270u: goto label_3b7270;
        case 0x3b7274u: goto label_3b7274;
        case 0x3b7278u: goto label_3b7278;
        case 0x3b727cu: goto label_3b727c;
        case 0x3b7280u: goto label_3b7280;
        case 0x3b7284u: goto label_3b7284;
        case 0x3b7288u: goto label_3b7288;
        case 0x3b728cu: goto label_3b728c;
        case 0x3b7290u: goto label_3b7290;
        case 0x3b7294u: goto label_3b7294;
        case 0x3b7298u: goto label_3b7298;
        case 0x3b729cu: goto label_3b729c;
        case 0x3b72a0u: goto label_3b72a0;
        case 0x3b72a4u: goto label_3b72a4;
        case 0x3b72a8u: goto label_3b72a8;
        case 0x3b72acu: goto label_3b72ac;
        case 0x3b72b0u: goto label_3b72b0;
        case 0x3b72b4u: goto label_3b72b4;
        case 0x3b72b8u: goto label_3b72b8;
        case 0x3b72bcu: goto label_3b72bc;
        case 0x3b72c0u: goto label_3b72c0;
        case 0x3b72c4u: goto label_3b72c4;
        case 0x3b72c8u: goto label_3b72c8;
        case 0x3b72ccu: goto label_3b72cc;
        case 0x3b72d0u: goto label_3b72d0;
        case 0x3b72d4u: goto label_3b72d4;
        case 0x3b72d8u: goto label_3b72d8;
        case 0x3b72dcu: goto label_3b72dc;
        case 0x3b72e0u: goto label_3b72e0;
        case 0x3b72e4u: goto label_3b72e4;
        case 0x3b72e8u: goto label_3b72e8;
        case 0x3b72ecu: goto label_3b72ec;
        case 0x3b72f0u: goto label_3b72f0;
        case 0x3b72f4u: goto label_3b72f4;
        case 0x3b72f8u: goto label_3b72f8;
        case 0x3b72fcu: goto label_3b72fc;
        case 0x3b7300u: goto label_3b7300;
        case 0x3b7304u: goto label_3b7304;
        case 0x3b7308u: goto label_3b7308;
        case 0x3b730cu: goto label_3b730c;
        case 0x3b7310u: goto label_3b7310;
        case 0x3b7314u: goto label_3b7314;
        case 0x3b7318u: goto label_3b7318;
        case 0x3b731cu: goto label_3b731c;
        case 0x3b7320u: goto label_3b7320;
        case 0x3b7324u: goto label_3b7324;
        case 0x3b7328u: goto label_3b7328;
        case 0x3b732cu: goto label_3b732c;
        case 0x3b7330u: goto label_3b7330;
        case 0x3b7334u: goto label_3b7334;
        case 0x3b7338u: goto label_3b7338;
        case 0x3b733cu: goto label_3b733c;
        case 0x3b7340u: goto label_3b7340;
        case 0x3b7344u: goto label_3b7344;
        case 0x3b7348u: goto label_3b7348;
        case 0x3b734cu: goto label_3b734c;
        case 0x3b7350u: goto label_3b7350;
        case 0x3b7354u: goto label_3b7354;
        case 0x3b7358u: goto label_3b7358;
        case 0x3b735cu: goto label_3b735c;
        case 0x3b7360u: goto label_3b7360;
        case 0x3b7364u: goto label_3b7364;
        case 0x3b7368u: goto label_3b7368;
        case 0x3b736cu: goto label_3b736c;
        case 0x3b7370u: goto label_3b7370;
        case 0x3b7374u: goto label_3b7374;
        case 0x3b7378u: goto label_3b7378;
        case 0x3b737cu: goto label_3b737c;
        case 0x3b7380u: goto label_3b7380;
        case 0x3b7384u: goto label_3b7384;
        case 0x3b7388u: goto label_3b7388;
        case 0x3b738cu: goto label_3b738c;
        case 0x3b7390u: goto label_3b7390;
        case 0x3b7394u: goto label_3b7394;
        case 0x3b7398u: goto label_3b7398;
        case 0x3b739cu: goto label_3b739c;
        case 0x3b73a0u: goto label_3b73a0;
        case 0x3b73a4u: goto label_3b73a4;
        case 0x3b73a8u: goto label_3b73a8;
        case 0x3b73acu: goto label_3b73ac;
        case 0x3b73b0u: goto label_3b73b0;
        case 0x3b73b4u: goto label_3b73b4;
        case 0x3b73b8u: goto label_3b73b8;
        case 0x3b73bcu: goto label_3b73bc;
        case 0x3b73c0u: goto label_3b73c0;
        case 0x3b73c4u: goto label_3b73c4;
        case 0x3b73c8u: goto label_3b73c8;
        case 0x3b73ccu: goto label_3b73cc;
        case 0x3b73d0u: goto label_3b73d0;
        case 0x3b73d4u: goto label_3b73d4;
        case 0x3b73d8u: goto label_3b73d8;
        case 0x3b73dcu: goto label_3b73dc;
        case 0x3b73e0u: goto label_3b73e0;
        case 0x3b73e4u: goto label_3b73e4;
        case 0x3b73e8u: goto label_3b73e8;
        case 0x3b73ecu: goto label_3b73ec;
        case 0x3b73f0u: goto label_3b73f0;
        case 0x3b73f4u: goto label_3b73f4;
        case 0x3b73f8u: goto label_3b73f8;
        case 0x3b73fcu: goto label_3b73fc;
        case 0x3b7400u: goto label_3b7400;
        case 0x3b7404u: goto label_3b7404;
        case 0x3b7408u: goto label_3b7408;
        case 0x3b740cu: goto label_3b740c;
        case 0x3b7410u: goto label_3b7410;
        case 0x3b7414u: goto label_3b7414;
        case 0x3b7418u: goto label_3b7418;
        case 0x3b741cu: goto label_3b741c;
        case 0x3b7420u: goto label_3b7420;
        case 0x3b7424u: goto label_3b7424;
        case 0x3b7428u: goto label_3b7428;
        case 0x3b742cu: goto label_3b742c;
        case 0x3b7430u: goto label_3b7430;
        case 0x3b7434u: goto label_3b7434;
        case 0x3b7438u: goto label_3b7438;
        case 0x3b743cu: goto label_3b743c;
        case 0x3b7440u: goto label_3b7440;
        case 0x3b7444u: goto label_3b7444;
        case 0x3b7448u: goto label_3b7448;
        case 0x3b744cu: goto label_3b744c;
        case 0x3b7450u: goto label_3b7450;
        case 0x3b7454u: goto label_3b7454;
        case 0x3b7458u: goto label_3b7458;
        case 0x3b745cu: goto label_3b745c;
        case 0x3b7460u: goto label_3b7460;
        case 0x3b7464u: goto label_3b7464;
        case 0x3b7468u: goto label_3b7468;
        case 0x3b746cu: goto label_3b746c;
        case 0x3b7470u: goto label_3b7470;
        case 0x3b7474u: goto label_3b7474;
        case 0x3b7478u: goto label_3b7478;
        case 0x3b747cu: goto label_3b747c;
        case 0x3b7480u: goto label_3b7480;
        case 0x3b7484u: goto label_3b7484;
        case 0x3b7488u: goto label_3b7488;
        case 0x3b748cu: goto label_3b748c;
        case 0x3b7490u: goto label_3b7490;
        case 0x3b7494u: goto label_3b7494;
        case 0x3b7498u: goto label_3b7498;
        case 0x3b749cu: goto label_3b749c;
        case 0x3b74a0u: goto label_3b74a0;
        case 0x3b74a4u: goto label_3b74a4;
        case 0x3b74a8u: goto label_3b74a8;
        case 0x3b74acu: goto label_3b74ac;
        case 0x3b74b0u: goto label_3b74b0;
        case 0x3b74b4u: goto label_3b74b4;
        case 0x3b74b8u: goto label_3b74b8;
        case 0x3b74bcu: goto label_3b74bc;
        case 0x3b74c0u: goto label_3b74c0;
        case 0x3b74c4u: goto label_3b74c4;
        case 0x3b74c8u: goto label_3b74c8;
        case 0x3b74ccu: goto label_3b74cc;
        case 0x3b74d0u: goto label_3b74d0;
        case 0x3b74d4u: goto label_3b74d4;
        case 0x3b74d8u: goto label_3b74d8;
        case 0x3b74dcu: goto label_3b74dc;
        default: break;
    }

    ctx->pc = 0x3b63a0u;

label_3b63a0:
    // 0x3b63a0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x3b63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_3b63a4:
    // 0x3b63a4: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x3b63a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_3b63a8:
    // 0x3b63a8: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x3b63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_3b63ac:
    // 0x3b63ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b63acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b63b0:
    // 0x3b63b0: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x3b63b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_3b63b4:
    // 0x3b63b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b63b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b63b8:
    // 0x3b63b8: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x3b63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_3b63bc:
    // 0x3b63bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b63bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b63c0:
    // 0x3b63c0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x3b63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_3b63c4:
    // 0x3b63c4: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x3b63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_3b63c8:
    // 0x3b63c8: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x3b63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_3b63cc:
    // 0x3b63cc: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x3b63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_3b63d0:
    // 0x3b63d0: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x3b63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_3b63d4:
    // 0x3b63d4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x3b63d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_3b63d8:
    // 0x3b63d8: 0xe7bf0228  swc1        $f31, 0x228($sp)
    ctx->pc = 0x3b63d8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_3b63dc:
    // 0x3b63dc: 0xe7be0220  swc1        $f30, 0x220($sp)
    ctx->pc = 0x3b63dcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_3b63e0:
    // 0x3b63e0: 0xe7bd0218  swc1        $f29, 0x218($sp)
    ctx->pc = 0x3b63e0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_3b63e4:
    // 0x3b63e4: 0xe7bc0210  swc1        $f28, 0x210($sp)
    ctx->pc = 0x3b63e4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_3b63e8:
    // 0x3b63e8: 0xe7bb0208  swc1        $f27, 0x208($sp)
    ctx->pc = 0x3b63e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_3b63ec:
    // 0x3b63ec: 0xe7ba0200  swc1        $f26, 0x200($sp)
    ctx->pc = 0x3b63ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_3b63f0:
    // 0x3b63f0: 0xe7b901f8  swc1        $f25, 0x1F8($sp)
    ctx->pc = 0x3b63f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_3b63f4:
    // 0x3b63f4: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x3b63f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3b63f8:
    // 0x3b63f8: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x3b63f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_3b63fc:
    // 0x3b63fc: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x3b63fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_3b6400:
    // 0x3b6400: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x3b6400u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3b6404:
    // 0x3b6404: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x3b6404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3b6408:
    // 0x3b6408: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3b6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3b640c:
    // 0x3b640c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b640cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b6410:
    // 0x3b6410: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b6414:
    // 0x3b6414: 0x40f809  jalr        $v0
label_3b6418:
    if (ctx->pc == 0x3B6418u) {
        ctx->pc = 0x3B6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6414u;
        // 0x3b6418: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B641Cu;
        goto label_3b641c;
    }
    ctx->pc = 0x3B6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B641Cu);
        ctx->pc = 0x3B6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6414u;
        // 0x3b6418: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6414u, 0x3B641Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B641Cu;
label_3b641c:
    // 0x3b641c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3b641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3b6420:
    // 0x3b6420: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3b6420u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6424:
    // 0x3b6424: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x3b6424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3b6428:
    // 0x3b6428: 0x10400415  beqz        $v0, . + 4 + (0x415 << 2)
label_3b642c:
    if (ctx->pc == 0x3B642Cu) {
        ctx->pc = 0x3B642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6428u;
        // 0x3b642c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6430u;
        goto label_3b6430;
    }
    ctx->pc = 0x3B6428u;
    {
        const bool branch_taken_0x3b6428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6428u;
        // 0x3b642c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6428) {
            ctx->pc = 0x3B7480u;
            goto label_3b7480;
        }
    }
    ctx->pc = 0x3B6430u;
label_3b6430:
    // 0x3b6430: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b6430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b6434:
    // 0x3b6434: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x3b6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
label_3b6438:
    // 0x3b6438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b6438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b643c:
    // 0x3b643c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6440:
    // 0x3b6440: 0x800008  jr          $a0
label_3b6444:
    if (ctx->pc == 0x3B6444u) {
        ctx->pc = 0x3B6448u;
        goto label_3b6448;
    }
    ctx->pc = 0x3B6440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B6448u: goto label_3b6448;
            case 0x3B744Cu: goto label_3b744c;
            case 0x3B746Cu: goto label_3b746c;
            case 0x3B7480u: goto label_3b7480;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6440u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B6448u;
label_3b6448:
    // 0x3b6448: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b6448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b644c:
    // 0x3b644c: 0xc0ea12a  jal         func_3A84A8
label_3b6450:
    if (ctx->pc == 0x3B6450u) {
        ctx->pc = 0x3B6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B644Cu;
        // 0x3b6450: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6454u;
        goto label_3b6454;
    }
    ctx->pc = 0x3B644Cu;
    SET_GPR_U32(ctx, 31, 0x3B6454u);
    ctx->pc = 0x3B6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B644Cu;
    // 0x3b6450: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B644Cu, 0x3B6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6454u;
label_3b6454:
    // 0x3b6454: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x3b6454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3b6458:
    // 0x3b6458: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b6458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b645c:
    // 0x3b645c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6460:
    // 0x3b6460: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b6460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6464:
    // 0x3b6464: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b6464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b6468:
    // 0x3b6468: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b6468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b646c:
    // 0x3b646c: 0xc0ea12a  jal         func_3A84A8
label_3b6470:
    if (ctx->pc == 0x3B6470u) {
        ctx->pc = 0x3B6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B646Cu;
        // 0x3b6470: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6474u;
        goto label_3b6474;
    }
    ctx->pc = 0x3B646Cu;
    SET_GPR_U32(ctx, 31, 0x3B6474u);
    ctx->pc = 0x3B6470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B646Cu;
    // 0x3b6470: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B646Cu, 0x3B6474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6474u;
label_3b6474:
    // 0x3b6474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b6474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b6478:
    // 0x3b6478: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3b6478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3b647c:
    // 0x3b647c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b647cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6480:
    // 0x3b6480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6484:
    // 0x3b6484: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b6488:
    // 0x3b6488: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b6488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b648c:
    // 0x3b648c: 0xc0ea146  jal         func_3A8518
label_3b6490:
    if (ctx->pc == 0x3B6490u) {
        ctx->pc = 0x3B6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B648Cu;
        // 0x3b6490: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6494u;
        goto label_3b6494;
    }
    ctx->pc = 0x3B648Cu;
    SET_GPR_U32(ctx, 31, 0x3B6494u);
    ctx->pc = 0x3B6490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B648Cu;
    // 0x3b6490: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B648Cu, 0x3B6494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6494u;
label_3b6494:
    // 0x3b6494: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b6494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b6498:
    // 0x3b6498: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b6498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b649c:
    // 0x3b649c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3b649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3b64a0:
    // 0x3b64a0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b64a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b64a4:
    // 0x3b64a4: 0xc0ea146  jal         func_3A8518
label_3b64a8:
    if (ctx->pc == 0x3B64A8u) {
        ctx->pc = 0x3B64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64A4u;
        // 0x3b64a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64ACu;
        goto label_3b64ac;
    }
    ctx->pc = 0x3B64A4u;
    SET_GPR_U32(ctx, 31, 0x3B64ACu);
    ctx->pc = 0x3B64A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B64A4u;
    // 0x3b64a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B64A4u, 0x3B64ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B64ACu;
label_3b64ac:
    // 0x3b64ac: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b64acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b64b0:
    // 0x3b64b0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b64b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b64b4:
    // 0x3b64b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b64b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b64b8:
    // 0x3b64b8: 0xc0ea14c  jal         func_3A8530
label_3b64bc:
    if (ctx->pc == 0x3B64BCu) {
        ctx->pc = 0x3B64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64B8u;
        // 0x3b64bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64C0u;
        goto label_3b64c0;
    }
    ctx->pc = 0x3B64B8u;
    SET_GPR_U32(ctx, 31, 0x3B64C0u);
    ctx->pc = 0x3B64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B64B8u;
    // 0x3b64bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B64B8u, 0x3B64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B64C0u;
label_3b64c0:
    // 0x3b64c0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b64c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b64c4:
    // 0x3b64c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b64c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b64c8:
    // 0x3b64c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b64c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b64cc:
    // 0x3b64cc: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b64ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b64d0:
    // 0x3b64d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b64d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b64d4:
    // 0x3b64d4: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3b64d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3b64d8:
    // 0x3b64d8: 0xc0ea14c  jal         func_3A8530
label_3b64dc:
    if (ctx->pc == 0x3B64DCu) {
        ctx->pc = 0x3B64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64D8u;
        // 0x3b64dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B64E0u;
        goto label_3b64e0;
    }
    ctx->pc = 0x3B64D8u;
    SET_GPR_U32(ctx, 31, 0x3B64E0u);
    ctx->pc = 0x3B64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B64D8u;
    // 0x3b64dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B64D8u, 0x3B64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B64E0u;
label_3b64e0:
    // 0x3b64e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b64e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b64e4:
    // 0x3b64e4: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x3b64e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_3b64e8:
    // 0x3b64e8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3b64ec:
    // 0x3b64ec: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x3b64ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3b64f0:
    // 0x3b64f0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x3b64f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b64f4:
    // 0x3b64f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b64f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b64f8:
    // 0x3b64f8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3b64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3b64fc:
    // 0x3b64fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b64fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6500:
    // 0x3b6500: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b6500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b6504:
    // 0x3b6504: 0xc0e90ca  jal         func_3A4328
label_3b6508:
    if (ctx->pc == 0x3B6508u) {
        ctx->pc = 0x3B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6504u;
        // 0x3b6508: 0xafc2000c  sw          $v0, 0xC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B650Cu;
        goto label_3b650c;
    }
    ctx->pc = 0x3B6504u;
    SET_GPR_U32(ctx, 31, 0x3B650Cu);
    ctx->pc = 0x3B6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6504u;
    // 0x3b6508: 0xafc2000c  sw          $v0, 0xC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B6504u, 0x3B650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B650Cu;
label_3b650c:
    // 0x3b650c: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3b650cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6510:
    // 0x3b6510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b6514:
    // 0x3b6514: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b6514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6518:
    // 0x3b6518: 0x2456b8b8  addiu       $s6, $v0, -0x4748
    ctx->pc = 0x3b6518u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3b651c:
    // 0x3b651c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b651cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6520:
    // 0x3b6520: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b6520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6524:
    // 0x3b6524: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b6524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6528:
    // 0x3b6528: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b6528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b652c:
    // 0x3b652c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b652cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b6530:
    // 0x3b6530: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b6530u;
    // VWAITQ (Q already resolved in this runtime)
label_3b6534:
    // 0x3b6534: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b6534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b6538:
    // 0x3b6538: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b6538u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b653c:
    // 0x3b653c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3b653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3b6540:
    // 0x3b6540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b6544:
    // 0x3b6544: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b6544u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b6548:
    // 0x3b6548: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b654c:
    // 0x3b654c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b654cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b6550:
    // 0x3b6550: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b6554:
    // 0x3b6554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6558:
    // 0x3b6558: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b6558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b655c:
    // 0x3b655c: 0xc0cd518  jal         func_335460
label_3b6560:
    if (ctx->pc == 0x3B6560u) {
        ctx->pc = 0x3B6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B655Cu;
        // 0x3b6560: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6564u;
        goto label_3b6564;
    }
    ctx->pc = 0x3B655Cu;
    SET_GPR_U32(ctx, 31, 0x3B6564u);
    ctx->pc = 0x3B6560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B655Cu;
    // 0x3b6560: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B655Cu, 0x3B6564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6564u;
label_3b6564:
    // 0x3b6564: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b6568:
    // 0x3b6568: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x3b6568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b656c:
    // 0x3b656c: 0x3c01c059  lui         $at, 0xC059
    ctx->pc = 0x3b656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49241 << 16));
label_3b6570:
    // 0x3b6570: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b6570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b6574:
    // 0x3b6574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b6574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6578:
    // 0x3b6578: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b657c:
    // 0x3b657c: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b657cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b6580:
    // 0x3b6580: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b6580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b6584:
    // 0x3b6584: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b6584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6588:
    // 0x3b6588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b658c:
    // 0x3b658c: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b658cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6590:
    // 0x3b6590: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6594:
    // 0x3b6594: 0xc136b18  jal         func_4DAC60
label_3b6598:
    if (ctx->pc == 0x3B6598u) {
        ctx->pc = 0x3B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6594u;
        // 0x3b6598: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B659Cu;
        goto label_3b659c;
    }
    ctx->pc = 0x3B6594u;
    SET_GPR_U32(ctx, 31, 0x3B659Cu);
    ctx->pc = 0x3B6598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6594u;
    // 0x3b6598: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6594u, 0x3B659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B659Cu;
label_3b659c:
    // 0x3b659c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b659cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b65a0:
    // 0x3b65a0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b65a4:
    // 0x3b65a4: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b65a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b65a8:
    // 0x3b65a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b65a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b65ac:
    // 0x3b65ac: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b65acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b65b0:
    // 0x3b65b0: 0xc0f15f6  jal         func_3C57D8
label_3b65b4:
    if (ctx->pc == 0x3B65B4u) {
        ctx->pc = 0x3B65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65B0u;
        // 0x3b65b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65B8u;
        goto label_3b65b8;
    }
    ctx->pc = 0x3B65B0u;
    SET_GPR_U32(ctx, 31, 0x3B65B8u);
    ctx->pc = 0x3B65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B65B0u;
    // 0x3b65b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B65B0u, 0x3B65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B65B8u;
label_3b65b8:
    // 0x3b65b8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b65b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b65bc:
    // 0x3b65bc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b65bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b65c0:
    // 0x3b65c0: 0xc0cd518  jal         func_335460
label_3b65c4:
    if (ctx->pc == 0x3B65C4u) {
        ctx->pc = 0x3B65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65C0u;
        // 0x3b65c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65C8u;
        goto label_3b65c8;
    }
    ctx->pc = 0x3B65C0u;
    SET_GPR_U32(ctx, 31, 0x3B65C8u);
    ctx->pc = 0x3B65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B65C0u;
    // 0x3b65c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B65C0u, 0x3B65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B65C8u;
label_3b65c8:
    // 0x3b65c8: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x3b65c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
label_3b65cc:
    // 0x3b65cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b65ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b65d0:
    // 0x3b65d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b65d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b65d4:
    // 0x3b65d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b65d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b65d8:
    // 0x3b65d8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b65d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b65dc:
    // 0x3b65dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b65e0:
    // 0x3b65e0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3b65e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b65e4:
    // 0x3b65e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b65e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b65e8:
    // 0x3b65e8: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b65e8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b65ec:
    // 0x3b65ec: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b65ecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b65f0:
    // 0x3b65f0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b65f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b65f4:
    // 0x3b65f4: 0xc136b18  jal         func_4DAC60
label_3b65f8:
    if (ctx->pc == 0x3B65F8u) {
        ctx->pc = 0x3B65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65F4u;
        // 0x3b65f8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65FCu;
        goto label_3b65fc;
    }
    ctx->pc = 0x3B65F4u;
    SET_GPR_U32(ctx, 31, 0x3B65FCu);
    ctx->pc = 0x3B65F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B65F4u;
    // 0x3b65f8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B65F4u, 0x3B65FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B65FCu;
label_3b65fc:
    // 0x3b65fc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b65fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6600:
    // 0x3b6600: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b6604:
    // 0x3b6604: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b6604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b6608:
    // 0x3b6608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b6608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b660c:
    // 0x3b660c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b6610:
    // 0x3b6610: 0xc0f15f6  jal         func_3C57D8
label_3b6614:
    if (ctx->pc == 0x3B6614u) {
        ctx->pc = 0x3B6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6610u;
        // 0x3b6614: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6618u;
        goto label_3b6618;
    }
    ctx->pc = 0x3B6610u;
    SET_GPR_U32(ctx, 31, 0x3B6618u);
    ctx->pc = 0x3B6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6610u;
    // 0x3b6614: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6610u, 0x3B6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6618u;
label_3b6618:
    // 0x3b6618: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b6618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b661c:
    // 0x3b661c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b661cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b6620:
    // 0x3b6620: 0xc0cd518  jal         func_335460
label_3b6624:
    if (ctx->pc == 0x3B6624u) {
        ctx->pc = 0x3B6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6620u;
        // 0x3b6624: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6628u;
        goto label_3b6628;
    }
    ctx->pc = 0x3B6620u;
    SET_GPR_U32(ctx, 31, 0x3B6628u);
    ctx->pc = 0x3B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6620u;
    // 0x3b6624: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6620u, 0x3B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6628u;
label_3b6628:
    // 0x3b6628: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b6628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b662c:
    // 0x3b662c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6630:
    // 0x3b6630: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x3b6630u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6634:
    // 0x3b6634: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b6634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b6638:
    // 0x3b6638: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b6638u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b663c:
    // 0x3b663c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6640:
    // 0x3b6640: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b6640u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6644:
    // 0x3b6644: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6648:
    // 0x3b6648: 0xc136b18  jal         func_4DAC60
label_3b664c:
    if (ctx->pc == 0x3B664Cu) {
        ctx->pc = 0x3B664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6648u;
        // 0x3b664c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6650u;
        goto label_3b6650;
    }
    ctx->pc = 0x3B6648u;
    SET_GPR_U32(ctx, 31, 0x3B6650u);
    ctx->pc = 0x3B664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6648u;
    // 0x3b664c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6648u, 0x3B6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6650u;
label_3b6650:
    // 0x3b6650: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6654:
    // 0x3b6654: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b6658:
    // 0x3b6658: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b6658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b665c:
    // 0x3b665c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6660:
    // 0x3b6660: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b6660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b6664:
    // 0x3b6664: 0xc0f15f6  jal         func_3C57D8
label_3b6668:
    if (ctx->pc == 0x3B6668u) {
        ctx->pc = 0x3B6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6664u;
        // 0x3b6668: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B666Cu;
        goto label_3b666c;
    }
    ctx->pc = 0x3B6664u;
    SET_GPR_U32(ctx, 31, 0x3B666Cu);
    ctx->pc = 0x3B6668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6664u;
    // 0x3b6668: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6664u, 0x3B666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B666Cu;
label_3b666c:
    // 0x3b666c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b666cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b6670:
    // 0x3b6670: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b6670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b6674:
    // 0x3b6674: 0xc0cd518  jal         func_335460
label_3b6678:
    if (ctx->pc == 0x3B6678u) {
        ctx->pc = 0x3B6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6674u;
        // 0x3b6678: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B667Cu;
        goto label_3b667c;
    }
    ctx->pc = 0x3B6674u;
    SET_GPR_U32(ctx, 31, 0x3B667Cu);
    ctx->pc = 0x3B6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6674u;
    // 0x3b6678: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6674u, 0x3B667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B667Cu;
label_3b667c:
    // 0x3b667c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b667cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b6680:
    // 0x3b6680: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6684:
    // 0x3b6684: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x3b6684u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6688:
    // 0x3b6688: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b6688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b668c:
    // 0x3b668c: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b668cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b6690:
    // 0x3b6690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6694:
    // 0x3b6694: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b6694u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6698:
    // 0x3b6698: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b669c:
    // 0x3b669c: 0xc136b18  jal         func_4DAC60
label_3b66a0:
    if (ctx->pc == 0x3B66A0u) {
        ctx->pc = 0x3B66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B669Cu;
        // 0x3b66a0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66A4u;
        goto label_3b66a4;
    }
    ctx->pc = 0x3B669Cu;
    SET_GPR_U32(ctx, 31, 0x3B66A4u);
    ctx->pc = 0x3B66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B669Cu;
    // 0x3b66a0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B669Cu, 0x3B66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66A4u;
label_3b66a4:
    // 0x3b66a4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b66a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b66a8:
    // 0x3b66a8: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b66a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b66ac:
    // 0x3b66ac: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b66acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b66b0:
    // 0x3b66b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b66b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b66b4:
    // 0x3b66b4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b66b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b66b8:
    // 0x3b66b8: 0xc0f15f6  jal         func_3C57D8
label_3b66bc:
    if (ctx->pc == 0x3B66BCu) {
        ctx->pc = 0x3B66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66B8u;
        // 0x3b66bc: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66C0u;
        goto label_3b66c0;
    }
    ctx->pc = 0x3B66B8u;
    SET_GPR_U32(ctx, 31, 0x3B66C0u);
    ctx->pc = 0x3B66BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B66B8u;
    // 0x3b66bc: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B66B8u, 0x3B66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66C0u;
label_3b66c0:
    // 0x3b66c0: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x3b66c0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b66c4:
    // 0x3b66c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b66c8:
    // 0x3b66c8: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b66c8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b66cc:
    // 0x3b66cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b66ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b66d0:
    // 0x3b66d0: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x3b66d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b66d4:
    // 0x3b66d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b66d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b66d8:
    // 0x3b66d8: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b66d8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b66dc:
    // 0x3b66dc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b66dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b66e0:
    // 0x3b66e0: 0xc136b18  jal         func_4DAC60
label_3b66e4:
    if (ctx->pc == 0x3B66E4u) {
        ctx->pc = 0x3B66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66E0u;
        // 0x3b66e4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66E8u;
        goto label_3b66e8;
    }
    ctx->pc = 0x3B66E0u;
    SET_GPR_U32(ctx, 31, 0x3B66E8u);
    ctx->pc = 0x3B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B66E0u;
    // 0x3b66e4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B66E0u, 0x3B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66E8u;
label_3b66e8:
    // 0x3b66e8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b66e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b66ec:
    // 0x3b66ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b66f0:
    // 0x3b66f0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b66f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b66f4:
    // 0x3b66f4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b66f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b66f8:
    // 0x3b66f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b66f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b66fc:
    // 0x3b66fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b6700:
    // 0x3b6700: 0xc136b24  jal         func_4DAC90
label_3b6704:
    if (ctx->pc == 0x3B6704u) {
        ctx->pc = 0x3B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6700u;
        // 0x3b6704: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6708u;
        goto label_3b6708;
    }
    ctx->pc = 0x3B6700u;
    SET_GPR_U32(ctx, 31, 0x3B6708u);
    ctx->pc = 0x3B6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6700u;
    // 0x3b6704: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6700u, 0x3B6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6708u;
label_3b6708:
    // 0x3b6708: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b670c:
    // 0x3b670c: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3b670cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3b6710:
    // 0x3b6710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b6710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6714:
    // 0x3b6714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b6714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6718:
    // 0x3b6718: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b671c:
    // 0x3b671c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b671cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b6720:
    // 0x3b6720: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b6720u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b6724:
    // 0x3b6724: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x3b6724u;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
label_3b6728:
    // 0x3b6728: 0x4600fbc6  mov.s       $f15, $f31
    ctx->pc = 0x3b6728u;
    ctx->f[15] = FPU_MOV_S(ctx->f[31]);
label_3b672c:
    // 0x3b672c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b672cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b6730:
    // 0x3b6730: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3b6730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3b6734:
    // 0x3b6734: 0xc0f16c0  jal         func_3C5B00
label_3b6738:
    if (ctx->pc == 0x3B6738u) {
        ctx->pc = 0x3B6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6734u;
        // 0x3b6738: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B673Cu;
        goto label_3b673c;
    }
    ctx->pc = 0x3B6734u;
    SET_GPR_U32(ctx, 31, 0x3B673Cu);
    ctx->pc = 0x3B6738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6734u;
    // 0x3b6738: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B6734u, 0x3B673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B673Cu;
label_3b673c:
    // 0x3b673c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3b673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3b6740:
    // 0x3b6740: 0x5c40033e  bgtzl       $v0, . + 4 + (0x33E << 2)
label_3b6744:
    if (ctx->pc == 0x3B6744u) {
        ctx->pc = 0x3B6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6740u;
        // 0x3b6744: 0x8fc5000c  lw          $a1, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6748u;
        goto label_3b6748;
    }
    ctx->pc = 0x3B6740u;
    {
        const bool branch_taken_0x3b6740 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3b6740) {
            ctx->pc = 0x3B6744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6740u;
            // 0x3b6744: 0x8fc5000c  lw          $a1, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B743Cu;
            goto label_3b743c;
        }
    }
    ctx->pc = 0x3B6748u;
label_3b6748:
    // 0x3b6748: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3b6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3b674c:
    // 0x3b674c: 0x8e8400d8  lw          $a0, 0xD8($s4)
    ctx->pc = 0x3b674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_3b6750:
    // 0x3b6750: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3b6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3b6754:
    // 0x3b6754: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b6754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b6758:
    // 0x3b6758: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3b6758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3b675c:
    // 0x3b675c: 0xc0e91b2  jal         func_3A46C8
label_3b6760:
    if (ctx->pc == 0x3B6760u) {
        ctx->pc = 0x3B6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B675Cu;
        // 0x3b6760: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6764u;
        goto label_3b6764;
    }
    ctx->pc = 0x3B675Cu;
    SET_GPR_U32(ctx, 31, 0x3B6764u);
    ctx->pc = 0x3B6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B675Cu;
    // 0x3b6760: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B675Cu, 0x3B6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6764u;
label_3b6764:
    // 0x3b6764: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b6764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b6768:
    // 0x3b6768: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x3b6768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_3b676c:
    // 0x3b676c: 0xc0e91b2  jal         func_3A46C8
label_3b6770:
    if (ctx->pc == 0x3B6770u) {
        ctx->pc = 0x3B6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B676Cu;
        // 0x3b6770: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6774u;
        goto label_3b6774;
    }
    ctx->pc = 0x3B676Cu;
    SET_GPR_U32(ctx, 31, 0x3B6774u);
    ctx->pc = 0x3B6770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B676Cu;
    // 0x3b6770: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B676Cu, 0x3B6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6774u;
label_3b6774:
    // 0x3b6774: 0xc0e92c0  jal         func_3A4B00
label_3b6778:
    if (ctx->pc == 0x3B6778u) {
        ctx->pc = 0x3B6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6774u;
        // 0x3b6778: 0x8e8400e0  lw          $a0, 0xE0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B677Cu;
        goto label_3b677c;
    }
    ctx->pc = 0x3B6774u;
    SET_GPR_U32(ctx, 31, 0x3B677Cu);
    ctx->pc = 0x3B6778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6774u;
    // 0x3b6778: 0x8e8400e0  lw          $a0, 0xE0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B6774u, 0x3B677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B677Cu;
label_3b677c:
    // 0x3b677c: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x3b677cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6780:
    // 0x3b6780: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6784:
    // 0x3b6784: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b6784u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b6788:
    // 0x3b6788: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b6788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b678c:
    // 0x3b678c: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x3b678cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b6790:
    // 0x3b6790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6794:
    // 0x3b6794: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b6794u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6798:
    // 0x3b6798: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b679c:
    // 0x3b679c: 0xc136b18  jal         func_4DAC60
label_3b67a0:
    if (ctx->pc == 0x3B67A0u) {
        ctx->pc = 0x3B67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B679Cu;
        // 0x3b67a0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B67A4u;
        goto label_3b67a4;
    }
    ctx->pc = 0x3B679Cu;
    SET_GPR_U32(ctx, 31, 0x3B67A4u);
    ctx->pc = 0x3B67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B679Cu;
    // 0x3b67a0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B679Cu, 0x3B67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67A4u;
label_3b67a4:
    // 0x3b67a4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b67a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b67a8:
    // 0x3b67a8: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b67a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b67ac:
    // 0x3b67ac: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3b67acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3b67b0:
    // 0x3b67b0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3b67b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3b67b4:
    // 0x3b67b4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b67b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b67b8:
    // 0x3b67b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b67bc:
    // 0x3b67bc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b67bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b67c0:
    // 0x3b67c0: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b67c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b67c4:
    // 0x3b67c4: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x3b67c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
label_3b67c8:
    // 0x3b67c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b67c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b67cc:
    // 0x3b67cc: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b67ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b67d0:
    // 0x3b67d0: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b67d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b67d4:
    // 0x3b67d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b67d8:
    // 0x3b67d8: 0xc0f16c0  jal         func_3C5B00
label_3b67dc:
    if (ctx->pc == 0x3B67DCu) {
        ctx->pc = 0x3B67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67D8u;
        // 0x3b67dc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B67E0u;
        goto label_3b67e0;
    }
    ctx->pc = 0x3B67D8u;
    SET_GPR_U32(ctx, 31, 0x3B67E0u);
    ctx->pc = 0x3B67DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B67D8u;
    // 0x3b67dc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B67D8u, 0x3B67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67E0u;
label_3b67e0:
    // 0x3b67e0: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x3b67e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b67e4:
    // 0x3b67e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b67e8:
    // 0x3b67e8: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b67e8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b67ec:
    // 0x3b67ec: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b67f0:
    // 0x3b67f0: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x3b67f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b67f4:
    // 0x3b67f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b67f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b67f8:
    // 0x3b67f8: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b67f8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b67fc:
    // 0x3b67fc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b67fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6800:
    // 0x3b6800: 0xc136b18  jal         func_4DAC60
label_3b6804:
    if (ctx->pc == 0x3B6804u) {
        ctx->pc = 0x3B6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6800u;
        // 0x3b6804: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6808u;
        goto label_3b6808;
    }
    ctx->pc = 0x3B6800u;
    SET_GPR_U32(ctx, 31, 0x3B6808u);
    ctx->pc = 0x3B6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6800u;
    // 0x3b6804: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6800u, 0x3B6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6808u;
label_3b6808:
    // 0x3b6808: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b680c:
    // 0x3b680c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6810:
    // 0x3b6810: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b6810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b6814:
    // 0x3b6814: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x3b6814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_3b6818:
    // 0x3b6818: 0xc136b24  jal         func_4DAC90
label_3b681c:
    if (ctx->pc == 0x3B681Cu) {
        ctx->pc = 0x3B681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6818u;
        // 0x3b681c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6820u;
        goto label_3b6820;
    }
    ctx->pc = 0x3B6818u;
    SET_GPR_U32(ctx, 31, 0x3B6820u);
    ctx->pc = 0x3B681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6818u;
    // 0x3b681c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6818u, 0x3B6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6820u;
label_3b6820:
    // 0x3b6820: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6824:
    // 0x3b6824: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b6824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b6828:
    // 0x3b6828: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x3b6828u;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
label_3b682c:
    // 0x3b682c: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b682cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b6830:
    // 0x3b6830: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6834:
    // 0x3b6834: 0x4600ebc6  mov.s       $f15, $f29
    ctx->pc = 0x3b6834u;
    ctx->f[15] = FPU_MOV_S(ctx->f[29]);
label_3b6838:
    // 0x3b6838: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b6838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b683c:
    // 0x3b683c: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b683cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b6840:
    // 0x3b6840: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b6840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b6844:
    // 0x3b6844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b6844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6848:
    // 0x3b6848: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3b6848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b684c:
    // 0x3b684c: 0xc0f16c0  jal         func_3C5B00
label_3b6850:
    if (ctx->pc == 0x3B6850u) {
        ctx->pc = 0x3B6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B684Cu;
        // 0x3b6850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6854u;
        goto label_3b6854;
    }
    ctx->pc = 0x3B684Cu;
    SET_GPR_U32(ctx, 31, 0x3B6854u);
    ctx->pc = 0x3B6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B684Cu;
    // 0x3b6850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B684Cu, 0x3B6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6854u;
label_3b6854:
    // 0x3b6854: 0xc0e8fc0  jal         func_3A3F00
label_3b6858:
    if (ctx->pc == 0x3B6858u) {
        ctx->pc = 0x3B6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6854u;
        // 0x3b6858: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B685Cu;
        goto label_3b685c;
    }
    ctx->pc = 0x3B6854u;
    SET_GPR_U32(ctx, 31, 0x3B685Cu);
    ctx->pc = 0x3B6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6854u;
    // 0x3b6858: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3B6854u, 0x3B685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B685Cu;
label_3b685c:
    // 0x3b685c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6860:
    // 0x3b6860: 0xc0e90ca  jal         func_3A4328
label_3b6864:
    if (ctx->pc == 0x3B6864u) {
        ctx->pc = 0x3B6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6860u;
        // 0x3b6864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6868u;
        goto label_3b6868;
    }
    ctx->pc = 0x3B6860u;
    SET_GPR_U32(ctx, 31, 0x3B6868u);
    ctx->pc = 0x3B6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6860u;
    // 0x3b6864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B6860u, 0x3B6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6868u;
label_3b6868:
    // 0x3b6868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b686c:
    // 0x3b686c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b686cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b6870:
    // 0x3b6870: 0xc136afa  jal         func_4DABE8
label_3b6874:
    if (ctx->pc == 0x3B6874u) {
        ctx->pc = 0x3B6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6870u;
        // 0x3b6874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6878u;
        goto label_3b6878;
    }
    ctx->pc = 0x3B6870u;
    SET_GPR_U32(ctx, 31, 0x3B6878u);
    ctx->pc = 0x3B6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6870u;
    // 0x3b6874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3B6870u, 0x3B6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6878u;
label_3b6878:
    // 0x3b6878: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b687c:
    // 0x3b687c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6880:
    // 0x3b6880: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b6884:
    // 0x3b6884: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b6884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b6888:
    // 0x3b6888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b6888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b688c:
    // 0x3b688c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3b688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b6890:
    // 0x3b6890: 0xc136b24  jal         func_4DAC90
label_3b6894:
    if (ctx->pc == 0x3B6894u) {
        ctx->pc = 0x3B6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6890u;
        // 0x3b6894: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6898u;
        goto label_3b6898;
    }
    ctx->pc = 0x3B6890u;
    SET_GPR_U32(ctx, 31, 0x3B6898u);
    ctx->pc = 0x3B6894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6890u;
    // 0x3b6894: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6890u, 0x3B6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6898u;
label_3b6898:
    // 0x3b6898: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b689c:
    // 0x3b689c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b68a0:
    // 0x3b68a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b68a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b68a4:
    // 0x3b68a4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3b68a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b68a8:
    // 0x3b68a8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b68ac:
    // 0x3b68ac: 0xc136b18  jal         func_4DAC60
label_3b68b0:
    if (ctx->pc == 0x3B68B0u) {
        ctx->pc = 0x3B68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68ACu;
        // 0x3b68b0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68B4u;
        goto label_3b68b4;
    }
    ctx->pc = 0x3B68ACu;
    SET_GPR_U32(ctx, 31, 0x3B68B4u);
    ctx->pc = 0x3B68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B68ACu;
    // 0x3b68b0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B68ACu, 0x3B68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B68B4u;
label_3b68b4:
    // 0x3b68b4: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x3b68b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_3b68b8:
    // 0x3b68b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b68bc:
    // 0x3b68bc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b68bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b68c0:
    // 0x3b68c0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3b68c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
label_3b68c4:
    // 0x3b68c4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b68c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b68c8:
    // 0x3b68c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b68c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b68cc:
    // 0x3b68cc: 0xc0cd518  jal         func_335460
label_3b68d0:
    if (ctx->pc == 0x3B68D0u) {
        ctx->pc = 0x3B68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68CCu;
        // 0x3b68d0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B68D4u;
        goto label_3b68d4;
    }
    ctx->pc = 0x3B68CCu;
    SET_GPR_U32(ctx, 31, 0x3B68D4u);
    ctx->pc = 0x3B68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B68CCu;
    // 0x3b68d0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B68CCu, 0x3B68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B68D4u;
label_3b68d4:
    // 0x3b68d4: 0x3c01c059  lui         $at, 0xC059
    ctx->pc = 0x3b68d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49241 << 16));
label_3b68d8:
    // 0x3b68d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b68d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b68dc:
    // 0x3b68dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b68dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b68e0:
    // 0x3b68e0: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x3b68e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3b68e4:
    // 0x3b68e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3b68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b68e8:
    // 0x3b68e8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3b68e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b68ec:
    // 0x3b68ec: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b68ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b68f0:
    // 0x3b68f0: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b68f0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b68f4:
    // 0x3b68f4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b68f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b68f8:
    // 0x3b68f8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b68f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b68fc:
    // 0x3b68fc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b68fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6900:
    // 0x3b6900: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6904:
    // 0x3b6904: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6908:
    // 0x3b6908: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b690c:
    // 0x3b690c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b690cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6910:
    // 0x3b6910: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6910u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6914:
    // 0x3b6914: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6918:
    // 0x3b6918: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b691c:
    // 0x3b691c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b691cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6920:
    // 0x3b6920: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6924:
    // 0x3b6924: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6928:
    // 0x3b6928: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b692c:
    // 0x3b692c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b692cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6930:
    // 0x3b6930: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6930u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6934:
    // 0x3b6934: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6934u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6938:
    // 0x3b6938: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b693c:
    // 0x3b693c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b693cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6940:
    // 0x3b6940: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6940u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6944:
    // 0x3b6944: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6948:
    // 0x3b6948: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b694c:
    // 0x3b694c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b6950:
    // 0x3b6950: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6954:
    // 0x3b6954: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b6958:
    // 0x3b6958: 0xc136b18  jal         func_4DAC60
label_3b695c:
    if (ctx->pc == 0x3B695Cu) {
        ctx->pc = 0x3B695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6958u;
        // 0x3b695c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6960u;
        goto label_3b6960;
    }
    ctx->pc = 0x3B6958u;
    SET_GPR_U32(ctx, 31, 0x3B6960u);
    ctx->pc = 0x3B695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6958u;
    // 0x3b695c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6958u, 0x3B6960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6960u;
label_3b6960:
    // 0x3b6960: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6964:
    // 0x3b6964: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x3b6964u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b6968:
    // 0x3b6968: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b696c:
    // 0x3b696c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6970:
    // 0x3b6970: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6974:
    // 0x3b6974: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6978:
    // 0x3b6978: 0xc0f15f6  jal         func_3C57D8
label_3b697c:
    if (ctx->pc == 0x3B697Cu) {
        ctx->pc = 0x3B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6978u;
        // 0x3b697c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6980u;
        goto label_3b6980;
    }
    ctx->pc = 0x3B6978u;
    SET_GPR_U32(ctx, 31, 0x3B6980u);
    ctx->pc = 0x3B697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6978u;
    // 0x3b697c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6978u, 0x3B6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6980u;
label_3b6980:
    // 0x3b6980: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6984:
    // 0x3b6984: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b6984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b6988:
    // 0x3b6988: 0xc0cd518  jal         func_335460
label_3b698c:
    if (ctx->pc == 0x3B698Cu) {
        ctx->pc = 0x3B698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6988u;
        // 0x3b698c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6990u;
        goto label_3b6990;
    }
    ctx->pc = 0x3B6988u;
    SET_GPR_U32(ctx, 31, 0x3B6990u);
    ctx->pc = 0x3B698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6988u;
    // 0x3b698c: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6988u, 0x3B6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6990u;
label_3b6990:
    // 0x3b6990: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x3b6990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
label_3b6994:
    // 0x3b6994: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b6994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b6998:
    // 0x3b6998: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b6998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b699c:
    // 0x3b699c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3b699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b69a0:
    // 0x3b69a0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3b69a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b69a4:
    // 0x3b69a4: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b69a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b69a8:
    // 0x3b69a8: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b69a8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b69ac:
    // 0x3b69ac: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b69acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b69b0:
    // 0x3b69b0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b69b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b69b4:
    // 0x3b69b4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b69b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b69b8:
    // 0x3b69b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b69b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b69bc:
    // 0x3b69bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b69bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b69c0:
    // 0x3b69c0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b69c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b69c4:
    // 0x3b69c4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b69c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b69c8:
    // 0x3b69c8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b69c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b69cc:
    // 0x3b69cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b69ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b69d0:
    // 0x3b69d0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b69d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b69d4:
    // 0x3b69d4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b69d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b69d8:
    // 0x3b69d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b69d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b69dc:
    // 0x3b69dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b69dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b69e0:
    // 0x3b69e0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b69e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b69e4:
    // 0x3b69e4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b69e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b69e8:
    // 0x3b69e8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b69e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b69ec:
    // 0x3b69ec: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b69ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b69f0:
    // 0x3b69f0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b69f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b69f4:
    // 0x3b69f4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b69f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b69f8:
    // 0x3b69f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b69f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b69fc:
    // 0x3b69fc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6a00:
    // 0x3b6a00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6a04:
    // 0x3b6a04: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b6a08:
    // 0x3b6a08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6a0c:
    // 0x3b6a0c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b6a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b6a10:
    // 0x3b6a10: 0xc136b18  jal         func_4DAC60
label_3b6a14:
    if (ctx->pc == 0x3B6A14u) {
        ctx->pc = 0x3B6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A10u;
        // 0x3b6a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A18u;
        goto label_3b6a18;
    }
    ctx->pc = 0x3B6A10u;
    SET_GPR_U32(ctx, 31, 0x3B6A18u);
    ctx->pc = 0x3B6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A10u;
    // 0x3b6a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6A10u, 0x3B6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A18u;
label_3b6a18:
    // 0x3b6a18: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6a1c:
    // 0x3b6a1c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b6a20:
    // 0x3b6a20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b6a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6a24:
    // 0x3b6a24: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b6a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b6a28:
    // 0x3b6a28: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6a2c:
    // 0x3b6a2c: 0xc0f15f6  jal         func_3C57D8
label_3b6a30:
    if (ctx->pc == 0x3B6A30u) {
        ctx->pc = 0x3B6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A2Cu;
        // 0x3b6a30: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A34u;
        goto label_3b6a34;
    }
    ctx->pc = 0x3B6A2Cu;
    SET_GPR_U32(ctx, 31, 0x3B6A34u);
    ctx->pc = 0x3B6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A2Cu;
    // 0x3b6a30: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6A2Cu, 0x3B6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A34u;
label_3b6a34:
    // 0x3b6a34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b6a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b6a38:
    // 0x3b6a38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6a3c:
    // 0x3b6a3c: 0xc0cd518  jal         func_335460
label_3b6a40:
    if (ctx->pc == 0x3B6A40u) {
        ctx->pc = 0x3B6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6A3Cu;
        // 0x3b6a40: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6A44u;
        goto label_3b6a44;
    }
    ctx->pc = 0x3B6A3Cu;
    SET_GPR_U32(ctx, 31, 0x3B6A44u);
    ctx->pc = 0x3B6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6A3Cu;
    // 0x3b6a40: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6A3Cu, 0x3B6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6A44u;
label_3b6a44:
    // 0x3b6a44: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3b6a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b6a48:
    // 0x3b6a48: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x3b6a48u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6a4c:
    // 0x3b6a4c: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b6a4cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b6a50:
    // 0x3b6a50: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b6a50u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b6a54:
    // 0x3b6a54: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6a54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6a58:
    // 0x3b6a58: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b6a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6a5c:
    // 0x3b6a5c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b6a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6a60:
    // 0x3b6a60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6a64:
    // 0x3b6a64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6a64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6a68:
    // 0x3b6a68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6a68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6a6c:
    // 0x3b6a6c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b6a6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6a70:
    // 0x3b6a70: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6a70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6a74:
    // 0x3b6a74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6a78:
    // 0x3b6a78: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6a7c:
    // 0x3b6a7c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6a7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6a80:
    // 0x3b6a80: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6a84:
    // 0x3b6a84: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6a88:
    // 0x3b6a88: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6a8c:
    // 0x3b6a8c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6a90:
    // 0x3b6a90: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6a90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6a94:
    // 0x3b6a94: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6a94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6a98:
    // 0x3b6a98: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6a9c:
    // 0x3b6a9c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6aa0:
    // 0x3b6aa0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6aa0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6aa4:
    // 0x3b6aa4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6aa8:
    // 0x3b6aa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6aac:
    // 0x3b6aac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b6ab0:
    // 0x3b6ab0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ab4:
    // 0x3b6ab4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b6ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b6ab8:
    // 0x3b6ab8: 0xc136b18  jal         func_4DAC60
label_3b6abc:
    if (ctx->pc == 0x3B6ABCu) {
        ctx->pc = 0x3B6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AB8u;
        // 0x3b6abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6AC0u;
        goto label_3b6ac0;
    }
    ctx->pc = 0x3B6AB8u;
    SET_GPR_U32(ctx, 31, 0x3B6AC0u);
    ctx->pc = 0x3B6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AB8u;
    // 0x3b6abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6AB8u, 0x3B6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AC0u;
label_3b6ac0:
    // 0x3b6ac0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6ac4:
    // 0x3b6ac4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b6ac8:
    // 0x3b6ac8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6ac8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6acc:
    // 0x3b6acc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ad0:
    // 0x3b6ad0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6ad4:
    // 0x3b6ad4: 0xc0f15f6  jal         func_3C57D8
label_3b6ad8:
    if (ctx->pc == 0x3B6AD8u) {
        ctx->pc = 0x3B6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AD4u;
        // 0x3b6ad8: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6ADCu;
        goto label_3b6adc;
    }
    ctx->pc = 0x3B6AD4u;
    SET_GPR_U32(ctx, 31, 0x3B6ADCu);
    ctx->pc = 0x3B6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AD4u;
    // 0x3b6ad8: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6AD4u, 0x3B6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6ADCu;
label_3b6adc:
    // 0x3b6adc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b6adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b6ae0:
    // 0x3b6ae0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b6ae0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b6ae4:
    // 0x3b6ae4: 0xc0cd518  jal         func_335460
label_3b6ae8:
    if (ctx->pc == 0x3B6AE8u) {
        ctx->pc = 0x3B6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6AE4u;
        // 0x3b6ae8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6AECu;
        goto label_3b6aec;
    }
    ctx->pc = 0x3B6AE4u;
    SET_GPR_U32(ctx, 31, 0x3B6AECu);
    ctx->pc = 0x3B6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6AE4u;
    // 0x3b6ae8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6AE4u, 0x3B6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6AECu;
label_3b6aec:
    // 0x3b6aec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3b6aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b6af0:
    // 0x3b6af0: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x3b6af0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6af4:
    // 0x3b6af4: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b6af4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b6af8:
    // 0x3b6af8: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b6af8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b6afc:
    // 0x3b6afc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6b00:
    // 0x3b6b00: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3b6b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6b04:
    // 0x3b6b04: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6b08:
    // 0x3b6b08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6b08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6b0c:
    // 0x3b6b0c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6b0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6b10:
    // 0x3b6b10: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6b10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6b14:
    // 0x3b6b14: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b6b14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6b18:
    // 0x3b6b18: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6b18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6b1c:
    // 0x3b6b1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6b20:
    // 0x3b6b20: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6b24:
    // 0x3b6b24: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6b24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6b28:
    // 0x3b6b28: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6b2c:
    // 0x3b6b2c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6b30:
    // 0x3b6b30: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6b34:
    // 0x3b6b34: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6b38:
    // 0x3b6b38: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6b38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6b3c:
    // 0x3b6b3c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6b3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6b40:
    // 0x3b6b40: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6b44:
    // 0x3b6b44: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6b48:
    // 0x3b6b48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6b48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6b4c:
    // 0x3b6b4c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6b50:
    // 0x3b6b50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6b54:
    // 0x3b6b54: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b6b58:
    // 0x3b6b58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b5c:
    // 0x3b6b5c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b6b60:
    // 0x3b6b60: 0xc136b18  jal         func_4DAC60
label_3b6b64:
    if (ctx->pc == 0x3B6B64u) {
        ctx->pc = 0x3B6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B60u;
        // 0x3b6b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B68u;
        goto label_3b6b68;
    }
    ctx->pc = 0x3B6B60u;
    SET_GPR_U32(ctx, 31, 0x3B6B68u);
    ctx->pc = 0x3B6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B60u;
    // 0x3b6b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6B60u, 0x3B6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B68u;
label_3b6b68:
    // 0x3b6b68: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6b6c:
    // 0x3b6b6c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b6b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b6b70:
    // 0x3b6b70: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b6b70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b6b74:
    // 0x3b6b74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b78:
    // 0x3b6b78: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6b7c:
    // 0x3b6b7c: 0xc0f15f6  jal         func_3C57D8
label_3b6b80:
    if (ctx->pc == 0x3B6B80u) {
        ctx->pc = 0x3B6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6B7Cu;
        // 0x3b6b80: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6B84u;
        goto label_3b6b84;
    }
    ctx->pc = 0x3B6B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B6B84u);
    ctx->pc = 0x3B6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6B7Cu;
    // 0x3b6b80: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B6B7Cu, 0x3B6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6B84u;
label_3b6b84:
    // 0x3b6b84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b6b88:
    // 0x3b6b88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b6b8c:
    // 0x3b6b8c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3b6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3b6b90:
    // 0x3b6b90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b6b94:
    // 0x3b6b94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b6b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6b98:
    // 0x3b6b98: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3b6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3b6b9c:
    // 0x3b6b9c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3b6b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6ba0:
    // 0x3b6ba0: 0xc1073cc  jal         func_41CF30
label_3b6ba4:
    if (ctx->pc == 0x3B6BA4u) {
        ctx->pc = 0x3B6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BA0u;
        // 0x3b6ba4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BA8u;
        goto label_3b6ba8;
    }
    ctx->pc = 0x3B6BA0u;
    SET_GPR_U32(ctx, 31, 0x3B6BA8u);
    ctx->pc = 0x3B6BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6BA0u;
    // 0x3b6ba4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B6BA0u, 0x3B6BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BA8u;
label_3b6ba8:
    // 0x3b6ba8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b6ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b6bac:
    // 0x3b6bac: 0x14400211  bnez        $v0, . + 4 + (0x211 << 2)
label_3b6bb0:
    if (ctx->pc == 0x3B6BB0u) {
        ctx->pc = 0x3B6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BACu;
        // 0x3b6bb0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BB4u;
        goto label_3b6bb4;
    }
    ctx->pc = 0x3B6BACu;
    {
        const bool branch_taken_0x3b6bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BACu;
        // 0x3b6bb0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bac) {
            ctx->pc = 0x3B73F4u;
            goto label_3b73f4;
        }
    }
    ctx->pc = 0x3B6BB4u;
label_3b6bb4:
    // 0x3b6bb4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3b6bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3b6bb8:
    // 0x3b6bb8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b6bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b6bbc:
    // 0x3b6bbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6bc0:
    // 0x3b6bc0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b6bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b6bc4:
    // 0x3b6bc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b6bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b6bc8:
    // 0x3b6bc8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b6bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b6bcc:
    // 0x3b6bcc: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3b6bccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
label_3b6bd0:
    // 0x3b6bd0: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x3b6bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
label_3b6bd4:
    // 0x3b6bd4: 0x3421cdcd  ori         $at, $at, 0xCDCD
    ctx->pc = 0x3b6bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52685);
label_3b6bd8:
    // 0x3b6bd8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b6bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b6bdc:
    // 0x3b6bdc: 0xc0cd518  jal         func_335460
label_3b6be0:
    if (ctx->pc == 0x3B6BE0u) {
        ctx->pc = 0x3B6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BDCu;
        // 0x3b6be0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BE4u;
        goto label_3b6be4;
    }
    ctx->pc = 0x3B6BDCu;
    SET_GPR_U32(ctx, 31, 0x3B6BE4u);
    ctx->pc = 0x3B6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6BDCu;
    // 0x3b6be0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6BDCu, 0x3B6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BE4u;
label_3b6be4:
    // 0x3b6be4: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b6be4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6be8:
    // 0x3b6be8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6bec:
    // 0x3b6bec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6bf0:
    // 0x3b6bf0: 0xc0cd518  jal         func_335460
label_3b6bf4:
    if (ctx->pc == 0x3B6BF4u) {
        ctx->pc = 0x3B6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6BF0u;
        // 0x3b6bf4: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6BF8u;
        goto label_3b6bf8;
    }
    ctx->pc = 0x3B6BF0u;
    SET_GPR_U32(ctx, 31, 0x3B6BF8u);
    ctx->pc = 0x3B6BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6BF0u;
    // 0x3b6bf4: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6BF0u, 0x3B6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6BF8u;
label_3b6bf8:
    // 0x3b6bf8: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b6bf8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6bfc:
    // 0x3b6bfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c00:
    // 0x3b6c00: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6c04:
    // 0x3b6c04: 0xc0cd518  jal         func_335460
label_3b6c08:
    if (ctx->pc == 0x3B6C08u) {
        ctx->pc = 0x3B6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C04u;
        // 0x3b6c08: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C0Cu;
        goto label_3b6c0c;
    }
    ctx->pc = 0x3B6C04u;
    SET_GPR_U32(ctx, 31, 0x3B6C0Cu);
    ctx->pc = 0x3B6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C04u;
    // 0x3b6c08: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6C04u, 0x3B6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6C0Cu;
label_3b6c0c:
    // 0x3b6c0c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b6c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6c10:
    // 0x3b6c10: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x3b6c10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6c14:
    // 0x3b6c14: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b6c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b6c18:
    // 0x3b6c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c1c:
    // 0x3b6c1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b6c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c20:
    // 0x3b6c20: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b6c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b6c24:
    // 0x3b6c24: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b6c24u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6c28:
    // 0x3b6c28: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6c2c:
    // 0x3b6c2c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b6c30:
    // 0x3b6c30: 0xc0e911e  jal         func_3A4478
label_3b6c34:
    if (ctx->pc == 0x3B6C34u) {
        ctx->pc = 0x3B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C30u;
        // 0x3b6c34: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6C38u;
        goto label_3b6c38;
    }
    ctx->pc = 0x3B6C30u;
    SET_GPR_U32(ctx, 31, 0x3B6C38u);
    ctx->pc = 0x3B6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C30u;
    // 0x3b6c34: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B6C30u, 0x3B6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6C38u;
label_3b6c38:
    // 0x3b6c38: 0x3c01c05a  lui         $at, 0xC05A
    ctx->pc = 0x3b6c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49242 << 16));
label_3b6c3c:
    // 0x3b6c3c: 0x3421c1a9  ori         $at, $at, 0xC1A9
    ctx->pc = 0x3b6c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49577);
label_3b6c40:
    // 0x3b6c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b6c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b6c44:
    // 0x3b6c44: 0x3c013b3c  lui         $at, 0x3B3C
    ctx->pc = 0x3b6c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15164 << 16));
label_3b6c48:
    // 0x3b6c48: 0x3421169c  ori         $at, $at, 0x169C
    ctx->pc = 0x3b6c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5788);
label_3b6c4c:
    // 0x3b6c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b6c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6c50:
    // 0x3b6c50: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3b6c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6c54:
    // 0x3b6c54: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b6c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b6c58:
    // 0x3b6c58: 0xe6780008  swc1        $f24, 0x8($s3)
    ctx->pc = 0x3b6c58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b6c5c:
    // 0x3b6c5c: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b6c5cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b6c60:
    // 0x3b6c60: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6c60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6c64:
    // 0x3b6c64: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6c68:
    // 0x3b6c68: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6c6c:
    // 0x3b6c6c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3b6c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3b6c70:
    // 0x3b6c70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6c74:
    // 0x3b6c74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6c78:
    // 0x3b6c78: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6c7c:
    // 0x3b6c7c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b6c7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6c80:
    // 0x3b6c80: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6c80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6c84:
    // 0x3b6c84: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6c88:
    // 0x3b6c88: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6c8c:
    // 0x3b6c8c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6c8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6c90:
    // 0x3b6c90: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6c94:
    // 0x3b6c94: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6c94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6c98:
    // 0x3b6c98: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6c9c:
    // 0x3b6c9c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6ca0:
    // 0x3b6ca0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6ca0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6ca4:
    // 0x3b6ca4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6ca4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6ca8:
    // 0x3b6ca8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6cac:
    // 0x3b6cac: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6cb0:
    // 0x3b6cb0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6cb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6cb4:
    // 0x3b6cb4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b6cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b6cb8:
    // 0x3b6cb8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b6cbc:
    // 0x3b6cbc: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x3b6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_3b6cc0:
    // 0x3b6cc0: 0x261023a0  addiu       $s0, $s0, 0x23A0
    ctx->pc = 0x3b6cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9120));
label_3b6cc4:
    // 0x3b6cc4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x3b6cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_3b6cc8:
    // 0x3b6cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ccc:
    // 0x3b6ccc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6cd0:
    // 0x3b6cd0: 0xc0e90ca  jal         func_3A4328
label_3b6cd4:
    if (ctx->pc == 0x3B6CD4u) {
        ctx->pc = 0x3B6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CD0u;
        // 0x3b6cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6CD8u;
        goto label_3b6cd8;
    }
    ctx->pc = 0x3B6CD0u;
    SET_GPR_U32(ctx, 31, 0x3B6CD8u);
    ctx->pc = 0x3B6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6CD0u;
    // 0x3b6cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B6CD0u, 0x3B6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6CD8u;
label_3b6cd8:
    // 0x3b6cd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6cdc:
    // 0x3b6cdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b6cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6ce0:
    // 0x3b6ce0: 0xc136b18  jal         func_4DAC60
label_3b6ce4:
    if (ctx->pc == 0x3B6CE4u) {
        ctx->pc = 0x3B6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CE0u;
        // 0x3b6ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6CE8u;
        goto label_3b6ce8;
    }
    ctx->pc = 0x3B6CE0u;
    SET_GPR_U32(ctx, 31, 0x3B6CE8u);
    ctx->pc = 0x3B6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6CE0u;
    // 0x3b6ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6CE0u, 0x3B6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6CE8u;
label_3b6ce8:
    // 0x3b6ce8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6cec:
    // 0x3b6cec: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3b6cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b6cf0:
    // 0x3b6cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b6cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6cf4:
    // 0x3b6cf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b6cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6cf8:
    // 0x3b6cf8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6cfc:
    // 0x3b6cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d00:
    // 0x3b6d00: 0xc0e94fc  jal         func_3A53F0
label_3b6d04:
    if (ctx->pc == 0x3B6D04u) {
        ctx->pc = 0x3B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D00u;
        // 0x3b6d04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D08u;
        goto label_3b6d08;
    }
    ctx->pc = 0x3B6D00u;
    SET_GPR_U32(ctx, 31, 0x3B6D08u);
    ctx->pc = 0x3B6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D00u;
    // 0x3b6d04: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B6D00u, 0x3B6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D08u;
label_3b6d08:
    // 0x3b6d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d0c:
    // 0x3b6d0c: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x3b6d0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
label_3b6d10:
    // 0x3b6d10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d14:
    // 0x3b6d14: 0xc0cd518  jal         func_335460
label_3b6d18:
    if (ctx->pc == 0x3B6D18u) {
        ctx->pc = 0x3B6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D14u;
        // 0x3b6d18: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[31]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D1Cu;
        goto label_3b6d1c;
    }
    ctx->pc = 0x3B6D14u;
    SET_GPR_U32(ctx, 31, 0x3B6D1Cu);
    ctx->pc = 0x3B6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D14u;
    // 0x3b6d18: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6D14u, 0x3B6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D1Cu;
label_3b6d1c:
    // 0x3b6d1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b6d20:
    // 0x3b6d20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b6d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b6d24:
    // 0x3b6d24: 0xc136b24  jal         func_4DAC90
label_3b6d28:
    if (ctx->pc == 0x3B6D28u) {
        ctx->pc = 0x3B6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D24u;
        // 0x3b6d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D2Cu;
        goto label_3b6d2c;
    }
    ctx->pc = 0x3B6D24u;
    SET_GPR_U32(ctx, 31, 0x3B6D2Cu);
    ctx->pc = 0x3B6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D24u;
    // 0x3b6d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6D24u, 0x3B6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D2Cu;
label_3b6d2c:
    // 0x3b6d2c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6d30:
    // 0x3b6d30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d34:
    // 0x3b6d34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b6d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d38:
    // 0x3b6d38: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6d3c:
    // 0x3b6d3c: 0xc0ea158  jal         func_3A8560
label_3b6d40:
    if (ctx->pc == 0x3B6D40u) {
        ctx->pc = 0x3B6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D3Cu;
        // 0x3b6d40: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D44u;
        goto label_3b6d44;
    }
    ctx->pc = 0x3B6D3Cu;
    SET_GPR_U32(ctx, 31, 0x3B6D44u);
    ctx->pc = 0x3B6D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D3Cu;
    // 0x3b6d40: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B6D3Cu, 0x3B6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D44u;
label_3b6d44:
    // 0x3b6d44: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b6d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6d48:
    // 0x3b6d48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d4c:
    // 0x3b6d4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b6d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d50:
    // 0x3b6d50: 0xc0ea158  jal         func_3A8560
label_3b6d54:
    if (ctx->pc == 0x3B6D54u) {
        ctx->pc = 0x3B6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D50u;
        // 0x3b6d54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D58u;
        goto label_3b6d58;
    }
    ctx->pc = 0x3B6D50u;
    SET_GPR_U32(ctx, 31, 0x3B6D58u);
    ctx->pc = 0x3B6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D50u;
    // 0x3b6d54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B6D50u, 0x3B6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D58u;
label_3b6d58:
    // 0x3b6d58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b6d5c:
    // 0x3b6d5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b6d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d60:
    // 0x3b6d60: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b6d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b6d64:
    // 0x3b6d64: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b6d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b6d68:
    // 0x3b6d68: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b6d6c:
    // 0x3b6d6c: 0x40f809  jalr        $v0
label_3b6d70:
    if (ctx->pc == 0x3B6D70u) {
        ctx->pc = 0x3B6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D6Cu;
        // 0x3b6d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D74u;
        goto label_3b6d74;
    }
    ctx->pc = 0x3B6D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B6D74u);
        ctx->pc = 0x3B6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D6Cu;
        // 0x3b6d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6D6Cu, 0x3B6D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6D74u;
label_3b6d74:
    // 0x3b6d74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d78:
    // 0x3b6d78: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6d78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6d7c:
    // 0x3b6d7c: 0xc0cd518  jal         func_335460
label_3b6d80:
    if (ctx->pc == 0x3B6D80u) {
        ctx->pc = 0x3B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D7Cu;
        // 0x3b6d80: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D84u;
        goto label_3b6d84;
    }
    ctx->pc = 0x3B6D7Cu;
    SET_GPR_U32(ctx, 31, 0x3B6D84u);
    ctx->pc = 0x3B6D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D7Cu;
    // 0x3b6d80: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6D7Cu, 0x3B6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D84u;
label_3b6d84:
    // 0x3b6d84: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b6d84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6d88:
    // 0x3b6d88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6d8c:
    // 0x3b6d8c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6d8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6d90:
    // 0x3b6d90: 0xc0cd518  jal         func_335460
label_3b6d94:
    if (ctx->pc == 0x3B6D94u) {
        ctx->pc = 0x3B6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D90u;
        // 0x3b6d94: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6D98u;
        goto label_3b6d98;
    }
    ctx->pc = 0x3B6D90u;
    SET_GPR_U32(ctx, 31, 0x3B6D98u);
    ctx->pc = 0x3B6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D90u;
    // 0x3b6d94: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6D90u, 0x3B6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D98u;
label_3b6d98:
    // 0x3b6d98: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b6d98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6d9c:
    // 0x3b6d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6da0:
    // 0x3b6da0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6da4:
    // 0x3b6da4: 0xc0cd518  jal         func_335460
label_3b6da8:
    if (ctx->pc == 0x3B6DA8u) {
        ctx->pc = 0x3B6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6DA4u;
        // 0x3b6da8: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6DACu;
        goto label_3b6dac;
    }
    ctx->pc = 0x3B6DA4u;
    SET_GPR_U32(ctx, 31, 0x3B6DACu);
    ctx->pc = 0x3B6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6DA4u;
    // 0x3b6da8: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6DA4u, 0x3B6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6DACu;
label_3b6dac:
    // 0x3b6dac: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b6dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6db0:
    // 0x3b6db0: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x3b6db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b6db4:
    // 0x3b6db4: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b6db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b6db8:
    // 0x3b6db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6dbc:
    // 0x3b6dbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b6dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6dc0:
    // 0x3b6dc0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b6dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b6dc4:
    // 0x3b6dc4: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b6dc4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b6dc8:
    // 0x3b6dc8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6dcc:
    // 0x3b6dcc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b6dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b6dd0:
    // 0x3b6dd0: 0xc0e911e  jal         func_3A4478
label_3b6dd4:
    if (ctx->pc == 0x3B6DD4u) {
        ctx->pc = 0x3B6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6DD0u;
        // 0x3b6dd4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6DD8u;
        goto label_3b6dd8;
    }
    ctx->pc = 0x3B6DD0u;
    SET_GPR_U32(ctx, 31, 0x3B6DD8u);
    ctx->pc = 0x3B6DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6DD0u;
    // 0x3b6dd4: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B6DD0u, 0x3B6DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6DD8u;
label_3b6dd8:
    // 0x3b6dd8: 0x3c01bf8a  lui         $at, 0xBF8A
    ctx->pc = 0x3b6dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49034 << 16));
label_3b6ddc:
    // 0x3b6ddc: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x3b6ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_3b6de0:
    // 0x3b6de0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b6de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b6de4:
    // 0x3b6de4: 0x3c013b3c  lui         $at, 0x3B3C
    ctx->pc = 0x3b6de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15164 << 16));
label_3b6de8:
    // 0x3b6de8: 0x34218c0d  ori         $at, $at, 0x8C0D
    ctx->pc = 0x3b6de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35853);
label_3b6dec:
    // 0x3b6dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b6decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6df0:
    // 0x3b6df0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3b6df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6df4:
    // 0x3b6df4: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b6df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b6df8:
    // 0x3b6df8: 0xe6780008  swc1        $f24, 0x8($s3)
    ctx->pc = 0x3b6df8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b6dfc:
    // 0x3b6dfc: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b6dfcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b6e00:
    // 0x3b6e00: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6e00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6e04:
    // 0x3b6e04: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6e08:
    // 0x3b6e08: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6e0c:
    // 0x3b6e0c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b6e10:
    // 0x3b6e10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6e14:
    // 0x3b6e14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6e18:
    // 0x3b6e18: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6e1c:
    // 0x3b6e1c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b6e1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6e20:
    // 0x3b6e20: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6e20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6e24:
    // 0x3b6e24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6e28:
    // 0x3b6e28: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6e2c:
    // 0x3b6e2c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6e2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6e30:
    // 0x3b6e30: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6e34:
    // 0x3b6e34: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6e38:
    // 0x3b6e38: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6e3c:
    // 0x3b6e3c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6e40:
    // 0x3b6e40: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6e40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6e44:
    // 0x3b6e44: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6e48:
    // 0x3b6e48: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6e4c:
    // 0x3b6e4c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6e50:
    // 0x3b6e50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6e50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6e54:
    // 0x3b6e54: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b6e54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b6e58:
    // 0x3b6e58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b6e5c:
    // 0x3b6e5c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b6e60:
    // 0x3b6e60: 0x261023b8  addiu       $s0, $s0, 0x23B8
    ctx->pc = 0x3b6e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9144));
label_3b6e64:
    // 0x3b6e64: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b6e68:
    // 0x3b6e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e6c:
    // 0x3b6e6c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6e70:
    // 0x3b6e70: 0xc0e90ca  jal         func_3A4328
label_3b6e74:
    if (ctx->pc == 0x3B6E74u) {
        ctx->pc = 0x3B6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E70u;
        // 0x3b6e74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6E78u;
        goto label_3b6e78;
    }
    ctx->pc = 0x3B6E70u;
    SET_GPR_U32(ctx, 31, 0x3B6E78u);
    ctx->pc = 0x3B6E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E70u;
    // 0x3b6e74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B6E70u, 0x3B6E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E78u;
label_3b6e78:
    // 0x3b6e78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6e7c:
    // 0x3b6e7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b6e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6e80:
    // 0x3b6e80: 0xc136b18  jal         func_4DAC60
label_3b6e84:
    if (ctx->pc == 0x3B6E84u) {
        ctx->pc = 0x3B6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E80u;
        // 0x3b6e84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6E88u;
        goto label_3b6e88;
    }
    ctx->pc = 0x3B6E80u;
    SET_GPR_U32(ctx, 31, 0x3B6E88u);
    ctx->pc = 0x3B6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E80u;
    // 0x3b6e84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6E80u, 0x3B6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E88u;
label_3b6e88:
    // 0x3b6e88: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6e8c:
    // 0x3b6e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e90:
    // 0x3b6e90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b6e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e94:
    // 0x3b6e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b6e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e98:
    // 0x3b6e98: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6e9c:
    // 0x3b6e9c: 0xc0e94fc  jal         func_3A53F0
label_3b6ea0:
    if (ctx->pc == 0x3B6EA0u) {
        ctx->pc = 0x3B6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E9Cu;
        // 0x3b6ea0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EA4u;
        goto label_3b6ea4;
    }
    ctx->pc = 0x3B6E9Cu;
    SET_GPR_U32(ctx, 31, 0x3B6EA4u);
    ctx->pc = 0x3B6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E9Cu;
    // 0x3b6ea0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B6E9Cu, 0x3B6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6EA4u;
label_3b6ea4:
    // 0x3b6ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ea8:
    // 0x3b6ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6eac:
    // 0x3b6eac: 0xc0e911e  jal         func_3A4478
label_3b6eb0:
    if (ctx->pc == 0x3B6EB0u) {
        ctx->pc = 0x3B6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EACu;
        // 0x3b6eb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EB4u;
        goto label_3b6eb4;
    }
    ctx->pc = 0x3B6EACu;
    SET_GPR_U32(ctx, 31, 0x3B6EB4u);
    ctx->pc = 0x3B6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6EACu;
    // 0x3b6eb0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B6EACu, 0x3B6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6EB4u;
label_3b6eb4:
    // 0x3b6eb4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3b6eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3b6eb8:
    // 0x3b6eb8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b6eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b6ebc:
    // 0x3b6ebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b6ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b6ec0:
    // 0x3b6ec0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b6ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b6ec4:
    // 0x3b6ec4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b6ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b6ec8:
    // 0x3b6ec8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b6ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b6ecc:
    // 0x3b6ecc: 0xc0cd518  jal         func_335460
label_3b6ed0:
    if (ctx->pc == 0x3B6ED0u) {
        ctx->pc = 0x3B6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6ECCu;
        // 0x3b6ed0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6ED4u;
        goto label_3b6ed4;
    }
    ctx->pc = 0x3B6ECCu;
    SET_GPR_U32(ctx, 31, 0x3B6ED4u);
    ctx->pc = 0x3B6ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6ECCu;
    // 0x3b6ed0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6ECCu, 0x3B6ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6ED4u;
label_3b6ed4:
    // 0x3b6ed4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3b6ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b6ed8:
    // 0x3b6ed8: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b6ed8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b6edc:
    // 0x3b6edc: 0xe7ba00b8  swc1        $f26, 0xB8($sp)
    ctx->pc = 0x3b6edcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b6ee0:
    // 0x3b6ee0: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b6ee0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b6ee4:
    // 0x3b6ee4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6ee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6ee8:
    // 0x3b6ee8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b6ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6eec:
    // 0x3b6eec: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b6eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b6ef0:
    // 0x3b6ef0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b6ef4:
    // 0x3b6ef4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b6ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b6ef8:
    // 0x3b6ef8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b6ef8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b6efc:
    // 0x3b6efc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b6efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6f00:
    // 0x3b6f00: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b6f00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6f04:
    // 0x3b6f04: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b6f04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6f08:
    // 0x3b6f08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b6f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6f0c:
    // 0x3b6f0c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b6f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6f10:
    // 0x3b6f10: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b6f10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b6f14:
    // 0x3b6f14: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b6f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6f18:
    // 0x3b6f18: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b6f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b6f1c:
    // 0x3b6f1c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b6f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b6f20:
    // 0x3b6f20: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b6f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6f24:
    // 0x3b6f24: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b6f24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b6f28:
    // 0x3b6f28: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b6f28u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b6f2c:
    // 0x3b6f2c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b6f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6f30:
    // 0x3b6f30: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b6f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b6f34:
    // 0x3b6f34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b6f34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b6f38:
    // 0x3b6f38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b6f3c:
    // 0x3b6f3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6f40:
    // 0x3b6f40: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b6f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b6f44:
    // 0x3b6f44: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b6f48:
    // 0x3b6f48: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b6f4c:
    // 0x3b6f4c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b6f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b6f50:
    // 0x3b6f50: 0xc136b18  jal         func_4DAC60
label_3b6f54:
    if (ctx->pc == 0x3B6F54u) {
        ctx->pc = 0x3B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F50u;
        // 0x3b6f54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F58u;
        goto label_3b6f58;
    }
    ctx->pc = 0x3B6F50u;
    SET_GPR_U32(ctx, 31, 0x3B6F58u);
    ctx->pc = 0x3B6F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F50u;
    // 0x3b6f54: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B6F50u, 0x3B6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F58u;
label_3b6f58:
    // 0x3b6f58: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3b6f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3b6f5c:
    // 0x3b6f5c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3b6f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3b6f60:
    // 0x3b6f60: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b6f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b6f64:
    // 0x3b6f64: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6f68:
    // 0x3b6f68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f6c:
    // 0x3b6f6c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3b6f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3b6f70:
    // 0x3b6f70: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b6f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b6f74:
    // 0x3b6f74: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b6f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b6f78:
    // 0x3b6f78: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b6f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b6f7c:
    // 0x3b6f7c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b6f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b6f80:
    // 0x3b6f80: 0xc0cd518  jal         func_335460
label_3b6f84:
    if (ctx->pc == 0x3B6F84u) {
        ctx->pc = 0x3B6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F80u;
        // 0x3b6f84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F88u;
        goto label_3b6f88;
    }
    ctx->pc = 0x3B6F80u;
    SET_GPR_U32(ctx, 31, 0x3B6F88u);
    ctx->pc = 0x3B6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F80u;
    // 0x3b6f84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6F80u, 0x3B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F88u;
label_3b6f88:
    // 0x3b6f88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b6f8c:
    // 0x3b6f8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b6f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b6f90:
    // 0x3b6f90: 0xc136b24  jal         func_4DAC90
label_3b6f94:
    if (ctx->pc == 0x3B6F94u) {
        ctx->pc = 0x3B6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F90u;
        // 0x3b6f94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F98u;
        goto label_3b6f98;
    }
    ctx->pc = 0x3B6F90u;
    SET_GPR_U32(ctx, 31, 0x3B6F98u);
    ctx->pc = 0x3B6F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F90u;
    // 0x3b6f94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B6F90u, 0x3B6F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F98u;
label_3b6f98:
    // 0x3b6f98: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b6f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6f9c:
    // 0x3b6f9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fa0:
    // 0x3b6fa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b6fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fa4:
    // 0x3b6fa4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b6fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b6fa8:
    // 0x3b6fa8: 0xc0ea158  jal         func_3A8560
label_3b6fac:
    if (ctx->pc == 0x3B6FACu) {
        ctx->pc = 0x3B6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FA8u;
        // 0x3b6fac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FB0u;
        goto label_3b6fb0;
    }
    ctx->pc = 0x3B6FA8u;
    SET_GPR_U32(ctx, 31, 0x3B6FB0u);
    ctx->pc = 0x3B6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FA8u;
    // 0x3b6fac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B6FA8u, 0x3B6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FB0u;
label_3b6fb0:
    // 0x3b6fb0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b6fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6fb4:
    // 0x3b6fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b6fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fb8:
    // 0x3b6fb8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fbc:
    // 0x3b6fbc: 0xc0ea158  jal         func_3A8560
label_3b6fc0:
    if (ctx->pc == 0x3B6FC0u) {
        ctx->pc = 0x3B6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FBCu;
        // 0x3b6fc0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FC4u;
        goto label_3b6fc4;
    }
    ctx->pc = 0x3B6FBCu;
    SET_GPR_U32(ctx, 31, 0x3B6FC4u);
    ctx->pc = 0x3B6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FBCu;
    // 0x3b6fc0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B6FBCu, 0x3B6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FC4u;
label_3b6fc4:
    // 0x3b6fc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b6fc8:
    // 0x3b6fc8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b6fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fcc:
    // 0x3b6fcc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b6fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b6fd0:
    // 0x3b6fd0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b6fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b6fd4:
    // 0x3b6fd4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b6fd8:
    // 0x3b6fd8: 0x40f809  jalr        $v0
label_3b6fdc:
    if (ctx->pc == 0x3B6FDCu) {
        ctx->pc = 0x3B6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FD8u;
        // 0x3b6fdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FE0u;
        goto label_3b6fe0;
    }
    ctx->pc = 0x3B6FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B6FE0u);
        ctx->pc = 0x3B6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FD8u;
        // 0x3b6fdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6FD8u, 0x3B6FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6FE0u;
label_3b6fe0:
    // 0x3b6fe0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fe4:
    // 0x3b6fe4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6fe8:
    // 0x3b6fe8: 0xc0cd518  jal         func_335460
label_3b6fec:
    if (ctx->pc == 0x3B6FECu) {
        ctx->pc = 0x3B6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FE8u;
        // 0x3b6fec: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FF0u;
        goto label_3b6ff0;
    }
    ctx->pc = 0x3B6FE8u;
    SET_GPR_U32(ctx, 31, 0x3B6FF0u);
    ctx->pc = 0x3B6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FE8u;
    // 0x3b6fec: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6FE8u, 0x3B6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6FF0u;
label_3b6ff0:
    // 0x3b6ff0: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b6ff0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b6ff4:
    // 0x3b6ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b6ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ff8:
    // 0x3b6ff8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b6ff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b6ffc:
    // 0x3b6ffc: 0xc0cd518  jal         func_335460
label_3b7000:
    if (ctx->pc == 0x3B7000u) {
        ctx->pc = 0x3B7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FFCu;
        // 0x3b7000: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7004u;
        goto label_3b7004;
    }
    ctx->pc = 0x3B6FFCu;
    SET_GPR_U32(ctx, 31, 0x3B7004u);
    ctx->pc = 0x3B7000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6FFCu;
    // 0x3b7000: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B6FFCu, 0x3B7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7004u;
label_3b7004:
    // 0x3b7004: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b7004u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b7008:
    // 0x3b7008: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b700c:
    // 0x3b700c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b700cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b7010:
    // 0x3b7010: 0xc0cd518  jal         func_335460
label_3b7014:
    if (ctx->pc == 0x3B7014u) {
        ctx->pc = 0x3B7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7010u;
        // 0x3b7014: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7018u;
        goto label_3b7018;
    }
    ctx->pc = 0x3B7010u;
    SET_GPR_U32(ctx, 31, 0x3B7018u);
    ctx->pc = 0x3B7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7010u;
    // 0x3b7014: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B7010u, 0x3B7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7018u;
label_3b7018:
    // 0x3b7018: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b7018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b701c:
    // 0x3b701c: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x3b701cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b7020:
    // 0x3b7020: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b7020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b7024:
    // 0x3b7024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b7024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7028:
    // 0x3b7028: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3b7028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3b702c:
    // 0x3b702c: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3b702cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3b7030:
    // 0x3b7030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b7030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7034:
    // 0x3b7034: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b7034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7038:
    // 0x3b7038: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b7038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b703c:
    // 0x3b703c: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b703cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b7040:
    // 0x3b7040: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b7040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7044:
    // 0x3b7044: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3b7044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b7048:
    // 0x3b7048: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b7048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b704c:
    // 0x3b704c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b7050:
    // 0x3b7050: 0xe7ba0094  swc1        $f26, 0x94($sp)
    ctx->pc = 0x3b7050u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b7054:
    // 0x3b7054: 0xe7ba0098  swc1        $f26, 0x98($sp)
    ctx->pc = 0x3b7054u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b7058:
    // 0x3b7058: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x3b7058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b705c:
    // 0x3b705c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b705cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7060:
    // 0x3b7060: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b7060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b7064:
    // 0x3b7064: 0xc0e911e  jal         func_3A4478
label_3b7068:
    if (ctx->pc == 0x3B7068u) {
        ctx->pc = 0x3B7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7064u;
        // 0x3b7068: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B706Cu;
        goto label_3b706c;
    }
    ctx->pc = 0x3B7064u;
    SET_GPR_U32(ctx, 31, 0x3B706Cu);
    ctx->pc = 0x3B7068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7064u;
    // 0x3b7068: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B7064u, 0x3B706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B706Cu;
label_3b706c:
    // 0x3b706c: 0x3c013f79  lui         $at, 0x3F79
    ctx->pc = 0x3b706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16249 << 16));
label_3b7070:
    // 0x3b7070: 0x342142f6  ori         $at, $at, 0x42F6
    ctx->pc = 0x3b7070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17142);
label_3b7074:
    // 0x3b7074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b7074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7078:
    // 0x3b7078: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x3b7078u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b707c:
    // 0x3b707c: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b707cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b7080:
    // 0x3b7080: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3b7080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b7084:
    // 0x3b7084: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b7084u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b7088:
    // 0x3b7088: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b7088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b708c:
    // 0x3b708c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b708cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7090:
    // 0x3b7090: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b7094:
    // 0x3b7094: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b7094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b7098:
    // 0x3b7098: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b7098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b709c:
    // 0x3b709c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b709cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b70a0:
    // 0x3b70a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b70a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b70a4:
    // 0x3b70a4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b70a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b70a8:
    // 0x3b70a8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b70a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b70ac:
    // 0x3b70ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b70acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b70b0:
    // 0x3b70b0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b70b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b70b4:
    // 0x3b70b4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b70b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b70b8:
    // 0x3b70b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b70b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b70bc:
    // 0x3b70bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b70bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b70c0:
    // 0x3b70c0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b70c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b70c4:
    // 0x3b70c4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b70c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b70c8:
    // 0x3b70c8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b70c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b70cc:
    // 0x3b70cc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b70ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b70d0:
    // 0x3b70d0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b70d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b70d4:
    // 0x3b70d4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b70d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b70d8:
    // 0x3b70d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b70d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b70dc:
    // 0x3b70dc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b70dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b70e0:
    // 0x3b70e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b70e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b70e4:
    // 0x3b70e4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b70e8:
    // 0x3b70e8: 0x261023d0  addiu       $s0, $s0, 0x23D0
    ctx->pc = 0x3b70e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9168));
label_3b70ec:
    // 0x3b70ec: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b70f0:
    // 0x3b70f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b70f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b70f4:
    // 0x3b70f4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b70f8:
    // 0x3b70f8: 0xc0e90ca  jal         func_3A4328
label_3b70fc:
    if (ctx->pc == 0x3B70FCu) {
        ctx->pc = 0x3B70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70F8u;
        // 0x3b70fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7100u;
        goto label_3b7100;
    }
    ctx->pc = 0x3B70F8u;
    SET_GPR_U32(ctx, 31, 0x3B7100u);
    ctx->pc = 0x3B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B70F8u;
    // 0x3b70fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B70F8u, 0x3B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7100u;
label_3b7100:
    // 0x3b7100: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b7100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b7104:
    // 0x3b7104: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b7104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7108:
    // 0x3b7108: 0xc136b18  jal         func_4DAC60
label_3b710c:
    if (ctx->pc == 0x3B710Cu) {
        ctx->pc = 0x3B710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7108u;
        // 0x3b710c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7110u;
        goto label_3b7110;
    }
    ctx->pc = 0x3B7108u;
    SET_GPR_U32(ctx, 31, 0x3B7110u);
    ctx->pc = 0x3B710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7108u;
    // 0x3b710c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B7108u, 0x3B7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7110u;
label_3b7110:
    // 0x3b7110: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b7110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b7114:
    // 0x3b7114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b7114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7118:
    // 0x3b7118: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b7118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b711c:
    // 0x3b711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7120:
    // 0x3b7120: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b7124:
    // 0x3b7124: 0xc0e94fc  jal         func_3A53F0
label_3b7128:
    if (ctx->pc == 0x3B7128u) {
        ctx->pc = 0x3B7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7124u;
        // 0x3b7128: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B712Cu;
        goto label_3b712c;
    }
    ctx->pc = 0x3B7124u;
    SET_GPR_U32(ctx, 31, 0x3B712Cu);
    ctx->pc = 0x3B7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7124u;
    // 0x3b7128: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B7124u, 0x3B712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B712Cu;
label_3b712c:
    // 0x3b712c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b712cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7130:
    // 0x3b7130: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x3b7130u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
label_3b7134:
    // 0x3b7134: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x3b7134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
label_3b7138:
    // 0x3b7138: 0xc0cd518  jal         func_335460
label_3b713c:
    if (ctx->pc == 0x3B713Cu) {
        ctx->pc = 0x3B713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7138u;
        // 0x3b713c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7140u;
        goto label_3b7140;
    }
    ctx->pc = 0x3B7138u;
    SET_GPR_U32(ctx, 31, 0x3B7140u);
    ctx->pc = 0x3B713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7138u;
    // 0x3b713c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B7138u, 0x3B7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7140u;
label_3b7140:
    // 0x3b7140: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b7140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b7144:
    // 0x3b7144: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b7144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b7148:
    // 0x3b7148: 0xc136b24  jal         func_4DAC90
label_3b714c:
    if (ctx->pc == 0x3B714Cu) {
        ctx->pc = 0x3B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7148u;
        // 0x3b714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7150u;
        goto label_3b7150;
    }
    ctx->pc = 0x3B7148u;
    SET_GPR_U32(ctx, 31, 0x3B7150u);
    ctx->pc = 0x3B714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7148u;
    // 0x3b714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B7148u, 0x3B7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7150u;
label_3b7150:
    // 0x3b7150: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b7150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7154:
    // 0x3b7154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b7154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7158:
    // 0x3b7158: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b7158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b715c:
    // 0x3b715c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b7160:
    // 0x3b7160: 0xc0ea158  jal         func_3A8560
label_3b7164:
    if (ctx->pc == 0x3B7164u) {
        ctx->pc = 0x3B7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7160u;
        // 0x3b7164: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7168u;
        goto label_3b7168;
    }
    ctx->pc = 0x3B7160u;
    SET_GPR_U32(ctx, 31, 0x3B7168u);
    ctx->pc = 0x3B7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7160u;
    // 0x3b7164: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B7160u, 0x3B7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7168u;
label_3b7168:
    // 0x3b7168: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b7168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b716c:
    // 0x3b716c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7170:
    // 0x3b7170: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b7174:
    // 0x3b7174: 0xc0ea158  jal         func_3A8560
label_3b7178:
    if (ctx->pc == 0x3B7178u) {
        ctx->pc = 0x3B7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7174u;
        // 0x3b7178: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B717Cu;
        goto label_3b717c;
    }
    ctx->pc = 0x3B7174u;
    SET_GPR_U32(ctx, 31, 0x3B717Cu);
    ctx->pc = 0x3B7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7174u;
    // 0x3b7178: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B7174u, 0x3B717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B717Cu;
label_3b717c:
    // 0x3b717c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7180:
    // 0x3b7180: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b7180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b7184:
    // 0x3b7184: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b7184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b7188:
    // 0x3b7188: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b7188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b718c:
    // 0x3b718c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b7190:
    // 0x3b7190: 0x40f809  jalr        $v0
label_3b7194:
    if (ctx->pc == 0x3B7194u) {
        ctx->pc = 0x3B7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7190u;
        // 0x3b7194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7198u;
        goto label_3b7198;
    }
    ctx->pc = 0x3B7190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B7198u);
        ctx->pc = 0x3B7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7190u;
        // 0x3b7194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7190u, 0x3B7198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7198u;
label_3b7198:
    // 0x3b7198: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b719c:
    // 0x3b719c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b719cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b71a0:
    // 0x3b71a0: 0xc0cd518  jal         func_335460
label_3b71a4:
    if (ctx->pc == 0x3B71A4u) {
        ctx->pc = 0x3B71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71A0u;
        // 0x3b71a4: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B71A8u;
        goto label_3b71a8;
    }
    ctx->pc = 0x3B71A0u;
    SET_GPR_U32(ctx, 31, 0x3B71A8u);
    ctx->pc = 0x3B71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B71A0u;
    // 0x3b71a4: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B71A0u, 0x3B71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71A8u;
label_3b71a8:
    // 0x3b71a8: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b71a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b71ac:
    // 0x3b71ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b71acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b71b0:
    // 0x3b71b0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b71b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b71b4:
    // 0x3b71b4: 0xc0cd518  jal         func_335460
label_3b71b8:
    if (ctx->pc == 0x3B71B8u) {
        ctx->pc = 0x3B71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71B4u;
        // 0x3b71b8: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B71BCu;
        goto label_3b71bc;
    }
    ctx->pc = 0x3B71B4u;
    SET_GPR_U32(ctx, 31, 0x3B71BCu);
    ctx->pc = 0x3B71B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B71B4u;
    // 0x3b71b8: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B71B4u, 0x3B71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71BCu;
label_3b71bc:
    // 0x3b71bc: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b71bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b71c0:
    // 0x3b71c0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b71c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b71c4:
    // 0x3b71c4: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3b71c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
label_3b71c8:
    // 0x3b71c8: 0xc0cd518  jal         func_335460
label_3b71cc:
    if (ctx->pc == 0x3B71CCu) {
        ctx->pc = 0x3B71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71C8u;
        // 0x3b71cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B71D0u;
        goto label_3b71d0;
    }
    ctx->pc = 0x3B71C8u;
    SET_GPR_U32(ctx, 31, 0x3B71D0u);
    ctx->pc = 0x3B71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B71C8u;
    // 0x3b71cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B71C8u, 0x3B71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71D0u;
label_3b71d0:
    // 0x3b71d0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b71d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b71d4:
    // 0x3b71d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b71d8:
    // 0x3b71d8: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3b71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3b71dc:
    // 0x3b71dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b71dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b71e0:
    // 0x3b71e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b71e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b71e4:
    // 0x3b71e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b71e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b71e8:
    // 0x3b71e8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b71e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b71ec:
    // 0x3b71ec: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x3b71ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b71f0:
    // 0x3b71f0: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x3b71f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b71f4:
    // 0x3b71f4: 0xe65b000c  swc1        $f27, 0xC($s2)
    ctx->pc = 0x3b71f4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b71f8:
    // 0x3b71f8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b71f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b71fc:
    // 0x3b71fc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b71fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7200:
    // 0x3b7200: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b7200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b7204:
    // 0x3b7204: 0xc0e911e  jal         func_3A4478
label_3b7208:
    if (ctx->pc == 0x3B7208u) {
        ctx->pc = 0x3B7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7204u;
        // 0x3b7208: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B720Cu;
        goto label_3b720c;
    }
    ctx->pc = 0x3B7204u;
    SET_GPR_U32(ctx, 31, 0x3B720Cu);
    ctx->pc = 0x3B7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7204u;
    // 0x3b7208: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B7204u, 0x3B720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B720Cu;
label_3b720c:
    // 0x3b720c: 0x3c01405a  lui         $at, 0x405A
    ctx->pc = 0x3b720cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16474 << 16));
label_3b7210:
    // 0x3b7210: 0x3421c1a9  ori         $at, $at, 0xC1A9
    ctx->pc = 0x3b7210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49577);
label_3b7214:
    // 0x3b7214: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b7214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b7218:
    // 0x3b7218: 0x3c01bb3c  lui         $at, 0xBB3C
    ctx->pc = 0x3b7218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47932 << 16));
label_3b721c:
    // 0x3b721c: 0x34212763  ori         $at, $at, 0x2763
    ctx->pc = 0x3b721cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10083);
label_3b7220:
    // 0x3b7220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b7220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b7224:
    // 0x3b7224: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x3b7224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
label_3b7228:
    // 0x3b7228: 0x3421cddd  ori         $at, $at, 0xCDDD
    ctx->pc = 0x3b7228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52701);
label_3b722c:
    // 0x3b722c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b722cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b7230:
    // 0x3b7230: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x3b7230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b7234:
    // 0x3b7234: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3b7234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3b7238:
    // 0x3b7238: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x3b7238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3b723c:
    // 0x3b723c: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b723cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b7240:
    // 0x3b7240: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b7240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b7244:
    // 0x3b7244: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b7244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b7248:
    // 0x3b7248: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b7248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b724c:
    // 0x3b724c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b7250:
    // 0x3b7250: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b7250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b7254:
    // 0x3b7254: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b7254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b7258:
    // 0x3b7258: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b7258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b725c:
    // 0x3b725c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b725cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b7260:
    // 0x3b7260: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b7260u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b7264:
    // 0x3b7264: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b7264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7268:
    // 0x3b7268: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b7268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b726c:
    // 0x3b726c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b726cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b7270:
    // 0x3b7270: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b7270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7274:
    // 0x3b7274: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b7274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b7278:
    // 0x3b7278: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b7278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b727c:
    // 0x3b727c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b727cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7280:
    // 0x3b7280: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b7280u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b7284:
    // 0x3b7284: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b7284u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7288:
    // 0x3b7288: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b7288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b728c:
    // 0x3b728c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b728cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7290:
    // 0x3b7290: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b7290u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b7294:
    // 0x3b7294: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b7294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b7298:
    // 0x3b7298: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b729c:
    // 0x3b729c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b72a0:
    // 0x3b72a0: 0x261023e8  addiu       $s0, $s0, 0x23E8
    ctx->pc = 0x3b72a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9192));
label_3b72a4:
    // 0x3b72a4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b72a8:
    // 0x3b72a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b72a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b72ac:
    // 0x3b72ac: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b72b0:
    // 0x3b72b0: 0xc0e90ca  jal         func_3A4328
label_3b72b4:
    if (ctx->pc == 0x3B72B4u) {
        ctx->pc = 0x3B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72B0u;
        // 0x3b72b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B72B8u;
        goto label_3b72b8;
    }
    ctx->pc = 0x3B72B0u;
    SET_GPR_U32(ctx, 31, 0x3B72B8u);
    ctx->pc = 0x3B72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72B0u;
    // 0x3b72b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B72B0u, 0x3B72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72B8u;
label_3b72b8:
    // 0x3b72b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b72bc:
    // 0x3b72bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b72bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b72c0:
    // 0x3b72c0: 0xc136b18  jal         func_4DAC60
label_3b72c4:
    if (ctx->pc == 0x3B72C4u) {
        ctx->pc = 0x3B72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72C0u;
        // 0x3b72c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B72C8u;
        goto label_3b72c8;
    }
    ctx->pc = 0x3B72C0u;
    SET_GPR_U32(ctx, 31, 0x3B72C8u);
    ctx->pc = 0x3B72C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72C0u;
    // 0x3b72c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B72C0u, 0x3B72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72C8u;
label_3b72c8:
    // 0x3b72c8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b72c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b72cc:
    // 0x3b72cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b72ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b72d0:
    // 0x3b72d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b72d4:
    // 0x3b72d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b72d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b72d8:
    // 0x3b72d8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b72dc:
    // 0x3b72dc: 0xc0e94fc  jal         func_3A53F0
label_3b72e0:
    if (ctx->pc == 0x3B72E0u) {
        ctx->pc = 0x3B72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72DCu;
        // 0x3b72e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B72E4u;
        goto label_3b72e4;
    }
    ctx->pc = 0x3B72DCu;
    SET_GPR_U32(ctx, 31, 0x3B72E4u);
    ctx->pc = 0x3B72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72DCu;
    // 0x3b72e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B72DCu, 0x3B72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72E4u;
label_3b72e4:
    // 0x3b72e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b72e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b72e8:
    // 0x3b72e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b72ec:
    // 0x3b72ec: 0xc0e911e  jal         func_3A4478
label_3b72f0:
    if (ctx->pc == 0x3B72F0u) {
        ctx->pc = 0x3B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72ECu;
        // 0x3b72f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B72F4u;
        goto label_3b72f4;
    }
    ctx->pc = 0x3B72ECu;
    SET_GPR_U32(ctx, 31, 0x3B72F4u);
    ctx->pc = 0x3B72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72ECu;
    // 0x3b72f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B72ECu, 0x3B72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72F4u;
label_3b72f4:
    // 0x3b72f4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3b72f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3b72f8:
    // 0x3b72f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b72f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b72fc:
    // 0x3b72fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b72fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b7300:
    // 0x3b7300: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3b7300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3b7304:
    // 0x3b7304: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b7304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b7308:
    // 0x3b7308: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b7308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b730c:
    // 0x3b730c: 0xc0cd518  jal         func_335460
label_3b7310:
    if (ctx->pc == 0x3B7310u) {
        ctx->pc = 0x3B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B730Cu;
        // 0x3b7310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7314u;
        goto label_3b7314;
    }
    ctx->pc = 0x3B730Cu;
    SET_GPR_U32(ctx, 31, 0x3B7314u);
    ctx->pc = 0x3B7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B730Cu;
    // 0x3b7310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B730Cu, 0x3B7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7314u;
label_3b7314:
    // 0x3b7314: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3b7314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3b7318:
    // 0x3b7318: 0xe7ba00b8  swc1        $f26, 0xB8($sp)
    ctx->pc = 0x3b7318u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3b731c:
    // 0x3b731c: 0xe7ba00b4  swc1        $f26, 0xB4($sp)
    ctx->pc = 0x3b731cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3b7320:
    // 0x3b7320: 0xe67b000c  swc1        $f27, 0xC($s3)
    ctx->pc = 0x3b7320u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3b7324:
    // 0x3b7324: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b7324u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b7328:
    // 0x3b7328: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b7328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b732c:
    // 0x3b732c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3b732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3b7330:
    // 0x3b7330: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b7330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b7334:
    // 0x3b7334: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b7334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b7338:
    // 0x3b7338: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b7338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b733c:
    // 0x3b733c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b733cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7340:
    // 0x3b7340: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b7340u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b7344:
    // 0x3b7344: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b7344u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b7348:
    // 0x3b7348: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b7348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b734c:
    // 0x3b734c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b734cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7350:
    // 0x3b7350: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b7350u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b7354:
    // 0x3b7354: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b7354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b7358:
    // 0x3b7358: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b7358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b735c:
    // 0x3b735c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b735cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b7360:
    // 0x3b7360: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b7360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7364:
    // 0x3b7364: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b7364u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b7368:
    // 0x3b7368: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b7368u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b736c:
    // 0x3b736c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b736cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7370:
    // 0x3b7370: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b7370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b7374:
    // 0x3b7374: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b7374u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b7378:
    // 0x3b7378: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b737c:
    // 0x3b737c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3b737cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3b7380:
    // 0x3b7380: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b7384:
    // 0x3b7384: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b7384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b7388:
    // 0x3b7388: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b738c:
    // 0x3b738c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3b738cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3b7390:
    // 0x3b7390: 0xc0cd518  jal         func_335460
label_3b7394:
    if (ctx->pc == 0x3B7394u) {
        ctx->pc = 0x3B7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7390u;
        // 0x3b7394: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7398u;
        goto label_3b7398;
    }
    ctx->pc = 0x3B7390u;
    SET_GPR_U32(ctx, 31, 0x3B7398u);
    ctx->pc = 0x3B7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7390u;
    // 0x3b7394: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B7390u, 0x3B7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7398u;
label_3b7398:
    // 0x3b7398: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b739c:
    // 0x3b739c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b739cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b73a0:
    // 0x3b73a0: 0xc136b24  jal         func_4DAC90
label_3b73a4:
    if (ctx->pc == 0x3B73A4u) {
        ctx->pc = 0x3B73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73A0u;
        // 0x3b73a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73A8u;
        goto label_3b73a8;
    }
    ctx->pc = 0x3B73A0u;
    SET_GPR_U32(ctx, 31, 0x3B73A8u);
    ctx->pc = 0x3B73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B73A0u;
    // 0x3b73a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B73A0u, 0x3B73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73A8u;
label_3b73a8:
    // 0x3b73a8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b73a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b73ac:
    // 0x3b73ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b73acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b73b0:
    // 0x3b73b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b73b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b73b4:
    // 0x3b73b4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b73b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b73b8:
    // 0x3b73b8: 0xc0ea158  jal         func_3A8560
label_3b73bc:
    if (ctx->pc == 0x3B73BCu) {
        ctx->pc = 0x3B73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73B8u;
        // 0x3b73bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73C0u;
        goto label_3b73c0;
    }
    ctx->pc = 0x3B73B8u;
    SET_GPR_U32(ctx, 31, 0x3B73C0u);
    ctx->pc = 0x3B73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B73B8u;
    // 0x3b73bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B73B8u, 0x3B73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73C0u;
label_3b73c0:
    // 0x3b73c0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b73c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b73c4:
    // 0x3b73c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b73c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b73c8:
    // 0x3b73c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b73c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b73cc:
    // 0x3b73cc: 0xc0ea158  jal         func_3A8560
label_3b73d0:
    if (ctx->pc == 0x3B73D0u) {
        ctx->pc = 0x3B73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73CCu;
        // 0x3b73d0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73D4u;
        goto label_3b73d4;
    }
    ctx->pc = 0x3B73CCu;
    SET_GPR_U32(ctx, 31, 0x3B73D4u);
    ctx->pc = 0x3B73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B73CCu;
    // 0x3b73d0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B73CCu, 0x3B73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73D4u;
label_3b73d4:
    // 0x3b73d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b73d8:
    // 0x3b73d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3b73d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b73dc:
    // 0x3b73dc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b73dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b73e0:
    // 0x3b73e0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b73e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b73e4:
    // 0x3b73e4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b73e8:
    // 0x3b73e8: 0x40f809  jalr        $v0
label_3b73ec:
    if (ctx->pc == 0x3B73ECu) {
        ctx->pc = 0x3B73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73E8u;
        // 0x3b73ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B73F0u;
        goto label_3b73f0;
    }
    ctx->pc = 0x3B73E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B73F0u);
        ctx->pc = 0x3B73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73E8u;
        // 0x3b73ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B73E8u, 0x3B73F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B73F0u;
label_3b73f0:
    // 0x3b73f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b73f4:
    // 0x3b73f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b73f8:
    // 0x3b73f8: 0xc1073cc  jal         func_41CF30
label_3b73fc:
    if (ctx->pc == 0x3B73FCu) {
        ctx->pc = 0x3B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73F8u;
        // 0x3b73fc: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7400u;
        goto label_3b7400;
    }
    ctx->pc = 0x3B73F8u;
    SET_GPR_U32(ctx, 31, 0x3B7400u);
    ctx->pc = 0x3B73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B73F8u;
    // 0x3b73fc: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B73F8u, 0x3B7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7400u;
label_3b7400:
    // 0x3b7400: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b7404:
    // 0x3b7404: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3b7408:
    if (ctx->pc == 0x3B7408u) {
        ctx->pc = 0x3B7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7404u;
        // 0x3b7408: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B740Cu;
        goto label_3b740c;
    }
    ctx->pc = 0x3B7404u;
    {
        const bool branch_taken_0x3b7404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7404u;
        // 0x3b7408: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7404) {
            ctx->pc = 0x3B7434u;
            goto label_3b7434;
        }
    }
    ctx->pc = 0x3B740Cu;
label_3b740c:
    // 0x3b740c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7410:
    // 0x3b7410: 0xc0e8dee  jal         func_3A37B8
label_3b7414:
    if (ctx->pc == 0x3B7414u) {
        ctx->pc = 0x3B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7410u;
        // 0x3b7414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7418u;
        goto label_3b7418;
    }
    ctx->pc = 0x3B7410u;
    SET_GPR_U32(ctx, 31, 0x3B7418u);
    ctx->pc = 0x3B7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7410u;
    // 0x3b7414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B7410u, 0x3B7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7418u;
label_3b7418:
    // 0x3b7418: 0x7a830010  lq          $v1, 0x10($s4)
    ctx->pc = 0x3b7418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3b741c:
    // 0x3b741c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7420:
    // 0x3b7420: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3b7420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b7424:
    // 0x3b7424: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b7424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7428:
    // 0x3b7428: 0xc045ca0  jal         func_117280
label_3b742c:
    if (ctx->pc == 0x3B742Cu) {
        ctx->pc = 0x3B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7428u;
        // 0x3b742c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7430u;
        goto label_3b7430;
    }
    ctx->pc = 0x3B7428u;
    SET_GPR_U32(ctx, 31, 0x3B7430u);
    ctx->pc = 0x3B742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7428u;
    // 0x3b742c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3B7428u, 0x3B7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7430u;
label_3b7430:
    // 0x3b7430: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3b7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b7434:
    // 0x3b7434: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3b7434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3b7438:
    // 0x3b7438: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x3b7438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3b743c:
    // 0x3b743c: 0xc0e9bb2  jal         func_3A6EC8
label_3b7440:
    if (ctx->pc == 0x3B7440u) {
        ctx->pc = 0x3B7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B743Cu;
        // 0x3b7440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7444u;
        goto label_3b7444;
    }
    ctx->pc = 0x3B743Cu;
    SET_GPR_U32(ctx, 31, 0x3B7444u);
    ctx->pc = 0x3B7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B743Cu;
    // 0x3b7440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B743Cu, 0x3B7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7444u;
label_3b7444:
    // 0x3b7444: 0x1000000f  b           . + 4 + (0xF << 2)
label_3b7448:
    if (ctx->pc == 0x3B7448u) {
        ctx->pc = 0x3B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7444u;
        // 0x3b7448: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B744Cu;
        goto label_3b744c;
    }
    ctx->pc = 0x3B7444u;
    {
        const bool branch_taken_0x3b7444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7444u;
        // 0x3b7448: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7444) {
            ctx->pc = 0x3B7484u;
            goto label_3b7484;
        }
    }
    ctx->pc = 0x3B744Cu;
label_3b744c:
    // 0x3b744c: 0xc0ea146  jal         func_3A8518
label_3b7450:
    if (ctx->pc == 0x3B7450u) {
        ctx->pc = 0x3B7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B744Cu;
        // 0x3b7450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7454u;
        goto label_3b7454;
    }
    ctx->pc = 0x3B744Cu;
    SET_GPR_U32(ctx, 31, 0x3B7454u);
    ctx->pc = 0x3B7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B744Cu;
    // 0x3b7450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B744Cu, 0x3B7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7454u;
label_3b7454:
    // 0x3b7454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7458:
    // 0x3b7458: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3b7458u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3b745c:
    // 0x3b745c: 0xc0e9bb2  jal         func_3A6EC8
label_3b7460:
    if (ctx->pc == 0x3B7460u) {
        ctx->pc = 0x3B7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B745Cu;
        // 0x3b7460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7464u;
        goto label_3b7464;
    }
    ctx->pc = 0x3B745Cu;
    SET_GPR_U32(ctx, 31, 0x3B7464u);
    ctx->pc = 0x3B7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B745Cu;
    // 0x3b7460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B745Cu, 0x3B7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7464u;
label_3b7464:
    // 0x3b7464: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b7468:
    if (ctx->pc == 0x3B7468u) {
        ctx->pc = 0x3B7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7464u;
        // 0x3b7468: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B746Cu;
        goto label_3b746c;
    }
    ctx->pc = 0x3B7464u;
    {
        const bool branch_taken_0x3b7464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7464u;
        // 0x3b7468: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7464) {
            ctx->pc = 0x3B7484u;
            goto label_3b7484;
        }
    }
    ctx->pc = 0x3B746Cu;
label_3b746c:
    // 0x3b746c: 0xc0ea146  jal         func_3A8518
label_3b7470:
    if (ctx->pc == 0x3B7470u) {
        ctx->pc = 0x3B7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B746Cu;
        // 0x3b7470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7474u;
        goto label_3b7474;
    }
    ctx->pc = 0x3B746Cu;
    SET_GPR_U32(ctx, 31, 0x3B7474u);
    ctx->pc = 0x3B7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B746Cu;
    // 0x3b7470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B746Cu, 0x3B7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7474u;
label_3b7474:
    // 0x3b7474: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b7478:
    // 0x3b7478: 0xc0e85fa  jal         func_3A17E8
label_3b747c:
    if (ctx->pc == 0x3B747Cu) {
        ctx->pc = 0x3B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7478u;
        // 0x3b747c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7480u;
        goto label_3b7480;
    }
    ctx->pc = 0x3B7478u;
    SET_GPR_U32(ctx, 31, 0x3B7480u);
    ctx->pc = 0x3B747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7478u;
    // 0x3b747c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3B7478u, 0x3B7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7480u;
label_3b7480:
    // 0x3b7480: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x3b7480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_3b7484:
    // 0x3b7484: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x3b7484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3b7488:
    // 0x3b7488: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x3b7488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3b748c:
    // 0x3b748c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x3b748cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3b7490:
    // 0x3b7490: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x3b7490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3b7494:
    // 0x3b7494: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x3b7494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3b7498:
    // 0x3b7498: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x3b7498u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3b749c:
    // 0x3b749c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x3b749cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3b74a0:
    // 0x3b74a0: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x3b74a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3b74a4:
    // 0x3b74a4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3b74a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_3b74a8:
    // 0x3b74a8: 0xc7bf0228  lwc1        $f31, 0x228($sp)
    ctx->pc = 0x3b74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3b74ac:
    // 0x3b74ac: 0xc7be0220  lwc1        $f30, 0x220($sp)
    ctx->pc = 0x3b74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3b74b0:
    // 0x3b74b0: 0xc7bd0218  lwc1        $f29, 0x218($sp)
    ctx->pc = 0x3b74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3b74b4:
    // 0x3b74b4: 0xc7bc0210  lwc1        $f28, 0x210($sp)
    ctx->pc = 0x3b74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3b74b8:
    // 0x3b74b8: 0xc7bb0208  lwc1        $f27, 0x208($sp)
    ctx->pc = 0x3b74b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3b74bc:
    // 0x3b74bc: 0xc7ba0200  lwc1        $f26, 0x200($sp)
    ctx->pc = 0x3b74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b74c0:
    // 0x3b74c0: 0xc7b901f8  lwc1        $f25, 0x1F8($sp)
    ctx->pc = 0x3b74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b74c4:
    // 0x3b74c4: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x3b74c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b74c8:
    // 0x3b74c8: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x3b74c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b74cc:
    // 0x3b74cc: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x3b74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b74d0:
    // 0x3b74d0: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x3b74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b74d4:
    // 0x3b74d4: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x3b74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b74d8:
    // 0x3b74d8: 0x3e00008  jr          $ra
label_3b74dc:
    if (ctx->pc == 0x3B74DCu) {
        ctx->pc = 0x3B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74D8u;
        // 0x3b74dc: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B74E0u;
        goto label_fallthrough_0x3b74d8;
    }
    ctx->pc = 0x3B74D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74D8u;
        // 0x3b74dc: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B74D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b74d8:
    ctx->pc = 0x3B74E0u;
}
