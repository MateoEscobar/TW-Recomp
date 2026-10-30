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

// Function: sub_004A6568
// Address: 0x4a6568 - 0x4a6b98
void sub_004A6568_0x4a6568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6568_0x4a6568");
#endif

    switch (ctx->pc) {
        case 0x4a6568u: goto label_4a6568;
        case 0x4a656cu: goto label_4a656c;
        case 0x4a6570u: goto label_4a6570;
        case 0x4a6574u: goto label_4a6574;
        case 0x4a6578u: goto label_4a6578;
        case 0x4a657cu: goto label_4a657c;
        case 0x4a6580u: goto label_4a6580;
        case 0x4a6584u: goto label_4a6584;
        case 0x4a6588u: goto label_4a6588;
        case 0x4a658cu: goto label_4a658c;
        case 0x4a6590u: goto label_4a6590;
        case 0x4a6594u: goto label_4a6594;
        case 0x4a6598u: goto label_4a6598;
        case 0x4a659cu: goto label_4a659c;
        case 0x4a65a0u: goto label_4a65a0;
        case 0x4a65a4u: goto label_4a65a4;
        case 0x4a65a8u: goto label_4a65a8;
        case 0x4a65acu: goto label_4a65ac;
        case 0x4a65b0u: goto label_4a65b0;
        case 0x4a65b4u: goto label_4a65b4;
        case 0x4a65b8u: goto label_4a65b8;
        case 0x4a65bcu: goto label_4a65bc;
        case 0x4a65c0u: goto label_4a65c0;
        case 0x4a65c4u: goto label_4a65c4;
        case 0x4a65c8u: goto label_4a65c8;
        case 0x4a65ccu: goto label_4a65cc;
        case 0x4a65d0u: goto label_4a65d0;
        case 0x4a65d4u: goto label_4a65d4;
        case 0x4a65d8u: goto label_4a65d8;
        case 0x4a65dcu: goto label_4a65dc;
        case 0x4a65e0u: goto label_4a65e0;
        case 0x4a65e4u: goto label_4a65e4;
        case 0x4a65e8u: goto label_4a65e8;
        case 0x4a65ecu: goto label_4a65ec;
        case 0x4a65f0u: goto label_4a65f0;
        case 0x4a65f4u: goto label_4a65f4;
        case 0x4a65f8u: goto label_4a65f8;
        case 0x4a65fcu: goto label_4a65fc;
        case 0x4a6600u: goto label_4a6600;
        case 0x4a6604u: goto label_4a6604;
        case 0x4a6608u: goto label_4a6608;
        case 0x4a660cu: goto label_4a660c;
        case 0x4a6610u: goto label_4a6610;
        case 0x4a6614u: goto label_4a6614;
        case 0x4a6618u: goto label_4a6618;
        case 0x4a661cu: goto label_4a661c;
        case 0x4a6620u: goto label_4a6620;
        case 0x4a6624u: goto label_4a6624;
        case 0x4a6628u: goto label_4a6628;
        case 0x4a662cu: goto label_4a662c;
        case 0x4a6630u: goto label_4a6630;
        case 0x4a6634u: goto label_4a6634;
        case 0x4a6638u: goto label_4a6638;
        case 0x4a663cu: goto label_4a663c;
        case 0x4a6640u: goto label_4a6640;
        case 0x4a6644u: goto label_4a6644;
        case 0x4a6648u: goto label_4a6648;
        case 0x4a664cu: goto label_4a664c;
        case 0x4a6650u: goto label_4a6650;
        case 0x4a6654u: goto label_4a6654;
        case 0x4a6658u: goto label_4a6658;
        case 0x4a665cu: goto label_4a665c;
        case 0x4a6660u: goto label_4a6660;
        case 0x4a6664u: goto label_4a6664;
        case 0x4a6668u: goto label_4a6668;
        case 0x4a666cu: goto label_4a666c;
        case 0x4a6670u: goto label_4a6670;
        case 0x4a6674u: goto label_4a6674;
        case 0x4a6678u: goto label_4a6678;
        case 0x4a667cu: goto label_4a667c;
        case 0x4a6680u: goto label_4a6680;
        case 0x4a6684u: goto label_4a6684;
        case 0x4a6688u: goto label_4a6688;
        case 0x4a668cu: goto label_4a668c;
        case 0x4a6690u: goto label_4a6690;
        case 0x4a6694u: goto label_4a6694;
        case 0x4a6698u: goto label_4a6698;
        case 0x4a669cu: goto label_4a669c;
        case 0x4a66a0u: goto label_4a66a0;
        case 0x4a66a4u: goto label_4a66a4;
        case 0x4a66a8u: goto label_4a66a8;
        case 0x4a66acu: goto label_4a66ac;
        case 0x4a66b0u: goto label_4a66b0;
        case 0x4a66b4u: goto label_4a66b4;
        case 0x4a66b8u: goto label_4a66b8;
        case 0x4a66bcu: goto label_4a66bc;
        case 0x4a66c0u: goto label_4a66c0;
        case 0x4a66c4u: goto label_4a66c4;
        case 0x4a66c8u: goto label_4a66c8;
        case 0x4a66ccu: goto label_4a66cc;
        case 0x4a66d0u: goto label_4a66d0;
        case 0x4a66d4u: goto label_4a66d4;
        case 0x4a66d8u: goto label_4a66d8;
        case 0x4a66dcu: goto label_4a66dc;
        case 0x4a66e0u: goto label_4a66e0;
        case 0x4a66e4u: goto label_4a66e4;
        case 0x4a66e8u: goto label_4a66e8;
        case 0x4a66ecu: goto label_4a66ec;
        case 0x4a66f0u: goto label_4a66f0;
        case 0x4a66f4u: goto label_4a66f4;
        case 0x4a66f8u: goto label_4a66f8;
        case 0x4a66fcu: goto label_4a66fc;
        case 0x4a6700u: goto label_4a6700;
        case 0x4a6704u: goto label_4a6704;
        case 0x4a6708u: goto label_4a6708;
        case 0x4a670cu: goto label_4a670c;
        case 0x4a6710u: goto label_4a6710;
        case 0x4a6714u: goto label_4a6714;
        case 0x4a6718u: goto label_4a6718;
        case 0x4a671cu: goto label_4a671c;
        case 0x4a6720u: goto label_4a6720;
        case 0x4a6724u: goto label_4a6724;
        case 0x4a6728u: goto label_4a6728;
        case 0x4a672cu: goto label_4a672c;
        case 0x4a6730u: goto label_4a6730;
        case 0x4a6734u: goto label_4a6734;
        case 0x4a6738u: goto label_4a6738;
        case 0x4a673cu: goto label_4a673c;
        case 0x4a6740u: goto label_4a6740;
        case 0x4a6744u: goto label_4a6744;
        case 0x4a6748u: goto label_4a6748;
        case 0x4a674cu: goto label_4a674c;
        case 0x4a6750u: goto label_4a6750;
        case 0x4a6754u: goto label_4a6754;
        case 0x4a6758u: goto label_4a6758;
        case 0x4a675cu: goto label_4a675c;
        case 0x4a6760u: goto label_4a6760;
        case 0x4a6764u: goto label_4a6764;
        case 0x4a6768u: goto label_4a6768;
        case 0x4a676cu: goto label_4a676c;
        case 0x4a6770u: goto label_4a6770;
        case 0x4a6774u: goto label_4a6774;
        case 0x4a6778u: goto label_4a6778;
        case 0x4a677cu: goto label_4a677c;
        case 0x4a6780u: goto label_4a6780;
        case 0x4a6784u: goto label_4a6784;
        case 0x4a6788u: goto label_4a6788;
        case 0x4a678cu: goto label_4a678c;
        case 0x4a6790u: goto label_4a6790;
        case 0x4a6794u: goto label_4a6794;
        case 0x4a6798u: goto label_4a6798;
        case 0x4a679cu: goto label_4a679c;
        case 0x4a67a0u: goto label_4a67a0;
        case 0x4a67a4u: goto label_4a67a4;
        case 0x4a67a8u: goto label_4a67a8;
        case 0x4a67acu: goto label_4a67ac;
        case 0x4a67b0u: goto label_4a67b0;
        case 0x4a67b4u: goto label_4a67b4;
        case 0x4a67b8u: goto label_4a67b8;
        case 0x4a67bcu: goto label_4a67bc;
        case 0x4a67c0u: goto label_4a67c0;
        case 0x4a67c4u: goto label_4a67c4;
        case 0x4a67c8u: goto label_4a67c8;
        case 0x4a67ccu: goto label_4a67cc;
        case 0x4a67d0u: goto label_4a67d0;
        case 0x4a67d4u: goto label_4a67d4;
        case 0x4a67d8u: goto label_4a67d8;
        case 0x4a67dcu: goto label_4a67dc;
        case 0x4a67e0u: goto label_4a67e0;
        case 0x4a67e4u: goto label_4a67e4;
        case 0x4a67e8u: goto label_4a67e8;
        case 0x4a67ecu: goto label_4a67ec;
        case 0x4a67f0u: goto label_4a67f0;
        case 0x4a67f4u: goto label_4a67f4;
        case 0x4a67f8u: goto label_4a67f8;
        case 0x4a67fcu: goto label_4a67fc;
        case 0x4a6800u: goto label_4a6800;
        case 0x4a6804u: goto label_4a6804;
        case 0x4a6808u: goto label_4a6808;
        case 0x4a680cu: goto label_4a680c;
        case 0x4a6810u: goto label_4a6810;
        case 0x4a6814u: goto label_4a6814;
        case 0x4a6818u: goto label_4a6818;
        case 0x4a681cu: goto label_4a681c;
        case 0x4a6820u: goto label_4a6820;
        case 0x4a6824u: goto label_4a6824;
        case 0x4a6828u: goto label_4a6828;
        case 0x4a682cu: goto label_4a682c;
        case 0x4a6830u: goto label_4a6830;
        case 0x4a6834u: goto label_4a6834;
        case 0x4a6838u: goto label_4a6838;
        case 0x4a683cu: goto label_4a683c;
        case 0x4a6840u: goto label_4a6840;
        case 0x4a6844u: goto label_4a6844;
        case 0x4a6848u: goto label_4a6848;
        case 0x4a684cu: goto label_4a684c;
        case 0x4a6850u: goto label_4a6850;
        case 0x4a6854u: goto label_4a6854;
        case 0x4a6858u: goto label_4a6858;
        case 0x4a685cu: goto label_4a685c;
        case 0x4a6860u: goto label_4a6860;
        case 0x4a6864u: goto label_4a6864;
        case 0x4a6868u: goto label_4a6868;
        case 0x4a686cu: goto label_4a686c;
        case 0x4a6870u: goto label_4a6870;
        case 0x4a6874u: goto label_4a6874;
        case 0x4a6878u: goto label_4a6878;
        case 0x4a687cu: goto label_4a687c;
        case 0x4a6880u: goto label_4a6880;
        case 0x4a6884u: goto label_4a6884;
        case 0x4a6888u: goto label_4a6888;
        case 0x4a688cu: goto label_4a688c;
        case 0x4a6890u: goto label_4a6890;
        case 0x4a6894u: goto label_4a6894;
        case 0x4a6898u: goto label_4a6898;
        case 0x4a689cu: goto label_4a689c;
        case 0x4a68a0u: goto label_4a68a0;
        case 0x4a68a4u: goto label_4a68a4;
        case 0x4a68a8u: goto label_4a68a8;
        case 0x4a68acu: goto label_4a68ac;
        case 0x4a68b0u: goto label_4a68b0;
        case 0x4a68b4u: goto label_4a68b4;
        case 0x4a68b8u: goto label_4a68b8;
        case 0x4a68bcu: goto label_4a68bc;
        case 0x4a68c0u: goto label_4a68c0;
        case 0x4a68c4u: goto label_4a68c4;
        case 0x4a68c8u: goto label_4a68c8;
        case 0x4a68ccu: goto label_4a68cc;
        case 0x4a68d0u: goto label_4a68d0;
        case 0x4a68d4u: goto label_4a68d4;
        case 0x4a68d8u: goto label_4a68d8;
        case 0x4a68dcu: goto label_4a68dc;
        case 0x4a68e0u: goto label_4a68e0;
        case 0x4a68e4u: goto label_4a68e4;
        case 0x4a68e8u: goto label_4a68e8;
        case 0x4a68ecu: goto label_4a68ec;
        case 0x4a68f0u: goto label_4a68f0;
        case 0x4a68f4u: goto label_4a68f4;
        case 0x4a68f8u: goto label_4a68f8;
        case 0x4a68fcu: goto label_4a68fc;
        case 0x4a6900u: goto label_4a6900;
        case 0x4a6904u: goto label_4a6904;
        case 0x4a6908u: goto label_4a6908;
        case 0x4a690cu: goto label_4a690c;
        case 0x4a6910u: goto label_4a6910;
        case 0x4a6914u: goto label_4a6914;
        case 0x4a6918u: goto label_4a6918;
        case 0x4a691cu: goto label_4a691c;
        case 0x4a6920u: goto label_4a6920;
        case 0x4a6924u: goto label_4a6924;
        case 0x4a6928u: goto label_4a6928;
        case 0x4a692cu: goto label_4a692c;
        case 0x4a6930u: goto label_4a6930;
        case 0x4a6934u: goto label_4a6934;
        case 0x4a6938u: goto label_4a6938;
        case 0x4a693cu: goto label_4a693c;
        case 0x4a6940u: goto label_4a6940;
        case 0x4a6944u: goto label_4a6944;
        case 0x4a6948u: goto label_4a6948;
        case 0x4a694cu: goto label_4a694c;
        case 0x4a6950u: goto label_4a6950;
        case 0x4a6954u: goto label_4a6954;
        case 0x4a6958u: goto label_4a6958;
        case 0x4a695cu: goto label_4a695c;
        case 0x4a6960u: goto label_4a6960;
        case 0x4a6964u: goto label_4a6964;
        case 0x4a6968u: goto label_4a6968;
        case 0x4a696cu: goto label_4a696c;
        case 0x4a6970u: goto label_4a6970;
        case 0x4a6974u: goto label_4a6974;
        case 0x4a6978u: goto label_4a6978;
        case 0x4a697cu: goto label_4a697c;
        case 0x4a6980u: goto label_4a6980;
        case 0x4a6984u: goto label_4a6984;
        case 0x4a6988u: goto label_4a6988;
        case 0x4a698cu: goto label_4a698c;
        case 0x4a6990u: goto label_4a6990;
        case 0x4a6994u: goto label_4a6994;
        case 0x4a6998u: goto label_4a6998;
        case 0x4a699cu: goto label_4a699c;
        case 0x4a69a0u: goto label_4a69a0;
        case 0x4a69a4u: goto label_4a69a4;
        case 0x4a69a8u: goto label_4a69a8;
        case 0x4a69acu: goto label_4a69ac;
        case 0x4a69b0u: goto label_4a69b0;
        case 0x4a69b4u: goto label_4a69b4;
        case 0x4a69b8u: goto label_4a69b8;
        case 0x4a69bcu: goto label_4a69bc;
        case 0x4a69c0u: goto label_4a69c0;
        case 0x4a69c4u: goto label_4a69c4;
        case 0x4a69c8u: goto label_4a69c8;
        case 0x4a69ccu: goto label_4a69cc;
        case 0x4a69d0u: goto label_4a69d0;
        case 0x4a69d4u: goto label_4a69d4;
        case 0x4a69d8u: goto label_4a69d8;
        case 0x4a69dcu: goto label_4a69dc;
        case 0x4a69e0u: goto label_4a69e0;
        case 0x4a69e4u: goto label_4a69e4;
        case 0x4a69e8u: goto label_4a69e8;
        case 0x4a69ecu: goto label_4a69ec;
        case 0x4a69f0u: goto label_4a69f0;
        case 0x4a69f4u: goto label_4a69f4;
        case 0x4a69f8u: goto label_4a69f8;
        case 0x4a69fcu: goto label_4a69fc;
        case 0x4a6a00u: goto label_4a6a00;
        case 0x4a6a04u: goto label_4a6a04;
        case 0x4a6a08u: goto label_4a6a08;
        case 0x4a6a0cu: goto label_4a6a0c;
        case 0x4a6a10u: goto label_4a6a10;
        case 0x4a6a14u: goto label_4a6a14;
        case 0x4a6a18u: goto label_4a6a18;
        case 0x4a6a1cu: goto label_4a6a1c;
        case 0x4a6a20u: goto label_4a6a20;
        case 0x4a6a24u: goto label_4a6a24;
        case 0x4a6a28u: goto label_4a6a28;
        case 0x4a6a2cu: goto label_4a6a2c;
        case 0x4a6a30u: goto label_4a6a30;
        case 0x4a6a34u: goto label_4a6a34;
        case 0x4a6a38u: goto label_4a6a38;
        case 0x4a6a3cu: goto label_4a6a3c;
        case 0x4a6a40u: goto label_4a6a40;
        case 0x4a6a44u: goto label_4a6a44;
        case 0x4a6a48u: goto label_4a6a48;
        case 0x4a6a4cu: goto label_4a6a4c;
        case 0x4a6a50u: goto label_4a6a50;
        case 0x4a6a54u: goto label_4a6a54;
        case 0x4a6a58u: goto label_4a6a58;
        case 0x4a6a5cu: goto label_4a6a5c;
        case 0x4a6a60u: goto label_4a6a60;
        case 0x4a6a64u: goto label_4a6a64;
        case 0x4a6a68u: goto label_4a6a68;
        case 0x4a6a6cu: goto label_4a6a6c;
        case 0x4a6a70u: goto label_4a6a70;
        case 0x4a6a74u: goto label_4a6a74;
        case 0x4a6a78u: goto label_4a6a78;
        case 0x4a6a7cu: goto label_4a6a7c;
        case 0x4a6a80u: goto label_4a6a80;
        case 0x4a6a84u: goto label_4a6a84;
        case 0x4a6a88u: goto label_4a6a88;
        case 0x4a6a8cu: goto label_4a6a8c;
        case 0x4a6a90u: goto label_4a6a90;
        case 0x4a6a94u: goto label_4a6a94;
        case 0x4a6a98u: goto label_4a6a98;
        case 0x4a6a9cu: goto label_4a6a9c;
        case 0x4a6aa0u: goto label_4a6aa0;
        case 0x4a6aa4u: goto label_4a6aa4;
        case 0x4a6aa8u: goto label_4a6aa8;
        case 0x4a6aacu: goto label_4a6aac;
        case 0x4a6ab0u: goto label_4a6ab0;
        case 0x4a6ab4u: goto label_4a6ab4;
        case 0x4a6ab8u: goto label_4a6ab8;
        case 0x4a6abcu: goto label_4a6abc;
        case 0x4a6ac0u: goto label_4a6ac0;
        case 0x4a6ac4u: goto label_4a6ac4;
        case 0x4a6ac8u: goto label_4a6ac8;
        case 0x4a6accu: goto label_4a6acc;
        case 0x4a6ad0u: goto label_4a6ad0;
        case 0x4a6ad4u: goto label_4a6ad4;
        case 0x4a6ad8u: goto label_4a6ad8;
        case 0x4a6adcu: goto label_4a6adc;
        case 0x4a6ae0u: goto label_4a6ae0;
        case 0x4a6ae4u: goto label_4a6ae4;
        case 0x4a6ae8u: goto label_4a6ae8;
        case 0x4a6aecu: goto label_4a6aec;
        case 0x4a6af0u: goto label_4a6af0;
        case 0x4a6af4u: goto label_4a6af4;
        case 0x4a6af8u: goto label_4a6af8;
        case 0x4a6afcu: goto label_4a6afc;
        case 0x4a6b00u: goto label_4a6b00;
        case 0x4a6b04u: goto label_4a6b04;
        case 0x4a6b08u: goto label_4a6b08;
        case 0x4a6b0cu: goto label_4a6b0c;
        case 0x4a6b10u: goto label_4a6b10;
        case 0x4a6b14u: goto label_4a6b14;
        case 0x4a6b18u: goto label_4a6b18;
        case 0x4a6b1cu: goto label_4a6b1c;
        case 0x4a6b20u: goto label_4a6b20;
        case 0x4a6b24u: goto label_4a6b24;
        case 0x4a6b28u: goto label_4a6b28;
        case 0x4a6b2cu: goto label_4a6b2c;
        case 0x4a6b30u: goto label_4a6b30;
        case 0x4a6b34u: goto label_4a6b34;
        case 0x4a6b38u: goto label_4a6b38;
        case 0x4a6b3cu: goto label_4a6b3c;
        case 0x4a6b40u: goto label_4a6b40;
        case 0x4a6b44u: goto label_4a6b44;
        case 0x4a6b48u: goto label_4a6b48;
        case 0x4a6b4cu: goto label_4a6b4c;
        case 0x4a6b50u: goto label_4a6b50;
        case 0x4a6b54u: goto label_4a6b54;
        case 0x4a6b58u: goto label_4a6b58;
        case 0x4a6b5cu: goto label_4a6b5c;
        case 0x4a6b60u: goto label_4a6b60;
        case 0x4a6b64u: goto label_4a6b64;
        case 0x4a6b68u: goto label_4a6b68;
        case 0x4a6b6cu: goto label_4a6b6c;
        case 0x4a6b70u: goto label_4a6b70;
        case 0x4a6b74u: goto label_4a6b74;
        case 0x4a6b78u: goto label_4a6b78;
        case 0x4a6b7cu: goto label_4a6b7c;
        case 0x4a6b80u: goto label_4a6b80;
        case 0x4a6b84u: goto label_4a6b84;
        case 0x4a6b88u: goto label_4a6b88;
        case 0x4a6b8cu: goto label_4a6b8c;
        case 0x4a6b90u: goto label_4a6b90;
        case 0x4a6b94u: goto label_4a6b94;
        default: break;
    }

    ctx->pc = 0x4a6568u;

label_4a6568:
    // 0x4a6568: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a6568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4a656c:
    // 0x4a656c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4a6570:
    // 0x4a6570: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4a6574:
    // 0x4a6574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6578:
    // 0x4a6578: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a6578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4a657c:
    // 0x4a657c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4a6580:
    // 0x4a6580: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4a6584:
    // 0x4a6584: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a6584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a6588:
    // 0x4a6588: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4a658c:
    // 0x4a658c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4a6590:
    // 0x4a6590: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4a6594:
    // 0x4a6594: 0x1240015d  beqz        $s2, . + 4 + (0x15D << 2)
label_4a6598:
    if (ctx->pc == 0x4A6598u) {
        ctx->pc = 0x4A6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6594u;
        // 0x4a6598: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A659Cu;
        goto label_4a659c;
    }
    ctx->pc = 0x4A6594u;
    {
        const bool branch_taken_0x4a6594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6594u;
        // 0x4a6598: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6594) {
            ctx->pc = 0x4A6B0Cu;
            goto label_4a6b0c;
        }
    }
    ctx->pc = 0x4A659Cu;
label_4a659c:
    // 0x4a659c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a65a0:
    // 0x4a65a0: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
label_4a65a4:
    if (ctx->pc == 0x4A65A4u) {
        ctx->pc = 0x4A65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65A0u;
        // 0x4a65a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A65A8u;
        goto label_4a65a8;
    }
    ctx->pc = 0x4A65A0u;
    {
        const bool branch_taken_0x4a65a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65A0u;
        // 0x4a65a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a65a0) {
            ctx->pc = 0x4A6B38u;
            goto label_4a6b38;
        }
    }
    ctx->pc = 0x4A65A8u;
label_4a65a8:
    // 0x4a65a8: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x4a65a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a65ac:
    // 0x4a65ac: 0x11a00154  beqz        $t5, . + 4 + (0x154 << 2)
label_4a65b0:
    if (ctx->pc == 0x4A65B0u) {
        ctx->pc = 0x4A65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65ACu;
        // 0x4a65b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A65B4u;
        goto label_4a65b4;
    }
    ctx->pc = 0x4A65ACu;
    {
        const bool branch_taken_0x4a65ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65ACu;
        // 0x4a65b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a65ac) {
            ctx->pc = 0x4A6B00u;
            goto label_4a6b00;
        }
    }
    ctx->pc = 0x4A65B4u;
label_4a65b4:
    // 0x4a65b4: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x4a65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4a65b8:
    // 0x4a65b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a65b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a65bc:
    // 0x4a65bc: 0x6d102b  sltu        $v0, $v1, $t5
    ctx->pc = 0x4a65bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_4a65c0:
    // 0x4a65c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4a65c4:
    if (ctx->pc == 0x4A65C4u) {
        ctx->pc = 0x4A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65C0u;
        // 0x4a65c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A65C8u;
        goto label_4a65c8;
    }
    ctx->pc = 0x4A65C0u;
    {
        const bool branch_taken_0x4a65c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65C0u;
        // 0x4a65c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a65c0) {
            ctx->pc = 0x4A65E4u;
            goto label_4a65e4;
        }
    }
    ctx->pc = 0x4A65C8u;
label_4a65c8:
    // 0x4a65c8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a65cc:
    // 0x4a65cc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4a65ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a65d0:
    // 0x4a65d0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4a65d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a65d4:
    // 0x4a65d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a65d8:
    // 0x4a65d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a65dc:
    // 0x4a65dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_4a65e0:
    if (ctx->pc == 0x4A65E0u) {
        ctx->pc = 0x4A65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65DCu;
        // 0x4a65e0: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A65E4u;
        goto label_4a65e4;
    }
    ctx->pc = 0x4A65DCu;
    {
        const bool branch_taken_0x4a65dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65DCu;
        // 0x4a65e0: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a65dc) {
            ctx->pc = 0x4A6608u;
            goto label_4a6608;
        }
    }
    ctx->pc = 0x4A65E4u;
label_4a65e4:
    // 0x4a65e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a65e8:
    // 0x4a65e8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4a65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a65ec:
    // 0x4a65ec: 0xc11eff2  jal         func_47BFC8
label_4a65f0:
    if (ctx->pc == 0x4A65F0u) {
        ctx->pc = 0x4A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65ECu;
        // 0x4a65f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A65F4u;
        goto label_4a65f4;
    }
    ctx->pc = 0x4A65ECu;
    SET_GPR_U32(ctx, 31, 0x4A65F4u);
    ctx->pc = 0x4A65F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A65ECu;
    // 0x4a65f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A65ECu, 0x4A65F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A65F4u;
label_4a65f4:
    // 0x4a65f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a65f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a65f8:
    // 0x4a65f8: 0xc11f024  jal         func_47C090
label_4a65fc:
    if (ctx->pc == 0x4A65FCu) {
        ctx->pc = 0x4A65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A65F8u;
        // 0x4a65fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6600u;
        goto label_4a6600;
    }
    ctx->pc = 0x4A65F8u;
    SET_GPR_U32(ctx, 31, 0x4A6600u);
    ctx->pc = 0x4A65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A65F8u;
    // 0x4a65fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A65F8u, 0x4A6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6600u;
label_4a6600:
    // 0x4a6600: 0x10000159  b           . + 4 + (0x159 << 2)
label_4a6604:
    if (ctx->pc == 0x4A6604u) {
        ctx->pc = 0x4A6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6600u;
        // 0x4a6604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6608u;
        goto label_4a6608;
    }
    ctx->pc = 0x4A6600u;
    {
        const bool branch_taken_0x4a6600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6600u;
        // 0x4a6604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6600) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A6608u;
label_4a6608:
    // 0x4a6608: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4a6608u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_4a660c:
    // 0x4a660c: 0x8f938a88  lw          $s3, -0x7578($gp)
    ctx->pc = 0x4a660cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a6610:
    // 0x4a6610: 0x8e540024  lw          $s4, 0x24($s2)
    ctx->pc = 0x4a6610u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_4a6614:
    // 0x4a6614: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4a6614u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6618:
    // 0x4a6618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a661c:
    // 0x4a661c: 0x3c150071  lui         $s5, 0x71
    ctx->pc = 0x4a661cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
label_4a6620:
    // 0x4a6620: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x4a6620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4a6624:
    // 0x4a6624: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4a6624u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_4a6628:
    // 0x4a6628: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4a6628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a662c:
    // 0x4a662c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a662cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6630:
    // 0x4a6630: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a6630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a6634:
    // 0x4a6634: 0x25710001  addiu       $s1, $t3, 0x1
    ctx->pc = 0x4a6634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_4a6638:
    // 0x4a6638: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4a663c:
    if (ctx->pc == 0x4A663Cu) {
        ctx->pc = 0x4A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6638u;
        // 0x4a663c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6640u;
        goto label_4a6640;
    }
    ctx->pc = 0x4A6638u;
    {
        const bool branch_taken_0x4a6638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6638u;
        // 0x4a663c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6638) {
            ctx->pc = 0x4A66A4u;
            goto label_4a66a4;
        }
    }
    ctx->pc = 0x4A6640u;
label_4a6640:
    // 0x4a6640: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x4a6640u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a6644:
    // 0x4a6644: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x4a6644u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6648:
    // 0x4a6648: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x4a6648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4a664c:
    // 0x4a664c: 0x6e2018  mult        $a0, $v1, $t6
    ctx->pc = 0x4a664cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a6650:
    // 0x4a6650: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x4a6650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a6654:
    // 0x4a6654: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x4a6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
label_4a6658:
    // 0x4a6658: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a665c:
    // 0x4a665c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4a665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4a6660:
    // 0x4a6660: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_4a6664:
    if (ctx->pc == 0x4A6664u) {
        ctx->pc = 0x4A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6660u;
        // 0x4a6664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6668u;
        goto label_4a6668;
    }
    ctx->pc = 0x4A6660u;
    {
        const bool branch_taken_0x4a6660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6660u;
        // 0x4a6664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6660) {
            ctx->pc = 0x4A6694u;
            goto label_4a6694;
        }
    }
    ctx->pc = 0x4A6668u;
label_4a6668:
    // 0x4a6668: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x4a6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4a666c:
    // 0x4a666c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4a666cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a6670:
    // 0x4a6670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6674:
    // 0x4a6674: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x4a6674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a6678:
    // 0x4a6678: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a667c:
    if (ctx->pc == 0x4A667Cu) {
        ctx->pc = 0x4A667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6678u;
        // 0x4a667c: 0x67102b  sltu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6680u;
        goto label_4a6680;
    }
    ctx->pc = 0x4A6678u;
    {
        const bool branch_taken_0x4a6678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6678u;
        // 0x4a667c: 0x67102b  sltu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6678) {
            ctx->pc = 0x4A6684u;
            goto label_4a6684;
        }
    }
    ctx->pc = 0x4A6680u;
label_4a6680:
    // 0x4a6680: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x4a6680u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_4a6684:
    // 0x4a6684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a6684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4a6688:
    // 0x4a6688: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x4a6688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4a668c:
    // 0x4a668c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4a6690:
    if (ctx->pc == 0x4A6690u) {
        ctx->pc = 0x4A6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A668Cu;
        // 0x4a6690: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6694u;
        goto label_4a6694;
    }
    ctx->pc = 0x4A668Cu;
    {
        const bool branch_taken_0x4a668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A668Cu;
        // 0x4a6690: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a668c) {
            ctx->pc = 0x4A6670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6670;
        }
    }
    ctx->pc = 0x4A6694u;
label_4a6694:
    // 0x4a6694: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x4a6694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a6698:
    // 0x4a6698: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x4a6698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4a669c:
    // 0x4a669c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_4a66a0:
    if (ctx->pc == 0x4A66A0u) {
        ctx->pc = 0x4A66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A669Cu;
        // 0x4a66a0: 0x6e2018  mult        $a0, $v1, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66A4u;
        goto label_4a66a4;
    }
    ctx->pc = 0x4A669Cu;
    {
        const bool branch_taken_0x4a669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a669c) {
            ctx->pc = 0x4A66A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A669Cu;
            // 0x4a66a0: 0x6e2018  mult        $a0, $v1, $t6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6650;
        }
    }
    ctx->pc = 0x4A66A4u;
label_4a66a4:
    // 0x4a66a4: 0x10ec0003  beq         $a3, $t4, . + 4 + (0x3 << 2)
label_4a66a8:
    if (ctx->pc == 0x4A66A8u) {
        ctx->pc = 0x4A66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66A4u;
        // 0x4a66a8: 0x26a2ad18  addiu       $v0, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66ACu;
        goto label_4a66ac;
    }
    ctx->pc = 0x4A66A4u;
    {
        const bool branch_taken_0x4a66a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x4A66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66A4u;
        // 0x4a66a8: 0x26a2ad18  addiu       $v0, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66a4) {
            ctx->pc = 0x4A66B4u;
            goto label_4a66b4;
        }
    }
    ctx->pc = 0x4A66ACu;
label_4a66ac:
    // 0x4a66ac: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_4a66b0:
    if (ctx->pc == 0x4A66B0u) {
        ctx->pc = 0x4A66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66ACu;
        // 0x4a66b0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66B4u;
        goto label_4a66b4;
    }
    ctx->pc = 0x4A66ACu;
    {
        const bool branch_taken_0x4a66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66ACu;
        // 0x4a66b0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66ac) {
            ctx->pc = 0x4A6628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6628;
        }
    }
    ctx->pc = 0x4A66B4u;
label_4a66b4:
    // 0x4a66b4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x4a66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_4a66b8:
    // 0x4a66b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a66bc:
    // 0x4a66bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4a66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a66c0:
    // 0x4a66c0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x4a66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_4a66c4:
    // 0x4a66c4: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x4a66c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4a66c8:
    // 0x4a66c8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a66cc:
    // 0x4a66cc: 0xe80c0  sll         $s0, $t6, 3
    ctx->pc = 0x4a66ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_4a66d0:
    // 0x4a66d0: 0x659818  mult        $s3, $v1, $a1
    ctx->pc = 0x4a66d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_4a66d4:
    // 0x4a66d4: 0x646018  mult        $t4, $v1, $a0
    ctx->pc = 0x4a66d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_4a66d8:
    // 0x4a66d8: 0x25cbffff  addiu       $t3, $t6, -0x1
    ctx->pc = 0x4a66d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_4a66dc:
    // 0x4a66dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a66dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a66e0:
    // 0x4a66e0: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
label_4a66e4:
    if (ctx->pc == 0x4A66E4u) {
        ctx->pc = 0x4A66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66E0u;
        // 0x4a66e4: 0x1a24818  mult        $t1, $t5, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66E8u;
        goto label_4a66e8;
    }
    ctx->pc = 0x4A66E0u;
    {
        const bool branch_taken_0x4a66e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66E0u;
        // 0x4a66e4: 0x1a24818  mult        $t1, $t5, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66e0) {
            ctx->pc = 0x4A670Cu;
            goto label_4a670c;
        }
    }
    ctx->pc = 0x4A66E8u;
label_4a66e8:
    // 0x4a66e8: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4a66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_4a66ec:
    // 0x4a66ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4a66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a66f0:
    // 0x4a66f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a66f4:
    // 0x4a66f4: 0x6d102b  sltu        $v0, $v1, $t5
    ctx->pc = 0x4a66f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_4a66f8:
    // 0x4a66f8: 0x0  nop
    ctx->pc = 0x4a66f8u;
    // NOP
label_4a66fc:
    // 0x4a66fc: 0x0  nop
    ctx->pc = 0x4a66fcu;
    // NOP
label_4a6700:
    // 0x4a6700: 0x0  nop
    ctx->pc = 0x4a6700u;
    // NOP
label_4a6704:
    // 0x4a6704: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a6708:
    if (ctx->pc == 0x4A6708u) {
        ctx->pc = 0x4A6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6704u;
        // 0x4a6708: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A670Cu;
        goto label_4a670c;
    }
    ctx->pc = 0x4A6704u;
    {
        const bool branch_taken_0x4a6704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6704u;
        // 0x4a6708: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6704) {
            ctx->pc = 0x4A66F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a66f0;
        }
    }
    ctx->pc = 0x4A670Cu;
label_4a670c:
    // 0x4a670c: 0x1ae2018  mult        $a0, $t5, $t6
    ctx->pc = 0x4a670cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a6710:
    // 0x4a6710: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a6714:
    // 0x4a6714: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4a6714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4a6718:
    // 0x4a6718: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x4a6718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a671c:
    // 0x4a671c: 0x1c24018  mult        $t0, $t6, $v0
    ctx->pc = 0x4a671cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4a6720:
    // 0x4a6720: 0x1a31818  mult        $v1, $t5, $v1
    ctx->pc = 0x4a6720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a6724:
    // 0x4a6724: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x4a6724u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_4a6728:
    // 0x4a6728: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x4a6728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4a672c:
    // 0x4a672c: 0x1b13018  mult        $a2, $t5, $s1
    ctx->pc = 0x4a672cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4a6730:
    // 0x4a6730: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4a6730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a6734:
    // 0x4a6734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a6734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6738:
    // 0x4a6738: 0x1103821  addu        $a3, $t0, $s0
    ctx->pc = 0x4a6738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_4a673c:
    // 0x4a673c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4a673cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4a6740:
    // 0x4a6740: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4a6740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4a6744:
    // 0x4a6744: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a6744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a6748:
    // 0x4a6748: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4a6748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4a674c:
    // 0x4a674c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a6750:
    // 0x4a6750: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x4a6750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4a6754:
    // 0x4a6754: 0x11a0000f  beqz        $t5, . + 4 + (0xF << 2)
label_4a6758:
    if (ctx->pc == 0x4A6758u) {
        ctx->pc = 0x4A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6754u;
        // 0x4a6758: 0x1836021  addu        $t4, $t4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A675Cu;
        goto label_4a675c;
    }
    ctx->pc = 0x4A6754u;
    {
        const bool branch_taken_0x4a6754 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6754u;
        // 0x4a6758: 0x1836021  addu        $t4, $t4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6754) {
            ctx->pc = 0x4A6794u;
            goto label_4a6794;
        }
    }
    ctx->pc = 0x4A675Cu;
label_4a675c:
    // 0x4a675c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x4a675cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4a6760:
    // 0x4a6760: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x4a6760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a6764:
    // 0x4a6764: 0x0  nop
    ctx->pc = 0x4a6764u;
    // NOP
label_4a6768:
    // 0x4a6768: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4a6768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4a676c:
    // 0x4a676c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a676cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4a6770:
    // 0x4a6770: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x4a6770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
label_4a6774:
    // 0x4a6774: 0x12a302b  sltu        $a2, $t1, $t2
    ctx->pc = 0x4a6774u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4a6778:
    // 0x4a6778: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x4a6778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_4a677c:
    // 0x4a677c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x4a677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_4a6780:
    // 0x4a6780: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x4a6780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4a6784:
    // 0x4a6784: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x4a6784u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_4a6788:
    // 0x4a6788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a6788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a678c:
    // 0x4a678c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_4a6790:
    if (ctx->pc == 0x4A6790u) {
        ctx->pc = 0x4A6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A678Cu;
        // 0x4a6790: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6794u;
        goto label_4a6794;
    }
    ctx->pc = 0x4A678Cu;
    {
        const bool branch_taken_0x4a678c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A678Cu;
        // 0x4a6790: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a678c) {
            ctx->pc = 0x4A6768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6768;
        }
    }
    ctx->pc = 0x4A6794u;
label_4a6794:
    // 0x4a6794: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4a6794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a6798:
    // 0x4a6798: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x4a6798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_4a679c:
    // 0x4a679c: 0x1621018  mult        $v0, $t3, $v0
    ctx->pc = 0x4a679cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a67a0:
    // 0x4a67a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4a67a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a67a4:
    // 0x4a67a4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x4a67a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a67a8:
    // 0x4a67a8: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x4a67a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_4a67ac:
    // 0x4a67ac: 0x20c102b  sltu        $v0, $s0, $t4
    ctx->pc = 0x4a67acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_4a67b0:
    // 0x4a67b0: 0x182800b  movn        $s0, $t4, $v0
    ctx->pc = 0x4a67b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 12));
label_4a67b4:
    // 0x4a67b4: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x4a67b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a67b8:
    // 0x4a67b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4a67bc:
    if (ctx->pc == 0x4A67BCu) {
        ctx->pc = 0x4A67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67B8u;
        // 0x4a67bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67C0u;
        goto label_4a67c0;
    }
    ctx->pc = 0x4A67B8u;
    {
        const bool branch_taken_0x4a67b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67B8u;
        // 0x4a67bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a67b8) {
            ctx->pc = 0x4A67D0u;
            goto label_4a67d0;
        }
    }
    ctx->pc = 0x4A67C0u;
label_4a67c0:
    // 0x4a67c0: 0xc129662  jal         func_4A5988
label_4a67c4:
    if (ctx->pc == 0x4A67C4u) {
        ctx->pc = 0x4A67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67C0u;
        // 0x4a67c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67C8u;
        goto label_4a67c8;
    }
    ctx->pc = 0x4A67C0u;
    SET_GPR_U32(ctx, 31, 0x4A67C8u);
    ctx->pc = 0x4A67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67C0u;
    // 0x4a67c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5988u, 0x4A67C0u, 0x4A67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A67C8u;
label_4a67c8:
    // 0x4a67c8: 0x504000e7  beql        $v0, $zero, . + 4 + (0xE7 << 2)
label_4a67cc:
    if (ctx->pc == 0x4A67CCu) {
        ctx->pc = 0x4A67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67C8u;
        // 0x4a67cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67D0u;
        goto label_4a67d0;
    }
    ctx->pc = 0x4A67C8u;
    {
        const bool branch_taken_0x4a67c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a67c8) {
            ctx->pc = 0x4A67CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A67C8u;
            // 0x4a67cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A67D0u;
label_4a67d0:
    // 0x4a67d0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4a67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4a67d4:
    // 0x4a67d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a67d8:
    // 0x4a67d8: 0xaf8087e4  sw          $zero, -0x781C($gp)
    ctx->pc = 0x4a67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 0));
label_4a67dc:
    // 0x4a67dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4a67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a67e0:
    // 0x4a67e0: 0xc1298e0  jal         func_4A6380
label_4a67e4:
    if (ctx->pc == 0x4A67E4u) {
        ctx->pc = 0x4A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67E0u;
        // 0x4a67e4: 0xaf8287e0  sw          $v0, -0x7820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67E8u;
        goto label_4a67e8;
    }
    ctx->pc = 0x4A67E0u;
    SET_GPR_U32(ctx, 31, 0x4A67E8u);
    ctx->pc = 0x4A67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67E0u;
    // 0x4a67e4: 0xaf8287e0  sw          $v0, -0x7820($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6380u, 0x4A67E0u, 0x4A67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A67E8u;
label_4a67e8:
    // 0x4a67e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a67e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a67ec:
    // 0x4a67ec: 0x124000de  beqz        $s2, . + 4 + (0xDE << 2)
label_4a67f0:
    if (ctx->pc == 0x4A67F0u) {
        ctx->pc = 0x4A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67ECu;
        // 0x4a67f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67F4u;
        goto label_4a67f4;
    }
    ctx->pc = 0x4A67ECu;
    {
        const bool branch_taken_0x4a67ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67ECu;
        // 0x4a67f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a67ec) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A67F4u;
label_4a67f4:
    // 0x4a67f4: 0x8f828a88  lw          $v0, -0x7578($gp)
    ctx->pc = 0x4a67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a67f8:
    // 0x4a67f8: 0x26a4ad18  addiu       $a0, $s5, -0x52E8
    ctx->pc = 0x4a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4a67fc:
    // 0x4a67fc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4a67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6800:
    // 0x4a6800: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x4a6800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6804:
    // 0x4a6804: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a6808:
    // 0x4a6808: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a6808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a680c:
    // 0x4a680c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x4a680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_4a6810:
    // 0x4a6810: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x4a6810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a6814:
    // 0x4a6814: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x4a6814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a6818:
    // 0x4a6818: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x4a6818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4a681c:
    // 0x4a681c: 0x883018  mult        $a2, $a0, $t0
    ctx->pc = 0x4a681cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4a6820:
    // 0x4a6820: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4a6820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4a6824:
    // 0x4a6824: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x4a6824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_4a6828:
    // 0x4a6828: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x4a6828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a682c:
    // 0x4a682c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x4a682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_4a6830:
    // 0x4a6830: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x4a6830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_4a6834:
    // 0x4a6834: 0xe6a821  addu        $s5, $a3, $a2
    ctx->pc = 0x4a6834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4a6838:
    // 0x4a6838: 0x2a4a021  addu        $s4, $s5, $a0
    ctx->pc = 0x4a6838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_4a683c:
    // 0x4a683c: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_4a6840:
    if (ctx->pc == 0x4A6840u) {
        ctx->pc = 0x4A6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A683Cu;
        // 0x4a6840: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6844u;
        goto label_4a6844;
    }
    ctx->pc = 0x4A683Cu;
    {
        const bool branch_taken_0x4a683c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4A6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A683Cu;
        // 0x4a6840: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a683c) {
            ctx->pc = 0x4A6880u;
            goto label_4a6880;
        }
    }
    ctx->pc = 0x4A6844u;
label_4a6844:
    // 0x4a6844: 0x2281818  mult        $v1, $s1, $t0
    ctx->pc = 0x4a6844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a6848:
    // 0x4a6848: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x4a6848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a684c:
    // 0x4a684c: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x4a684cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a6850:
    // 0x4a6850: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4a6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4a6854:
    // 0x4a6854: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4a6854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6858:
    // 0x4a6858: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4a6858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a685c:
    // 0x4a685c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a685cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4a6860:
    // 0x4a6860: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x4a6860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_4a6864:
    // 0x4a6864: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a6868:
    // 0x4a6868: 0x2694fff4  addiu       $s4, $s4, -0xC
    ctx->pc = 0x4a6868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967284));
label_4a686c:
    // 0x4a686c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a6870:
    // 0x4a6870: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x4a6870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_4a6874:
    // 0x4a6874: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x4a6874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_4a6878:
    // 0x4a6878: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
label_4a687c:
    if (ctx->pc == 0x4A687Cu) {
        ctx->pc = 0x4A687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6878u;
        // 0x4a687c: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6880u;
        goto label_4a6880;
    }
    ctx->pc = 0x4A6878u;
    {
        const bool branch_taken_0x4a6878 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4A687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6878u;
        // 0x4a687c: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6878) {
            ctx->pc = 0x4A6848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6848;
        }
    }
    ctx->pc = 0x4A6880u;
label_4a6880:
    // 0x4a6880: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a6880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6884:
    // 0x4a6884: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4a6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6888:
    // 0x4a6888: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a688c:
    // 0x4a688c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a688cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6890:
    // 0x4a6890: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x4a6890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a6894:
    // 0x4a6894: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_4a6898:
    if (ctx->pc == 0x4A6898u) {
        ctx->pc = 0x4A6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6894u;
        // 0x4a6898: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A689Cu;
        goto label_4a689c;
    }
    ctx->pc = 0x4A6894u;
    {
        const bool branch_taken_0x4a6894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6894u;
        // 0x4a6898: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6894) {
            ctx->pc = 0x4A6904u;
            goto label_4a6904;
        }
    }
    ctx->pc = 0x4A689Cu;
label_4a689c:
    // 0x4a689c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a689cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a68a0:
    // 0x4a68a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a68a4:
    // 0x4a68a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a68a8:
    // 0x4a68a8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4a68a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a68ac:
    // 0x4a68ac: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_4a68b0:
    if (ctx->pc == 0x4A68B0u) {
        ctx->pc = 0x4A68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68ACu;
        // 0x4a68b0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68B4u;
        goto label_4a68b4;
    }
    ctx->pc = 0x4A68ACu;
    {
        const bool branch_taken_0x4a68ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68ACu;
        // 0x4a68b0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68ac) {
            ctx->pc = 0x4A68BCu;
            goto label_4a68bc;
        }
    }
    ctx->pc = 0x4A68B4u;
label_4a68b4:
    // 0x4a68b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a68b8:
    if (ctx->pc == 0x4A68B8u) {
        ctx->pc = 0x4A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68B4u;
        // 0x4a68b8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68BCu;
        goto label_4a68bc;
    }
    ctx->pc = 0x4A68B4u;
    {
        const bool branch_taken_0x4a68b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68B4u;
        // 0x4a68b8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68b4) {
            ctx->pc = 0x4A68D4u;
            goto label_4a68d4;
        }
    }
    ctx->pc = 0x4A68BCu;
label_4a68bc:
    // 0x4a68bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a68bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a68c0:
    // 0x4a68c0: 0xc10c190  jal         func_430640
label_4a68c4:
    if (ctx->pc == 0x4A68C4u) {
        ctx->pc = 0x4A68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68C0u;
        // 0x4a68c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A68C8u;
        goto label_4a68c8;
    }
    ctx->pc = 0x4A68C0u;
    SET_GPR_U32(ctx, 31, 0x4A68C8u);
    ctx->pc = 0x4A68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A68C0u;
    // 0x4a68c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4A68C0u, 0x4A68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A68C8u;
label_4a68c8:
    // 0x4a68c8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a68cc:
    // 0x4a68cc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x4a68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_4a68d0:
    // 0x4a68d0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x4a68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_4a68d4:
    // 0x4a68d4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a68d8:
    // 0x4a68d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a68d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a68dc:
    // 0x4a68dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a68e0:
    // 0x4a68e0: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x4a68e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_4a68e4:
    // 0x4a68e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a68e8:
    // 0x4a68e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4a68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a68ec:
    // 0x4a68ec: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x4a68ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a68f0:
    // 0x4a68f0: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x4a68f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_4a68f4:
    // 0x4a68f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a68f8:
    // 0x4a68f8: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x4a68f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_4a68fc:
    // 0x4a68fc: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_4a6900:
    if (ctx->pc == 0x4A6900u) {
        ctx->pc = 0x4A6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68FCu;
        // 0x4a6900: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6904u;
        goto label_4a6904;
    }
    ctx->pc = 0x4A68FCu;
    {
        const bool branch_taken_0x4a68fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68FCu;
        // 0x4a6900: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68fc) {
            ctx->pc = 0x4A68A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a68a0;
        }
    }
    ctx->pc = 0x4A6904u;
label_4a6904:
    // 0x4a6904: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x4a6904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_4a6908:
    // 0x4a6908: 0xaf9487e0  sw          $s4, -0x7820($gp)
    ctx->pc = 0x4a6908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 20));
label_4a690c:
    // 0x4a690c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4a690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4a6910:
    // 0x4a6910: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x4a6910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
label_4a6914:
    // 0x4a6914: 0xc12a1c0  jal         func_4A8700
label_4a6918:
    if (ctx->pc == 0x4A6918u) {
        ctx->pc = 0x4A6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6914u;
        // 0x4a6918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A691Cu;
        goto label_4a691c;
    }
    ctx->pc = 0x4A6914u;
    SET_GPR_U32(ctx, 31, 0x4A691Cu);
    ctx->pc = 0x4A6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6914u;
    // 0x4a6918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8700u, 0x4A6914u, 0x4A691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A691Cu;
label_4a691c:
    // 0x4a691c: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
label_4a6920:
    if (ctx->pc == 0x4A6920u) {
        ctx->pc = 0x4A6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A691Cu;
        // 0x4a6920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6924u;
        goto label_4a6924;
    }
    ctx->pc = 0x4A691Cu;
    {
        const bool branch_taken_0x4a691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A691Cu;
        // 0x4a6920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a691c) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A6924u;
label_4a6924:
    // 0x4a6924: 0x8f8287e4  lw          $v0, -0x781C($gp)
    ctx->pc = 0x4a6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_4a6928:
    // 0x4a6928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a692c:
    // 0x4a692c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x4a692cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4a6930:
    // 0x4a6930: 0xc129662  jal         func_4A5988
label_4a6934:
    if (ctx->pc == 0x4A6934u) {
        ctx->pc = 0x4A6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6930u;
        // 0x4a6934: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6938u;
        goto label_4a6938;
    }
    ctx->pc = 0x4A6930u;
    SET_GPR_U32(ctx, 31, 0x4A6938u);
    ctx->pc = 0x4A6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6930u;
    // 0x4a6934: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5988u, 0x4A6930u, 0x4A6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6938u;
label_4a6938:
    // 0x4a6938: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_4a693c:
    if (ctx->pc == 0x4A693Cu) {
        ctx->pc = 0x4A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6938u;
        // 0x4a693c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6940u;
        goto label_4a6940;
    }
    ctx->pc = 0x4A6938u;
    {
        const bool branch_taken_0x4a6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6938u;
        // 0x4a693c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6938) {
            ctx->pc = 0x4A6B5Cu;
            goto label_4a6b5c;
        }
    }
    ctx->pc = 0x4A6940u;
label_4a6940:
    // 0x4a6940: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6944:
    // 0x4a6944: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4a6948:
    if (ctx->pc == 0x4A6948u) {
        ctx->pc = 0x4A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6944u;
        // 0x4a6948: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A694Cu;
        goto label_4a694c;
    }
    ctx->pc = 0x4A6944u;
    {
        const bool branch_taken_0x4a6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6944u;
        // 0x4a6948: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6944) {
            ctx->pc = 0x4A6974u;
            goto label_4a6974;
        }
    }
    ctx->pc = 0x4A694Cu;
label_4a694c:
    // 0x4a694c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a694cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6950:
    // 0x4a6950: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a6950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a6954:
    // 0x4a6954: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a6954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a6958:
    // 0x4a6958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a695c:
    // 0x4a695c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4a695cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_4a6960:
    // 0x4a6960: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6964:
    // 0x4a6964: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a6964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a6968:
    // 0x4a6968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4a696c:
    if (ctx->pc == 0x4A696Cu) {
        ctx->pc = 0x4A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6968u;
        // 0x4a696c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6970u;
        goto label_4a6970;
    }
    ctx->pc = 0x4A6968u;
    {
        const bool branch_taken_0x4a6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6968u;
        // 0x4a696c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6968) {
            ctx->pc = 0x4A6950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6950;
        }
    }
    ctx->pc = 0x4A6970u;
label_4a6970:
    // 0x4a6970: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6974:
    // 0x4a6974: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4a6974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6978:
    // 0x4a6978: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x4a6978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a697c:
    // 0x4a697c: 0x10000015  b           . + 4 + (0x15 << 2)
label_4a6980:
    if (ctx->pc == 0x4A6980u) {
        ctx->pc = 0x4A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A697Cu;
        // 0x4a6980: 0x223a018  mult        $s4, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6984u;
        goto label_4a6984;
    }
    ctx->pc = 0x4A697Cu;
    {
        const bool branch_taken_0x4a697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A697Cu;
        // 0x4a6980: 0x223a018  mult        $s4, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a697c) {
            ctx->pc = 0x4A69D4u;
            goto label_4a69d4;
        }
    }
    ctx->pc = 0x4A6984u;
label_4a6984:
    // 0x4a6984: 0x0  nop
    ctx->pc = 0x4a6984u;
    // NOP
label_4a6988:
    // 0x4a6988: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4a6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a698c:
    // 0x4a698c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4a6990:
    if (ctx->pc == 0x4A6990u) {
        ctx->pc = 0x4A6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A698Cu;
        // 0x4a6990: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6994u;
        goto label_4a6994;
    }
    ctx->pc = 0x4A698Cu;
    {
        const bool branch_taken_0x4a698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a698c) {
            ctx->pc = 0x4A6990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A698Cu;
            // 0x4a6990: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A69D0u;
            goto label_4a69d0;
        }
    }
    ctx->pc = 0x4A6994u;
label_4a6994:
    // 0x4a6994: 0x40f809  jalr        $v0
label_4a6998:
    if (ctx->pc == 0x4A6998u) {
        ctx->pc = 0x4A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6994u;
        // 0x4a6998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A699Cu;
        goto label_4a699c;
    }
    ctx->pc = 0x4A6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A699Cu);
        ctx->pc = 0x4A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6994u;
        // 0x4a6998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6994u, 0x4A699Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A699Cu;
label_4a699c:
    // 0x4a699c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4a69a0:
    if (ctx->pc == 0x4A69A0u) {
        ctx->pc = 0x4A69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A699Cu;
        // 0x4a69a0: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69A4u;
        goto label_4a69a4;
    }
    ctx->pc = 0x4A699Cu;
    {
        const bool branch_taken_0x4a699c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a699c) {
            ctx->pc = 0x4A69A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A699Cu;
            // 0x4a69a0: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A69D0u;
            goto label_4a69d0;
        }
    }
    ctx->pc = 0x4A69A4u;
label_4a69a4:
    // 0x4a69a4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4a69a8:
    // 0x4a69a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a69ac:
    // 0x4a69ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_4a69b0:
    if (ctx->pc == 0x4A69B0u) {
        ctx->pc = 0x4A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69ACu;
        // 0x4a69b0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69B4u;
        goto label_4a69b4;
    }
    ctx->pc = 0x4A69ACu;
    {
        const bool branch_taken_0x4a69ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69ACu;
        // 0x4a69b0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a69ac) {
            ctx->pc = 0x4A6A18u;
            goto label_4a6a18;
        }
    }
    ctx->pc = 0x4A69B4u;
label_4a69b4:
    // 0x4a69b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a69b8:
    // 0x4a69b8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_4a69bc:
    if (ctx->pc == 0x4A69BCu) {
        ctx->pc = 0x4A69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69B8u;
        // 0x4a69bc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69C0u;
        goto label_4a69c0;
    }
    ctx->pc = 0x4A69B8u;
    {
        const bool branch_taken_0x4a69b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a69b8) {
            ctx->pc = 0x4A69BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A69B8u;
            // 0x4a69bc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6A1Cu;
            goto label_4a6a1c;
        }
    }
    ctx->pc = 0x4A69C0u;
label_4a69c0:
    // 0x4a69c0: 0x40f809  jalr        $v0
label_4a69c4:
    if (ctx->pc == 0x4A69C4u) {
        ctx->pc = 0x4A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69C0u;
        // 0x4a69c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69C8u;
        goto label_4a69c8;
    }
    ctx->pc = 0x4A69C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A69C8u);
        ctx->pc = 0x4A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69C0u;
        // 0x4a69c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A69C0u, 0x4A69C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A69C8u;
label_4a69c8:
    // 0x4a69c8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4a69cc:
    if (ctx->pc == 0x4A69CCu) {
        ctx->pc = 0x4A69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69C8u;
        // 0x4a69cc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69D0u;
        goto label_4a69d0;
    }
    ctx->pc = 0x4A69C8u;
    {
        const bool branch_taken_0x4a69c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69C8u;
        // 0x4a69cc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a69c8) {
            ctx->pc = 0x4A6A1Cu;
            goto label_4a6a1c;
        }
    }
    ctx->pc = 0x4A69D0u;
label_4a69d0:
    // 0x4a69d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a69d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4a69d4:
    // 0x4a69d4: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
label_4a69d8:
    if (ctx->pc == 0x4A69D8u) {
        ctx->pc = 0x4A69DCu;
        goto label_4a69dc;
    }
    ctx->pc = 0x4A69D4u;
    {
        const bool branch_taken_0x4a69d4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x4a69d4) {
            ctx->pc = 0x4A6A28u;
            goto label_4a6a28;
        }
    }
    ctx->pc = 0x4A69DCu;
label_4a69dc:
    // 0x4a69dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a69e0:
    // 0x4a69e0: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x4a69e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4a69e4:
    // 0x4a69e4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4a69e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a69e8:
    // 0x4a69e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4a69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4a69ec:
    // 0x4a69ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a69ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a69f0:
    // 0x4a69f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a69f4:
    // 0x4a69f4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_4a69f8:
    if (ctx->pc == 0x4A69F8u) {
        ctx->pc = 0x4A69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69F4u;
        // 0x4a69f8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A69FCu;
        goto label_4a69fc;
    }
    ctx->pc = 0x4A69F4u;
    {
        const bool branch_taken_0x4a69f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A69F4u;
        // 0x4a69f8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a69f4) {
            ctx->pc = 0x4A6988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6988;
        }
    }
    ctx->pc = 0x4A69FCu;
label_4a69fc:
    // 0x4a69fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a6a00:
    // 0x4a6a00: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
label_4a6a04:
    if (ctx->pc == 0x4A6A04u) {
        ctx->pc = 0x4A6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A00u;
        // 0x4a6a04: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A08u;
        goto label_4a6a08;
    }
    ctx->pc = 0x4A6A00u;
    {
        const bool branch_taken_0x4a6a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6a00) {
            ctx->pc = 0x4A6A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A00u;
            // 0x4a6a04: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A698Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a698c;
        }
    }
    ctx->pc = 0x4A6A08u;
label_4a6a08:
    // 0x4a6a08: 0x40f809  jalr        $v0
label_4a6a0c:
    if (ctx->pc == 0x4A6A0Cu) {
        ctx->pc = 0x4A6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A08u;
        // 0x4a6a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A10u;
        goto label_4a6a10;
    }
    ctx->pc = 0x4A6A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6A10u);
        ctx->pc = 0x4A6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A08u;
        // 0x4a6a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6A08u, 0x4A6A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6A10u;
label_4a6a10:
    // 0x4a6a10: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_4a6a14:
    if (ctx->pc == 0x4A6A14u) {
        ctx->pc = 0x4A6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A10u;
        // 0x4a6a14: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A18u;
        goto label_4a6a18;
    }
    ctx->pc = 0x4A6A10u;
    {
        const bool branch_taken_0x4a6a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6a10) {
            ctx->pc = 0x4A6A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A10u;
            // 0x4a6a14: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A698Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a698c;
        }
    }
    ctx->pc = 0x4A6A18u;
label_4a6a18:
    // 0x4a6a18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4a6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6a1c:
    // 0x4a6a1c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4a6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a6a20:
    // 0x4a6a20: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4a6a20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6a24:
    // 0x4a6a24: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x4a6a24u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a6a28:
    // 0x4a6a28: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
label_4a6a2c:
    if (ctx->pc == 0x4A6A2Cu) {
        ctx->pc = 0x4A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A28u;
        // 0x4a6a2c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A30u;
        goto label_4a6a30;
    }
    ctx->pc = 0x4A6A28u;
    {
        const bool branch_taken_0x4a6a28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A28u;
        // 0x4a6a2c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a28) {
            ctx->pc = 0x4A6A88u;
            goto label_4a6a88;
        }
    }
    ctx->pc = 0x4A6A30u;
label_4a6a30:
    // 0x4a6a30: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4a6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a6a34:
    // 0x4a6a34: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x4a6a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a6a38:
    // 0x4a6a38: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a6a3c:
    if (ctx->pc == 0x4A6A3Cu) {
        ctx->pc = 0x4A6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A38u;
        // 0x4a6a3c: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A40u;
        goto label_4a6a40;
    }
    ctx->pc = 0x4A6A38u;
    {
        const bool branch_taken_0x4a6a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A38u;
        // 0x4a6a3c: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a38) {
            ctx->pc = 0x4A6A44u;
            goto label_4a6a44;
        }
    }
    ctx->pc = 0x4A6A40u;
label_4a6a40:
    // 0x4a6a40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4a6a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4a6a44:
    // 0x4a6a44: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
label_4a6a48:
    if (ctx->pc == 0x4A6A48u) {
        ctx->pc = 0x4A6A4Cu;
        goto label_4a6a4c;
    }
    ctx->pc = 0x4A6A44u;
    {
        const bool branch_taken_0x4a6a44 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x4a6a44) {
            ctx->pc = 0x4A6A7Cu;
            goto label_4a6a7c;
        }
    }
    ctx->pc = 0x4A6A4Cu;
label_4a6a4c:
    // 0x4a6a4c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a6a50:
    // 0x4a6a50: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x4a6a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a6a54:
    // 0x4a6a54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6a58:
    // 0x4a6a58: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4a6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4a6a5c:
    // 0x4a6a5c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_4a6a60:
    if (ctx->pc == 0x4A6A60u) {
        ctx->pc = 0x4A6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A5Cu;
        // 0x4a6a60: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A64u;
        goto label_4a6a64;
    }
    ctx->pc = 0x4A6A5Cu;
    {
        const bool branch_taken_0x4a6a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6a5c) {
            ctx->pc = 0x4A6A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A5Cu;
            // 0x4a6a60: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6a40;
        }
    }
    ctx->pc = 0x4A6A64u;
label_4a6a64:
    // 0x4a6a64: 0x40f809  jalr        $v0
label_4a6a68:
    if (ctx->pc == 0x4A6A68u) {
        ctx->pc = 0x4A6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A64u;
        // 0x4a6a68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A6Cu;
        goto label_4a6a6c;
    }
    ctx->pc = 0x4A6A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6A6Cu);
        ctx->pc = 0x4A6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A64u;
        // 0x4a6a68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6A64u, 0x4A6A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6A6Cu;
label_4a6a6c:
    // 0x4a6a6c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_4a6a70:
    if (ctx->pc == 0x4A6A70u) {
        ctx->pc = 0x4A6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A6Cu;
        // 0x4a6a70: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A74u;
        goto label_4a6a74;
    }
    ctx->pc = 0x4A6A6Cu;
    {
        const bool branch_taken_0x4a6a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6a6c) {
            ctx->pc = 0x4A6A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6A6Cu;
            // 0x4a6a70: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6a40;
        }
    }
    ctx->pc = 0x4A6A74u;
label_4a6a74:
    // 0x4a6a74: 0x8e570004  lw          $s7, 0x4($s2)
    ctx->pc = 0x4a6a74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6a78:
    // 0x4a6a78: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4a6a78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6a7c:
    // 0x4a6a7c: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
label_4a6a80:
    if (ctx->pc == 0x4A6A80u) {
        ctx->pc = 0x4A6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A7Cu;
        // 0x4a6a80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A84u;
        goto label_4a6a84;
    }
    ctx->pc = 0x4A6A7Cu;
    {
        const bool branch_taken_0x4a6a7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A7Cu;
        // 0x4a6a80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a7c) {
            ctx->pc = 0x4A6B04u;
            goto label_4a6b04;
        }
    }
    ctx->pc = 0x4A6A84u;
label_4a6a84:
    // 0x4a6a84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6a88:
    // 0x4a6a88: 0x578823  subu        $s1, $v0, $s7
    ctx->pc = 0x4a6a88u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4a6a8c:
    // 0x4a6a8c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a6a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a6a90:
    // 0x4a6a90: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_4a6a94:
    if (ctx->pc == 0x4A6A94u) {
        ctx->pc = 0x4A6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A90u;
        // 0x4a6a94: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6A98u;
        goto label_4a6a98;
    }
    ctx->pc = 0x4A6A90u;
    {
        const bool branch_taken_0x4a6a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A90u;
        // 0x4a6a94: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a90) {
            ctx->pc = 0x4A6B58u;
            goto label_4a6b58;
        }
    }
    ctx->pc = 0x4A6A98u;
label_4a6a98:
    // 0x4a6a98: 0x2229818  mult        $s3, $s1, $v0
    ctx->pc = 0x4a6a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_4a6a9c:
    // 0x4a6a9c: 0x0  nop
    ctx->pc = 0x4a6a9cu;
    // NOP
label_4a6aa0:
    // 0x4a6aa0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a6aa4:
    // 0x4a6aa4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x4a6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a6aa8:
    // 0x4a6aa8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4a6aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6aac:
    // 0x4a6aac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4a6ab0:
    // 0x4a6ab0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6ab4:
    if (ctx->pc == 0x4A6AB4u) {
        ctx->pc = 0x4A6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AB0u;
        // 0x4a6ab4: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AB8u;
        goto label_4a6ab8;
    }
    ctx->pc = 0x4A6AB0u;
    {
        const bool branch_taken_0x4a6ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ab0) {
            ctx->pc = 0x4A6AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6AB0u;
            // 0x4a6ab4: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6AC4u;
            goto label_4a6ac4;
        }
    }
    ctx->pc = 0x4A6AB8u;
label_4a6ab8:
    // 0x4a6ab8: 0x40f809  jalr        $v0
label_4a6abc:
    if (ctx->pc == 0x4A6ABCu) {
        ctx->pc = 0x4A6AC0u;
        goto label_4a6ac0;
    }
    ctx->pc = 0x4A6AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6AC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6AB8u, 0x4A6AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6AC0u;
label_4a6ac0:
    // 0x4a6ac0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4a6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4a6ac4:
    // 0x4a6ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a6ac8:
    // 0x4a6ac8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4a6acc:
    if (ctx->pc == 0x4A6ACCu) {
        ctx->pc = 0x4A6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AC8u;
        // 0x4a6acc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AD0u;
        goto label_4a6ad0;
    }
    ctx->pc = 0x4A6AC8u;
    {
        const bool branch_taken_0x4a6ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AC8u;
        // 0x4a6acc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ac8) {
            ctx->pc = 0x4A6AE4u;
            goto label_4a6ae4;
        }
    }
    ctx->pc = 0x4A6AD0u;
label_4a6ad0:
    // 0x4a6ad0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a6ad4:
    // 0x4a6ad4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a6ad8:
    if (ctx->pc == 0x4A6AD8u) {
        ctx->pc = 0x4A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AD4u;
        // 0x4a6ad8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6ADCu;
        goto label_4a6adc;
    }
    ctx->pc = 0x4A6AD4u;
    {
        const bool branch_taken_0x4a6ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ad4) {
            ctx->pc = 0x4A6AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6AD4u;
            // 0x4a6ad8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6AE8u;
            goto label_4a6ae8;
        }
    }
    ctx->pc = 0x4A6ADCu;
label_4a6adc:
    // 0x4a6adc: 0x40f809  jalr        $v0
label_4a6ae0:
    if (ctx->pc == 0x4A6AE0u) {
        ctx->pc = 0x4A6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6ADCu;
        // 0x4a6ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AE4u;
        goto label_4a6ae4;
    }
    ctx->pc = 0x4A6ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6AE4u);
        ctx->pc = 0x4A6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6ADCu;
        // 0x4a6ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6ADCu, 0x4A6AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6AE4u;
label_4a6ae4:
    // 0x4a6ae4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a6ae8:
    // 0x4a6ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a6ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a6aec:
    // 0x4a6aec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4a6aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a6af0:
    // 0x4a6af0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_4a6af4:
    if (ctx->pc == 0x4A6AF4u) {
        ctx->pc = 0x4A6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF0u;
        // 0x4a6af4: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AF8u;
        goto label_4a6af8;
    }
    ctx->pc = 0x4A6AF0u;
    {
        const bool branch_taken_0x4a6af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF0u;
        // 0x4a6af4: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6af0) {
            ctx->pc = 0x4A6AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6aa0;
        }
    }
    ctx->pc = 0x4A6AF8u;
label_4a6af8:
    // 0x4a6af8: 0x10000018  b           . + 4 + (0x18 << 2)
label_4a6afc:
    if (ctx->pc == 0x4A6AFCu) {
        ctx->pc = 0x4A6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF8u;
        // 0x4a6afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B00u;
        goto label_4a6b00;
    }
    ctx->pc = 0x4A6AF8u;
    {
        const bool branch_taken_0x4a6af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF8u;
        // 0x4a6afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6af8) {
            ctx->pc = 0x4A6B5Cu;
            goto label_4a6b5c;
        }
    }
    ctx->pc = 0x4A6B00u;
label_4a6b00:
    // 0x4a6b00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a6b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b04:
    // 0x4a6b04: 0x10000018  b           . + 4 + (0x18 << 2)
label_4a6b08:
    if (ctx->pc == 0x4A6B08u) {
        ctx->pc = 0x4A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B04u;
        // 0x4a6b08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B0Cu;
        goto label_4a6b0c;
    }
    ctx->pc = 0x4A6B04u;
    {
        const bool branch_taken_0x4a6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B04u;
        // 0x4a6b08: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b04) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A6B0Cu;
label_4a6b0c:
    // 0x4a6b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6b10:
    // 0x4a6b10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a6b14:
    // 0x4a6b14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a6b18:
    // 0x4a6b18: 0xc11eff2  jal         func_47BFC8
label_4a6b1c:
    if (ctx->pc == 0x4A6B1Cu) {
        ctx->pc = 0x4A6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B18u;
        // 0x4a6b1c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B20u;
        goto label_4a6b20;
    }
    ctx->pc = 0x4A6B18u;
    SET_GPR_U32(ctx, 31, 0x4A6B20u);
    ctx->pc = 0x4A6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B18u;
    // 0x4a6b1c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6B18u, 0x4A6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B20u;
label_4a6b20:
    // 0x4a6b20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b24:
    // 0x4a6b24: 0xc11f024  jal         func_47C090
label_4a6b28:
    if (ctx->pc == 0x4A6B28u) {
        ctx->pc = 0x4A6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B24u;
        // 0x4a6b28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B2Cu;
        goto label_4a6b2c;
    }
    ctx->pc = 0x4A6B24u;
    SET_GPR_U32(ctx, 31, 0x4A6B2Cu);
    ctx->pc = 0x4A6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B24u;
    // 0x4a6b28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A6B24u, 0x4A6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B2Cu;
label_4a6b2c:
    // 0x4a6b2c: 0x1000000e  b           . + 4 + (0xE << 2)
label_4a6b30:
    if (ctx->pc == 0x4A6B30u) {
        ctx->pc = 0x4A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B2Cu;
        // 0x4a6b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B34u;
        goto label_4a6b34;
    }
    ctx->pc = 0x4A6B2Cu;
    {
        const bool branch_taken_0x4a6b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B2Cu;
        // 0x4a6b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b2c) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A6B34u;
label_4a6b34:
    // 0x4a6b34: 0x0  nop
    ctx->pc = 0x4a6b34u;
    // NOP
label_4a6b38:
    // 0x4a6b38: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4a6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a6b3c:
    // 0x4a6b3c: 0xc11eff2  jal         func_47BFC8
label_4a6b40:
    if (ctx->pc == 0x4A6B40u) {
        ctx->pc = 0x4A6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B3Cu;
        // 0x4a6b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B44u;
        goto label_4a6b44;
    }
    ctx->pc = 0x4A6B3Cu;
    SET_GPR_U32(ctx, 31, 0x4A6B44u);
    ctx->pc = 0x4A6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B3Cu;
    // 0x4a6b40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A6B3Cu, 0x4A6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B44u;
label_4a6b44:
    // 0x4a6b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b48:
    // 0x4a6b48: 0xc11f024  jal         func_47C090
label_4a6b4c:
    if (ctx->pc == 0x4A6B4Cu) {
        ctx->pc = 0x4A6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B48u;
        // 0x4a6b4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B50u;
        goto label_4a6b50;
    }
    ctx->pc = 0x4A6B48u;
    SET_GPR_U32(ctx, 31, 0x4A6B50u);
    ctx->pc = 0x4A6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B48u;
    // 0x4a6b4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A6B48u, 0x4A6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B50u;
label_4a6b50:
    // 0x4a6b50: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a6b54:
    if (ctx->pc == 0x4A6B54u) {
        ctx->pc = 0x4A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B50u;
        // 0x4a6b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B58u;
        goto label_4a6b58;
    }
    ctx->pc = 0x4A6B50u;
    {
        const bool branch_taken_0x4a6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B50u;
        // 0x4a6b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b50) {
            ctx->pc = 0x4A6B68u;
            goto label_4a6b68;
        }
    }
    ctx->pc = 0x4A6B58u;
label_4a6b58:
    // 0x4a6b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b5c:
    // 0x4a6b5c: 0xc1296c0  jal         func_4A5B00
label_4a6b60:
    if (ctx->pc == 0x4A6B60u) {
        ctx->pc = 0x4A6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B5Cu;
        // 0x4a6b60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B64u;
        goto label_4a6b64;
    }
    ctx->pc = 0x4A6B5Cu;
    SET_GPR_U32(ctx, 31, 0x4A6B64u);
    ctx->pc = 0x4A6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B5Cu;
    // 0x4a6b60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5B00u, 0x4A6B5Cu, 0x4A6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B64u;
label_4a6b64:
    // 0x4a6b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b68:
    // 0x4a6b68: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a6b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a6b6c:
    // 0x4a6b6c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a6b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a6b70:
    // 0x4a6b70: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a6b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a6b74:
    // 0x4a6b74: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a6b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a6b78:
    // 0x4a6b78: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a6b78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a6b7c:
    // 0x4a6b7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a6b7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a6b80:
    // 0x4a6b80: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a6b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6b84:
    // 0x4a6b84: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a6b84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6b88:
    // 0x4a6b88: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a6b88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6b8c:
    // 0x4a6b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6b90:
    // 0x4a6b90: 0x3e00008  jr          $ra
label_4a6b94:
    if (ctx->pc == 0x4A6B94u) {
        ctx->pc = 0x4A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B90u;
        // 0x4a6b94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B98u;
        goto label_fallthrough_0x4a6b90;
    }
    ctx->pc = 0x4A6B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B90u;
        // 0x4a6b94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a6b90:
    ctx->pc = 0x4A6B98u;
}
