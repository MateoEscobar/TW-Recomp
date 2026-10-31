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

// Function: sub_002D6638
// Address: 0x2d6638 - 0x2d6ca0
void sub_002D6638_0x2d6638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6638_0x2d6638");
#endif

    switch (ctx->pc) {
        case 0x2d6638u: goto label_2d6638;
        case 0x2d663cu: goto label_2d663c;
        case 0x2d6640u: goto label_2d6640;
        case 0x2d6644u: goto label_2d6644;
        case 0x2d6648u: goto label_2d6648;
        case 0x2d664cu: goto label_2d664c;
        case 0x2d6650u: goto label_2d6650;
        case 0x2d6654u: goto label_2d6654;
        case 0x2d6658u: goto label_2d6658;
        case 0x2d665cu: goto label_2d665c;
        case 0x2d6660u: goto label_2d6660;
        case 0x2d6664u: goto label_2d6664;
        case 0x2d6668u: goto label_2d6668;
        case 0x2d666cu: goto label_2d666c;
        case 0x2d6670u: goto label_2d6670;
        case 0x2d6674u: goto label_2d6674;
        case 0x2d6678u: goto label_2d6678;
        case 0x2d667cu: goto label_2d667c;
        case 0x2d6680u: goto label_2d6680;
        case 0x2d6684u: goto label_2d6684;
        case 0x2d6688u: goto label_2d6688;
        case 0x2d668cu: goto label_2d668c;
        case 0x2d6690u: goto label_2d6690;
        case 0x2d6694u: goto label_2d6694;
        case 0x2d6698u: goto label_2d6698;
        case 0x2d669cu: goto label_2d669c;
        case 0x2d66a0u: goto label_2d66a0;
        case 0x2d66a4u: goto label_2d66a4;
        case 0x2d66a8u: goto label_2d66a8;
        case 0x2d66acu: goto label_2d66ac;
        case 0x2d66b0u: goto label_2d66b0;
        case 0x2d66b4u: goto label_2d66b4;
        case 0x2d66b8u: goto label_2d66b8;
        case 0x2d66bcu: goto label_2d66bc;
        case 0x2d66c0u: goto label_2d66c0;
        case 0x2d66c4u: goto label_2d66c4;
        case 0x2d66c8u: goto label_2d66c8;
        case 0x2d66ccu: goto label_2d66cc;
        case 0x2d66d0u: goto label_2d66d0;
        case 0x2d66d4u: goto label_2d66d4;
        case 0x2d66d8u: goto label_2d66d8;
        case 0x2d66dcu: goto label_2d66dc;
        case 0x2d66e0u: goto label_2d66e0;
        case 0x2d66e4u: goto label_2d66e4;
        case 0x2d66e8u: goto label_2d66e8;
        case 0x2d66ecu: goto label_2d66ec;
        case 0x2d66f0u: goto label_2d66f0;
        case 0x2d66f4u: goto label_2d66f4;
        case 0x2d66f8u: goto label_2d66f8;
        case 0x2d66fcu: goto label_2d66fc;
        case 0x2d6700u: goto label_2d6700;
        case 0x2d6704u: goto label_2d6704;
        case 0x2d6708u: goto label_2d6708;
        case 0x2d670cu: goto label_2d670c;
        case 0x2d6710u: goto label_2d6710;
        case 0x2d6714u: goto label_2d6714;
        case 0x2d6718u: goto label_2d6718;
        case 0x2d671cu: goto label_2d671c;
        case 0x2d6720u: goto label_2d6720;
        case 0x2d6724u: goto label_2d6724;
        case 0x2d6728u: goto label_2d6728;
        case 0x2d672cu: goto label_2d672c;
        case 0x2d6730u: goto label_2d6730;
        case 0x2d6734u: goto label_2d6734;
        case 0x2d6738u: goto label_2d6738;
        case 0x2d673cu: goto label_2d673c;
        case 0x2d6740u: goto label_2d6740;
        case 0x2d6744u: goto label_2d6744;
        case 0x2d6748u: goto label_2d6748;
        case 0x2d674cu: goto label_2d674c;
        case 0x2d6750u: goto label_2d6750;
        case 0x2d6754u: goto label_2d6754;
        case 0x2d6758u: goto label_2d6758;
        case 0x2d675cu: goto label_2d675c;
        case 0x2d6760u: goto label_2d6760;
        case 0x2d6764u: goto label_2d6764;
        case 0x2d6768u: goto label_2d6768;
        case 0x2d676cu: goto label_2d676c;
        case 0x2d6770u: goto label_2d6770;
        case 0x2d6774u: goto label_2d6774;
        case 0x2d6778u: goto label_2d6778;
        case 0x2d677cu: goto label_2d677c;
        case 0x2d6780u: goto label_2d6780;
        case 0x2d6784u: goto label_2d6784;
        case 0x2d6788u: goto label_2d6788;
        case 0x2d678cu: goto label_2d678c;
        case 0x2d6790u: goto label_2d6790;
        case 0x2d6794u: goto label_2d6794;
        case 0x2d6798u: goto label_2d6798;
        case 0x2d679cu: goto label_2d679c;
        case 0x2d67a0u: goto label_2d67a0;
        case 0x2d67a4u: goto label_2d67a4;
        case 0x2d67a8u: goto label_2d67a8;
        case 0x2d67acu: goto label_2d67ac;
        case 0x2d67b0u: goto label_2d67b0;
        case 0x2d67b4u: goto label_2d67b4;
        case 0x2d67b8u: goto label_2d67b8;
        case 0x2d67bcu: goto label_2d67bc;
        case 0x2d67c0u: goto label_2d67c0;
        case 0x2d67c4u: goto label_2d67c4;
        case 0x2d67c8u: goto label_2d67c8;
        case 0x2d67ccu: goto label_2d67cc;
        case 0x2d67d0u: goto label_2d67d0;
        case 0x2d67d4u: goto label_2d67d4;
        case 0x2d67d8u: goto label_2d67d8;
        case 0x2d67dcu: goto label_2d67dc;
        case 0x2d67e0u: goto label_2d67e0;
        case 0x2d67e4u: goto label_2d67e4;
        case 0x2d67e8u: goto label_2d67e8;
        case 0x2d67ecu: goto label_2d67ec;
        case 0x2d67f0u: goto label_2d67f0;
        case 0x2d67f4u: goto label_2d67f4;
        case 0x2d67f8u: goto label_2d67f8;
        case 0x2d67fcu: goto label_2d67fc;
        case 0x2d6800u: goto label_2d6800;
        case 0x2d6804u: goto label_2d6804;
        case 0x2d6808u: goto label_2d6808;
        case 0x2d680cu: goto label_2d680c;
        case 0x2d6810u: goto label_2d6810;
        case 0x2d6814u: goto label_2d6814;
        case 0x2d6818u: goto label_2d6818;
        case 0x2d681cu: goto label_2d681c;
        case 0x2d6820u: goto label_2d6820;
        case 0x2d6824u: goto label_2d6824;
        case 0x2d6828u: goto label_2d6828;
        case 0x2d682cu: goto label_2d682c;
        case 0x2d6830u: goto label_2d6830;
        case 0x2d6834u: goto label_2d6834;
        case 0x2d6838u: goto label_2d6838;
        case 0x2d683cu: goto label_2d683c;
        case 0x2d6840u: goto label_2d6840;
        case 0x2d6844u: goto label_2d6844;
        case 0x2d6848u: goto label_2d6848;
        case 0x2d684cu: goto label_2d684c;
        case 0x2d6850u: goto label_2d6850;
        case 0x2d6854u: goto label_2d6854;
        case 0x2d6858u: goto label_2d6858;
        case 0x2d685cu: goto label_2d685c;
        case 0x2d6860u: goto label_2d6860;
        case 0x2d6864u: goto label_2d6864;
        case 0x2d6868u: goto label_2d6868;
        case 0x2d686cu: goto label_2d686c;
        case 0x2d6870u: goto label_2d6870;
        case 0x2d6874u: goto label_2d6874;
        case 0x2d6878u: goto label_2d6878;
        case 0x2d687cu: goto label_2d687c;
        case 0x2d6880u: goto label_2d6880;
        case 0x2d6884u: goto label_2d6884;
        case 0x2d6888u: goto label_2d6888;
        case 0x2d688cu: goto label_2d688c;
        case 0x2d6890u: goto label_2d6890;
        case 0x2d6894u: goto label_2d6894;
        case 0x2d6898u: goto label_2d6898;
        case 0x2d689cu: goto label_2d689c;
        case 0x2d68a0u: goto label_2d68a0;
        case 0x2d68a4u: goto label_2d68a4;
        case 0x2d68a8u: goto label_2d68a8;
        case 0x2d68acu: goto label_2d68ac;
        case 0x2d68b0u: goto label_2d68b0;
        case 0x2d68b4u: goto label_2d68b4;
        case 0x2d68b8u: goto label_2d68b8;
        case 0x2d68bcu: goto label_2d68bc;
        case 0x2d68c0u: goto label_2d68c0;
        case 0x2d68c4u: goto label_2d68c4;
        case 0x2d68c8u: goto label_2d68c8;
        case 0x2d68ccu: goto label_2d68cc;
        case 0x2d68d0u: goto label_2d68d0;
        case 0x2d68d4u: goto label_2d68d4;
        case 0x2d68d8u: goto label_2d68d8;
        case 0x2d68dcu: goto label_2d68dc;
        case 0x2d68e0u: goto label_2d68e0;
        case 0x2d68e4u: goto label_2d68e4;
        case 0x2d68e8u: goto label_2d68e8;
        case 0x2d68ecu: goto label_2d68ec;
        case 0x2d68f0u: goto label_2d68f0;
        case 0x2d68f4u: goto label_2d68f4;
        case 0x2d68f8u: goto label_2d68f8;
        case 0x2d68fcu: goto label_2d68fc;
        case 0x2d6900u: goto label_2d6900;
        case 0x2d6904u: goto label_2d6904;
        case 0x2d6908u: goto label_2d6908;
        case 0x2d690cu: goto label_2d690c;
        case 0x2d6910u: goto label_2d6910;
        case 0x2d6914u: goto label_2d6914;
        case 0x2d6918u: goto label_2d6918;
        case 0x2d691cu: goto label_2d691c;
        case 0x2d6920u: goto label_2d6920;
        case 0x2d6924u: goto label_2d6924;
        case 0x2d6928u: goto label_2d6928;
        case 0x2d692cu: goto label_2d692c;
        case 0x2d6930u: goto label_2d6930;
        case 0x2d6934u: goto label_2d6934;
        case 0x2d6938u: goto label_2d6938;
        case 0x2d693cu: goto label_2d693c;
        case 0x2d6940u: goto label_2d6940;
        case 0x2d6944u: goto label_2d6944;
        case 0x2d6948u: goto label_2d6948;
        case 0x2d694cu: goto label_2d694c;
        case 0x2d6950u: goto label_2d6950;
        case 0x2d6954u: goto label_2d6954;
        case 0x2d6958u: goto label_2d6958;
        case 0x2d695cu: goto label_2d695c;
        case 0x2d6960u: goto label_2d6960;
        case 0x2d6964u: goto label_2d6964;
        case 0x2d6968u: goto label_2d6968;
        case 0x2d696cu: goto label_2d696c;
        case 0x2d6970u: goto label_2d6970;
        case 0x2d6974u: goto label_2d6974;
        case 0x2d6978u: goto label_2d6978;
        case 0x2d697cu: goto label_2d697c;
        case 0x2d6980u: goto label_2d6980;
        case 0x2d6984u: goto label_2d6984;
        case 0x2d6988u: goto label_2d6988;
        case 0x2d698cu: goto label_2d698c;
        case 0x2d6990u: goto label_2d6990;
        case 0x2d6994u: goto label_2d6994;
        case 0x2d6998u: goto label_2d6998;
        case 0x2d699cu: goto label_2d699c;
        case 0x2d69a0u: goto label_2d69a0;
        case 0x2d69a4u: goto label_2d69a4;
        case 0x2d69a8u: goto label_2d69a8;
        case 0x2d69acu: goto label_2d69ac;
        case 0x2d69b0u: goto label_2d69b0;
        case 0x2d69b4u: goto label_2d69b4;
        case 0x2d69b8u: goto label_2d69b8;
        case 0x2d69bcu: goto label_2d69bc;
        case 0x2d69c0u: goto label_2d69c0;
        case 0x2d69c4u: goto label_2d69c4;
        case 0x2d69c8u: goto label_2d69c8;
        case 0x2d69ccu: goto label_2d69cc;
        case 0x2d69d0u: goto label_2d69d0;
        case 0x2d69d4u: goto label_2d69d4;
        case 0x2d69d8u: goto label_2d69d8;
        case 0x2d69dcu: goto label_2d69dc;
        case 0x2d69e0u: goto label_2d69e0;
        case 0x2d69e4u: goto label_2d69e4;
        case 0x2d69e8u: goto label_2d69e8;
        case 0x2d69ecu: goto label_2d69ec;
        case 0x2d69f0u: goto label_2d69f0;
        case 0x2d69f4u: goto label_2d69f4;
        case 0x2d69f8u: goto label_2d69f8;
        case 0x2d69fcu: goto label_2d69fc;
        case 0x2d6a00u: goto label_2d6a00;
        case 0x2d6a04u: goto label_2d6a04;
        case 0x2d6a08u: goto label_2d6a08;
        case 0x2d6a0cu: goto label_2d6a0c;
        case 0x2d6a10u: goto label_2d6a10;
        case 0x2d6a14u: goto label_2d6a14;
        case 0x2d6a18u: goto label_2d6a18;
        case 0x2d6a1cu: goto label_2d6a1c;
        case 0x2d6a20u: goto label_2d6a20;
        case 0x2d6a24u: goto label_2d6a24;
        case 0x2d6a28u: goto label_2d6a28;
        case 0x2d6a2cu: goto label_2d6a2c;
        case 0x2d6a30u: goto label_2d6a30;
        case 0x2d6a34u: goto label_2d6a34;
        case 0x2d6a38u: goto label_2d6a38;
        case 0x2d6a3cu: goto label_2d6a3c;
        case 0x2d6a40u: goto label_2d6a40;
        case 0x2d6a44u: goto label_2d6a44;
        case 0x2d6a48u: goto label_2d6a48;
        case 0x2d6a4cu: goto label_2d6a4c;
        case 0x2d6a50u: goto label_2d6a50;
        case 0x2d6a54u: goto label_2d6a54;
        case 0x2d6a58u: goto label_2d6a58;
        case 0x2d6a5cu: goto label_2d6a5c;
        case 0x2d6a60u: goto label_2d6a60;
        case 0x2d6a64u: goto label_2d6a64;
        case 0x2d6a68u: goto label_2d6a68;
        case 0x2d6a6cu: goto label_2d6a6c;
        case 0x2d6a70u: goto label_2d6a70;
        case 0x2d6a74u: goto label_2d6a74;
        case 0x2d6a78u: goto label_2d6a78;
        case 0x2d6a7cu: goto label_2d6a7c;
        case 0x2d6a80u: goto label_2d6a80;
        case 0x2d6a84u: goto label_2d6a84;
        case 0x2d6a88u: goto label_2d6a88;
        case 0x2d6a8cu: goto label_2d6a8c;
        case 0x2d6a90u: goto label_2d6a90;
        case 0x2d6a94u: goto label_2d6a94;
        case 0x2d6a98u: goto label_2d6a98;
        case 0x2d6a9cu: goto label_2d6a9c;
        case 0x2d6aa0u: goto label_2d6aa0;
        case 0x2d6aa4u: goto label_2d6aa4;
        case 0x2d6aa8u: goto label_2d6aa8;
        case 0x2d6aacu: goto label_2d6aac;
        case 0x2d6ab0u: goto label_2d6ab0;
        case 0x2d6ab4u: goto label_2d6ab4;
        case 0x2d6ab8u: goto label_2d6ab8;
        case 0x2d6abcu: goto label_2d6abc;
        case 0x2d6ac0u: goto label_2d6ac0;
        case 0x2d6ac4u: goto label_2d6ac4;
        case 0x2d6ac8u: goto label_2d6ac8;
        case 0x2d6accu: goto label_2d6acc;
        case 0x2d6ad0u: goto label_2d6ad0;
        case 0x2d6ad4u: goto label_2d6ad4;
        case 0x2d6ad8u: goto label_2d6ad8;
        case 0x2d6adcu: goto label_2d6adc;
        case 0x2d6ae0u: goto label_2d6ae0;
        case 0x2d6ae4u: goto label_2d6ae4;
        case 0x2d6ae8u: goto label_2d6ae8;
        case 0x2d6aecu: goto label_2d6aec;
        case 0x2d6af0u: goto label_2d6af0;
        case 0x2d6af4u: goto label_2d6af4;
        case 0x2d6af8u: goto label_2d6af8;
        case 0x2d6afcu: goto label_2d6afc;
        case 0x2d6b00u: goto label_2d6b00;
        case 0x2d6b04u: goto label_2d6b04;
        case 0x2d6b08u: goto label_2d6b08;
        case 0x2d6b0cu: goto label_2d6b0c;
        case 0x2d6b10u: goto label_2d6b10;
        case 0x2d6b14u: goto label_2d6b14;
        case 0x2d6b18u: goto label_2d6b18;
        case 0x2d6b1cu: goto label_2d6b1c;
        case 0x2d6b20u: goto label_2d6b20;
        case 0x2d6b24u: goto label_2d6b24;
        case 0x2d6b28u: goto label_2d6b28;
        case 0x2d6b2cu: goto label_2d6b2c;
        case 0x2d6b30u: goto label_2d6b30;
        case 0x2d6b34u: goto label_2d6b34;
        case 0x2d6b38u: goto label_2d6b38;
        case 0x2d6b3cu: goto label_2d6b3c;
        case 0x2d6b40u: goto label_2d6b40;
        case 0x2d6b44u: goto label_2d6b44;
        case 0x2d6b48u: goto label_2d6b48;
        case 0x2d6b4cu: goto label_2d6b4c;
        case 0x2d6b50u: goto label_2d6b50;
        case 0x2d6b54u: goto label_2d6b54;
        case 0x2d6b58u: goto label_2d6b58;
        case 0x2d6b5cu: goto label_2d6b5c;
        case 0x2d6b60u: goto label_2d6b60;
        case 0x2d6b64u: goto label_2d6b64;
        case 0x2d6b68u: goto label_2d6b68;
        case 0x2d6b6cu: goto label_2d6b6c;
        case 0x2d6b70u: goto label_2d6b70;
        case 0x2d6b74u: goto label_2d6b74;
        case 0x2d6b78u: goto label_2d6b78;
        case 0x2d6b7cu: goto label_2d6b7c;
        case 0x2d6b80u: goto label_2d6b80;
        case 0x2d6b84u: goto label_2d6b84;
        case 0x2d6b88u: goto label_2d6b88;
        case 0x2d6b8cu: goto label_2d6b8c;
        case 0x2d6b90u: goto label_2d6b90;
        case 0x2d6b94u: goto label_2d6b94;
        case 0x2d6b98u: goto label_2d6b98;
        case 0x2d6b9cu: goto label_2d6b9c;
        case 0x2d6ba0u: goto label_2d6ba0;
        case 0x2d6ba4u: goto label_2d6ba4;
        case 0x2d6ba8u: goto label_2d6ba8;
        case 0x2d6bacu: goto label_2d6bac;
        case 0x2d6bb0u: goto label_2d6bb0;
        case 0x2d6bb4u: goto label_2d6bb4;
        case 0x2d6bb8u: goto label_2d6bb8;
        case 0x2d6bbcu: goto label_2d6bbc;
        case 0x2d6bc0u: goto label_2d6bc0;
        case 0x2d6bc4u: goto label_2d6bc4;
        case 0x2d6bc8u: goto label_2d6bc8;
        case 0x2d6bccu: goto label_2d6bcc;
        case 0x2d6bd0u: goto label_2d6bd0;
        case 0x2d6bd4u: goto label_2d6bd4;
        case 0x2d6bd8u: goto label_2d6bd8;
        case 0x2d6bdcu: goto label_2d6bdc;
        case 0x2d6be0u: goto label_2d6be0;
        case 0x2d6be4u: goto label_2d6be4;
        case 0x2d6be8u: goto label_2d6be8;
        case 0x2d6becu: goto label_2d6bec;
        case 0x2d6bf0u: goto label_2d6bf0;
        case 0x2d6bf4u: goto label_2d6bf4;
        case 0x2d6bf8u: goto label_2d6bf8;
        case 0x2d6bfcu: goto label_2d6bfc;
        case 0x2d6c00u: goto label_2d6c00;
        case 0x2d6c04u: goto label_2d6c04;
        case 0x2d6c08u: goto label_2d6c08;
        case 0x2d6c0cu: goto label_2d6c0c;
        case 0x2d6c10u: goto label_2d6c10;
        case 0x2d6c14u: goto label_2d6c14;
        case 0x2d6c18u: goto label_2d6c18;
        case 0x2d6c1cu: goto label_2d6c1c;
        case 0x2d6c20u: goto label_2d6c20;
        case 0x2d6c24u: goto label_2d6c24;
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c2cu: goto label_2d6c2c;
        case 0x2d6c30u: goto label_2d6c30;
        case 0x2d6c34u: goto label_2d6c34;
        case 0x2d6c38u: goto label_2d6c38;
        case 0x2d6c3cu: goto label_2d6c3c;
        case 0x2d6c40u: goto label_2d6c40;
        case 0x2d6c44u: goto label_2d6c44;
        case 0x2d6c48u: goto label_2d6c48;
        case 0x2d6c4cu: goto label_2d6c4c;
        case 0x2d6c50u: goto label_2d6c50;
        case 0x2d6c54u: goto label_2d6c54;
        case 0x2d6c58u: goto label_2d6c58;
        case 0x2d6c5cu: goto label_2d6c5c;
        case 0x2d6c60u: goto label_2d6c60;
        case 0x2d6c64u: goto label_2d6c64;
        case 0x2d6c68u: goto label_2d6c68;
        case 0x2d6c6cu: goto label_2d6c6c;
        case 0x2d6c70u: goto label_2d6c70;
        case 0x2d6c74u: goto label_2d6c74;
        case 0x2d6c78u: goto label_2d6c78;
        case 0x2d6c7cu: goto label_2d6c7c;
        case 0x2d6c80u: goto label_2d6c80;
        case 0x2d6c84u: goto label_2d6c84;
        case 0x2d6c88u: goto label_2d6c88;
        case 0x2d6c8cu: goto label_2d6c8c;
        case 0x2d6c90u: goto label_2d6c90;
        case 0x2d6c94u: goto label_2d6c94;
        case 0x2d6c98u: goto label_2d6c98;
        case 0x2d6c9cu: goto label_2d6c9c;
        default: break;
    }

    ctx->pc = 0x2d6638u;

label_2d6638:
    // 0x2d6638: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d6638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2d663c:
    // 0x2d663c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2d6640:
    // 0x2d6640: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d6640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2d6644:
    // 0x2d6644: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d6644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6648:
    // 0x2d6648: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2d664c:
    // 0x2d664c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d664cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6650:
    // 0x2d6650: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d6650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2d6654:
    // 0x2d6654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d6654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d6658:
    // 0x2d6658: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2d665c:
    // 0x2d665c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2d6660:
    // 0x2d6660: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d6664:
    // 0x2d6664: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d6664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2d6668:
    // 0x2d6668: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2d666c:
    // 0x2d666c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2d666cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6670:
    // 0x2d6670: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d6674:
    // 0x2d6674: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2d6674u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6678:
    // 0x2d6678: 0xc0e409a  jal         func_390268
label_2d667c:
    if (ctx->pc == 0x2D667Cu) {
        ctx->pc = 0x2D667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6678u;
        // 0x2d667c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6680u;
        goto label_2d6680;
    }
    ctx->pc = 0x2D6678u;
    SET_GPR_U32(ctx, 31, 0x2D6680u);
    ctx->pc = 0x2D667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6678u;
    // 0x2d667c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D6678u, 0x2D6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6680u;
label_2d6680:
    // 0x2d6680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6684:
    // 0x2d6684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6688:
    // 0x2d6688: 0xc0a352c  jal         func_28D4B0
label_2d668c:
    if (ctx->pc == 0x2D668Cu) {
        ctx->pc = 0x2D668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6688u;
        // 0x2d668c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6690u;
        goto label_2d6690;
    }
    ctx->pc = 0x2D6688u;
    SET_GPR_U32(ctx, 31, 0x2D6690u);
    ctx->pc = 0x2D668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6688u;
    // 0x2d668c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D6688u, 0x2D6690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6690u;
label_2d6690:
    // 0x2d6690: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6694:
    // 0x2d6694: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d6694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6698:
    // 0x2d6698: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d6698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d669c:
    // 0x2d669c: 0x1c400175  bgtz        $v0, . + 4 + (0x175 << 2)
label_2d66a0:
    if (ctx->pc == 0x2D66A0u) {
        ctx->pc = 0x2D66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D669Cu;
        // 0x2d66a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66A4u;
        goto label_2d66a4;
    }
    ctx->pc = 0x2D669Cu;
    {
        const bool branch_taken_0x2d669c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D669Cu;
        // 0x2d66a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d669c) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D66A4u;
label_2d66a4:
    // 0x2d66a4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2d66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2d66a8:
    // 0x2d66a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2d66ac:
    if (ctx->pc == 0x2D66ACu) {
        ctx->pc = 0x2D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66A8u;
        // 0x2d66ac: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66B0u;
        goto label_2d66b0;
    }
    ctx->pc = 0x2D66A8u;
    {
        const bool branch_taken_0x2d66a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d66a8) {
            ctx->pc = 0x2D66ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D66A8u;
            // 0x2d66ac: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D66B0u;
            goto label_2d66b0;
        }
    }
    ctx->pc = 0x2D66B0u;
label_2d66b0:
    // 0x2d66b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d66b4:
    // 0x2d66b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d66b8:
    // 0x2d66b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d66bc:
    // 0x2d66bc: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_2d66c0:
    if (ctx->pc == 0x2D66C0u) {
        ctx->pc = 0x2D66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66BCu;
        // 0x2d66c0: 0x92430030  lbu         $v1, 0x30($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66C4u;
        goto label_2d66c4;
    }
    ctx->pc = 0x2D66BCu;
    {
        const bool branch_taken_0x2d66bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d66bc) {
            ctx->pc = 0x2D66C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D66BCu;
            // 0x2d66c0: 0x92430030  lbu         $v1, 0x30($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D66D8u;
            goto label_2d66d8;
        }
    }
    ctx->pc = 0x2D66C4u;
label_2d66c4:
    // 0x2d66c4: 0xc08a08a  jal         func_228228
label_2d66c8:
    if (ctx->pc == 0x2D66C8u) {
        ctx->pc = 0x2D66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66C4u;
        // 0x2d66c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66CCu;
        goto label_2d66cc;
    }
    ctx->pc = 0x2D66C4u;
    SET_GPR_U32(ctx, 31, 0x2D66CCu);
    ctx->pc = 0x2D66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D66C4u;
    // 0x2d66c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D66C4u, 0x2D66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D66CCu;
label_2d66cc:
    // 0x2d66cc: 0x10510169  beq         $v0, $s1, . + 4 + (0x169 << 2)
label_2d66d0:
    if (ctx->pc == 0x2D66D0u) {
        ctx->pc = 0x2D66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66CCu;
        // 0x2d66d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66D4u;
        goto label_2d66d4;
    }
    ctx->pc = 0x2D66CCu;
    {
        const bool branch_taken_0x2d66cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66CCu;
        // 0x2d66d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66cc) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D66D4u;
label_2d66d4:
    // 0x2d66d4: 0x92430030  lbu         $v1, 0x30($s2)
    ctx->pc = 0x2d66d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_2d66d8:
    // 0x2d66d8: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
label_2d66dc:
    if (ctx->pc == 0x2D66DCu) {
        ctx->pc = 0x2D66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66D8u;
        // 0x2d66dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66E0u;
        goto label_2d66e0;
    }
    ctx->pc = 0x2D66D8u;
    {
        const bool branch_taken_0x2d66d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66D8u;
        // 0x2d66dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66d8) {
            ctx->pc = 0x2D6840u;
            goto label_2d6840;
        }
    }
    ctx->pc = 0x2D66E0u;
label_2d66e0:
    // 0x2d66e0: 0xc088e88  jal         func_223A20
label_2d66e4:
    if (ctx->pc == 0x2D66E4u) {
        ctx->pc = 0x2D66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66E0u;
        // 0x2d66e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66E8u;
        goto label_2d66e8;
    }
    ctx->pc = 0x2D66E0u;
    SET_GPR_U32(ctx, 31, 0x2D66E8u);
    ctx->pc = 0x2D66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D66E0u;
    // 0x2d66e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D66E0u, 0x2D66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D66E8u;
label_2d66e8:
    // 0x2d66e8: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_2d66ec:
    if (ctx->pc == 0x2D66ECu) {
        ctx->pc = 0x2D66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66E8u;
        // 0x2d66ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D66F0u;
        goto label_2d66f0;
    }
    ctx->pc = 0x2D66E8u;
    {
        const bool branch_taken_0x2d66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66E8u;
        // 0x2d66ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66e8) {
            ctx->pc = 0x2D6A54u;
            goto label_2d6a54;
        }
    }
    ctx->pc = 0x2D66F0u;
label_2d66f0:
    // 0x2d66f0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d66f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d66f4:
    // 0x2d66f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d66f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d66f8:
    // 0x2d66f8: 0x8e490024  lw          $t1, 0x24($s2)
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d66fc:
    // 0x2d66fc: 0x240500a9  addiu       $a1, $zero, 0xA9
    ctx->pc = 0x2d66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_2d6700:
    // 0x2d6700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6704:
    // 0x2d6704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6708:
    // 0x2d6708: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d6708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d670c:
    // 0x2d670c: 0xc088178  jal         func_2205E0
label_2d6710:
    if (ctx->pc == 0x2D6710u) {
        ctx->pc = 0x2D6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D670Cu;
        // 0x2d6710: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6714u;
        goto label_2d6714;
    }
    ctx->pc = 0x2D670Cu;
    SET_GPR_U32(ctx, 31, 0x2D6714u);
    ctx->pc = 0x2D6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D670Cu;
    // 0x2d6710: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D670Cu, 0x2D6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6714u;
label_2d6714:
    // 0x2d6714: 0x8e630360  lw          $v1, 0x360($s3)
    ctx->pc = 0x2d6714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 864)));
label_2d6718:
    // 0x2d6718: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2d671c:
    // 0x2d671c: 0xc0e4060  jal         func_390180
label_2d6720:
    if (ctx->pc == 0x2D6720u) {
        ctx->pc = 0x2D6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D671Cu;
        // 0x2d6720: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6724u;
        goto label_2d6724;
    }
    ctx->pc = 0x2D671Cu;
    SET_GPR_U32(ctx, 31, 0x2D6724u);
    ctx->pc = 0x2D6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D671Cu;
    // 0x2d6720: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D671Cu, 0x2D6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6724u;
label_2d6724:
    // 0x2d6724: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2d6728:
    if (ctx->pc == 0x2D6728u) {
        ctx->pc = 0x2D672Cu;
        goto label_2d672c;
    }
    ctx->pc = 0x2D6724u;
    {
        const bool branch_taken_0x2d6724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6724) {
            ctx->pc = 0x2D6754u;
            goto label_2d6754;
        }
    }
    ctx->pc = 0x2D672Cu;
label_2d672c:
    // 0x2d672c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6730:
    // 0x2d6730: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d6730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d6734:
    // 0x2d6734: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d6734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d6738:
    // 0x2d6738: 0x40f809  jalr        $v0
label_2d673c:
    if (ctx->pc == 0x2D673Cu) {
        ctx->pc = 0x2D673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6738u;
        // 0x2d673c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6740u;
        goto label_2d6740;
    }
    ctx->pc = 0x2D6738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6740u);
        ctx->pc = 0x2D673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6738u;
        // 0x2d673c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6738u, 0x2D6740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6740u;
label_2d6740:
    // 0x2d6740: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d6740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2d6744:
    // 0x2d6744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6748:
    // 0x2d6748: 0x24a56448  addiu       $a1, $a1, 0x6448
    ctx->pc = 0x2d6748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25672));
label_2d674c:
    // 0x2d674c: 0xc08e2a2  jal         func_238A88
label_2d6750:
    if (ctx->pc == 0x2D6750u) {
        ctx->pc = 0x2D6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D674Cu;
        // 0x2d6750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6754u;
        goto label_2d6754;
    }
    ctx->pc = 0x2D674Cu;
    SET_GPR_U32(ctx, 31, 0x2D6754u);
    ctx->pc = 0x2D6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D674Cu;
    // 0x2d6750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x2D674Cu, 0x2D6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6754u;
label_2d6754:
    // 0x2d6754: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2d6758:
    if (ctx->pc == 0x2D6758u) {
        ctx->pc = 0x2D6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6754u;
        // 0x2d6758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D675Cu;
        goto label_2d675c;
    }
    ctx->pc = 0x2D6754u;
    {
        const bool branch_taken_0x2d6754 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6754u;
        // 0x2d6758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6754) {
            ctx->pc = 0x2D6774u;
            goto label_2d6774;
        }
    }
    ctx->pc = 0x2D675Cu;
label_2d675c:
    // 0x2d675c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d6760:
    // 0x2d6760: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6764:
    // 0x2d6764: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2d6764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2d6768:
    // 0x2d6768: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2d6768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2d676c:
    // 0x2d676c: 0xc0a6800  jal         func_29A000
label_2d6770:
    if (ctx->pc == 0x2D6770u) {
        ctx->pc = 0x2D6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D676Cu;
        // 0x2d6770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6774u;
        goto label_2d6774;
    }
    ctx->pc = 0x2D676Cu;
    SET_GPR_U32(ctx, 31, 0x2D6774u);
    ctx->pc = 0x2D6770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D676Cu;
    // 0x2d6770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D676Cu, 0x2D6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6774u;
label_2d6774:
    // 0x2d6774: 0x8e620438  lw          $v0, 0x438($s3)
    ctx->pc = 0x2d6774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1080)));
label_2d6778:
    // 0x2d6778: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2d677c:
    if (ctx->pc == 0x2D677Cu) {
        ctx->pc = 0x2D677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6778u;
        // 0x2d677c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6780u;
        goto label_2d6780;
    }
    ctx->pc = 0x2D6778u;
    {
        const bool branch_taken_0x2d6778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6778) {
            ctx->pc = 0x2D677Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6778u;
            // 0x2d677c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67C0u;
            goto label_2d67c0;
        }
    }
    ctx->pc = 0x2D6780u;
label_2d6780:
    // 0x2d6780: 0xc0a367c  jal         func_28D9F0
label_2d6784:
    if (ctx->pc == 0x2D6784u) {
        ctx->pc = 0x2D6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6780u;
        // 0x2d6784: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6788u;
        goto label_2d6788;
    }
    ctx->pc = 0x2D6780u;
    SET_GPR_U32(ctx, 31, 0x2D6788u);
    ctx->pc = 0x2D6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6780u;
    // 0x2d6784: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D6780u, 0x2D6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6788u;
label_2d6788:
    // 0x2d6788: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2d678c:
    if (ctx->pc == 0x2D678Cu) {
        ctx->pc = 0x2D678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6788u;
        // 0x2d678c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6790u;
        goto label_2d6790;
    }
    ctx->pc = 0x2D6788u;
    {
        const bool branch_taken_0x2d6788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6788u;
        // 0x2d678c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6788) {
            ctx->pc = 0x2D6838u;
            goto label_2d6838;
        }
    }
    ctx->pc = 0x2D6790u;
label_2d6790:
    // 0x2d6790: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d6794:
    // 0x2d6794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d6794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d6798:
    // 0x2d6798: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d679c:
    // 0x2d679c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d679cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d67a0:
    // 0x2d67a0: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d67a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d67a4:
    // 0x2d67a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d67a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d67a8:
    // 0x2d67a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d67a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d67ac:
    // 0x2d67ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d67acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d67b0:
    // 0x2d67b0: 0xc0be968  jal         func_2FA5A0
label_2d67b4:
    if (ctx->pc == 0x2D67B4u) {
        ctx->pc = 0x2D67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B0u;
        // 0x2d67b4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67B8u;
        goto label_2d67b8;
    }
    ctx->pc = 0x2D67B0u;
    SET_GPR_U32(ctx, 31, 0x2D67B8u);
    ctx->pc = 0x2D67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67B0u;
    // 0x2d67b4: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D67B0u, 0x2D67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67B8u;
label_2d67b8:
    // 0x2d67b8: 0x1000012c  b           . + 4 + (0x12C << 2)
label_2d67bc:
    if (ctx->pc == 0x2D67BCu) {
        ctx->pc = 0x2D67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B8u;
        // 0x2d67bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67C0u;
        goto label_2d67c0;
    }
    ctx->pc = 0x2D67B8u;
    {
        const bool branch_taken_0x2d67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B8u;
        // 0x2d67bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67b8) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D67C0u;
label_2d67c0:
    // 0x2d67c0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2d67c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d67c4:
    // 0x2d67c4: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2d67c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2d67c8:
    // 0x2d67c8: 0x10a00128  beqz        $a1, . + 4 + (0x128 << 2)
label_2d67cc:
    if (ctx->pc == 0x2D67CCu) {
        ctx->pc = 0x2D67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67C8u;
        // 0x2d67cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67D0u;
        goto label_2d67d0;
    }
    ctx->pc = 0x2D67C8u;
    {
        const bool branch_taken_0x2d67c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67C8u;
        // 0x2d67cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67c8) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D67D0u;
label_2d67d0:
    // 0x2d67d0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2d67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2d67d4:
    // 0x2d67d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d67d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d67d8:
    // 0x2d67d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d67dc:
    // 0x2d67dc: 0x40f809  jalr        $v0
label_2d67e0:
    if (ctx->pc == 0x2D67E0u) {
        ctx->pc = 0x2D67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67DCu;
        // 0x2d67e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67E4u;
        goto label_2d67e4;
    }
    ctx->pc = 0x2D67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D67E4u);
        ctx->pc = 0x2D67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67DCu;
        // 0x2d67e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67DCu, 0x2D67E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D67E4u;
label_2d67e4:
    // 0x2d67e4: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2d67e8:
    // 0x2d67e8: 0x14430120  bne         $v0, $v1, . + 4 + (0x120 << 2)
label_2d67ec:
    if (ctx->pc == 0x2D67ECu) {
        ctx->pc = 0x2D67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67E8u;
        // 0x2d67ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67F0u;
        goto label_2d67f0;
    }
    ctx->pc = 0x2D67E8u;
    {
        const bool branch_taken_0x2d67e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67E8u;
        // 0x2d67ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67e8) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D67F0u;
label_2d67f0:
    // 0x2d67f0: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_2d67f4:
    // 0x2d67f4: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d67f8:
    // 0x2d67f8: 0xc058ff0  jal         func_163FC0
label_2d67fc:
    if (ctx->pc == 0x2D67FCu) {
        ctx->pc = 0x2D67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67F8u;
        // 0x2d67fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6800u;
        goto label_2d6800;
    }
    ctx->pc = 0x2D67F8u;
    SET_GPR_U32(ctx, 31, 0x2D6800u);
    ctx->pc = 0x2D67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67F8u;
    // 0x2d67fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2D67F8u, 0x2D6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6800u;
label_2d6800:
    // 0x2d6800: 0x1040011a  beqz        $v0, . + 4 + (0x11A << 2)
label_2d6804:
    if (ctx->pc == 0x2D6804u) {
        ctx->pc = 0x2D6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6800u;
        // 0x2d6804: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6808u;
        goto label_2d6808;
    }
    ctx->pc = 0x2D6800u;
    {
        const bool branch_taken_0x2d6800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6800u;
        // 0x2d6804: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6800) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D6808u;
label_2d6808:
    // 0x2d6808: 0xc0a367c  jal         func_28D9F0
label_2d680c:
    if (ctx->pc == 0x2D680Cu) {
        ctx->pc = 0x2D680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6808u;
        // 0x2d680c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6810u;
        goto label_2d6810;
    }
    ctx->pc = 0x2D6808u;
    SET_GPR_U32(ctx, 31, 0x2D6810u);
    ctx->pc = 0x2D680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6808u;
    // 0x2d680c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D6808u, 0x2D6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6810u;
label_2d6810:
    // 0x2d6810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d6814:
    if (ctx->pc == 0x2D6814u) {
        ctx->pc = 0x2D6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6810u;
        // 0x2d6814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6818u;
        goto label_2d6818;
    }
    ctx->pc = 0x2D6810u;
    {
        const bool branch_taken_0x2d6810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6810u;
        // 0x2d6814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6810) {
            ctx->pc = 0x2D6838u;
            goto label_2d6838;
        }
    }
    ctx->pc = 0x2D6818u;
label_2d6818:
    // 0x2d6818: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d681c:
    // 0x2d681c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d6820:
    // 0x2d6820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d6820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d6824:
    // 0x2d6824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6828:
    // 0x2d6828: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d6828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d682c:
    // 0x2d682c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d682cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6830:
    // 0x2d6830: 0xc0be8c0  jal         func_2FA300
label_2d6834:
    if (ctx->pc == 0x2D6834u) {
        ctx->pc = 0x2D6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6830u;
        // 0x2d6834: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6838u;
        goto label_2d6838;
    }
    ctx->pc = 0x2D6830u;
    SET_GPR_U32(ctx, 31, 0x2D6838u);
    ctx->pc = 0x2D6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6830u;
    // 0x2d6834: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D6830u, 0x2D6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6838u;
label_2d6838:
    // 0x2d6838: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2d683c:
    if (ctx->pc == 0x2D683Cu) {
        ctx->pc = 0x2D683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6838u;
        // 0x2d683c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6840u;
        goto label_2d6840;
    }
    ctx->pc = 0x2D6838u;
    {
        const bool branch_taken_0x2d6838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6838u;
        // 0x2d683c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6838) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D6840u;
label_2d6840:
    // 0x2d6840: 0x1471003c  bne         $v1, $s1, . + 4 + (0x3C << 2)
label_2d6844:
    if (ctx->pc == 0x2D6844u) {
        ctx->pc = 0x2D6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6840u;
        // 0x2d6844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6848u;
        goto label_2d6848;
    }
    ctx->pc = 0x2D6840u;
    {
        const bool branch_taken_0x2d6840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6840u;
        // 0x2d6844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6840) {
            ctx->pc = 0x2D6934u;
            goto label_2d6934;
        }
    }
    ctx->pc = 0x2D6848u;
label_2d6848:
    // 0x2d6848: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2d6848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2d684c:
    // 0x2d684c: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_2d6850:
    if (ctx->pc == 0x2D6850u) {
        ctx->pc = 0x2D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D684Cu;
        // 0x2d6850: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6854u;
        goto label_2d6854;
    }
    ctx->pc = 0x2D684Cu;
    {
        const bool branch_taken_0x2d684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D684Cu;
        // 0x2d6850: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d684c) {
            ctx->pc = 0x2D68DCu;
            goto label_2d68dc;
        }
    }
    ctx->pc = 0x2D6854u;
label_2d6854:
    // 0x2d6854: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2d6858:
    // 0x2d6858: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d685c:
    // 0x2d685c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d6860:
    // 0x2d6860: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d6860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d6864:
    // 0x2d6864: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d6864u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d6868:
    // 0x2d6868: 0xc10587a  jal         func_4161E8
label_2d686c:
    if (ctx->pc == 0x2D686Cu) {
        ctx->pc = 0x2D686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6868u;
        // 0x2d686c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6870u;
        goto label_2d6870;
    }
    ctx->pc = 0x2D6868u;
    SET_GPR_U32(ctx, 31, 0x2D6870u);
    ctx->pc = 0x2D686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6868u;
    // 0x2d686c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D6868u, 0x2D6870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6870u;
label_2d6870:
    // 0x2d6870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6874:
    // 0x2d6874: 0xc0cdb38  jal         func_336CE0
label_2d6878:
    if (ctx->pc == 0x2D6878u) {
        ctx->pc = 0x2D6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6874u;
        // 0x2d6878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D687Cu;
        goto label_2d687c;
    }
    ctx->pc = 0x2D6874u;
    SET_GPR_U32(ctx, 31, 0x2D687Cu);
    ctx->pc = 0x2D6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6874u;
    // 0x2d6878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D6874u, 0x2D687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D687Cu;
label_2d687c:
    // 0x2d687c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d687cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d6880:
    // 0x2d6880: 0x0  nop
    ctx->pc = 0x2d6880u;
    // NOP
label_2d6884:
    // 0x2d6884: 0x450000f9  bc1f        . + 4 + (0xF9 << 2)
label_2d6888:
    if (ctx->pc == 0x2D6888u) {
        ctx->pc = 0x2D6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6884u;
        // 0x2d6888: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D688Cu;
        goto label_2d688c;
    }
    ctx->pc = 0x2D6884u;
    {
        const bool branch_taken_0x2d6884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6884u;
        // 0x2d6888: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6884) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D688Cu;
label_2d688c:
    // 0x2d688c: 0xc0a367c  jal         func_28D9F0
label_2d6890:
    if (ctx->pc == 0x2D6890u) {
        ctx->pc = 0x2D6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D688Cu;
        // 0x2d6890: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6894u;
        goto label_2d6894;
    }
    ctx->pc = 0x2D688Cu;
    SET_GPR_U32(ctx, 31, 0x2D6894u);
    ctx->pc = 0x2D6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D688Cu;
    // 0x2d6890: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D688Cu, 0x2D6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6894u;
label_2d6894:
    // 0x2d6894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6898:
    // 0x2d6898: 0x120000f6  beqz        $s0, . + 4 + (0xF6 << 2)
label_2d689c:
    if (ctx->pc == 0x2D689Cu) {
        ctx->pc = 0x2D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6898u;
        // 0x2d689c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68A0u;
        goto label_2d68a0;
    }
    ctx->pc = 0x2D6898u;
    {
        const bool branch_taken_0x2d6898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6898u;
        // 0x2d689c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6898) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D68A0u;
label_2d68a0:
    // 0x2d68a0: 0xc10587a  jal         func_4161E8
label_2d68a4:
    if (ctx->pc == 0x2D68A4u) {
        ctx->pc = 0x2D68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68A0u;
        // 0x2d68a4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68A8u;
        goto label_2d68a8;
    }
    ctx->pc = 0x2D68A0u;
    SET_GPR_U32(ctx, 31, 0x2D68A8u);
    ctx->pc = 0x2D68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68A0u;
    // 0x2d68a4: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D68A0u, 0x2D68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68A8u;
label_2d68a8:
    // 0x2d68a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2d68ac:
    // 0x2d68ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d68b0:
    // 0x2d68b0: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2d68b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2d68b4:
    // 0x2d68b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d68b8:
    // 0x2d68b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d68b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d68bc:
    // 0x2d68bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d68bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d68c0:
    // 0x2d68c0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d68c4:
    // 0x2d68c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d68c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d68c8:
    // 0x2d68c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d68c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d68cc:
    // 0x2d68cc: 0xc0bee7a  jal         func_2FB9E8
label_2d68d0:
    if (ctx->pc == 0x2D68D0u) {
        ctx->pc = 0x2D68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68CCu;
        // 0x2d68d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68D4u;
        goto label_2d68d4;
    }
    ctx->pc = 0x2D68CCu;
    SET_GPR_U32(ctx, 31, 0x2D68D4u);
    ctx->pc = 0x2D68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68CCu;
    // 0x2d68d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D68CCu, 0x2D68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68D4u;
label_2d68d4:
    // 0x2d68d4: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2d68d8:
    if (ctx->pc == 0x2D68D8u) {
        ctx->pc = 0x2D68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68D4u;
        // 0x2d68d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68DCu;
        goto label_2d68dc;
    }
    ctx->pc = 0x2D68D4u;
    {
        const bool branch_taken_0x2d68d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68D4u;
        // 0x2d68d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68d4) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D68DCu;
label_2d68dc:
    // 0x2d68dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d68e0:
    // 0x2d68e0: 0xc0b588a  jal         func_2D6228
label_2d68e4:
    if (ctx->pc == 0x2D68E4u) {
        ctx->pc = 0x2D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E0u;
        // 0x2d68e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68E8u;
        goto label_2d68e8;
    }
    ctx->pc = 0x2D68E0u;
    SET_GPR_U32(ctx, 31, 0x2D68E8u);
    ctx->pc = 0x2D68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68E0u;
    // 0x2d68e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6228u, 0x2D68E0u, 0x2D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68E8u;
label_2d68e8:
    // 0x2d68e8: 0x145100e0  bne         $v0, $s1, . + 4 + (0xE0 << 2)
label_2d68ec:
    if (ctx->pc == 0x2D68ECu) {
        ctx->pc = 0x2D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E8u;
        // 0x2d68ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68F0u;
        goto label_2d68f0;
    }
    ctx->pc = 0x2D68E8u;
    {
        const bool branch_taken_0x2d68e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E8u;
        // 0x2d68ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68e8) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D68F0u;
label_2d68f0:
    // 0x2d68f0: 0xc0a367c  jal         func_28D9F0
label_2d68f4:
    if (ctx->pc == 0x2D68F4u) {
        ctx->pc = 0x2D68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F0u;
        // 0x2d68f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68F8u;
        goto label_2d68f8;
    }
    ctx->pc = 0x2D68F0u;
    SET_GPR_U32(ctx, 31, 0x2D68F8u);
    ctx->pc = 0x2D68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68F0u;
    // 0x2d68f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D68F0u, 0x2D68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68F8u;
label_2d68f8:
    // 0x2d68f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d68fc:
    // 0x2d68fc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2d6900:
    if (ctx->pc == 0x2D6900u) {
        ctx->pc = 0x2D6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68FCu;
        // 0x2d6900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6904u;
        goto label_2d6904;
    }
    ctx->pc = 0x2D68FCu;
    {
        const bool branch_taken_0x2d68fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68FCu;
        // 0x2d6900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68fc) {
            ctx->pc = 0x2D692Cu;
            goto label_2d692c;
        }
    }
    ctx->pc = 0x2D6904u;
label_2d6904:
    // 0x2d6904: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6908:
    // 0x2d6908: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d6908u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d690c:
    // 0x2d690c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d690cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d6910:
    // 0x2d6910: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d6914:
    // 0x2d6914: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6918:
    // 0x2d6918: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d6918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d691c:
    // 0x2d691c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d691cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6920:
    // 0x2d6920: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x2d6920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2d6924:
    // 0x2d6924: 0xc0bee7a  jal         func_2FB9E8
label_2d6928:
    if (ctx->pc == 0x2D6928u) {
        ctx->pc = 0x2D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6924u;
        // 0x2d6928: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D692Cu;
        goto label_2d692c;
    }
    ctx->pc = 0x2D6924u;
    SET_GPR_U32(ctx, 31, 0x2D692Cu);
    ctx->pc = 0x2D6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6924u;
    // 0x2d6928: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D6924u, 0x2D692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D692Cu;
label_2d692c:
    // 0x2d692c: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2d6930:
    if (ctx->pc == 0x2D6930u) {
        ctx->pc = 0x2D6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D692Cu;
        // 0x2d6930: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6934u;
        goto label_2d6934;
    }
    ctx->pc = 0x2D692Cu;
    {
        const bool branch_taken_0x2d692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D692Cu;
        // 0x2d6930: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d692c) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D6934u;
label_2d6934:
    // 0x2d6934: 0x146200cf  bne         $v1, $v0, . + 4 + (0xCF << 2)
label_2d6938:
    if (ctx->pc == 0x2D6938u) {
        ctx->pc = 0x2D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6934u;
        // 0x2d6938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D693Cu;
        goto label_2d693c;
    }
    ctx->pc = 0x2D6934u;
    {
        const bool branch_taken_0x2d6934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6934u;
        // 0x2d6938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6934) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D693Cu;
label_2d693c:
    // 0x2d693c: 0xc088e88  jal         func_223A20
label_2d6940:
    if (ctx->pc == 0x2D6940u) {
        ctx->pc = 0x2D6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D693Cu;
        // 0x2d6940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6944u;
        goto label_2d6944;
    }
    ctx->pc = 0x2D693Cu;
    SET_GPR_U32(ctx, 31, 0x2D6944u);
    ctx->pc = 0x2D6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D693Cu;
    // 0x2d6940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2D693Cu, 0x2D6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6944u;
label_2d6944:
    // 0x2d6944: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2d6948:
    if (ctx->pc == 0x2D6948u) {
        ctx->pc = 0x2D6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6944u;
        // 0x2d6948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D694Cu;
        goto label_2d694c;
    }
    ctx->pc = 0x2D6944u;
    {
        const bool branch_taken_0x2d6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6944u;
        // 0x2d6948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6944) {
            ctx->pc = 0x2D6A54u;
            goto label_2d6a54;
        }
    }
    ctx->pc = 0x2D694Cu;
label_2d694c:
    // 0x2d694c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2d694cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2d6950:
    // 0x2d6950: 0xc089998  jal         func_226660
label_2d6954:
    if (ctx->pc == 0x2D6954u) {
        ctx->pc = 0x2D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6950u;
        // 0x2d6954: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6958u;
        goto label_2d6958;
    }
    ctx->pc = 0x2D6950u;
    SET_GPR_U32(ctx, 31, 0x2D6958u);
    ctx->pc = 0x2D6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6950u;
    // 0x2d6954: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D6950u, 0x2D6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6958u;
label_2d6958:
    // 0x2d6958: 0x105100c6  beq         $v0, $s1, . + 4 + (0xC6 << 2)
label_2d695c:
    if (ctx->pc == 0x2D695Cu) {
        ctx->pc = 0x2D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6958u;
        // 0x2d695c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6960u;
        goto label_2d6960;
    }
    ctx->pc = 0x2D6958u;
    {
        const bool branch_taken_0x2d6958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6958u;
        // 0x2d695c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6958) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D6960u;
label_2d6960:
    // 0x2d6960: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x2d6960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_2d6964:
    // 0x2d6964: 0x54510023  bnel        $v0, $s1, . + 4 + (0x23 << 2)
label_2d6968:
    if (ctx->pc == 0x2D6968u) {
        ctx->pc = 0x2D6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6964u;
        // 0x2d6968: 0x92430034  lbu         $v1, 0x34($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D696Cu;
        goto label_2d696c;
    }
    ctx->pc = 0x2D6964u;
    {
        const bool branch_taken_0x2d6964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d6964) {
            ctx->pc = 0x2D6968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6964u;
            // 0x2d6968: 0x92430034  lbu         $v1, 0x34($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D69F4u;
            goto label_2d69f4;
        }
    }
    ctx->pc = 0x2D696Cu;
label_2d696c:
    // 0x2d696c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d6970:
    // 0x2d6970: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d6970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d6974:
    // 0x2d6974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6978:
    // 0x2d6978: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d6978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d697c:
    // 0x2d697c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d6980:
    // 0x2d6980: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d6980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2d6984:
    // 0x2d6984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6988:
    // 0x2d6988: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d698c:
    // 0x2d698c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d698cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6990:
    // 0x2d6990: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2d6990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6994:
    // 0x2d6994: 0xc088178  jal         func_2205E0
label_2d6998:
    if (ctx->pc == 0x2D6998u) {
        ctx->pc = 0x2D6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6994u;
        // 0x2d6998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D699Cu;
        goto label_2d699c;
    }
    ctx->pc = 0x2D6994u;
    SET_GPR_U32(ctx, 31, 0x2D699Cu);
    ctx->pc = 0x2D6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6994u;
    // 0x2d6998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D6994u, 0x2D699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D699Cu;
label_2d699c:
    // 0x2d699c: 0x8e630460  lw          $v1, 0x460($s3)
    ctx->pc = 0x2d699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1120)));
label_2d69a0:
    // 0x2d69a0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2d69a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d69a4:
    // 0x2d69a4: 0x54710038  bnel        $v1, $s1, . + 4 + (0x38 << 2)
label_2d69a8:
    if (ctx->pc == 0x2D69A8u) {
        ctx->pc = 0x2D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69A4u;
        // 0x2d69a8: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69ACu;
        goto label_2d69ac;
    }
    ctx->pc = 0x2D69A4u;
    {
        const bool branch_taken_0x2d69a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d69a4) {
            ctx->pc = 0x2D69A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D69A4u;
            // 0x2d69a8: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6A88u;
            goto label_2d6a88;
        }
    }
    ctx->pc = 0x2D69ACu;
label_2d69ac:
    // 0x2d69ac: 0xc0a367c  jal         func_28D9F0
label_2d69b0:
    if (ctx->pc == 0x2D69B0u) {
        ctx->pc = 0x2D69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69ACu;
        // 0x2d69b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69B4u;
        goto label_2d69b4;
    }
    ctx->pc = 0x2D69ACu;
    SET_GPR_U32(ctx, 31, 0x2D69B4u);
    ctx->pc = 0x2D69B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69ACu;
    // 0x2d69b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D69ACu, 0x2D69B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69B4u;
label_2d69b4:
    // 0x2d69b4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2d69b8:
    if (ctx->pc == 0x2D69B8u) {
        ctx->pc = 0x2D69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69B4u;
        // 0x2d69b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69BCu;
        goto label_2d69bc;
    }
    ctx->pc = 0x2D69B4u;
    {
        const bool branch_taken_0x2d69b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69B4u;
        // 0x2d69b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69b4) {
            ctx->pc = 0x2D6A84u;
            goto label_2d6a84;
        }
    }
    ctx->pc = 0x2D69BCu;
label_2d69bc:
    // 0x2d69bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d69bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d69c0:
    // 0x2d69c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d69c4:
    // 0x2d69c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d69c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d69c8:
    // 0x2d69c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d69c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d69cc:
    // 0x2d69cc: 0x2406029d  addiu       $a2, $zero, 0x29D
    ctx->pc = 0x2d69ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2d69d0:
    // 0x2d69d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d69d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d69d4:
    // 0x2d69d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d69d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d69d8:
    // 0x2d69d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d69d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d69dc:
    // 0x2d69dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d69dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d69e0:
    // 0x2d69e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d69e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d69e4:
    // 0x2d69e4: 0xc0be968  jal         func_2FA5A0
label_2d69e8:
    if (ctx->pc == 0x2D69E8u) {
        ctx->pc = 0x2D69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69E4u;
        // 0x2d69e8: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69ECu;
        goto label_2d69ec;
    }
    ctx->pc = 0x2D69E4u;
    SET_GPR_U32(ctx, 31, 0x2D69ECu);
    ctx->pc = 0x2D69E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69E4u;
    // 0x2d69e8: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D69E4u, 0x2D69ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69ECu;
label_2d69ec:
    // 0x2d69ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_2d69f0:
    if (ctx->pc == 0x2D69F0u) {
        ctx->pc = 0x2D69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69ECu;
        // 0x2d69f0: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69F4u;
        goto label_2d69f4;
    }
    ctx->pc = 0x2D69ECu;
    {
        const bool branch_taken_0x2d69ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69ECu;
        // 0x2d69f0: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69ec) {
            ctx->pc = 0x2D6A88u;
            goto label_2d6a88;
        }
    }
    ctx->pc = 0x2D69F4u;
label_2d69f4:
    // 0x2d69f4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_2d69f8:
    if (ctx->pc == 0x2D69F8u) {
        ctx->pc = 0x2D69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69F4u;
        // 0x2d69f8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D69FCu;
        goto label_2d69fc;
    }
    ctx->pc = 0x2D69F4u;
    {
        const bool branch_taken_0x2d69f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69F4u;
        // 0x2d69f8: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69f4) {
            ctx->pc = 0x2D6A5Cu;
            goto label_2d6a5c;
        }
    }
    ctx->pc = 0x2D69FCu;
label_2d69fc:
    // 0x2d69fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d6a00:
    // 0x2d6a00: 0xa2430034  sb          $v1, 0x34($s2)
    ctx->pc = 0x2d6a00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 3));
label_2d6a04:
    // 0x2d6a04: 0x8e620460  lw          $v0, 0x460($s3)
    ctx->pc = 0x2d6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1120)));
label_2d6a08:
    // 0x2d6a08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d6a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6a0c:
    // 0x2d6a0c: 0x14510099  bne         $v0, $s1, . + 4 + (0x99 << 2)
label_2d6a10:
    if (ctx->pc == 0x2D6A10u) {
        ctx->pc = 0x2D6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A0Cu;
        // 0x2d6a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A14u;
        goto label_2d6a14;
    }
    ctx->pc = 0x2D6A0Cu;
    {
        const bool branch_taken_0x2d6a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A0Cu;
        // 0x2d6a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a0c) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D6A14u;
label_2d6a14:
    // 0x2d6a14: 0xc0a367c  jal         func_28D9F0
label_2d6a18:
    if (ctx->pc == 0x2D6A18u) {
        ctx->pc = 0x2D6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A14u;
        // 0x2d6a18: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A1Cu;
        goto label_2d6a1c;
    }
    ctx->pc = 0x2D6A14u;
    SET_GPR_U32(ctx, 31, 0x2D6A1Cu);
    ctx->pc = 0x2D6A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A14u;
    // 0x2d6a18: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D6A14u, 0x2D6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A1Cu;
label_2d6a1c:
    // 0x2d6a1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d6a20:
    if (ctx->pc == 0x2D6A20u) {
        ctx->pc = 0x2D6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A1Cu;
        // 0x2d6a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A24u;
        goto label_2d6a24;
    }
    ctx->pc = 0x2D6A1Cu;
    {
        const bool branch_taken_0x2d6a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A1Cu;
        // 0x2d6a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a1c) {
            ctx->pc = 0x2D6A54u;
            goto label_2d6a54;
        }
    }
    ctx->pc = 0x2D6A24u;
label_2d6a24:
    // 0x2d6a24: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6a28:
    // 0x2d6a28: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d6a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2d6a2c:
    // 0x2d6a2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d6a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2d6a30:
    // 0x2d6a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6a34:
    // 0x2d6a34: 0x2406029d  addiu       $a2, $zero, 0x29D
    ctx->pc = 0x2d6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
label_2d6a38:
    // 0x2d6a38: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d6a3c:
    // 0x2d6a3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d6a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d6a40:
    // 0x2d6a40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d6a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d6a44:
    // 0x2d6a44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6a48:
    // 0x2d6a48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d6a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6a4c:
    // 0x2d6a4c: 0xc0be968  jal         func_2FA5A0
label_2d6a50:
    if (ctx->pc == 0x2D6A50u) {
        ctx->pc = 0x2D6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A4Cu;
        // 0x2d6a50: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A54u;
        goto label_2d6a54;
    }
    ctx->pc = 0x2D6A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A54u);
    ctx->pc = 0x2D6A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A4Cu;
    // 0x2d6a50: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D6A4Cu, 0x2D6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A54u;
label_2d6a54:
    // 0x2d6a54: 0x10000087  b           . + 4 + (0x87 << 2)
label_2d6a58:
    if (ctx->pc == 0x2D6A58u) {
        ctx->pc = 0x2D6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A54u;
        // 0x2d6a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A5Cu;
        goto label_2d6a5c;
    }
    ctx->pc = 0x2D6A54u;
    {
        const bool branch_taken_0x2d6a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A54u;
        // 0x2d6a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a54) {
            ctx->pc = 0x2D6C74u;
            goto label_2d6c74;
        }
    }
    ctx->pc = 0x2D6A5Cu;
label_2d6a5c:
    // 0x2d6a5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d6a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2d6a60:
    // 0x2d6a60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d6a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6a64:
    // 0x2d6a64: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2d6a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2d6a68:
    // 0x2d6a68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d6a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d6a6c:
    // 0x2d6a6c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2d6a70:
    // 0x2d6a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6a74:
    // 0x2d6a74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6a78:
    // 0x2d6a78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6a7c:
    // 0x2d6a7c: 0xc088178  jal         func_2205E0
label_2d6a80:
    if (ctx->pc == 0x2D6A80u) {
        ctx->pc = 0x2D6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A7Cu;
        // 0x2d6a80: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6A84u;
        goto label_2d6a84;
    }
    ctx->pc = 0x2D6A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A84u);
    ctx->pc = 0x2D6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A7Cu;
    // 0x2d6a80: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D6A7Cu, 0x2D6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A84u;
label_2d6a84:
    // 0x2d6a84: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x2d6a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2d6a88:
    // 0x2d6a88: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2d6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2d6a8c:
    // 0x2d6a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d6a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6a90:
    // 0x2d6a90: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2d6a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2d6a94:
    // 0x2d6a94: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2d6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2d6a98:
    // 0x2d6a98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d6a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d6a9c:
    // 0x2d6a9c: 0xc094904  jal         func_252410
label_2d6aa0:
    if (ctx->pc == 0x2D6AA0u) {
        ctx->pc = 0x2D6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A9Cu;
        // 0x2d6aa0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6AA4u;
        goto label_2d6aa4;
    }
    ctx->pc = 0x2D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D6AA4u);
    ctx->pc = 0x2D6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A9Cu;
    // 0x2d6aa0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2D6A9Cu, 0x2D6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AA4u;
label_2d6aa4:
    // 0x2d6aa4: 0x8e07bd30  lw          $a3, -0x42D0($s0)
    ctx->pc = 0x2d6aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2d6aa8:
    // 0x2d6aa8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d6aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d6aac:
    // 0x2d6aac: 0x92440031  lbu         $a0, 0x31($s2)
    ctx->pc = 0x2d6aacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_2d6ab0:
    // 0x2d6ab0: 0x92450032  lbu         $a1, 0x32($s2)
    ctx->pc = 0x2d6ab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_2d6ab4:
    // 0x2d6ab4: 0xc05b83c  jal         func_16E0F0
label_2d6ab8:
    if (ctx->pc == 0x2D6AB8u) {
        ctx->pc = 0x2D6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AB4u;
        // 0x2d6ab8: 0x8e480024  lw          $t0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6ABCu;
        goto label_2d6abc;
    }
    ctx->pc = 0x2D6AB4u;
    SET_GPR_U32(ctx, 31, 0x2D6ABCu);
    ctx->pc = 0x2D6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AB4u;
    // 0x2d6ab8: 0x8e480024  lw          $t0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E0F0u, 0x2D6AB4u, 0x2D6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ABCu;
label_2d6abc:
    // 0x2d6abc: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_2d6ac0:
    if (ctx->pc == 0x2D6AC0u) {
        ctx->pc = 0x2D6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6ABCu;
        // 0x2d6ac0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6AC4u;
        goto label_2d6ac4;
    }
    ctx->pc = 0x2D6ABCu;
    {
        const bool branch_taken_0x2d6abc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6abc) {
            ctx->pc = 0x2D6AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6ABCu;
            // 0x2d6ac0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6ADCu;
            goto label_2d6adc;
        }
    }
    ctx->pc = 0x2D6AC4u;
label_2d6ac4:
    // 0x2d6ac4: 0xc087502  jal         func_21D408
label_2d6ac8:
    if (ctx->pc == 0x2D6AC8u) {
        ctx->pc = 0x2D6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AC4u;
        // 0x2d6ac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6ACCu;
        goto label_2d6acc;
    }
    ctx->pc = 0x2D6AC4u;
    SET_GPR_U32(ctx, 31, 0x2D6ACCu);
    ctx->pc = 0x2D6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AC4u;
    // 0x2d6ac8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D6AC4u, 0x2D6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6ACCu;
label_2d6acc:
    // 0x2d6acc: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2d6accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d6ad0:
    // 0x2d6ad0: 0xc05a632  jal         func_1698C8
label_2d6ad4:
    if (ctx->pc == 0x2D6AD4u) {
        ctx->pc = 0x2D6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AD0u;
        // 0x2d6ad4: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6AD8u;
        goto label_2d6ad8;
    }
    ctx->pc = 0x2D6AD0u;
    SET_GPR_U32(ctx, 31, 0x2D6AD8u);
    ctx->pc = 0x2D6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AD0u;
    // 0x2d6ad4: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x2D6AD0u, 0x2D6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AD8u;
label_2d6ad8:
    // 0x2d6ad8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6adc:
    // 0x2d6adc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2d6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d6ae0:
    // 0x2d6ae0: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2d6ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2d6ae4:
    // 0x2d6ae4: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_2d6ae8:
    if (ctx->pc == 0x2D6AE8u) {
        ctx->pc = 0x2D6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AE4u;
        // 0x2d6ae8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6AECu;
        goto label_2d6aec;
    }
    ctx->pc = 0x2D6AE4u;
    {
        const bool branch_taken_0x2d6ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ae4) {
            ctx->pc = 0x2D6AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6AE4u;
            // 0x2d6ae8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6B1Cu;
            goto label_2d6b1c;
        }
    }
    ctx->pc = 0x2D6AECu;
label_2d6aec:
    // 0x2d6aec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d6af0:
    // 0x2d6af0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2d6af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2d6af4:
    // 0x2d6af4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2d6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2d6af8:
    // 0x2d6af8: 0x40f809  jalr        $v0
label_2d6afc:
    if (ctx->pc == 0x2D6AFCu) {
        ctx->pc = 0x2D6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AF8u;
        // 0x2d6afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B00u;
        goto label_2d6b00;
    }
    ctx->pc = 0x2D6AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6B00u);
        ctx->pc = 0x2D6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AF8u;
        // 0x2d6afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6AF8u, 0x2D6B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6B00u;
label_2d6b00:
    // 0x2d6b00: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x2d6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2d6b04:
    // 0x2d6b04: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2d6b08:
    if (ctx->pc == 0x2D6B08u) {
        ctx->pc = 0x2D6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B04u;
        // 0x2d6b08: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B0Cu;
        goto label_2d6b0c;
    }
    ctx->pc = 0x2D6B04u;
    {
        const bool branch_taken_0x2d6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d6b04) {
            ctx->pc = 0x2D6B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6B04u;
            // 0x2d6b08: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6B1Cu;
            goto label_2d6b1c;
        }
    }
    ctx->pc = 0x2D6B0Cu;
label_2d6b0c:
    // 0x2d6b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b10:
    // 0x2d6b10: 0xc0c6bda  jal         func_31AF68
label_2d6b14:
    if (ctx->pc == 0x2D6B14u) {
        ctx->pc = 0x2D6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B10u;
        // 0x2d6b14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B18u;
        goto label_2d6b18;
    }
    ctx->pc = 0x2D6B10u;
    SET_GPR_U32(ctx, 31, 0x2D6B18u);
    ctx->pc = 0x2D6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B10u;
    // 0x2d6b14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF68u, 0x2D6B10u, 0x2D6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B18u;
label_2d6b18:
    // 0x2d6b18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6b1c:
    // 0x2d6b1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6b20:
    // 0x2d6b20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d6b24:
    // 0x2d6b24: 0x14640051  bne         $v1, $a0, . + 4 + (0x51 << 2)
label_2d6b28:
    if (ctx->pc == 0x2D6B28u) {
        ctx->pc = 0x2D6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B24u;
        // 0x2d6b28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B2Cu;
        goto label_2d6b2c;
    }
    ctx->pc = 0x2D6B24u;
    {
        const bool branch_taken_0x2d6b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B24u;
        // 0x2d6b28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b24) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D6B2Cu;
label_2d6b2c:
    // 0x2d6b2c: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
label_2d6b30:
    if (ctx->pc == 0x2D6B30u) {
        ctx->pc = 0x2D6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B2Cu;
        // 0x2d6b30: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B34u;
        goto label_2d6b34;
    }
    ctx->pc = 0x2D6B2Cu;
    {
        const bool branch_taken_0x2d6b2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b2c) {
            ctx->pc = 0x2D6B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6B2Cu;
            // 0x2d6b30: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6B54u;
            goto label_2d6b54;
        }
    }
    ctx->pc = 0x2D6B34u;
label_2d6b34:
    // 0x2d6b34: 0xc087502  jal         func_21D408
label_2d6b38:
    if (ctx->pc == 0x2D6B38u) {
        ctx->pc = 0x2D6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B34u;
        // 0x2d6b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B3Cu;
        goto label_2d6b3c;
    }
    ctx->pc = 0x2D6B34u;
    SET_GPR_U32(ctx, 31, 0x2D6B3Cu);
    ctx->pc = 0x2D6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B34u;
    // 0x2d6b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D6B34u, 0x2D6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B3Cu;
label_2d6b3c:
    // 0x2d6b3c: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2d6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2d6b40:
    // 0x2d6b40: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2d6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2d6b44:
    // 0x2d6b44: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2d6b48:
    // 0x2d6b48: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2d6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2d6b4c:
    // 0x2d6b4c: 0xaca305f4  sw          $v1, 0x5F4($a1)
    ctx->pc = 0x2d6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 3));
label_2d6b50:
    // 0x2d6b50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6b54:
    // 0x2d6b54: 0x26760090  addiu       $s6, $s3, 0x90
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2d6b58:
    // 0x2d6b58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d6b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d6b5c:
    // 0x2d6b5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d6b60:
    // 0x2d6b60: 0x40f809  jalr        $v0
label_2d6b64:
    if (ctx->pc == 0x2D6B64u) {
        ctx->pc = 0x2D6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B60u;
        // 0x2d6b64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B68u;
        goto label_2d6b68;
    }
    ctx->pc = 0x2D6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6B68u);
        ctx->pc = 0x2D6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B60u;
        // 0x2d6b64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B60u, 0x2D6B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6B68u;
label_2d6b68:
    // 0x2d6b68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d6b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b6c:
    // 0x2d6b6c: 0xc08e2b8  jal         func_238AE0
label_2d6b70:
    if (ctx->pc == 0x2D6B70u) {
        ctx->pc = 0x2D6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B6Cu;
        // 0x2d6b70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B74u;
        goto label_2d6b74;
    }
    ctx->pc = 0x2D6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2D6B74u);
    ctx->pc = 0x2D6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B6Cu;
    // 0x2d6b70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2D6B6Cu, 0x2D6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B74u;
label_2d6b74:
    // 0x2d6b74: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2d6b74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2d6b78:
    // 0x2d6b78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b7c:
    // 0x2d6b7c: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2d6b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2d6b80:
    // 0x2d6b80: 0xc06cad6  jal         func_1B2B58
label_2d6b84:
    if (ctx->pc == 0x2D6B84u) {
        ctx->pc = 0x2D6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B80u;
        // 0x2d6b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B88u;
        goto label_2d6b88;
    }
    ctx->pc = 0x2D6B80u;
    SET_GPR_U32(ctx, 31, 0x2D6B88u);
    ctx->pc = 0x2D6B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B80u;
    // 0x2d6b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2D6B80u, 0x2D6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B88u;
label_2d6b88:
    // 0x2d6b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b8c:
    // 0x2d6b8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b90:
    // 0x2d6b90: 0xc06ccb8  jal         func_1B32E0
label_2d6b94:
    if (ctx->pc == 0x2D6B94u) {
        ctx->pc = 0x2D6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B90u;
        // 0x2d6b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B98u;
        goto label_2d6b98;
    }
    ctx->pc = 0x2D6B90u;
    SET_GPR_U32(ctx, 31, 0x2D6B98u);
    ctx->pc = 0x2D6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B90u;
    // 0x2d6b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2D6B90u, 0x2D6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B98u;
label_2d6b98:
    // 0x2d6b98: 0xa260019e  sb          $zero, 0x19E($s3)
    ctx->pc = 0x2d6b98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 414), (uint8_t)GPR_U32(ctx, 0));
label_2d6b9c:
    // 0x2d6b9c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d6ba0:
    // 0x2d6ba0: 0x24514b00  addiu       $s1, $v0, 0x4B00
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d6ba4:
    // 0x2d6ba4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2d6ba8:
    // 0x2d6ba8: 0x86c40002  lh          $a0, 0x2($s6)
    ctx->pc = 0x2d6ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d6bac:
    // 0x2d6bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bb0:
    // 0x2d6bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bb4:
    // 0x2d6bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bb8:
    // 0x2d6bb8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d6bbc:
    // 0x2d6bbc: 0xc105df6  jal         func_4177D8
label_2d6bc0:
    if (ctx->pc == 0x2D6BC0u) {
        ctx->pc = 0x2D6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BBCu;
        // 0x2d6bc0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6BC4u;
        goto label_2d6bc4;
    }
    ctx->pc = 0x2D6BBCu;
    SET_GPR_U32(ctx, 31, 0x2D6BC4u);
    ctx->pc = 0x2D6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BBCu;
    // 0x2d6bc0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2D6BBCu, 0x2D6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BC4u;
label_2d6bc4:
    // 0x2d6bc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d6bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bc8:
    // 0x2d6bc8: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_2d6bcc:
    if (ctx->pc == 0x2D6BCCu) {
        ctx->pc = 0x2D6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BC8u;
        // 0x2d6bcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6BD0u;
        goto label_2d6bd0;
    }
    ctx->pc = 0x2D6BC8u;
    {
        const bool branch_taken_0x2d6bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BC8u;
        // 0x2d6bcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6bc8) {
            ctx->pc = 0x2D6C10u;
            goto label_2d6c10;
        }
    }
    ctx->pc = 0x2D6BD0u;
label_2d6bd0:
    // 0x2d6bd0: 0x86d00002  lh          $s0, 0x2($s6)
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2d6bd4:
    // 0x2d6bd4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d6bd8:
    // 0x2d6bd8: 0xc10587a  jal         func_4161E8
label_2d6bdc:
    if (ctx->pc == 0x2D6BDCu) {
        ctx->pc = 0x2D6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BD8u;
        // 0x2d6bdc: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6BE0u;
        goto label_2d6be0;
    }
    ctx->pc = 0x2D6BD8u;
    SET_GPR_U32(ctx, 31, 0x2D6BE0u);
    ctx->pc = 0x2D6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BD8u;
    // 0x2d6bdc: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D6BD8u, 0x2D6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BE0u;
label_2d6be0:
    // 0x2d6be0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6be4:
    // 0x2d6be4: 0xc091e56  jal         func_247958
label_2d6be8:
    if (ctx->pc == 0x2D6BE8u) {
        ctx->pc = 0x2D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BE4u;
        // 0x2d6be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6BECu;
        goto label_2d6bec;
    }
    ctx->pc = 0x2D6BE4u;
    SET_GPR_U32(ctx, 31, 0x2D6BECu);
    ctx->pc = 0x2D6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BE4u;
    // 0x2d6be8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2D6BE4u, 0x2D6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BECu;
label_2d6bec:
    // 0x2d6bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bf0:
    // 0x2d6bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bf4:
    // 0x2d6bf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d6bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bf8:
    // 0x2d6bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bfc:
    // 0x2d6bfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d6bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6c00:
    // 0x2d6c00: 0xc09381e  jal         func_24E078
label_2d6c04:
    if (ctx->pc == 0x2D6C04u) {
        ctx->pc = 0x2D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C00u;
        // 0x2d6c04: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C08u;
        goto label_2d6c08;
    }
    ctx->pc = 0x2D6C00u;
    SET_GPR_U32(ctx, 31, 0x2D6C08u);
    ctx->pc = 0x2D6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C00u;
    // 0x2d6c04: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D6C00u, 0x2D6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C08u;
label_2d6c08:
    // 0x2d6c08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2d6c0c:
    if (ctx->pc == 0x2D6C0Cu) {
        ctx->pc = 0x2D6C10u;
        goto label_2d6c10;
    }
    ctx->pc = 0x2D6C08u;
    {
        const bool branch_taken_0x2d6c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c08) {
            ctx->pc = 0x2D6C24u;
            goto label_2d6c24;
        }
    }
    ctx->pc = 0x2D6C10u;
label_2d6c10:
    // 0x2d6c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c14:
    // 0x2d6c14: 0xc0b530e  jal         func_2D4C38
label_2d6c18:
    if (ctx->pc == 0x2D6C18u) {
        ctx->pc = 0x2D6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C14u;
        // 0x2d6c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C1Cu;
        goto label_2d6c1c;
    }
    ctx->pc = 0x2D6C14u;
    SET_GPR_U32(ctx, 31, 0x2D6C1Cu);
    ctx->pc = 0x2D6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C14u;
    // 0x2d6c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C38u, 0x2D6C14u, 0x2D6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C1Cu;
label_2d6c1c:
    // 0x2d6c1c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2d6c20:
    if (ctx->pc == 0x2D6C20u) {
        ctx->pc = 0x2D6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C1Cu;
        // 0x2d6c20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C24u;
        goto label_2d6c24;
    }
    ctx->pc = 0x2D6C1Cu;
    {
        const bool branch_taken_0x2d6c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C1Cu;
        // 0x2d6c20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c1c) {
            ctx->pc = 0x2D6C6Cu;
            goto label_2d6c6c;
        }
    }
    ctx->pc = 0x2D6C24u;
label_2d6c24:
    // 0x2d6c24: 0xc0a4e54  jal         func_293950
label_2d6c28:
    if (ctx->pc == 0x2D6C28u) {
        ctx->pc = 0x2D6C2Cu;
        goto label_2d6c2c;
    }
    ctx->pc = 0x2D6C24u;
    SET_GPR_U32(ctx, 31, 0x2D6C2Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D6C24u, 0x2D6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C2Cu;
label_2d6c2c:
    // 0x2d6c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c30:
    // 0x2d6c30: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2d6c34:
    if (ctx->pc == 0x2D6C34u) {
        ctx->pc = 0x2D6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C30u;
        // 0x2d6c34: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C38u;
        goto label_2d6c38;
    }
    ctx->pc = 0x2D6C30u;
    {
        const bool branch_taken_0x2d6c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C30u;
        // 0x2d6c34: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c30) {
            ctx->pc = 0x2D6C5Cu;
            goto label_2d6c5c;
        }
    }
    ctx->pc = 0x2D6C38u;
label_2d6c38:
    // 0x2d6c38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d6c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d6c3c:
    // 0x2d6c3c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6c40:
    // 0x2d6c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c44:
    // 0x2d6c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d6c48:
    // 0x2d6c48: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d6c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2d6c4c:
    // 0x2d6c4c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d6c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d6c50:
    // 0x2d6c50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d6c50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d6c54:
    // 0x2d6c54: 0xc0b6a3e  jal         func_2DA8F8
label_2d6c58:
    if (ctx->pc == 0x2D6C58u) {
        ctx->pc = 0x2D6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C54u;
        // 0x2d6c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C5Cu;
        goto label_2d6c5c;
    }
    ctx->pc = 0x2D6C54u;
    SET_GPR_U32(ctx, 31, 0x2D6C5Cu);
    ctx->pc = 0x2D6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C54u;
    // 0x2d6c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2D6C54u, 0x2D6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C5Cu;
label_2d6c5c:
    // 0x2d6c5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d6c60:
    // 0x2d6c60: 0xc0a35d6  jal         func_28D758
label_2d6c64:
    if (ctx->pc == 0x2D6C64u) {
        ctx->pc = 0x2D6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C60u;
        // 0x2d6c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C68u;
        goto label_2d6c68;
    }
    ctx->pc = 0x2D6C60u;
    SET_GPR_U32(ctx, 31, 0x2D6C68u);
    ctx->pc = 0x2D6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C60u;
    // 0x2d6c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D6C60u, 0x2D6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C68u;
label_2d6c68:
    // 0x2d6c68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d6c6c:
    // 0x2d6c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d6c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c70:
    // 0x2d6c70: 0xa2430030  sb          $v1, 0x30($s2)
    ctx->pc = 0x2d6c70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 3));
label_2d6c74:
    // 0x2d6c74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d6c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d6c78:
    // 0x2d6c78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d6c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d6c7c:
    // 0x2d6c7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d6c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d6c80:
    // 0x2d6c80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d6c80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d6c84:
    // 0x2d6c84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d6c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d6c88:
    // 0x2d6c88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d6c88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6c8c:
    // 0x2d6c8c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d6c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6c90:
    // 0x2d6c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6c94:
    // 0x2d6c94: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d6c98:
    // 0x2d6c98: 0x3e00008  jr          $ra
label_2d6c9c:
    if (ctx->pc == 0x2D6C9Cu) {
        ctx->pc = 0x2D6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C98u;
        // 0x2d6c9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6CA0u;
        goto label_fallthrough_0x2d6c98;
    }
    ctx->pc = 0x2D6C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C98u;
        // 0x2d6c9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6c98:
    ctx->pc = 0x2D6CA0u;
}
