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

// Function: sub_001E6778
// Address: 0x1e6778 - 0x1e6cf0
void sub_001E6778_0x1e6778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6778_0x1e6778");
#endif

    switch (ctx->pc) {
        case 0x1e6778u: goto label_1e6778;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e6780u: goto label_1e6780;
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6788u: goto label_1e6788;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e6790u: goto label_1e6790;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e6798u: goto label_1e6798;
        case 0x1e679cu: goto label_1e679c;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67a8u: goto label_1e67a8;
        case 0x1e67acu: goto label_1e67ac;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67bcu: goto label_1e67bc;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67ccu: goto label_1e67cc;
        case 0x1e67d0u: goto label_1e67d0;
        case 0x1e67d4u: goto label_1e67d4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67dcu: goto label_1e67dc;
        case 0x1e67e0u: goto label_1e67e0;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67e8u: goto label_1e67e8;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e67f0u: goto label_1e67f0;
        case 0x1e67f4u: goto label_1e67f4;
        case 0x1e67f8u: goto label_1e67f8;
        case 0x1e67fcu: goto label_1e67fc;
        case 0x1e6800u: goto label_1e6800;
        case 0x1e6804u: goto label_1e6804;
        case 0x1e6808u: goto label_1e6808;
        case 0x1e680cu: goto label_1e680c;
        case 0x1e6810u: goto label_1e6810;
        case 0x1e6814u: goto label_1e6814;
        case 0x1e6818u: goto label_1e6818;
        case 0x1e681cu: goto label_1e681c;
        case 0x1e6820u: goto label_1e6820;
        case 0x1e6824u: goto label_1e6824;
        case 0x1e6828u: goto label_1e6828;
        case 0x1e682cu: goto label_1e682c;
        case 0x1e6830u: goto label_1e6830;
        case 0x1e6834u: goto label_1e6834;
        case 0x1e6838u: goto label_1e6838;
        case 0x1e683cu: goto label_1e683c;
        case 0x1e6840u: goto label_1e6840;
        case 0x1e6844u: goto label_1e6844;
        case 0x1e6848u: goto label_1e6848;
        case 0x1e684cu: goto label_1e684c;
        case 0x1e6850u: goto label_1e6850;
        case 0x1e6854u: goto label_1e6854;
        case 0x1e6858u: goto label_1e6858;
        case 0x1e685cu: goto label_1e685c;
        case 0x1e6860u: goto label_1e6860;
        case 0x1e6864u: goto label_1e6864;
        case 0x1e6868u: goto label_1e6868;
        case 0x1e686cu: goto label_1e686c;
        case 0x1e6870u: goto label_1e6870;
        case 0x1e6874u: goto label_1e6874;
        case 0x1e6878u: goto label_1e6878;
        case 0x1e687cu: goto label_1e687c;
        case 0x1e6880u: goto label_1e6880;
        case 0x1e6884u: goto label_1e6884;
        case 0x1e6888u: goto label_1e6888;
        case 0x1e688cu: goto label_1e688c;
        case 0x1e6890u: goto label_1e6890;
        case 0x1e6894u: goto label_1e6894;
        case 0x1e6898u: goto label_1e6898;
        case 0x1e689cu: goto label_1e689c;
        case 0x1e68a0u: goto label_1e68a0;
        case 0x1e68a4u: goto label_1e68a4;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68acu: goto label_1e68ac;
        case 0x1e68b0u: goto label_1e68b0;
        case 0x1e68b4u: goto label_1e68b4;
        case 0x1e68b8u: goto label_1e68b8;
        case 0x1e68bcu: goto label_1e68bc;
        case 0x1e68c0u: goto label_1e68c0;
        case 0x1e68c4u: goto label_1e68c4;
        case 0x1e68c8u: goto label_1e68c8;
        case 0x1e68ccu: goto label_1e68cc;
        case 0x1e68d0u: goto label_1e68d0;
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68d8u: goto label_1e68d8;
        case 0x1e68dcu: goto label_1e68dc;
        case 0x1e68e0u: goto label_1e68e0;
        case 0x1e68e4u: goto label_1e68e4;
        case 0x1e68e8u: goto label_1e68e8;
        case 0x1e68ecu: goto label_1e68ec;
        case 0x1e68f0u: goto label_1e68f0;
        case 0x1e68f4u: goto label_1e68f4;
        case 0x1e68f8u: goto label_1e68f8;
        case 0x1e68fcu: goto label_1e68fc;
        case 0x1e6900u: goto label_1e6900;
        case 0x1e6904u: goto label_1e6904;
        case 0x1e6908u: goto label_1e6908;
        case 0x1e690cu: goto label_1e690c;
        case 0x1e6910u: goto label_1e6910;
        case 0x1e6914u: goto label_1e6914;
        case 0x1e6918u: goto label_1e6918;
        case 0x1e691cu: goto label_1e691c;
        case 0x1e6920u: goto label_1e6920;
        case 0x1e6924u: goto label_1e6924;
        case 0x1e6928u: goto label_1e6928;
        case 0x1e692cu: goto label_1e692c;
        case 0x1e6930u: goto label_1e6930;
        case 0x1e6934u: goto label_1e6934;
        case 0x1e6938u: goto label_1e6938;
        case 0x1e693cu: goto label_1e693c;
        case 0x1e6940u: goto label_1e6940;
        case 0x1e6944u: goto label_1e6944;
        case 0x1e6948u: goto label_1e6948;
        case 0x1e694cu: goto label_1e694c;
        case 0x1e6950u: goto label_1e6950;
        case 0x1e6954u: goto label_1e6954;
        case 0x1e6958u: goto label_1e6958;
        case 0x1e695cu: goto label_1e695c;
        case 0x1e6960u: goto label_1e6960;
        case 0x1e6964u: goto label_1e6964;
        case 0x1e6968u: goto label_1e6968;
        case 0x1e696cu: goto label_1e696c;
        case 0x1e6970u: goto label_1e6970;
        case 0x1e6974u: goto label_1e6974;
        case 0x1e6978u: goto label_1e6978;
        case 0x1e697cu: goto label_1e697c;
        case 0x1e6980u: goto label_1e6980;
        case 0x1e6984u: goto label_1e6984;
        case 0x1e6988u: goto label_1e6988;
        case 0x1e698cu: goto label_1e698c;
        case 0x1e6990u: goto label_1e6990;
        case 0x1e6994u: goto label_1e6994;
        case 0x1e6998u: goto label_1e6998;
        case 0x1e699cu: goto label_1e699c;
        case 0x1e69a0u: goto label_1e69a0;
        case 0x1e69a4u: goto label_1e69a4;
        case 0x1e69a8u: goto label_1e69a8;
        case 0x1e69acu: goto label_1e69ac;
        case 0x1e69b0u: goto label_1e69b0;
        case 0x1e69b4u: goto label_1e69b4;
        case 0x1e69b8u: goto label_1e69b8;
        case 0x1e69bcu: goto label_1e69bc;
        case 0x1e69c0u: goto label_1e69c0;
        case 0x1e69c4u: goto label_1e69c4;
        case 0x1e69c8u: goto label_1e69c8;
        case 0x1e69ccu: goto label_1e69cc;
        case 0x1e69d0u: goto label_1e69d0;
        case 0x1e69d4u: goto label_1e69d4;
        case 0x1e69d8u: goto label_1e69d8;
        case 0x1e69dcu: goto label_1e69dc;
        case 0x1e69e0u: goto label_1e69e0;
        case 0x1e69e4u: goto label_1e69e4;
        case 0x1e69e8u: goto label_1e69e8;
        case 0x1e69ecu: goto label_1e69ec;
        case 0x1e69f0u: goto label_1e69f0;
        case 0x1e69f4u: goto label_1e69f4;
        case 0x1e69f8u: goto label_1e69f8;
        case 0x1e69fcu: goto label_1e69fc;
        case 0x1e6a00u: goto label_1e6a00;
        case 0x1e6a04u: goto label_1e6a04;
        case 0x1e6a08u: goto label_1e6a08;
        case 0x1e6a0cu: goto label_1e6a0c;
        case 0x1e6a10u: goto label_1e6a10;
        case 0x1e6a14u: goto label_1e6a14;
        case 0x1e6a18u: goto label_1e6a18;
        case 0x1e6a1cu: goto label_1e6a1c;
        case 0x1e6a20u: goto label_1e6a20;
        case 0x1e6a24u: goto label_1e6a24;
        case 0x1e6a28u: goto label_1e6a28;
        case 0x1e6a2cu: goto label_1e6a2c;
        case 0x1e6a30u: goto label_1e6a30;
        case 0x1e6a34u: goto label_1e6a34;
        case 0x1e6a38u: goto label_1e6a38;
        case 0x1e6a3cu: goto label_1e6a3c;
        case 0x1e6a40u: goto label_1e6a40;
        case 0x1e6a44u: goto label_1e6a44;
        case 0x1e6a48u: goto label_1e6a48;
        case 0x1e6a4cu: goto label_1e6a4c;
        case 0x1e6a50u: goto label_1e6a50;
        case 0x1e6a54u: goto label_1e6a54;
        case 0x1e6a58u: goto label_1e6a58;
        case 0x1e6a5cu: goto label_1e6a5c;
        case 0x1e6a60u: goto label_1e6a60;
        case 0x1e6a64u: goto label_1e6a64;
        case 0x1e6a68u: goto label_1e6a68;
        case 0x1e6a6cu: goto label_1e6a6c;
        case 0x1e6a70u: goto label_1e6a70;
        case 0x1e6a74u: goto label_1e6a74;
        case 0x1e6a78u: goto label_1e6a78;
        case 0x1e6a7cu: goto label_1e6a7c;
        case 0x1e6a80u: goto label_1e6a80;
        case 0x1e6a84u: goto label_1e6a84;
        case 0x1e6a88u: goto label_1e6a88;
        case 0x1e6a8cu: goto label_1e6a8c;
        case 0x1e6a90u: goto label_1e6a90;
        case 0x1e6a94u: goto label_1e6a94;
        case 0x1e6a98u: goto label_1e6a98;
        case 0x1e6a9cu: goto label_1e6a9c;
        case 0x1e6aa0u: goto label_1e6aa0;
        case 0x1e6aa4u: goto label_1e6aa4;
        case 0x1e6aa8u: goto label_1e6aa8;
        case 0x1e6aacu: goto label_1e6aac;
        case 0x1e6ab0u: goto label_1e6ab0;
        case 0x1e6ab4u: goto label_1e6ab4;
        case 0x1e6ab8u: goto label_1e6ab8;
        case 0x1e6abcu: goto label_1e6abc;
        case 0x1e6ac0u: goto label_1e6ac0;
        case 0x1e6ac4u: goto label_1e6ac4;
        case 0x1e6ac8u: goto label_1e6ac8;
        case 0x1e6accu: goto label_1e6acc;
        case 0x1e6ad0u: goto label_1e6ad0;
        case 0x1e6ad4u: goto label_1e6ad4;
        case 0x1e6ad8u: goto label_1e6ad8;
        case 0x1e6adcu: goto label_1e6adc;
        case 0x1e6ae0u: goto label_1e6ae0;
        case 0x1e6ae4u: goto label_1e6ae4;
        case 0x1e6ae8u: goto label_1e6ae8;
        case 0x1e6aecu: goto label_1e6aec;
        case 0x1e6af0u: goto label_1e6af0;
        case 0x1e6af4u: goto label_1e6af4;
        case 0x1e6af8u: goto label_1e6af8;
        case 0x1e6afcu: goto label_1e6afc;
        case 0x1e6b00u: goto label_1e6b00;
        case 0x1e6b04u: goto label_1e6b04;
        case 0x1e6b08u: goto label_1e6b08;
        case 0x1e6b0cu: goto label_1e6b0c;
        case 0x1e6b10u: goto label_1e6b10;
        case 0x1e6b14u: goto label_1e6b14;
        case 0x1e6b18u: goto label_1e6b18;
        case 0x1e6b1cu: goto label_1e6b1c;
        case 0x1e6b20u: goto label_1e6b20;
        case 0x1e6b24u: goto label_1e6b24;
        case 0x1e6b28u: goto label_1e6b28;
        case 0x1e6b2cu: goto label_1e6b2c;
        case 0x1e6b30u: goto label_1e6b30;
        case 0x1e6b34u: goto label_1e6b34;
        case 0x1e6b38u: goto label_1e6b38;
        case 0x1e6b3cu: goto label_1e6b3c;
        case 0x1e6b40u: goto label_1e6b40;
        case 0x1e6b44u: goto label_1e6b44;
        case 0x1e6b48u: goto label_1e6b48;
        case 0x1e6b4cu: goto label_1e6b4c;
        case 0x1e6b50u: goto label_1e6b50;
        case 0x1e6b54u: goto label_1e6b54;
        case 0x1e6b58u: goto label_1e6b58;
        case 0x1e6b5cu: goto label_1e6b5c;
        case 0x1e6b60u: goto label_1e6b60;
        case 0x1e6b64u: goto label_1e6b64;
        case 0x1e6b68u: goto label_1e6b68;
        case 0x1e6b6cu: goto label_1e6b6c;
        case 0x1e6b70u: goto label_1e6b70;
        case 0x1e6b74u: goto label_1e6b74;
        case 0x1e6b78u: goto label_1e6b78;
        case 0x1e6b7cu: goto label_1e6b7c;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b84u: goto label_1e6b84;
        case 0x1e6b88u: goto label_1e6b88;
        case 0x1e6b8cu: goto label_1e6b8c;
        case 0x1e6b90u: goto label_1e6b90;
        case 0x1e6b94u: goto label_1e6b94;
        case 0x1e6b98u: goto label_1e6b98;
        case 0x1e6b9cu: goto label_1e6b9c;
        case 0x1e6ba0u: goto label_1e6ba0;
        case 0x1e6ba4u: goto label_1e6ba4;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bacu: goto label_1e6bac;
        case 0x1e6bb0u: goto label_1e6bb0;
        case 0x1e6bb4u: goto label_1e6bb4;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bbcu: goto label_1e6bbc;
        case 0x1e6bc0u: goto label_1e6bc0;
        case 0x1e6bc4u: goto label_1e6bc4;
        case 0x1e6bc8u: goto label_1e6bc8;
        case 0x1e6bccu: goto label_1e6bcc;
        case 0x1e6bd0u: goto label_1e6bd0;
        case 0x1e6bd4u: goto label_1e6bd4;
        case 0x1e6bd8u: goto label_1e6bd8;
        case 0x1e6bdcu: goto label_1e6bdc;
        case 0x1e6be0u: goto label_1e6be0;
        case 0x1e6be4u: goto label_1e6be4;
        case 0x1e6be8u: goto label_1e6be8;
        case 0x1e6becu: goto label_1e6bec;
        case 0x1e6bf0u: goto label_1e6bf0;
        case 0x1e6bf4u: goto label_1e6bf4;
        case 0x1e6bf8u: goto label_1e6bf8;
        case 0x1e6bfcu: goto label_1e6bfc;
        case 0x1e6c00u: goto label_1e6c00;
        case 0x1e6c04u: goto label_1e6c04;
        case 0x1e6c08u: goto label_1e6c08;
        case 0x1e6c0cu: goto label_1e6c0c;
        case 0x1e6c10u: goto label_1e6c10;
        case 0x1e6c14u: goto label_1e6c14;
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c1cu: goto label_1e6c1c;
        case 0x1e6c20u: goto label_1e6c20;
        case 0x1e6c24u: goto label_1e6c24;
        case 0x1e6c28u: goto label_1e6c28;
        case 0x1e6c2cu: goto label_1e6c2c;
        case 0x1e6c30u: goto label_1e6c30;
        case 0x1e6c34u: goto label_1e6c34;
        case 0x1e6c38u: goto label_1e6c38;
        case 0x1e6c3cu: goto label_1e6c3c;
        case 0x1e6c40u: goto label_1e6c40;
        case 0x1e6c44u: goto label_1e6c44;
        case 0x1e6c48u: goto label_1e6c48;
        case 0x1e6c4cu: goto label_1e6c4c;
        case 0x1e6c50u: goto label_1e6c50;
        case 0x1e6c54u: goto label_1e6c54;
        case 0x1e6c58u: goto label_1e6c58;
        case 0x1e6c5cu: goto label_1e6c5c;
        case 0x1e6c60u: goto label_1e6c60;
        case 0x1e6c64u: goto label_1e6c64;
        case 0x1e6c68u: goto label_1e6c68;
        case 0x1e6c6cu: goto label_1e6c6c;
        case 0x1e6c70u: goto label_1e6c70;
        case 0x1e6c74u: goto label_1e6c74;
        case 0x1e6c78u: goto label_1e6c78;
        case 0x1e6c7cu: goto label_1e6c7c;
        case 0x1e6c80u: goto label_1e6c80;
        case 0x1e6c84u: goto label_1e6c84;
        case 0x1e6c88u: goto label_1e6c88;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6c90u: goto label_1e6c90;
        case 0x1e6c94u: goto label_1e6c94;
        case 0x1e6c98u: goto label_1e6c98;
        case 0x1e6c9cu: goto label_1e6c9c;
        case 0x1e6ca0u: goto label_1e6ca0;
        case 0x1e6ca4u: goto label_1e6ca4;
        case 0x1e6ca8u: goto label_1e6ca8;
        case 0x1e6cacu: goto label_1e6cac;
        case 0x1e6cb0u: goto label_1e6cb0;
        case 0x1e6cb4u: goto label_1e6cb4;
        case 0x1e6cb8u: goto label_1e6cb8;
        case 0x1e6cbcu: goto label_1e6cbc;
        case 0x1e6cc0u: goto label_1e6cc0;
        case 0x1e6cc4u: goto label_1e6cc4;
        case 0x1e6cc8u: goto label_1e6cc8;
        case 0x1e6cccu: goto label_1e6ccc;
        case 0x1e6cd0u: goto label_1e6cd0;
        case 0x1e6cd4u: goto label_1e6cd4;
        case 0x1e6cd8u: goto label_1e6cd8;
        case 0x1e6cdcu: goto label_1e6cdc;
        case 0x1e6ce0u: goto label_1e6ce0;
        case 0x1e6ce4u: goto label_1e6ce4;
        case 0x1e6ce8u: goto label_1e6ce8;
        case 0x1e6cecu: goto label_1e6cec;
        default: break;
    }

    ctx->pc = 0x1e6778u;

label_1e6778:
    // 0x1e6778: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1e677c:
    // 0x1e677c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1e6780:
    // 0x1e6780: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1e6784:
    // 0x1e6784: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1e6784u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6788:
    // 0x1e6788: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e6788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1e678c:
    // 0x1e678c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1e6790:
    // 0x1e6790: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e6790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1e6794:
    // 0x1e6794: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e6794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1e6798:
    // 0x1e6798: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e679c:
    // 0x1e679c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1e67a0:
    // 0x1e67a0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e67a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1e67a4:
    // 0x1e67a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e67a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e67a8:
    // 0x1e67a8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1e67ac:
    // 0x1e67ac: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_1e67b0:
    if (ctx->pc == 0x1E67B0u) {
        ctx->pc = 0x1E67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67ACu;
        // 0x1e67b0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67B4u;
        goto label_1e67b4;
    }
    ctx->pc = 0x1E67ACu;
    {
        const bool branch_taken_0x1e67ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67ACu;
        // 0x1e67b0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67ac) {
            ctx->pc = 0x1E6CC4u;
            goto label_1e6cc4;
        }
    }
    ctx->pc = 0x1E67B4u;
label_1e67b4:
    // 0x1e67b4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1e67b8:
    // 0x1e67b8: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
label_1e67bc:
    if (ctx->pc == 0x1E67BCu) {
        ctx->pc = 0x1E67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67B8u;
        // 0x1e67bc: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67C0u;
        goto label_1e67c0;
    }
    ctx->pc = 0x1E67B8u;
    {
        const bool branch_taken_0x1e67b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67B8u;
        // 0x1e67bc: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67b8) {
            ctx->pc = 0x1E6CC8u;
            goto label_1e6cc8;
        }
    }
    ctx->pc = 0x1E67C0u;
label_1e67c0:
    // 0x1e67c0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1e67c4:
    // 0x1e67c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1e67c8:
    if (ctx->pc == 0x1E67C8u) {
        ctx->pc = 0x1E67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67C4u;
        // 0x1e67c8: 0x8fc40040  lw          $a0, 0x40($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67CCu;
        goto label_1e67cc;
    }
    ctx->pc = 0x1E67C4u;
    {
        const bool branch_taken_0x1e67c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e67c4) {
            ctx->pc = 0x1E67C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E67C4u;
            // 0x1e67c8: 0x8fc40040  lw          $a0, 0x40($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E67E0u;
            goto label_1e67e0;
        }
    }
    ctx->pc = 0x1E67CCu;
label_1e67cc:
    // 0x1e67cc: 0xc079980  jal         func_1E6600
label_1e67d0:
    if (ctx->pc == 0x1E67D0u) {
        ctx->pc = 0x1E67D4u;
        goto label_1e67d4;
    }
    ctx->pc = 0x1E67CCu;
    SET_GPR_U32(ctx, 31, 0x1E67D4u);
    ctx->pc = 0x1E6600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6600u, 0x1E67CCu, 0x1E67D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67D4u;
label_1e67d4:
    // 0x1e67d4: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
label_1e67d8:
    if (ctx->pc == 0x1E67D8u) {
        ctx->pc = 0x1E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67D4u;
        // 0x1e67d8: 0xafc20010  sw          $v0, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67DCu;
        goto label_1e67dc;
    }
    ctx->pc = 0x1E67D4u;
    {
        const bool branch_taken_0x1e67d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67D4u;
        // 0x1e67d8: 0xafc20010  sw          $v0, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67d4) {
            ctx->pc = 0x1E6CC0u;
            goto label_1e6cc0;
        }
    }
    ctx->pc = 0x1E67DCu;
label_1e67dc:
    // 0x1e67dc: 0x8fc40040  lw          $a0, 0x40($fp)
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_1e67e0:
    // 0x1e67e0: 0x27d107b0  addiu       $s1, $fp, 0x7B0
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 1968));
label_1e67e4:
    // 0x1e67e4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1e67e8:
    // 0x1e67e8: 0xc05181e  jal         func_146078
label_1e67ec:
    if (ctx->pc == 0x1E67ECu) {
        ctx->pc = 0x1E67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67E8u;
        // 0x1e67ec: 0x27d308b0  addiu       $s3, $fp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67F0u;
        goto label_1e67f0;
    }
    ctx->pc = 0x1E67E8u;
    SET_GPR_U32(ctx, 31, 0x1E67F0u);
    ctx->pc = 0x1E67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67E8u;
    // 0x1e67ec: 0x27d308b0  addiu       $s3, $fp, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1E67E8u, 0x1E67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67F0u;
label_1e67f0:
    // 0x1e67f0: 0x27d409b0  addiu       $s4, $fp, 0x9B0
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 2480));
label_1e67f4:
    // 0x1e67f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1e67f8:
    // 0x1e67f8: 0x27c40040  addiu       $a0, $fp, 0x40
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
label_1e67fc:
    // 0x1e67fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e67fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1e6800:
    // 0x1e6800: 0xc07a546  jal         func_1E9518
label_1e6804:
    if (ctx->pc == 0x1E6804u) {
        ctx->pc = 0x1E6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6800u;
        // 0x1e6804: 0x27d60ab0  addiu       $s6, $fp, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 2736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6808u;
        goto label_1e6808;
    }
    ctx->pc = 0x1E6800u;
    SET_GPR_U32(ctx, 31, 0x1E6808u);
    ctx->pc = 0x1E6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6800u;
    // 0x1e6804: 0x27d60ab0  addiu       $s6, $fp, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1E6800u, 0x1E6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6808u;
label_1e6808:
    // 0x1e6808: 0x27d50bb0  addiu       $s5, $fp, 0xBB0
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 2992));
label_1e680c:
    // 0x1e680c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e6810:
    // 0x1e6810: 0x27c71780  addiu       $a3, $fp, 0x1780
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 6016));
label_1e6814:
    // 0x1e6814: 0x2610f110  addiu       $s0, $s0, -0xEF0
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963472));
label_1e6818:
    // 0x1e6818: 0x27c21390  addiu       $v0, $fp, 0x1390
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 5008));
label_1e681c:
    // 0x1e681c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1e681cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6820:
    // 0x1e6820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6824:
    // 0x1e6824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6828:
    // 0x1e6828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e682c:
    // 0x1e682c: 0x7fc31d60  sq          $v1, 0x1D60($fp)
    ctx->pc = 0x1e682cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 7520), GPR_VEC(ctx, 3));
label_1e6830:
    // 0x1e6830: 0x27d70fa0  addiu       $s7, $fp, 0xFA0
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4000));
label_1e6834:
    // 0x1e6834: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x1e6834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
label_1e6838:
    // 0x1e6838: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e6838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1e683c:
    // 0x1e683c: 0x27c71b70  addiu       $a3, $fp, 0x1B70
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 7024));
label_1e6840:
    // 0x1e6840: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1e6840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1e6844:
    // 0x1e6844: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e6844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6848:
    // 0x1e6848: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e6848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e684c:
    // 0x1e684c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e684cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6850:
    // 0x1e6850: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6850u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6854:
    // 0x1e6854: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e6854u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6858:
    // 0x1e6858: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1e6858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_1e685c:
    // 0x1e685c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6860:
    // 0x1e6860: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6864:
    // 0x1e6864: 0xc068818  jal         func_1A2060
label_1e6868:
    if (ctx->pc == 0x1E6868u) {
        ctx->pc = 0x1E6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6864u;
        // 0x1e6868: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E686Cu;
        goto label_1e686c;
    }
    ctx->pc = 0x1E6864u;
    SET_GPR_U32(ctx, 31, 0x1E686Cu);
    ctx->pc = 0x1E6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6864u;
    // 0x1e6868: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E6864u, 0x1E686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E686Cu;
label_1e686c:
    // 0x1e686c: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6870:
    // 0x1e6870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6874:
    // 0x1e6874: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1e6874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6878:
    // 0x1e6878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e687c:
    // 0x1e687c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e687cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e6880:
    // 0x1e6880: 0xc068848  jal         func_1A2120
label_1e6884:
    if (ctx->pc == 0x1E6884u) {
        ctx->pc = 0x1E6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6880u;
        // 0x1e6884: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6888u;
        goto label_1e6888;
    }
    ctx->pc = 0x1E6880u;
    SET_GPR_U32(ctx, 31, 0x1E6888u);
    ctx->pc = 0x1E6884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6880u;
    // 0x1e6884: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E6880u, 0x1E6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6888u;
label_1e6888:
    // 0x1e6888: 0xc06886e  jal         func_1A21B8
label_1e688c:
    if (ctx->pc == 0x1E688Cu) {
        ctx->pc = 0x1E688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6888u;
        // 0x1e688c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6890u;
        goto label_1e6890;
    }
    ctx->pc = 0x1E6888u;
    SET_GPR_U32(ctx, 31, 0x1E6890u);
    ctx->pc = 0x1E688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6888u;
    // 0x1e688c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E6888u, 0x1E6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6890u;
label_1e6890:
    // 0x1e6890: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e6890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6894:
    // 0x1e6894: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e6894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e6898:
    // 0x1e6898: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1e6898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1e689c:
    // 0x1e689c: 0xc463f2a8  lwc1        $f3, -0xD58($v1)
    ctx->pc = 0x1e689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e68a0:
    // 0x1e68a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1e68a4:
    // 0x1e68a4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e68a8:
    // 0x1e68a8: 0xc482f2ac  lwc1        $f2, -0xD54($a0)
    ctx->pc = 0x1e68a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e68ac:
    // 0x1e68ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e68acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e68b0:
    // 0x1e68b0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1e68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e68b4:
    // 0x1e68b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e68b8:
    // 0x1e68b8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e68bc:
    // 0x1e68bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e68bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e68c0:
    // 0x1e68c0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e68c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e68c4:
    // 0x1e68c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e68c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e68c8:
    // 0x1e68c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e68c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e68cc:
    // 0x1e68cc: 0xc068818  jal         func_1A2060
label_1e68d0:
    if (ctx->pc == 0x1E68D0u) {
        ctx->pc = 0x1E68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68CCu;
        // 0x1e68d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E68D4u;
        goto label_1e68d4;
    }
    ctx->pc = 0x1E68CCu;
    SET_GPR_U32(ctx, 31, 0x1E68D4u);
    ctx->pc = 0x1E68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68CCu;
    // 0x1e68d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E68CCu, 0x1E68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68D4u;
label_1e68d4:
    // 0x1e68d4: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e68d8:
    // 0x1e68d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e68dc:
    // 0x1e68dc: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1e68dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e68e0:
    // 0x1e68e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e68e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e68e4:
    // 0x1e68e4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e68e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e68e8:
    // 0x1e68e8: 0xc068848  jal         func_1A2120
label_1e68ec:
    if (ctx->pc == 0x1E68ECu) {
        ctx->pc = 0x1E68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68E8u;
        // 0x1e68ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E68F0u;
        goto label_1e68f0;
    }
    ctx->pc = 0x1E68E8u;
    SET_GPR_U32(ctx, 31, 0x1E68F0u);
    ctx->pc = 0x1E68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68E8u;
    // 0x1e68ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E68E8u, 0x1E68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68F0u;
label_1e68f0:
    // 0x1e68f0: 0xc06886e  jal         func_1A21B8
label_1e68f4:
    if (ctx->pc == 0x1E68F4u) {
        ctx->pc = 0x1E68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68F0u;
        // 0x1e68f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E68F8u;
        goto label_1e68f8;
    }
    ctx->pc = 0x1E68F0u;
    SET_GPR_U32(ctx, 31, 0x1E68F8u);
    ctx->pc = 0x1E68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68F0u;
    // 0x1e68f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E68F0u, 0x1E68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68F8u;
label_1e68f8:
    // 0x1e68f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e68f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e68fc:
    // 0x1e68fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e6900:
    // 0x1e6900: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1e6900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1e6904:
    // 0x1e6904: 0xc463f2b0  lwc1        $f3, -0xD50($v1)
    ctx->pc = 0x1e6904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e6908:
    // 0x1e6908: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e6908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1e690c:
    // 0x1e690c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6910:
    // 0x1e6910: 0xc482f2b4  lwc1        $f2, -0xD4C($a0)
    ctx->pc = 0x1e6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6914:
    // 0x1e6914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6918:
    // 0x1e6918: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1e6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e691c:
    // 0x1e691c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e6920:
    // 0x1e6920: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e6920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6924:
    // 0x1e6924: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e6924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e6928:
    // 0x1e6928: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e6928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e692c:
    // 0x1e692c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e692cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e6930:
    // 0x1e6930: 0xc068818  jal         func_1A2060
label_1e6934:
    if (ctx->pc == 0x1E6934u) {
        ctx->pc = 0x1E6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6930u;
        // 0x1e6934: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6938u;
        goto label_1e6938;
    }
    ctx->pc = 0x1E6930u;
    SET_GPR_U32(ctx, 31, 0x1E6938u);
    ctx->pc = 0x1E6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6930u;
    // 0x1e6934: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E6930u, 0x1E6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6938u;
label_1e6938:
    // 0x1e6938: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e693c:
    // 0x1e693c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6940:
    // 0x1e6940: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1e6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6944:
    // 0x1e6944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e6948:
    // 0x1e6948: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e6948u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e694c:
    // 0x1e694c: 0xc068848  jal         func_1A2120
label_1e6950:
    if (ctx->pc == 0x1E6950u) {
        ctx->pc = 0x1E6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E694Cu;
        // 0x1e6950: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6954u;
        goto label_1e6954;
    }
    ctx->pc = 0x1E694Cu;
    SET_GPR_U32(ctx, 31, 0x1E6954u);
    ctx->pc = 0x1E6950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E694Cu;
    // 0x1e6950: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E694Cu, 0x1E6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6954u;
label_1e6954:
    // 0x1e6954: 0xc06886e  jal         func_1A21B8
label_1e6958:
    if (ctx->pc == 0x1E6958u) {
        ctx->pc = 0x1E6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6954u;
        // 0x1e6958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E695Cu;
        goto label_1e695c;
    }
    ctx->pc = 0x1E6954u;
    SET_GPR_U32(ctx, 31, 0x1E695Cu);
    ctx->pc = 0x1E6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6954u;
    // 0x1e6958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E6954u, 0x1E695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E695Cu;
label_1e695c:
    // 0x1e695c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1e695cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1e6960:
    // 0x1e6960: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6964:
    // 0x1e6964: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6968:
    // 0x1e6968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e696c:
    // 0x1e696c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6970:
    // 0x1e6970: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6974:
    // 0x1e6974: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6974u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6978:
    // 0x1e6978: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e697c:
    // 0x1e697c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e697cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6980:
    // 0x1e6980: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6980u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6984:
    // 0x1e6984: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e6984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6988:
    // 0x1e6988: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e6988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e698c:
    // 0x1e698c: 0xc068818  jal         func_1A2060
label_1e6990:
    if (ctx->pc == 0x1E6990u) {
        ctx->pc = 0x1E6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E698Cu;
        // 0x1e6990: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6994u;
        goto label_1e6994;
    }
    ctx->pc = 0x1E698Cu;
    SET_GPR_U32(ctx, 31, 0x1E6994u);
    ctx->pc = 0x1E6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E698Cu;
    // 0x1e6990: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E698Cu, 0x1E6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6994u;
label_1e6994:
    // 0x1e6994: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6998:
    // 0x1e6998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e699c:
    // 0x1e699c: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1e699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e69a0:
    // 0x1e69a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e69a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e69a4:
    // 0x1e69a4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e69a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e69a8:
    // 0x1e69a8: 0xc068848  jal         func_1A2120
label_1e69ac:
    if (ctx->pc == 0x1E69ACu) {
        ctx->pc = 0x1E69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69A8u;
        // 0x1e69ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E69B0u;
        goto label_1e69b0;
    }
    ctx->pc = 0x1E69A8u;
    SET_GPR_U32(ctx, 31, 0x1E69B0u);
    ctx->pc = 0x1E69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69A8u;
    // 0x1e69ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E69A8u, 0x1E69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69B0u;
label_1e69b0:
    // 0x1e69b0: 0xc06886e  jal         func_1A21B8
label_1e69b4:
    if (ctx->pc == 0x1E69B4u) {
        ctx->pc = 0x1E69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69B0u;
        // 0x1e69b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E69B8u;
        goto label_1e69b8;
    }
    ctx->pc = 0x1E69B0u;
    SET_GPR_U32(ctx, 31, 0x1E69B8u);
    ctx->pc = 0x1E69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69B0u;
    // 0x1e69b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E69B0u, 0x1E69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69B8u;
label_1e69b8:
    // 0x1e69b8: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1e69b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_1e69bc:
    // 0x1e69bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e69bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e69c0:
    // 0x1e69c0: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e69c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e69c4:
    // 0x1e69c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e69c8:
    // 0x1e69c8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e69cc:
    // 0x1e69cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e69ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e69d0:
    // 0x1e69d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e69d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e69d4:
    // 0x1e69d4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e69d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e69d8:
    // 0x1e69d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e69d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e69dc:
    // 0x1e69dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e69dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e69e0:
    // 0x1e69e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e69e4:
    // 0x1e69e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e69e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e69e8:
    // 0x1e69e8: 0xc460f2b8  lwc1        $f0, -0xD48($v1)
    ctx->pc = 0x1e69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e69ec:
    // 0x1e69ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e69ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e69f0:
    // 0x1e69f0: 0xc070948  jal         func_1C2520
label_1e69f4:
    if (ctx->pc == 0x1E69F4u) {
        ctx->pc = 0x1E69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69F0u;
        // 0x1e69f4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E69F8u;
        goto label_1e69f8;
    }
    ctx->pc = 0x1E69F0u;
    SET_GPR_U32(ctx, 31, 0x1E69F8u);
    ctx->pc = 0x1E69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69F0u;
    // 0x1e69f4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1E69F0u, 0x1E69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69F8u;
label_1e69f8:
    // 0x1e69f8: 0x7a030050  lq          $v1, 0x50($s0)
    ctx->pc = 0x1e69f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_1e69fc:
    // 0x1e69fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e69fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a00:
    // 0x1e6a00: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6a04:
    // 0x1e6a04: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6a04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6a08:
    // 0x1e6a08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6a0c:
    // 0x1e6a0c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6a10:
    // 0x1e6a10: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6a10u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6a14:
    // 0x1e6a14: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6a14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6a18:
    // 0x1e6a18: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6a1c:
    // 0x1e6a1c: 0x7ea203c0  sq          $v0, 0x3C0($s5)
    ctx->pc = 0x1e6a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 960), GPR_VEC(ctx, 2));
label_1e6a20:
    // 0x1e6a20: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6a24:
    // 0x1e6a24: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x1e6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6a28:
    // 0x1e6a28: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6a2c:
    // 0x1e6a2c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e6a2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e6a30:
    // 0x1e6a30: 0xc0708ac  jal         func_1C22B0
label_1e6a34:
    if (ctx->pc == 0x1E6A34u) {
        ctx->pc = 0x1E6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A30u;
        // 0x1e6a34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6A38u;
        goto label_1e6a38;
    }
    ctx->pc = 0x1E6A30u;
    SET_GPR_U32(ctx, 31, 0x1E6A38u);
    ctx->pc = 0x1E6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A30u;
    // 0x1e6a34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1E6A30u, 0x1E6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A38u;
label_1e6a38:
    // 0x1e6a38: 0xc641f104  lwc1        $f1, -0xEFC($s2)
    ctx->pc = 0x1e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6a3c:
    // 0x1e6a3c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1e6a40:
    // 0x1e6a40: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x1e6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6a44:
    // 0x1e6a44: 0x8fc30bb0  lw          $v1, 0xBB0($fp)
    ctx->pc = 0x1e6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2992)));
label_1e6a48:
    // 0x1e6a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6a4c:
    // 0x1e6a4c: 0xe7c00bf4  swc1        $f0, 0xBF4($fp)
    ctx->pc = 0x1e6a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 3060), bits); }
label_1e6a50:
    // 0x1e6a50: 0x8c82ee38  lw          $v0, -0x11C8($a0)
    ctx->pc = 0x1e6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962744)));
label_1e6a54:
    // 0x1e6a54: 0xafc20c18  sw          $v0, 0xC18($fp)
    ctx->pc = 0x1e6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3096), GPR_U32(ctx, 2));
label_1e6a58:
    // 0x1e6a58: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e6a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e6a5c:
    // 0x1e6a5c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e6a60:
    // 0x1e6a60: 0x40f809  jalr        $v0
label_1e6a64:
    if (ctx->pc == 0x1E6A64u) {
        ctx->pc = 0x1E6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A60u;
        // 0x1e6a64: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6A68u;
        goto label_1e6a68;
    }
    ctx->pc = 0x1E6A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6A68u);
        ctx->pc = 0x1E6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A60u;
        // 0x1e6a64: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6A60u, 0x1E6A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6A68u;
label_1e6a68:
    // 0x1e6a68: 0x7a030090  lq          $v1, 0x90($s0)
    ctx->pc = 0x1e6a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 144)));
label_1e6a6c:
    // 0x1e6a6c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e6a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e6a70:
    // 0x1e6a70: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6a74:
    // 0x1e6a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a78:
    // 0x1e6a78: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6a7c:
    // 0x1e6a7c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6a80:
    // 0x1e6a80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6a80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6a84:
    // 0x1e6a84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6a88:
    // 0x1e6a88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6a88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6a8c:
    // 0x1e6a8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6a8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6a90:
    // 0x1e6a90: 0xc4c0f2b8  lwc1        $f0, -0xD48($a2)
    ctx->pc = 0x1e6a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294963896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6a94:
    // 0x1e6a94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a98:
    // 0x1e6a98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6a9c:
    // 0x1e6a9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e6a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e6aa0:
    // 0x1e6aa0: 0xc070948  jal         func_1C2520
label_1e6aa4:
    if (ctx->pc == 0x1E6AA4u) {
        ctx->pc = 0x1E6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AA0u;
        // 0x1e6aa4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6AA8u;
        goto label_1e6aa8;
    }
    ctx->pc = 0x1E6AA0u;
    SET_GPR_U32(ctx, 31, 0x1E6AA8u);
    ctx->pc = 0x1E6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AA0u;
    // 0x1e6aa4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1E6AA0u, 0x1E6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AA8u;
label_1e6aa8:
    // 0x1e6aa8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e6aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e6aac:
    // 0x1e6aac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ab0:
    // 0x1e6ab0: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6ab4:
    // 0x1e6ab4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6ab8:
    // 0x1e6ab8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6ab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6abc:
    // 0x1e6abc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6ac0:
    // 0x1e6ac0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6ac0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6ac4:
    // 0x1e6ac4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6ac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6ac8:
    // 0x1e6ac8: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6acc:
    // 0x1e6acc: 0x7ee203c0  sq          $v0, 0x3C0($s7)
    ctx->pc = 0x1e6accu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 960), GPR_VEC(ctx, 2));
label_1e6ad0:
    // 0x1e6ad0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6ad4:
    // 0x1e6ad4: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x1e6ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6ad8:
    // 0x1e6ad8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6adc:
    // 0x1e6adc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e6adcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e6ae0:
    // 0x1e6ae0: 0xc0708ac  jal         func_1C22B0
label_1e6ae4:
    if (ctx->pc == 0x1E6AE4u) {
        ctx->pc = 0x1E6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AE0u;
        // 0x1e6ae4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6AE8u;
        goto label_1e6ae8;
    }
    ctx->pc = 0x1E6AE0u;
    SET_GPR_U32(ctx, 31, 0x1E6AE8u);
    ctx->pc = 0x1E6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AE0u;
    // 0x1e6ae4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1E6AE0u, 0x1E6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AE8u;
label_1e6ae8:
    // 0x1e6ae8: 0xc641f104  lwc1        $f1, -0xEFC($s2)
    ctx->pc = 0x1e6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6aec:
    // 0x1e6aec: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_1e6af0:
    // 0x1e6af0: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x1e6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6af4:
    // 0x1e6af4: 0x8fc30fa0  lw          $v1, 0xFA0($fp)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4000)));
label_1e6af8:
    // 0x1e6af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6afc:
    // 0x1e6afc: 0xe7c00fe4  swc1        $f0, 0xFE4($fp)
    ctx->pc = 0x1e6afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4068), bits); }
label_1e6b00:
    // 0x1e6b00: 0x8ce2ee38  lw          $v0, -0x11C8($a3)
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294962744)));
label_1e6b04:
    // 0x1e6b04: 0xafc21008  sw          $v0, 0x1008($fp)
    ctx->pc = 0x1e6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4104), GPR_U32(ctx, 2));
label_1e6b08:
    // 0x1e6b08: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e6b0c:
    // 0x1e6b0c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e6b10:
    // 0x1e6b10: 0x40f809  jalr        $v0
label_1e6b14:
    if (ctx->pc == 0x1E6B14u) {
        ctx->pc = 0x1E6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B10u;
        // 0x1e6b14: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B18u;
        goto label_1e6b18;
    }
    ctx->pc = 0x1E6B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6B18u);
        ctx->pc = 0x1E6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B10u;
        // 0x1e6b14: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6B10u, 0x1E6B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6B18u;
label_1e6b18:
    // 0x1e6b18: 0x7a0300c0  lq          $v1, 0xC0($s0)
    ctx->pc = 0x1e6b18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 192)));
label_1e6b1c:
    // 0x1e6b1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6b20:
    // 0x1e6b20: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6b24:
    // 0x1e6b24: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6b28:
    // 0x1e6b28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6b2c:
    // 0x1e6b2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6b30:
    // 0x1e6b30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6b34:
    // 0x1e6b34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6b34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6b38:
    // 0x1e6b38: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6b38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6b3c:
    // 0x1e6b3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e6b40:
    // 0x1e6b40: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e6b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6b44:
    // 0x1e6b44: 0xc460f2b8  lwc1        $f0, -0xD48($v1)
    ctx->pc = 0x1e6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6b48:
    // 0x1e6b48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6b4c:
    // 0x1e6b4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e6b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e6b50:
    // 0x1e6b50: 0xc070948  jal         func_1C2520
label_1e6b54:
    if (ctx->pc == 0x1E6B54u) {
        ctx->pc = 0x1E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B50u;
        // 0x1e6b54: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B58u;
        goto label_1e6b58;
    }
    ctx->pc = 0x1E6B50u;
    SET_GPR_U32(ctx, 31, 0x1E6B58u);
    ctx->pc = 0x1E6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B50u;
    // 0x1e6b54: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1E6B50u, 0x1E6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B58u;
label_1e6b58:
    // 0x1e6b58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6b5c:
    // 0x1e6b5c: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x1e6b5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_1e6b60:
    // 0x1e6b60: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6b64:
    // 0x1e6b64: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6b68:
    // 0x1e6b68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6b6c:
    // 0x1e6b6c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6b6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6b70:
    // 0x1e6b70: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6b70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6b74:
    // 0x1e6b74: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6b74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6b78:
    // 0x1e6b78: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6b7c:
    // 0x1e6b7c: 0x7c8203c0  sq          $v0, 0x3C0($a0)
    ctx->pc = 0x1e6b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 960), GPR_VEC(ctx, 2));
label_1e6b80:
    // 0x1e6b80: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6b84:
    // 0x1e6b84: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x1e6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6b88:
    // 0x1e6b88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6b8c:
    // 0x1e6b8c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e6b8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e6b90:
    // 0x1e6b90: 0xc0708ac  jal         func_1C22B0
label_1e6b94:
    if (ctx->pc == 0x1E6B94u) {
        ctx->pc = 0x1E6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B90u;
        // 0x1e6b94: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B98u;
        goto label_1e6b98;
    }
    ctx->pc = 0x1E6B90u;
    SET_GPR_U32(ctx, 31, 0x1E6B98u);
    ctx->pc = 0x1E6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B90u;
    // 0x1e6b94: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1E6B90u, 0x1E6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B98u;
label_1e6b98:
    // 0x1e6b98: 0xc641f104  lwc1        $f1, -0xEFC($s2)
    ctx->pc = 0x1e6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6b9c:
    // 0x1e6b9c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1e6ba0:
    // 0x1e6ba0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ba4:
    // 0x1e6ba4: 0x8fc31390  lw          $v1, 0x1390($fp)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 5008)));
label_1e6ba8:
    // 0x1e6ba8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6bac:
    // 0x1e6bac: 0xe7c013d4  swc1        $f0, 0x13D4($fp)
    ctx->pc = 0x1e6bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 5076), bits); }
label_1e6bb0:
    // 0x1e6bb0: 0x8c82ee38  lw          $v0, -0x11C8($a0)
    ctx->pc = 0x1e6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962744)));
label_1e6bb4:
    // 0x1e6bb4: 0xafc213f8  sw          $v0, 0x13F8($fp)
    ctx->pc = 0x1e6bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5112), GPR_U32(ctx, 2));
label_1e6bb8:
    // 0x1e6bb8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6bbc:
    // 0x1e6bbc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e6bc0:
    // 0x1e6bc0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e6bc4:
    // 0x1e6bc4: 0x40f809  jalr        $v0
label_1e6bc8:
    if (ctx->pc == 0x1E6BC8u) {
        ctx->pc = 0x1E6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BC4u;
        // 0x1e6bc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6BCCu;
        goto label_1e6bcc;
    }
    ctx->pc = 0x1E6BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6BCCu);
        ctx->pc = 0x1E6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BC4u;
        // 0x1e6bc8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6BC4u, 0x1E6BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6BCCu;
label_1e6bcc:
    // 0x1e6bcc: 0x7a0300f0  lq          $v1, 0xF0($s0)
    ctx->pc = 0x1e6bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 240)));
label_1e6bd0:
    // 0x1e6bd0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e6bd4:
    // 0x1e6bd4: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6bd8:
    // 0x1e6bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6bdc:
    // 0x1e6bdc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6be0:
    // 0x1e6be0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6be4:
    // 0x1e6be4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6be8:
    // 0x1e6be8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6bec:
    // 0x1e6bec: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6becu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6bf0:
    // 0x1e6bf0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6bf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6bf4:
    // 0x1e6bf4: 0xc4c0f2b8  lwc1        $f0, -0xD48($a2)
    ctx->pc = 0x1e6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294963896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6bf8:
    // 0x1e6bf8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e6bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6bfc:
    // 0x1e6bfc: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1e6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1e6c00:
    // 0x1e6c00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e6c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e6c04:
    // 0x1e6c04: 0xc070948  jal         func_1C2520
label_1e6c08:
    if (ctx->pc == 0x1E6C08u) {
        ctx->pc = 0x1E6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C04u;
        // 0x1e6c08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C0Cu;
        goto label_1e6c0c;
    }
    ctx->pc = 0x1E6C04u;
    SET_GPR_U32(ctx, 31, 0x1E6C0Cu);
    ctx->pc = 0x1E6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C04u;
    // 0x1e6c08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1E6C04u, 0x1E6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C0Cu;
label_1e6c0c:
    // 0x1e6c0c: 0x7a0300e0  lq          $v1, 0xE0($s0)
    ctx->pc = 0x1e6c0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 224)));
label_1e6c10:
    // 0x1e6c10: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1e6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1e6c14:
    // 0x1e6c14: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6c18:
    // 0x1e6c18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6c1c:
    // 0x1e6c1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6c20:
    // 0x1e6c20: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6c24:
    // 0x1e6c24: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6c24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6c28:
    // 0x1e6c28: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6c28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6c2c:
    // 0x1e6c2c: 0xc640f104  lwc1        $f0, -0xEFC($s2)
    ctx->pc = 0x1e6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c30:
    // 0x1e6c30: 0x7c8203c0  sq          $v0, 0x3C0($a0)
    ctx->pc = 0x1e6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 960), GPR_VEC(ctx, 2));
label_1e6c34:
    // 0x1e6c34: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6c38:
    // 0x1e6c38: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x1e6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6c3c:
    // 0x1e6c3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e6c40:
    // 0x1e6c40: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1e6c40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e6c44:
    // 0x1e6c44: 0xc0708ac  jal         func_1C22B0
label_1e6c48:
    if (ctx->pc == 0x1E6C48u) {
        ctx->pc = 0x1E6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C44u;
        // 0x1e6c48: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C4Cu;
        goto label_1e6c4c;
    }
    ctx->pc = 0x1E6C44u;
    SET_GPR_U32(ctx, 31, 0x1E6C4Cu);
    ctx->pc = 0x1E6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C44u;
    // 0x1e6c48: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1E6C44u, 0x1E6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C4Cu;
label_1e6c4c:
    // 0x1e6c4c: 0xc641f104  lwc1        $f1, -0xEFC($s2)
    ctx->pc = 0x1e6c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6c50:
    // 0x1e6c50: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x1e6c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_1e6c54:
    // 0x1e6c54: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1e6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6c58:
    // 0x1e6c58: 0x8fc31780  lw          $v1, 0x1780($fp)
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6016)));
label_1e6c5c:
    // 0x1e6c5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6c60:
    // 0x1e6c60: 0xe7c017c4  swc1        $f0, 0x17C4($fp)
    ctx->pc = 0x1e6c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 6084), bits); }
label_1e6c64:
    // 0x1e6c64: 0x8ce2ee38  lw          $v0, -0x11C8($a3)
    ctx->pc = 0x1e6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294962744)));
label_1e6c68:
    // 0x1e6c68: 0xafc217e8  sw          $v0, 0x17E8($fp)
    ctx->pc = 0x1e6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6120), GPR_U32(ctx, 2));
label_1e6c6c:
    // 0x1e6c6c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e6c70:
    // 0x1e6c70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e6c74:
    // 0x1e6c74: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1e6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1e6c78:
    // 0x1e6c78: 0x40f809  jalr        $v0
label_1e6c7c:
    if (ctx->pc == 0x1E6C7Cu) {
        ctx->pc = 0x1E6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C78u;
        // 0x1e6c7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C80u;
        goto label_1e6c80;
    }
    ctx->pc = 0x1E6C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6C80u);
        ctx->pc = 0x1E6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C78u;
        // 0x1e6c7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6C78u, 0x1E6C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6C80u;
label_1e6c80:
    // 0x1e6c80: 0x7a030110  lq          $v1, 0x110($s0)
    ctx->pc = 0x1e6c80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 272)));
label_1e6c84:
    // 0x1e6c84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6c88:
    // 0x1e6c88: 0x7bc21d60  lq          $v0, 0x1D60($fp)
    ctx->pc = 0x1e6c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 7520)));
label_1e6c8c:
    // 0x1e6c8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6c90:
    // 0x1e6c90: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e6c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1e6c94:
    // 0x1e6c94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e6c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1e6c98:
    // 0x1e6c98: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1e6c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1e6c9c:
    // 0x1e6c9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1e6c9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1e6ca0:
    // 0x1e6ca0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e6ca0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e6ca4:
    // 0x1e6ca4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1e6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e6ca8:
    // 0x1e6ca8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e6cac:
    // 0x1e6cac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e6cb0:
    // 0x1e6cb0: 0xc06e4dc  jal         func_1B9370
label_1e6cb4:
    if (ctx->pc == 0x1E6CB4u) {
        ctx->pc = 0x1E6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CB0u;
        // 0x1e6cb4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6CB8u;
        goto label_1e6cb8;
    }
    ctx->pc = 0x1E6CB0u;
    SET_GPR_U32(ctx, 31, 0x1E6CB8u);
    ctx->pc = 0x1E6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CB0u;
    // 0x1e6cb4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E6CB0u, 0x1E6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CB8u;
label_1e6cb8:
    // 0x1e6cb8: 0xc06e552  jal         func_1B9548
label_1e6cbc:
    if (ctx->pc == 0x1E6CBCu) {
        ctx->pc = 0x1E6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CB8u;
        // 0x1e6cbc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6CC0u;
        goto label_1e6cc0;
    }
    ctx->pc = 0x1E6CB8u;
    SET_GPR_U32(ctx, 31, 0x1E6CC0u);
    ctx->pc = 0x1E6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CB8u;
    // 0x1e6cbc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E6CB8u, 0x1E6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CC0u;
label_1e6cc0:
    // 0x1e6cc0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e6cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e6cc4:
    // 0x1e6cc4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e6cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e6cc8:
    // 0x1e6cc8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e6cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e6ccc:
    // 0x1e6ccc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e6cd0:
    // 0x1e6cd0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e6cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e6cd4:
    // 0x1e6cd4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e6cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e6cd8:
    // 0x1e6cd8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e6cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e6cdc:
    // 0x1e6cdc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e6cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6ce0:
    // 0x1e6ce0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e6ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6ce4:
    // 0x1e6ce4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6ce8:
    // 0x1e6ce8: 0x3e00008  jr          $ra
label_1e6cec:
    if (ctx->pc == 0x1E6CECu) {
        ctx->pc = 0x1E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CE8u;
        // 0x1e6cec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6CF0u;
        goto label_fallthrough_0x1e6ce8;
    }
    ctx->pc = 0x1E6CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CE8u;
        // 0x1e6cec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6ce8:
    ctx->pc = 0x1E6CF0u;
}
