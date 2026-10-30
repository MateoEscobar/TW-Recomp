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

// Function: sub_002E6668
// Address: 0x2e6668 - 0x2e7608
void sub_002E6668_0x2e6668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6668_0x2e6668");
#endif

    switch (ctx->pc) {
        case 0x2e6668u: goto label_2e6668;
        case 0x2e666cu: goto label_2e666c;
        case 0x2e6670u: goto label_2e6670;
        case 0x2e6674u: goto label_2e6674;
        case 0x2e6678u: goto label_2e6678;
        case 0x2e667cu: goto label_2e667c;
        case 0x2e6680u: goto label_2e6680;
        case 0x2e6684u: goto label_2e6684;
        case 0x2e6688u: goto label_2e6688;
        case 0x2e668cu: goto label_2e668c;
        case 0x2e6690u: goto label_2e6690;
        case 0x2e6694u: goto label_2e6694;
        case 0x2e6698u: goto label_2e6698;
        case 0x2e669cu: goto label_2e669c;
        case 0x2e66a0u: goto label_2e66a0;
        case 0x2e66a4u: goto label_2e66a4;
        case 0x2e66a8u: goto label_2e66a8;
        case 0x2e66acu: goto label_2e66ac;
        case 0x2e66b0u: goto label_2e66b0;
        case 0x2e66b4u: goto label_2e66b4;
        case 0x2e66b8u: goto label_2e66b8;
        case 0x2e66bcu: goto label_2e66bc;
        case 0x2e66c0u: goto label_2e66c0;
        case 0x2e66c4u: goto label_2e66c4;
        case 0x2e66c8u: goto label_2e66c8;
        case 0x2e66ccu: goto label_2e66cc;
        case 0x2e66d0u: goto label_2e66d0;
        case 0x2e66d4u: goto label_2e66d4;
        case 0x2e66d8u: goto label_2e66d8;
        case 0x2e66dcu: goto label_2e66dc;
        case 0x2e66e0u: goto label_2e66e0;
        case 0x2e66e4u: goto label_2e66e4;
        case 0x2e66e8u: goto label_2e66e8;
        case 0x2e66ecu: goto label_2e66ec;
        case 0x2e66f0u: goto label_2e66f0;
        case 0x2e66f4u: goto label_2e66f4;
        case 0x2e66f8u: goto label_2e66f8;
        case 0x2e66fcu: goto label_2e66fc;
        case 0x2e6700u: goto label_2e6700;
        case 0x2e6704u: goto label_2e6704;
        case 0x2e6708u: goto label_2e6708;
        case 0x2e670cu: goto label_2e670c;
        case 0x2e6710u: goto label_2e6710;
        case 0x2e6714u: goto label_2e6714;
        case 0x2e6718u: goto label_2e6718;
        case 0x2e671cu: goto label_2e671c;
        case 0x2e6720u: goto label_2e6720;
        case 0x2e6724u: goto label_2e6724;
        case 0x2e6728u: goto label_2e6728;
        case 0x2e672cu: goto label_2e672c;
        case 0x2e6730u: goto label_2e6730;
        case 0x2e6734u: goto label_2e6734;
        case 0x2e6738u: goto label_2e6738;
        case 0x2e673cu: goto label_2e673c;
        case 0x2e6740u: goto label_2e6740;
        case 0x2e6744u: goto label_2e6744;
        case 0x2e6748u: goto label_2e6748;
        case 0x2e674cu: goto label_2e674c;
        case 0x2e6750u: goto label_2e6750;
        case 0x2e6754u: goto label_2e6754;
        case 0x2e6758u: goto label_2e6758;
        case 0x2e675cu: goto label_2e675c;
        case 0x2e6760u: goto label_2e6760;
        case 0x2e6764u: goto label_2e6764;
        case 0x2e6768u: goto label_2e6768;
        case 0x2e676cu: goto label_2e676c;
        case 0x2e6770u: goto label_2e6770;
        case 0x2e6774u: goto label_2e6774;
        case 0x2e6778u: goto label_2e6778;
        case 0x2e677cu: goto label_2e677c;
        case 0x2e6780u: goto label_2e6780;
        case 0x2e6784u: goto label_2e6784;
        case 0x2e6788u: goto label_2e6788;
        case 0x2e678cu: goto label_2e678c;
        case 0x2e6790u: goto label_2e6790;
        case 0x2e6794u: goto label_2e6794;
        case 0x2e6798u: goto label_2e6798;
        case 0x2e679cu: goto label_2e679c;
        case 0x2e67a0u: goto label_2e67a0;
        case 0x2e67a4u: goto label_2e67a4;
        case 0x2e67a8u: goto label_2e67a8;
        case 0x2e67acu: goto label_2e67ac;
        case 0x2e67b0u: goto label_2e67b0;
        case 0x2e67b4u: goto label_2e67b4;
        case 0x2e67b8u: goto label_2e67b8;
        case 0x2e67bcu: goto label_2e67bc;
        case 0x2e67c0u: goto label_2e67c0;
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67c8u: goto label_2e67c8;
        case 0x2e67ccu: goto label_2e67cc;
        case 0x2e67d0u: goto label_2e67d0;
        case 0x2e67d4u: goto label_2e67d4;
        case 0x2e67d8u: goto label_2e67d8;
        case 0x2e67dcu: goto label_2e67dc;
        case 0x2e67e0u: goto label_2e67e0;
        case 0x2e67e4u: goto label_2e67e4;
        case 0x2e67e8u: goto label_2e67e8;
        case 0x2e67ecu: goto label_2e67ec;
        case 0x2e67f0u: goto label_2e67f0;
        case 0x2e67f4u: goto label_2e67f4;
        case 0x2e67f8u: goto label_2e67f8;
        case 0x2e67fcu: goto label_2e67fc;
        case 0x2e6800u: goto label_2e6800;
        case 0x2e6804u: goto label_2e6804;
        case 0x2e6808u: goto label_2e6808;
        case 0x2e680cu: goto label_2e680c;
        case 0x2e6810u: goto label_2e6810;
        case 0x2e6814u: goto label_2e6814;
        case 0x2e6818u: goto label_2e6818;
        case 0x2e681cu: goto label_2e681c;
        case 0x2e6820u: goto label_2e6820;
        case 0x2e6824u: goto label_2e6824;
        case 0x2e6828u: goto label_2e6828;
        case 0x2e682cu: goto label_2e682c;
        case 0x2e6830u: goto label_2e6830;
        case 0x2e6834u: goto label_2e6834;
        case 0x2e6838u: goto label_2e6838;
        case 0x2e683cu: goto label_2e683c;
        case 0x2e6840u: goto label_2e6840;
        case 0x2e6844u: goto label_2e6844;
        case 0x2e6848u: goto label_2e6848;
        case 0x2e684cu: goto label_2e684c;
        case 0x2e6850u: goto label_2e6850;
        case 0x2e6854u: goto label_2e6854;
        case 0x2e6858u: goto label_2e6858;
        case 0x2e685cu: goto label_2e685c;
        case 0x2e6860u: goto label_2e6860;
        case 0x2e6864u: goto label_2e6864;
        case 0x2e6868u: goto label_2e6868;
        case 0x2e686cu: goto label_2e686c;
        case 0x2e6870u: goto label_2e6870;
        case 0x2e6874u: goto label_2e6874;
        case 0x2e6878u: goto label_2e6878;
        case 0x2e687cu: goto label_2e687c;
        case 0x2e6880u: goto label_2e6880;
        case 0x2e6884u: goto label_2e6884;
        case 0x2e6888u: goto label_2e6888;
        case 0x2e688cu: goto label_2e688c;
        case 0x2e6890u: goto label_2e6890;
        case 0x2e6894u: goto label_2e6894;
        case 0x2e6898u: goto label_2e6898;
        case 0x2e689cu: goto label_2e689c;
        case 0x2e68a0u: goto label_2e68a0;
        case 0x2e68a4u: goto label_2e68a4;
        case 0x2e68a8u: goto label_2e68a8;
        case 0x2e68acu: goto label_2e68ac;
        case 0x2e68b0u: goto label_2e68b0;
        case 0x2e68b4u: goto label_2e68b4;
        case 0x2e68b8u: goto label_2e68b8;
        case 0x2e68bcu: goto label_2e68bc;
        case 0x2e68c0u: goto label_2e68c0;
        case 0x2e68c4u: goto label_2e68c4;
        case 0x2e68c8u: goto label_2e68c8;
        case 0x2e68ccu: goto label_2e68cc;
        case 0x2e68d0u: goto label_2e68d0;
        case 0x2e68d4u: goto label_2e68d4;
        case 0x2e68d8u: goto label_2e68d8;
        case 0x2e68dcu: goto label_2e68dc;
        case 0x2e68e0u: goto label_2e68e0;
        case 0x2e68e4u: goto label_2e68e4;
        case 0x2e68e8u: goto label_2e68e8;
        case 0x2e68ecu: goto label_2e68ec;
        case 0x2e68f0u: goto label_2e68f0;
        case 0x2e68f4u: goto label_2e68f4;
        case 0x2e68f8u: goto label_2e68f8;
        case 0x2e68fcu: goto label_2e68fc;
        case 0x2e6900u: goto label_2e6900;
        case 0x2e6904u: goto label_2e6904;
        case 0x2e6908u: goto label_2e6908;
        case 0x2e690cu: goto label_2e690c;
        case 0x2e6910u: goto label_2e6910;
        case 0x2e6914u: goto label_2e6914;
        case 0x2e6918u: goto label_2e6918;
        case 0x2e691cu: goto label_2e691c;
        case 0x2e6920u: goto label_2e6920;
        case 0x2e6924u: goto label_2e6924;
        case 0x2e6928u: goto label_2e6928;
        case 0x2e692cu: goto label_2e692c;
        case 0x2e6930u: goto label_2e6930;
        case 0x2e6934u: goto label_2e6934;
        case 0x2e6938u: goto label_2e6938;
        case 0x2e693cu: goto label_2e693c;
        case 0x2e6940u: goto label_2e6940;
        case 0x2e6944u: goto label_2e6944;
        case 0x2e6948u: goto label_2e6948;
        case 0x2e694cu: goto label_2e694c;
        case 0x2e6950u: goto label_2e6950;
        case 0x2e6954u: goto label_2e6954;
        case 0x2e6958u: goto label_2e6958;
        case 0x2e695cu: goto label_2e695c;
        case 0x2e6960u: goto label_2e6960;
        case 0x2e6964u: goto label_2e6964;
        case 0x2e6968u: goto label_2e6968;
        case 0x2e696cu: goto label_2e696c;
        case 0x2e6970u: goto label_2e6970;
        case 0x2e6974u: goto label_2e6974;
        case 0x2e6978u: goto label_2e6978;
        case 0x2e697cu: goto label_2e697c;
        case 0x2e6980u: goto label_2e6980;
        case 0x2e6984u: goto label_2e6984;
        case 0x2e6988u: goto label_2e6988;
        case 0x2e698cu: goto label_2e698c;
        case 0x2e6990u: goto label_2e6990;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e6998u: goto label_2e6998;
        case 0x2e699cu: goto label_2e699c;
        case 0x2e69a0u: goto label_2e69a0;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69a8u: goto label_2e69a8;
        case 0x2e69acu: goto label_2e69ac;
        case 0x2e69b0u: goto label_2e69b0;
        case 0x2e69b4u: goto label_2e69b4;
        case 0x2e69b8u: goto label_2e69b8;
        case 0x2e69bcu: goto label_2e69bc;
        case 0x2e69c0u: goto label_2e69c0;
        case 0x2e69c4u: goto label_2e69c4;
        case 0x2e69c8u: goto label_2e69c8;
        case 0x2e69ccu: goto label_2e69cc;
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69d4u: goto label_2e69d4;
        case 0x2e69d8u: goto label_2e69d8;
        case 0x2e69dcu: goto label_2e69dc;
        case 0x2e69e0u: goto label_2e69e0;
        case 0x2e69e4u: goto label_2e69e4;
        case 0x2e69e8u: goto label_2e69e8;
        case 0x2e69ecu: goto label_2e69ec;
        case 0x2e69f0u: goto label_2e69f0;
        case 0x2e69f4u: goto label_2e69f4;
        case 0x2e69f8u: goto label_2e69f8;
        case 0x2e69fcu: goto label_2e69fc;
        case 0x2e6a00u: goto label_2e6a00;
        case 0x2e6a04u: goto label_2e6a04;
        case 0x2e6a08u: goto label_2e6a08;
        case 0x2e6a0cu: goto label_2e6a0c;
        case 0x2e6a10u: goto label_2e6a10;
        case 0x2e6a14u: goto label_2e6a14;
        case 0x2e6a18u: goto label_2e6a18;
        case 0x2e6a1cu: goto label_2e6a1c;
        case 0x2e6a20u: goto label_2e6a20;
        case 0x2e6a24u: goto label_2e6a24;
        case 0x2e6a28u: goto label_2e6a28;
        case 0x2e6a2cu: goto label_2e6a2c;
        case 0x2e6a30u: goto label_2e6a30;
        case 0x2e6a34u: goto label_2e6a34;
        case 0x2e6a38u: goto label_2e6a38;
        case 0x2e6a3cu: goto label_2e6a3c;
        case 0x2e6a40u: goto label_2e6a40;
        case 0x2e6a44u: goto label_2e6a44;
        case 0x2e6a48u: goto label_2e6a48;
        case 0x2e6a4cu: goto label_2e6a4c;
        case 0x2e6a50u: goto label_2e6a50;
        case 0x2e6a54u: goto label_2e6a54;
        case 0x2e6a58u: goto label_2e6a58;
        case 0x2e6a5cu: goto label_2e6a5c;
        case 0x2e6a60u: goto label_2e6a60;
        case 0x2e6a64u: goto label_2e6a64;
        case 0x2e6a68u: goto label_2e6a68;
        case 0x2e6a6cu: goto label_2e6a6c;
        case 0x2e6a70u: goto label_2e6a70;
        case 0x2e6a74u: goto label_2e6a74;
        case 0x2e6a78u: goto label_2e6a78;
        case 0x2e6a7cu: goto label_2e6a7c;
        case 0x2e6a80u: goto label_2e6a80;
        case 0x2e6a84u: goto label_2e6a84;
        case 0x2e6a88u: goto label_2e6a88;
        case 0x2e6a8cu: goto label_2e6a8c;
        case 0x2e6a90u: goto label_2e6a90;
        case 0x2e6a94u: goto label_2e6a94;
        case 0x2e6a98u: goto label_2e6a98;
        case 0x2e6a9cu: goto label_2e6a9c;
        case 0x2e6aa0u: goto label_2e6aa0;
        case 0x2e6aa4u: goto label_2e6aa4;
        case 0x2e6aa8u: goto label_2e6aa8;
        case 0x2e6aacu: goto label_2e6aac;
        case 0x2e6ab0u: goto label_2e6ab0;
        case 0x2e6ab4u: goto label_2e6ab4;
        case 0x2e6ab8u: goto label_2e6ab8;
        case 0x2e6abcu: goto label_2e6abc;
        case 0x2e6ac0u: goto label_2e6ac0;
        case 0x2e6ac4u: goto label_2e6ac4;
        case 0x2e6ac8u: goto label_2e6ac8;
        case 0x2e6accu: goto label_2e6acc;
        case 0x2e6ad0u: goto label_2e6ad0;
        case 0x2e6ad4u: goto label_2e6ad4;
        case 0x2e6ad8u: goto label_2e6ad8;
        case 0x2e6adcu: goto label_2e6adc;
        case 0x2e6ae0u: goto label_2e6ae0;
        case 0x2e6ae4u: goto label_2e6ae4;
        case 0x2e6ae8u: goto label_2e6ae8;
        case 0x2e6aecu: goto label_2e6aec;
        case 0x2e6af0u: goto label_2e6af0;
        case 0x2e6af4u: goto label_2e6af4;
        case 0x2e6af8u: goto label_2e6af8;
        case 0x2e6afcu: goto label_2e6afc;
        case 0x2e6b00u: goto label_2e6b00;
        case 0x2e6b04u: goto label_2e6b04;
        case 0x2e6b08u: goto label_2e6b08;
        case 0x2e6b0cu: goto label_2e6b0c;
        case 0x2e6b10u: goto label_2e6b10;
        case 0x2e6b14u: goto label_2e6b14;
        case 0x2e6b18u: goto label_2e6b18;
        case 0x2e6b1cu: goto label_2e6b1c;
        case 0x2e6b20u: goto label_2e6b20;
        case 0x2e6b24u: goto label_2e6b24;
        case 0x2e6b28u: goto label_2e6b28;
        case 0x2e6b2cu: goto label_2e6b2c;
        case 0x2e6b30u: goto label_2e6b30;
        case 0x2e6b34u: goto label_2e6b34;
        case 0x2e6b38u: goto label_2e6b38;
        case 0x2e6b3cu: goto label_2e6b3c;
        case 0x2e6b40u: goto label_2e6b40;
        case 0x2e6b44u: goto label_2e6b44;
        case 0x2e6b48u: goto label_2e6b48;
        case 0x2e6b4cu: goto label_2e6b4c;
        case 0x2e6b50u: goto label_2e6b50;
        case 0x2e6b54u: goto label_2e6b54;
        case 0x2e6b58u: goto label_2e6b58;
        case 0x2e6b5cu: goto label_2e6b5c;
        case 0x2e6b60u: goto label_2e6b60;
        case 0x2e6b64u: goto label_2e6b64;
        case 0x2e6b68u: goto label_2e6b68;
        case 0x2e6b6cu: goto label_2e6b6c;
        case 0x2e6b70u: goto label_2e6b70;
        case 0x2e6b74u: goto label_2e6b74;
        case 0x2e6b78u: goto label_2e6b78;
        case 0x2e6b7cu: goto label_2e6b7c;
        case 0x2e6b80u: goto label_2e6b80;
        case 0x2e6b84u: goto label_2e6b84;
        case 0x2e6b88u: goto label_2e6b88;
        case 0x2e6b8cu: goto label_2e6b8c;
        case 0x2e6b90u: goto label_2e6b90;
        case 0x2e6b94u: goto label_2e6b94;
        case 0x2e6b98u: goto label_2e6b98;
        case 0x2e6b9cu: goto label_2e6b9c;
        case 0x2e6ba0u: goto label_2e6ba0;
        case 0x2e6ba4u: goto label_2e6ba4;
        case 0x2e6ba8u: goto label_2e6ba8;
        case 0x2e6bacu: goto label_2e6bac;
        case 0x2e6bb0u: goto label_2e6bb0;
        case 0x2e6bb4u: goto label_2e6bb4;
        case 0x2e6bb8u: goto label_2e6bb8;
        case 0x2e6bbcu: goto label_2e6bbc;
        case 0x2e6bc0u: goto label_2e6bc0;
        case 0x2e6bc4u: goto label_2e6bc4;
        case 0x2e6bc8u: goto label_2e6bc8;
        case 0x2e6bccu: goto label_2e6bcc;
        case 0x2e6bd0u: goto label_2e6bd0;
        case 0x2e6bd4u: goto label_2e6bd4;
        case 0x2e6bd8u: goto label_2e6bd8;
        case 0x2e6bdcu: goto label_2e6bdc;
        case 0x2e6be0u: goto label_2e6be0;
        case 0x2e6be4u: goto label_2e6be4;
        case 0x2e6be8u: goto label_2e6be8;
        case 0x2e6becu: goto label_2e6bec;
        case 0x2e6bf0u: goto label_2e6bf0;
        case 0x2e6bf4u: goto label_2e6bf4;
        case 0x2e6bf8u: goto label_2e6bf8;
        case 0x2e6bfcu: goto label_2e6bfc;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c04u: goto label_2e6c04;
        case 0x2e6c08u: goto label_2e6c08;
        case 0x2e6c0cu: goto label_2e6c0c;
        case 0x2e6c10u: goto label_2e6c10;
        case 0x2e6c14u: goto label_2e6c14;
        case 0x2e6c18u: goto label_2e6c18;
        case 0x2e6c1cu: goto label_2e6c1c;
        case 0x2e6c20u: goto label_2e6c20;
        case 0x2e6c24u: goto label_2e6c24;
        case 0x2e6c28u: goto label_2e6c28;
        case 0x2e6c2cu: goto label_2e6c2c;
        case 0x2e6c30u: goto label_2e6c30;
        case 0x2e6c34u: goto label_2e6c34;
        case 0x2e6c38u: goto label_2e6c38;
        case 0x2e6c3cu: goto label_2e6c3c;
        case 0x2e6c40u: goto label_2e6c40;
        case 0x2e6c44u: goto label_2e6c44;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c4cu: goto label_2e6c4c;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c54u: goto label_2e6c54;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c5cu: goto label_2e6c5c;
        case 0x2e6c60u: goto label_2e6c60;
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c68u: goto label_2e6c68;
        case 0x2e6c6cu: goto label_2e6c6c;
        case 0x2e6c70u: goto label_2e6c70;
        case 0x2e6c74u: goto label_2e6c74;
        case 0x2e6c78u: goto label_2e6c78;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c80u: goto label_2e6c80;
        case 0x2e6c84u: goto label_2e6c84;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6c8cu: goto label_2e6c8c;
        case 0x2e6c90u: goto label_2e6c90;
        case 0x2e6c94u: goto label_2e6c94;
        case 0x2e6c98u: goto label_2e6c98;
        case 0x2e6c9cu: goto label_2e6c9c;
        case 0x2e6ca0u: goto label_2e6ca0;
        case 0x2e6ca4u: goto label_2e6ca4;
        case 0x2e6ca8u: goto label_2e6ca8;
        case 0x2e6cacu: goto label_2e6cac;
        case 0x2e6cb0u: goto label_2e6cb0;
        case 0x2e6cb4u: goto label_2e6cb4;
        case 0x2e6cb8u: goto label_2e6cb8;
        case 0x2e6cbcu: goto label_2e6cbc;
        case 0x2e6cc0u: goto label_2e6cc0;
        case 0x2e6cc4u: goto label_2e6cc4;
        case 0x2e6cc8u: goto label_2e6cc8;
        case 0x2e6cccu: goto label_2e6ccc;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6cd4u: goto label_2e6cd4;
        case 0x2e6cd8u: goto label_2e6cd8;
        case 0x2e6cdcu: goto label_2e6cdc;
        case 0x2e6ce0u: goto label_2e6ce0;
        case 0x2e6ce4u: goto label_2e6ce4;
        case 0x2e6ce8u: goto label_2e6ce8;
        case 0x2e6cecu: goto label_2e6cec;
        case 0x2e6cf0u: goto label_2e6cf0;
        case 0x2e6cf4u: goto label_2e6cf4;
        case 0x2e6cf8u: goto label_2e6cf8;
        case 0x2e6cfcu: goto label_2e6cfc;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d04u: goto label_2e6d04;
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d0cu: goto label_2e6d0c;
        case 0x2e6d10u: goto label_2e6d10;
        case 0x2e6d14u: goto label_2e6d14;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d1cu: goto label_2e6d1c;
        case 0x2e6d20u: goto label_2e6d20;
        case 0x2e6d24u: goto label_2e6d24;
        case 0x2e6d28u: goto label_2e6d28;
        case 0x2e6d2cu: goto label_2e6d2c;
        case 0x2e6d30u: goto label_2e6d30;
        case 0x2e6d34u: goto label_2e6d34;
        case 0x2e6d38u: goto label_2e6d38;
        case 0x2e6d3cu: goto label_2e6d3c;
        case 0x2e6d40u: goto label_2e6d40;
        case 0x2e6d44u: goto label_2e6d44;
        case 0x2e6d48u: goto label_2e6d48;
        case 0x2e6d4cu: goto label_2e6d4c;
        case 0x2e6d50u: goto label_2e6d50;
        case 0x2e6d54u: goto label_2e6d54;
        case 0x2e6d58u: goto label_2e6d58;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6d60u: goto label_2e6d60;
        case 0x2e6d64u: goto label_2e6d64;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d6cu: goto label_2e6d6c;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6d78u: goto label_2e6d78;
        case 0x2e6d7cu: goto label_2e6d7c;
        case 0x2e6d80u: goto label_2e6d80;
        case 0x2e6d84u: goto label_2e6d84;
        case 0x2e6d88u: goto label_2e6d88;
        case 0x2e6d8cu: goto label_2e6d8c;
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6d94u: goto label_2e6d94;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6d9cu: goto label_2e6d9c;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6da4u: goto label_2e6da4;
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6db0u: goto label_2e6db0;
        case 0x2e6db4u: goto label_2e6db4;
        case 0x2e6db8u: goto label_2e6db8;
        case 0x2e6dbcu: goto label_2e6dbc;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dc4u: goto label_2e6dc4;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6dccu: goto label_2e6dcc;
        case 0x2e6dd0u: goto label_2e6dd0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6dd8u: goto label_2e6dd8;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6de4u: goto label_2e6de4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6df4u: goto label_2e6df4;
        case 0x2e6df8u: goto label_2e6df8;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e00u: goto label_2e6e00;
        case 0x2e6e04u: goto label_2e6e04;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e10u: goto label_2e6e10;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e18u: goto label_2e6e18;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e24u: goto label_2e6e24;
        case 0x2e6e28u: goto label_2e6e28;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e34u: goto label_2e6e34;
        case 0x2e6e38u: goto label_2e6e38;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e48u: goto label_2e6e48;
        case 0x2e6e4cu: goto label_2e6e4c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e54u: goto label_2e6e54;
        case 0x2e6e58u: goto label_2e6e58;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e64u: goto label_2e6e64;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6e6cu: goto label_2e6e6c;
        case 0x2e6e70u: goto label_2e6e70;
        case 0x2e6e74u: goto label_2e6e74;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f64u: goto label_2e6f64;
        case 0x2e6f68u: goto label_2e6f68;
        case 0x2e6f6cu: goto label_2e6f6c;
        case 0x2e6f70u: goto label_2e6f70;
        case 0x2e6f74u: goto label_2e6f74;
        case 0x2e6f78u: goto label_2e6f78;
        case 0x2e6f7cu: goto label_2e6f7c;
        case 0x2e6f80u: goto label_2e6f80;
        case 0x2e6f84u: goto label_2e6f84;
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e6f8cu: goto label_2e6f8c;
        case 0x2e6f90u: goto label_2e6f90;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6f98u: goto label_2e6f98;
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fa0u: goto label_2e6fa0;
        case 0x2e6fa4u: goto label_2e6fa4;
        case 0x2e6fa8u: goto label_2e6fa8;
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fb0u: goto label_2e6fb0;
        case 0x2e6fb4u: goto label_2e6fb4;
        case 0x2e6fb8u: goto label_2e6fb8;
        case 0x2e6fbcu: goto label_2e6fbc;
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fc8u: goto label_2e6fc8;
        case 0x2e6fccu: goto label_2e6fcc;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e6fdcu: goto label_2e6fdc;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6fe4u: goto label_2e6fe4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e6fecu: goto label_2e6fec;
        case 0x2e6ff0u: goto label_2e6ff0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e6ff8u: goto label_2e6ff8;
        case 0x2e6ffcu: goto label_2e6ffc;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7004u: goto label_2e7004;
        case 0x2e7008u: goto label_2e7008;
        case 0x2e700cu: goto label_2e700c;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7014u: goto label_2e7014;
        case 0x2e7018u: goto label_2e7018;
        case 0x2e701cu: goto label_2e701c;
        case 0x2e7020u: goto label_2e7020;
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7028u: goto label_2e7028;
        case 0x2e702cu: goto label_2e702c;
        case 0x2e7030u: goto label_2e7030;
        case 0x2e7034u: goto label_2e7034;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e703cu: goto label_2e703c;
        case 0x2e7040u: goto label_2e7040;
        case 0x2e7044u: goto label_2e7044;
        case 0x2e7048u: goto label_2e7048;
        case 0x2e704cu: goto label_2e704c;
        case 0x2e7050u: goto label_2e7050;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e7058u: goto label_2e7058;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7060u: goto label_2e7060;
        case 0x2e7064u: goto label_2e7064;
        case 0x2e7068u: goto label_2e7068;
        case 0x2e706cu: goto label_2e706c;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e707cu: goto label_2e707c;
        case 0x2e7080u: goto label_2e7080;
        case 0x2e7084u: goto label_2e7084;
        case 0x2e7088u: goto label_2e7088;
        case 0x2e708cu: goto label_2e708c;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e7094u: goto label_2e7094;
        case 0x2e7098u: goto label_2e7098;
        case 0x2e709cu: goto label_2e709c;
        case 0x2e70a0u: goto label_2e70a0;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70a8u: goto label_2e70a8;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e70b0u: goto label_2e70b0;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70bcu: goto label_2e70bc;
        case 0x2e70c0u: goto label_2e70c0;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70ccu: goto label_2e70cc;
        case 0x2e70d0u: goto label_2e70d0;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e70e0u: goto label_2e70e0;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70ecu: goto label_2e70ec;
        case 0x2e70f0u: goto label_2e70f0;
        case 0x2e70f4u: goto label_2e70f4;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e70fcu: goto label_2e70fc;
        case 0x2e7100u: goto label_2e7100;
        case 0x2e7104u: goto label_2e7104;
        case 0x2e7108u: goto label_2e7108;
        case 0x2e710cu: goto label_2e710c;
        case 0x2e7110u: goto label_2e7110;
        case 0x2e7114u: goto label_2e7114;
        case 0x2e7118u: goto label_2e7118;
        case 0x2e711cu: goto label_2e711c;
        case 0x2e7120u: goto label_2e7120;
        case 0x2e7124u: goto label_2e7124;
        case 0x2e7128u: goto label_2e7128;
        case 0x2e712cu: goto label_2e712c;
        case 0x2e7130u: goto label_2e7130;
        case 0x2e7134u: goto label_2e7134;
        case 0x2e7138u: goto label_2e7138;
        case 0x2e713cu: goto label_2e713c;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7144u: goto label_2e7144;
        case 0x2e7148u: goto label_2e7148;
        case 0x2e714cu: goto label_2e714c;
        case 0x2e7150u: goto label_2e7150;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e7158u: goto label_2e7158;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e7160u: goto label_2e7160;
        case 0x2e7164u: goto label_2e7164;
        case 0x2e7168u: goto label_2e7168;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7170u: goto label_2e7170;
        case 0x2e7174u: goto label_2e7174;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e717cu: goto label_2e717c;
        case 0x2e7180u: goto label_2e7180;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e7188u: goto label_2e7188;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e7190u: goto label_2e7190;
        case 0x2e7194u: goto label_2e7194;
        case 0x2e7198u: goto label_2e7198;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e742cu: goto label_2e742c;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7434u: goto label_2e7434;
        case 0x2e7438u: goto label_2e7438;
        case 0x2e743cu: goto label_2e743c;
        case 0x2e7440u: goto label_2e7440;
        case 0x2e7444u: goto label_2e7444;
        case 0x2e7448u: goto label_2e7448;
        case 0x2e744cu: goto label_2e744c;
        case 0x2e7450u: goto label_2e7450;
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7464u: goto label_2e7464;
        case 0x2e7468u: goto label_2e7468;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e7474u: goto label_2e7474;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e747cu: goto label_2e747c;
        case 0x2e7480u: goto label_2e7480;
        case 0x2e7484u: goto label_2e7484;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e748cu: goto label_2e748c;
        case 0x2e7490u: goto label_2e7490;
        case 0x2e7494u: goto label_2e7494;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e749cu: goto label_2e749c;
        case 0x2e74a0u: goto label_2e74a0;
        case 0x2e74a4u: goto label_2e74a4;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e74acu: goto label_2e74ac;
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74b4u: goto label_2e74b4;
        case 0x2e74b8u: goto label_2e74b8;
        case 0x2e74bcu: goto label_2e74bc;
        case 0x2e74c0u: goto label_2e74c0;
        case 0x2e74c4u: goto label_2e74c4;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74ccu: goto label_2e74cc;
        case 0x2e74d0u: goto label_2e74d0;
        case 0x2e74d4u: goto label_2e74d4;
        case 0x2e74d8u: goto label_2e74d8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74e0u: goto label_2e74e0;
        case 0x2e74e4u: goto label_2e74e4;
        case 0x2e74e8u: goto label_2e74e8;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f0u: goto label_2e74f0;
        case 0x2e74f4u: goto label_2e74f4;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e74fcu: goto label_2e74fc;
        case 0x2e7500u: goto label_2e7500;
        case 0x2e7504u: goto label_2e7504;
        case 0x2e7508u: goto label_2e7508;
        case 0x2e750cu: goto label_2e750c;
        case 0x2e7510u: goto label_2e7510;
        case 0x2e7514u: goto label_2e7514;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e751cu: goto label_2e751c;
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e7528u: goto label_2e7528;
        case 0x2e752cu: goto label_2e752c;
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        case 0x2e7548u: goto label_2e7548;
        case 0x2e754cu: goto label_2e754c;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e7560u: goto label_2e7560;
        case 0x2e7564u: goto label_2e7564;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e756cu: goto label_2e756c;
        case 0x2e7570u: goto label_2e7570;
        case 0x2e7574u: goto label_2e7574;
        case 0x2e7578u: goto label_2e7578;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7580u: goto label_2e7580;
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e758cu: goto label_2e758c;
        case 0x2e7590u: goto label_2e7590;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e7598u: goto label_2e7598;
        case 0x2e759cu: goto label_2e759c;
        case 0x2e75a0u: goto label_2e75a0;
        case 0x2e75a4u: goto label_2e75a4;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e75acu: goto label_2e75ac;
        case 0x2e75b0u: goto label_2e75b0;
        case 0x2e75b4u: goto label_2e75b4;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75bcu: goto label_2e75bc;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75c4u: goto label_2e75c4;
        case 0x2e75c8u: goto label_2e75c8;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75d4u: goto label_2e75d4;
        case 0x2e75d8u: goto label_2e75d8;
        case 0x2e75dcu: goto label_2e75dc;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75e4u: goto label_2e75e4;
        case 0x2e75e8u: goto label_2e75e8;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e75f4u: goto label_2e75f4;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e75fcu: goto label_2e75fc;
        case 0x2e7600u: goto label_2e7600;
        case 0x2e7604u: goto label_2e7604;
        default: break;
    }

    ctx->pc = 0x2e6668u;

label_2e6668:
    // 0x2e6668: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2e666c:
    // 0x2e666c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e6670:
    // 0x2e6670: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2e6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2e6674:
    // 0x2e6674: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e6674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2e6678:
    // 0x2e6678: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2e6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2e667c:
    // 0x2e667c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e667cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6680:
    // 0x2e6680: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2e6680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2e6684:
    // 0x2e6684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e6684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e6688:
    // 0x2e6688: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e6688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e668c:
    // 0x2e668c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2e668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2e6690:
    // 0x2e6690: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2e6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2e6694:
    // 0x2e6694: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2e6694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2e6698:
    // 0x2e6698: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2e6698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2e669c:
    // 0x2e669c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2e669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2e66a0:
    // 0x2e66a0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2e66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2e66a4:
    // 0x2e66a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e66a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e66a8:
    // 0x2e66a8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e66a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2e66ac:
    // 0x2e66ac: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e66b0:
    // 0x2e66b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e66b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e66b4:
    // 0x2e66b4: 0x8cb40048  lw          $s4, 0x48($a1)
    ctx->pc = 0x2e66b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2e66b8:
    // 0x2e66b8: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2e66b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e66bc:
    // 0x2e66bc: 0x8644003e  lh          $a0, 0x3E($s2)
    ctx->pc = 0x2e66bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_2e66c0:
    // 0x2e66c0: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2e66c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e66c4:
    // 0x2e66c4: 0x267e0284  addiu       $fp, $s3, 0x284
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2e66c8:
    // 0x2e66c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e66cc:
    // 0x2e66cc: 0xc0e403c  jal         func_3900F0
label_2e66d0:
    if (ctx->pc == 0x2E66D0u) {
        ctx->pc = 0x2E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66CCu;
        // 0x2e66d0: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66D4u;
        goto label_2e66d4;
    }
    ctx->pc = 0x2E66CCu;
    SET_GPR_U32(ctx, 31, 0x2E66D4u);
    ctx->pc = 0x2E66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66CCu;
    // 0x2e66d0: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x2E66CCu, 0x2E66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66D4u;
label_2e66d4:
    // 0x2e66d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e66d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e66d8:
    // 0x2e66d8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e66dc:
    // 0x2e66dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e66e0:
    if (ctx->pc == 0x2E66E0u) {
        ctx->pc = 0x2E66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66DCu;
        // 0x2e66e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66E4u;
        goto label_2e66e4;
    }
    ctx->pc = 0x2E66DCu;
    {
        const bool branch_taken_0x2e66dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66DCu;
        // 0x2e66e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66dc) {
            ctx->pc = 0x2E66F4u;
            goto label_2e66f4;
        }
    }
    ctx->pc = 0x2E66E4u;
label_2e66e4:
    // 0x2e66e4: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2e66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e66e8:
    // 0x2e66e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e66ec:
    if (ctx->pc == 0x2E66ECu) {
        ctx->pc = 0x2E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66E8u;
        // 0x2e66ec: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66F0u;
        goto label_2e66f0;
    }
    ctx->pc = 0x2E66E8u;
    {
        const bool branch_taken_0x2e66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66E8u;
        // 0x2e66ec: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66e8) {
            ctx->pc = 0x2E66F4u;
            goto label_2e66f4;
        }
    }
    ctx->pc = 0x2E66F0u;
label_2e66f0:
    // 0x2e66f0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2e66f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e66f4:
    // 0x2e66f4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_2e66f8:
    if (ctx->pc == 0x2E66F8u) {
        ctx->pc = 0x2E66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66F4u;
        // 0x2e66f8: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66FCu;
        goto label_2e66fc;
    }
    ctx->pc = 0x2E66F4u;
    {
        const bool branch_taken_0x2e66f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66f4) {
            ctx->pc = 0x2E66F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E66F4u;
            // 0x2e66f8: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6744u;
            goto label_2e6744;
        }
    }
    ctx->pc = 0x2E66FCu;
label_2e66fc:
    // 0x2e66fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6700:
    // 0x2e6700: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2e6700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e6704:
    // 0x2e6704: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e6704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e6708:
    // 0x2e6708: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e670c:
    // 0x2e670c: 0x8cb000dc  lw          $s0, 0xDC($a1)
    ctx->pc = 0x2e670cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_2e6710:
    // 0x2e6710: 0x40f809  jalr        $v0
label_2e6714:
    if (ctx->pc == 0x2E6714u) {
        ctx->pc = 0x2E6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6710u;
        // 0x2e6714: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6718u;
        goto label_2e6718;
    }
    ctx->pc = 0x2E6710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6718u);
        ctx->pc = 0x2E6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6710u;
        // 0x2e6714: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6710u, 0x2E6718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6718u;
label_2e6718:
    // 0x2e6718: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
label_2e671c:
    if (ctx->pc == 0x2E671Cu) {
        ctx->pc = 0x2E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6718u;
        // 0x2e671c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6720u;
        goto label_2e6720;
    }
    ctx->pc = 0x2E6718u;
    {
        const bool branch_taken_0x2e6718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6718) {
            ctx->pc = 0x2E671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6718u;
            // 0x2e671c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6744u;
            goto label_2e6744;
        }
    }
    ctx->pc = 0x2E6720u;
label_2e6720:
    // 0x2e6720: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6724:
    // 0x2e6724: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e6724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e6728:
    // 0x2e6728: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e672c:
    // 0x2e672c: 0x40f809  jalr        $v0
label_2e6730:
    if (ctx->pc == 0x2E6730u) {
        ctx->pc = 0x2E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E672Cu;
        // 0x2e6730: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6734u;
        goto label_2e6734;
    }
    ctx->pc = 0x2E672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6734u);
        ctx->pc = 0x2E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E672Cu;
        // 0x2e6730: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E672Cu, 0x2E6734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6734u;
label_2e6734:
    // 0x2e6734: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2e6734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e6738:
    // 0x2e6738: 0xc10586e  jal         func_4161B8
label_2e673c:
    if (ctx->pc == 0x2E673Cu) {
        ctx->pc = 0x2E673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6738u;
        // 0x2e673c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6740u;
        goto label_2e6740;
    }
    ctx->pc = 0x2E6738u;
    SET_GPR_U32(ctx, 31, 0x2E6740u);
    ctx->pc = 0x2E673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6738u;
    // 0x2e673c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2E6738u, 0x2E6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6740u;
label_2e6740:
    // 0x2e6740: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e6744:
    // 0x2e6744: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2e6744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e6748:
    // 0x2e6748: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_2e674c:
    if (ctx->pc == 0x2E674Cu) {
        ctx->pc = 0x2E674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6748u;
        // 0x2e674c: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6750u;
        goto label_2e6750;
    }
    ctx->pc = 0x2E6748u;
    {
        const bool branch_taken_0x2e6748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6748) {
            ctx->pc = 0x2E674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6748u;
            // 0x2e674c: 0x8e620178  lw          $v0, 0x178($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6784u;
            goto label_2e6784;
        }
    }
    ctx->pc = 0x2E6750u;
label_2e6750:
    // 0x2e6750: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2e6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e6754:
    // 0x2e6754: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2e6754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2e6758:
    // 0x2e6758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e675c:
    if (ctx->pc == 0x2E675Cu) {
        ctx->pc = 0x2E675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6758u;
        // 0x2e675c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6760u;
        goto label_2e6760;
    }
    ctx->pc = 0x2E6758u;
    {
        const bool branch_taken_0x2e6758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6758u;
        // 0x2e675c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6758) {
            ctx->pc = 0x2E6778u;
            goto label_2e6778;
        }
    }
    ctx->pc = 0x2E6760u;
label_2e6760:
    // 0x2e6760: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e6760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6764:
    // 0x2e6764: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2e6768:
    if (ctx->pc == 0x2E6768u) {
        ctx->pc = 0x2E676Cu;
        goto label_2e676c;
    }
    ctx->pc = 0x2E6764u;
    {
        const bool branch_taken_0x2e6764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6764) {
            ctx->pc = 0x2E6778u;
            goto label_2e6778;
        }
    }
    ctx->pc = 0x2E676Cu;
label_2e676c:
    // 0x2e676c: 0x92420055  lbu         $v0, 0x55($s2)
    ctx->pc = 0x2e676cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
label_2e6770:
    // 0x2e6770: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e6770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e6774:
    // 0x2e6774: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2e6774u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e6778:
    // 0x2e6778: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_2e677c:
    if (ctx->pc == 0x2E677Cu) {
        ctx->pc = 0x2E677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6778u;
        // 0x2e677c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6780u;
        goto label_2e6780;
    }
    ctx->pc = 0x2E6778u;
    {
        const bool branch_taken_0x2e6778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6778u;
        // 0x2e677c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6778) {
            ctx->pc = 0x2E6814u;
            goto label_2e6814;
        }
    }
    ctx->pc = 0x2E6780u;
label_2e6780:
    // 0x2e6780: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2e6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2e6784:
    // 0x2e6784: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e6788:
    // 0x2e6788: 0xc043d5e  jal         func_10F578
label_2e678c:
    if (ctx->pc == 0x2E678Cu) {
        ctx->pc = 0x2E678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6788u;
        // 0x2e678c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6790u;
        goto label_2e6790;
    }
    ctx->pc = 0x2E6788u;
    SET_GPR_U32(ctx, 31, 0x2E6790u);
    ctx->pc = 0x2E678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6788u;
    // 0x2e678c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2E6788u, 0x2E6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6790u;
label_2e6790:
    // 0x2e6790: 0x1440038f  bnez        $v0, . + 4 + (0x38F << 2)
label_2e6794:
    if (ctx->pc == 0x2E6794u) {
        ctx->pc = 0x2E6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6790u;
        // 0x2e6794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6798u;
        goto label_2e6798;
    }
    ctx->pc = 0x2E6790u;
    {
        const bool branch_taken_0x2e6790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6790u;
        // 0x2e6794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6790) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6798u;
label_2e6798:
    // 0x2e6798: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e6798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e679c:
    // 0x2e679c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e67a0:
    // 0x2e67a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e67a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e67a4:
    // 0x2e67a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e67a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e67a8:
    // 0x2e67a8: 0xc105df6  jal         func_4177D8
label_2e67ac:
    if (ctx->pc == 0x2E67ACu) {
        ctx->pc = 0x2E67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67A8u;
        // 0x2e67ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67B0u;
        goto label_2e67b0;
    }
    ctx->pc = 0x2E67A8u;
    SET_GPR_U32(ctx, 31, 0x2E67B0u);
    ctx->pc = 0x2E67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67A8u;
    // 0x2e67ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2E67A8u, 0x2E67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67B0u;
label_2e67b0:
    // 0x2e67b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e67b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e67b4:
    // 0x2e67b4: 0x12200236  beqz        $s1, . + 4 + (0x236 << 2)
label_2e67b8:
    if (ctx->pc == 0x2E67B8u) {
        ctx->pc = 0x2E67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67B4u;
        // 0x2e67b8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67BCu;
        goto label_2e67bc;
    }
    ctx->pc = 0x2E67B4u;
    {
        const bool branch_taken_0x2e67b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67B4u;
        // 0x2e67b8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67b4) {
            ctx->pc = 0x2E7090u;
            goto label_2e7090;
        }
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e67c0:
    // 0x2e67c0: 0xc0a2ab0  jal         func_28AAC0
label_2e67c4:
    if (ctx->pc == 0x2E67C4u) {
        ctx->pc = 0x2E67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67C0u;
        // 0x2e67c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67C8u;
        goto label_2e67c8;
    }
    ctx->pc = 0x2E67C0u;
    SET_GPR_U32(ctx, 31, 0x2E67C8u);
    ctx->pc = 0x2E67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67C0u;
    // 0x2e67c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2E67C0u, 0x2E67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67C8u;
label_2e67c8:
    // 0x2e67c8: 0xc0a4e54  jal         func_293950
label_2e67cc:
    if (ctx->pc == 0x2E67CCu) {
        ctx->pc = 0x2E67D0u;
        goto label_2e67d0;
    }
    ctx->pc = 0x2E67C8u;
    SET_GPR_U32(ctx, 31, 0x2E67D0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E67C8u, 0x2E67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67D0u;
label_2e67d0:
    // 0x2e67d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e67d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e67d4:
    // 0x2e67d4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2e67d8:
    if (ctx->pc == 0x2E67D8u) {
        ctx->pc = 0x2E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67D4u;
        // 0x2e67d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67DCu;
        goto label_2e67dc;
    }
    ctx->pc = 0x2E67D4u;
    {
        const bool branch_taken_0x2e67d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67D4u;
        // 0x2e67d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67d4) {
            ctx->pc = 0x2E6800u;
            goto label_2e6800;
        }
    }
    ctx->pc = 0x2E67DCu;
label_2e67dc:
    // 0x2e67dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e67dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e67e0:
    // 0x2e67e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e67e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e67e4:
    // 0x2e67e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e67e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e67e8:
    // 0x2e67e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e67e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e67ec:
    // 0x2e67ec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2e67ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2e67f0:
    // 0x2e67f0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2e67f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e67f4:
    // 0x2e67f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e67f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e67f8:
    // 0x2e67f8: 0xc0b6a3e  jal         func_2DA8F8
label_2e67fc:
    if (ctx->pc == 0x2E67FCu) {
        ctx->pc = 0x2E67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67F8u;
        // 0x2e67fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6800u;
        goto label_2e6800;
    }
    ctx->pc = 0x2E67F8u;
    SET_GPR_U32(ctx, 31, 0x2E6800u);
    ctx->pc = 0x2E67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67F8u;
    // 0x2e67fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2E67F8u, 0x2E6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6800u;
label_2e6800:
    // 0x2e6800: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6804:
    // 0x2e6804: 0xc0a35d6  jal         func_28D758
label_2e6808:
    if (ctx->pc == 0x2E6808u) {
        ctx->pc = 0x2E6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6804u;
        // 0x2e6808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E680Cu;
        goto label_2e680c;
    }
    ctx->pc = 0x2E6804u;
    SET_GPR_U32(ctx, 31, 0x2E680Cu);
    ctx->pc = 0x2E6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6804u;
    // 0x2e6808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E6804u, 0x2E680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E680Cu;
label_2e680c:
    // 0x2e680c: 0x10000370  b           . + 4 + (0x370 << 2)
label_2e6810:
    if (ctx->pc == 0x2E6810u) {
        ctx->pc = 0x2E6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E680Cu;
        // 0x2e6810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6814u;
        goto label_2e6814;
    }
    ctx->pc = 0x2E680Cu;
    {
        const bool branch_taken_0x2e680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E680Cu;
        // 0x2e6810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e680c) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6814u;
label_2e6814:
    // 0x2e6814: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e6814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e6818:
    // 0x2e6818: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2e6818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2e681c:
    // 0x2e681c: 0xc1067b8  jal         func_419EE0
label_2e6820:
    if (ctx->pc == 0x2E6820u) {
        ctx->pc = 0x2E6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E681Cu;
        // 0x2e6820: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6824u;
        goto label_2e6824;
    }
    ctx->pc = 0x2E681Cu;
    SET_GPR_U32(ctx, 31, 0x2E6824u);
    ctx->pc = 0x2E6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E681Cu;
    // 0x2e6820: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2E681Cu, 0x2E6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6824u;
label_2e6824:
    // 0x2e6824: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e6824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6828:
    // 0x2e6828: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x2e6828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_2e682c:
    // 0x2e682c: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_2e6830:
    if (ctx->pc == 0x2E6830u) {
        ctx->pc = 0x2E6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E682Cu;
        // 0x2e6830: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6834u;
        goto label_2e6834;
    }
    ctx->pc = 0x2E682Cu;
    {
        const bool branch_taken_0x2e682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e682c) {
            ctx->pc = 0x2E6830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E682Cu;
            // 0x2e6830: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E693Cu;
            goto label_2e693c;
        }
    }
    ctx->pc = 0x2E6834u;
label_2e6834:
    // 0x2e6834: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x2e6834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_2e6838:
    // 0x2e6838: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_2e683c:
    if (ctx->pc == 0x2E683Cu) {
        ctx->pc = 0x2E683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6838u;
        // 0x2e683c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6840u;
        goto label_2e6840;
    }
    ctx->pc = 0x2E6838u;
    {
        const bool branch_taken_0x2e6838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6838) {
            ctx->pc = 0x2E683Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6838u;
            // 0x2e683c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E693Cu;
            goto label_2e693c;
        }
    }
    ctx->pc = 0x2E6840u;
label_2e6840:
    // 0x2e6840: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6844:
    // 0x2e6844: 0xc0a2fd0  jal         func_28BF40
label_2e6848:
    if (ctx->pc == 0x2E6848u) {
        ctx->pc = 0x2E6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6844u;
        // 0x2e6848: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E684Cu;
        goto label_2e684c;
    }
    ctx->pc = 0x2E6844u;
    SET_GPR_U32(ctx, 31, 0x2E684Cu);
    ctx->pc = 0x2E6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6844u;
    // 0x2e6848: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2E6844u, 0x2E684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E684Cu;
label_2e684c:
    // 0x2e684c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6850:
    // 0x2e6850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6854:
    // 0x2e6854: 0x5602003a  bnel        $s0, $v0, . + 4 + (0x3A << 2)
label_2e6858:
    if (ctx->pc == 0x2E6858u) {
        ctx->pc = 0x2E6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6854u;
        // 0x2e6858: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E685Cu;
        goto label_2e685c;
    }
    ctx->pc = 0x2E6854u;
    {
        const bool branch_taken_0x2e6854 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6854) {
            ctx->pc = 0x2E6858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6854u;
            // 0x2e6858: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6940u;
            goto label_2e6940;
        }
    }
    ctx->pc = 0x2E685Cu;
label_2e685c:
    // 0x2e685c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2e685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6860:
    // 0x2e6860: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2e6864:
    // 0x2e6864: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e6864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e6868:
    // 0x2e6868: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2e686c:
    // 0x2e686c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e686cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6870:
    // 0x2e6870: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e6870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2e6874:
    // 0x2e6874: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2e6874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e6878:
    // 0x2e6878: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2e6878u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_2e687c:
    // 0x2e687c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e687cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6880:
    // 0x2e6880: 0x0  nop
    ctx->pc = 0x2e6880u;
    // NOP
label_2e6884:
    // 0x2e6884: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
label_2e6888:
    if (ctx->pc == 0x2E6888u) {
        ctx->pc = 0x2E6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6884u;
        // 0x2e6888: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E688Cu;
        goto label_2e688c;
    }
    ctx->pc = 0x2E6884u;
    {
        const bool branch_taken_0x2e6884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6884) {
            ctx->pc = 0x2E6888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6884u;
            // 0x2e6888: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6940u;
            goto label_2e6940;
        }
    }
    ctx->pc = 0x2E688Cu;
label_2e688c:
    // 0x2e688c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6890:
    // 0x2e6890: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e6890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e6894:
    // 0x2e6894: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2e6894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e6898:
    // 0x2e6898: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_2e689c:
    if (ctx->pc == 0x2E689Cu) {
        ctx->pc = 0x2E689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6898u;
        // 0x2e689c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68A0u;
        goto label_2e68a0;
    }
    ctx->pc = 0x2E6898u;
    {
        const bool branch_taken_0x2e6898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6898u;
        // 0x2e689c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6898) {
            ctx->pc = 0x2E68B0u;
            goto label_2e68b0;
        }
    }
    ctx->pc = 0x2E68A0u;
label_2e68a0:
    // 0x2e68a0: 0xc0a3698  jal         func_28DA60
label_2e68a4:
    if (ctx->pc == 0x2E68A4u) {
        ctx->pc = 0x2E68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68A0u;
        // 0x2e68a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68A8u;
        goto label_2e68a8;
    }
    ctx->pc = 0x2E68A0u;
    SET_GPR_U32(ctx, 31, 0x2E68A8u);
    ctx->pc = 0x2E68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68A0u;
    // 0x2e68a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x2E68A0u, 0x2E68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68A8u;
label_2e68a8:
    // 0x2e68a8: 0x10000349  b           . + 4 + (0x349 << 2)
label_2e68ac:
    if (ctx->pc == 0x2E68ACu) {
        ctx->pc = 0x2E68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68A8u;
        // 0x2e68ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68B0u;
        goto label_2e68b0;
    }
    ctx->pc = 0x2E68A8u;
    {
        const bool branch_taken_0x2e68a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68A8u;
        // 0x2e68ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68a8) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E68B0u;
label_2e68b0:
    // 0x2e68b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e68b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e68b4:
    // 0x2e68b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e68b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e68b8:
    // 0x2e68b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e68b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e68bc:
    // 0x2e68bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e68bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e68c0:
    // 0x2e68c0: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x2e68c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_2e68c4:
    // 0x2e68c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e68c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e68c8:
    // 0x2e68c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e68c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e68cc:
    // 0x2e68cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e68ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e68d0:
    // 0x2e68d0: 0xc088178  jal         func_2205E0
label_2e68d4:
    if (ctx->pc == 0x2E68D4u) {
        ctx->pc = 0x2E68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68D0u;
        // 0x2e68d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68D8u;
        goto label_2e68d8;
    }
    ctx->pc = 0x2E68D0u;
    SET_GPR_U32(ctx, 31, 0x2E68D8u);
    ctx->pc = 0x2E68D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68D0u;
    // 0x2e68d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E68D0u, 0x2E68D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68D8u;
label_2e68d8:
    // 0x2e68d8: 0xa2500054  sb          $s0, 0x54($s2)
    ctx->pc = 0x2e68d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 16));
label_2e68dc:
    // 0x2e68dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e68e0:
    // 0x2e68e0: 0xc088680  jal         func_221A00
label_2e68e4:
    if (ctx->pc == 0x2E68E4u) {
        ctx->pc = 0x2E68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68E0u;
        // 0x2e68e4: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68E8u;
        goto label_2e68e8;
    }
    ctx->pc = 0x2E68E0u;
    SET_GPR_U32(ctx, 31, 0x2E68E8u);
    ctx->pc = 0x2E68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68E0u;
    // 0x2e68e4: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E68E0u, 0x2E68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68E8u;
label_2e68e8:
    // 0x2e68e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e68ec:
    if (ctx->pc == 0x2E68ECu) {
        ctx->pc = 0x2E68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68E8u;
        // 0x2e68ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68F0u;
        goto label_2e68f0;
    }
    ctx->pc = 0x2E68E8u;
    {
        const bool branch_taken_0x2e68e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68E8u;
        // 0x2e68ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68e8) {
            ctx->pc = 0x2E6924u;
            goto label_2e6924;
        }
    }
    ctx->pc = 0x2E68F0u;
label_2e68f0:
    // 0x2e68f0: 0xc0a367c  jal         func_28D9F0
label_2e68f4:
    if (ctx->pc == 0x2E68F4u) {
        ctx->pc = 0x2E68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68F0u;
        // 0x2e68f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E68F8u;
        goto label_2e68f8;
    }
    ctx->pc = 0x2E68F0u;
    SET_GPR_U32(ctx, 31, 0x2E68F8u);
    ctx->pc = 0x2E68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E68F0u;
    // 0x2e68f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E68F0u, 0x2E68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E68F8u;
label_2e68f8:
    // 0x2e68f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e68fc:
    if (ctx->pc == 0x2E68FCu) {
        ctx->pc = 0x2E68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68F8u;
        // 0x2e68fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6900u;
        goto label_2e6900;
    }
    ctx->pc = 0x2E68F8u;
    {
        const bool branch_taken_0x2e68f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E68F8u;
        // 0x2e68fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68f8) {
            ctx->pc = 0x2E6920u;
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E6900u;
label_2e6900:
    // 0x2e6900: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e6900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6904:
    // 0x2e6904: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e6904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e6908:
    // 0x2e6908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e690c:
    // 0x2e690c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e690cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6910:
    // 0x2e6910: 0x24060152  addiu       $a2, $zero, 0x152
    ctx->pc = 0x2e6910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_2e6914:
    // 0x2e6914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6918:
    // 0x2e6918: 0xc0be8c0  jal         func_2FA300
label_2e691c:
    if (ctx->pc == 0x2E691Cu) {
        ctx->pc = 0x2E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6918u;
        // 0x2e691c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6920u;
        goto label_2e6920;
    }
    ctx->pc = 0x2E6918u;
    SET_GPR_U32(ctx, 31, 0x2E6920u);
    ctx->pc = 0x2E691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6918u;
    // 0x2e691c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2E6918u, 0x2E6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6920u;
label_2e6920:
    // 0x2e6920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6924:
    // 0x2e6924: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e6928:
    // 0x2e6928: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2e6928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2e692c:
    // 0x2e692c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e6930:
    // 0x2e6930: 0x240504e2  addiu       $a1, $zero, 0x4E2
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
label_2e6934:
    // 0x2e6934: 0x100000fc  b           . + 4 + (0xFC << 2)
label_2e6938:
    if (ctx->pc == 0x2E6938u) {
        ctx->pc = 0x2E6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6934u;
        // 0x2e6938: 0x24060640  addiu       $a2, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E693Cu;
        goto label_2e693c;
    }
    ctx->pc = 0x2E6934u;
    {
        const bool branch_taken_0x2e6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6934u;
        // 0x2e6938: 0x24060640  addiu       $a2, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6934) {
            ctx->pc = 0x2E6D28u;
            goto label_2e6d28;
        }
    }
    ctx->pc = 0x2E693Cu;
label_2e693c:
    // 0x2e693c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6940:
    // 0x2e6940: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_2e6944:
    if (ctx->pc == 0x2E6944u) {
        ctx->pc = 0x2E6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6940u;
        // 0x2e6944: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6948u;
        goto label_2e6948;
    }
    ctx->pc = 0x2E6940u;
    {
        const bool branch_taken_0x2e6940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6940) {
            ctx->pc = 0x2E6944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6940u;
            // 0x2e6944: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E69B4u;
            goto label_2e69b4;
        }
    }
    ctx->pc = 0x2E6948u;
label_2e6948:
    // 0x2e6948: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2e6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2e694c:
    // 0x2e694c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2e694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2e6950:
    // 0x2e6950: 0xc043d5e  jal         func_10F578
label_2e6954:
    if (ctx->pc == 0x2E6954u) {
        ctx->pc = 0x2E6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6950u;
        // 0x2e6954: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6958u;
        goto label_2e6958;
    }
    ctx->pc = 0x2E6950u;
    SET_GPR_U32(ctx, 31, 0x2E6958u);
    ctx->pc = 0x2E6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6950u;
    // 0x2e6954: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2E6950u, 0x2E6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6958u;
label_2e6958:
    // 0x2e6958: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2e695c:
    if (ctx->pc == 0x2E695Cu) {
        ctx->pc = 0x2E695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6958u;
        // 0x2e695c: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6960u;
        goto label_2e6960;
    }
    ctx->pc = 0x2E6958u;
    {
        const bool branch_taken_0x2e6958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6958) {
            ctx->pc = 0x2E695Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6958u;
            // 0x2e695c: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6974u;
            goto label_2e6974;
        }
    }
    ctx->pc = 0x2E6960u;
label_2e6960:
    // 0x2e6960: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2e6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2e6964:
    // 0x2e6964: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2e6964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e6968:
    // 0x2e6968: 0x14400319  bnez        $v0, . + 4 + (0x319 << 2)
label_2e696c:
    if (ctx->pc == 0x2E696Cu) {
        ctx->pc = 0x2E696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6968u;
        // 0x2e696c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6970u;
        goto label_2e6970;
    }
    ctx->pc = 0x2E6968u;
    {
        const bool branch_taken_0x2e6968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6968u;
        // 0x2e696c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6968) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6970u;
label_2e6970:
    // 0x2e6970: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e6974:
    // 0x2e6974: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2e6974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2e6978:
    // 0x2e6978: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e697c:
    if (ctx->pc == 0x2E697Cu) {
        ctx->pc = 0x2E697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6978u;
        // 0x2e697c: 0x8e22b734  lw          $v0, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6980u;
        goto label_2e6980;
    }
    ctx->pc = 0x2E6978u;
    {
        const bool branch_taken_0x2e6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6978u;
        // 0x2e697c: 0x8e22b734  lw          $v0, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6978) {
            ctx->pc = 0x2E69A8u;
            goto label_2e69a8;
        }
    }
    ctx->pc = 0x2E6980u;
label_2e6980:
    // 0x2e6980: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e6984:
    // 0x2e6984: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2e6984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2e6988:
    // 0x2e6988: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e698c:
    // 0x2e698c: 0x24051388  addiu       $a1, $zero, 0x1388
    ctx->pc = 0x2e698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_2e6990:
    // 0x2e6990: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x2e6990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2e6994:
    // 0x2e6994: 0xc0cd4fc  jal         func_3353F0
label_2e6998:
    if (ctx->pc == 0x2E6998u) {
        ctx->pc = 0x2E6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6994u;
        // 0x2e6998: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E699Cu;
        goto label_2e699c;
    }
    ctx->pc = 0x2E6994u;
    SET_GPR_U32(ctx, 31, 0x2E699Cu);
    ctx->pc = 0x2E6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6994u;
    // 0x2e6998: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E6994u, 0x2E699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E699Cu;
label_2e699c:
    // 0x2e699c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e699cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e69a0:
    // 0x2e69a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e69a4:
    if (ctx->pc == 0x2E69A4u) {
        ctx->pc = 0x2E69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69A0u;
        // 0x2e69a4: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69A8u;
        goto label_2e69a8;
    }
    ctx->pc = 0x2E69A0u;
    {
        const bool branch_taken_0x2e69a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69A0u;
        // 0x2e69a4: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69a0) {
            ctx->pc = 0x2E69B0u;
            goto label_2e69b0;
        }
    }
    ctx->pc = 0x2E69A8u;
label_2e69a8:
    // 0x2e69a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e69ac:
    // 0x2e69ac: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2e69acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2e69b0:
    // 0x2e69b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e69b4:
    // 0x2e69b4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e69b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2e69b8:
    // 0x2e69b8: 0x1c600305  bgtz        $v1, . + 4 + (0x305 << 2)
label_2e69bc:
    if (ctx->pc == 0x2E69BCu) {
        ctx->pc = 0x2E69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69B8u;
        // 0x2e69bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69C0u;
        goto label_2e69c0;
    }
    ctx->pc = 0x2E69B8u;
    {
        const bool branch_taken_0x2e69b8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69B8u;
        // 0x2e69bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69b8) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E69C0u;
label_2e69c0:
    // 0x2e69c0: 0x12a00302  beqz        $s5, . + 4 + (0x302 << 2)
label_2e69c4:
    if (ctx->pc == 0x2E69C4u) {
        ctx->pc = 0x2E69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69C0u;
        // 0x2e69c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69C8u;
        goto label_2e69c8;
    }
    ctx->pc = 0x2E69C0u;
    {
        const bool branch_taken_0x2e69c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69C0u;
        // 0x2e69c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69c0) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E69C8u;
label_2e69c8:
    // 0x2e69c8: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x2e69c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e69cc:
    // 0x2e69cc: 0x5602000b  bnel        $s0, $v0, . + 4 + (0xB << 2)
label_2e69d0:
    if (ctx->pc == 0x2E69D0u) {
        ctx->pc = 0x2E69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69CCu;
        // 0x2e69d0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69D4u;
        goto label_2e69d4;
    }
    ctx->pc = 0x2E69CCu;
    {
        const bool branch_taken_0x2e69cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e69cc) {
            ctx->pc = 0x2E69D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E69CCu;
            // 0x2e69d0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E69FCu;
            goto label_2e69fc;
        }
    }
    ctx->pc = 0x2E69D4u;
label_2e69d4:
    // 0x2e69d4: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2e69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2e69d8:
    // 0x2e69d8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2e69dc:
    // 0x2e69dc: 0xc043d5e  jal         func_10F578
label_2e69e0:
    if (ctx->pc == 0x2E69E0u) {
        ctx->pc = 0x2E69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69DCu;
        // 0x2e69e0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69E4u;
        goto label_2e69e4;
    }
    ctx->pc = 0x2E69DCu;
    SET_GPR_U32(ctx, 31, 0x2E69E4u);
    ctx->pc = 0x2E69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E69DCu;
    // 0x2e69e0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2E69DCu, 0x2E69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69E4u;
label_2e69e4:
    // 0x2e69e4: 0x144002fa  bnez        $v0, . + 4 + (0x2FA << 2)
label_2e69e8:
    if (ctx->pc == 0x2E69E8u) {
        ctx->pc = 0x2E69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69E4u;
        // 0x2e69e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69ECu;
        goto label_2e69ec;
    }
    ctx->pc = 0x2E69E4u;
    {
        const bool branch_taken_0x2e69e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69E4u;
        // 0x2e69e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69e4) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E69ECu;
label_2e69ec:
    // 0x2e69ec: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2e69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e69f0:
    // 0x2e69f0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_2e69f4:
    if (ctx->pc == 0x2E69F4u) {
        ctx->pc = 0x2E69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69F0u;
        // 0x2e69f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E69F8u;
        goto label_2e69f8;
    }
    ctx->pc = 0x2E69F0u;
    {
        const bool branch_taken_0x2e69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E69F0u;
        // 0x2e69f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e69f0) {
            ctx->pc = 0x2E6A18u;
            goto label_2e6a18;
        }
    }
    ctx->pc = 0x2E69F8u;
label_2e69f8:
    // 0x2e69f8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e69fc:
    // 0x2e69fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6a00:
    // 0x2e6a00: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_2e6a04:
    if (ctx->pc == 0x2E6A04u) {
        ctx->pc = 0x2E6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A00u;
        // 0x2e6a04: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A08u;
        goto label_2e6a08;
    }
    ctx->pc = 0x2E6A00u;
    {
        const bool branch_taken_0x2e6a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6a00) {
            ctx->pc = 0x2E6A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A00u;
            // 0x2e6a04: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A50u;
            goto label_2e6a50;
        }
    }
    ctx->pc = 0x2E6A08u;
label_2e6a08:
    // 0x2e6a08: 0x92420055  lbu         $v0, 0x55($s2)
    ctx->pc = 0x2e6a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
label_2e6a0c:
    // 0x2e6a0c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2e6a10:
    if (ctx->pc == 0x2E6A10u) {
        ctx->pc = 0x2E6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A0Cu;
        // 0x2e6a10: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A14u;
        goto label_2e6a14;
    }
    ctx->pc = 0x2E6A0Cu;
    {
        const bool branch_taken_0x2e6a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a0c) {
            ctx->pc = 0x2E6A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6A0Cu;
            // 0x2e6a10: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A50u;
            goto label_2e6a50;
        }
    }
    ctx->pc = 0x2E6A14u;
label_2e6a14:
    // 0x2e6a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6a18:
    // 0x2e6a18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6a1c:
    // 0x2e6a1c: 0xa26201b2  sb          $v0, 0x1B2($s3)
    ctx->pc = 0x2e6a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 434), (uint8_t)GPR_U32(ctx, 2));
label_2e6a20:
    // 0x2e6a20: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2e6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e6a24:
    // 0x2e6a24: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x2e6a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2e6a28:
    // 0x2e6a28: 0x84700120  lh          $s0, 0x120($v1)
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_2e6a2c:
    // 0x2e6a2c: 0xc067b9c  jal         func_19EE70
label_2e6a30:
    if (ctx->pc == 0x2E6A30u) {
        ctx->pc = 0x2E6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A2Cu;
        // 0x2e6a30: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A34u;
        goto label_2e6a34;
    }
    ctx->pc = 0x2E6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A34u);
    ctx->pc = 0x2E6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A2Cu;
    // 0x2e6a30: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2E6A2Cu, 0x2E6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A34u;
label_2e6a34:
    // 0x2e6a34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e6a38:
    // 0x2e6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a3c:
    // 0x2e6a3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e6a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a40:
    // 0x2e6a40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e6a44:
    // 0x2e6a44: 0x60f809  jalr        $v1
label_2e6a48:
    if (ctx->pc == 0x2E6A48u) {
        ctx->pc = 0x2E6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A44u;
        // 0x2e6a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A4Cu;
        goto label_2e6a4c;
    }
    ctx->pc = 0x2E6A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6A4Cu);
        ctx->pc = 0x2E6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A44u;
        // 0x2e6a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6A44u, 0x2E6A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6A4Cu;
label_2e6a4c:
    // 0x2e6a4c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2e6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e6a50:
    // 0x2e6a50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a54:
    // 0x2e6a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2e6a58:
    if (ctx->pc == 0x2E6A58u) {
        ctx->pc = 0x2E6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A54u;
        // 0x2e6a58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A5Cu;
        goto label_2e6a5c;
    }
    ctx->pc = 0x2E6A54u;
    {
        const bool branch_taken_0x2e6a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A54u;
        // 0x2e6a58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a54) {
            ctx->pc = 0x2E6A74u;
            goto label_2e6a74;
        }
    }
    ctx->pc = 0x2E6A5Cu;
label_2e6a5c:
    // 0x2e6a5c: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x2e6a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_2e6a60:
    // 0x2e6a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e6a64:
    if (ctx->pc == 0x2E6A64u) {
        ctx->pc = 0x2E6A68u;
        goto label_2e6a68;
    }
    ctx->pc = 0x2E6A60u;
    {
        const bool branch_taken_0x2e6a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a60) {
            ctx->pc = 0x2E6A74u;
            goto label_2e6a74;
        }
    }
    ctx->pc = 0x2E6A68u;
label_2e6a68:
    // 0x2e6a68: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x2e6a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_2e6a6c:
    // 0x2e6a6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e6a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e6a70:
    // 0x2e6a70: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2e6a70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e6a74:
    // 0x2e6a74: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2e6a78:
    if (ctx->pc == 0x2E6A78u) {
        ctx->pc = 0x2E6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A74u;
        // 0x2e6a78: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A7Cu;
        goto label_2e6a7c;
    }
    ctx->pc = 0x2E6A74u;
    {
        const bool branch_taken_0x2e6a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A74u;
        // 0x2e6a78: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a74) {
            ctx->pc = 0x2E6A94u;
            goto label_2e6a94;
        }
    }
    ctx->pc = 0x2E6A7Cu;
label_2e6a7c:
    // 0x2e6a7c: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2e6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2e6a80:
    // 0x2e6a80: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e6a84:
    // 0x2e6a84: 0xc0cd4fc  jal         func_3353F0
label_2e6a88:
    if (ctx->pc == 0x2E6A88u) {
        ctx->pc = 0x2E6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A84u;
        // 0x2e6a88: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6A8Cu;
        goto label_2e6a8c;
    }
    ctx->pc = 0x2E6A84u;
    SET_GPR_U32(ctx, 31, 0x2E6A8Cu);
    ctx->pc = 0x2E6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A84u;
    // 0x2e6a88: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E6A84u, 0x2E6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A8Cu;
label_2e6a8c:
    // 0x2e6a8c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e6a90:
    // 0x2e6a90: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x2e6a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_2e6a94:
    // 0x2e6a94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a98:
    // 0x2e6a98: 0xc104a86  jal         func_412A18
label_2e6a9c:
    if (ctx->pc == 0x2E6A9Cu) {
        ctx->pc = 0x2E6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A98u;
        // 0x2e6a9c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AA0u;
        goto label_2e6aa0;
    }
    ctx->pc = 0x2E6A98u;
    SET_GPR_U32(ctx, 31, 0x2E6AA0u);
    ctx->pc = 0x2E6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6A98u;
    // 0x2e6a9c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E6A98u, 0x2E6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AA0u;
label_2e6aa0:
    // 0x2e6aa0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e6aa4:
    if (ctx->pc == 0x2E6AA4u) {
        ctx->pc = 0x2E6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AA0u;
        // 0x2e6aa4: 0xc6420038  lwc1        $f2, 0x38($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AA8u;
        goto label_2e6aa8;
    }
    ctx->pc = 0x2E6AA0u;
    {
        const bool branch_taken_0x2e6aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6aa0) {
            ctx->pc = 0x2E6AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6AA0u;
            // 0x2e6aa4: 0xc6420038  lwc1        $f2, 0x38($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6AB4u;
            goto label_2e6ab4;
        }
    }
    ctx->pc = 0x2E6AA8u;
label_2e6aa8:
    // 0x2e6aa8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e6aac:
    // 0x2e6aac: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2e6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2e6ab0:
    // 0x2e6ab0: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2e6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e6ab4:
    // 0x2e6ab4: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2e6ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2e6ab8:
    // 0x2e6ab8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e6ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6abc:
    // 0x2e6abc: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x2e6abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2e6ac0:
    // 0x2e6ac0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2e6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e6ac4:
    // 0x2e6ac4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e6ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e6ac8:
    // 0x2e6ac8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2e6ac8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_2e6acc:
    // 0x2e6acc: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2e6accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6ad0:
    // 0x2e6ad0: 0x0  nop
    ctx->pc = 0x2e6ad0u;
    // NOP
label_2e6ad4:
    // 0x2e6ad4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2e6ad8:
    if (ctx->pc == 0x2E6AD8u) {
        ctx->pc = 0x2E6ADCu;
        goto label_2e6adc;
    }
    ctx->pc = 0x2E6AD4u;
    {
        const bool branch_taken_0x2e6ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6ad4) {
            ctx->pc = 0x2E6AECu;
            goto label_2e6aec;
        }
    }
    ctx->pc = 0x2E6ADCu;
label_2e6adc:
    // 0x2e6adc: 0xc0b996c  jal         func_2E65B0
label_2e6ae0:
    if (ctx->pc == 0x2E6AE0u) {
        ctx->pc = 0x2E6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ADCu;
        // 0x2e6ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AE4u;
        goto label_2e6ae4;
    }
    ctx->pc = 0x2E6ADCu;
    SET_GPR_U32(ctx, 31, 0x2E6AE4u);
    ctx->pc = 0x2E6AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6ADCu;
    // 0x2e6ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E65B0u, 0x2E6ADCu, 0x2E6AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AE4u;
label_2e6ae4:
    // 0x2e6ae4: 0x100002ba  b           . + 4 + (0x2BA << 2)
label_2e6ae8:
    if (ctx->pc == 0x2E6AE8u) {
        ctx->pc = 0x2E6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AE4u;
        // 0x2e6ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AECu;
        goto label_2e6aec;
    }
    ctx->pc = 0x2E6AE4u;
    {
        const bool branch_taken_0x2e6ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AE4u;
        // 0x2e6ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ae4) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6AECu;
label_2e6aec:
    // 0x2e6aec: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2e6aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6af0:
    // 0x2e6af0: 0x0  nop
    ctx->pc = 0x2e6af0u;
    // NOP
label_2e6af4:
    // 0x2e6af4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2e6af8:
    if (ctx->pc == 0x2E6AF8u) {
        ctx->pc = 0x2E6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AF4u;
        // 0x2e6af8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6AFCu;
        goto label_2e6afc;
    }
    ctx->pc = 0x2E6AF4u;
    {
        const bool branch_taken_0x2e6af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AF4u;
        // 0x2e6af8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6af4) {
            ctx->pc = 0x2E6B1Cu;
            goto label_2e6b1c;
        }
    }
    ctx->pc = 0x2E6AFCu;
label_2e6afc:
    // 0x2e6afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6b00:
    // 0x2e6b00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6b04:
    // 0x2e6b04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e6b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b08:
    // 0x2e6b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b0c:
    // 0x2e6b0c: 0xc0a6800  jal         func_29A000
label_2e6b10:
    if (ctx->pc == 0x2E6B10u) {
        ctx->pc = 0x2E6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B0Cu;
        // 0x2e6b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B14u;
        goto label_2e6b14;
    }
    ctx->pc = 0x2E6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6B14u);
    ctx->pc = 0x2E6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B0Cu;
    // 0x2e6b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2E6B0Cu, 0x2E6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B14u;
label_2e6b14:
    // 0x2e6b14: 0x10000046  b           . + 4 + (0x46 << 2)
label_2e6b18:
    if (ctx->pc == 0x2E6B18u) {
        ctx->pc = 0x2E6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B14u;
        // 0x2e6b18: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B1Cu;
        goto label_2e6b1c;
    }
    ctx->pc = 0x2E6B14u;
    {
        const bool branch_taken_0x2e6b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B14u;
        // 0x2e6b18: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b14) {
            ctx->pc = 0x2E6C30u;
            goto label_2e6c30;
        }
    }
    ctx->pc = 0x2E6B1Cu;
label_2e6b1c:
    // 0x2e6b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6b20:
    // 0x2e6b20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6b24:
    // 0x2e6b24: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2e6b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2e6b28:
    // 0x2e6b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b2c:
    // 0x2e6b2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e6b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b30:
    // 0x2e6b30: 0xc0a6800  jal         func_29A000
label_2e6b34:
    if (ctx->pc == 0x2E6B34u) {
        ctx->pc = 0x2E6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B30u;
        // 0x2e6b34: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B38u;
        goto label_2e6b38;
    }
    ctx->pc = 0x2E6B30u;
    SET_GPR_U32(ctx, 31, 0x2E6B38u);
    ctx->pc = 0x2E6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B30u;
    // 0x2e6b34: 0x26b10090  addiu       $s1, $s5, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2E6B30u, 0x2E6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B38u;
label_2e6b38:
    // 0x2e6b38: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x2e6b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2e6b3c:
    // 0x2e6b3c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e6b40:
    // 0x2e6b40: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2e6b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e6b44:
    // 0x2e6b44: 0x7ac50000  lq          $a1, 0x0($s6)
    ctx->pc = 0x2e6b44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2e6b48:
    // 0x2e6b48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e6b4c:
    // 0x2e6b4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e6b50:
    // 0x2e6b50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2e6b54:
    // 0x2e6b54: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e6b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e6b58:
    // 0x2e6b58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e6b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e6b5c:
    // 0x2e6b5c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2e6b5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2e6b60:
    // 0x2e6b60: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e6b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e6b64:
    // 0x2e6b64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e6b64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e6b68:
    // 0x2e6b68: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e6b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e6b6c:
    // 0x2e6b6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e6b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2e6b70:
    // 0x2e6b70: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e6b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2e6b74:
    // 0x2e6b74: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e6b78:
    // 0x2e6b78: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2e6b78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e6b7c:
    // 0x2e6b7c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e6b80:
    // 0x2e6b80: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2e6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2e6b84:
    // 0x2e6b84: 0xc0cd8ec  jal         func_3363B0
label_2e6b88:
    if (ctx->pc == 0x2E6B88u) {
        ctx->pc = 0x2E6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B84u;
        // 0x2e6b88: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6B8Cu;
        goto label_2e6b8c;
    }
    ctx->pc = 0x2E6B84u;
    SET_GPR_U32(ctx, 31, 0x2E6B8Cu);
    ctx->pc = 0x2E6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B84u;
    // 0x2e6b88: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E6B84u, 0x2E6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B8Cu;
label_2e6b8c:
    // 0x2e6b8c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e6b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6b90:
    // 0x2e6b90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e6b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e6b94:
    // 0x2e6b94: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2e6b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e6b98:
    // 0x2e6b98: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e6b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e6b9c:
    // 0x2e6b9c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e6b9cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2e6ba0:
    // 0x2e6ba0: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2e6ba0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e6ba4:
    // 0x2e6ba4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e6ba4u;
    // VWAITQ (Q already resolved in this runtime)
label_2e6ba8:
    // 0x2e6ba8: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2e6ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e6bac:
    // 0x2e6bac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2e6bacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2e6bb0:
    // 0x2e6bb0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2e6bb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e6bb4:
    // 0x2e6bb4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e6bb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e6bb8:
    // 0x2e6bb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e6bb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e6bbc:
    // 0x2e6bbc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2e6bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e6bc0:
    // 0x2e6bc0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e6bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e6bc4:
    // 0x2e6bc4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2e6bc4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e6bc8:
    // 0x2e6bc8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2e6bcc:
    // 0x2e6bcc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2e6bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2e6bd0:
    // 0x2e6bd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6bd4:
    // 0x2e6bd4: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2e6bd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e6bd8:
    // 0x2e6bd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e6bdc:
    // 0x2e6bdc: 0xc12e29c  jal         func_4B8A70
label_2e6be0:
    if (ctx->pc == 0x2E6BE0u) {
        ctx->pc = 0x2E6BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BDCu;
        // 0x2e6be0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BE4u;
        goto label_2e6be4;
    }
    ctx->pc = 0x2E6BDCu;
    SET_GPR_U32(ctx, 31, 0x2E6BE4u);
    ctx->pc = 0x2E6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BDCu;
    // 0x2e6be0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2E6BDCu, 0x2E6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BE4u;
label_2e6be4:
    // 0x2e6be4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e6be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6be8:
    // 0x2e6be8: 0x0  nop
    ctx->pc = 0x2e6be8u;
    // NOP
label_2e6bec:
    // 0x2e6bec: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2e6bf0:
    if (ctx->pc == 0x2E6BF0u) {
        ctx->pc = 0x2E6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BECu;
        // 0x2e6bf0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BF4u;
        goto label_2e6bf4;
    }
    ctx->pc = 0x2E6BECu;
    {
        const bool branch_taken_0x2e6bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6bec) {
            ctx->pc = 0x2E6BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6BECu;
            // 0x2e6bf0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6C30u;
            goto label_2e6c30;
        }
    }
    ctx->pc = 0x2E6BF4u;
label_2e6bf4:
    // 0x2e6bf4: 0xc0a367c  jal         func_28D9F0
label_2e6bf8:
    if (ctx->pc == 0x2E6BF8u) {
        ctx->pc = 0x2E6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BF4u;
        // 0x2e6bf8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6BFCu;
        goto label_2e6bfc;
    }
    ctx->pc = 0x2E6BF4u;
    SET_GPR_U32(ctx, 31, 0x2E6BFCu);
    ctx->pc = 0x2E6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BF4u;
    // 0x2e6bf8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E6BF4u, 0x2E6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BFCu;
label_2e6bfc:
    // 0x2e6bfc: 0x10400273  beqz        $v0, . + 4 + (0x273 << 2)
label_2e6c00:
    if (ctx->pc == 0x2E6C00u) {
        ctx->pc = 0x2E6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BFCu;
        // 0x2e6c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C04u;
        goto label_2e6c04;
    }
    ctx->pc = 0x2E6BFCu;
    {
        const bool branch_taken_0x2e6bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BFCu;
        // 0x2e6c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bfc) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E6C04u;
label_2e6c04:
    // 0x2e6c04: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2e6c04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2e6c08:
    // 0x2e6c08: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6c0c:
    // 0x2e6c0c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2e6c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e6c10:
    // 0x2e6c10: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2e6c10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2e6c14:
    // 0x2e6c14: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e6c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2e6c18:
    // 0x2e6c18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e6c1c:
    // 0x2e6c1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6c20:
    // 0x2e6c20: 0xc0bf800  jal         func_2FE000
label_2e6c24:
    if (ctx->pc == 0x2E6C24u) {
        ctx->pc = 0x2E6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C20u;
        // 0x2e6c24: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C28u;
        goto label_2e6c28;
    }
    ctx->pc = 0x2E6C20u;
    SET_GPR_U32(ctx, 31, 0x2E6C28u);
    ctx->pc = 0x2E6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C20u;
    // 0x2e6c24: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E6C20u, 0x2E6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C28u;
label_2e6c28:
    // 0x2e6c28: 0x10000269  b           . + 4 + (0x269 << 2)
label_2e6c2c:
    if (ctx->pc == 0x2E6C2Cu) {
        ctx->pc = 0x2E6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C28u;
        // 0x2e6c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C30u;
        goto label_2e6c30;
    }
    ctx->pc = 0x2E6C28u;
    {
        const bool branch_taken_0x2e6c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C28u;
        // 0x2e6c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c28) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6C30u;
label_2e6c30:
    // 0x2e6c30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6c34:
    // 0x2e6c34: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_2e6c38:
    if (ctx->pc == 0x2E6C38u) {
        ctx->pc = 0x2E6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C34u;
        // 0x2e6c38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C3Cu;
        goto label_2e6c3c;
    }
    ctx->pc = 0x2E6C34u;
    {
        const bool branch_taken_0x2e6c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C34u;
        // 0x2e6c38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c34) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6C3Cu;
label_2e6c3c:
    // 0x2e6c3c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2e6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2e6c40:
    // 0x2e6c40: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e6c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e6c44:
    // 0x2e6c44: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2e6c48:
    if (ctx->pc == 0x2E6C48u) {
        ctx->pc = 0x2E6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C44u;
        // 0x2e6c48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C4Cu;
        goto label_2e6c4c;
    }
    ctx->pc = 0x2E6C44u;
    {
        const bool branch_taken_0x2e6c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C44u;
        // 0x2e6c48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c44) {
            ctx->pc = 0x2E6D3Cu;
            goto label_2e6d3c;
        }
    }
    ctx->pc = 0x2E6C4Cu;
label_2e6c4c:
    // 0x2e6c4c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2e6c50:
    // 0x2e6c50: 0x1080025f  beqz        $a0, . + 4 + (0x25F << 2)
label_2e6c54:
    if (ctx->pc == 0x2E6C54u) {
        ctx->pc = 0x2E6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C50u;
        // 0x2e6c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C58u;
        goto label_2e6c58;
    }
    ctx->pc = 0x2E6C50u;
    {
        const bool branch_taken_0x2e6c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C50u;
        // 0x2e6c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c50) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E6C58u;
label_2e6c58:
    // 0x2e6c58: 0xc087502  jal         func_21D408
label_2e6c5c:
    if (ctx->pc == 0x2E6C5Cu) {
        ctx->pc = 0x2E6C60u;
        goto label_2e6c60;
    }
    ctx->pc = 0x2E6C58u;
    SET_GPR_U32(ctx, 31, 0x2E6C60u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E6C58u, 0x2E6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C60u;
label_2e6c60:
    // 0x2e6c60: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2e6c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e6c64:
    // 0x2e6c64: 0xc087502  jal         func_21D408
label_2e6c68:
    if (ctx->pc == 0x2E6C68u) {
        ctx->pc = 0x2E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C64u;
        // 0x2e6c68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C6Cu;
        goto label_2e6c6c;
    }
    ctx->pc = 0x2E6C64u;
    SET_GPR_U32(ctx, 31, 0x2E6C6Cu);
    ctx->pc = 0x2E6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C64u;
    // 0x2e6c68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E6C64u, 0x2E6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C6Cu;
label_2e6c6c:
    // 0x2e6c6c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e6c70:
    // 0x2e6c70: 0x56030014  bnel        $s0, $v1, . + 4 + (0x14 << 2)
label_2e6c74:
    if (ctx->pc == 0x2E6C74u) {
        ctx->pc = 0x2E6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C70u;
        // 0x2e6c74: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C78u;
        goto label_2e6c78;
    }
    ctx->pc = 0x2E6C70u;
    {
        const bool branch_taken_0x2e6c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e6c70) {
            ctx->pc = 0x2E6C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C70u;
            // 0x2e6c74: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6CC4u;
            goto label_2e6cc4;
        }
    }
    ctx->pc = 0x2E6C78u;
label_2e6c78:
    // 0x2e6c78: 0xc089bfc  jal         func_226FF0
label_2e6c7c:
    if (ctx->pc == 0x2E6C7Cu) {
        ctx->pc = 0x2E6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C78u;
        // 0x2e6c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C80u;
        goto label_2e6c80;
    }
    ctx->pc = 0x2E6C78u;
    SET_GPR_U32(ctx, 31, 0x2E6C80u);
    ctx->pc = 0x2E6C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C78u;
    // 0x2e6c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E6C78u, 0x2E6C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C80u;
label_2e6c80:
    // 0x2e6c80: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2e6c84:
    if (ctx->pc == 0x2E6C84u) {
        ctx->pc = 0x2E6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C80u;
        // 0x2e6c84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C88u;
        goto label_2e6c88;
    }
    ctx->pc = 0x2E6C80u;
    {
        const bool branch_taken_0x2e6c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c80) {
            ctx->pc = 0x2E6C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C80u;
            // 0x2e6c84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6CC4u;
            goto label_2e6cc4;
        }
    }
    ctx->pc = 0x2E6C88u;
label_2e6c88:
    // 0x2e6c88: 0x92420058  lbu         $v0, 0x58($s2)
    ctx->pc = 0x2e6c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_2e6c8c:
    // 0x2e6c8c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2e6c90:
    if (ctx->pc == 0x2E6C90u) {
        ctx->pc = 0x2E6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C8Cu;
        // 0x2e6c90: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6C94u;
        goto label_2e6c94;
    }
    ctx->pc = 0x2E6C8Cu;
    {
        const bool branch_taken_0x2e6c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c8c) {
            ctx->pc = 0x2E6C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6C8Cu;
            // 0x2e6c90: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6CC4u;
            goto label_2e6cc4;
        }
    }
    ctx->pc = 0x2E6C94u;
label_2e6c94:
    // 0x2e6c94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6c98:
    // 0x2e6c98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e6c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e6c9c:
    // 0x2e6c9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e6ca0:
    // 0x2e6ca0: 0x40f809  jalr        $v0
label_2e6ca4:
    if (ctx->pc == 0x2E6CA4u) {
        ctx->pc = 0x2E6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CA0u;
        // 0x2e6ca4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CA8u;
        goto label_2e6ca8;
    }
    ctx->pc = 0x2E6CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6CA8u);
        ctx->pc = 0x2E6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CA0u;
        // 0x2e6ca4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6CA0u, 0x2E6CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6CA8u;
label_2e6ca8:
    // 0x2e6ca8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2e6cac:
    // 0x2e6cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6cb0:
    // 0x2e6cb0: 0xc08e150  jal         func_238540
label_2e6cb4:
    if (ctx->pc == 0x2E6CB4u) {
        ctx->pc = 0x2E6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CB0u;
        // 0x2e6cb4: 0x24a57288  addiu       $a1, $a1, 0x7288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CB8u;
        goto label_2e6cb8;
    }
    ctx->pc = 0x2E6CB0u;
    SET_GPR_U32(ctx, 31, 0x2E6CB8u);
    ctx->pc = 0x2E6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6CB0u;
    // 0x2e6cb4: 0x24a57288  addiu       $a1, $a1, 0x7288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2E6CB0u, 0x2E6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CB8u;
label_2e6cb8:
    // 0x2e6cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6cbc:
    // 0x2e6cbc: 0xa2430058  sb          $v1, 0x58($s2)
    ctx->pc = 0x2e6cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 3));
label_2e6cc0:
    // 0x2e6cc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6cc4:
    // 0x2e6cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e6cc8:
    // 0x2e6cc8: 0x24061388  addiu       $a2, $zero, 0x1388
    ctx->pc = 0x2e6cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_2e6ccc:
    // 0x2e6ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6cd0:
    // 0x2e6cd0: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2e6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2e6cd4:
    // 0x2e6cd4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6cd8:
    // 0x2e6cd8: 0xc0a34ba  jal         func_28D2E8
label_2e6cdc:
    if (ctx->pc == 0x2E6CDCu) {
        ctx->pc = 0x2E6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CD8u;
        // 0x2e6cdc: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CE0u;
        goto label_2e6ce0;
    }
    ctx->pc = 0x2E6CD8u;
    SET_GPR_U32(ctx, 31, 0x2E6CE0u);
    ctx->pc = 0x2E6CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6CD8u;
    // 0x2e6cdc: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2E6CD8u, 0x2E6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CE0u;
label_2e6ce0:
    // 0x2e6ce0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2e6ce4:
    // 0x2e6ce4: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e6ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e6ce8:
    // 0x2e6ce8: 0x10400238  beqz        $v0, . + 4 + (0x238 << 2)
label_2e6cec:
    if (ctx->pc == 0x2E6CECu) {
        ctx->pc = 0x2E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CE8u;
        // 0x2e6cec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6CF0u;
        goto label_2e6cf0;
    }
    ctx->pc = 0x2E6CE8u;
    {
        const bool branch_taken_0x2e6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CE8u;
        // 0x2e6cec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ce8) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E6CF0u;
label_2e6cf0:
    // 0x2e6cf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6cf4:
    // 0x2e6cf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6cf8:
    // 0x2e6cf8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e6cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e6cfc:
    // 0x2e6cfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d00:
    // 0x2e6d00: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x2e6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_2e6d04:
    // 0x2e6d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d08:
    // 0x2e6d08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6d0c:
    // 0x2e6d0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6d10:
    // 0x2e6d10: 0xc088178  jal         func_2205E0
label_2e6d14:
    if (ctx->pc == 0x2E6D14u) {
        ctx->pc = 0x2E6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D10u;
        // 0x2e6d14: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D18u;
        goto label_2e6d18;
    }
    ctx->pc = 0x2E6D10u;
    SET_GPR_U32(ctx, 31, 0x2E6D18u);
    ctx->pc = 0x2E6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D10u;
    // 0x2e6d14: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E6D10u, 0x2E6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D18u;
label_2e6d18:
    // 0x2e6d18: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e6d1c:
    // 0x2e6d1c: 0x24052328  addiu       $a1, $zero, 0x2328
    ctx->pc = 0x2e6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9000));
label_2e6d20:
    // 0x2e6d20: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e6d24:
    // 0x2e6d24: 0x24062af8  addiu       $a2, $zero, 0x2AF8
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11000));
label_2e6d28:
    // 0x2e6d28: 0xc0cd4fc  jal         func_3353F0
label_2e6d2c:
    if (ctx->pc == 0x2E6D2Cu) {
        ctx->pc = 0x2E6D30u;
        goto label_2e6d30;
    }
    ctx->pc = 0x2E6D28u;
    SET_GPR_U32(ctx, 31, 0x2E6D30u);
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E6D28u, 0x2E6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D30u;
label_2e6d30:
    // 0x2e6d30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e6d34:
    // 0x2e6d34: 0x10000225  b           . + 4 + (0x225 << 2)
label_2e6d38:
    if (ctx->pc == 0x2E6D38u) {
        ctx->pc = 0x2E6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D34u;
        // 0x2e6d38: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D3Cu;
        goto label_2e6d3c;
    }
    ctx->pc = 0x2E6D34u;
    {
        const bool branch_taken_0x2e6d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D34u;
        // 0x2e6d38: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d34) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E6D3Cu;
label_2e6d3c:
    // 0x2e6d3c: 0x54620050  bnel        $v1, $v0, . + 4 + (0x50 << 2)
label_2e6d40:
    if (ctx->pc == 0x2E6D40u) {
        ctx->pc = 0x2E6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D3Cu;
        // 0x2e6d40: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D44u;
        goto label_2e6d44;
    }
    ctx->pc = 0x2E6D3Cu;
    {
        const bool branch_taken_0x2e6d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6d3c) {
            ctx->pc = 0x2E6D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6D3Cu;
            // 0x2e6d40: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E80u;
            goto label_2e6e80;
        }
    }
    ctx->pc = 0x2E6D44u;
label_2e6d44:
    // 0x2e6d44: 0x9243005a  lbu         $v1, 0x5A($s2)
    ctx->pc = 0x2e6d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_2e6d48:
    // 0x2e6d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6d4c:
    // 0x2e6d4c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_2e6d50:
    if (ctx->pc == 0x2E6D50u) {
        ctx->pc = 0x2E6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D4Cu;
        // 0x2e6d50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D54u;
        goto label_2e6d54;
    }
    ctx->pc = 0x2E6D4Cu;
    {
        const bool branch_taken_0x2e6d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D4Cu;
        // 0x2e6d50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d4c) {
            ctx->pc = 0x2E6DB0u;
            goto label_2e6db0;
        }
    }
    ctx->pc = 0x2E6D54u;
label_2e6d54:
    // 0x2e6d54: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2e6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e6d58:
    // 0x2e6d58: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2e6d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2e6d5c:
    // 0x2e6d5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2e6d60:
    if (ctx->pc == 0x2E6D60u) {
        ctx->pc = 0x2E6D64u;
        goto label_2e6d64;
    }
    ctx->pc = 0x2E6D5Cu;
    {
        const bool branch_taken_0x2e6d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d5c) {
            ctx->pc = 0x2E6DB0u;
            goto label_2e6db0;
        }
    }
    ctx->pc = 0x2E6D64u;
label_2e6d64:
    // 0x2e6d64: 0xc088b90  jal         func_222E40
label_2e6d68:
    if (ctx->pc == 0x2E6D68u) {
        ctx->pc = 0x2E6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D64u;
        // 0x2e6d68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D6Cu;
        goto label_2e6d6c;
    }
    ctx->pc = 0x2E6D64u;
    SET_GPR_U32(ctx, 31, 0x2E6D6Cu);
    ctx->pc = 0x2E6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D64u;
    // 0x2e6d68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2E6D64u, 0x2E6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D6Cu;
label_2e6d6c:
    // 0x2e6d6c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e6d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e6d70:
    // 0x2e6d70: 0x0  nop
    ctx->pc = 0x2e6d70u;
    // NOP
label_2e6d74:
    // 0x2e6d74: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2e6d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2e6d78:
    // 0x2e6d78: 0xc088b98  jal         func_222E60
label_2e6d7c:
    if (ctx->pc == 0x2E6D7Cu) {
        ctx->pc = 0x2E6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D78u;
        // 0x2e6d7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6D80u;
        goto label_2e6d80;
    }
    ctx->pc = 0x2E6D78u;
    SET_GPR_U32(ctx, 31, 0x2E6D80u);
    ctx->pc = 0x2E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D78u;
    // 0x2e6d7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x2E6D78u, 0x2E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D80u;
label_2e6d80:
    // 0x2e6d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6d84:
    // 0x2e6d84: 0x0  nop
    ctx->pc = 0x2e6d84u;
    // NOP
label_2e6d88:
    // 0x2e6d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e6d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e6d8c:
    // 0x2e6d8c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2e6d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2e6d90:
    // 0x2e6d90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e6d94:
    // 0x2e6d94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e6d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e6d98:
    // 0x2e6d98: 0x0  nop
    ctx->pc = 0x2e6d98u;
    // NOP
label_2e6d9c:
    // 0x2e6d9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e6da0:
    // 0x2e6da0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e6da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6da4:
    // 0x2e6da4: 0x0  nop
    ctx->pc = 0x2e6da4u;
    // NOP
label_2e6da8:
    // 0x2e6da8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e6dac:
    if (ctx->pc == 0x2E6DACu) {
        ctx->pc = 0x2E6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DA8u;
        // 0x2e6dac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DB0u;
        goto label_2e6db0;
    }
    ctx->pc = 0x2E6DA8u;
    {
        const bool branch_taken_0x2e6da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6da8) {
            ctx->pc = 0x2E6DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DA8u;
            // 0x2e6dac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6DB0u;
            goto label_2e6db0;
        }
    }
    ctx->pc = 0x2E6DB0u;
label_2e6db0:
    // 0x2e6db0: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_2e6db4:
    if (ctx->pc == 0x2E6DB4u) {
        ctx->pc = 0x2E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DB0u;
        // 0x2e6db4: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DB8u;
        goto label_2e6db8;
    }
    ctx->pc = 0x2E6DB0u;
    {
        const bool branch_taken_0x2e6db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6db0) {
            ctx->pc = 0x2E6DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DB0u;
            // 0x2e6db4: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E24u;
            goto label_2e6e24;
        }
    }
    ctx->pc = 0x2E6DB8u;
label_2e6db8:
    // 0x2e6db8: 0x92420055  lbu         $v0, 0x55($s2)
    ctx->pc = 0x2e6db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
label_2e6dbc:
    // 0x2e6dbc: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_2e6dc0:
    if (ctx->pc == 0x2E6DC0u) {
        ctx->pc = 0x2E6DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DBCu;
        // 0x2e6dc0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DC4u;
        goto label_2e6dc4;
    }
    ctx->pc = 0x2E6DBCu;
    {
        const bool branch_taken_0x2e6dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6dbc) {
            ctx->pc = 0x2E6DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DBCu;
            // 0x2e6dc0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E80u;
            goto label_2e6e80;
        }
    }
    ctx->pc = 0x2E6DC4u;
label_2e6dc4:
    // 0x2e6dc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e6dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dc8:
    // 0x2e6dc8: 0xc088aa4  jal         func_222A90
label_2e6dcc:
    if (ctx->pc == 0x2E6DCCu) {
        ctx->pc = 0x2E6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DC8u;
        // 0x2e6dcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DD0u;
        goto label_2e6dd0;
    }
    ctx->pc = 0x2E6DC8u;
    SET_GPR_U32(ctx, 31, 0x2E6DD0u);
    ctx->pc = 0x2E6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DC8u;
    // 0x2e6dcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2E6DC8u, 0x2E6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DD0u;
label_2e6dd0:
    // 0x2e6dd0: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
label_2e6dd4:
    if (ctx->pc == 0x2E6DD4u) {
        ctx->pc = 0x2E6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD0u;
        // 0x2e6dd4: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DD8u;
        goto label_2e6dd8;
    }
    ctx->pc = 0x2E6DD0u;
    {
        const bool branch_taken_0x2e6dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6dd0) {
            ctx->pc = 0x2E6DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DD0u;
            // 0x2e6dd4: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E6DD8u;
label_2e6dd8:
    // 0x2e6dd8: 0xc0a47b4  jal         func_291ED0
label_2e6ddc:
    if (ctx->pc == 0x2E6DDCu) {
        ctx->pc = 0x2E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD8u;
        // 0x2e6ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DE0u;
        goto label_2e6de0;
    }
    ctx->pc = 0x2E6DD8u;
    SET_GPR_U32(ctx, 31, 0x2E6DE0u);
    ctx->pc = 0x2E6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DD8u;
    // 0x2e6ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E6DD8u, 0x2E6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DE0u;
label_2e6de0:
    // 0x2e6de0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e6de4:
    if (ctx->pc == 0x2E6DE4u) {
        ctx->pc = 0x2E6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE0u;
        // 0x2e6de4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DE8u;
        goto label_2e6de8;
    }
    ctx->pc = 0x2E6DE0u;
    {
        const bool branch_taken_0x2e6de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE0u;
        // 0x2e6de4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6de0) {
            ctx->pc = 0x2E6E10u;
            goto label_2e6e10;
        }
    }
    ctx->pc = 0x2E6DE8u;
label_2e6de8:
    // 0x2e6de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6dec:
    // 0x2e6dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6df0:
    // 0x2e6df0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e6df4:
    // 0x2e6df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6df8:
    // 0x2e6df8: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_2e6dfc:
    // 0x2e6dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e00:
    // 0x2e6e00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6e04:
    // 0x2e6e04: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6e08:
    // 0x2e6e08: 0xc088178  jal         func_2205E0
label_2e6e0c:
    if (ctx->pc == 0x2E6E0Cu) {
        ctx->pc = 0x2E6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E08u;
        // 0x2e6e0c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E10u;
        goto label_2e6e10;
    }
    ctx->pc = 0x2E6E08u;
    SET_GPR_U32(ctx, 31, 0x2E6E10u);
    ctx->pc = 0x2E6E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E08u;
    // 0x2e6e0c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E6E08u, 0x2E6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E10u;
label_2e6e10:
    // 0x2e6e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6e14:
    // 0x2e6e14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6e18:
    // 0x2e6e18: 0xa26201b2  sb          $v0, 0x1B2($s3)
    ctx->pc = 0x2e6e18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 434), (uint8_t)GPR_U32(ctx, 2));
label_2e6e1c:
    // 0x2e6e1c: 0x100001eb  b           . + 4 + (0x1EB << 2)
label_2e6e20:
    if (ctx->pc == 0x2E6E20u) {
        ctx->pc = 0x2E6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E1Cu;
        // 0x2e6e20: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E24u;
        goto label_2e6e24;
    }
    ctx->pc = 0x2E6E1Cu;
    {
        const bool branch_taken_0x2e6e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E1Cu;
        // 0x2e6e20: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e1c) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E6E24u;
label_2e6e24:
    // 0x2e6e24: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e6e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e6e28:
    // 0x2e6e28: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2e6e2c:
    if (ctx->pc == 0x2E6E2Cu) {
        ctx->pc = 0x2E6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E28u;
        // 0x2e6e2c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E30u;
        goto label_2e6e30;
    }
    ctx->pc = 0x2E6E28u;
    {
        const bool branch_taken_0x2e6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e28) {
            ctx->pc = 0x2E6E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E28u;
            // 0x2e6e2c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E80u;
            goto label_2e6e80;
        }
    }
    ctx->pc = 0x2E6E30u;
label_2e6e30:
    // 0x2e6e30: 0xc0a367c  jal         func_28D9F0
label_2e6e34:
    if (ctx->pc == 0x2E6E34u) {
        ctx->pc = 0x2E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E30u;
        // 0x2e6e34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E38u;
        goto label_2e6e38;
    }
    ctx->pc = 0x2E6E30u;
    SET_GPR_U32(ctx, 31, 0x2E6E38u);
    ctx->pc = 0x2E6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E30u;
    // 0x2e6e34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E6E30u, 0x2E6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E38u;
label_2e6e38:
    // 0x2e6e38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e6e3c:
    if (ctx->pc == 0x2E6E3Cu) {
        ctx->pc = 0x2E6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E38u;
        // 0x2e6e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E40u;
        goto label_2e6e40;
    }
    ctx->pc = 0x2E6E38u;
    {
        const bool branch_taken_0x2e6e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E38u;
        // 0x2e6e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e38) {
            ctx->pc = 0x2E6E60u;
            goto label_2e6e60;
        }
    }
    ctx->pc = 0x2E6E40u;
label_2e6e40:
    // 0x2e6e40: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6e44:
    // 0x2e6e44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e6e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e6e48:
    // 0x2e6e48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e6e4c:
    // 0x2e6e4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6e50:
    // 0x2e6e50: 0x24060158  addiu       $a2, $zero, 0x158
    ctx->pc = 0x2e6e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_2e6e54:
    // 0x2e6e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e58:
    // 0x2e6e58: 0xc0be8c0  jal         func_2FA300
label_2e6e5c:
    if (ctx->pc == 0x2E6E5Cu) {
        ctx->pc = 0x2E6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E58u;
        // 0x2e6e5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E60u;
        goto label_2e6e60;
    }
    ctx->pc = 0x2E6E58u;
    SET_GPR_U32(ctx, 31, 0x2E6E60u);
    ctx->pc = 0x2E6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E58u;
    // 0x2e6e5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2E6E58u, 0x2E6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E60u;
label_2e6e60:
    // 0x2e6e60: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e6e64:
    // 0x2e6e64: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x2e6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2e6e68:
    // 0x2e6e68: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e6e6c:
    // 0x2e6e6c: 0xc0cd4fc  jal         func_3353F0
label_2e6e70:
    if (ctx->pc == 0x2E6E70u) {
        ctx->pc = 0x2E6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E6Cu;
        // 0x2e6e70: 0x240609c4  addiu       $a2, $zero, 0x9C4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E74u;
        goto label_2e6e74;
    }
    ctx->pc = 0x2E6E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6E74u);
    ctx->pc = 0x2E6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E6Cu;
    // 0x2e6e70: 0x240609c4  addiu       $a2, $zero, 0x9C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E6E6Cu, 0x2E6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E74u;
label_2e6e74:
    // 0x2e6e74: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e6e78:
    // 0x2e6e78: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2e6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_2e6e7c:
    // 0x2e6e7c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e6e80:
    // 0x2e6e80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e6e84:
    // 0x2e6e84: 0x54620055  bnel        $v1, $v0, . + 4 + (0x55 << 2)
label_2e6e88:
    if (ctx->pc == 0x2E6E88u) {
        ctx->pc = 0x2E6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E84u;
        // 0x2e6e88: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E8Cu;
        goto label_2e6e8c;
    }
    ctx->pc = 0x2E6E84u;
    {
        const bool branch_taken_0x2e6e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6e84) {
            ctx->pc = 0x2E6E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E84u;
            // 0x2e6e88: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FDCu;
            goto label_2e6fdc;
        }
    }
    ctx->pc = 0x2E6E8Cu;
label_2e6e8c:
    // 0x2e6e8c: 0x92420056  lbu         $v0, 0x56($s2)
    ctx->pc = 0x2e6e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 86)));
label_2e6e90:
    // 0x2e6e90: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
label_2e6e94:
    if (ctx->pc == 0x2E6E94u) {
        ctx->pc = 0x2E6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E90u;
        // 0x2e6e94: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E98u;
        goto label_2e6e98;
    }
    ctx->pc = 0x2E6E90u;
    {
        const bool branch_taken_0x2e6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e90) {
            ctx->pc = 0x2E6E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E90u;
            // 0x2e6e94: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FD8u;
            goto label_2e6fd8;
        }
    }
    ctx->pc = 0x2E6E98u;
label_2e6e98:
    // 0x2e6e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6e9c:
    // 0x2e6e9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e6ea0:
    // 0x2e6ea0: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x2e6ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
label_2e6ea4:
    // 0x2e6ea4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ea8:
    // 0x2e6ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6eac:
    // 0x2e6eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6eb0:
    // 0x2e6eb0: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x2e6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_2e6eb4:
    // 0x2e6eb4: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2e6eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e6eb8:
    // 0x2e6eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ebc:
    // 0x2e6ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6ec0:
    // 0x2e6ec0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6ec4:
    // 0x2e6ec4: 0xc088178  jal         func_2205E0
label_2e6ec8:
    if (ctx->pc == 0x2E6EC8u) {
        ctx->pc = 0x2E6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC4u;
        // 0x2e6ec8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ECCu;
        goto label_2e6ecc;
    }
    ctx->pc = 0x2E6EC4u;
    SET_GPR_U32(ctx, 31, 0x2E6ECCu);
    ctx->pc = 0x2E6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EC4u;
    // 0x2e6ec8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E6EC4u, 0x2E6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6ECCu;
label_2e6ecc:
    // 0x2e6ecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ed0:
    // 0x2e6ed0: 0xc088680  jal         func_221A00
label_2e6ed4:
    if (ctx->pc == 0x2E6ED4u) {
        ctx->pc = 0x2E6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED0u;
        // 0x2e6ed4: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ED8u;
        goto label_2e6ed8;
    }
    ctx->pc = 0x2E6ED0u;
    SET_GPR_U32(ctx, 31, 0x2E6ED8u);
    ctx->pc = 0x2E6ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6ED0u;
    // 0x2e6ed4: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E6ED0u, 0x2E6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6ED8u;
label_2e6ed8:
    // 0x2e6ed8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2e6edc:
    if (ctx->pc == 0x2E6EDCu) {
        ctx->pc = 0x2E6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED8u;
        // 0x2e6edc: 0x8e45002c  lw          $a1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EE0u;
        goto label_2e6ee0;
    }
    ctx->pc = 0x2E6ED8u;
    {
        const bool branch_taken_0x2e6ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ed8) {
            ctx->pc = 0x2E6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6ED8u;
            // 0x2e6edc: 0x8e45002c  lw          $a1, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F14u;
            goto label_2e6f14;
        }
    }
    ctx->pc = 0x2E6EE0u;
label_2e6ee0:
    // 0x2e6ee0: 0xc0a367c  jal         func_28D9F0
label_2e6ee4:
    if (ctx->pc == 0x2E6EE4u) {
        ctx->pc = 0x2E6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EE0u;
        // 0x2e6ee4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EE8u;
        goto label_2e6ee8;
    }
    ctx->pc = 0x2E6EE0u;
    SET_GPR_U32(ctx, 31, 0x2E6EE8u);
    ctx->pc = 0x2E6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EE0u;
    // 0x2e6ee4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E6EE0u, 0x2E6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EE8u;
label_2e6ee8:
    // 0x2e6ee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e6eec:
    if (ctx->pc == 0x2E6EECu) {
        ctx->pc = 0x2E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EE8u;
        // 0x2e6eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EF0u;
        goto label_2e6ef0;
    }
    ctx->pc = 0x2E6EE8u;
    {
        const bool branch_taken_0x2e6ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EE8u;
        // 0x2e6eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ee8) {
            ctx->pc = 0x2E6F10u;
            goto label_2e6f10;
        }
    }
    ctx->pc = 0x2E6EF0u;
label_2e6ef0:
    // 0x2e6ef0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e6ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6ef4:
    // 0x2e6ef4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e6ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e6ef8:
    // 0x2e6ef8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e6efc:
    // 0x2e6efc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e6efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e6f00:
    // 0x2e6f00: 0x24060158  addiu       $a2, $zero, 0x158
    ctx->pc = 0x2e6f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_2e6f04:
    // 0x2e6f04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f08:
    // 0x2e6f08: 0xc0be8c0  jal         func_2FA300
label_2e6f0c:
    if (ctx->pc == 0x2E6F0Cu) {
        ctx->pc = 0x2E6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F08u;
        // 0x2e6f0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F10u;
        goto label_2e6f10;
    }
    ctx->pc = 0x2E6F08u;
    SET_GPR_U32(ctx, 31, 0x2E6F10u);
    ctx->pc = 0x2E6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F08u;
    // 0x2e6f0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2E6F08u, 0x2E6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F10u;
label_2e6f10:
    // 0x2e6f10: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x2e6f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2e6f14:
    // 0x2e6f14: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_2e6f18:
    if (ctx->pc == 0x2E6F18u) {
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F14u;
        // 0x2e6f18: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F1Cu;
        goto label_2e6f1c;
    }
    ctx->pc = 0x2E6F14u;
    {
        const bool branch_taken_0x2e6f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F14u;
        // 0x2e6f18: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f14) {
            ctx->pc = 0x2E6F60u;
            goto label_2e6f60;
        }
    }
    ctx->pc = 0x2E6F1Cu;
label_2e6f1c:
    // 0x2e6f1c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2e6f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2e6f20:
    // 0x2e6f20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e6f24:
    // 0x2e6f24: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2e6f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2e6f28:
    // 0x2e6f28: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2e6f2c:
    // 0x2e6f2c: 0x40f809  jalr        $v0
label_2e6f30:
    if (ctx->pc == 0x2E6F30u) {
        ctx->pc = 0x2E6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F2Cu;
        // 0x2e6f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F34u;
        goto label_2e6f34;
    }
    ctx->pc = 0x2E6F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6F34u);
        ctx->pc = 0x2E6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F2Cu;
        // 0x2e6f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F2Cu, 0x2E6F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6F34u;
label_2e6f34:
    // 0x2e6f34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e6f38:
    if (ctx->pc == 0x2E6F38u) {
        ctx->pc = 0x2E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F34u;
        // 0x2e6f38: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F3Cu;
        goto label_2e6f3c;
    }
    ctx->pc = 0x2E6F34u;
    {
        const bool branch_taken_0x2e6f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F34u;
        // 0x2e6f38: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f34) {
            ctx->pc = 0x2E6F60u;
            goto label_2e6f60;
        }
    }
    ctx->pc = 0x2E6F3Cu;
label_2e6f3c:
    // 0x2e6f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f40:
    // 0x2e6f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f44:
    // 0x2e6f44: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e6f48:
    // 0x2e6f48: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2e6f4c:
    // 0x2e6f4c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2e6f50:
    // 0x2e6f50: 0x60f809  jalr        $v1
label_2e6f54:
    if (ctx->pc == 0x2E6F54u) {
        ctx->pc = 0x2E6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F50u;
        // 0x2e6f54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F58u;
        goto label_2e6f58;
    }
    ctx->pc = 0x2E6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6F58u);
        ctx->pc = 0x2E6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F50u;
        // 0x2e6f54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F50u, 0x2E6F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6F58u;
label_2e6f58:
    // 0x2e6f58: 0x10000020  b           . + 4 + (0x20 << 2)
label_2e6f5c:
    if (ctx->pc == 0x2E6F5Cu) {
        ctx->pc = 0x2E6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F58u;
        // 0x2e6f5c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F60u;
        goto label_2e6f60;
    }
    ctx->pc = 0x2E6F58u;
    {
        const bool branch_taken_0x2e6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F58u;
        // 0x2e6f5c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f58) {
            ctx->pc = 0x2E6FDCu;
            goto label_2e6fdc;
        }
    }
    ctx->pc = 0x2E6F60u;
label_2e6f60:
    // 0x2e6f60: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2e6f64:
    // 0x2e6f64: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
label_2e6f68:
    if (ctx->pc == 0x2E6F68u) {
        ctx->pc = 0x2E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F64u;
        // 0x2e6f68: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F6Cu;
        goto label_2e6f6c;
    }
    ctx->pc = 0x2E6F64u;
    {
        const bool branch_taken_0x2e6f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F64u;
        // 0x2e6f68: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f64) {
            ctx->pc = 0x2E6FD8u;
            goto label_2e6fd8;
        }
    }
    ctx->pc = 0x2E6F6Cu;
label_2e6f6c:
    // 0x2e6f6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e6f70:
    // 0x2e6f70: 0x84d00092  lh          $s0, 0x92($a2)
    ctx->pc = 0x2e6f70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_2e6f74:
    // 0x2e6f74: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x2e6f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e6f78:
    // 0x2e6f78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e6f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e6f7c:
    // 0x2e6f7c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e6f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e6f80:
    // 0x2e6f80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e6f84:
    // 0x2e6f84: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2e6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2e6f88:
    // 0x2e6f88: 0x40f809  jalr        $v0
label_2e6f8c:
    if (ctx->pc == 0x2E6F8Cu) {
        ctx->pc = 0x2E6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F88u;
        // 0x2e6f8c: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F90u;
        goto label_2e6f90;
    }
    ctx->pc = 0x2E6F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6F90u);
        ctx->pc = 0x2E6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F88u;
        // 0x2e6f8c: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F88u, 0x2E6F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6F90u;
label_2e6f90:
    // 0x2e6f90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e6f94:
    // 0x2e6f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f98:
    // 0x2e6f98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e6f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e6f9c:
    // 0x2e6f9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e6fa0:
    // 0x2e6fa0: 0x40f809  jalr        $v0
label_2e6fa4:
    if (ctx->pc == 0x2E6FA4u) {
        ctx->pc = 0x2E6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FA0u;
        // 0x2e6fa4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FA8u;
        goto label_2e6fa8;
    }
    ctx->pc = 0x2E6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6FA8u);
        ctx->pc = 0x2E6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FA0u;
        // 0x2e6fa4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6FA0u, 0x2E6FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6FA8u;
label_2e6fa8:
    // 0x2e6fa8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2e6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2e6fac:
    // 0x2e6fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fb0:
    // 0x2e6fb0: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2e6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2e6fb4:
    // 0x2e6fb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e6fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fb8:
    // 0x2e6fb8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e6fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fbc:
    // 0x2e6fbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e6fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6fc0:
    // 0x2e6fc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e6fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fc4:
    // 0x2e6fc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e6fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6fc8:
    // 0x2e6fc8: 0xc106e2c  jal         func_41B8B0
label_2e6fcc:
    if (ctx->pc == 0x2E6FCCu) {
        ctx->pc = 0x2E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC8u;
        // 0x2e6fcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FD0u;
        goto label_2e6fd0;
    }
    ctx->pc = 0x2E6FC8u;
    SET_GPR_U32(ctx, 31, 0x2E6FD0u);
    ctx->pc = 0x2E6FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FC8u;
    // 0x2e6fcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x2E6FC8u, 0x2E6FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FD0u;
label_2e6fd0:
    // 0x2e6fd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e6fd4:
    if (ctx->pc == 0x2E6FD4u) {
        ctx->pc = 0x2E6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD0u;
        // 0x2e6fd4: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FD8u;
        goto label_2e6fd8;
    }
    ctx->pc = 0x2E6FD0u;
    {
        const bool branch_taken_0x2e6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD0u;
        // 0x2e6fd4: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fd0) {
            ctx->pc = 0x2E6FDCu;
            goto label_2e6fdc;
        }
    }
    ctx->pc = 0x2E6FD8u;
label_2e6fd8:
    // 0x2e6fd8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e6fdc:
    // 0x2e6fdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6fe0:
    // 0x2e6fe0: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_2e6fe4:
    if (ctx->pc == 0x2E6FE4u) {
        ctx->pc = 0x2E6FE8u;
        goto label_2e6fe8;
    }
    ctx->pc = 0x2E6FE0u;
    {
        const bool branch_taken_0x2e6fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6fe0) {
            ctx->pc = 0x2E709Cu;
            goto label_2e709c;
        }
    }
    ctx->pc = 0x2E6FE8u;
label_2e6fe8:
    // 0x2e6fe8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2e6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2e6fec:
    // 0x2e6fec: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e6fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e6ff0:
    // 0x2e6ff0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2e6ff4:
    if (ctx->pc == 0x2E6FF4u) {
        ctx->pc = 0x2E6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FF0u;
        // 0x2e6ff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FF8u;
        goto label_2e6ff8;
    }
    ctx->pc = 0x2E6FF0u;
    {
        const bool branch_taken_0x2e6ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FF0u;
        // 0x2e6ff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ff0) {
            ctx->pc = 0x2E709Cu;
            goto label_2e709c;
        }
    }
    ctx->pc = 0x2E6FF8u;
label_2e6ff8:
    // 0x2e6ff8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2e6ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2e6ffc:
    // 0x2e6ffc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2e6ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2e7000:
    // 0x2e7000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7004:
    // 0x2e7004: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e7004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7008:
    // 0x2e7008: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2e7008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e700c:
    // 0x2e700c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e7010:
    // 0x2e7010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7014:
    // 0x2e7014: 0xc105df6  jal         func_4177D8
label_2e7018:
    if (ctx->pc == 0x2E7018u) {
        ctx->pc = 0x2E7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7014u;
        // 0x2e7018: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E701Cu;
        goto label_2e701c;
    }
    ctx->pc = 0x2E7014u;
    SET_GPR_U32(ctx, 31, 0x2E701Cu);
    ctx->pc = 0x2E7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7014u;
    // 0x2e7018: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2E7014u, 0x2E701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E701Cu;
label_2e701c:
    // 0x2e701c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e701cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7020:
    // 0x2e7020: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2e7024:
    if (ctx->pc == 0x2E7024u) {
        ctx->pc = 0x2E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7020u;
        // 0x2e7024: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7028u;
        goto label_2e7028;
    }
    ctx->pc = 0x2E7020u;
    {
        const bool branch_taken_0x2e7020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7020u;
        // 0x2e7024: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7020) {
            ctx->pc = 0x2E708Cu;
            goto label_2e708c;
        }
    }
    ctx->pc = 0x2E7028u;
label_2e7028:
    // 0x2e7028: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_2e702c:
    // 0x2e702c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e702cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7030:
    // 0x2e7030: 0x0  nop
    ctx->pc = 0x2e7030u;
    // NOP
label_2e7034:
    // 0x2e7034: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e7034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7038:
    // 0x2e7038: 0x0  nop
    ctx->pc = 0x2e7038u;
    // NOP
label_2e703c:
    // 0x2e703c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2e7040:
    if (ctx->pc == 0x2E7040u) {
        ctx->pc = 0x2E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E703Cu;
        // 0x2e7040: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7044u;
        goto label_2e7044;
    }
    ctx->pc = 0x2E703Cu;
    {
        const bool branch_taken_0x2e703c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E703Cu;
        // 0x2e7040: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e703c) {
            ctx->pc = 0x2E7090u;
            goto label_2e7090;
        }
    }
    ctx->pc = 0x2E7044u;
label_2e7044:
    // 0x2e7044: 0xc0a367c  jal         func_28D9F0
label_2e7048:
    if (ctx->pc == 0x2E7048u) {
        ctx->pc = 0x2E7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7044u;
        // 0x2e7048: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E704Cu;
        goto label_2e704c;
    }
    ctx->pc = 0x2E7044u;
    SET_GPR_U32(ctx, 31, 0x2E704Cu);
    ctx->pc = 0x2E7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7044u;
    // 0x2e7048: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E7044u, 0x2E704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E704Cu;
label_2e704c:
    // 0x2e704c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7050:
    // 0x2e7050: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2e7054:
    if (ctx->pc == 0x2E7054u) {
        ctx->pc = 0x2E7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7050u;
        // 0x2e7054: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7058u;
        goto label_2e7058;
    }
    ctx->pc = 0x2E7050u;
    {
        const bool branch_taken_0x2e7050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7050u;
        // 0x2e7054: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7050) {
            ctx->pc = 0x2E7090u;
            goto label_2e7090;
        }
    }
    ctx->pc = 0x2E7058u;
label_2e7058:
    // 0x2e7058: 0xc10587a  jal         func_4161E8
label_2e705c:
    if (ctx->pc == 0x2E705Cu) {
        ctx->pc = 0x2E705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7058u;
        // 0x2e705c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7060u;
        goto label_2e7060;
    }
    ctx->pc = 0x2E7058u;
    SET_GPR_U32(ctx, 31, 0x2E7060u);
    ctx->pc = 0x2E705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7058u;
    // 0x2e705c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E7058u, 0x2E7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7060u;
label_2e7060:
    // 0x2e7060: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e7064:
    // 0x2e7064: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e7064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7068:
    // 0x2e7068: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e706c:
    // 0x2e706c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7070:
    // 0x2e7070: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e7070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7074:
    // 0x2e7074: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7078:
    // 0x2e7078: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2e7078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e707c:
    // 0x2e707c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e707cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7080:
    // 0x2e7080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e7080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7084:
    // 0x2e7084: 0xc0bee7a  jal         func_2FB9E8
label_2e7088:
    if (ctx->pc == 0x2E7088u) {
        ctx->pc = 0x2E7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7084u;
        // 0x2e7088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E708Cu;
        goto label_2e708c;
    }
    ctx->pc = 0x2E7084u;
    SET_GPR_U32(ctx, 31, 0x2E708Cu);
    ctx->pc = 0x2E7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7084u;
    // 0x2e7088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E7084u, 0x2E708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E708Cu;
label_2e708c:
    // 0x2e708c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e7090:
    // 0x2e7090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7094:
    // 0x2e7094: 0x1000014e  b           . + 4 + (0x14E << 2)
label_2e7098:
    if (ctx->pc == 0x2E7098u) {
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E709Cu;
        goto label_2e709c;
    }
    ctx->pc = 0x2E7094u;
    {
        const bool branch_taken_0x2e7094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7094u;
        // 0x2e7098: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7094) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E709Cu;
label_2e709c:
    // 0x2e709c: 0x546000d9  bnel        $v1, $zero, . + 4 + (0xD9 << 2)
label_2e70a0:
    if (ctx->pc == 0x2E70A0u) {
        ctx->pc = 0x2E70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E709Cu;
        // 0x2e70a0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70A4u;
        goto label_2e70a4;
    }
    ctx->pc = 0x2E709Cu;
    {
        const bool branch_taken_0x2e709c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e709c) {
            ctx->pc = 0x2E70A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E709Cu;
            // 0x2e70a0: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7404u;
            goto label_2e7404;
        }
    }
    ctx->pc = 0x2E70A4u;
label_2e70a4:
    // 0x2e70a4: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x2e70a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_2e70a8:
    // 0x2e70a8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2e70ac:
    if (ctx->pc == 0x2E70ACu) {
        ctx->pc = 0x2E70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70A8u;
        // 0x2e70ac: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70B0u;
        goto label_2e70b0;
    }
    ctx->pc = 0x2E70A8u;
    {
        const bool branch_taken_0x2e70a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e70a8) {
            ctx->pc = 0x2E70ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E70A8u;
            // 0x2e70ac: 0x86a50092  lh          $a1, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E711Cu;
            goto label_2e711c;
        }
    }
    ctx->pc = 0x2E70B0u;
label_2e70b0:
    // 0x2e70b0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2e70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2e70b4:
    // 0x2e70b4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_2e70b8:
    if (ctx->pc == 0x2E70B8u) {
        ctx->pc = 0x2E70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B4u;
        // 0x2e70b8: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70BCu;
        goto label_2e70bc;
    }
    ctx->pc = 0x2E70B4u;
    {
        const bool branch_taken_0x2e70b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B4u;
        // 0x2e70b8: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70b4) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E70BCu;
label_2e70bc:
    // 0x2e70bc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2e70c0:
    if (ctx->pc == 0x2E70C0u) {
        ctx->pc = 0x2E70C4u;
        goto label_2e70c4;
    }
    ctx->pc = 0x2E70BCu;
    {
        const bool branch_taken_0x2e70bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e70bc) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E70C4u;
label_2e70c4:
    // 0x2e70c4: 0xc0a47b4  jal         func_291ED0
label_2e70c8:
    if (ctx->pc == 0x2E70C8u) {
        ctx->pc = 0x2E70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C4u;
        // 0x2e70c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70CCu;
        goto label_2e70cc;
    }
    ctx->pc = 0x2E70C4u;
    SET_GPR_U32(ctx, 31, 0x2E70CCu);
    ctx->pc = 0x2E70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70C4u;
    // 0x2e70c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2E70C4u, 0x2E70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70CCu;
label_2e70cc:
    // 0x2e70cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2e70d0:
    if (ctx->pc == 0x2E70D0u) {
        ctx->pc = 0x2E70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70CCu;
        // 0x2e70d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70D4u;
        goto label_2e70d4;
    }
    ctx->pc = 0x2E70CCu;
    {
        const bool branch_taken_0x2e70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70CCu;
        // 0x2e70d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70cc) {
            ctx->pc = 0x2E70FCu;
            goto label_2e70fc;
        }
    }
    ctx->pc = 0x2E70D4u;
label_2e70d4:
    // 0x2e70d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e70d8:
    // 0x2e70d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e70d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e70dc:
    // 0x2e70dc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e70dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e70e0:
    // 0x2e70e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e70e4:
    // 0x2e70e4: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2e70e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_2e70e8:
    // 0x2e70e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e70e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e70ec:
    // 0x2e70ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e70f0:
    // 0x2e70f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e70f4:
    // 0x2e70f4: 0xc088178  jal         func_2205E0
label_2e70f8:
    if (ctx->pc == 0x2E70F8u) {
        ctx->pc = 0x2E70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70F4u;
        // 0x2e70f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70FCu;
        goto label_2e70fc;
    }
    ctx->pc = 0x2E70F4u;
    SET_GPR_U32(ctx, 31, 0x2E70FCu);
    ctx->pc = 0x2E70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70F4u;
    // 0x2e70f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E70F4u, 0x2E70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70FCu;
label_2e70fc:
    // 0x2e70fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e70fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e7100:
    // 0x2e7100: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2e7104:
    // 0x2e7104: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e7104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e7108:
    // 0x2e7108: 0xc0cd4fc  jal         func_3353F0
label_2e710c:
    if (ctx->pc == 0x2E710Cu) {
        ctx->pc = 0x2E710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7108u;
        // 0x2e710c: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7110u;
        goto label_2e7110;
    }
    ctx->pc = 0x2E7108u;
    SET_GPR_U32(ctx, 31, 0x2E7110u);
    ctx->pc = 0x2E710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7108u;
    // 0x2e710c: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E7108u, 0x2E7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7110u;
label_2e7110:
    // 0x2e7110: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e7114:
    // 0x2e7114: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2e7118:
    if (ctx->pc == 0x2E7118u) {
        ctx->pc = 0x2E7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7114u;
        // 0x2e7118: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E711Cu;
        goto label_2e711c;
    }
    ctx->pc = 0x2E7114u;
    {
        const bool branch_taken_0x2e7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7114u;
        // 0x2e7118: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7114) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E711Cu;
label_2e711c:
    // 0x2e711c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e711cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e7120:
    // 0x2e7120: 0x24824b00  addiu       $v0, $a0, 0x4B00
    ctx->pc = 0x2e7120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2e7124:
    // 0x2e7124: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e7124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e7128:
    // 0x2e7128: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e7128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e712c:
    // 0x2e712c: 0xc104a86  jal         func_412A18
label_2e7130:
    if (ctx->pc == 0x2E7130u) {
        ctx->pc = 0x2E7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E712Cu;
        // 0x2e7130: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7134u;
        goto label_2e7134;
    }
    ctx->pc = 0x2E712Cu;
    SET_GPR_U32(ctx, 31, 0x2E7134u);
    ctx->pc = 0x2E7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E712Cu;
    // 0x2e7130: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E712Cu, 0x2E7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7134u;
label_2e7134:
    // 0x2e7134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e7134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7138:
    // 0x2e7138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e713c:
    // 0x2e713c: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
label_2e7140:
    if (ctx->pc == 0x2E7140u) {
        ctx->pc = 0x2E7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E713Cu;
        // 0x2e7140: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7144u;
        goto label_2e7144;
    }
    ctx->pc = 0x2E713Cu;
    {
        const bool branch_taken_0x2e713c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E713Cu;
        // 0x2e7140: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e713c) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E7144u;
label_2e7144:
    // 0x2e7144: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2e7144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e7148:
    // 0x2e7148: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2e714c:
    if (ctx->pc == 0x2E714Cu) {
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7150u;
        goto label_2e7150;
    }
    ctx->pc = 0x2E7148u;
    {
        const bool branch_taken_0x2e7148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7148) {
            ctx->pc = 0x2E7180u;
            goto label_2e7180;
        }
    }
    ctx->pc = 0x2E7150u;
label_2e7150:
    // 0x2e7150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e7154:
    if (ctx->pc == 0x2E7154u) {
        ctx->pc = 0x2E7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7150u;
        // 0x2e7154: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7158u;
        goto label_2e7158;
    }
    ctx->pc = 0x2E7150u;
    {
        const bool branch_taken_0x2e7150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7150u;
        // 0x2e7154: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7150) {
            ctx->pc = 0x2E7168u;
            goto label_2e7168;
        }
    }
    ctx->pc = 0x2E7158u;
label_2e7158:
    // 0x2e7158: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_2e715c:
    if (ctx->pc == 0x2E715Cu) {
        ctx->pc = 0x2E715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7158u;
        // 0x2e715c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7160u;
        goto label_2e7160;
    }
    ctx->pc = 0x2E7158u;
    {
        const bool branch_taken_0x2e7158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7158u;
        // 0x2e715c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7158) {
            ctx->pc = 0x2E7178u;
            goto label_2e7178;
        }
    }
    ctx->pc = 0x2E7160u;
label_2e7160:
    // 0x2e7160: 0x1000011c  b           . + 4 + (0x11C << 2)
label_2e7164:
    if (ctx->pc == 0x2E7164u) {
        ctx->pc = 0x2E7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7160u;
        // 0x2e7164: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7168u;
        goto label_2e7168;
    }
    ctx->pc = 0x2E7160u;
    {
        const bool branch_taken_0x2e7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7160u;
        // 0x2e7164: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7160) {
            ctx->pc = 0x2E75D4u;
            goto label_2e75d4;
        }
    }
    ctx->pc = 0x2E7168u;
label_2e7168:
    // 0x2e7168: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
label_2e716c:
    if (ctx->pc == 0x2E716Cu) {
        ctx->pc = 0x2E716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7168u;
        // 0x2e716c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7170u;
        goto label_2e7170;
    }
    ctx->pc = 0x2E7168u;
    {
        const bool branch_taken_0x2e7168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7168u;
        // 0x2e716c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7168) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E7170u;
label_2e7170:
    // 0x2e7170: 0x10000116  b           . + 4 + (0x116 << 2)
label_2e7174:
    if (ctx->pc == 0x2E7174u) {
        ctx->pc = 0x2E7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7170u;
        // 0x2e7174: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7178u;
        goto label_2e7178;
    }
    ctx->pc = 0x2E7170u;
    {
        const bool branch_taken_0x2e7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7170u;
        // 0x2e7174: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7170) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E7178u;
label_2e7178:
    // 0x2e7178: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e717c:
    if (ctx->pc == 0x2E717Cu) {
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7180u;
        goto label_2e7180;
    }
    ctx->pc = 0x2E7178u;
    {
        const bool branch_taken_0x2e7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7178u;
        // 0x2e717c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7178) {
            ctx->pc = 0x2E7188u;
            goto label_2e7188;
        }
    }
    ctx->pc = 0x2E7180u;
label_2e7180:
    // 0x2e7180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e7184:
    // 0x2e7184: 0xae550020  sw          $s5, 0x20($s2)
    ctx->pc = 0x2e7184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 21));
label_2e7188:
    // 0x2e7188: 0x10000110  b           . + 4 + (0x110 << 2)
label_2e718c:
    if (ctx->pc == 0x2E718Cu) {
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7190u;
        goto label_2e7190;
    }
    ctx->pc = 0x2E7188u;
    {
        const bool branch_taken_0x2e7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7188) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E7190u;
label_2e7190:
    // 0x2e7190: 0xc089bfc  jal         func_226FF0
label_2e7194:
    if (ctx->pc == 0x2E7194u) {
        ctx->pc = 0x2E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7190u;
        // 0x2e7194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7198u;
        goto label_2e7198;
    }
    ctx->pc = 0x2E7190u;
    SET_GPR_U32(ctx, 31, 0x2E7198u);
    ctx->pc = 0x2E7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7190u;
    // 0x2e7194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E7190u, 0x2E7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7198u;
label_2e7198:
    // 0x2e7198: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x2e7198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2e719c:
    // 0x2e719c: 0xc0e4060  jal         func_390180
label_2e71a0:
    if (ctx->pc == 0x2E71A0u) {
        ctx->pc = 0x2E71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E719Cu;
        // 0x2e71a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71A4u;
        goto label_2e71a4;
    }
    ctx->pc = 0x2E719Cu;
    SET_GPR_U32(ctx, 31, 0x2E71A4u);
    ctx->pc = 0x2E71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E719Cu;
    // 0x2e71a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E719Cu, 0x2E71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71A4u;
label_2e71a4:
    // 0x2e71a4: 0xc0e57ce  jal         func_395F38
label_2e71a8:
    if (ctx->pc == 0x2E71A8u) {
        ctx->pc = 0x2E71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A4u;
        // 0x2e71a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71ACu;
        goto label_2e71ac;
    }
    ctx->pc = 0x2E71A4u;
    SET_GPR_U32(ctx, 31, 0x2E71ACu);
    ctx->pc = 0x2E71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71A4u;
    // 0x2e71a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2E71A4u, 0x2E71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71ACu;
label_2e71ac:
    // 0x2e71ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e71acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e71b0:
    // 0x2e71b0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2e71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2e71b4:
    // 0x2e71b4: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x2e71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2e71b8:
    // 0x2e71b8: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_2e71bc:
    if (ctx->pc == 0x2E71BCu) {
        ctx->pc = 0x2E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71B8u;
        // 0x2e71bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71C0u;
        goto label_2e71c0;
    }
    ctx->pc = 0x2E71B8u;
    {
        const bool branch_taken_0x2e71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71B8u;
        // 0x2e71bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71b8) {
            ctx->pc = 0x2E7400u;
            goto label_2e7400;
        }
    }
    ctx->pc = 0x2E71C0u;
label_2e71c0:
    // 0x2e71c0: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2e71c4:
    // 0x2e71c4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e71c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e71c8:
    // 0x2e71c8: 0xc0cd4fc  jal         func_3353F0
label_2e71cc:
    if (ctx->pc == 0x2E71CCu) {
        ctx->pc = 0x2E71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71C8u;
        // 0x2e71cc: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71D0u;
        goto label_2e71d0;
    }
    ctx->pc = 0x2E71C8u;
    SET_GPR_U32(ctx, 31, 0x2E71D0u);
    ctx->pc = 0x2E71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71C8u;
    // 0x2e71cc: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E71C8u, 0x2E71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71D0u;
label_2e71d0:
    // 0x2e71d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e71d4:
    // 0x2e71d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e71d8:
    // 0x2e71d8: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2e71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_2e71dc:
    // 0x2e71dc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e71e0:
    // 0x2e71e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2e71e4:
    if (ctx->pc == 0x2E71E4u) {
        ctx->pc = 0x2E71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71E0u;
        // 0x2e71e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71E8u;
        goto label_2e71e8;
    }
    ctx->pc = 0x2E71E0u;
    {
        const bool branch_taken_0x2e71e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71e0) {
            ctx->pc = 0x2E71E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E71E0u;
            // 0x2e71e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E71E8u;
            goto label_2e71e8;
        }
    }
    ctx->pc = 0x2E71E8u;
label_2e71e8:
    // 0x2e71e8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2e71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2e71ec:
    // 0x2e71ec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e71ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2e71f0:
    // 0x2e71f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2e71f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2e71f4:
    // 0x2e71f4: 0x2c440005  sltiu       $a0, $v0, 0x5
    ctx->pc = 0x2e71f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2e71f8:
    // 0x2e71f8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
label_2e71fc:
    if (ctx->pc == 0x2E71FCu) {
        ctx->pc = 0x2E71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F8u;
        // 0x2e71fc: 0x3c04002e  lui         $a0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7200u;
        goto label_2e7200;
    }
    ctx->pc = 0x2E71F8u;
    {
        const bool branch_taken_0x2e71f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F8u;
        // 0x2e71fc: 0x3c04002e  lui         $a0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71f8) {
            ctx->pc = 0x2E7348u;
            goto label_2e7348;
        }
    }
    ctx->pc = 0x2E7200u;
label_2e7200:
    // 0x2e7200: 0x92420057  lbu         $v0, 0x57($s2)
    ctx->pc = 0x2e7200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 87)));
label_2e7204:
    // 0x2e7204: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x2e7204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7208:
    // 0x2e7208: 0x248458d0  addiu       $a0, $a0, 0x58D0
    ctx->pc = 0x2e7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
label_2e720c:
    // 0x2e720c: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2e720cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_2e7210:
    // 0x2e7210: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2e7210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2e7214:
    // 0x2e7214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7218:
    // 0x2e7218: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e7218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e721c:
    // 0x2e721c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2e721cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2e7220:
    // 0x2e7220: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e7224:
    // 0x2e7224: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x2e7224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
label_2e7228:
    // 0x2e7228: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e7228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e722c:
    // 0x2e722c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e7230:
    // 0x2e7230: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x2e7230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
label_2e7234:
    // 0x2e7234: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x2e7234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_2e7238:
    // 0x2e7238: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e7238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2e723c:
    // 0x2e723c: 0xc105b9a  jal         func_416E68
label_2e7240:
    if (ctx->pc == 0x2E7240u) {
        ctx->pc = 0x2E7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E723Cu;
        // 0x2e7240: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7244u;
        goto label_2e7244;
    }
    ctx->pc = 0x2E723Cu;
    SET_GPR_U32(ctx, 31, 0x2E7244u);
    ctx->pc = 0x2E7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E723Cu;
    // 0x2e7240: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E68u, 0x2E723Cu, 0x2E7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7244u;
label_2e7244:
    // 0x2e7244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e7244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e7248:
    // 0x2e7248: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2e724c:
    if (ctx->pc == 0x2E724Cu) {
        ctx->pc = 0x2E724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7248u;
        // 0x2e724c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7250u;
        goto label_2e7250;
    }
    ctx->pc = 0x2E7248u;
    {
        const bool branch_taken_0x2e7248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7248u;
        // 0x2e724c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7248) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E7250u;
label_2e7250:
    // 0x2e7250: 0xc0a4e54  jal         func_293950
label_2e7254:
    if (ctx->pc == 0x2E7254u) {
        ctx->pc = 0x2E7258u;
        goto label_2e7258;
    }
    ctx->pc = 0x2E7250u;
    SET_GPR_U32(ctx, 31, 0x2E7258u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E7250u, 0x2E7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7258u;
label_2e7258:
    // 0x2e7258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e725c:
    // 0x2e725c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2e7260:
    if (ctx->pc == 0x2E7260u) {
        ctx->pc = 0x2E7264u;
        goto label_2e7264;
    }
    ctx->pc = 0x2E725Cu;
    {
        const bool branch_taken_0x2e725c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e725c) {
            ctx->pc = 0x2E728Cu;
            goto label_2e728c;
        }
    }
    ctx->pc = 0x2E7264u;
label_2e7264:
    // 0x2e7264: 0xc087502  jal         func_21D408
label_2e7268:
    if (ctx->pc == 0x2E7268u) {
        ctx->pc = 0x2E7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7264u;
        // 0x2e7268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E726Cu;
        goto label_2e726c;
    }
    ctx->pc = 0x2E7264u;
    SET_GPR_U32(ctx, 31, 0x2E726Cu);
    ctx->pc = 0x2E7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7264u;
    // 0x2e7268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E7264u, 0x2E726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E726Cu;
label_2e726c:
    // 0x2e726c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x2e726cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7270:
    // 0x2e7270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7274:
    // 0x2e7274: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2e7278:
    // 0x2e7278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e727c:
    // 0x2e727c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7280:
    // 0x2e7280: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7284:
    // 0x2e7284: 0xc0b6dda  jal         func_2DB768
label_2e7288:
    if (ctx->pc == 0x2E7288u) {
        ctx->pc = 0x2E7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7284u;
        // 0x2e7288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E728Cu;
        goto label_2e728c;
    }
    ctx->pc = 0x2E7284u;
    SET_GPR_U32(ctx, 31, 0x2E728Cu);
    ctx->pc = 0x2E7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7284u;
    // 0x2e7288: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x2E7284u, 0x2E728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E728Cu;
label_2e728c:
    // 0x2e728c: 0xc087502  jal         func_21D408
label_2e7290:
    if (ctx->pc == 0x2E7290u) {
        ctx->pc = 0x2E7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E728Cu;
        // 0x2e7290: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7294u;
        goto label_2e7294;
    }
    ctx->pc = 0x2E728Cu;
    SET_GPR_U32(ctx, 31, 0x2E7294u);
    ctx->pc = 0x2E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E728Cu;
    // 0x2e7290: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E728Cu, 0x2E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7294u;
label_2e7294:
    // 0x2e7294: 0x1000fd5b  b           . + 4 + (-0x2A5 << 2)
label_2e7298:
    if (ctx->pc == 0x2E7298u) {
        ctx->pc = 0x2E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7294u;
        // 0x2e7298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E729Cu;
        goto label_2e729c;
    }
    ctx->pc = 0x2E7294u;
    {
        const bool branch_taken_0x2e7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7294u;
        // 0x2e7298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7294) {
            ctx->pc = 0x2E6804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6804;
        }
    }
    ctx->pc = 0x2E729Cu;
label_2e729c:
    // 0x2e729c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2e72a0:
    // 0x2e72a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e72a4:
    if (ctx->pc == 0x2E72A4u) {
        ctx->pc = 0x2E72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A0u;
        // 0x2e72a4: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72A8u;
        goto label_2e72a8;
    }
    ctx->pc = 0x2E72A0u;
    {
        const bool branch_taken_0x2e72a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A0u;
        // 0x2e72a4: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72a0) {
            ctx->pc = 0x2E72B0u;
            goto label_2e72b0;
        }
    }
    ctx->pc = 0x2E72A8u;
label_2e72a8:
    // 0x2e72a8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2e72ac:
    if (ctx->pc == 0x2E72ACu) {
        ctx->pc = 0x2E72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A8u;
        // 0x2e72ac: 0xae500024  sw          $s0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72B0u;
        goto label_2e72b0;
    }
    ctx->pc = 0x2E72A8u;
    {
        const bool branch_taken_0x2e72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A8u;
        // 0x2e72ac: 0xae500024  sw          $s0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72a8) {
            ctx->pc = 0x2E7314u;
            goto label_2e7314;
        }
    }
    ctx->pc = 0x2E72B0u;
label_2e72b0:
    // 0x2e72b0: 0x92420057  lbu         $v0, 0x57($s2)
    ctx->pc = 0x2e72b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 87)));
label_2e72b4:
    // 0x2e72b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e72b8:
    if (ctx->pc == 0x2E72B8u) {
        ctx->pc = 0x2E72BCu;
        goto label_2e72bc;
    }
    ctx->pc = 0x2E72B4u;
    {
        const bool branch_taken_0x2e72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72b4) {
            ctx->pc = 0x2E72D0u;
            goto label_2e72d0;
        }
    }
    ctx->pc = 0x2E72BCu;
label_2e72bc:
    // 0x2e72bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2e72c0:
    if (ctx->pc == 0x2E72C0u) {
        ctx->pc = 0x2E72C4u;
        goto label_2e72c4;
    }
    ctx->pc = 0x2E72BCu;
    {
        const bool branch_taken_0x2e72bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72bc) {
            ctx->pc = 0x2E72D0u;
            goto label_2e72d0;
        }
    }
    ctx->pc = 0x2E72C4u;
label_2e72c4:
    // 0x2e72c4: 0x16d10002  bne         $s6, $s1, . + 4 + (0x2 << 2)
label_2e72c8:
    if (ctx->pc == 0x2E72C8u) {
        ctx->pc = 0x2E72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C4u;
        // 0x2e72c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72CCu;
        goto label_2e72cc;
    }
    ctx->pc = 0x2E72C4u;
    {
        const bool branch_taken_0x2e72c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C4u;
        // 0x2e72c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72c4) {
            ctx->pc = 0x2E72D0u;
            goto label_2e72d0;
        }
    }
    ctx->pc = 0x2E72CCu;
label_2e72cc:
    // 0x2e72cc: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2e72d0:
    // 0x2e72d0: 0xc0a367c  jal         func_28D9F0
label_2e72d4:
    if (ctx->pc == 0x2E72D4u) {
        ctx->pc = 0x2E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72D0u;
        // 0x2e72d4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72D8u;
        goto label_2e72d8;
    }
    ctx->pc = 0x2E72D0u;
    SET_GPR_U32(ctx, 31, 0x2E72D8u);
    ctx->pc = 0x2E72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72D0u;
    // 0x2e72d4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E72D0u, 0x2E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72D8u;
label_2e72d8:
    // 0x2e72d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e72d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e72dc:
    // 0x2e72dc: 0x120000bc  beqz        $s0, . + 4 + (0xBC << 2)
label_2e72e0:
    if (ctx->pc == 0x2E72E0u) {
        ctx->pc = 0x2E72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72DCu;
        // 0x2e72e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72E4u;
        goto label_2e72e4;
    }
    ctx->pc = 0x2E72DCu;
    {
        const bool branch_taken_0x2e72dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72DCu;
        // 0x2e72e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72dc) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E72E4u;
label_2e72e4:
    // 0x2e72e4: 0xc10587a  jal         func_4161E8
label_2e72e8:
    if (ctx->pc == 0x2E72E8u) {
        ctx->pc = 0x2E72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E4u;
        // 0x2e72e8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72ECu;
        goto label_2e72ec;
    }
    ctx->pc = 0x2E72E4u;
    SET_GPR_U32(ctx, 31, 0x2E72ECu);
    ctx->pc = 0x2E72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72E4u;
    // 0x2e72e8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E72E4u, 0x2E72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72ECu;
label_2e72ec:
    // 0x2e72ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e72f0:
    // 0x2e72f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e72f4:
    // 0x2e72f4: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e72f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e72f8:
    // 0x2e72f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e72f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e72fc:
    // 0x2e72fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e72fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7300:
    // 0x2e7300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7304:
    // 0x2e7304: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e7304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7308:
    // 0x2e7308: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e7308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e730c:
    // 0x2e730c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_2e7310:
    if (ctx->pc == 0x2E7310u) {
        ctx->pc = 0x2E7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E730Cu;
        // 0x2e7310: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7314u;
        goto label_2e7314;
    }
    ctx->pc = 0x2E730Cu;
    {
        const bool branch_taken_0x2e730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E730Cu;
        // 0x2e7310: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e730c) {
            ctx->pc = 0x2E75C4u;
            goto label_2e75c4;
        }
    }
    ctx->pc = 0x2E7314u;
label_2e7314:
    // 0x2e7314: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2e7314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7318:
    // 0x2e7318: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2e731c:
    if (ctx->pc == 0x2E731Cu) {
        ctx->pc = 0x2E731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7318u;
        // 0x2e731c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7320u;
        goto label_2e7320;
    }
    ctx->pc = 0x2E7318u;
    {
        const bool branch_taken_0x2e7318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7318) {
            ctx->pc = 0x2E731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7318u;
            // 0x2e731c: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E73A8u;
            goto label_2e73a8;
        }
    }
    ctx->pc = 0x2E7320u;
label_2e7320:
    // 0x2e7320: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e7320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7324:
    // 0x2e7324: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e7324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e7328:
    // 0x2e7328: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e7328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e732c:
    // 0x2e732c: 0x40f809  jalr        $v0
label_2e7330:
    if (ctx->pc == 0x2E7330u) {
        ctx->pc = 0x2E7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E732Cu;
        // 0x2e7330: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7334u;
        goto label_2e7334;
    }
    ctx->pc = 0x2E732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7334u);
        ctx->pc = 0x2E7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E732Cu;
        // 0x2e7330: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E732Cu, 0x2E7334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7334u;
label_2e7334:
    // 0x2e7334: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2e7334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7338:
    // 0x2e7338: 0xc10586c  jal         func_4161B0
label_2e733c:
    if (ctx->pc == 0x2E733Cu) {
        ctx->pc = 0x2E733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7338u;
        // 0x2e733c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7340u;
        goto label_2e7340;
    }
    ctx->pc = 0x2E7338u;
    SET_GPR_U32(ctx, 31, 0x2E7340u);
    ctx->pc = 0x2E733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7338u;
    // 0x2e733c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x2E7338u, 0x2E7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7340u;
label_2e7340:
    // 0x2e7340: 0x10000019  b           . + 4 + (0x19 << 2)
label_2e7344:
    if (ctx->pc == 0x2E7344u) {
        ctx->pc = 0x2E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7340u;
        // 0x2e7344: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7348u;
        goto label_2e7348;
    }
    ctx->pc = 0x2E7340u;
    {
        const bool branch_taken_0x2e7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7340u;
        // 0x2e7344: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7340) {
            ctx->pc = 0x2E73A8u;
            goto label_2e73a8;
        }
    }
    ctx->pc = 0x2E7348u;
label_2e7348:
    // 0x2e7348: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2e7348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2e734c:
    // 0x2e734c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2e7350:
    if (ctx->pc == 0x2E7350u) {
        ctx->pc = 0x2E7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E734Cu;
        // 0x2e7350: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7354u;
        goto label_2e7354;
    }
    ctx->pc = 0x2E734Cu;
    {
        const bool branch_taken_0x2e734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e734c) {
            ctx->pc = 0x2E7350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E734Cu;
            // 0x2e7350: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E73A8u;
            goto label_2e73a8;
        }
    }
    ctx->pc = 0x2E7354u;
label_2e7354:
    // 0x2e7354: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2e7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7358:
    // 0x2e7358: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e735c:
    if (ctx->pc == 0x2E735Cu) {
        ctx->pc = 0x2E735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7358u;
        // 0x2e735c: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7360u;
        goto label_2e7360;
    }
    ctx->pc = 0x2E7358u;
    {
        const bool branch_taken_0x2e7358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7358) {
            ctx->pc = 0x2E735Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7358u;
            // 0x2e735c: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E73A4u;
            goto label_2e73a4;
        }
    }
    ctx->pc = 0x2E7360u;
label_2e7360:
    // 0x2e7360: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e7360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7364:
    // 0x2e7364: 0x8c5000dc  lw          $s0, 0xDC($v0)
    ctx->pc = 0x2e7364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2e7368:
    // 0x2e7368: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e736c:
    // 0x2e736c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e7370:
    // 0x2e7370: 0x40f809  jalr        $v0
label_2e7374:
    if (ctx->pc == 0x2E7374u) {
        ctx->pc = 0x2E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7370u;
        // 0x2e7374: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7378u;
        goto label_2e7378;
    }
    ctx->pc = 0x2E7370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7378u);
        ctx->pc = 0x2E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7370u;
        // 0x2e7374: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7370u, 0x2E7378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7378u;
label_2e7378:
    // 0x2e7378: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
label_2e737c:
    if (ctx->pc == 0x2E737Cu) {
        ctx->pc = 0x2E737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7378u;
        // 0x2e737c: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7380u;
        goto label_2e7380;
    }
    ctx->pc = 0x2E7378u;
    {
        const bool branch_taken_0x2e7378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7378) {
            ctx->pc = 0x2E737Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7378u;
            // 0x2e737c: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E73A4u;
            goto label_2e73a4;
        }
    }
    ctx->pc = 0x2E7380u;
label_2e7380:
    // 0x2e7380: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e7384:
    // 0x2e7384: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e7384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e7388:
    // 0x2e7388: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e738c:
    // 0x2e738c: 0x40f809  jalr        $v0
label_2e7390:
    if (ctx->pc == 0x2E7390u) {
        ctx->pc = 0x2E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E738Cu;
        // 0x2e7390: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7394u;
        goto label_2e7394;
    }
    ctx->pc = 0x2E738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7394u);
        ctx->pc = 0x2E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E738Cu;
        // 0x2e7390: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E738Cu, 0x2E7394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7394u;
label_2e7394:
    // 0x2e7394: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2e7394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e7398:
    // 0x2e7398: 0xc10586e  jal         func_4161B8
label_2e739c:
    if (ctx->pc == 0x2E739Cu) {
        ctx->pc = 0x2E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7398u;
        // 0x2e739c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73A0u;
        goto label_2e73a0;
    }
    ctx->pc = 0x2E7398u;
    SET_GPR_U32(ctx, 31, 0x2E73A0u);
    ctx->pc = 0x2E739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7398u;
    // 0x2e739c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2E7398u, 0x2E73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73A0u;
label_2e73a0:
    // 0x2e73a0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2e73a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_2e73a4:
    // 0x2e73a4: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2e73a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e73a8:
    // 0x2e73a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e73ac:
    // 0x2e73ac: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x2e73acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e73b0:
    // 0x2e73b0: 0x7a440010  lq          $a0, 0x10($s2)
    ctx->pc = 0x2e73b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2e73b4:
    // 0x2e73b4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e73b8:
    // 0x2e73b8: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x2e73b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_2e73bc:
    // 0x2e73bc: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x2e73bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_2e73c0:
    // 0x2e73c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e73c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e73c4:
    // 0x2e73c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e73c8:
    // 0x2e73c8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2e73cc:
    // 0x2e73cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e73ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e73d0:
    // 0x2e73d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e73d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e73d4:
    // 0x2e73d4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e73d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2e73d8:
    // 0x2e73d8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2e73d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e73dc:
    // 0x2e73dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e73dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e73e0:
    // 0x2e73e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e73e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e73e4:
    // 0x2e73e4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2e73e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e73e8:
    // 0x2e73e8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2e73e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e73ec:
    // 0x2e73ec: 0x0  nop
    ctx->pc = 0x2e73ecu;
    // NOP
label_2e73f0:
    // 0x2e73f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e73f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e73f4:
    // 0x2e73f4: 0x0  nop
    ctx->pc = 0x2e73f4u;
    // NOP
label_2e73f8:
    // 0x2e73f8: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
label_2e73fc:
    if (ctx->pc == 0x2E73FCu) {
        ctx->pc = 0x2E7400u;
        goto label_2e7400;
    }
    ctx->pc = 0x2E73F8u;
    {
        const bool branch_taken_0x2e73f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e73f8) {
            ctx->pc = 0x2E7570u;
            goto label_2e7570;
        }
    }
    ctx->pc = 0x2E7400u;
label_2e7400:
    // 0x2e7400: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e7404:
    // 0x2e7404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7408:
    // 0x2e7408: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_2e740c:
    if (ctx->pc == 0x2E740Cu) {
        ctx->pc = 0x2E740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7408u;
        // 0x2e740c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7410u;
        goto label_2e7410;
    }
    ctx->pc = 0x2E7408u;
    {
        const bool branch_taken_0x2e7408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7408) {
            ctx->pc = 0x2E740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7408u;
            // 0x2e740c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E746Cu;
            goto label_2e746c;
        }
    }
    ctx->pc = 0x2E7410u;
label_2e7410:
    // 0x2e7410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e7414:
    // 0x2e7414: 0xc088680  jal         func_221A00
label_2e7418:
    if (ctx->pc == 0x2E7418u) {
        ctx->pc = 0x2E7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7414u;
        // 0x2e7418: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E741Cu;
        goto label_2e741c;
    }
    ctx->pc = 0x2E7414u;
    SET_GPR_U32(ctx, 31, 0x2E741Cu);
    ctx->pc = 0x2E7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7414u;
    // 0x2e7418: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2E7414u, 0x2E741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E741Cu;
label_2e741c:
    // 0x2e741c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e7420:
    if (ctx->pc == 0x2E7420u) {
        ctx->pc = 0x2E7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E741Cu;
        // 0x2e7420: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7424u;
        goto label_2e7424;
    }
    ctx->pc = 0x2E741Cu;
    {
        const bool branch_taken_0x2e741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e741c) {
            ctx->pc = 0x2E7420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E741Cu;
            // 0x2e7420: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7468u;
            goto label_2e7468;
        }
    }
    ctx->pc = 0x2E7424u;
label_2e7424:
    // 0x2e7424: 0xc089bfc  jal         func_226FF0
label_2e7428:
    if (ctx->pc == 0x2E7428u) {
        ctx->pc = 0x2E7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7424u;
        // 0x2e7428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E742Cu;
        goto label_2e742c;
    }
    ctx->pc = 0x2E7424u;
    SET_GPR_U32(ctx, 31, 0x2E742Cu);
    ctx->pc = 0x2E7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7424u;
    // 0x2e7428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2E7424u, 0x2E742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E742Cu;
label_2e742c:
    // 0x2e742c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2e7430:
    if (ctx->pc == 0x2E7430u) {
        ctx->pc = 0x2E7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E742Cu;
        // 0x2e7430: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7434u;
        goto label_2e7434;
    }
    ctx->pc = 0x2E742Cu;
    {
        const bool branch_taken_0x2e742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e742c) {
            ctx->pc = 0x2E7430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E742Cu;
            // 0x2e7430: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7468u;
            goto label_2e7468;
        }
    }
    ctx->pc = 0x2E7434u;
label_2e7434:
    // 0x2e7434: 0xc0a367c  jal         func_28D9F0
label_2e7438:
    if (ctx->pc == 0x2E7438u) {
        ctx->pc = 0x2E7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7434u;
        // 0x2e7438: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E743Cu;
        goto label_2e743c;
    }
    ctx->pc = 0x2E7434u;
    SET_GPR_U32(ctx, 31, 0x2E743Cu);
    ctx->pc = 0x2E7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7434u;
    // 0x2e7438: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E7434u, 0x2E743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E743Cu;
label_2e743c:
    // 0x2e743c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e7440:
    if (ctx->pc == 0x2E7440u) {
        ctx->pc = 0x2E7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E743Cu;
        // 0x2e7440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7444u;
        goto label_2e7444;
    }
    ctx->pc = 0x2E743Cu;
    {
        const bool branch_taken_0x2e743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E743Cu;
        // 0x2e7440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e743c) {
            ctx->pc = 0x2E7464u;
            goto label_2e7464;
        }
    }
    ctx->pc = 0x2E7444u;
label_2e7444:
    // 0x2e7444: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7448:
    // 0x2e7448: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e7448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2e744c:
    // 0x2e744c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e744cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e7450:
    // 0x2e7450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7454:
    // 0x2e7454: 0x2406014e  addiu       $a2, $zero, 0x14E
    ctx->pc = 0x2e7454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2e7458:
    // 0x2e7458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e745c:
    // 0x2e745c: 0xc0be8c0  jal         func_2FA300
label_2e7460:
    if (ctx->pc == 0x2E7460u) {
        ctx->pc = 0x2E7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E745Cu;
        // 0x2e7460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7464u;
        goto label_2e7464;
    }
    ctx->pc = 0x2E745Cu;
    SET_GPR_U32(ctx, 31, 0x2E7464u);
    ctx->pc = 0x2E7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E745Cu;
    // 0x2e7460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2E745Cu, 0x2E7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7464u;
label_2e7464:
    // 0x2e7464: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2e7464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2e7468:
    // 0x2e7468: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e746c:
    // 0x2e746c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e7470:
    // 0x2e7470: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_2e7474:
    if (ctx->pc == 0x2E7474u) {
        ctx->pc = 0x2E7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7470u;
        // 0x2e7474: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7478u;
        goto label_2e7478;
    }
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E7474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7470u;
            // 0x2e7474: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7504u;
            goto label_2e7504;
        }
    }
    ctx->pc = 0x2E7478u;
label_2e7478:
    // 0x2e7478: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2e7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2e747c:
    // 0x2e747c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2e747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2e7480:
    // 0x2e7480: 0x8c620178  lw          $v0, 0x178($v1)
    ctx->pc = 0x2e7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
label_2e7484:
    // 0x2e7484: 0xc043d5e  jal         func_10F578
label_2e7488:
    if (ctx->pc == 0x2E7488u) {
        ctx->pc = 0x2E7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7484u;
        // 0x2e7488: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E748Cu;
        goto label_2e748c;
    }
    ctx->pc = 0x2E7484u;
    SET_GPR_U32(ctx, 31, 0x2E748Cu);
    ctx->pc = 0x2E7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7484u;
    // 0x2e7488: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2E7484u, 0x2E748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E748Cu;
label_2e748c:
    // 0x2e748c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_2e7490:
    if (ctx->pc == 0x2E7490u) {
        ctx->pc = 0x2E7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E748Cu;
        // 0x2e7490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7494u;
        goto label_2e7494;
    }
    ctx->pc = 0x2E748Cu;
    {
        const bool branch_taken_0x2e748c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E748Cu;
        // 0x2e7490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e748c) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E7494u;
label_2e7494:
    // 0x2e7494: 0x92420055  lbu         $v0, 0x55($s2)
    ctx->pc = 0x2e7494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
label_2e7498:
    // 0x2e7498: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2e749c:
    if (ctx->pc == 0x2E749Cu) {
        ctx->pc = 0x2E749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7498u;
        // 0x2e749c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74A0u;
        goto label_2e74a0;
    }
    ctx->pc = 0x2E7498u;
    {
        const bool branch_taken_0x2e7498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7498u;
        // 0x2e749c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7498) {
            ctx->pc = 0x2E74C8u;
            goto label_2e74c8;
        }
    }
    ctx->pc = 0x2E74A0u;
label_2e74a0:
    // 0x2e74a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e74a4:
    // 0x2e74a4: 0x8ea50380  lw          $a1, 0x380($s5)
    ctx->pc = 0x2e74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 896)));
label_2e74a8:
    // 0x2e74a8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2e74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2e74ac:
    // 0x2e74ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e74acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e74b0:
    // 0x2e74b0: 0x8e670370  lw          $a3, 0x370($s3)
    ctx->pc = 0x2e74b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
label_2e74b4:
    // 0x2e74b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e74b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e74b8:
    // 0x2e74b8: 0xc10796c  jal         func_41E5B0
label_2e74bc:
    if (ctx->pc == 0x2E74BCu) {
        ctx->pc = 0x2E74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74B8u;
        // 0x2e74bc: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74C0u;
        goto label_2e74c0;
    }
    ctx->pc = 0x2E74B8u;
    SET_GPR_U32(ctx, 31, 0x2E74C0u);
    ctx->pc = 0x2E74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74B8u;
    // 0x2e74bc: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2E74B8u, 0x2E74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74C0u;
label_2e74c0:
    // 0x2e74c0: 0xae600370  sw          $zero, 0x370($s3)
    ctx->pc = 0x2e74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
label_2e74c4:
    // 0x2e74c4: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x2e74c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_2e74c8:
    // 0x2e74c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e74cc:
    // 0x2e74cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e74ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e74d0:
    // 0x2e74d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e74d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e74d4:
    // 0x2e74d4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e74d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e74d8:
    // 0x2e74d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e74d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e74dc:
    // 0x2e74dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e74dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e74e0:
    // 0x2e74e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e74e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e74e4:
    // 0x2e74e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e74e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e74e8:
    // 0x2e74e8: 0xc088178  jal         func_2205E0
label_2e74ec:
    if (ctx->pc == 0x2E74ECu) {
        ctx->pc = 0x2E74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74E8u;
        // 0x2e74ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E74F0u;
        goto label_2e74f0;
    }
    ctx->pc = 0x2E74E8u;
    SET_GPR_U32(ctx, 31, 0x2E74F0u);
    ctx->pc = 0x2E74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74E8u;
    // 0x2e74ec: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E74E8u, 0x2E74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74F0u;
label_2e74f0:
    // 0x2e74f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2e74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2e74f4:
    // 0x2e74f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e74f8:
    // 0x2e74f8: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x2e74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_2e74fc:
    // 0x2e74fc: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x2e74fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
label_2e7500:
    // 0x2e7500: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2e7500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2e7504:
    // 0x2e7504: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e7504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e7508:
    // 0x2e7508: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_2e750c:
    if (ctx->pc == 0x2E750Cu) {
        ctx->pc = 0x2E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7508u;
        // 0x2e750c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7510u;
        goto label_2e7510;
    }
    ctx->pc = 0x2E7508u;
    {
        const bool branch_taken_0x2e7508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7508u;
        // 0x2e750c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7508) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E7510u;
label_2e7510:
    // 0x2e7510: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2e7510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2e7514:
    // 0x2e7514: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e7514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2e7518:
    // 0x2e7518: 0x24654b00  addiu       $a1, $v1, 0x4B00
    ctx->pc = 0x2e7518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2e751c:
    // 0x2e751c: 0x7a440010  lq          $a0, 0x10($s2)
    ctx->pc = 0x2e751cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2e7520:
    // 0x2e7520: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2e7520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e7524:
    // 0x2e7524: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2e7524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2e7528:
    // 0x2e7528: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x2e7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
label_2e752c:
    // 0x2e752c: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x2e752cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
label_2e7530:
    // 0x2e7530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7534:
    // 0x2e7534: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e7534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e7538:
    // 0x2e7538: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2e753c:
    // 0x2e753c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e753cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e7540:
    // 0x2e7540: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e7540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e7544:
    // 0x2e7544: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e7544u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2e7548:
    // 0x2e7548: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2e7548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e754c:
    // 0x2e754c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e754cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e7550:
    // 0x2e7550: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e7550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e7554:
    // 0x2e7554: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2e7554u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e7558:
    // 0x2e7558: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2e7558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e755c:
    // 0x2e755c: 0x0  nop
    ctx->pc = 0x2e755cu;
    // NOP
label_2e7560:
    // 0x2e7560: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e7560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7564:
    // 0x2e7564: 0x0  nop
    ctx->pc = 0x2e7564u;
    // NOP
label_2e7568:
    // 0x2e7568: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2e756c:
    if (ctx->pc == 0x2E756Cu) {
        ctx->pc = 0x2E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7568u;
        // 0x2e756c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7570u;
        goto label_2e7570;
    }
    ctx->pc = 0x2E7568u;
    {
        const bool branch_taken_0x2e7568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7568u;
        // 0x2e756c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7568) {
            ctx->pc = 0x2E75D0u;
            goto label_2e75d0;
        }
    }
    ctx->pc = 0x2E7570u;
label_2e7570:
    // 0x2e7570: 0xc0a367c  jal         func_28D9F0
label_2e7574:
    if (ctx->pc == 0x2E7574u) {
        ctx->pc = 0x2E7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7570u;
        // 0x2e7574: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7578u;
        goto label_2e7578;
    }
    ctx->pc = 0x2E7570u;
    SET_GPR_U32(ctx, 31, 0x2E7578u);
    ctx->pc = 0x2E7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7570u;
    // 0x2e7574: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E7570u, 0x2E7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7578u;
label_2e7578:
    // 0x2e7578: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2e757c:
    if (ctx->pc == 0x2E757Cu) {
        ctx->pc = 0x2E757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7578u;
        // 0x2e757c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7580u;
        goto label_2e7580;
    }
    ctx->pc = 0x2E7578u;
    {
        const bool branch_taken_0x2e7578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7578u;
        // 0x2e757c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7578) {
            ctx->pc = 0x2E75CCu;
            goto label_2e75cc;
        }
    }
    ctx->pc = 0x2E7580u;
label_2e7580:
    // 0x2e7580: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2e7580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2e7584:
    // 0x2e7584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7588:
    // 0x2e7588: 0x0  nop
    ctx->pc = 0x2e7588u;
    // NOP
label_2e758c:
    // 0x2e758c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e758cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7590:
    // 0x2e7590: 0x0  nop
    ctx->pc = 0x2e7590u;
    // NOP
label_2e7594:
    // 0x2e7594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2e7598:
    if (ctx->pc == 0x2E7598u) {
        ctx->pc = 0x2E7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7594u;
        // 0x2e7598: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E759Cu;
        goto label_2e759c;
    }
    ctx->pc = 0x2E7594u;
    {
        const bool branch_taken_0x2e7594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7594u;
        // 0x2e7598: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7594) {
            ctx->pc = 0x2E75A0u;
            goto label_2e75a0;
        }
    }
    ctx->pc = 0x2E759Cu;
label_2e759c:
    // 0x2e759c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2e759cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e75a0:
    // 0x2e75a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e75a4:
    // 0x2e75a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e75a8:
    // 0x2e75a8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e75a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e75ac:
    // 0x2e75ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e75acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e75b0:
    // 0x2e75b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e75b4:
    // 0x2e75b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e75b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e75b8:
    // 0x2e75b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e75b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e75bc:
    // 0x2e75bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e75bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e75c0:
    // 0x2e75c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e75c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e75c4:
    // 0x2e75c4: 0xc0bee7a  jal         func_2FB9E8
label_2e75c8:
    if (ctx->pc == 0x2E75C8u) {
        ctx->pc = 0x2E75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75C4u;
        // 0x2e75c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E75CCu;
        goto label_2e75cc;
    }
    ctx->pc = 0x2E75C4u;
    SET_GPR_U32(ctx, 31, 0x2E75CCu);
    ctx->pc = 0x2E75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75C4u;
    // 0x2e75c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E75C4u, 0x2E75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75CCu;
label_2e75cc:
    // 0x2e75cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e75ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e75d0:
    // 0x2e75d0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2e75d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e75d4:
    // 0x2e75d4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2e75d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e75d8:
    // 0x2e75d8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2e75d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e75dc:
    // 0x2e75dc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2e75dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e75e0:
    // 0x2e75e0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2e75e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e75e4:
    // 0x2e75e4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2e75e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e75e8:
    // 0x2e75e8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2e75e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e75ec:
    // 0x2e75ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e75ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e75f0:
    // 0x2e75f0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2e75f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e75f4:
    // 0x2e75f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e75f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e75f8:
    // 0x2e75f8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e75fc:
    // 0x2e75fc: 0x3e00008  jr          $ra
label_2e7600:
    if (ctx->pc == 0x2E7600u) {
        ctx->pc = 0x2E7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75FCu;
        // 0x2e7600: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7604u;
        goto label_2e7604;
    }
    ctx->pc = 0x2E75FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75FCu;
        // 0x2e7600: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E75FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7604u;
label_2e7604:
    // 0x2e7604: 0x0  nop
    ctx->pc = 0x2e7604u;
    // NOP
    ctx->pc = 0x2e7608u;
}
