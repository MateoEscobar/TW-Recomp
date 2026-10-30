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

// Function: sub_003D64D8
// Address: 0x3d64d8 - 0x3d70d8
void sub_003D64D8_0x3d64d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D64D8_0x3d64d8");
#endif

    switch (ctx->pc) {
        case 0x3d64d8u: goto label_3d64d8;
        case 0x3d64dcu: goto label_3d64dc;
        case 0x3d64e0u: goto label_3d64e0;
        case 0x3d64e4u: goto label_3d64e4;
        case 0x3d64e8u: goto label_3d64e8;
        case 0x3d64ecu: goto label_3d64ec;
        case 0x3d64f0u: goto label_3d64f0;
        case 0x3d64f4u: goto label_3d64f4;
        case 0x3d64f8u: goto label_3d64f8;
        case 0x3d64fcu: goto label_3d64fc;
        case 0x3d6500u: goto label_3d6500;
        case 0x3d6504u: goto label_3d6504;
        case 0x3d6508u: goto label_3d6508;
        case 0x3d650cu: goto label_3d650c;
        case 0x3d6510u: goto label_3d6510;
        case 0x3d6514u: goto label_3d6514;
        case 0x3d6518u: goto label_3d6518;
        case 0x3d651cu: goto label_3d651c;
        case 0x3d6520u: goto label_3d6520;
        case 0x3d6524u: goto label_3d6524;
        case 0x3d6528u: goto label_3d6528;
        case 0x3d652cu: goto label_3d652c;
        case 0x3d6530u: goto label_3d6530;
        case 0x3d6534u: goto label_3d6534;
        case 0x3d6538u: goto label_3d6538;
        case 0x3d653cu: goto label_3d653c;
        case 0x3d6540u: goto label_3d6540;
        case 0x3d6544u: goto label_3d6544;
        case 0x3d6548u: goto label_3d6548;
        case 0x3d654cu: goto label_3d654c;
        case 0x3d6550u: goto label_3d6550;
        case 0x3d6554u: goto label_3d6554;
        case 0x3d6558u: goto label_3d6558;
        case 0x3d655cu: goto label_3d655c;
        case 0x3d6560u: goto label_3d6560;
        case 0x3d6564u: goto label_3d6564;
        case 0x3d6568u: goto label_3d6568;
        case 0x3d656cu: goto label_3d656c;
        case 0x3d6570u: goto label_3d6570;
        case 0x3d6574u: goto label_3d6574;
        case 0x3d6578u: goto label_3d6578;
        case 0x3d657cu: goto label_3d657c;
        case 0x3d6580u: goto label_3d6580;
        case 0x3d6584u: goto label_3d6584;
        case 0x3d6588u: goto label_3d6588;
        case 0x3d658cu: goto label_3d658c;
        case 0x3d6590u: goto label_3d6590;
        case 0x3d6594u: goto label_3d6594;
        case 0x3d6598u: goto label_3d6598;
        case 0x3d659cu: goto label_3d659c;
        case 0x3d65a0u: goto label_3d65a0;
        case 0x3d65a4u: goto label_3d65a4;
        case 0x3d65a8u: goto label_3d65a8;
        case 0x3d65acu: goto label_3d65ac;
        case 0x3d65b0u: goto label_3d65b0;
        case 0x3d65b4u: goto label_3d65b4;
        case 0x3d65b8u: goto label_3d65b8;
        case 0x3d65bcu: goto label_3d65bc;
        case 0x3d65c0u: goto label_3d65c0;
        case 0x3d65c4u: goto label_3d65c4;
        case 0x3d65c8u: goto label_3d65c8;
        case 0x3d65ccu: goto label_3d65cc;
        case 0x3d65d0u: goto label_3d65d0;
        case 0x3d65d4u: goto label_3d65d4;
        case 0x3d65d8u: goto label_3d65d8;
        case 0x3d65dcu: goto label_3d65dc;
        case 0x3d65e0u: goto label_3d65e0;
        case 0x3d65e4u: goto label_3d65e4;
        case 0x3d65e8u: goto label_3d65e8;
        case 0x3d65ecu: goto label_3d65ec;
        case 0x3d65f0u: goto label_3d65f0;
        case 0x3d65f4u: goto label_3d65f4;
        case 0x3d65f8u: goto label_3d65f8;
        case 0x3d65fcu: goto label_3d65fc;
        case 0x3d6600u: goto label_3d6600;
        case 0x3d6604u: goto label_3d6604;
        case 0x3d6608u: goto label_3d6608;
        case 0x3d660cu: goto label_3d660c;
        case 0x3d6610u: goto label_3d6610;
        case 0x3d6614u: goto label_3d6614;
        case 0x3d6618u: goto label_3d6618;
        case 0x3d661cu: goto label_3d661c;
        case 0x3d6620u: goto label_3d6620;
        case 0x3d6624u: goto label_3d6624;
        case 0x3d6628u: goto label_3d6628;
        case 0x3d662cu: goto label_3d662c;
        case 0x3d6630u: goto label_3d6630;
        case 0x3d6634u: goto label_3d6634;
        case 0x3d6638u: goto label_3d6638;
        case 0x3d663cu: goto label_3d663c;
        case 0x3d6640u: goto label_3d6640;
        case 0x3d6644u: goto label_3d6644;
        case 0x3d6648u: goto label_3d6648;
        case 0x3d664cu: goto label_3d664c;
        case 0x3d6650u: goto label_3d6650;
        case 0x3d6654u: goto label_3d6654;
        case 0x3d6658u: goto label_3d6658;
        case 0x3d665cu: goto label_3d665c;
        case 0x3d6660u: goto label_3d6660;
        case 0x3d6664u: goto label_3d6664;
        case 0x3d6668u: goto label_3d6668;
        case 0x3d666cu: goto label_3d666c;
        case 0x3d6670u: goto label_3d6670;
        case 0x3d6674u: goto label_3d6674;
        case 0x3d6678u: goto label_3d6678;
        case 0x3d667cu: goto label_3d667c;
        case 0x3d6680u: goto label_3d6680;
        case 0x3d6684u: goto label_3d6684;
        case 0x3d6688u: goto label_3d6688;
        case 0x3d668cu: goto label_3d668c;
        case 0x3d6690u: goto label_3d6690;
        case 0x3d6694u: goto label_3d6694;
        case 0x3d6698u: goto label_3d6698;
        case 0x3d669cu: goto label_3d669c;
        case 0x3d66a0u: goto label_3d66a0;
        case 0x3d66a4u: goto label_3d66a4;
        case 0x3d66a8u: goto label_3d66a8;
        case 0x3d66acu: goto label_3d66ac;
        case 0x3d66b0u: goto label_3d66b0;
        case 0x3d66b4u: goto label_3d66b4;
        case 0x3d66b8u: goto label_3d66b8;
        case 0x3d66bcu: goto label_3d66bc;
        case 0x3d66c0u: goto label_3d66c0;
        case 0x3d66c4u: goto label_3d66c4;
        case 0x3d66c8u: goto label_3d66c8;
        case 0x3d66ccu: goto label_3d66cc;
        case 0x3d66d0u: goto label_3d66d0;
        case 0x3d66d4u: goto label_3d66d4;
        case 0x3d66d8u: goto label_3d66d8;
        case 0x3d66dcu: goto label_3d66dc;
        case 0x3d66e0u: goto label_3d66e0;
        case 0x3d66e4u: goto label_3d66e4;
        case 0x3d66e8u: goto label_3d66e8;
        case 0x3d66ecu: goto label_3d66ec;
        case 0x3d66f0u: goto label_3d66f0;
        case 0x3d66f4u: goto label_3d66f4;
        case 0x3d66f8u: goto label_3d66f8;
        case 0x3d66fcu: goto label_3d66fc;
        case 0x3d6700u: goto label_3d6700;
        case 0x3d6704u: goto label_3d6704;
        case 0x3d6708u: goto label_3d6708;
        case 0x3d670cu: goto label_3d670c;
        case 0x3d6710u: goto label_3d6710;
        case 0x3d6714u: goto label_3d6714;
        case 0x3d6718u: goto label_3d6718;
        case 0x3d671cu: goto label_3d671c;
        case 0x3d6720u: goto label_3d6720;
        case 0x3d6724u: goto label_3d6724;
        case 0x3d6728u: goto label_3d6728;
        case 0x3d672cu: goto label_3d672c;
        case 0x3d6730u: goto label_3d6730;
        case 0x3d6734u: goto label_3d6734;
        case 0x3d6738u: goto label_3d6738;
        case 0x3d673cu: goto label_3d673c;
        case 0x3d6740u: goto label_3d6740;
        case 0x3d6744u: goto label_3d6744;
        case 0x3d6748u: goto label_3d6748;
        case 0x3d674cu: goto label_3d674c;
        case 0x3d6750u: goto label_3d6750;
        case 0x3d6754u: goto label_3d6754;
        case 0x3d6758u: goto label_3d6758;
        case 0x3d675cu: goto label_3d675c;
        case 0x3d6760u: goto label_3d6760;
        case 0x3d6764u: goto label_3d6764;
        case 0x3d6768u: goto label_3d6768;
        case 0x3d676cu: goto label_3d676c;
        case 0x3d6770u: goto label_3d6770;
        case 0x3d6774u: goto label_3d6774;
        case 0x3d6778u: goto label_3d6778;
        case 0x3d677cu: goto label_3d677c;
        case 0x3d6780u: goto label_3d6780;
        case 0x3d6784u: goto label_3d6784;
        case 0x3d6788u: goto label_3d6788;
        case 0x3d678cu: goto label_3d678c;
        case 0x3d6790u: goto label_3d6790;
        case 0x3d6794u: goto label_3d6794;
        case 0x3d6798u: goto label_3d6798;
        case 0x3d679cu: goto label_3d679c;
        case 0x3d67a0u: goto label_3d67a0;
        case 0x3d67a4u: goto label_3d67a4;
        case 0x3d67a8u: goto label_3d67a8;
        case 0x3d67acu: goto label_3d67ac;
        case 0x3d67b0u: goto label_3d67b0;
        case 0x3d67b4u: goto label_3d67b4;
        case 0x3d67b8u: goto label_3d67b8;
        case 0x3d67bcu: goto label_3d67bc;
        case 0x3d67c0u: goto label_3d67c0;
        case 0x3d67c4u: goto label_3d67c4;
        case 0x3d67c8u: goto label_3d67c8;
        case 0x3d67ccu: goto label_3d67cc;
        case 0x3d67d0u: goto label_3d67d0;
        case 0x3d67d4u: goto label_3d67d4;
        case 0x3d67d8u: goto label_3d67d8;
        case 0x3d67dcu: goto label_3d67dc;
        case 0x3d67e0u: goto label_3d67e0;
        case 0x3d67e4u: goto label_3d67e4;
        case 0x3d67e8u: goto label_3d67e8;
        case 0x3d67ecu: goto label_3d67ec;
        case 0x3d67f0u: goto label_3d67f0;
        case 0x3d67f4u: goto label_3d67f4;
        case 0x3d67f8u: goto label_3d67f8;
        case 0x3d67fcu: goto label_3d67fc;
        case 0x3d6800u: goto label_3d6800;
        case 0x3d6804u: goto label_3d6804;
        case 0x3d6808u: goto label_3d6808;
        case 0x3d680cu: goto label_3d680c;
        case 0x3d6810u: goto label_3d6810;
        case 0x3d6814u: goto label_3d6814;
        case 0x3d6818u: goto label_3d6818;
        case 0x3d681cu: goto label_3d681c;
        case 0x3d6820u: goto label_3d6820;
        case 0x3d6824u: goto label_3d6824;
        case 0x3d6828u: goto label_3d6828;
        case 0x3d682cu: goto label_3d682c;
        case 0x3d6830u: goto label_3d6830;
        case 0x3d6834u: goto label_3d6834;
        case 0x3d6838u: goto label_3d6838;
        case 0x3d683cu: goto label_3d683c;
        case 0x3d6840u: goto label_3d6840;
        case 0x3d6844u: goto label_3d6844;
        case 0x3d6848u: goto label_3d6848;
        case 0x3d684cu: goto label_3d684c;
        case 0x3d6850u: goto label_3d6850;
        case 0x3d6854u: goto label_3d6854;
        case 0x3d6858u: goto label_3d6858;
        case 0x3d685cu: goto label_3d685c;
        case 0x3d6860u: goto label_3d6860;
        case 0x3d6864u: goto label_3d6864;
        case 0x3d6868u: goto label_3d6868;
        case 0x3d686cu: goto label_3d686c;
        case 0x3d6870u: goto label_3d6870;
        case 0x3d6874u: goto label_3d6874;
        case 0x3d6878u: goto label_3d6878;
        case 0x3d687cu: goto label_3d687c;
        case 0x3d6880u: goto label_3d6880;
        case 0x3d6884u: goto label_3d6884;
        case 0x3d6888u: goto label_3d6888;
        case 0x3d688cu: goto label_3d688c;
        case 0x3d6890u: goto label_3d6890;
        case 0x3d6894u: goto label_3d6894;
        case 0x3d6898u: goto label_3d6898;
        case 0x3d689cu: goto label_3d689c;
        case 0x3d68a0u: goto label_3d68a0;
        case 0x3d68a4u: goto label_3d68a4;
        case 0x3d68a8u: goto label_3d68a8;
        case 0x3d68acu: goto label_3d68ac;
        case 0x3d68b0u: goto label_3d68b0;
        case 0x3d68b4u: goto label_3d68b4;
        case 0x3d68b8u: goto label_3d68b8;
        case 0x3d68bcu: goto label_3d68bc;
        case 0x3d68c0u: goto label_3d68c0;
        case 0x3d68c4u: goto label_3d68c4;
        case 0x3d68c8u: goto label_3d68c8;
        case 0x3d68ccu: goto label_3d68cc;
        case 0x3d68d0u: goto label_3d68d0;
        case 0x3d68d4u: goto label_3d68d4;
        case 0x3d68d8u: goto label_3d68d8;
        case 0x3d68dcu: goto label_3d68dc;
        case 0x3d68e0u: goto label_3d68e0;
        case 0x3d68e4u: goto label_3d68e4;
        case 0x3d68e8u: goto label_3d68e8;
        case 0x3d68ecu: goto label_3d68ec;
        case 0x3d68f0u: goto label_3d68f0;
        case 0x3d68f4u: goto label_3d68f4;
        case 0x3d68f8u: goto label_3d68f8;
        case 0x3d68fcu: goto label_3d68fc;
        case 0x3d6900u: goto label_3d6900;
        case 0x3d6904u: goto label_3d6904;
        case 0x3d6908u: goto label_3d6908;
        case 0x3d690cu: goto label_3d690c;
        case 0x3d6910u: goto label_3d6910;
        case 0x3d6914u: goto label_3d6914;
        case 0x3d6918u: goto label_3d6918;
        case 0x3d691cu: goto label_3d691c;
        case 0x3d6920u: goto label_3d6920;
        case 0x3d6924u: goto label_3d6924;
        case 0x3d6928u: goto label_3d6928;
        case 0x3d692cu: goto label_3d692c;
        case 0x3d6930u: goto label_3d6930;
        case 0x3d6934u: goto label_3d6934;
        case 0x3d6938u: goto label_3d6938;
        case 0x3d693cu: goto label_3d693c;
        case 0x3d6940u: goto label_3d6940;
        case 0x3d6944u: goto label_3d6944;
        case 0x3d6948u: goto label_3d6948;
        case 0x3d694cu: goto label_3d694c;
        case 0x3d6950u: goto label_3d6950;
        case 0x3d6954u: goto label_3d6954;
        case 0x3d6958u: goto label_3d6958;
        case 0x3d695cu: goto label_3d695c;
        case 0x3d6960u: goto label_3d6960;
        case 0x3d6964u: goto label_3d6964;
        case 0x3d6968u: goto label_3d6968;
        case 0x3d696cu: goto label_3d696c;
        case 0x3d6970u: goto label_3d6970;
        case 0x3d6974u: goto label_3d6974;
        case 0x3d6978u: goto label_3d6978;
        case 0x3d697cu: goto label_3d697c;
        case 0x3d6980u: goto label_3d6980;
        case 0x3d6984u: goto label_3d6984;
        case 0x3d6988u: goto label_3d6988;
        case 0x3d698cu: goto label_3d698c;
        case 0x3d6990u: goto label_3d6990;
        case 0x3d6994u: goto label_3d6994;
        case 0x3d6998u: goto label_3d6998;
        case 0x3d699cu: goto label_3d699c;
        case 0x3d69a0u: goto label_3d69a0;
        case 0x3d69a4u: goto label_3d69a4;
        case 0x3d69a8u: goto label_3d69a8;
        case 0x3d69acu: goto label_3d69ac;
        case 0x3d69b0u: goto label_3d69b0;
        case 0x3d69b4u: goto label_3d69b4;
        case 0x3d69b8u: goto label_3d69b8;
        case 0x3d69bcu: goto label_3d69bc;
        case 0x3d69c0u: goto label_3d69c0;
        case 0x3d69c4u: goto label_3d69c4;
        case 0x3d69c8u: goto label_3d69c8;
        case 0x3d69ccu: goto label_3d69cc;
        case 0x3d69d0u: goto label_3d69d0;
        case 0x3d69d4u: goto label_3d69d4;
        case 0x3d69d8u: goto label_3d69d8;
        case 0x3d69dcu: goto label_3d69dc;
        case 0x3d69e0u: goto label_3d69e0;
        case 0x3d69e4u: goto label_3d69e4;
        case 0x3d69e8u: goto label_3d69e8;
        case 0x3d69ecu: goto label_3d69ec;
        case 0x3d69f0u: goto label_3d69f0;
        case 0x3d69f4u: goto label_3d69f4;
        case 0x3d69f8u: goto label_3d69f8;
        case 0x3d69fcu: goto label_3d69fc;
        case 0x3d6a00u: goto label_3d6a00;
        case 0x3d6a04u: goto label_3d6a04;
        case 0x3d6a08u: goto label_3d6a08;
        case 0x3d6a0cu: goto label_3d6a0c;
        case 0x3d6a10u: goto label_3d6a10;
        case 0x3d6a14u: goto label_3d6a14;
        case 0x3d6a18u: goto label_3d6a18;
        case 0x3d6a1cu: goto label_3d6a1c;
        case 0x3d6a20u: goto label_3d6a20;
        case 0x3d6a24u: goto label_3d6a24;
        case 0x3d6a28u: goto label_3d6a28;
        case 0x3d6a2cu: goto label_3d6a2c;
        case 0x3d6a30u: goto label_3d6a30;
        case 0x3d6a34u: goto label_3d6a34;
        case 0x3d6a38u: goto label_3d6a38;
        case 0x3d6a3cu: goto label_3d6a3c;
        case 0x3d6a40u: goto label_3d6a40;
        case 0x3d6a44u: goto label_3d6a44;
        case 0x3d6a48u: goto label_3d6a48;
        case 0x3d6a4cu: goto label_3d6a4c;
        case 0x3d6a50u: goto label_3d6a50;
        case 0x3d6a54u: goto label_3d6a54;
        case 0x3d6a58u: goto label_3d6a58;
        case 0x3d6a5cu: goto label_3d6a5c;
        case 0x3d6a60u: goto label_3d6a60;
        case 0x3d6a64u: goto label_3d6a64;
        case 0x3d6a68u: goto label_3d6a68;
        case 0x3d6a6cu: goto label_3d6a6c;
        case 0x3d6a70u: goto label_3d6a70;
        case 0x3d6a74u: goto label_3d6a74;
        case 0x3d6a78u: goto label_3d6a78;
        case 0x3d6a7cu: goto label_3d6a7c;
        case 0x3d6a80u: goto label_3d6a80;
        case 0x3d6a84u: goto label_3d6a84;
        case 0x3d6a88u: goto label_3d6a88;
        case 0x3d6a8cu: goto label_3d6a8c;
        case 0x3d6a90u: goto label_3d6a90;
        case 0x3d6a94u: goto label_3d6a94;
        case 0x3d6a98u: goto label_3d6a98;
        case 0x3d6a9cu: goto label_3d6a9c;
        case 0x3d6aa0u: goto label_3d6aa0;
        case 0x3d6aa4u: goto label_3d6aa4;
        case 0x3d6aa8u: goto label_3d6aa8;
        case 0x3d6aacu: goto label_3d6aac;
        case 0x3d6ab0u: goto label_3d6ab0;
        case 0x3d6ab4u: goto label_3d6ab4;
        case 0x3d6ab8u: goto label_3d6ab8;
        case 0x3d6abcu: goto label_3d6abc;
        case 0x3d6ac0u: goto label_3d6ac0;
        case 0x3d6ac4u: goto label_3d6ac4;
        case 0x3d6ac8u: goto label_3d6ac8;
        case 0x3d6accu: goto label_3d6acc;
        case 0x3d6ad0u: goto label_3d6ad0;
        case 0x3d6ad4u: goto label_3d6ad4;
        case 0x3d6ad8u: goto label_3d6ad8;
        case 0x3d6adcu: goto label_3d6adc;
        case 0x3d6ae0u: goto label_3d6ae0;
        case 0x3d6ae4u: goto label_3d6ae4;
        case 0x3d6ae8u: goto label_3d6ae8;
        case 0x3d6aecu: goto label_3d6aec;
        case 0x3d6af0u: goto label_3d6af0;
        case 0x3d6af4u: goto label_3d6af4;
        case 0x3d6af8u: goto label_3d6af8;
        case 0x3d6afcu: goto label_3d6afc;
        case 0x3d6b00u: goto label_3d6b00;
        case 0x3d6b04u: goto label_3d6b04;
        case 0x3d6b08u: goto label_3d6b08;
        case 0x3d6b0cu: goto label_3d6b0c;
        case 0x3d6b10u: goto label_3d6b10;
        case 0x3d6b14u: goto label_3d6b14;
        case 0x3d6b18u: goto label_3d6b18;
        case 0x3d6b1cu: goto label_3d6b1c;
        case 0x3d6b20u: goto label_3d6b20;
        case 0x3d6b24u: goto label_3d6b24;
        case 0x3d6b28u: goto label_3d6b28;
        case 0x3d6b2cu: goto label_3d6b2c;
        case 0x3d6b30u: goto label_3d6b30;
        case 0x3d6b34u: goto label_3d6b34;
        case 0x3d6b38u: goto label_3d6b38;
        case 0x3d6b3cu: goto label_3d6b3c;
        case 0x3d6b40u: goto label_3d6b40;
        case 0x3d6b44u: goto label_3d6b44;
        case 0x3d6b48u: goto label_3d6b48;
        case 0x3d6b4cu: goto label_3d6b4c;
        case 0x3d6b50u: goto label_3d6b50;
        case 0x3d6b54u: goto label_3d6b54;
        case 0x3d6b58u: goto label_3d6b58;
        case 0x3d6b5cu: goto label_3d6b5c;
        case 0x3d6b60u: goto label_3d6b60;
        case 0x3d6b64u: goto label_3d6b64;
        case 0x3d6b68u: goto label_3d6b68;
        case 0x3d6b6cu: goto label_3d6b6c;
        case 0x3d6b70u: goto label_3d6b70;
        case 0x3d6b74u: goto label_3d6b74;
        case 0x3d6b78u: goto label_3d6b78;
        case 0x3d6b7cu: goto label_3d6b7c;
        case 0x3d6b80u: goto label_3d6b80;
        case 0x3d6b84u: goto label_3d6b84;
        case 0x3d6b88u: goto label_3d6b88;
        case 0x3d6b8cu: goto label_3d6b8c;
        case 0x3d6b90u: goto label_3d6b90;
        case 0x3d6b94u: goto label_3d6b94;
        case 0x3d6b98u: goto label_3d6b98;
        case 0x3d6b9cu: goto label_3d6b9c;
        case 0x3d6ba0u: goto label_3d6ba0;
        case 0x3d6ba4u: goto label_3d6ba4;
        case 0x3d6ba8u: goto label_3d6ba8;
        case 0x3d6bacu: goto label_3d6bac;
        case 0x3d6bb0u: goto label_3d6bb0;
        case 0x3d6bb4u: goto label_3d6bb4;
        case 0x3d6bb8u: goto label_3d6bb8;
        case 0x3d6bbcu: goto label_3d6bbc;
        case 0x3d6bc0u: goto label_3d6bc0;
        case 0x3d6bc4u: goto label_3d6bc4;
        case 0x3d6bc8u: goto label_3d6bc8;
        case 0x3d6bccu: goto label_3d6bcc;
        case 0x3d6bd0u: goto label_3d6bd0;
        case 0x3d6bd4u: goto label_3d6bd4;
        case 0x3d6bd8u: goto label_3d6bd8;
        case 0x3d6bdcu: goto label_3d6bdc;
        case 0x3d6be0u: goto label_3d6be0;
        case 0x3d6be4u: goto label_3d6be4;
        case 0x3d6be8u: goto label_3d6be8;
        case 0x3d6becu: goto label_3d6bec;
        case 0x3d6bf0u: goto label_3d6bf0;
        case 0x3d6bf4u: goto label_3d6bf4;
        case 0x3d6bf8u: goto label_3d6bf8;
        case 0x3d6bfcu: goto label_3d6bfc;
        case 0x3d6c00u: goto label_3d6c00;
        case 0x3d6c04u: goto label_3d6c04;
        case 0x3d6c08u: goto label_3d6c08;
        case 0x3d6c0cu: goto label_3d6c0c;
        case 0x3d6c10u: goto label_3d6c10;
        case 0x3d6c14u: goto label_3d6c14;
        case 0x3d6c18u: goto label_3d6c18;
        case 0x3d6c1cu: goto label_3d6c1c;
        case 0x3d6c20u: goto label_3d6c20;
        case 0x3d6c24u: goto label_3d6c24;
        case 0x3d6c28u: goto label_3d6c28;
        case 0x3d6c2cu: goto label_3d6c2c;
        case 0x3d6c30u: goto label_3d6c30;
        case 0x3d6c34u: goto label_3d6c34;
        case 0x3d6c38u: goto label_3d6c38;
        case 0x3d6c3cu: goto label_3d6c3c;
        case 0x3d6c40u: goto label_3d6c40;
        case 0x3d6c44u: goto label_3d6c44;
        case 0x3d6c48u: goto label_3d6c48;
        case 0x3d6c4cu: goto label_3d6c4c;
        case 0x3d6c50u: goto label_3d6c50;
        case 0x3d6c54u: goto label_3d6c54;
        case 0x3d6c58u: goto label_3d6c58;
        case 0x3d6c5cu: goto label_3d6c5c;
        case 0x3d6c60u: goto label_3d6c60;
        case 0x3d6c64u: goto label_3d6c64;
        case 0x3d6c68u: goto label_3d6c68;
        case 0x3d6c6cu: goto label_3d6c6c;
        case 0x3d6c70u: goto label_3d6c70;
        case 0x3d6c74u: goto label_3d6c74;
        case 0x3d6c78u: goto label_3d6c78;
        case 0x3d6c7cu: goto label_3d6c7c;
        case 0x3d6c80u: goto label_3d6c80;
        case 0x3d6c84u: goto label_3d6c84;
        case 0x3d6c88u: goto label_3d6c88;
        case 0x3d6c8cu: goto label_3d6c8c;
        case 0x3d6c90u: goto label_3d6c90;
        case 0x3d6c94u: goto label_3d6c94;
        case 0x3d6c98u: goto label_3d6c98;
        case 0x3d6c9cu: goto label_3d6c9c;
        case 0x3d6ca0u: goto label_3d6ca0;
        case 0x3d6ca4u: goto label_3d6ca4;
        case 0x3d6ca8u: goto label_3d6ca8;
        case 0x3d6cacu: goto label_3d6cac;
        case 0x3d6cb0u: goto label_3d6cb0;
        case 0x3d6cb4u: goto label_3d6cb4;
        case 0x3d6cb8u: goto label_3d6cb8;
        case 0x3d6cbcu: goto label_3d6cbc;
        case 0x3d6cc0u: goto label_3d6cc0;
        case 0x3d6cc4u: goto label_3d6cc4;
        case 0x3d6cc8u: goto label_3d6cc8;
        case 0x3d6cccu: goto label_3d6ccc;
        case 0x3d6cd0u: goto label_3d6cd0;
        case 0x3d6cd4u: goto label_3d6cd4;
        case 0x3d6cd8u: goto label_3d6cd8;
        case 0x3d6cdcu: goto label_3d6cdc;
        case 0x3d6ce0u: goto label_3d6ce0;
        case 0x3d6ce4u: goto label_3d6ce4;
        case 0x3d6ce8u: goto label_3d6ce8;
        case 0x3d6cecu: goto label_3d6cec;
        case 0x3d6cf0u: goto label_3d6cf0;
        case 0x3d6cf4u: goto label_3d6cf4;
        case 0x3d6cf8u: goto label_3d6cf8;
        case 0x3d6cfcu: goto label_3d6cfc;
        case 0x3d6d00u: goto label_3d6d00;
        case 0x3d6d04u: goto label_3d6d04;
        case 0x3d6d08u: goto label_3d6d08;
        case 0x3d6d0cu: goto label_3d6d0c;
        case 0x3d6d10u: goto label_3d6d10;
        case 0x3d6d14u: goto label_3d6d14;
        case 0x3d6d18u: goto label_3d6d18;
        case 0x3d6d1cu: goto label_3d6d1c;
        case 0x3d6d20u: goto label_3d6d20;
        case 0x3d6d24u: goto label_3d6d24;
        case 0x3d6d28u: goto label_3d6d28;
        case 0x3d6d2cu: goto label_3d6d2c;
        case 0x3d6d30u: goto label_3d6d30;
        case 0x3d6d34u: goto label_3d6d34;
        case 0x3d6d38u: goto label_3d6d38;
        case 0x3d6d3cu: goto label_3d6d3c;
        case 0x3d6d40u: goto label_3d6d40;
        case 0x3d6d44u: goto label_3d6d44;
        case 0x3d6d48u: goto label_3d6d48;
        case 0x3d6d4cu: goto label_3d6d4c;
        case 0x3d6d50u: goto label_3d6d50;
        case 0x3d6d54u: goto label_3d6d54;
        case 0x3d6d58u: goto label_3d6d58;
        case 0x3d6d5cu: goto label_3d6d5c;
        case 0x3d6d60u: goto label_3d6d60;
        case 0x3d6d64u: goto label_3d6d64;
        case 0x3d6d68u: goto label_3d6d68;
        case 0x3d6d6cu: goto label_3d6d6c;
        case 0x3d6d70u: goto label_3d6d70;
        case 0x3d6d74u: goto label_3d6d74;
        case 0x3d6d78u: goto label_3d6d78;
        case 0x3d6d7cu: goto label_3d6d7c;
        case 0x3d6d80u: goto label_3d6d80;
        case 0x3d6d84u: goto label_3d6d84;
        case 0x3d6d88u: goto label_3d6d88;
        case 0x3d6d8cu: goto label_3d6d8c;
        case 0x3d6d90u: goto label_3d6d90;
        case 0x3d6d94u: goto label_3d6d94;
        case 0x3d6d98u: goto label_3d6d98;
        case 0x3d6d9cu: goto label_3d6d9c;
        case 0x3d6da0u: goto label_3d6da0;
        case 0x3d6da4u: goto label_3d6da4;
        case 0x3d6da8u: goto label_3d6da8;
        case 0x3d6dacu: goto label_3d6dac;
        case 0x3d6db0u: goto label_3d6db0;
        case 0x3d6db4u: goto label_3d6db4;
        case 0x3d6db8u: goto label_3d6db8;
        case 0x3d6dbcu: goto label_3d6dbc;
        case 0x3d6dc0u: goto label_3d6dc0;
        case 0x3d6dc4u: goto label_3d6dc4;
        case 0x3d6dc8u: goto label_3d6dc8;
        case 0x3d6dccu: goto label_3d6dcc;
        case 0x3d6dd0u: goto label_3d6dd0;
        case 0x3d6dd4u: goto label_3d6dd4;
        case 0x3d6dd8u: goto label_3d6dd8;
        case 0x3d6ddcu: goto label_3d6ddc;
        case 0x3d6de0u: goto label_3d6de0;
        case 0x3d6de4u: goto label_3d6de4;
        case 0x3d6de8u: goto label_3d6de8;
        case 0x3d6decu: goto label_3d6dec;
        case 0x3d6df0u: goto label_3d6df0;
        case 0x3d6df4u: goto label_3d6df4;
        case 0x3d6df8u: goto label_3d6df8;
        case 0x3d6dfcu: goto label_3d6dfc;
        case 0x3d6e00u: goto label_3d6e00;
        case 0x3d6e04u: goto label_3d6e04;
        case 0x3d6e08u: goto label_3d6e08;
        case 0x3d6e0cu: goto label_3d6e0c;
        case 0x3d6e10u: goto label_3d6e10;
        case 0x3d6e14u: goto label_3d6e14;
        case 0x3d6e18u: goto label_3d6e18;
        case 0x3d6e1cu: goto label_3d6e1c;
        case 0x3d6e20u: goto label_3d6e20;
        case 0x3d6e24u: goto label_3d6e24;
        case 0x3d6e28u: goto label_3d6e28;
        case 0x3d6e2cu: goto label_3d6e2c;
        case 0x3d6e30u: goto label_3d6e30;
        case 0x3d6e34u: goto label_3d6e34;
        case 0x3d6e38u: goto label_3d6e38;
        case 0x3d6e3cu: goto label_3d6e3c;
        case 0x3d6e40u: goto label_3d6e40;
        case 0x3d6e44u: goto label_3d6e44;
        case 0x3d6e48u: goto label_3d6e48;
        case 0x3d6e4cu: goto label_3d6e4c;
        case 0x3d6e50u: goto label_3d6e50;
        case 0x3d6e54u: goto label_3d6e54;
        case 0x3d6e58u: goto label_3d6e58;
        case 0x3d6e5cu: goto label_3d6e5c;
        case 0x3d6e60u: goto label_3d6e60;
        case 0x3d6e64u: goto label_3d6e64;
        case 0x3d6e68u: goto label_3d6e68;
        case 0x3d6e6cu: goto label_3d6e6c;
        case 0x3d6e70u: goto label_3d6e70;
        case 0x3d6e74u: goto label_3d6e74;
        case 0x3d6e78u: goto label_3d6e78;
        case 0x3d6e7cu: goto label_3d6e7c;
        case 0x3d6e80u: goto label_3d6e80;
        case 0x3d6e84u: goto label_3d6e84;
        case 0x3d6e88u: goto label_3d6e88;
        case 0x3d6e8cu: goto label_3d6e8c;
        case 0x3d6e90u: goto label_3d6e90;
        case 0x3d6e94u: goto label_3d6e94;
        case 0x3d6e98u: goto label_3d6e98;
        case 0x3d6e9cu: goto label_3d6e9c;
        case 0x3d6ea0u: goto label_3d6ea0;
        case 0x3d6ea4u: goto label_3d6ea4;
        case 0x3d6ea8u: goto label_3d6ea8;
        case 0x3d6eacu: goto label_3d6eac;
        case 0x3d6eb0u: goto label_3d6eb0;
        case 0x3d6eb4u: goto label_3d6eb4;
        case 0x3d6eb8u: goto label_3d6eb8;
        case 0x3d6ebcu: goto label_3d6ebc;
        case 0x3d6ec0u: goto label_3d6ec0;
        case 0x3d6ec4u: goto label_3d6ec4;
        case 0x3d6ec8u: goto label_3d6ec8;
        case 0x3d6eccu: goto label_3d6ecc;
        case 0x3d6ed0u: goto label_3d6ed0;
        case 0x3d6ed4u: goto label_3d6ed4;
        case 0x3d6ed8u: goto label_3d6ed8;
        case 0x3d6edcu: goto label_3d6edc;
        case 0x3d6ee0u: goto label_3d6ee0;
        case 0x3d6ee4u: goto label_3d6ee4;
        case 0x3d6ee8u: goto label_3d6ee8;
        case 0x3d6eecu: goto label_3d6eec;
        case 0x3d6ef0u: goto label_3d6ef0;
        case 0x3d6ef4u: goto label_3d6ef4;
        case 0x3d6ef8u: goto label_3d6ef8;
        case 0x3d6efcu: goto label_3d6efc;
        case 0x3d6f00u: goto label_3d6f00;
        case 0x3d6f04u: goto label_3d6f04;
        case 0x3d6f08u: goto label_3d6f08;
        case 0x3d6f0cu: goto label_3d6f0c;
        case 0x3d6f10u: goto label_3d6f10;
        case 0x3d6f14u: goto label_3d6f14;
        case 0x3d6f18u: goto label_3d6f18;
        case 0x3d6f1cu: goto label_3d6f1c;
        case 0x3d6f20u: goto label_3d6f20;
        case 0x3d6f24u: goto label_3d6f24;
        case 0x3d6f28u: goto label_3d6f28;
        case 0x3d6f2cu: goto label_3d6f2c;
        case 0x3d6f30u: goto label_3d6f30;
        case 0x3d6f34u: goto label_3d6f34;
        case 0x3d6f38u: goto label_3d6f38;
        case 0x3d6f3cu: goto label_3d6f3c;
        case 0x3d6f40u: goto label_3d6f40;
        case 0x3d6f44u: goto label_3d6f44;
        case 0x3d6f48u: goto label_3d6f48;
        case 0x3d6f4cu: goto label_3d6f4c;
        case 0x3d6f50u: goto label_3d6f50;
        case 0x3d6f54u: goto label_3d6f54;
        case 0x3d6f58u: goto label_3d6f58;
        case 0x3d6f5cu: goto label_3d6f5c;
        case 0x3d6f60u: goto label_3d6f60;
        case 0x3d6f64u: goto label_3d6f64;
        case 0x3d6f68u: goto label_3d6f68;
        case 0x3d6f6cu: goto label_3d6f6c;
        case 0x3d6f70u: goto label_3d6f70;
        case 0x3d6f74u: goto label_3d6f74;
        case 0x3d6f78u: goto label_3d6f78;
        case 0x3d6f7cu: goto label_3d6f7c;
        case 0x3d6f80u: goto label_3d6f80;
        case 0x3d6f84u: goto label_3d6f84;
        case 0x3d6f88u: goto label_3d6f88;
        case 0x3d6f8cu: goto label_3d6f8c;
        case 0x3d6f90u: goto label_3d6f90;
        case 0x3d6f94u: goto label_3d6f94;
        case 0x3d6f98u: goto label_3d6f98;
        case 0x3d6f9cu: goto label_3d6f9c;
        case 0x3d6fa0u: goto label_3d6fa0;
        case 0x3d6fa4u: goto label_3d6fa4;
        case 0x3d6fa8u: goto label_3d6fa8;
        case 0x3d6facu: goto label_3d6fac;
        case 0x3d6fb0u: goto label_3d6fb0;
        case 0x3d6fb4u: goto label_3d6fb4;
        case 0x3d6fb8u: goto label_3d6fb8;
        case 0x3d6fbcu: goto label_3d6fbc;
        case 0x3d6fc0u: goto label_3d6fc0;
        case 0x3d6fc4u: goto label_3d6fc4;
        case 0x3d6fc8u: goto label_3d6fc8;
        case 0x3d6fccu: goto label_3d6fcc;
        case 0x3d6fd0u: goto label_3d6fd0;
        case 0x3d6fd4u: goto label_3d6fd4;
        case 0x3d6fd8u: goto label_3d6fd8;
        case 0x3d6fdcu: goto label_3d6fdc;
        case 0x3d6fe0u: goto label_3d6fe0;
        case 0x3d6fe4u: goto label_3d6fe4;
        case 0x3d6fe8u: goto label_3d6fe8;
        case 0x3d6fecu: goto label_3d6fec;
        case 0x3d6ff0u: goto label_3d6ff0;
        case 0x3d6ff4u: goto label_3d6ff4;
        case 0x3d6ff8u: goto label_3d6ff8;
        case 0x3d6ffcu: goto label_3d6ffc;
        case 0x3d7000u: goto label_3d7000;
        case 0x3d7004u: goto label_3d7004;
        case 0x3d7008u: goto label_3d7008;
        case 0x3d700cu: goto label_3d700c;
        case 0x3d7010u: goto label_3d7010;
        case 0x3d7014u: goto label_3d7014;
        case 0x3d7018u: goto label_3d7018;
        case 0x3d701cu: goto label_3d701c;
        case 0x3d7020u: goto label_3d7020;
        case 0x3d7024u: goto label_3d7024;
        case 0x3d7028u: goto label_3d7028;
        case 0x3d702cu: goto label_3d702c;
        case 0x3d7030u: goto label_3d7030;
        case 0x3d7034u: goto label_3d7034;
        case 0x3d7038u: goto label_3d7038;
        case 0x3d703cu: goto label_3d703c;
        case 0x3d7040u: goto label_3d7040;
        case 0x3d7044u: goto label_3d7044;
        case 0x3d7048u: goto label_3d7048;
        case 0x3d704cu: goto label_3d704c;
        case 0x3d7050u: goto label_3d7050;
        case 0x3d7054u: goto label_3d7054;
        case 0x3d7058u: goto label_3d7058;
        case 0x3d705cu: goto label_3d705c;
        case 0x3d7060u: goto label_3d7060;
        case 0x3d7064u: goto label_3d7064;
        case 0x3d7068u: goto label_3d7068;
        case 0x3d706cu: goto label_3d706c;
        case 0x3d7070u: goto label_3d7070;
        case 0x3d7074u: goto label_3d7074;
        case 0x3d7078u: goto label_3d7078;
        case 0x3d707cu: goto label_3d707c;
        case 0x3d7080u: goto label_3d7080;
        case 0x3d7084u: goto label_3d7084;
        case 0x3d7088u: goto label_3d7088;
        case 0x3d708cu: goto label_3d708c;
        case 0x3d7090u: goto label_3d7090;
        case 0x3d7094u: goto label_3d7094;
        case 0x3d7098u: goto label_3d7098;
        case 0x3d709cu: goto label_3d709c;
        case 0x3d70a0u: goto label_3d70a0;
        case 0x3d70a4u: goto label_3d70a4;
        case 0x3d70a8u: goto label_3d70a8;
        case 0x3d70acu: goto label_3d70ac;
        case 0x3d70b0u: goto label_3d70b0;
        case 0x3d70b4u: goto label_3d70b4;
        case 0x3d70b8u: goto label_3d70b8;
        case 0x3d70bcu: goto label_3d70bc;
        case 0x3d70c0u: goto label_3d70c0;
        case 0x3d70c4u: goto label_3d70c4;
        case 0x3d70c8u: goto label_3d70c8;
        case 0x3d70ccu: goto label_3d70cc;
        case 0x3d70d0u: goto label_3d70d0;
        case 0x3d70d4u: goto label_3d70d4;
        default: break;
    }

    ctx->pc = 0x3d64d8u;

label_3d64d8:
    // 0x3d64d8: 0x27bdfa10  addiu       $sp, $sp, -0x5F0
    ctx->pc = 0x3d64d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965776));
label_3d64dc:
    // 0x3d64dc: 0xafa50510  sw          $a1, 0x510($sp)
    ctx->pc = 0x3d64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 5));
label_3d64e0:
    // 0x3d64e0: 0x7fb005b0  sq          $s0, 0x5B0($sp)
    ctx->pc = 0x3d64e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 16));
label_3d64e4:
    // 0x3d64e4: 0x7fb105a0  sq          $s1, 0x5A0($sp)
    ctx->pc = 0x3d64e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 17));
label_3d64e8:
    // 0x3d64e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d64e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d64ec:
    // 0x3d64ec: 0x7fb20590  sq          $s2, 0x590($sp)
    ctx->pc = 0x3d64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 18));
label_3d64f0:
    // 0x3d64f0: 0x7fb30580  sq          $s3, 0x580($sp)
    ctx->pc = 0x3d64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 19));
label_3d64f4:
    // 0x3d64f4: 0x7fb40570  sq          $s4, 0x570($sp)
    ctx->pc = 0x3d64f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 20));
label_3d64f8:
    // 0x3d64f8: 0x7fb50560  sq          $s5, 0x560($sp)
    ctx->pc = 0x3d64f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 21));
label_3d64fc:
    // 0x3d64fc: 0x7fb60550  sq          $s6, 0x550($sp)
    ctx->pc = 0x3d64fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 22));
label_3d6500:
    // 0x3d6500: 0x7fb70540  sq          $s7, 0x540($sp)
    ctx->pc = 0x3d6500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 23));
label_3d6504:
    // 0x3d6504: 0x7fbe0530  sq          $fp, 0x530($sp)
    ctx->pc = 0x3d6504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 30));
label_3d6508:
    // 0x3d6508: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x3d6508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
label_3d650c:
    // 0x3d650c: 0xe7b805e0  swc1        $f24, 0x5E0($sp)
    ctx->pc = 0x3d650cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1504), bits); }
label_3d6510:
    // 0x3d6510: 0xe7b705d8  swc1        $f23, 0x5D8($sp)
    ctx->pc = 0x3d6510u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
label_3d6514:
    // 0x3d6514: 0xe7b605d0  swc1        $f22, 0x5D0($sp)
    ctx->pc = 0x3d6514u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
label_3d6518:
    // 0x3d6518: 0xe7b505c8  swc1        $f21, 0x5C8($sp)
    ctx->pc = 0x3d6518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1480), bits); }
label_3d651c:
    // 0x3d651c: 0xe7b405c0  swc1        $f20, 0x5C0($sp)
    ctx->pc = 0x3d651cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
label_3d6520:
    // 0x3d6520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6524:
    // 0x3d6524: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d6524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d6528:
    // 0x3d6528: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d6528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d652c:
    // 0x3d652c: 0x40f809  jalr        $v0
label_3d6530:
    if (ctx->pc == 0x3D6530u) {
        ctx->pc = 0x3D6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D652Cu;
        // 0x3d6530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6534u;
        goto label_3d6534;
    }
    ctx->pc = 0x3D652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D6534u);
        ctx->pc = 0x3D6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D652Cu;
        // 0x3d6530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D652Cu, 0x3D6534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6534u;
label_3d6534:
    // 0x3d6534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6538:
    // 0x3d6538: 0xc0e858c  jal         func_3A1630
label_3d653c:
    if (ctx->pc == 0x3D653Cu) {
        ctx->pc = 0x3D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6538u;
        // 0x3d653c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6540u;
        goto label_3d6540;
    }
    ctx->pc = 0x3D6538u;
    SET_GPR_U32(ctx, 31, 0x3D6540u);
    ctx->pc = 0x3D653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6538u;
    // 0x3d653c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D6538u, 0x3D6540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6540u;
label_3d6540:
    // 0x3d6540: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3d6540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3d6544:
    // 0x3d6544: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d6544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d6548:
    // 0x3d6548: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d654c:
    // 0x3d654c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d654cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6550:
    // 0x3d6550: 0xc0ea12a  jal         func_3A84A8
label_3d6554:
    if (ctx->pc == 0x3D6554u) {
        ctx->pc = 0x3D6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6550u;
        // 0x3d6554: 0x8fa50510  lw          $a1, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6558u;
        goto label_3d6558;
    }
    ctx->pc = 0x3D6550u;
    SET_GPR_U32(ctx, 31, 0x3D6558u);
    ctx->pc = 0x3D6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6550u;
    // 0x3d6554: 0x8fa50510  lw          $a1, 0x510($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D6550u, 0x3D6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6558u;
label_3d6558:
    // 0x3d6558: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d6558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d655c:
    // 0x3d655c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6560:
    // 0x3d6560: 0x8fa50510  lw          $a1, 0x510($sp)
    ctx->pc = 0x3d6560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d6564:
    // 0x3d6564: 0xc0ea12a  jal         func_3A84A8
label_3d6568:
    if (ctx->pc == 0x3D6568u) {
        ctx->pc = 0x3D6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6564u;
        // 0x3d6568: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D656Cu;
        goto label_3d656c;
    }
    ctx->pc = 0x3D6564u;
    SET_GPR_U32(ctx, 31, 0x3D656Cu);
    ctx->pc = 0x3D6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6564u;
    // 0x3d6568: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D6564u, 0x3D656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D656Cu;
label_3d656c:
    // 0x3d656c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x3d656cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6570:
    // 0x3d6570: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3d6570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3d6574:
    // 0x3d6574: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d6574u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6578:
    // 0x3d6578: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x3d6578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
label_3d657c:
    // 0x3d657c: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x3d657cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
label_3d6580:
    // 0x3d6580: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3d6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3d6584:
    // 0x3d6584: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3d6584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3d6588:
    // 0x3d6588: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d658c:
    // 0x3d658c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3d658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3d6590:
    // 0x3d6590: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3d6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3d6594:
    // 0x3d6594: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d6594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d6598:
    // 0x3d6598: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d6598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d659c:
    // 0x3d659c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d659cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d65a0:
    // 0x3d65a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d65a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d65a4:
    // 0x3d65a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d65a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d65a8:
    // 0x3d65a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d65a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d65ac:
    // 0x3d65ac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d65acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d65b0:
    // 0x3d65b0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d65b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d65b4:
    // 0x3d65b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d65b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d65b8:
    // 0x3d65b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d65b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d65bc:
    // 0x3d65bc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d65bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d65c0:
    // 0x3d65c0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d65c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d65c4:
    // 0x3d65c4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d65c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d65c8:
    // 0x3d65c8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d65c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d65cc:
    // 0x3d65cc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d65ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d65d0:
    // 0x3d65d0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d65d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d65d4:
    // 0x3d65d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d65d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d65d8:
    // 0x3d65d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d65d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d65dc:
    // 0x3d65dc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3d65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3d65e0:
    // 0x3d65e0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3d65e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3d65e4:
    // 0x3d65e4: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x3d65e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_3d65e8:
    // 0x3d65e8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x3d65e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3d65ec:
    // 0x3d65ec: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3d65ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3d65f0:
    // 0x3d65f0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d65f4:
    // 0x3d65f4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3d65f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3d65f8:
    // 0x3d65f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d65f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d65fc:
    // 0x3d65fc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3d65fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3d6600:
    // 0x3d6600: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d6600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6604:
    // 0x3d6604: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d6604u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d6608:
    // 0x3d6608: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d6608u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d660c:
    // 0x3d660c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d660cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6610:
    // 0x3d6610: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d6610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6614:
    // 0x3d6614: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d6614u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d6618:
    // 0x3d6618: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d6618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d661c:
    // 0x3d661c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d661cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d6620:
    // 0x3d6620: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d6620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d6624:
    // 0x3d6624: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d6624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6628:
    // 0x3d6628: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d6628u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d662c:
    // 0x3d662c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d662cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d6630:
    // 0x3d6630: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d6630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6634:
    // 0x3d6634: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d6634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d6638:
    // 0x3d6638: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d6638u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d663c:
    // 0x3d663c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x3d663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d6640:
    // 0x3d6640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d6640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6644:
    // 0x3d6644: 0xafa20514  sw          $v0, 0x514($sp)
    ctx->pc = 0x3d6644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 2));
label_3d6648:
    // 0x3d6648: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d664c:
    // 0x3d664c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3d664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3d6650:
    // 0x3d6650: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d6650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6654:
    // 0x3d6654: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3d6654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3d6658:
    // 0x3d6658: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x3d6658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d665c:
    // 0x3d665c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3d665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3d6660:
    // 0x3d6660: 0xc136b24  jal         func_4DAC90
label_3d6664:
    if (ctx->pc == 0x3D6664u) {
        ctx->pc = 0x3D6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6660u;
        // 0x3d6664: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6668u;
        goto label_3d6668;
    }
    ctx->pc = 0x3D6660u;
    SET_GPR_U32(ctx, 31, 0x3D6668u);
    ctx->pc = 0x3D6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6660u;
    // 0x3d6664: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6660u, 0x3D6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6668u;
label_3d6668:
    // 0x3d6668: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3d6668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3d666c:
    // 0x3d666c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d666cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d6670:
    // 0x3d6670: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3d6670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3d6674:
    // 0x3d6674: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d6674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d6678:
    // 0x3d6678: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d6678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d667c:
    // 0x3d667c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3d667cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d6680:
    // 0x3d6680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6684:
    // 0x3d6684: 0xc136b18  jal         func_4DAC60
label_3d6688:
    if (ctx->pc == 0x3D6688u) {
        ctx->pc = 0x3D6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6684u;
        // 0x3d6688: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D668Cu;
        goto label_3d668c;
    }
    ctx->pc = 0x3D6684u;
    SET_GPR_U32(ctx, 31, 0x3D668Cu);
    ctx->pc = 0x3D6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6684u;
    // 0x3d6688: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6684u, 0x3D668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D668Cu;
label_3d668c:
    // 0x3d668c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d6690:
    // 0x3d6690: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d6690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d6694:
    // 0x3d6694: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d6694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d6698:
    // 0x3d6698: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x3d6698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d669c:
    // 0x3d669c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3d669cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d66a0:
    // 0x3d66a0: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x3d66a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d66a4:
    // 0x3d66a4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3d66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3d66a8:
    // 0x3d66a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d66ac:
    // 0x3d66ac: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d66acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d66b0:
    // 0x3d66b0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3d66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3d66b4:
    // 0x3d66b4: 0xc0cd4ee  jal         func_3353B8
label_3d66b8:
    if (ctx->pc == 0x3D66B8u) {
        ctx->pc = 0x3D66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66B4u;
        // 0x3d66b8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D66BCu;
        goto label_3d66bc;
    }
    ctx->pc = 0x3D66B4u;
    SET_GPR_U32(ctx, 31, 0x3D66BCu);
    ctx->pc = 0x3D66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D66B4u;
    // 0x3d66b8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D66B4u, 0x3D66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D66BCu;
label_3d66bc:
    // 0x3d66bc: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x3d66bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_3d66c0:
    // 0x3d66c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d66c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d66c4:
    // 0x3d66c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d66c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d66c8:
    // 0x3d66c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d66cc:
    // 0x3d66cc: 0x8fa40514  lw          $a0, 0x514($sp)
    ctx->pc = 0x3d66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_3d66d0:
    // 0x3d66d0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3d66d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3d66d4:
    // 0x3d66d4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d66d8:
    // 0x3d66d8: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d66dc:
    // 0x3d66dc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3d66dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d66e0:
    // 0x3d66e0: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x3d66e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d66e4:
    // 0x3d66e4: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x3d66e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3d66e8:
    // 0x3d66e8: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x3d66e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d66ec:
    // 0x3d66ec: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x3d66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_3d66f0:
    // 0x3d66f0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3d66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_3d66f4:
    // 0x3d66f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d66f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d66f8:
    // 0x3d66f8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3d66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3d66fc:
    // 0x3d66fc: 0xc0ea040  jal         func_3A8100
label_3d6700:
    if (ctx->pc == 0x3D6700u) {
        ctx->pc = 0x3D6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D66FCu;
        // 0x3d6700: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6704u;
        goto label_3d6704;
    }
    ctx->pc = 0x3D66FCu;
    SET_GPR_U32(ctx, 31, 0x3D6704u);
    ctx->pc = 0x3D6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D66FCu;
    // 0x3d6700: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D66FCu, 0x3D6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6704u;
label_3d6704:
    // 0x3d6704: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3d6704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3d6708:
    // 0x3d6708: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d6708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d670c:
    // 0x3d670c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d670cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6710:
    // 0x3d6710: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6714:
    // 0x3d6714: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3d6714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3d6718:
    // 0x3d6718: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3d6718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3d671c:
    // 0x3d671c: 0xc0f15bc  jal         func_3C56F0
label_3d6720:
    if (ctx->pc == 0x3D6720u) {
        ctx->pc = 0x3D6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D671Cu;
        // 0x3d6720: 0x8fa50514  lw          $a1, 0x514($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6724u;
        goto label_3d6724;
    }
    ctx->pc = 0x3D671Cu;
    SET_GPR_U32(ctx, 31, 0x3D6724u);
    ctx->pc = 0x3D6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D671Cu;
    // 0x3d6720: 0x8fa50514  lw          $a1, 0x514($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D671Cu, 0x3D6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6724u;
label_3d6724:
    // 0x3d6724: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3d6724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3d6728:
    // 0x3d6728: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d672c:
    // 0x3d672c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d672cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6730:
    // 0x3d6730: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d6730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d6734:
    // 0x3d6734: 0xc136b24  jal         func_4DAC90
label_3d6738:
    if (ctx->pc == 0x3D6738u) {
        ctx->pc = 0x3D6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6734u;
        // 0x3d6738: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D673Cu;
        goto label_3d673c;
    }
    ctx->pc = 0x3D6734u;
    SET_GPR_U32(ctx, 31, 0x3D673Cu);
    ctx->pc = 0x3D6738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6734u;
    // 0x3d6738: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6734u, 0x3D673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D673Cu;
label_3d673c:
    // 0x3d673c: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d673cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6740:
    // 0x3d6740: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d6740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d6744:
    // 0x3d6744: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d6744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6748:
    // 0x3d6748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d674c:
    // 0x3d674c: 0xc136b18  jal         func_4DAC60
label_3d6750:
    if (ctx->pc == 0x3D6750u) {
        ctx->pc = 0x3D6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D674Cu;
        // 0x3d6750: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6754u;
        goto label_3d6754;
    }
    ctx->pc = 0x3D674Cu;
    SET_GPR_U32(ctx, 31, 0x3D6754u);
    ctx->pc = 0x3D6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D674Cu;
    // 0x3d6750: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D674Cu, 0x3D6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6754u;
label_3d6754:
    // 0x3d6754: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6758:
    // 0x3d6758: 0x27b404a0  addiu       $s4, $sp, 0x4A0
    ctx->pc = 0x3d6758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3d675c:
    // 0x3d675c: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d6760:
    // 0x3d6760: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6764:
    // 0x3d6764: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6768:
    // 0x3d6768: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3d6768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d676c:
    // 0x3d676c: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d6770:
    // 0x3d6770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6774:
    // 0x3d6774: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x3d6774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d6778:
    // 0x3d6778: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d6778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d677c:
    // 0x3d677c: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d677cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6780:
    // 0x3d6780: 0xc136b18  jal         func_4DAC60
label_3d6784:
    if (ctx->pc == 0x3D6784u) {
        ctx->pc = 0x3D6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6780u;
        // 0x3d6784: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6788u;
        goto label_3d6788;
    }
    ctx->pc = 0x3D6780u;
    SET_GPR_U32(ctx, 31, 0x3D6788u);
    ctx->pc = 0x3D6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6780u;
    // 0x3d6784: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6780u, 0x3D6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6788u;
label_3d6788:
    // 0x3d6788: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d678c:
    // 0x3d678c: 0x27be0450  addiu       $fp, $sp, 0x450
    ctx->pc = 0x3d678cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d6790:
    // 0x3d6790: 0xe7b404a0  swc1        $f20, 0x4A0($sp)
    ctx->pc = 0x3d6790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d6794:
    // 0x3d6794: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6798:
    // 0x3d6798: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d679c:
    // 0x3d679c: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d67a0:
    // 0x3d67a0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d67a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d67a4:
    // 0x3d67a4: 0xc0cd4ee  jal         func_3353B8
label_3d67a8:
    if (ctx->pc == 0x3D67A8u) {
        ctx->pc = 0x3D67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67A4u;
        // 0x3d67a8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67ACu;
        goto label_3d67ac;
    }
    ctx->pc = 0x3D67A4u;
    SET_GPR_U32(ctx, 31, 0x3D67ACu);
    ctx->pc = 0x3D67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67A4u;
    // 0x3d67a8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D67A4u, 0x3D67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67ACu;
label_3d67ac:
    // 0x3d67ac: 0x27a304d0  addiu       $v1, $sp, 0x4D0
    ctx->pc = 0x3d67acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3d67b0:
    // 0x3d67b0: 0x27b704b0  addiu       $s7, $sp, 0x4B0
    ctx->pc = 0x3d67b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3d67b4:
    // 0x3d67b4: 0xafa30518  sw          $v1, 0x518($sp)
    ctx->pc = 0x3d67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1304), GPR_U32(ctx, 3));
label_3d67b8:
    // 0x3d67b8: 0x27b504c0  addiu       $s5, $sp, 0x4C0
    ctx->pc = 0x3d67b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3d67bc:
    // 0x3d67bc: 0x27a304e0  addiu       $v1, $sp, 0x4E0
    ctx->pc = 0x3d67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_3d67c0:
    // 0x3d67c0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d67c4:
    // 0x3d67c4: 0xafa3051c  sw          $v1, 0x51C($sp)
    ctx->pc = 0x3d67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1308), GPR_U32(ctx, 3));
label_3d67c8:
    // 0x3d67c8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d67c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d67cc:
    // 0x3d67cc: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d67ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d67d0:
    // 0x3d67d0: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d67d4:
    // 0x3d67d4: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d67d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d67d8:
    // 0x3d67d8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d67d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d67dc:
    // 0x3d67dc: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3d67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3d67e0:
    // 0x3d67e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d67e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d67e4:
    // 0x3d67e4: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d67e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d67e8:
    // 0x3d67e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d67e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d67ec:
    // 0x3d67ec: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d67f0:
    // 0x3d67f0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3d67f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d67f4:
    // 0x3d67f4: 0xc0ea040  jal         func_3A8100
label_3d67f8:
    if (ctx->pc == 0x3D67F8u) {
        ctx->pc = 0x3D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D67F4u;
        // 0x3d67f8: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D67FCu;
        goto label_3d67fc;
    }
    ctx->pc = 0x3D67F4u;
    SET_GPR_U32(ctx, 31, 0x3D67FCu);
    ctx->pc = 0x3D67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67F4u;
    // 0x3d67f8: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D67F4u, 0x3D67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67FCu;
label_3d67fc:
    // 0x3d67fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d67fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6800:
    // 0x3d6800: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6804:
    // 0x3d6804: 0xc0f15bc  jal         func_3C56F0
label_3d6808:
    if (ctx->pc == 0x3D6808u) {
        ctx->pc = 0x3D6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6804u;
        // 0x3d6808: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D680Cu;
        goto label_3d680c;
    }
    ctx->pc = 0x3D6804u;
    SET_GPR_U32(ctx, 31, 0x3D680Cu);
    ctx->pc = 0x3D6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6804u;
    // 0x3d6808: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6804u, 0x3D680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D680Cu;
label_3d680c:
    // 0x3d680c: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3d680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3d6810:
    // 0x3d6810: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6814:
    // 0x3d6814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6818:
    // 0x3d6818: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d681c:
    // 0x3d681c: 0xc136b24  jal         func_4DAC90
label_3d6820:
    if (ctx->pc == 0x3D6820u) {
        ctx->pc = 0x3D6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D681Cu;
        // 0x3d6820: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6824u;
        goto label_3d6824;
    }
    ctx->pc = 0x3D681Cu;
    SET_GPR_U32(ctx, 31, 0x3D6824u);
    ctx->pc = 0x3D6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D681Cu;
    // 0x3d6820: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D681Cu, 0x3D6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6824u;
label_3d6824:
    // 0x3d6824: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6828:
    // 0x3d6828: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d6828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d682c:
    // 0x3d682c: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6830:
    // 0x3d6830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6834:
    // 0x3d6834: 0xc136b18  jal         func_4DAC60
label_3d6838:
    if (ctx->pc == 0x3D6838u) {
        ctx->pc = 0x3D6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6834u;
        // 0x3d6838: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D683Cu;
        goto label_3d683c;
    }
    ctx->pc = 0x3D6834u;
    SET_GPR_U32(ctx, 31, 0x3D683Cu);
    ctx->pc = 0x3D6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6834u;
    // 0x3d6838: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6834u, 0x3D683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D683Cu;
label_3d683c:
    // 0x3d683c: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d683cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6840:
    // 0x3d6840: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6844:
    // 0x3d6844: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d6844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d6848:
    // 0x3d6848: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3d6848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d684c:
    // 0x3d684c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6850:
    // 0x3d6850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6854:
    // 0x3d6854: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d6854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d6858:
    // 0x3d6858: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x3d6858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d685c:
    // 0x3d685c: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d685cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d6860:
    // 0x3d6860: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6864:
    // 0x3d6864: 0xc136b18  jal         func_4DAC60
label_3d6868:
    if (ctx->pc == 0x3D6868u) {
        ctx->pc = 0x3D6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6864u;
        // 0x3d6868: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D686Cu;
        goto label_3d686c;
    }
    ctx->pc = 0x3D6864u;
    SET_GPR_U32(ctx, 31, 0x3D686Cu);
    ctx->pc = 0x3D6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6864u;
    // 0x3d6868: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6864u, 0x3D686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D686Cu;
label_3d686c:
    // 0x3d686c: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d686cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6870:
    // 0x3d6870: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6874:
    // 0x3d6874: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6878:
    // 0x3d6878: 0xe7b404a0  swc1        $f20, 0x4A0($sp)
    ctx->pc = 0x3d6878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d687c:
    // 0x3d687c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6880:
    // 0x3d6880: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6884:
    // 0x3d6884: 0xc0cd4ee  jal         func_3353B8
label_3d6888:
    if (ctx->pc == 0x3D6888u) {
        ctx->pc = 0x3D6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6884u;
        // 0x3d6888: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D688Cu;
        goto label_3d688c;
    }
    ctx->pc = 0x3D6884u;
    SET_GPR_U32(ctx, 31, 0x3D688Cu);
    ctx->pc = 0x3D6888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6884u;
    // 0x3d6888: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6884u, 0x3D688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D688Cu;
label_3d688c:
    // 0x3d688c: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d688cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6890:
    // 0x3d6890: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6894:
    // 0x3d6894: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d6894u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6898:
    // 0x3d6898: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d689c:
    // 0x3d689c: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3d689cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3d68a0:
    // 0x3d68a0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d68a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d68a4:
    // 0x3d68a4: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d68a8:
    // 0x3d68a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d68a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d68ac:
    // 0x3d68ac: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d68acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d68b0:
    // 0x3d68b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d68b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d68b4:
    // 0x3d68b4: 0xafa004e0  sw          $zero, 0x4E0($sp)
    ctx->pc = 0x3d68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
label_3d68b8:
    // 0x3d68b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d68bc:
    // 0x3d68bc: 0xc0ea040  jal         func_3A8100
label_3d68c0:
    if (ctx->pc == 0x3D68C0u) {
        ctx->pc = 0x3D68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68BCu;
        // 0x3d68c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68C4u;
        goto label_3d68c4;
    }
    ctx->pc = 0x3D68BCu;
    SET_GPR_U32(ctx, 31, 0x3D68C4u);
    ctx->pc = 0x3D68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68BCu;
    // 0x3d68c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D68BCu, 0x3D68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68C4u;
label_3d68c4:
    // 0x3d68c4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d68c8:
    // 0x3d68c8: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d68cc:
    // 0x3d68cc: 0xc0f15bc  jal         func_3C56F0
label_3d68d0:
    if (ctx->pc == 0x3D68D0u) {
        ctx->pc = 0x3D68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68CCu;
        // 0x3d68d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68D4u;
        goto label_3d68d4;
    }
    ctx->pc = 0x3D68CCu;
    SET_GPR_U32(ctx, 31, 0x3D68D4u);
    ctx->pc = 0x3D68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68CCu;
    // 0x3d68d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D68CCu, 0x3D68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68D4u;
label_3d68d4:
    // 0x3d68d4: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d68d8:
    // 0x3d68d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d68dc:
    // 0x3d68dc: 0xc136b24  jal         func_4DAC90
label_3d68e0:
    if (ctx->pc == 0x3D68E0u) {
        ctx->pc = 0x3D68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68DCu;
        // 0x3d68e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68E4u;
        goto label_3d68e4;
    }
    ctx->pc = 0x3D68DCu;
    SET_GPR_U32(ctx, 31, 0x3D68E4u);
    ctx->pc = 0x3D68E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68DCu;
    // 0x3d68e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D68DCu, 0x3D68E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68E4u;
label_3d68e4:
    // 0x3d68e4: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d68e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d68e8:
    // 0x3d68e8: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d68ec:
    // 0x3d68ec: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d68ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d68f0:
    // 0x3d68f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d68f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d68f4:
    // 0x3d68f4: 0xc136b18  jal         func_4DAC60
label_3d68f8:
    if (ctx->pc == 0x3D68F8u) {
        ctx->pc = 0x3D68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68F4u;
        // 0x3d68f8: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D68FCu;
        goto label_3d68fc;
    }
    ctx->pc = 0x3D68F4u;
    SET_GPR_U32(ctx, 31, 0x3D68FCu);
    ctx->pc = 0x3D68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D68F4u;
    // 0x3d68f8: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D68F4u, 0x3D68FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D68FCu;
label_3d68fc:
    // 0x3d68fc: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d68fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6900:
    // 0x3d6900: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6904:
    // 0x3d6904: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d6904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d6908:
    // 0x3d6908: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3d6908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d690c:
    // 0x3d690c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6910:
    // 0x3d6910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6914:
    // 0x3d6914: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d6914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d6918:
    // 0x3d6918: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x3d6918u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d691c:
    // 0x3d691c: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d691cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d6920:
    // 0x3d6920: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6924:
    // 0x3d6924: 0xc136b18  jal         func_4DAC60
label_3d6928:
    if (ctx->pc == 0x3D6928u) {
        ctx->pc = 0x3D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6924u;
        // 0x3d6928: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D692Cu;
        goto label_3d692c;
    }
    ctx->pc = 0x3D6924u;
    SET_GPR_U32(ctx, 31, 0x3D692Cu);
    ctx->pc = 0x3D6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6924u;
    // 0x3d6928: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6924u, 0x3D692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D692Cu;
label_3d692c:
    // 0x3d692c: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d692cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6930:
    // 0x3d6930: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6934:
    // 0x3d6934: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6938:
    // 0x3d6938: 0xe7b704a0  swc1        $f23, 0x4A0($sp)
    ctx->pc = 0x3d6938u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d693c:
    // 0x3d693c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6940:
    // 0x3d6940: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6944:
    // 0x3d6944: 0xc0cd4ee  jal         func_3353B8
label_3d6948:
    if (ctx->pc == 0x3D6948u) {
        ctx->pc = 0x3D6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6944u;
        // 0x3d6948: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D694Cu;
        goto label_3d694c;
    }
    ctx->pc = 0x3D6944u;
    SET_GPR_U32(ctx, 31, 0x3D694Cu);
    ctx->pc = 0x3D6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6944u;
    // 0x3d6948: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6944u, 0x3D694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D694Cu;
label_3d694c:
    // 0x3d694c: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d694cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6950:
    // 0x3d6950: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6954:
    // 0x3d6954: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d6954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6958:
    // 0x3d6958: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d695c:
    // 0x3d695c: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3d695cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3d6960:
    // 0x3d6960: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d6960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6964:
    // 0x3d6964: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d6968:
    // 0x3d6968: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d6968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d696c:
    // 0x3d696c: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d696cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d6970:
    // 0x3d6970: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6974:
    // 0x3d6974: 0xafa004e0  sw          $zero, 0x4E0($sp)
    ctx->pc = 0x3d6974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
label_3d6978:
    // 0x3d6978: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d697c:
    // 0x3d697c: 0xc0ea040  jal         func_3A8100
label_3d6980:
    if (ctx->pc == 0x3D6980u) {
        ctx->pc = 0x3D6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D697Cu;
        // 0x3d6980: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6984u;
        goto label_3d6984;
    }
    ctx->pc = 0x3D697Cu;
    SET_GPR_U32(ctx, 31, 0x3D6984u);
    ctx->pc = 0x3D6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D697Cu;
    // 0x3d6980: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D697Cu, 0x3D6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6984u;
label_3d6984:
    // 0x3d6984: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6988:
    // 0x3d6988: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d698c:
    // 0x3d698c: 0xc0f15bc  jal         func_3C56F0
label_3d6990:
    if (ctx->pc == 0x3D6990u) {
        ctx->pc = 0x3D6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D698Cu;
        // 0x3d6990: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6994u;
        goto label_3d6994;
    }
    ctx->pc = 0x3D698Cu;
    SET_GPR_U32(ctx, 31, 0x3D6994u);
    ctx->pc = 0x3D6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D698Cu;
    // 0x3d6990: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D698Cu, 0x3D6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6994u;
label_3d6994:
    // 0x3d6994: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3d6994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3d6998:
    // 0x3d6998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d699c:
    // 0x3d699c: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d69a0:
    // 0x3d69a0: 0xc136b24  jal         func_4DAC90
label_3d69a4:
    if (ctx->pc == 0x3D69A4u) {
        ctx->pc = 0x3D69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69A0u;
        // 0x3d69a4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69A8u;
        goto label_3d69a8;
    }
    ctx->pc = 0x3D69A0u;
    SET_GPR_U32(ctx, 31, 0x3D69A8u);
    ctx->pc = 0x3D69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D69A0u;
    // 0x3d69a4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D69A0u, 0x3D69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D69A8u;
label_3d69a8:
    // 0x3d69a8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d69a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d69ac:
    // 0x3d69ac: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x3d69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d69b0:
    // 0x3d69b0: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d69b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d69b4:
    // 0x3d69b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d69b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d69b8:
    // 0x3d69b8: 0xc136b18  jal         func_4DAC60
label_3d69bc:
    if (ctx->pc == 0x3D69BCu) {
        ctx->pc = 0x3D69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69B8u;
        // 0x3d69bc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69C0u;
        goto label_3d69c0;
    }
    ctx->pc = 0x3D69B8u;
    SET_GPR_U32(ctx, 31, 0x3D69C0u);
    ctx->pc = 0x3D69BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D69B8u;
    // 0x3d69bc: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D69B8u, 0x3D69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D69C0u;
label_3d69c0:
    // 0x3d69c0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d69c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d69c4:
    // 0x3d69c4: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d69c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d69c8:
    // 0x3d69c8: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d69cc:
    // 0x3d69cc: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x3d69ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d69d0:
    // 0x3d69d0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d69d4:
    // 0x3d69d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d69d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d69d8:
    // 0x3d69d8: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d69dc:
    // 0x3d69dc: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x3d69dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d69e0:
    // 0x3d69e0: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d69e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d69e4:
    // 0x3d69e4: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d69e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d69e8:
    // 0x3d69e8: 0xc136b18  jal         func_4DAC60
label_3d69ec:
    if (ctx->pc == 0x3D69ECu) {
        ctx->pc = 0x3D69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69E8u;
        // 0x3d69ec: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D69F0u;
        goto label_3d69f0;
    }
    ctx->pc = 0x3D69E8u;
    SET_GPR_U32(ctx, 31, 0x3D69F0u);
    ctx->pc = 0x3D69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D69E8u;
    // 0x3d69ec: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D69E8u, 0x3D69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D69F0u;
label_3d69f0:
    // 0x3d69f0: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d69f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d69f4:
    // 0x3d69f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d69f8:
    // 0x3d69f8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d69fc:
    // 0x3d69fc: 0xe7b704a0  swc1        $f23, 0x4A0($sp)
    ctx->pc = 0x3d69fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d6a00:
    // 0x3d6a00: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6a04:
    // 0x3d6a04: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6a08:
    // 0x3d6a08: 0xc0cd4ee  jal         func_3353B8
label_3d6a0c:
    if (ctx->pc == 0x3D6A0Cu) {
        ctx->pc = 0x3D6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A08u;
        // 0x3d6a0c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A10u;
        goto label_3d6a10;
    }
    ctx->pc = 0x3D6A08u;
    SET_GPR_U32(ctx, 31, 0x3D6A10u);
    ctx->pc = 0x3D6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A08u;
    // 0x3d6a0c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6A08u, 0x3D6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A10u;
label_3d6a10:
    // 0x3d6a10: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6a14:
    // 0x3d6a14: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6a18:
    // 0x3d6a18: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d6a18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6a1c:
    // 0x3d6a1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a20:
    // 0x3d6a20: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d6a20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6a24:
    // 0x3d6a24: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3d6a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a28:
    // 0x3d6a28: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3d6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3d6a2c:
    // 0x3d6a2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a30:
    // 0x3d6a30: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d6a34:
    // 0x3d6a34: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d6a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a38:
    // 0x3d6a38: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d6a3c:
    // 0x3d6a3c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d6a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a40:
    // 0x3d6a40: 0xc0ea040  jal         func_3A8100
label_3d6a44:
    if (ctx->pc == 0x3D6A44u) {
        ctx->pc = 0x3D6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A40u;
        // 0x3d6a44: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A48u;
        goto label_3d6a48;
    }
    ctx->pc = 0x3D6A40u;
    SET_GPR_U32(ctx, 31, 0x3D6A48u);
    ctx->pc = 0x3D6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A40u;
    // 0x3d6a44: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6A40u, 0x3D6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A48u;
label_3d6a48:
    // 0x3d6a48: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6a4c:
    // 0x3d6a4c: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6a50:
    // 0x3d6a50: 0xc0f15bc  jal         func_3C56F0
label_3d6a54:
    if (ctx->pc == 0x3D6A54u) {
        ctx->pc = 0x3D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A50u;
        // 0x3d6a54: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A58u;
        goto label_3d6a58;
    }
    ctx->pc = 0x3D6A50u;
    SET_GPR_U32(ctx, 31, 0x3D6A58u);
    ctx->pc = 0x3D6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A50u;
    // 0x3d6a54: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6A50u, 0x3D6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A58u;
label_3d6a58:
    // 0x3d6a58: 0xc0e9694  jal         func_3A5A50
label_3d6a5c:
    if (ctx->pc == 0x3D6A5Cu) {
        ctx->pc = 0x3D6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A58u;
        // 0x3d6a5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A60u;
        goto label_3d6a60;
    }
    ctx->pc = 0x3D6A58u;
    SET_GPR_U32(ctx, 31, 0x3D6A60u);
    ctx->pc = 0x3D6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A58u;
    // 0x3d6a5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3D6A58u, 0x3D6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A60u;
label_3d6a60:
    // 0x3d6a60: 0x1040018b  beqz        $v0, . + 4 + (0x18B << 2)
label_3d6a64:
    if (ctx->pc == 0x3D6A64u) {
        ctx->pc = 0x3D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A60u;
        // 0x3d6a64: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A68u;
        goto label_3d6a68;
    }
    ctx->pc = 0x3D6A60u;
    {
        const bool branch_taken_0x3d6a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A60u;
        // 0x3d6a64: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a60) {
            ctx->pc = 0x3D7090u;
            goto label_3d7090;
        }
    }
    ctx->pc = 0x3D6A68u;
label_3d6a68:
    // 0x3d6a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d6a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6a6c:
    // 0x3d6a6c: 0xc136b24  jal         func_4DAC90
label_3d6a70:
    if (ctx->pc == 0x3D6A70u) {
        ctx->pc = 0x3D6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A6Cu;
        // 0x3d6a70: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A74u;
        goto label_3d6a74;
    }
    ctx->pc = 0x3D6A6Cu;
    SET_GPR_U32(ctx, 31, 0x3D6A74u);
    ctx->pc = 0x3D6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A6Cu;
    // 0x3d6a70: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6A6Cu, 0x3D6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A74u;
label_3d6a74:
    // 0x3d6a74: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3d6a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d6a78:
    // 0x3d6a78: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x3d6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6a7c:
    // 0x3d6a7c: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3d6a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6a80:
    // 0x3d6a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a84:
    // 0x3d6a84: 0xc136b18  jal         func_4DAC60
label_3d6a88:
    if (ctx->pc == 0x3D6A88u) {
        ctx->pc = 0x3D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A84u;
        // 0x3d6a88: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6A8Cu;
        goto label_3d6a8c;
    }
    ctx->pc = 0x3D6A84u;
    SET_GPR_U32(ctx, 31, 0x3D6A8Cu);
    ctx->pc = 0x3D6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A84u;
    // 0x3d6a88: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6A84u, 0x3D6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A8Cu;
label_3d6a8c:
    // 0x3d6a8c: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x3d6a8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d6a90:
    // 0x3d6a90: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6a94:
    // 0x3d6a94: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6a98:
    // 0x3d6a98: 0xe7b80480  swc1        $f24, 0x480($sp)
    ctx->pc = 0x3d6a98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3d6a9c:
    // 0x3d6a9c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6aa0:
    // 0x3d6aa0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6aa4:
    // 0x3d6aa4: 0xc0cd4ee  jal         func_3353B8
label_3d6aa8:
    if (ctx->pc == 0x3D6AA8u) {
        ctx->pc = 0x3D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AA4u;
        // 0x3d6aa8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6AACu;
        goto label_3d6aac;
    }
    ctx->pc = 0x3D6AA4u;
    SET_GPR_U32(ctx, 31, 0x3D6AACu);
    ctx->pc = 0x3D6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AA4u;
    // 0x3d6aa8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6AA4u, 0x3D6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AACu;
label_3d6aac:
    // 0x3d6aac: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6ab0:
    // 0x3d6ab0: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x3d6ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d6ab4:
    // 0x3d6ab4: 0xafa20490  sw          $v0, 0x490($sp)
    ctx->pc = 0x3d6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
label_3d6ab8:
    // 0x3d6ab8: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d6ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6abc:
    // 0x3d6abc: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x3d6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_3d6ac0:
    // 0x3d6ac0: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x3d6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
label_3d6ac4:
    // 0x3d6ac4: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
label_3d6ac8:
    // 0x3d6ac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3d6ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6acc:
    // 0x3d6acc: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3d6accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3d6ad0:
    // 0x3d6ad0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d6ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ad4:
    // 0x3d6ad4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3d6ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ad8:
    // 0x3d6ad8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3d6ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6adc:
    // 0x3d6adc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ae0:
    // 0x3d6ae0: 0xc0ea040  jal         func_3A8100
label_3d6ae4:
    if (ctx->pc == 0x3D6AE4u) {
        ctx->pc = 0x3D6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AE0u;
        // 0x3d6ae4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6AE8u;
        goto label_3d6ae8;
    }
    ctx->pc = 0x3D6AE0u;
    SET_GPR_U32(ctx, 31, 0x3D6AE8u);
    ctx->pc = 0x3D6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AE0u;
    // 0x3d6ae4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6AE0u, 0x3D6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AE8u;
label_3d6ae8:
    // 0x3d6ae8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6aec:
    // 0x3d6aec: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6af0:
    // 0x3d6af0: 0xc0f15bc  jal         func_3C56F0
label_3d6af4:
    if (ctx->pc == 0x3D6AF4u) {
        ctx->pc = 0x3D6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AF0u;
        // 0x3d6af4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6AF8u;
        goto label_3d6af8;
    }
    ctx->pc = 0x3D6AF0u;
    SET_GPR_U32(ctx, 31, 0x3D6AF8u);
    ctx->pc = 0x3D6AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AF0u;
    // 0x3d6af4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6AF0u, 0x3D6AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AF8u;
label_3d6af8:
    // 0x3d6af8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3d6af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3d6afc:
    // 0x3d6afc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6b00:
    // 0x3d6b00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6b04:
    // 0x3d6b04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6b08:
    // 0x3d6b08: 0xc136b24  jal         func_4DAC90
label_3d6b0c:
    if (ctx->pc == 0x3D6B0Cu) {
        ctx->pc = 0x3D6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B08u;
        // 0x3d6b0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6B10u;
        goto label_3d6b10;
    }
    ctx->pc = 0x3D6B08u;
    SET_GPR_U32(ctx, 31, 0x3D6B10u);
    ctx->pc = 0x3D6B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B08u;
    // 0x3d6b0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6B08u, 0x3D6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B10u;
label_3d6b10:
    // 0x3d6b10: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6b14:
    // 0x3d6b14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d6b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b18:
    // 0x3d6b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b1c:
    // 0x3d6b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b20:
    // 0x3d6b20: 0xc136b18  jal         func_4DAC60
label_3d6b24:
    if (ctx->pc == 0x3D6B24u) {
        ctx->pc = 0x3D6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B20u;
        // 0x3d6b24: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6B28u;
        goto label_3d6b28;
    }
    ctx->pc = 0x3D6B20u;
    SET_GPR_U32(ctx, 31, 0x3D6B28u);
    ctx->pc = 0x3D6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B20u;
    // 0x3d6b24: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6B20u, 0x3D6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B28u;
label_3d6b28:
    // 0x3d6b28: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6b2c:
    // 0x3d6b2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6b30:
    // 0x3d6b30: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3d6b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3d6b34:
    // 0x3d6b34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6b38:
    // 0x3d6b38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6b3c:
    // 0x3d6b3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b40:
    // 0x3d6b40: 0xc136b24  jal         func_4DAC90
label_3d6b44:
    if (ctx->pc == 0x3D6B44u) {
        ctx->pc = 0x3D6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B40u;
        // 0x3d6b44: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6B48u;
        goto label_3d6b48;
    }
    ctx->pc = 0x3D6B40u;
    SET_GPR_U32(ctx, 31, 0x3D6B48u);
    ctx->pc = 0x3D6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B40u;
    // 0x3d6b44: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6B40u, 0x3D6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B48u;
label_3d6b48:
    // 0x3d6b48: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6b4c:
    // 0x3d6b4c: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3d6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6b50:
    // 0x3d6b50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b54:
    // 0x3d6b54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b58:
    // 0x3d6b58: 0xc136b18  jal         func_4DAC60
label_3d6b5c:
    if (ctx->pc == 0x3D6B5Cu) {
        ctx->pc = 0x3D6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B58u;
        // 0x3d6b5c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6B60u;
        goto label_3d6b60;
    }
    ctx->pc = 0x3D6B58u;
    SET_GPR_U32(ctx, 31, 0x3D6B60u);
    ctx->pc = 0x3D6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B58u;
    // 0x3d6b5c: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6B58u, 0x3D6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B60u;
label_3d6b60:
    // 0x3d6b60: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6b64:
    // 0x3d6b64: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6b68:
    // 0x3d6b68: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3d6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3d6b6c:
    // 0x3d6b6c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d6b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b70:
    // 0x3d6b70: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6b74:
    // 0x3d6b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b78:
    // 0x3d6b78: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x3d6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
label_3d6b7c:
    // 0x3d6b7c: 0xe6b50008  swc1        $f21, 0x8($s5)
    ctx->pc = 0x3d6b7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3d6b80:
    // 0x3d6b80: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3d6b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3d6b84:
    // 0x3d6b84: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6b88:
    // 0x3d6b88: 0xc136b18  jal         func_4DAC60
label_3d6b8c:
    if (ctx->pc == 0x3D6B8Cu) {
        ctx->pc = 0x3D6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B88u;
        // 0x3d6b8c: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6B90u;
        goto label_3d6b90;
    }
    ctx->pc = 0x3D6B88u;
    SET_GPR_U32(ctx, 31, 0x3D6B90u);
    ctx->pc = 0x3D6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B88u;
    // 0x3d6b8c: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6B88u, 0x3D6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B90u;
label_3d6b90:
    // 0x3d6b90: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6b94:
    // 0x3d6b94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6b98:
    // 0x3d6b98: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6b9c:
    // 0x3d6b9c: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3d6b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3d6ba0:
    // 0x3d6ba0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6ba4:
    // 0x3d6ba4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6ba8:
    // 0x3d6ba8: 0xc0cd4ee  jal         func_3353B8
label_3d6bac:
    if (ctx->pc == 0x3D6BACu) {
        ctx->pc = 0x3D6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BA8u;
        // 0x3d6bac: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6BB0u;
        goto label_3d6bb0;
    }
    ctx->pc = 0x3D6BA8u;
    SET_GPR_U32(ctx, 31, 0x3D6BB0u);
    ctx->pc = 0x3D6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BA8u;
    // 0x3d6bac: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6BA8u, 0x3D6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BB0u;
label_3d6bb0:
    // 0x3d6bb0: 0x27b204f0  addiu       $s2, $sp, 0x4F0
    ctx->pc = 0x3d6bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_3d6bb4:
    // 0x3d6bb4: 0x27b30500  addiu       $s3, $sp, 0x500
    ctx->pc = 0x3d6bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_3d6bb8:
    // 0x3d6bb8: 0x8fa70518  lw          $a3, 0x518($sp)
    ctx->pc = 0x3d6bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6bbc:
    // 0x3d6bbc: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6bc0:
    // 0x3d6bc0: 0x8fa8051c  lw          $t0, 0x51C($sp)
    ctx->pc = 0x3d6bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6bc4:
    // 0x3d6bc4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6bc8:
    // 0x3d6bc8: 0xafa304e0  sw          $v1, 0x4E0($sp)
    ctx->pc = 0x3d6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 3));
label_3d6bcc:
    // 0x3d6bcc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3d6bccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6bd0:
    // 0x3d6bd0: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3d6bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3d6bd4:
    // 0x3d6bd4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d6bd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d6bd8:
    // 0x3d6bd8: 0xafa004f0  sw          $zero, 0x4F0($sp)
    ctx->pc = 0x3d6bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 0));
label_3d6bdc:
    // 0x3d6bdc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d6bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6be0:
    // 0x3d6be0: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3d6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3d6be4:
    // 0x3d6be4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6be8:
    // 0x3d6be8: 0xc0ea040  jal         func_3A8100
label_3d6bec:
    if (ctx->pc == 0x3D6BECu) {
        ctx->pc = 0x3D6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BE8u;
        // 0x3d6bec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6BF0u;
        goto label_3d6bf0;
    }
    ctx->pc = 0x3D6BE8u;
    SET_GPR_U32(ctx, 31, 0x3D6BF0u);
    ctx->pc = 0x3D6BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BE8u;
    // 0x3d6bec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6BE8u, 0x3D6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BF0u;
label_3d6bf0:
    // 0x3d6bf0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6bf4:
    // 0x3d6bf4: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6bf8:
    // 0x3d6bf8: 0xc0f15bc  jal         func_3C56F0
label_3d6bfc:
    if (ctx->pc == 0x3D6BFCu) {
        ctx->pc = 0x3D6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BF8u;
        // 0x3d6bfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C00u;
        goto label_3d6c00;
    }
    ctx->pc = 0x3D6BF8u;
    SET_GPR_U32(ctx, 31, 0x3D6C00u);
    ctx->pc = 0x3D6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BF8u;
    // 0x3d6bfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6BF8u, 0x3D6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C00u;
label_3d6c00:
    // 0x3d6c00: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3d6c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3d6c04:
    // 0x3d6c04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6c08:
    // 0x3d6c08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6c0c:
    // 0x3d6c0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6c10:
    // 0x3d6c10: 0xc136b24  jal         func_4DAC90
label_3d6c14:
    if (ctx->pc == 0x3D6C14u) {
        ctx->pc = 0x3D6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C10u;
        // 0x3d6c14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C18u;
        goto label_3d6c18;
    }
    ctx->pc = 0x3D6C10u;
    SET_GPR_U32(ctx, 31, 0x3D6C18u);
    ctx->pc = 0x3D6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C10u;
    // 0x3d6c14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6C10u, 0x3D6C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C18u;
label_3d6c18:
    // 0x3d6c18: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6c1c:
    // 0x3d6c1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d6c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c20:
    // 0x3d6c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c24:
    // 0x3d6c24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c28:
    // 0x3d6c28: 0xc136b18  jal         func_4DAC60
label_3d6c2c:
    if (ctx->pc == 0x3D6C2Cu) {
        ctx->pc = 0x3D6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C28u;
        // 0x3d6c2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C30u;
        goto label_3d6c30;
    }
    ctx->pc = 0x3D6C28u;
    SET_GPR_U32(ctx, 31, 0x3D6C30u);
    ctx->pc = 0x3D6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C28u;
    // 0x3d6c2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6C28u, 0x3D6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C30u;
label_3d6c30:
    // 0x3d6c30: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6c34:
    // 0x3d6c34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6c38:
    // 0x3d6c38: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3d6c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3d6c3c:
    // 0x3d6c3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6c40:
    // 0x3d6c40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6c44:
    // 0x3d6c44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c48:
    // 0x3d6c48: 0xc136b24  jal         func_4DAC90
label_3d6c4c:
    if (ctx->pc == 0x3D6C4Cu) {
        ctx->pc = 0x3D6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C48u;
        // 0x3d6c4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C50u;
        goto label_3d6c50;
    }
    ctx->pc = 0x3D6C48u;
    SET_GPR_U32(ctx, 31, 0x3D6C50u);
    ctx->pc = 0x3D6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C48u;
    // 0x3d6c4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6C48u, 0x3D6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C50u;
label_3d6c50:
    // 0x3d6c50: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6c54:
    // 0x3d6c54: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3d6c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6c58:
    // 0x3d6c58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c5c:
    // 0x3d6c5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c60:
    // 0x3d6c60: 0xc136b18  jal         func_4DAC60
label_3d6c64:
    if (ctx->pc == 0x3D6C64u) {
        ctx->pc = 0x3D6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C60u;
        // 0x3d6c64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C68u;
        goto label_3d6c68;
    }
    ctx->pc = 0x3D6C60u;
    SET_GPR_U32(ctx, 31, 0x3D6C68u);
    ctx->pc = 0x3D6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C60u;
    // 0x3d6c64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6C60u, 0x3D6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C68u;
label_3d6c68:
    // 0x3d6c68: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6c6c:
    // 0x3d6c6c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6c70:
    // 0x3d6c70: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3d6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3d6c74:
    // 0x3d6c74: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d6c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c78:
    // 0x3d6c78: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6c7c:
    // 0x3d6c7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c80:
    // 0x3d6c80: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x3d6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
label_3d6c84:
    // 0x3d6c84: 0xe6b50008  swc1        $f21, 0x8($s5)
    ctx->pc = 0x3d6c84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3d6c88:
    // 0x3d6c88: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3d6c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3d6c8c:
    // 0x3d6c8c: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6c90:
    // 0x3d6c90: 0xc136b18  jal         func_4DAC60
label_3d6c94:
    if (ctx->pc == 0x3D6C94u) {
        ctx->pc = 0x3D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C90u;
        // 0x3d6c94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C98u;
        goto label_3d6c98;
    }
    ctx->pc = 0x3D6C90u;
    SET_GPR_U32(ctx, 31, 0x3D6C98u);
    ctx->pc = 0x3D6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C90u;
    // 0x3d6c94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6C90u, 0x3D6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C98u;
label_3d6c98:
    // 0x3d6c98: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6c9c:
    // 0x3d6c9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6ca0:
    // 0x3d6ca0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6ca4:
    // 0x3d6ca4: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3d6ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3d6ca8:
    // 0x3d6ca8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6cac:
    // 0x3d6cac: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6cb0:
    // 0x3d6cb0: 0xc0cd4ee  jal         func_3353B8
label_3d6cb4:
    if (ctx->pc == 0x3D6CB4u) {
        ctx->pc = 0x3D6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CB0u;
        // 0x3d6cb4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CB8u;
        goto label_3d6cb8;
    }
    ctx->pc = 0x3D6CB0u;
    SET_GPR_U32(ctx, 31, 0x3D6CB8u);
    ctx->pc = 0x3D6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CB0u;
    // 0x3d6cb4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6CB0u, 0x3D6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6CB8u;
label_3d6cb8:
    // 0x3d6cb8: 0x8fa70518  lw          $a3, 0x518($sp)
    ctx->pc = 0x3d6cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6cbc:
    // 0x3d6cbc: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6cc0:
    // 0x3d6cc0: 0x8fa8051c  lw          $t0, 0x51C($sp)
    ctx->pc = 0x3d6cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6cc4:
    // 0x3d6cc4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6cc8:
    // 0x3d6cc8: 0xafa304e0  sw          $v1, 0x4E0($sp)
    ctx->pc = 0x3d6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 3));
label_3d6ccc:
    // 0x3d6ccc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3d6cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cd0:
    // 0x3d6cd0: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3d6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3d6cd4:
    // 0x3d6cd4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d6cd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cd8:
    // 0x3d6cd8: 0xafa004f0  sw          $zero, 0x4F0($sp)
    ctx->pc = 0x3d6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 0));
label_3d6cdc:
    // 0x3d6cdc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d6cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ce0:
    // 0x3d6ce0: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3d6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3d6ce4:
    // 0x3d6ce4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ce8:
    // 0x3d6ce8: 0xc0ea040  jal         func_3A8100
label_3d6cec:
    if (ctx->pc == 0x3D6CECu) {
        ctx->pc = 0x3D6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CE8u;
        // 0x3d6cec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CF0u;
        goto label_3d6cf0;
    }
    ctx->pc = 0x3D6CE8u;
    SET_GPR_U32(ctx, 31, 0x3D6CF0u);
    ctx->pc = 0x3D6CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CE8u;
    // 0x3d6cec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6CE8u, 0x3D6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6CF0u;
label_3d6cf0:
    // 0x3d6cf0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6cf4:
    // 0x3d6cf4: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6cf8:
    // 0x3d6cf8: 0xc0f15bc  jal         func_3C56F0
label_3d6cfc:
    if (ctx->pc == 0x3D6CFCu) {
        ctx->pc = 0x3D6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CF8u;
        // 0x3d6cfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D00u;
        goto label_3d6d00;
    }
    ctx->pc = 0x3D6CF8u;
    SET_GPR_U32(ctx, 31, 0x3D6D00u);
    ctx->pc = 0x3D6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CF8u;
    // 0x3d6cfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6CF8u, 0x3D6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D00u;
label_3d6d00:
    // 0x3d6d00: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3d6d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3d6d04:
    // 0x3d6d04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6d08:
    // 0x3d6d08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6d0c:
    // 0x3d6d0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6d10:
    // 0x3d6d10: 0xc136b24  jal         func_4DAC90
label_3d6d14:
    if (ctx->pc == 0x3D6D14u) {
        ctx->pc = 0x3D6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D10u;
        // 0x3d6d14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D18u;
        goto label_3d6d18;
    }
    ctx->pc = 0x3D6D10u;
    SET_GPR_U32(ctx, 31, 0x3D6D18u);
    ctx->pc = 0x3D6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D10u;
    // 0x3d6d14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6D10u, 0x3D6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D18u;
label_3d6d18:
    // 0x3d6d18: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6d1c:
    // 0x3d6d1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d6d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d20:
    // 0x3d6d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d24:
    // 0x3d6d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d28:
    // 0x3d6d28: 0xc136b18  jal         func_4DAC60
label_3d6d2c:
    if (ctx->pc == 0x3D6D2Cu) {
        ctx->pc = 0x3D6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D28u;
        // 0x3d6d2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D30u;
        goto label_3d6d30;
    }
    ctx->pc = 0x3D6D28u;
    SET_GPR_U32(ctx, 31, 0x3D6D30u);
    ctx->pc = 0x3D6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D28u;
    // 0x3d6d2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6D28u, 0x3D6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D30u;
label_3d6d30:
    // 0x3d6d30: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6d34:
    // 0x3d6d34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6d38:
    // 0x3d6d38: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3d6d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3d6d3c:
    // 0x3d6d3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6d40:
    // 0x3d6d40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6d44:
    // 0x3d6d44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d48:
    // 0x3d6d48: 0xc136b24  jal         func_4DAC90
label_3d6d4c:
    if (ctx->pc == 0x3D6D4Cu) {
        ctx->pc = 0x3D6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D48u;
        // 0x3d6d4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D50u;
        goto label_3d6d50;
    }
    ctx->pc = 0x3D6D48u;
    SET_GPR_U32(ctx, 31, 0x3D6D50u);
    ctx->pc = 0x3D6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D48u;
    // 0x3d6d4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6D48u, 0x3D6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D50u;
label_3d6d50:
    // 0x3d6d50: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6d54:
    // 0x3d6d54: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3d6d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6d58:
    // 0x3d6d58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d5c:
    // 0x3d6d5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d60:
    // 0x3d6d60: 0xc136b18  jal         func_4DAC60
label_3d6d64:
    if (ctx->pc == 0x3D6D64u) {
        ctx->pc = 0x3D6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D60u;
        // 0x3d6d64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D68u;
        goto label_3d6d68;
    }
    ctx->pc = 0x3D6D60u;
    SET_GPR_U32(ctx, 31, 0x3D6D68u);
    ctx->pc = 0x3D6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D60u;
    // 0x3d6d64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6D60u, 0x3D6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D68u;
label_3d6d68:
    // 0x3d6d68: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6d6c:
    // 0x3d6d6c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6d70:
    // 0x3d6d70: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3d6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3d6d74:
    // 0x3d6d74: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d6d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d78:
    // 0x3d6d78: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6d7c:
    // 0x3d6d7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6d80:
    // 0x3d6d80: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x3d6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
label_3d6d84:
    // 0x3d6d84: 0xe6b50008  swc1        $f21, 0x8($s5)
    ctx->pc = 0x3d6d84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3d6d88:
    // 0x3d6d88: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3d6d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3d6d8c:
    // 0x3d6d8c: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6d90:
    // 0x3d6d90: 0xc136b18  jal         func_4DAC60
label_3d6d94:
    if (ctx->pc == 0x3D6D94u) {
        ctx->pc = 0x3D6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D90u;
        // 0x3d6d94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D98u;
        goto label_3d6d98;
    }
    ctx->pc = 0x3D6D90u;
    SET_GPR_U32(ctx, 31, 0x3D6D98u);
    ctx->pc = 0x3D6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D90u;
    // 0x3d6d94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6D90u, 0x3D6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D98u;
label_3d6d98:
    // 0x3d6d98: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6d9c:
    // 0x3d6d9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6da0:
    // 0x3d6da0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6da4:
    // 0x3d6da4: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3d6da4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3d6da8:
    // 0x3d6da8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6dac:
    // 0x3d6dac: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6db0:
    // 0x3d6db0: 0xc0cd4ee  jal         func_3353B8
label_3d6db4:
    if (ctx->pc == 0x3D6DB4u) {
        ctx->pc = 0x3D6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DB0u;
        // 0x3d6db4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DB8u;
        goto label_3d6db8;
    }
    ctx->pc = 0x3D6DB0u;
    SET_GPR_U32(ctx, 31, 0x3D6DB8u);
    ctx->pc = 0x3D6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DB0u;
    // 0x3d6db4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6DB0u, 0x3D6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DB8u;
label_3d6db8:
    // 0x3d6db8: 0x8fa70518  lw          $a3, 0x518($sp)
    ctx->pc = 0x3d6db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6dbc:
    // 0x3d6dbc: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6dc0:
    // 0x3d6dc0: 0x8fa8051c  lw          $t0, 0x51C($sp)
    ctx->pc = 0x3d6dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6dc4:
    // 0x3d6dc4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6dc8:
    // 0x3d6dc8: 0xafa304e0  sw          $v1, 0x4E0($sp)
    ctx->pc = 0x3d6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 3));
label_3d6dcc:
    // 0x3d6dcc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3d6dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6dd0:
    // 0x3d6dd0: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3d6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3d6dd4:
    // 0x3d6dd4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d6dd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d6dd8:
    // 0x3d6dd8: 0xafa004f0  sw          $zero, 0x4F0($sp)
    ctx->pc = 0x3d6dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 0));
label_3d6ddc:
    // 0x3d6ddc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d6ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6de0:
    // 0x3d6de0: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3d6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3d6de4:
    // 0x3d6de4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6de8:
    // 0x3d6de8: 0xc0ea040  jal         func_3A8100
label_3d6dec:
    if (ctx->pc == 0x3D6DECu) {
        ctx->pc = 0x3D6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DE8u;
        // 0x3d6dec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DF0u;
        goto label_3d6df0;
    }
    ctx->pc = 0x3D6DE8u;
    SET_GPR_U32(ctx, 31, 0x3D6DF0u);
    ctx->pc = 0x3D6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DE8u;
    // 0x3d6dec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6DE8u, 0x3D6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DF0u;
label_3d6df0:
    // 0x3d6df0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6df4:
    // 0x3d6df4: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6df8:
    // 0x3d6df8: 0xc0f15bc  jal         func_3C56F0
label_3d6dfc:
    if (ctx->pc == 0x3D6DFCu) {
        ctx->pc = 0x3D6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DF8u;
        // 0x3d6dfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E00u;
        goto label_3d6e00;
    }
    ctx->pc = 0x3D6DF8u;
    SET_GPR_U32(ctx, 31, 0x3D6E00u);
    ctx->pc = 0x3D6DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DF8u;
    // 0x3d6dfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6DF8u, 0x3D6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E00u;
label_3d6e00:
    // 0x3d6e00: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3d6e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3d6e04:
    // 0x3d6e04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6e08:
    // 0x3d6e08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6e0c:
    // 0x3d6e0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d6e10:
    // 0x3d6e10: 0xc136b24  jal         func_4DAC90
label_3d6e14:
    if (ctx->pc == 0x3D6E14u) {
        ctx->pc = 0x3D6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E10u;
        // 0x3d6e14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E18u;
        goto label_3d6e18;
    }
    ctx->pc = 0x3D6E10u;
    SET_GPR_U32(ctx, 31, 0x3D6E18u);
    ctx->pc = 0x3D6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E10u;
    // 0x3d6e14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6E10u, 0x3D6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E18u;
label_3d6e18:
    // 0x3d6e18: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6e1c:
    // 0x3d6e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d6e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e20:
    // 0x3d6e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e24:
    // 0x3d6e24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e28:
    // 0x3d6e28: 0xc136b18  jal         func_4DAC60
label_3d6e2c:
    if (ctx->pc == 0x3D6E2Cu) {
        ctx->pc = 0x3D6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E28u;
        // 0x3d6e2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E30u;
        goto label_3d6e30;
    }
    ctx->pc = 0x3D6E28u;
    SET_GPR_U32(ctx, 31, 0x3D6E30u);
    ctx->pc = 0x3D6E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E28u;
    // 0x3d6e2c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6E28u, 0x3D6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E30u;
label_3d6e30:
    // 0x3d6e30: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6e34:
    // 0x3d6e34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6e38:
    // 0x3d6e38: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3d6e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3d6e3c:
    // 0x3d6e3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d6e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d6e40:
    // 0x3d6e40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6e44:
    // 0x3d6e44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e48:
    // 0x3d6e48: 0xc136b24  jal         func_4DAC90
label_3d6e4c:
    if (ctx->pc == 0x3D6E4Cu) {
        ctx->pc = 0x3D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E48u;
        // 0x3d6e4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E50u;
        goto label_3d6e50;
    }
    ctx->pc = 0x3D6E48u;
    SET_GPR_U32(ctx, 31, 0x3D6E50u);
    ctx->pc = 0x3D6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E48u;
    // 0x3d6e4c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6E48u, 0x3D6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E50u;
label_3d6e50:
    // 0x3d6e50: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6e54:
    // 0x3d6e54: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x3d6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6e58:
    // 0x3d6e58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d6e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e5c:
    // 0x3d6e5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e60:
    // 0x3d6e60: 0xc136b18  jal         func_4DAC60
label_3d6e64:
    if (ctx->pc == 0x3D6E64u) {
        ctx->pc = 0x3D6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E60u;
        // 0x3d6e64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E68u;
        goto label_3d6e68;
    }
    ctx->pc = 0x3D6E60u;
    SET_GPR_U32(ctx, 31, 0x3D6E68u);
    ctx->pc = 0x3D6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E60u;
    // 0x3d6e64: 0x7fa204a0  sq          $v0, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6E60u, 0x3D6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E68u;
label_3d6e68:
    // 0x3d6e68: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6e68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d6e6c:
    // 0x3d6e6c: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6e70:
    // 0x3d6e70: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3d6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3d6e74:
    // 0x3d6e74: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3d6e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e78:
    // 0x3d6e78: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6e7c:
    // 0x3d6e7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e80:
    // 0x3d6e80: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x3d6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
label_3d6e84:
    // 0x3d6e84: 0xe6b50008  swc1        $f21, 0x8($s5)
    ctx->pc = 0x3d6e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3d6e88:
    // 0x3d6e88: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x3d6e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3d6e8c:
    // 0x3d6e8c: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6e90:
    // 0x3d6e90: 0xc136b18  jal         func_4DAC60
label_3d6e94:
    if (ctx->pc == 0x3D6E94u) {
        ctx->pc = 0x3D6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E90u;
        // 0x3d6e94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E98u;
        goto label_3d6e98;
    }
    ctx->pc = 0x3D6E90u;
    SET_GPR_U32(ctx, 31, 0x3D6E98u);
    ctx->pc = 0x3D6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E90u;
    // 0x3d6e94: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6E90u, 0x3D6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E98u;
label_3d6e98:
    // 0x3d6e98: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x3d6e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d6e9c:
    // 0x3d6e9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6ea0:
    // 0x3d6ea0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6ea4:
    // 0x3d6ea4: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3d6ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3d6ea8:
    // 0x3d6ea8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6eac:
    // 0x3d6eac: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6eb0:
    // 0x3d6eb0: 0xc0cd4ee  jal         func_3353B8
label_3d6eb4:
    if (ctx->pc == 0x3D6EB4u) {
        ctx->pc = 0x3D6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EB0u;
        // 0x3d6eb4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6EB8u;
        goto label_3d6eb8;
    }
    ctx->pc = 0x3D6EB0u;
    SET_GPR_U32(ctx, 31, 0x3D6EB8u);
    ctx->pc = 0x3D6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6EB0u;
    // 0x3d6eb4: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6EB0u, 0x3D6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6EB8u;
label_3d6eb8:
    // 0x3d6eb8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6ebc:
    // 0x3d6ebc: 0x8fa70518  lw          $a3, 0x518($sp)
    ctx->pc = 0x3d6ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6ec0:
    // 0x3d6ec0: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3d6ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3d6ec4:
    // 0x3d6ec4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3d6ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ec8:
    // 0x3d6ec8: 0x8fa8051c  lw          $t0, 0x51C($sp)
    ctx->pc = 0x3d6ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6ecc:
    // 0x3d6ecc: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x3d6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_3d6ed0:
    // 0x3d6ed0: 0xafa204e0  sw          $v0, 0x4E0($sp)
    ctx->pc = 0x3d6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 2));
label_3d6ed4:
    // 0x3d6ed4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d6ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ed8:
    // 0x3d6ed8: 0xafa004f0  sw          $zero, 0x4F0($sp)
    ctx->pc = 0x3d6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 0));
label_3d6edc:
    // 0x3d6edc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d6edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ee0:
    // 0x3d6ee0: 0xafa00500  sw          $zero, 0x500($sp)
    ctx->pc = 0x3d6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 0));
label_3d6ee4:
    // 0x3d6ee4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ee8:
    // 0x3d6ee8: 0xc0ea040  jal         func_3A8100
label_3d6eec:
    if (ctx->pc == 0x3D6EECu) {
        ctx->pc = 0x3D6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EE8u;
        // 0x3d6eec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6EF0u;
        goto label_3d6ef0;
    }
    ctx->pc = 0x3D6EE8u;
    SET_GPR_U32(ctx, 31, 0x3D6EF0u);
    ctx->pc = 0x3D6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6EE8u;
    // 0x3d6eec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6EE8u, 0x3D6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6EF0u;
label_3d6ef0:
    // 0x3d6ef0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6ef4:
    // 0x3d6ef4: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6ef8:
    // 0x3d6ef8: 0xc0f15bc  jal         func_3C56F0
label_3d6efc:
    if (ctx->pc == 0x3D6EFCu) {
        ctx->pc = 0x3D6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EF8u;
        // 0x3d6efc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6F00u;
        goto label_3d6f00;
    }
    ctx->pc = 0x3D6EF8u;
    SET_GPR_U32(ctx, 31, 0x3D6F00u);
    ctx->pc = 0x3D6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6EF8u;
    // 0x3d6efc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6EF8u, 0x3D6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F00u;
label_3d6f00:
    // 0x3d6f00: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x3d6f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_3d6f04:
    // 0x3d6f04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d6f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d6f08:
    // 0x3d6f08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6f0c:
    // 0x3d6f0c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6f10:
    // 0x3d6f10: 0xc136b24  jal         func_4DAC90
label_3d6f14:
    if (ctx->pc == 0x3D6F14u) {
        ctx->pc = 0x3D6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F10u;
        // 0x3d6f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6F18u;
        goto label_3d6f18;
    }
    ctx->pc = 0x3D6F10u;
    SET_GPR_U32(ctx, 31, 0x3D6F18u);
    ctx->pc = 0x3D6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F10u;
    // 0x3d6f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6F10u, 0x3D6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F18u;
label_3d6f18:
    // 0x3d6f18: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6f18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6f1c:
    // 0x3d6f1c: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d6f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6f20:
    // 0x3d6f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f24:
    // 0x3d6f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f28:
    // 0x3d6f28: 0xc136b18  jal         func_4DAC60
label_3d6f2c:
    if (ctx->pc == 0x3D6F2Cu) {
        ctx->pc = 0x3D6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F28u;
        // 0x3d6f2c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6F30u;
        goto label_3d6f30;
    }
    ctx->pc = 0x3D6F28u;
    SET_GPR_U32(ctx, 31, 0x3D6F30u);
    ctx->pc = 0x3D6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F28u;
    // 0x3d6f2c: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6F28u, 0x3D6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F30u;
label_3d6f30:
    // 0x3d6f30: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6f34:
    // 0x3d6f34: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d6f38:
    // 0x3d6f38: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d6f3c:
    // 0x3d6f3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d6f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f40:
    // 0x3d6f40: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d6f44:
    // 0x3d6f44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f48:
    // 0x3d6f48: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d6f4c:
    // 0x3d6f4c: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x3d6f4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d6f50:
    // 0x3d6f50: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d6f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d6f54:
    // 0x3d6f54: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6f58:
    // 0x3d6f58: 0xc136b18  jal         func_4DAC60
label_3d6f5c:
    if (ctx->pc == 0x3D6F5Cu) {
        ctx->pc = 0x3D6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F58u;
        // 0x3d6f5c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6F60u;
        goto label_3d6f60;
    }
    ctx->pc = 0x3D6F58u;
    SET_GPR_U32(ctx, 31, 0x3D6F60u);
    ctx->pc = 0x3D6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F58u;
    // 0x3d6f5c: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6F58u, 0x3D6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F60u;
label_3d6f60:
    // 0x3d6f60: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d6f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d6f64:
    // 0x3d6f64: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d6f68:
    // 0x3d6f68: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d6f6c:
    // 0x3d6f6c: 0xe7b704a0  swc1        $f23, 0x4A0($sp)
    ctx->pc = 0x3d6f6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d6f70:
    // 0x3d6f70: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d6f74:
    // 0x3d6f74: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d6f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d6f78:
    // 0x3d6f78: 0xc0cd4ee  jal         func_3353B8
label_3d6f7c:
    if (ctx->pc == 0x3D6F7Cu) {
        ctx->pc = 0x3D6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F78u;
        // 0x3d6f7c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6F80u;
        goto label_3d6f80;
    }
    ctx->pc = 0x3D6F78u;
    SET_GPR_U32(ctx, 31, 0x3D6F80u);
    ctx->pc = 0x3D6F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F78u;
    // 0x3d6f7c: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D6F78u, 0x3D6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F80u;
label_3d6f80:
    // 0x3d6f80: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x3d6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_3d6f84:
    // 0x3d6f84: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d6f84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d6f88:
    // 0x3d6f88: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d6f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d6f8c:
    // 0x3d6f8c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d6f90:
    // 0x3d6f90: 0xafa304c0  sw          $v1, 0x4C0($sp)
    ctx->pc = 0x3d6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 3));
label_3d6f94:
    // 0x3d6f94: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d6f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f98:
    // 0x3d6f98: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d6f9c:
    // 0x3d6f9c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d6f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fa0:
    // 0x3d6fa0: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d6fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d6fa4:
    // 0x3d6fa4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d6fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fa8:
    // 0x3d6fa8: 0xafa004e0  sw          $zero, 0x4E0($sp)
    ctx->pc = 0x3d6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
label_3d6fac:
    // 0x3d6fac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d6facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fb0:
    // 0x3d6fb0: 0xc0ea040  jal         func_3A8100
label_3d6fb4:
    if (ctx->pc == 0x3D6FB4u) {
        ctx->pc = 0x3D6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FB0u;
        // 0x3d6fb4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6FB8u;
        goto label_3d6fb8;
    }
    ctx->pc = 0x3D6FB0u;
    SET_GPR_U32(ctx, 31, 0x3D6FB8u);
    ctx->pc = 0x3D6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FB0u;
    // 0x3d6fb4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D6FB0u, 0x3D6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FB8u;
label_3d6fb8:
    // 0x3d6fb8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d6fbc:
    // 0x3d6fbc: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d6fc0:
    // 0x3d6fc0: 0xc0f15bc  jal         func_3C56F0
label_3d6fc4:
    if (ctx->pc == 0x3D6FC4u) {
        ctx->pc = 0x3D6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FC0u;
        // 0x3d6fc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6FC8u;
        goto label_3d6fc8;
    }
    ctx->pc = 0x3D6FC0u;
    SET_GPR_U32(ctx, 31, 0x3D6FC8u);
    ctx->pc = 0x3D6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FC0u;
    // 0x3d6fc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D6FC0u, 0x3D6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FC8u;
label_3d6fc8:
    // 0x3d6fc8: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x3d6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_3d6fcc:
    // 0x3d6fcc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3d6fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3d6fd0:
    // 0x3d6fd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d6fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d6fd4:
    // 0x3d6fd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d6fd8:
    // 0x3d6fd8: 0xc136b24  jal         func_4DAC90
label_3d6fdc:
    if (ctx->pc == 0x3D6FDCu) {
        ctx->pc = 0x3D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FD8u;
        // 0x3d6fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6FE0u;
        goto label_3d6fe0;
    }
    ctx->pc = 0x3D6FD8u;
    SET_GPR_U32(ctx, 31, 0x3D6FE0u);
    ctx->pc = 0x3D6FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FD8u;
    // 0x3d6fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D6FD8u, 0x3D6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FE0u;
label_3d6fe0:
    // 0x3d6fe0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6fe4:
    // 0x3d6fe4: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x3d6fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d6fe8:
    // 0x3d6fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fec:
    // 0x3d6fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ff0:
    // 0x3d6ff0: 0xc136b18  jal         func_4DAC60
label_3d6ff4:
    if (ctx->pc == 0x3D6FF4u) {
        ctx->pc = 0x3D6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FF0u;
        // 0x3d6ff4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6FF8u;
        goto label_3d6ff8;
    }
    ctx->pc = 0x3D6FF0u;
    SET_GPR_U32(ctx, 31, 0x3D6FF8u);
    ctx->pc = 0x3D6FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FF0u;
    // 0x3d6ff4: 0x7fa20480  sq          $v0, 0x480($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D6FF0u, 0x3D6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FF8u;
label_3d6ff8:
    // 0x3d6ff8: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x3d6ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d6ffc:
    // 0x3d6ffc: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x3d6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d7000:
    // 0x3d7000: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x3d7000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
label_3d7004:
    // 0x3d7004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d7004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7008:
    // 0x3d7008: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d700c:
    // 0x3d700c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7010:
    // 0x3d7010: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x3d7010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
label_3d7014:
    // 0x3d7014: 0xe6960008  swc1        $f22, 0x8($s4)
    ctx->pc = 0x3d7014u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3d7018:
    // 0x3d7018: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x3d7018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3d701c:
    // 0x3d701c: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d701cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d7020:
    // 0x3d7020: 0xc136b18  jal         func_4DAC60
label_3d7024:
    if (ctx->pc == 0x3D7024u) {
        ctx->pc = 0x3D7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7020u;
        // 0x3d7024: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7028u;
        goto label_3d7028;
    }
    ctx->pc = 0x3D7020u;
    SET_GPR_U32(ctx, 31, 0x3D7028u);
    ctx->pc = 0x3D7024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7020u;
    // 0x3d7024: 0x7fa20490  sq          $v0, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D7020u, 0x3D7028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7028u;
label_3d7028:
    // 0x3d7028: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d7028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d702c:
    // 0x3d702c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d702cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d7030:
    // 0x3d7030: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d7034:
    // 0x3d7034: 0xe7b704a0  swc1        $f23, 0x4A0($sp)
    ctx->pc = 0x3d7034u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1184), bits); }
label_3d7038:
    // 0x3d7038: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d7038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d703c:
    // 0x3d703c: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d7040:
    // 0x3d7040: 0xc0cd4ee  jal         func_3353B8
label_3d7044:
    if (ctx->pc == 0x3D7044u) {
        ctx->pc = 0x3D7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7040u;
        // 0x3d7044: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7048u;
        goto label_3d7048;
    }
    ctx->pc = 0x3D7040u;
    SET_GPR_U32(ctx, 31, 0x3D7048u);
    ctx->pc = 0x3D7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7040u;
    // 0x3d7044: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D7040u, 0x3D7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7048u;
label_3d7048:
    // 0x3d7048: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3d7048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3d704c:
    // 0x3d704c: 0x8fa90518  lw          $t1, 0x518($sp)
    ctx->pc = 0x3d704cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_3d7050:
    // 0x3d7050: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3d7050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3d7054:
    // 0x3d7054: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3d7054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d7058:
    // 0x3d7058: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x3d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_3d705c:
    // 0x3d705c: 0x8faa051c  lw          $t2, 0x51C($sp)
    ctx->pc = 0x3d705cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1308)));
label_3d7060:
    // 0x3d7060: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d7060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d7064:
    // 0x3d7064: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3d7064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d7068:
    // 0x3d7068: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x3d7068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_3d706c:
    // 0x3d706c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3d706cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d7070:
    // 0x3d7070: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d7070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d7074:
    // 0x3d7074: 0xafa004d0  sw          $zero, 0x4D0($sp)
    ctx->pc = 0x3d7074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
label_3d7078:
    // 0x3d7078: 0xc0ea040  jal         func_3A8100
label_3d707c:
    if (ctx->pc == 0x3D707Cu) {
        ctx->pc = 0x3D707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7078u;
        // 0x3d707c: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7080u;
        goto label_3d7080;
    }
    ctx->pc = 0x3D7078u;
    SET_GPR_U32(ctx, 31, 0x3D7080u);
    ctx->pc = 0x3D707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7078u;
    // 0x3d707c: 0xafa004e0  sw          $zero, 0x4E0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3D7078u, 0x3D7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7080u;
label_3d7080:
    // 0x3d7080: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3d7080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3d7084:
    // 0x3d7084: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3d7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
label_3d7088:
    // 0x3d7088: 0xc0f15bc  jal         func_3C56F0
label_3d708c:
    if (ctx->pc == 0x3D708Cu) {
        ctx->pc = 0x3D708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7088u;
        // 0x3d708c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7090u;
        goto label_3d7090;
    }
    ctx->pc = 0x3D7088u;
    SET_GPR_U32(ctx, 31, 0x3D7090u);
    ctx->pc = 0x3D708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7088u;
    // 0x3d708c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D7088u, 0x3D7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7090u;
label_3d7090:
    // 0x3d7090: 0x7bb005b0  lq          $s0, 0x5B0($sp)
    ctx->pc = 0x3d7090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_3d7094:
    // 0x3d7094: 0x7bb105a0  lq          $s1, 0x5A0($sp)
    ctx->pc = 0x3d7094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_3d7098:
    // 0x3d7098: 0x7bb20590  lq          $s2, 0x590($sp)
    ctx->pc = 0x3d7098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_3d709c:
    // 0x3d709c: 0x7bb30580  lq          $s3, 0x580($sp)
    ctx->pc = 0x3d709cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3d70a0:
    // 0x3d70a0: 0x7bb40570  lq          $s4, 0x570($sp)
    ctx->pc = 0x3d70a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3d70a4:
    // 0x3d70a4: 0x7bb50560  lq          $s5, 0x560($sp)
    ctx->pc = 0x3d70a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3d70a8:
    // 0x3d70a8: 0x7bb60550  lq          $s6, 0x550($sp)
    ctx->pc = 0x3d70a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3d70ac:
    // 0x3d70ac: 0x7bb70540  lq          $s7, 0x540($sp)
    ctx->pc = 0x3d70acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3d70b0:
    // 0x3d70b0: 0x7bbe0530  lq          $fp, 0x530($sp)
    ctx->pc = 0x3d70b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3d70b4:
    // 0x3d70b4: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x3d70b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
label_3d70b8:
    // 0x3d70b8: 0xc7b805e0  lwc1        $f24, 0x5E0($sp)
    ctx->pc = 0x3d70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3d70bc:
    // 0x3d70bc: 0xc7b705d8  lwc1        $f23, 0x5D8($sp)
    ctx->pc = 0x3d70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d70c0:
    // 0x3d70c0: 0xc7b605d0  lwc1        $f22, 0x5D0($sp)
    ctx->pc = 0x3d70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d70c4:
    // 0x3d70c4: 0xc7b505c8  lwc1        $f21, 0x5C8($sp)
    ctx->pc = 0x3d70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d70c8:
    // 0x3d70c8: 0xc7b405c0  lwc1        $f20, 0x5C0($sp)
    ctx->pc = 0x3d70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d70cc:
    // 0x3d70cc: 0x3e00008  jr          $ra
label_3d70d0:
    if (ctx->pc == 0x3D70D0u) {
        ctx->pc = 0x3D70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70CCu;
        // 0x3d70d0: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D70D4u;
        goto label_3d70d4;
    }
    ctx->pc = 0x3D70CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70CCu;
        // 0x3d70d0: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D70CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D70D4u;
label_3d70d4:
    // 0x3d70d4: 0x0  nop
    ctx->pc = 0x3d70d4u;
    // NOP
    ctx->pc = 0x3d70d8u;
}
