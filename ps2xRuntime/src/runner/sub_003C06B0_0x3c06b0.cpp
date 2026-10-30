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

// Function: sub_003C06B0
// Address: 0x3c06b0 - 0x3c0d98
void sub_003C06B0_0x3c06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C06B0_0x3c06b0");
#endif

    switch (ctx->pc) {
        case 0x3c06b0u: goto label_3c06b0;
        case 0x3c06b4u: goto label_3c06b4;
        case 0x3c06b8u: goto label_3c06b8;
        case 0x3c06bcu: goto label_3c06bc;
        case 0x3c06c0u: goto label_3c06c0;
        case 0x3c06c4u: goto label_3c06c4;
        case 0x3c06c8u: goto label_3c06c8;
        case 0x3c06ccu: goto label_3c06cc;
        case 0x3c06d0u: goto label_3c06d0;
        case 0x3c06d4u: goto label_3c06d4;
        case 0x3c06d8u: goto label_3c06d8;
        case 0x3c06dcu: goto label_3c06dc;
        case 0x3c06e0u: goto label_3c06e0;
        case 0x3c06e4u: goto label_3c06e4;
        case 0x3c06e8u: goto label_3c06e8;
        case 0x3c06ecu: goto label_3c06ec;
        case 0x3c06f0u: goto label_3c06f0;
        case 0x3c06f4u: goto label_3c06f4;
        case 0x3c06f8u: goto label_3c06f8;
        case 0x3c06fcu: goto label_3c06fc;
        case 0x3c0700u: goto label_3c0700;
        case 0x3c0704u: goto label_3c0704;
        case 0x3c0708u: goto label_3c0708;
        case 0x3c070cu: goto label_3c070c;
        case 0x3c0710u: goto label_3c0710;
        case 0x3c0714u: goto label_3c0714;
        case 0x3c0718u: goto label_3c0718;
        case 0x3c071cu: goto label_3c071c;
        case 0x3c0720u: goto label_3c0720;
        case 0x3c0724u: goto label_3c0724;
        case 0x3c0728u: goto label_3c0728;
        case 0x3c072cu: goto label_3c072c;
        case 0x3c0730u: goto label_3c0730;
        case 0x3c0734u: goto label_3c0734;
        case 0x3c0738u: goto label_3c0738;
        case 0x3c073cu: goto label_3c073c;
        case 0x3c0740u: goto label_3c0740;
        case 0x3c0744u: goto label_3c0744;
        case 0x3c0748u: goto label_3c0748;
        case 0x3c074cu: goto label_3c074c;
        case 0x3c0750u: goto label_3c0750;
        case 0x3c0754u: goto label_3c0754;
        case 0x3c0758u: goto label_3c0758;
        case 0x3c075cu: goto label_3c075c;
        case 0x3c0760u: goto label_3c0760;
        case 0x3c0764u: goto label_3c0764;
        case 0x3c0768u: goto label_3c0768;
        case 0x3c076cu: goto label_3c076c;
        case 0x3c0770u: goto label_3c0770;
        case 0x3c0774u: goto label_3c0774;
        case 0x3c0778u: goto label_3c0778;
        case 0x3c077cu: goto label_3c077c;
        case 0x3c0780u: goto label_3c0780;
        case 0x3c0784u: goto label_3c0784;
        case 0x3c0788u: goto label_3c0788;
        case 0x3c078cu: goto label_3c078c;
        case 0x3c0790u: goto label_3c0790;
        case 0x3c0794u: goto label_3c0794;
        case 0x3c0798u: goto label_3c0798;
        case 0x3c079cu: goto label_3c079c;
        case 0x3c07a0u: goto label_3c07a0;
        case 0x3c07a4u: goto label_3c07a4;
        case 0x3c07a8u: goto label_3c07a8;
        case 0x3c07acu: goto label_3c07ac;
        case 0x3c07b0u: goto label_3c07b0;
        case 0x3c07b4u: goto label_3c07b4;
        case 0x3c07b8u: goto label_3c07b8;
        case 0x3c07bcu: goto label_3c07bc;
        case 0x3c07c0u: goto label_3c07c0;
        case 0x3c07c4u: goto label_3c07c4;
        case 0x3c07c8u: goto label_3c07c8;
        case 0x3c07ccu: goto label_3c07cc;
        case 0x3c07d0u: goto label_3c07d0;
        case 0x3c07d4u: goto label_3c07d4;
        case 0x3c07d8u: goto label_3c07d8;
        case 0x3c07dcu: goto label_3c07dc;
        case 0x3c07e0u: goto label_3c07e0;
        case 0x3c07e4u: goto label_3c07e4;
        case 0x3c07e8u: goto label_3c07e8;
        case 0x3c07ecu: goto label_3c07ec;
        case 0x3c07f0u: goto label_3c07f0;
        case 0x3c07f4u: goto label_3c07f4;
        case 0x3c07f8u: goto label_3c07f8;
        case 0x3c07fcu: goto label_3c07fc;
        case 0x3c0800u: goto label_3c0800;
        case 0x3c0804u: goto label_3c0804;
        case 0x3c0808u: goto label_3c0808;
        case 0x3c080cu: goto label_3c080c;
        case 0x3c0810u: goto label_3c0810;
        case 0x3c0814u: goto label_3c0814;
        case 0x3c0818u: goto label_3c0818;
        case 0x3c081cu: goto label_3c081c;
        case 0x3c0820u: goto label_3c0820;
        case 0x3c0824u: goto label_3c0824;
        case 0x3c0828u: goto label_3c0828;
        case 0x3c082cu: goto label_3c082c;
        case 0x3c0830u: goto label_3c0830;
        case 0x3c0834u: goto label_3c0834;
        case 0x3c0838u: goto label_3c0838;
        case 0x3c083cu: goto label_3c083c;
        case 0x3c0840u: goto label_3c0840;
        case 0x3c0844u: goto label_3c0844;
        case 0x3c0848u: goto label_3c0848;
        case 0x3c084cu: goto label_3c084c;
        case 0x3c0850u: goto label_3c0850;
        case 0x3c0854u: goto label_3c0854;
        case 0x3c0858u: goto label_3c0858;
        case 0x3c085cu: goto label_3c085c;
        case 0x3c0860u: goto label_3c0860;
        case 0x3c0864u: goto label_3c0864;
        case 0x3c0868u: goto label_3c0868;
        case 0x3c086cu: goto label_3c086c;
        case 0x3c0870u: goto label_3c0870;
        case 0x3c0874u: goto label_3c0874;
        case 0x3c0878u: goto label_3c0878;
        case 0x3c087cu: goto label_3c087c;
        case 0x3c0880u: goto label_3c0880;
        case 0x3c0884u: goto label_3c0884;
        case 0x3c0888u: goto label_3c0888;
        case 0x3c088cu: goto label_3c088c;
        case 0x3c0890u: goto label_3c0890;
        case 0x3c0894u: goto label_3c0894;
        case 0x3c0898u: goto label_3c0898;
        case 0x3c089cu: goto label_3c089c;
        case 0x3c08a0u: goto label_3c08a0;
        case 0x3c08a4u: goto label_3c08a4;
        case 0x3c08a8u: goto label_3c08a8;
        case 0x3c08acu: goto label_3c08ac;
        case 0x3c08b0u: goto label_3c08b0;
        case 0x3c08b4u: goto label_3c08b4;
        case 0x3c08b8u: goto label_3c08b8;
        case 0x3c08bcu: goto label_3c08bc;
        case 0x3c08c0u: goto label_3c08c0;
        case 0x3c08c4u: goto label_3c08c4;
        case 0x3c08c8u: goto label_3c08c8;
        case 0x3c08ccu: goto label_3c08cc;
        case 0x3c08d0u: goto label_3c08d0;
        case 0x3c08d4u: goto label_3c08d4;
        case 0x3c08d8u: goto label_3c08d8;
        case 0x3c08dcu: goto label_3c08dc;
        case 0x3c08e0u: goto label_3c08e0;
        case 0x3c08e4u: goto label_3c08e4;
        case 0x3c08e8u: goto label_3c08e8;
        case 0x3c08ecu: goto label_3c08ec;
        case 0x3c08f0u: goto label_3c08f0;
        case 0x3c08f4u: goto label_3c08f4;
        case 0x3c08f8u: goto label_3c08f8;
        case 0x3c08fcu: goto label_3c08fc;
        case 0x3c0900u: goto label_3c0900;
        case 0x3c0904u: goto label_3c0904;
        case 0x3c0908u: goto label_3c0908;
        case 0x3c090cu: goto label_3c090c;
        case 0x3c0910u: goto label_3c0910;
        case 0x3c0914u: goto label_3c0914;
        case 0x3c0918u: goto label_3c0918;
        case 0x3c091cu: goto label_3c091c;
        case 0x3c0920u: goto label_3c0920;
        case 0x3c0924u: goto label_3c0924;
        case 0x3c0928u: goto label_3c0928;
        case 0x3c092cu: goto label_3c092c;
        case 0x3c0930u: goto label_3c0930;
        case 0x3c0934u: goto label_3c0934;
        case 0x3c0938u: goto label_3c0938;
        case 0x3c093cu: goto label_3c093c;
        case 0x3c0940u: goto label_3c0940;
        case 0x3c0944u: goto label_3c0944;
        case 0x3c0948u: goto label_3c0948;
        case 0x3c094cu: goto label_3c094c;
        case 0x3c0950u: goto label_3c0950;
        case 0x3c0954u: goto label_3c0954;
        case 0x3c0958u: goto label_3c0958;
        case 0x3c095cu: goto label_3c095c;
        case 0x3c0960u: goto label_3c0960;
        case 0x3c0964u: goto label_3c0964;
        case 0x3c0968u: goto label_3c0968;
        case 0x3c096cu: goto label_3c096c;
        case 0x3c0970u: goto label_3c0970;
        case 0x3c0974u: goto label_3c0974;
        case 0x3c0978u: goto label_3c0978;
        case 0x3c097cu: goto label_3c097c;
        case 0x3c0980u: goto label_3c0980;
        case 0x3c0984u: goto label_3c0984;
        case 0x3c0988u: goto label_3c0988;
        case 0x3c098cu: goto label_3c098c;
        case 0x3c0990u: goto label_3c0990;
        case 0x3c0994u: goto label_3c0994;
        case 0x3c0998u: goto label_3c0998;
        case 0x3c099cu: goto label_3c099c;
        case 0x3c09a0u: goto label_3c09a0;
        case 0x3c09a4u: goto label_3c09a4;
        case 0x3c09a8u: goto label_3c09a8;
        case 0x3c09acu: goto label_3c09ac;
        case 0x3c09b0u: goto label_3c09b0;
        case 0x3c09b4u: goto label_3c09b4;
        case 0x3c09b8u: goto label_3c09b8;
        case 0x3c09bcu: goto label_3c09bc;
        case 0x3c09c0u: goto label_3c09c0;
        case 0x3c09c4u: goto label_3c09c4;
        case 0x3c09c8u: goto label_3c09c8;
        case 0x3c09ccu: goto label_3c09cc;
        case 0x3c09d0u: goto label_3c09d0;
        case 0x3c09d4u: goto label_3c09d4;
        case 0x3c09d8u: goto label_3c09d8;
        case 0x3c09dcu: goto label_3c09dc;
        case 0x3c09e0u: goto label_3c09e0;
        case 0x3c09e4u: goto label_3c09e4;
        case 0x3c09e8u: goto label_3c09e8;
        case 0x3c09ecu: goto label_3c09ec;
        case 0x3c09f0u: goto label_3c09f0;
        case 0x3c09f4u: goto label_3c09f4;
        case 0x3c09f8u: goto label_3c09f8;
        case 0x3c09fcu: goto label_3c09fc;
        case 0x3c0a00u: goto label_3c0a00;
        case 0x3c0a04u: goto label_3c0a04;
        case 0x3c0a08u: goto label_3c0a08;
        case 0x3c0a0cu: goto label_3c0a0c;
        case 0x3c0a10u: goto label_3c0a10;
        case 0x3c0a14u: goto label_3c0a14;
        case 0x3c0a18u: goto label_3c0a18;
        case 0x3c0a1cu: goto label_3c0a1c;
        case 0x3c0a20u: goto label_3c0a20;
        case 0x3c0a24u: goto label_3c0a24;
        case 0x3c0a28u: goto label_3c0a28;
        case 0x3c0a2cu: goto label_3c0a2c;
        case 0x3c0a30u: goto label_3c0a30;
        case 0x3c0a34u: goto label_3c0a34;
        case 0x3c0a38u: goto label_3c0a38;
        case 0x3c0a3cu: goto label_3c0a3c;
        case 0x3c0a40u: goto label_3c0a40;
        case 0x3c0a44u: goto label_3c0a44;
        case 0x3c0a48u: goto label_3c0a48;
        case 0x3c0a4cu: goto label_3c0a4c;
        case 0x3c0a50u: goto label_3c0a50;
        case 0x3c0a54u: goto label_3c0a54;
        case 0x3c0a58u: goto label_3c0a58;
        case 0x3c0a5cu: goto label_3c0a5c;
        case 0x3c0a60u: goto label_3c0a60;
        case 0x3c0a64u: goto label_3c0a64;
        case 0x3c0a68u: goto label_3c0a68;
        case 0x3c0a6cu: goto label_3c0a6c;
        case 0x3c0a70u: goto label_3c0a70;
        case 0x3c0a74u: goto label_3c0a74;
        case 0x3c0a78u: goto label_3c0a78;
        case 0x3c0a7cu: goto label_3c0a7c;
        case 0x3c0a80u: goto label_3c0a80;
        case 0x3c0a84u: goto label_3c0a84;
        case 0x3c0a88u: goto label_3c0a88;
        case 0x3c0a8cu: goto label_3c0a8c;
        case 0x3c0a90u: goto label_3c0a90;
        case 0x3c0a94u: goto label_3c0a94;
        case 0x3c0a98u: goto label_3c0a98;
        case 0x3c0a9cu: goto label_3c0a9c;
        case 0x3c0aa0u: goto label_3c0aa0;
        case 0x3c0aa4u: goto label_3c0aa4;
        case 0x3c0aa8u: goto label_3c0aa8;
        case 0x3c0aacu: goto label_3c0aac;
        case 0x3c0ab0u: goto label_3c0ab0;
        case 0x3c0ab4u: goto label_3c0ab4;
        case 0x3c0ab8u: goto label_3c0ab8;
        case 0x3c0abcu: goto label_3c0abc;
        case 0x3c0ac0u: goto label_3c0ac0;
        case 0x3c0ac4u: goto label_3c0ac4;
        case 0x3c0ac8u: goto label_3c0ac8;
        case 0x3c0accu: goto label_3c0acc;
        case 0x3c0ad0u: goto label_3c0ad0;
        case 0x3c0ad4u: goto label_3c0ad4;
        case 0x3c0ad8u: goto label_3c0ad8;
        case 0x3c0adcu: goto label_3c0adc;
        case 0x3c0ae0u: goto label_3c0ae0;
        case 0x3c0ae4u: goto label_3c0ae4;
        case 0x3c0ae8u: goto label_3c0ae8;
        case 0x3c0aecu: goto label_3c0aec;
        case 0x3c0af0u: goto label_3c0af0;
        case 0x3c0af4u: goto label_3c0af4;
        case 0x3c0af8u: goto label_3c0af8;
        case 0x3c0afcu: goto label_3c0afc;
        case 0x3c0b00u: goto label_3c0b00;
        case 0x3c0b04u: goto label_3c0b04;
        case 0x3c0b08u: goto label_3c0b08;
        case 0x3c0b0cu: goto label_3c0b0c;
        case 0x3c0b10u: goto label_3c0b10;
        case 0x3c0b14u: goto label_3c0b14;
        case 0x3c0b18u: goto label_3c0b18;
        case 0x3c0b1cu: goto label_3c0b1c;
        case 0x3c0b20u: goto label_3c0b20;
        case 0x3c0b24u: goto label_3c0b24;
        case 0x3c0b28u: goto label_3c0b28;
        case 0x3c0b2cu: goto label_3c0b2c;
        case 0x3c0b30u: goto label_3c0b30;
        case 0x3c0b34u: goto label_3c0b34;
        case 0x3c0b38u: goto label_3c0b38;
        case 0x3c0b3cu: goto label_3c0b3c;
        case 0x3c0b40u: goto label_3c0b40;
        case 0x3c0b44u: goto label_3c0b44;
        case 0x3c0b48u: goto label_3c0b48;
        case 0x3c0b4cu: goto label_3c0b4c;
        case 0x3c0b50u: goto label_3c0b50;
        case 0x3c0b54u: goto label_3c0b54;
        case 0x3c0b58u: goto label_3c0b58;
        case 0x3c0b5cu: goto label_3c0b5c;
        case 0x3c0b60u: goto label_3c0b60;
        case 0x3c0b64u: goto label_3c0b64;
        case 0x3c0b68u: goto label_3c0b68;
        case 0x3c0b6cu: goto label_3c0b6c;
        case 0x3c0b70u: goto label_3c0b70;
        case 0x3c0b74u: goto label_3c0b74;
        case 0x3c0b78u: goto label_3c0b78;
        case 0x3c0b7cu: goto label_3c0b7c;
        case 0x3c0b80u: goto label_3c0b80;
        case 0x3c0b84u: goto label_3c0b84;
        case 0x3c0b88u: goto label_3c0b88;
        case 0x3c0b8cu: goto label_3c0b8c;
        case 0x3c0b90u: goto label_3c0b90;
        case 0x3c0b94u: goto label_3c0b94;
        case 0x3c0b98u: goto label_3c0b98;
        case 0x3c0b9cu: goto label_3c0b9c;
        case 0x3c0ba0u: goto label_3c0ba0;
        case 0x3c0ba4u: goto label_3c0ba4;
        case 0x3c0ba8u: goto label_3c0ba8;
        case 0x3c0bacu: goto label_3c0bac;
        case 0x3c0bb0u: goto label_3c0bb0;
        case 0x3c0bb4u: goto label_3c0bb4;
        case 0x3c0bb8u: goto label_3c0bb8;
        case 0x3c0bbcu: goto label_3c0bbc;
        case 0x3c0bc0u: goto label_3c0bc0;
        case 0x3c0bc4u: goto label_3c0bc4;
        case 0x3c0bc8u: goto label_3c0bc8;
        case 0x3c0bccu: goto label_3c0bcc;
        case 0x3c0bd0u: goto label_3c0bd0;
        case 0x3c0bd4u: goto label_3c0bd4;
        case 0x3c0bd8u: goto label_3c0bd8;
        case 0x3c0bdcu: goto label_3c0bdc;
        case 0x3c0be0u: goto label_3c0be0;
        case 0x3c0be4u: goto label_3c0be4;
        case 0x3c0be8u: goto label_3c0be8;
        case 0x3c0becu: goto label_3c0bec;
        case 0x3c0bf0u: goto label_3c0bf0;
        case 0x3c0bf4u: goto label_3c0bf4;
        case 0x3c0bf8u: goto label_3c0bf8;
        case 0x3c0bfcu: goto label_3c0bfc;
        case 0x3c0c00u: goto label_3c0c00;
        case 0x3c0c04u: goto label_3c0c04;
        case 0x3c0c08u: goto label_3c0c08;
        case 0x3c0c0cu: goto label_3c0c0c;
        case 0x3c0c10u: goto label_3c0c10;
        case 0x3c0c14u: goto label_3c0c14;
        case 0x3c0c18u: goto label_3c0c18;
        case 0x3c0c1cu: goto label_3c0c1c;
        case 0x3c0c20u: goto label_3c0c20;
        case 0x3c0c24u: goto label_3c0c24;
        case 0x3c0c28u: goto label_3c0c28;
        case 0x3c0c2cu: goto label_3c0c2c;
        case 0x3c0c30u: goto label_3c0c30;
        case 0x3c0c34u: goto label_3c0c34;
        case 0x3c0c38u: goto label_3c0c38;
        case 0x3c0c3cu: goto label_3c0c3c;
        case 0x3c0c40u: goto label_3c0c40;
        case 0x3c0c44u: goto label_3c0c44;
        case 0x3c0c48u: goto label_3c0c48;
        case 0x3c0c4cu: goto label_3c0c4c;
        case 0x3c0c50u: goto label_3c0c50;
        case 0x3c0c54u: goto label_3c0c54;
        case 0x3c0c58u: goto label_3c0c58;
        case 0x3c0c5cu: goto label_3c0c5c;
        case 0x3c0c60u: goto label_3c0c60;
        case 0x3c0c64u: goto label_3c0c64;
        case 0x3c0c68u: goto label_3c0c68;
        case 0x3c0c6cu: goto label_3c0c6c;
        case 0x3c0c70u: goto label_3c0c70;
        case 0x3c0c74u: goto label_3c0c74;
        case 0x3c0c78u: goto label_3c0c78;
        case 0x3c0c7cu: goto label_3c0c7c;
        case 0x3c0c80u: goto label_3c0c80;
        case 0x3c0c84u: goto label_3c0c84;
        case 0x3c0c88u: goto label_3c0c88;
        case 0x3c0c8cu: goto label_3c0c8c;
        case 0x3c0c90u: goto label_3c0c90;
        case 0x3c0c94u: goto label_3c0c94;
        case 0x3c0c98u: goto label_3c0c98;
        case 0x3c0c9cu: goto label_3c0c9c;
        case 0x3c0ca0u: goto label_3c0ca0;
        case 0x3c0ca4u: goto label_3c0ca4;
        case 0x3c0ca8u: goto label_3c0ca8;
        case 0x3c0cacu: goto label_3c0cac;
        case 0x3c0cb0u: goto label_3c0cb0;
        case 0x3c0cb4u: goto label_3c0cb4;
        case 0x3c0cb8u: goto label_3c0cb8;
        case 0x3c0cbcu: goto label_3c0cbc;
        case 0x3c0cc0u: goto label_3c0cc0;
        case 0x3c0cc4u: goto label_3c0cc4;
        case 0x3c0cc8u: goto label_3c0cc8;
        case 0x3c0cccu: goto label_3c0ccc;
        case 0x3c0cd0u: goto label_3c0cd0;
        case 0x3c0cd4u: goto label_3c0cd4;
        case 0x3c0cd8u: goto label_3c0cd8;
        case 0x3c0cdcu: goto label_3c0cdc;
        case 0x3c0ce0u: goto label_3c0ce0;
        case 0x3c0ce4u: goto label_3c0ce4;
        case 0x3c0ce8u: goto label_3c0ce8;
        case 0x3c0cecu: goto label_3c0cec;
        case 0x3c0cf0u: goto label_3c0cf0;
        case 0x3c0cf4u: goto label_3c0cf4;
        case 0x3c0cf8u: goto label_3c0cf8;
        case 0x3c0cfcu: goto label_3c0cfc;
        case 0x3c0d00u: goto label_3c0d00;
        case 0x3c0d04u: goto label_3c0d04;
        case 0x3c0d08u: goto label_3c0d08;
        case 0x3c0d0cu: goto label_3c0d0c;
        case 0x3c0d10u: goto label_3c0d10;
        case 0x3c0d14u: goto label_3c0d14;
        case 0x3c0d18u: goto label_3c0d18;
        case 0x3c0d1cu: goto label_3c0d1c;
        case 0x3c0d20u: goto label_3c0d20;
        case 0x3c0d24u: goto label_3c0d24;
        case 0x3c0d28u: goto label_3c0d28;
        case 0x3c0d2cu: goto label_3c0d2c;
        case 0x3c0d30u: goto label_3c0d30;
        case 0x3c0d34u: goto label_3c0d34;
        case 0x3c0d38u: goto label_3c0d38;
        case 0x3c0d3cu: goto label_3c0d3c;
        case 0x3c0d40u: goto label_3c0d40;
        case 0x3c0d44u: goto label_3c0d44;
        case 0x3c0d48u: goto label_3c0d48;
        case 0x3c0d4cu: goto label_3c0d4c;
        case 0x3c0d50u: goto label_3c0d50;
        case 0x3c0d54u: goto label_3c0d54;
        case 0x3c0d58u: goto label_3c0d58;
        case 0x3c0d5cu: goto label_3c0d5c;
        case 0x3c0d60u: goto label_3c0d60;
        case 0x3c0d64u: goto label_3c0d64;
        case 0x3c0d68u: goto label_3c0d68;
        case 0x3c0d6cu: goto label_3c0d6c;
        case 0x3c0d70u: goto label_3c0d70;
        case 0x3c0d74u: goto label_3c0d74;
        case 0x3c0d78u: goto label_3c0d78;
        case 0x3c0d7cu: goto label_3c0d7c;
        case 0x3c0d80u: goto label_3c0d80;
        case 0x3c0d84u: goto label_3c0d84;
        case 0x3c0d88u: goto label_3c0d88;
        case 0x3c0d8cu: goto label_3c0d8c;
        case 0x3c0d90u: goto label_3c0d90;
        case 0x3c0d94u: goto label_3c0d94;
        default: break;
    }

    ctx->pc = 0x3c06b0u;

label_3c06b0:
    // 0x3c06b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3c06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3c06b4:
    // 0x3c06b4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3c06b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3c06b8:
    // 0x3c06b8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3c06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3c06bc:
    // 0x3c06bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c06bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c06c0:
    // 0x3c06c0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3c06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3c06c4:
    // 0x3c06c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c06c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c06c8:
    // 0x3c06c8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3c06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3c06cc:
    // 0x3c06cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c06ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c06d0:
    // 0x3c06d0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3c06d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3c06d4:
    // 0x3c06d4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3c06d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3c06d8:
    // 0x3c06d8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3c06d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3c06dc:
    // 0x3c06dc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c06dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3c06e0:
    // 0x3c06e0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3c06e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3c06e4:
    // 0x3c06e4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3c06e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3c06e8:
    // 0x3c06e8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3c06e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3c06ec:
    // 0x3c06ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c06f0:
    // 0x3c06f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c06f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c06f4:
    // 0x3c06f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c06f8:
    // 0x3c06f8: 0x40f809  jalr        $v0
label_3c06fc:
    if (ctx->pc == 0x3C06FCu) {
        ctx->pc = 0x3C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F8u;
        // 0x3c06fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0700u;
        goto label_3c0700;
    }
    ctx->pc = 0x3C06F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0700u);
        ctx->pc = 0x3C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F8u;
        // 0x3c06fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C06F8u, 0x3C0700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0700u;
label_3c0700:
    // 0x3c0700: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c0700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0704:
    // 0x3c0704: 0x2e02003d  sltiu       $v0, $s0, 0x3D
    ctx->pc = 0x3c0704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3c0708:
    // 0x3c0708: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
label_3c070c:
    if (ctx->pc == 0x3C070Cu) {
        ctx->pc = 0x3C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0708u;
        // 0x3c070c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0710u;
        goto label_3c0710;
    }
    ctx->pc = 0x3C0708u;
    {
        const bool branch_taken_0x3c0708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0708u;
        // 0x3c070c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0708) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0710u;
label_3c0710:
    // 0x3c0710: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3c0710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3c0714:
    // 0x3c0714: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x3c0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_3c0718:
    // 0x3c0718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c071c:
    // 0x3c071c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c0720:
    // 0x3c0720: 0x800008  jr          $a0
label_3c0724:
    if (ctx->pc == 0x3C0724u) {
        ctx->pc = 0x3C0728u;
        goto label_3c0728;
    }
    ctx->pc = 0x3C0720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C0728u: goto label_3c0728;
            case 0x3C0744u: goto label_3c0744;
            case 0x3C075Cu: goto label_3c075c;
            case 0x3C0774u: goto label_3c0774;
            case 0x3C0818u: goto label_3c0818;
            case 0x3C0844u: goto label_3c0844;
            case 0x3C0880u: goto label_3c0880;
            case 0x3C0C3Cu: goto label_3c0c3c;
            case 0x3C0D40u: goto label_3c0d40;
            case 0x3C0D64u: goto label_3c0d64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0720u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C0728u;
label_3c0728:
    // 0x3c0728: 0xc0ea146  jal         func_3A8518
label_3c072c:
    if (ctx->pc == 0x3C072Cu) {
        ctx->pc = 0x3C072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0728u;
        // 0x3c072c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0730u;
        goto label_3c0730;
    }
    ctx->pc = 0x3C0728u;
    SET_GPR_U32(ctx, 31, 0x3C0730u);
    ctx->pc = 0x3C072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0728u;
    // 0x3c072c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C0728u, 0x3C0730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0730u;
label_3c0730:
    // 0x3c0730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0734:
    // 0x3c0734: 0xc0e85fa  jal         func_3A17E8
label_3c0738:
    if (ctx->pc == 0x3C0738u) {
        ctx->pc = 0x3C0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0734u;
        // 0x3c0738: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C073Cu;
        goto label_3c073c;
    }
    ctx->pc = 0x3C0734u;
    SET_GPR_U32(ctx, 31, 0x3C073Cu);
    ctx->pc = 0x3C0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0734u;
    // 0x3c0738: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3C0734u, 0x3C073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C073Cu;
label_3c073c:
    // 0x3c073c: 0x1000018a  b           . + 4 + (0x18A << 2)
label_3c0740:
    if (ctx->pc == 0x3C0740u) {
        ctx->pc = 0x3C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C073Cu;
        // 0x3c0740: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0744u;
        goto label_3c0744;
    }
    ctx->pc = 0x3C073Cu;
    {
        const bool branch_taken_0x3c073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C073Cu;
        // 0x3c0740: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c073c) {
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C0744u;
label_3c0744:
    // 0x3c0744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0748:
    // 0x3c0748: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c0748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c074c:
    // 0x3c074c: 0xc0f0042  jal         func_3C0108
label_3c0750:
    if (ctx->pc == 0x3C0750u) {
        ctx->pc = 0x3C0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C074Cu;
        // 0x3c0750: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0754u;
        goto label_3c0754;
    }
    ctx->pc = 0x3C074Cu;
    SET_GPR_U32(ctx, 31, 0x3C0754u);
    ctx->pc = 0x3C0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C074Cu;
    // 0x3c0750: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0108u, 0x3C074Cu, 0x3C0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0754u;
label_3c0754:
    // 0x3c0754: 0x10000184  b           . + 4 + (0x184 << 2)
label_3c0758:
    if (ctx->pc == 0x3C0758u) {
        ctx->pc = 0x3C0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0754u;
        // 0x3c0758: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C075Cu;
        goto label_3c075c;
    }
    ctx->pc = 0x3C0754u;
    {
        const bool branch_taken_0x3c0754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0754u;
        // 0x3c0758: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0754) {
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C075Cu;
label_3c075c:
    // 0x3c075c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0760:
    // 0x3c0760: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c0760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c0764:
    // 0x3c0764: 0xc0f00cc  jal         func_3C0330
label_3c0768:
    if (ctx->pc == 0x3C0768u) {
        ctx->pc = 0x3C0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0764u;
        // 0x3c0768: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C076Cu;
        goto label_3c076c;
    }
    ctx->pc = 0x3C0764u;
    SET_GPR_U32(ctx, 31, 0x3C076Cu);
    ctx->pc = 0x3C0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0764u;
    // 0x3c0768: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0330u, 0x3C0764u, 0x3C076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C076Cu;
label_3c076c:
    // 0x3c076c: 0x1000017e  b           . + 4 + (0x17E << 2)
label_3c0770:
    if (ctx->pc == 0x3C0770u) {
        ctx->pc = 0x3C0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C076Cu;
        // 0x3c0770: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0774u;
        goto label_3c0774;
    }
    ctx->pc = 0x3C076Cu;
    {
        const bool branch_taken_0x3c076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C076Cu;
        // 0x3c0770: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c076c) {
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C0774u;
label_3c0774:
    // 0x3c0774: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c0778:
    // 0x3c0778: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c0778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c077c:
    // 0x3c077c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c0780:
    // 0x3c0780: 0x40f809  jalr        $v0
label_3c0784:
    if (ctx->pc == 0x3C0784u) {
        ctx->pc = 0x3C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0780u;
        // 0x3c0784: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0788u;
        goto label_3c0788;
    }
    ctx->pc = 0x3C0780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0788u);
        ctx->pc = 0x3C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0780u;
        // 0x3c0784: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0780u, 0x3C0788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0788u;
label_3c0788:
    // 0x3c0788: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c0788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3c078c:
    // 0x3c078c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c0790:
    // 0x3c0790: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3c0794:
    if (ctx->pc == 0x3C0794u) {
        ctx->pc = 0x3C0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0790u;
        // 0x3c0794: 0x8e87001c  lw          $a3, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0798u;
        goto label_3c0798;
    }
    ctx->pc = 0x3C0790u;
    {
        const bool branch_taken_0x3c0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0790) {
            ctx->pc = 0x3C0794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0790u;
            // 0x3c0794: 0x8e87001c  lw          $a3, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C07F0u;
            goto label_3c07f0;
        }
    }
    ctx->pc = 0x3C0798u;
label_3c0798:
    // 0x3c0798: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x3c0798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_3c079c:
    // 0x3c079c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_3c07a0:
    if (ctx->pc == 0x3C07A0u) {
        ctx->pc = 0x3C07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C079Cu;
        // 0x3c07a0: 0x8e87001c  lw          $a3, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07A4u;
        goto label_3c07a4;
    }
    ctx->pc = 0x3C079Cu;
    {
        const bool branch_taken_0x3c079c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c079c) {
            ctx->pc = 0x3C07A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C079Cu;
            // 0x3c07a0: 0x8e87001c  lw          $a3, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C07F0u;
            goto label_3c07f0;
        }
    }
    ctx->pc = 0x3C07A4u;
label_3c07a4:
    // 0x3c07a4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3c07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c07a8:
    // 0x3c07a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c07a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c07ac:
    // 0x3c07ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c07acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c07b0:
    // 0x3c07b0: 0xc0ea14c  jal         func_3A8530
label_3c07b4:
    if (ctx->pc == 0x3C07B4u) {
        ctx->pc = 0x3C07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07B0u;
        // 0x3c07b4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07B8u;
        goto label_3c07b8;
    }
    ctx->pc = 0x3C07B0u;
    SET_GPR_U32(ctx, 31, 0x3C07B8u);
    ctx->pc = 0x3C07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07B0u;
    // 0x3c07b4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C07B0u, 0x3C07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07B8u;
label_3c07b8:
    // 0x3c07b8: 0xc08a61a  jal         func_229868
label_3c07bc:
    if (ctx->pc == 0x3C07BCu) {
        ctx->pc = 0x3C07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07B8u;
        // 0x3c07bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07C0u;
        goto label_3c07c0;
    }
    ctx->pc = 0x3C07B8u;
    SET_GPR_U32(ctx, 31, 0x3C07C0u);
    ctx->pc = 0x3C07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07B8u;
    // 0x3c07bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3C07B8u, 0x3C07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07C0u;
label_3c07c0:
    // 0x3c07c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c07c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c07c4:
    // 0x3c07c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c07c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c07c8:
    // 0x3c07c8: 0xc0ea176  jal         func_3A85D8
label_3c07cc:
    if (ctx->pc == 0x3C07CCu) {
        ctx->pc = 0x3C07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07C8u;
        // 0x3c07cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07D0u;
        goto label_3c07d0;
    }
    ctx->pc = 0x3C07C8u;
    SET_GPR_U32(ctx, 31, 0x3C07D0u);
    ctx->pc = 0x3C07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07C8u;
    // 0x3c07cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3C07C8u, 0x3C07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07D0u;
label_3c07d0:
    // 0x3c07d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c07d4:
    // 0x3c07d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3c07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c07d8:
    // 0x3c07d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c07d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c07dc:
    // 0x3c07dc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3c07dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3c07e0:
    // 0x3c07e0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3c07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3c07e4:
    // 0x3c07e4: 0x40f809  jalr        $v0
label_3c07e8:
    if (ctx->pc == 0x3C07E8u) {
        ctx->pc = 0x3C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07E4u;
        // 0x3c07e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07ECu;
        goto label_3c07ec;
    }
    ctx->pc = 0x3C07E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C07ECu);
        ctx->pc = 0x3C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07E4u;
        // 0x3c07e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C07E4u, 0x3C07ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C07ECu;
label_3c07ec:
    // 0x3c07ec: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x3c07ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3c07f0:
    // 0x3c07f0: 0x10e0015c  beqz        $a3, . + 4 + (0x15C << 2)
label_3c07f4:
    if (ctx->pc == 0x3C07F4u) {
        ctx->pc = 0x3C07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07F0u;
        // 0x3c07f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07F8u;
        goto label_3c07f8;
    }
    ctx->pc = 0x3C07F0u;
    {
        const bool branch_taken_0x3c07f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07F0u;
        // 0x3c07f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c07f0) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C07F8u;
label_3c07f8:
    // 0x3c07f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c07fc:
    // 0x3c07fc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3c07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c0800:
    // 0x3c0800: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c0800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c0804:
    // 0x3c0804: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c0804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c0808:
    // 0x3c0808: 0x60f809  jalr        $v1
label_3c080c:
    if (ctx->pc == 0x3C080Cu) {
        ctx->pc = 0x3C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0808u;
        // 0x3c080c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0810u;
        goto label_3c0810;
    }
    ctx->pc = 0x3C0808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0810u);
        ctx->pc = 0x3C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0808u;
        // 0x3c080c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0808u, 0x3C0810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0810u;
label_3c0810:
    // 0x3c0810: 0x10000154  b           . + 4 + (0x154 << 2)
label_3c0814:
    if (ctx->pc == 0x3C0814u) {
        ctx->pc = 0x3C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0810u;
        // 0x3c0814: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0818u;
        goto label_3c0818;
    }
    ctx->pc = 0x3C0810u;
    {
        const bool branch_taken_0x3c0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0810u;
        // 0x3c0814: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0810) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0818u;
label_3c0818:
    // 0x3c0818: 0xc0ea146  jal         func_3A8518
label_3c081c:
    if (ctx->pc == 0x3C081Cu) {
        ctx->pc = 0x3C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0818u;
        // 0x3c081c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0820u;
        goto label_3c0820;
    }
    ctx->pc = 0x3C0818u;
    SET_GPR_U32(ctx, 31, 0x3C0820u);
    ctx->pc = 0x3C081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0818u;
    // 0x3c081c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C0818u, 0x3C0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0820u;
label_3c0820:
    // 0x3c0820: 0xc0ea146  jal         func_3A8518
label_3c0824:
    if (ctx->pc == 0x3C0824u) {
        ctx->pc = 0x3C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0820u;
        // 0x3c0824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0828u;
        goto label_3c0828;
    }
    ctx->pc = 0x3C0820u;
    SET_GPR_U32(ctx, 31, 0x3C0828u);
    ctx->pc = 0x3C0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0820u;
    // 0x3c0824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C0820u, 0x3C0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0828u;
label_3c0828:
    // 0x3c0828: 0xc0ea13a  jal         func_3A84E8
label_3c082c:
    if (ctx->pc == 0x3C082Cu) {
        ctx->pc = 0x3C082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0828u;
        // 0x3c082c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0830u;
        goto label_3c0830;
    }
    ctx->pc = 0x3C0828u;
    SET_GPR_U32(ctx, 31, 0x3C0830u);
    ctx->pc = 0x3C082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0828u;
    // 0x3c082c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C0828u, 0x3C0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0830u;
label_3c0830:
    // 0x3c0830: 0xc0ea146  jal         func_3A8518
label_3c0834:
    if (ctx->pc == 0x3C0834u) {
        ctx->pc = 0x3C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0830u;
        // 0x3c0834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0838u;
        goto label_3c0838;
    }
    ctx->pc = 0x3C0830u;
    SET_GPR_U32(ctx, 31, 0x3C0838u);
    ctx->pc = 0x3C0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0830u;
    // 0x3c0834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C0830u, 0x3C0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0838u;
label_3c0838:
    // 0x3c0838: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c0838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c083c:
    // 0x3c083c: 0x10000149  b           . + 4 + (0x149 << 2)
label_3c0840:
    if (ctx->pc == 0x3C0840u) {
        ctx->pc = 0x3C0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C083Cu;
        // 0x3c0840: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0844u;
        goto label_3c0844;
    }
    ctx->pc = 0x3C083Cu;
    {
        const bool branch_taken_0x3c083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C083Cu;
        // 0x3c0840: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c083c) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0844u;
label_3c0844:
    // 0x3c0844: 0x3c055902  lui         $a1, 0x5902
    ctx->pc = 0x3c0844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22786 << 16));
label_3c0848:
    // 0x3c0848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c084c:
    // 0x3c084c: 0xc0e9132  jal         func_3A44C8
label_3c0850:
    if (ctx->pc == 0x3C0850u) {
        ctx->pc = 0x3C0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C084Cu;
        // 0x3c0850: 0x34a56f53  ori         $a1, $a1, 0x6F53 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28499);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0854u;
        goto label_3c0854;
    }
    ctx->pc = 0x3C084Cu;
    SET_GPR_U32(ctx, 31, 0x3C0854u);
    ctx->pc = 0x3C0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C084Cu;
    // 0x3c0850: 0x34a56f53  ori         $a1, $a1, 0x6F53 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28499);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C084Cu, 0x3C0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0854u;
label_3c0854:
    // 0x3c0854: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3c0854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3c0858:
    // 0x3c0858: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c0858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c085c:
    // 0x3c085c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3c085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3c0860:
    // 0x3c0860: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x3c0860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3c0864:
    // 0x3c0864: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c0868:
    // 0x3c0868: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c0868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c086c:
    // 0x3c086c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c0870:
    // 0x3c0870: 0x60f809  jalr        $v1
label_3c0874:
    if (ctx->pc == 0x3C0874u) {
        ctx->pc = 0x3C0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0870u;
        // 0x3c0874: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0878u;
        goto label_3c0878;
    }
    ctx->pc = 0x3C0870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0878u);
        ctx->pc = 0x3C0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0870u;
        // 0x3c0874: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0870u, 0x3C0878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0878u;
label_3c0878:
    // 0x3c0878: 0x1000013b  b           . + 4 + (0x13B << 2)
label_3c087c:
    if (ctx->pc == 0x3C087Cu) {
        ctx->pc = 0x3C087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0878u;
        // 0x3c087c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0880u;
        goto label_3c0880;
    }
    ctx->pc = 0x3C0878u;
    {
        const bool branch_taken_0x3c0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0878u;
        // 0x3c087c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0878) {
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C0880u;
label_3c0880:
    // 0x3c0880: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0884:
    // 0x3c0884: 0xc0ea12a  jal         func_3A84A8
label_3c0888:
    if (ctx->pc == 0x3C0888u) {
        ctx->pc = 0x3C0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0884u;
        // 0x3c0888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C088Cu;
        goto label_3c088c;
    }
    ctx->pc = 0x3C0884u;
    SET_GPR_U32(ctx, 31, 0x3C088Cu);
    ctx->pc = 0x3C0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0884u;
    // 0x3c0888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0884u, 0x3C088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C088Cu;
label_3c088c:
    // 0x3c088c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c088cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0890:
    // 0x3c0890: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0894:
    // 0x3c0894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0898:
    // 0x3c0898: 0xc0ea12a  jal         func_3A84A8
label_3c089c:
    if (ctx->pc == 0x3C089Cu) {
        ctx->pc = 0x3C089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0898u;
        // 0x3c089c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08A0u;
        goto label_3c08a0;
    }
    ctx->pc = 0x3C0898u;
    SET_GPR_U32(ctx, 31, 0x3C08A0u);
    ctx->pc = 0x3C089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0898u;
    // 0x3c089c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0898u, 0x3C08A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C08A0u;
label_3c08a0:
    // 0x3c08a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c08a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c08a4:
    // 0x3c08a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c08a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c08a8:
    // 0x3c08a8: 0xc0ea146  jal         func_3A8518
label_3c08ac:
    if (ctx->pc == 0x3C08ACu) {
        ctx->pc = 0x3C08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08A8u;
        // 0x3c08ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08B0u;
        goto label_3c08b0;
    }
    ctx->pc = 0x3C08A8u;
    SET_GPR_U32(ctx, 31, 0x3C08B0u);
    ctx->pc = 0x3C08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C08A8u;
    // 0x3c08ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C08A8u, 0x3C08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C08B0u;
label_3c08b0:
    // 0x3c08b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c08b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c08b4:
    // 0x3c08b4: 0xc0ea146  jal         func_3A8518
label_3c08b8:
    if (ctx->pc == 0x3C08B8u) {
        ctx->pc = 0x3C08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08B4u;
        // 0x3c08b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08BCu;
        goto label_3c08bc;
    }
    ctx->pc = 0x3C08B4u;
    SET_GPR_U32(ctx, 31, 0x3C08BCu);
    ctx->pc = 0x3C08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C08B4u;
    // 0x3c08b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C08B4u, 0x3C08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C08BCu;
label_3c08bc:
    // 0x3c08bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c08bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c08c0:
    // 0x3c08c0: 0xc0ea14c  jal         func_3A8530
label_3c08c4:
    if (ctx->pc == 0x3C08C4u) {
        ctx->pc = 0x3C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08C0u;
        // 0x3c08c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08C8u;
        goto label_3c08c8;
    }
    ctx->pc = 0x3C08C0u;
    SET_GPR_U32(ctx, 31, 0x3C08C8u);
    ctx->pc = 0x3C08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C08C0u;
    // 0x3c08c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C08C0u, 0x3C08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C08C8u;
label_3c08c8:
    // 0x3c08c8: 0xc0ea14c  jal         func_3A8530
label_3c08cc:
    if (ctx->pc == 0x3C08CCu) {
        ctx->pc = 0x3C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08C8u;
        // 0x3c08cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08D0u;
        goto label_3c08d0;
    }
    ctx->pc = 0x3C08C8u;
    SET_GPR_U32(ctx, 31, 0x3C08D0u);
    ctx->pc = 0x3C08CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C08C8u;
    // 0x3c08cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C08C8u, 0x3C08D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C08D0u;
label_3c08d0:
    // 0x3c08d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c08d4:
    // 0x3c08d4: 0x52030001  beql        $s0, $v1, . + 4 + (0x1 << 2)
label_3c08d8:
    if (ctx->pc == 0x3C08D8u) {
        ctx->pc = 0x3C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08D4u;
        // 0x3c08d8: 0xae800018  sw          $zero, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08DCu;
        goto label_3c08dc;
    }
    ctx->pc = 0x3C08D4u;
    {
        const bool branch_taken_0x3c08d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c08d4) {
            ctx->pc = 0x3C08D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C08D4u;
            // 0x3c08d8: 0xae800018  sw          $zero, 0x18($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C08DCu;
            goto label_3c08dc;
        }
    }
    ctx->pc = 0x3C08DCu;
label_3c08dc:
    // 0x3c08dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c08e0:
    // 0x3c08e0: 0x3c160080  lui         $s6, 0x80
    ctx->pc = 0x3c08e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)128 << 16));
label_3c08e4:
    // 0x3c08e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c08e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c08e8:
    // 0x3c08e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c08ec:
    // 0x3c08ec: 0x40f809  jalr        $v0
label_3c08f0:
    if (ctx->pc == 0x3C08F0u) {
        ctx->pc = 0x3C08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08ECu;
        // 0x3c08f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C08F4u;
        goto label_3c08f4;
    }
    ctx->pc = 0x3C08ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C08F4u);
        ctx->pc = 0x3C08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08ECu;
        // 0x3c08f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C08ECu, 0x3C08F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C08F4u;
label_3c08f4:
    // 0x3c08f4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3c08f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_3c08f8:
    // 0x3c08f8: 0x5440011b  bnel        $v0, $zero, . + 4 + (0x11B << 2)
label_3c08fc:
    if (ctx->pc == 0x3C08FCu) {
        ctx->pc = 0x3C08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08F8u;
        // 0x3c08fc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0900u;
        goto label_3c0900;
    }
    ctx->pc = 0x3C08F8u;
    {
        const bool branch_taken_0x3c08f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c08f8) {
            ctx->pc = 0x3C08FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C08F8u;
            // 0x3c08fc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C0900u;
label_3c0900:
    // 0x3c0900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0904:
    // 0x3c0904: 0xc0e8dee  jal         func_3A37B8
label_3c0908:
    if (ctx->pc == 0x3C0908u) {
        ctx->pc = 0x3C0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0904u;
        // 0x3c0908: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C090Cu;
        goto label_3c090c;
    }
    ctx->pc = 0x3C0904u;
    SET_GPR_U32(ctx, 31, 0x3C090Cu);
    ctx->pc = 0x3C0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0904u;
    // 0x3c0908: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3C0904u, 0x3C090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C090Cu;
label_3c090c:
    // 0x3c090c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c090cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0910:
    // 0x3c0910: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3c0910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3c0914:
    // 0x3c0914: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3c0918:
    if (ctx->pc == 0x3C0918u) {
        ctx->pc = 0x3C0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0914u;
        // 0x3c0918: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C091Cu;
        goto label_3c091c;
    }
    ctx->pc = 0x3C0914u;
    {
        const bool branch_taken_0x3c0914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0914u;
        // 0x3c0918: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0914) {
            ctx->pc = 0x3C092Cu;
            goto label_3c092c;
        }
    }
    ctx->pc = 0x3C091Cu;
label_3c091c:
    // 0x3c091c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3c091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3c0920:
    // 0x3c0920: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3c0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3c0924:
    // 0x3c0924: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c0924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c0928:
    // 0x3c0928: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3c0928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3c092c:
    // 0x3c092c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3c092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3c0930:
    // 0x3c0930: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_3c0934:
    if (ctx->pc == 0x3C0934u) {
        ctx->pc = 0x3C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0930u;
        // 0x3c0934: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0938u;
        goto label_3c0938;
    }
    ctx->pc = 0x3C0930u;
    {
        const bool branch_taken_0x3c0930 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0930u;
        // 0x3c0934: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0930) {
            ctx->pc = 0x3C0994u;
            goto label_3c0994;
        }
    }
    ctx->pc = 0x3C0938u;
label_3c0938:
    // 0x3c0938: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c0938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c093c:
    // 0x3c093c: 0xc1073cc  jal         func_41CF30
label_3c0940:
    if (ctx->pc == 0x3C0940u) {
        ctx->pc = 0x3C0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C093Cu;
        // 0x3c0940: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0944u;
        goto label_3c0944;
    }
    ctx->pc = 0x3C093Cu;
    SET_GPR_U32(ctx, 31, 0x3C0944u);
    ctx->pc = 0x3C0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C093Cu;
    // 0x3c0940: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C093Cu, 0x3C0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0944u;
label_3c0944:
    // 0x3c0944: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c0944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3c0948:
    // 0x3c0948: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3c094c:
    if (ctx->pc == 0x3C094Cu) {
        ctx->pc = 0x3C094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0948u;
        // 0x3c094c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0950u;
        goto label_3c0950;
    }
    ctx->pc = 0x3C0948u;
    {
        const bool branch_taken_0x3c0948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0948u;
        // 0x3c094c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0948) {
            ctx->pc = 0x3C0968u;
            goto label_3c0968;
        }
    }
    ctx->pc = 0x3C0950u;
label_3c0950:
    // 0x3c0950: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3c0950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c0954:
    // 0x3c0954: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c0954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c0958:
    // 0x3c0958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c0958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c095c:
    // 0x3c095c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c095cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c0960:
    // 0x3c0960: 0xc045ca0  jal         func_117280
label_3c0964:
    if (ctx->pc == 0x3C0964u) {
        ctx->pc = 0x3C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0960u;
        // 0x3c0964: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0968u;
        goto label_3c0968;
    }
    ctx->pc = 0x3C0960u;
    SET_GPR_U32(ctx, 31, 0x3C0968u);
    ctx->pc = 0x3C0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0960u;
    // 0x3c0964: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3C0960u, 0x3C0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0968u;
label_3c0968:
    // 0x3c0968: 0x3c067e79  lui         $a2, 0x7E79
    ctx->pc = 0x3c0968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32377 << 16));
label_3c096c:
    // 0x3c096c: 0x3c076052  lui         $a3, 0x6052
    ctx->pc = 0x3c096cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24658 << 16));
label_3c0970:
    // 0x3c0970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0974:
    // 0x3c0974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c0974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0978:
    // 0x3c0978: 0x34c66fff  ori         $a2, $a2, 0x6FFF
    ctx->pc = 0x3c0978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28671);
label_3c097c:
    // 0x3c097c: 0x34e740ff  ori         $a3, $a3, 0x40FF
    ctx->pc = 0x3c097cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16639);
label_3c0980:
    // 0x3c0980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c0980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0984:
    // 0x3c0984: 0xc0e9978  jal         func_3A65E0
label_3c0988:
    if (ctx->pc == 0x3C0988u) {
        ctx->pc = 0x3C0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0984u;
        // 0x3c0988: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C098Cu;
        goto label_3c098c;
    }
    ctx->pc = 0x3C0984u;
    SET_GPR_U32(ctx, 31, 0x3C098Cu);
    ctx->pc = 0x3C0988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0984u;
    // 0x3c0988: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C0984u, 0x3C098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C098Cu;
label_3c098c:
    // 0x3c098c: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_3c0990:
    if (ctx->pc == 0x3C0990u) {
        ctx->pc = 0x3C0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C098Cu;
        // 0x3c0990: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0994u;
        goto label_3c0994;
    }
    ctx->pc = 0x3C098Cu;
    {
        const bool branch_taken_0x3c098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C098Cu;
        // 0x3c0990: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c098c) {
            ctx->pc = 0x3C0D68u;
            goto label_3c0d68;
        }
    }
    ctx->pc = 0x3C0994u;
label_3c0994:
    // 0x3c0994: 0x3c055902  lui         $a1, 0x5902
    ctx->pc = 0x3c0994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22786 << 16));
label_3c0998:
    // 0x3c0998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c0998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c099c:
    // 0x3c099c: 0xc0e9132  jal         func_3A44C8
label_3c09a0:
    if (ctx->pc == 0x3C09A0u) {
        ctx->pc = 0x3C09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C099Cu;
        // 0x3c09a0: 0x34a56f53  ori         $a1, $a1, 0x6F53 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28499);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C09A4u;
        goto label_3c09a4;
    }
    ctx->pc = 0x3C099Cu;
    SET_GPR_U32(ctx, 31, 0x3C09A4u);
    ctx->pc = 0x3C09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C099Cu;
    // 0x3c09a0: 0x34a56f53  ori         $a1, $a1, 0x6F53 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28499);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C099Cu, 0x3C09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09A4u;
label_3c09a4:
    // 0x3c09a4: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3c09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3c09a8:
    // 0x3c09a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c09a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c09ac:
    // 0x3c09ac: 0xc0e858c  jal         func_3A1630
label_3c09b0:
    if (ctx->pc == 0x3C09B0u) {
        ctx->pc = 0x3C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09ACu;
        // 0x3c09b0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C09B4u;
        goto label_3c09b4;
    }
    ctx->pc = 0x3C09ACu;
    SET_GPR_U32(ctx, 31, 0x3C09B4u);
    ctx->pc = 0x3C09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09ACu;
    // 0x3c09b0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C09ACu, 0x3C09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09B4u;
label_3c09b4:
    // 0x3c09b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c09b8:
    // 0x3c09b8: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3c09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3c09bc:
    // 0x3c09bc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3c09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3c09c0:
    // 0x3c09c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c09c4:
    // 0x3c09c4: 0xc1073cc  jal         func_41CF30
label_3c09c8:
    if (ctx->pc == 0x3C09C8u) {
        ctx->pc = 0x3C09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09C4u;
        // 0x3c09c8: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C09CCu;
        goto label_3c09cc;
    }
    ctx->pc = 0x3C09C4u;
    SET_GPR_U32(ctx, 31, 0x3C09CCu);
    ctx->pc = 0x3C09C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09C4u;
    // 0x3c09c8: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C09C4u, 0x3C09CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09CCu;
label_3c09cc:
    // 0x3c09cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c09ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3c09d0:
    // 0x3c09d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3c09d4:
    if (ctx->pc == 0x3C09D4u) {
        ctx->pc = 0x3C09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09D0u;
        // 0x3c09d4: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C09D8u;
        goto label_3c09d8;
    }
    ctx->pc = 0x3C09D0u;
    {
        const bool branch_taken_0x3c09d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c09d0) {
            ctx->pc = 0x3C09D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C09D0u;
            // 0x3c09d4: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C09F4u;
            goto label_3c09f4;
        }
    }
    ctx->pc = 0x3C09D8u;
label_3c09d8:
    // 0x3c09d8: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3c09d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c09dc:
    // 0x3c09dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c09dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c09e0:
    // 0x3c09e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c09e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c09e4:
    // 0x3c09e4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c09e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c09e8:
    // 0x3c09e8: 0xc045ca0  jal         func_117280
label_3c09ec:
    if (ctx->pc == 0x3C09ECu) {
        ctx->pc = 0x3C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09E8u;
        // 0x3c09ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C09F0u;
        goto label_3c09f0;
    }
    ctx->pc = 0x3C09E8u;
    SET_GPR_U32(ctx, 31, 0x3C09F0u);
    ctx->pc = 0x3C09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09E8u;
    // 0x3c09ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3C09E8u, 0x3C09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09F0u;
label_3c09f0:
    // 0x3c09f0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3c09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c09f4:
    // 0x3c09f4: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x3c09f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_3c09f8:
    // 0x3c09f8: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3c09f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3c09fc:
    // 0x3c09fc: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x3c09fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3c0a00:
    // 0x3c0a00: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_3c0a04:
    if (ctx->pc == 0x3C0A04u) {
        ctx->pc = 0x3C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A00u;
        // 0x3c0a04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A08u;
        goto label_3c0a08;
    }
    ctx->pc = 0x3C0A00u;
    {
        const bool branch_taken_0x3c0a00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A00u;
        // 0x3c0a04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a00) {
            ctx->pc = 0x3C0A28u;
            goto label_3c0a28;
        }
    }
    ctx->pc = 0x3C0A08u;
label_3c0a08:
    // 0x3c0a08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c0a0c:
    // 0x3c0a0c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3c0a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3c0a10:
    // 0x3c0a10: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c0a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c0a14:
    // 0x3c0a14: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c0a18:
    // 0x3c0a18: 0x60f809  jalr        $v1
label_3c0a1c:
    if (ctx->pc == 0x3C0A1Cu) {
        ctx->pc = 0x3C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A18u;
        // 0x3c0a1c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A20u;
        goto label_3c0a20;
    }
    ctx->pc = 0x3C0A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0A20u);
        ctx->pc = 0x3C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A18u;
        // 0x3c0a1c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0A18u, 0x3C0A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0A20u;
label_3c0a20:
    // 0x3c0a20: 0x10000079  b           . + 4 + (0x79 << 2)
label_3c0a24:
    if (ctx->pc == 0x3C0A24u) {
        ctx->pc = 0x3C0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A20u;
        // 0x3c0a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A28u;
        goto label_3c0a28;
    }
    ctx->pc = 0x3C0A20u;
    {
        const bool branch_taken_0x3c0a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A20u;
        // 0x3c0a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a20) {
            ctx->pc = 0x3C0C08u;
            goto label_3c0c08;
        }
    }
    ctx->pc = 0x3C0A28u;
label_3c0a28:
    // 0x3c0a28: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3c0a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0a2c:
    // 0x3c0a2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c0a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a30:
    // 0x3c0a30: 0xc0e92f4  jal         func_3A4BD0
label_3c0a34:
    if (ctx->pc == 0x3C0A34u) {
        ctx->pc = 0x3C0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A30u;
        // 0x3c0a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A38u;
        goto label_3c0a38;
    }
    ctx->pc = 0x3C0A30u;
    SET_GPR_U32(ctx, 31, 0x3C0A38u);
    ctx->pc = 0x3C0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A30u;
    // 0x3c0a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3C0A30u, 0x3C0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A38u;
label_3c0a38:
    // 0x3c0a38: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3c0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3c0a3c:
    // 0x3c0a3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c0a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c0a40:
    // 0x3c0a40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c0a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0a44:
    // 0x3c0a44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c0a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c0a48:
    // 0x3c0a48: 0xc136b24  jal         func_4DAC90
label_3c0a4c:
    if (ctx->pc == 0x3C0A4Cu) {
        ctx->pc = 0x3C0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A48u;
        // 0x3c0a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A50u;
        goto label_3c0a50;
    }
    ctx->pc = 0x3C0A48u;
    SET_GPR_U32(ctx, 31, 0x3C0A50u);
    ctx->pc = 0x3C0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A48u;
    // 0x3c0a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C0A48u, 0x3C0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A50u;
label_3c0a50:
    // 0x3c0a50: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c0a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c0a54:
    // 0x3c0a54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c0a58:
    // 0x3c0a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c0a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a5c:
    // 0x3c0a5c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3c0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c0a60:
    // 0x3c0a60: 0xc136b18  jal         func_4DAC60
label_3c0a64:
    if (ctx->pc == 0x3C0A64u) {
        ctx->pc = 0x3C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A60u;
        // 0x3c0a64: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0A68u;
        goto label_3c0a68;
    }
    ctx->pc = 0x3C0A60u;
    SET_GPR_U32(ctx, 31, 0x3C0A68u);
    ctx->pc = 0x3C0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A60u;
    // 0x3c0a64: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C0A60u, 0x3C0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A68u;
label_3c0a68:
    // 0x3c0a68: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c0a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c0a6c:
    // 0x3c0a6c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3c0a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c0a70:
    // 0x3c0a70: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x3c0a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3c0a74:
    // 0x3c0a74: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3c0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3c0a78:
    // 0x3c0a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0a7c:
    // 0x3c0a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0a80:
    // 0x3c0a80: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3c0a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a84:
    // 0x3c0a84: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c0a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c0a88:
    // 0x3c0a88: 0x248429e0  addiu       $a0, $a0, 0x29E0
    ctx->pc = 0x3c0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10720));
label_3c0a8c:
    // 0x3c0a8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3c0a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3c0a90:
    // 0x3c0a90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c0a94:
    // 0x3c0a94: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c0a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c0a98:
    // 0x3c0a98: 0xc0e94ee  jal         func_3A53B8
label_3c0a9c:
    if (ctx->pc == 0x3C0A9Cu) {
        ctx->pc = 0x3C0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A98u;
        // 0x3c0a9c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0AA0u;
        goto label_3c0aa0;
    }
    ctx->pc = 0x3C0A98u;
    SET_GPR_U32(ctx, 31, 0x3C0AA0u);
    ctx->pc = 0x3C0A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A98u;
    // 0x3c0a9c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53B8u, 0x3C0A98u, 0x3C0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0AA0u;
label_3c0aa0:
    // 0x3c0aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c0aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0aa4:
    // 0x3c0aa4: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x3c0aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_3c0aa8:
    // 0x3c0aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c0aac:
    if (ctx->pc == 0x3C0AACu) {
        ctx->pc = 0x3C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AA8u;
        // 0x3c0aac: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0AB0u;
        goto label_3c0ab0;
    }
    ctx->pc = 0x3C0AA8u;
    {
        const bool branch_taken_0x3c0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AA8u;
        // 0x3c0aac: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0aa8) {
            ctx->pc = 0x3C0AC0u;
            goto label_3c0ac0;
        }
    }
    ctx->pc = 0x3C0AB0u;
label_3c0ab0:
    // 0x3c0ab0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_3c0ab4:
    if (ctx->pc == 0x3C0AB4u) {
        ctx->pc = 0x3C0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AB0u;
        // 0x3c0ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0AB8u;
        goto label_3c0ab8;
    }
    ctx->pc = 0x3C0AB0u;
    {
        const bool branch_taken_0x3c0ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AB0u;
        // 0x3c0ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ab0) {
            ctx->pc = 0x3C0ABCu;
            goto label_3c0abc;
        }
    }
    ctx->pc = 0x3C0AB8u;
label_3c0ab8:
    // 0x3c0ab8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x3c0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
label_3c0abc:
    // 0x3c0abc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c0abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c0ac0:
    // 0x3c0ac0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c0ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c0ac4:
    // 0x3c0ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ac8:
    // 0x3c0ac8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3c0ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3c0acc:
    // 0x3c0acc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c0accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c0ad0:
    // 0x3c0ad0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c0ad4:
    // 0x3c0ad4: 0xc0ea158  jal         func_3A8560
label_3c0ad8:
    if (ctx->pc == 0x3C0AD8u) {
        ctx->pc = 0x3C0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AD4u;
        // 0x3c0ad8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0ADCu;
        goto label_3c0adc;
    }
    ctx->pc = 0x3C0AD4u;
    SET_GPR_U32(ctx, 31, 0x3C0ADCu);
    ctx->pc = 0x3C0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0AD4u;
    // 0x3c0ad8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3C0AD4u, 0x3C0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0ADCu;
label_3c0adc:
    // 0x3c0adc: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3c0adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3c0ae0:
    // 0x3c0ae0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c0ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c0ae4:
    // 0x3c0ae4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c0ae8:
    // 0x3c0ae8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c0ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c0aec:
    // 0x3c0aec: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3c0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3c0af0:
    // 0x3c0af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0af4:
    // 0x3c0af4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3c0af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c0af8:
    // 0x3c0af8: 0xc0ea158  jal         func_3A8560
label_3c0afc:
    if (ctx->pc == 0x3C0AFCu) {
        ctx->pc = 0x3C0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AF8u;
        // 0x3c0afc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B00u;
        goto label_3c0b00;
    }
    ctx->pc = 0x3C0AF8u;
    SET_GPR_U32(ctx, 31, 0x3C0B00u);
    ctx->pc = 0x3C0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0AF8u;
    // 0x3c0afc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3C0AF8u, 0x3C0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B00u;
label_3c0b00:
    // 0x3c0b00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c0b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0b04:
    // 0x3c0b04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c0b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b08:
    // 0x3c0b08: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3c0b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c0b0c:
    // 0x3c0b0c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3c0b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3c0b10:
    // 0x3c0b10: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3c0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3c0b14:
    // 0x3c0b14: 0x40f809  jalr        $v0
label_3c0b18:
    if (ctx->pc == 0x3C0B18u) {
        ctx->pc = 0x3C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B14u;
        // 0x3c0b18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B1Cu;
        goto label_3c0b1c;
    }
    ctx->pc = 0x3C0B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0B1Cu);
        ctx->pc = 0x3C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B14u;
        // 0x3c0b18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0B14u, 0x3C0B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0B1Cu;
label_3c0b1c:
    // 0x3c0b1c: 0x3c067e79  lui         $a2, 0x7E79
    ctx->pc = 0x3c0b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32377 << 16));
label_3c0b20:
    // 0x3c0b20: 0x3c076052  lui         $a3, 0x6052
    ctx->pc = 0x3c0b20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24658 << 16));
label_3c0b24:
    // 0x3c0b24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c0b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b28:
    // 0x3c0b28: 0x34e740ff  ori         $a3, $a3, 0x40FF
    ctx->pc = 0x3c0b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16639);
label_3c0b2c:
    // 0x3c0b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c0b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b30:
    // 0x3c0b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c0b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b34:
    // 0x3c0b34: 0x34c66fff  ori         $a2, $a2, 0x6FFF
    ctx->pc = 0x3c0b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28671);
label_3c0b38:
    // 0x3c0b38: 0xc0e9978  jal         func_3A65E0
label_3c0b3c:
    if (ctx->pc == 0x3C0B3Cu) {
        ctx->pc = 0x3C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B38u;
        // 0x3c0b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B40u;
        goto label_3c0b40;
    }
    ctx->pc = 0x3C0B38u;
    SET_GPR_U32(ctx, 31, 0x3C0B40u);
    ctx->pc = 0x3C0B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B38u;
    // 0x3c0b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C0B38u, 0x3C0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B40u;
label_3c0b40:
    // 0x3c0b40: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c0b40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c0b44:
    // 0x3c0b44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c0b44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c0b48:
    // 0x3c0b48: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c0b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c0b4c:
    // 0x3c0b4c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c0b4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c0b50:
    // 0x3c0b50: 0xc0cd518  jal         func_335460
label_3c0b54:
    if (ctx->pc == 0x3C0B54u) {
        ctx->pc = 0x3C0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B50u;
        // 0x3c0b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B58u;
        goto label_3c0b58;
    }
    ctx->pc = 0x3C0B50u;
    SET_GPR_U32(ctx, 31, 0x3C0B58u);
    ctx->pc = 0x3C0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B50u;
    // 0x3c0b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C0B50u, 0x3C0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B58u;
label_3c0b58:
    // 0x3c0b58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c0b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c0b5c:
    // 0x3c0b5c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3c0b5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3c0b60:
    // 0x3c0b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b64:
    // 0x3c0b64: 0xc0cd518  jal         func_335460
label_3c0b68:
    if (ctx->pc == 0x3C0B68u) {
        ctx->pc = 0x3C0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B64u;
        // 0x3c0b68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B6Cu;
        goto label_3c0b6c;
    }
    ctx->pc = 0x3C0B64u;
    SET_GPR_U32(ctx, 31, 0x3C0B6Cu);
    ctx->pc = 0x3C0B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B64u;
    // 0x3c0b68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C0B64u, 0x3C0B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B6Cu;
label_3c0b6c:
    // 0x3c0b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0b70:
    // 0x3c0b70: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c0b70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c0b74:
    // 0x3c0b74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c0b74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c0b78:
    // 0x3c0b78: 0xc0cd518  jal         func_335460
label_3c0b7c:
    if (ctx->pc == 0x3C0B7Cu) {
        ctx->pc = 0x3C0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B78u;
        // 0x3c0b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B80u;
        goto label_3c0b80;
    }
    ctx->pc = 0x3C0B78u;
    SET_GPR_U32(ctx, 31, 0x3C0B80u);
    ctx->pc = 0x3C0B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B78u;
    // 0x3c0b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C0B78u, 0x3C0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B80u;
label_3c0b80:
    // 0x3c0b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0b84:
    // 0x3c0b84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c0b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0b88:
    // 0x3c0b88: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3c0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c0b8c:
    // 0x3c0b8c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3c0b8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c0b90:
    // 0x3c0b90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3c0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b94:
    // 0x3c0b94: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3c0b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3c0b98:
    // 0x3c0b98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c0b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0b9c:
    // 0x3c0b9c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3c0b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3c0ba0:
    // 0x3c0ba0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3c0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c0ba4:
    // 0x3c0ba4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3c0ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3c0ba8:
    // 0x3c0ba8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3c0ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c0bac:
    // 0x3c0bac: 0xc136b18  jal         func_4DAC60
label_3c0bb0:
    if (ctx->pc == 0x3C0BB0u) {
        ctx->pc = 0x3C0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BACu;
        // 0x3c0bb0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0BB4u;
        goto label_3c0bb4;
    }
    ctx->pc = 0x3C0BACu;
    SET_GPR_U32(ctx, 31, 0x3C0BB4u);
    ctx->pc = 0x3C0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BACu;
    // 0x3c0bb0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C0BACu, 0x3C0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BB4u;
label_3c0bb4:
    // 0x3c0bb4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3c0bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c0bb8:
    // 0x3c0bb8: 0x3c067e79  lui         $a2, 0x7E79
    ctx->pc = 0x3c0bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32377 << 16));
label_3c0bbc:
    // 0x3c0bbc: 0x3c076052  lui         $a3, 0x6052
    ctx->pc = 0x3c0bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24658 << 16));
label_3c0bc0:
    // 0x3c0bc0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c0bc4:
    // 0x3c0bc4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c0bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c0bc8:
    // 0x3c0bc8: 0x34c66fff  ori         $a2, $a2, 0x6FFF
    ctx->pc = 0x3c0bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28671);
label_3c0bcc:
    // 0x3c0bcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c0bd0:
    // 0x3c0bd0: 0x34e740ff  ori         $a3, $a3, 0x40FF
    ctx->pc = 0x3c0bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16639);
label_3c0bd4:
    // 0x3c0bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c0bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0bd8:
    // 0x3c0bd8: 0xc0e9978  jal         func_3A65E0
label_3c0bdc:
    if (ctx->pc == 0x3C0BDCu) {
        ctx->pc = 0x3C0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BD8u;
        // 0x3c0bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0BE0u;
        goto label_3c0be0;
    }
    ctx->pc = 0x3C0BD8u;
    SET_GPR_U32(ctx, 31, 0x3C0BE0u);
    ctx->pc = 0x3C0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BD8u;
    // 0x3c0bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3C0BD8u, 0x3C0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BE0u;
label_3c0be0:
    // 0x3c0be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0be4:
    // 0x3c0be4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c0be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0be8:
    // 0x3c0be8: 0xa2820011  sb          $v0, 0x11($s4)
    ctx->pc = 0x3c0be8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 2));
label_3c0bec:
    // 0x3c0bec: 0xc0e8cda  jal         func_3A3368
label_3c0bf0:
    if (ctx->pc == 0x3C0BF0u) {
        ctx->pc = 0x3C0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BECu;
        // 0x3c0bf0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0BF4u;
        goto label_3c0bf4;
    }
    ctx->pc = 0x3C0BECu;
    SET_GPR_U32(ctx, 31, 0x3C0BF4u);
    ctx->pc = 0x3C0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BECu;
    // 0x3c0bf0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3C0BECu, 0x3C0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BF4u;
label_3c0bf4:
    // 0x3c0bf4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3c0bf8:
    // 0x3c0bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c0bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0bfc:
    // 0x3c0bfc: 0xc0e8cbc  jal         func_3A32F0
label_3c0c00:
    if (ctx->pc == 0x3C0C00u) {
        ctx->pc = 0x3C0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BFCu;
        // 0x3c0c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0C04u;
        goto label_3c0c04;
    }
    ctx->pc = 0x3C0BFCu;
    SET_GPR_U32(ctx, 31, 0x3C0C04u);
    ctx->pc = 0x3C0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BFCu;
    // 0x3c0c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3C0BFCu, 0x3C0C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C04u;
label_3c0c04:
    // 0x3c0c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0c08:
    // 0x3c0c08: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x3c0c08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
label_3c0c0c:
    // 0x3c0c0c: 0x8e650118  lw          $a1, 0x118($s3)
    ctx->pc = 0x3c0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_3c0c10:
    // 0x3c0c10: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
label_3c0c14:
    if (ctx->pc == 0x3C0C14u) {
        ctx->pc = 0x3C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C10u;
        // 0x3c0c14: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0C18u;
        goto label_3c0c18;
    }
    ctx->pc = 0x3C0C10u;
    {
        const bool branch_taken_0x3c0c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C10u;
        // 0x3c0c14: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c10) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0C18u;
label_3c0c18:
    // 0x3c0c18: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3c0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_3c0c1c:
    // 0x3c0c1c: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x3c0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3c0c20:
    // 0x3c0c20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c0c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c0c24:
    // 0x3c0c24: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x3c0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_3c0c28:
    // 0x3c0c28: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x3c0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_3c0c2c:
    // 0x3c0c2c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3c0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3c0c30:
    // 0x3c0c30: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3c0c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3c0c34:
    // 0x3c0c34: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3c0c38:
    if (ctx->pc == 0x3C0C38u) {
        ctx->pc = 0x3C0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C34u;
        // 0x3c0c38: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0C3Cu;
        goto label_3c0c3c;
    }
    ctx->pc = 0x3C0C34u;
    {
        const bool branch_taken_0x3c0c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C34u;
        // 0x3c0c38: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c34) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0C3Cu;
label_3c0c3c:
    // 0x3c0c3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0c40:
    // 0x3c0c40: 0xc0ea12a  jal         func_3A84A8
label_3c0c44:
    if (ctx->pc == 0x3C0C44u) {
        ctx->pc = 0x3C0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C40u;
        // 0x3c0c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0C48u;
        goto label_3c0c48;
    }
    ctx->pc = 0x3C0C40u;
    SET_GPR_U32(ctx, 31, 0x3C0C48u);
    ctx->pc = 0x3C0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C40u;
    // 0x3c0c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0C40u, 0x3C0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C48u;
label_3c0c48:
    // 0x3c0c48: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0c4c:
    // 0x3c0c4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0c50:
    // 0x3c0c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0c54:
    // 0x3c0c54: 0xc0ea12a  jal         func_3A84A8
label_3c0c58:
    if (ctx->pc == 0x3C0C58u) {
        ctx->pc = 0x3C0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C54u;
        // 0x3c0c58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0C5Cu;
        goto label_3c0c5c;
    }
    ctx->pc = 0x3C0C54u;
    SET_GPR_U32(ctx, 31, 0x3C0C5Cu);
    ctx->pc = 0x3C0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C54u;
    // 0x3c0c58: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C0C54u, 0x3C0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C5Cu;
label_3c0c5c:
    // 0x3c0c5c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0c60:
    // 0x3c0c60: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3c0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3c0c64:
    // 0x3c0c64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c0c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3c0c68:
    // 0x3c0c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0c6c:
    // 0x3c0c6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c0c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c0c70:
    // 0x3c0c70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c0c74:
    // 0x3c0c74: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3c0c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c0c78:
    // 0x3c0c78: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c0c7c:
    // 0x3c0c7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c0c80:
    // 0x3c0c80: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3c0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c0c84:
    // 0x3c0c84: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c0c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c0c88:
    // 0x3c0c88: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3c0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c0c8c:
    // 0x3c0c8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c0c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c0c90:
    // 0x3c0c90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c0c94:
    // 0x3c0c94: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3c0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3c0c98:
    // 0x3c0c98: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3c0c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3c0c9c:
    // 0x3c0c9c: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x3c0c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3c0ca0:
    // 0x3c0ca0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3c0ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3c0ca4:
    // 0x3c0ca4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3c0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3c0ca8:
    // 0x3c0ca8: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x3c0ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3c0cac:
    // 0x3c0cac: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3c0cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3c0cb0:
    // 0x3c0cb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c0cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0cb4:
    // 0x3c0cb4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c0cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c0cb8:
    // 0x3c0cb8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c0cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3c0cbc:
    // 0x3c0cbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c0cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0cc0:
    // 0x3c0cc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c0cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c0cc4:
    // 0x3c0cc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3c0cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3c0cc8:
    // 0x3c0cc8: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x3c0cc8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c0ccc:
    // 0x3c0ccc: 0xc0cd518  jal         func_335460
label_3c0cd0:
    if (ctx->pc == 0x3C0CD0u) {
        ctx->pc = 0x3C0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CCCu;
        // 0x3c0cd0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0CD4u;
        goto label_3c0cd4;
    }
    ctx->pc = 0x3C0CCCu;
    SET_GPR_U32(ctx, 31, 0x3C0CD4u);
    ctx->pc = 0x3C0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CCCu;
    // 0x3c0cd0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C0CCCu, 0x3C0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CD4u;
label_3c0cd4:
    // 0x3c0cd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c0cd8:
    // 0x3c0cd8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c0cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c0cdc:
    // 0x3c0cdc: 0xc136b24  jal         func_4DAC90
label_3c0ce0:
    if (ctx->pc == 0x3C0CE0u) {
        ctx->pc = 0x3C0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CDCu;
        // 0x3c0ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0CE4u;
        goto label_3c0ce4;
    }
    ctx->pc = 0x3C0CDCu;
    SET_GPR_U32(ctx, 31, 0x3C0CE4u);
    ctx->pc = 0x3C0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CDCu;
    // 0x3c0ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C0CDCu, 0x3C0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CE4u;
label_3c0ce4:
    // 0x3c0ce4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3c0ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c0ce8:
    // 0x3c0ce8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c0cec:
    // 0x3c0cec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c0cf0:
    // 0x3c0cf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c0cf4:
    // 0x3c0cf4: 0x40f809  jalr        $v0
label_3c0cf8:
    if (ctx->pc == 0x3C0CF8u) {
        ctx->pc = 0x3C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CF4u;
        // 0x3c0cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0CFCu;
        goto label_3c0cfc;
    }
    ctx->pc = 0x3C0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0CFCu);
        ctx->pc = 0x3C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CF4u;
        // 0x3c0cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0CF4u, 0x3C0CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0CFCu;
label_3c0cfc:
    // 0x3c0cfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c0d00:
    // 0x3c0d00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c0d04:
    // 0x3c0d04: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3c0d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c0d08:
    // 0x3c0d08: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3c0d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3c0d0c:
    // 0x3c0d0c: 0xc0f809  jalr        $a2
label_3c0d10:
    if (ctx->pc == 0x3C0D10u) {
        ctx->pc = 0x3C0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D0Cu;
        // 0x3c0d10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D14u;
        goto label_3c0d14;
    }
    ctx->pc = 0x3C0D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3C0D14u);
        ctx->pc = 0x3C0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D0Cu;
        // 0x3c0d10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0D0Cu, 0x3C0D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0D14u;
label_3c0d14:
    // 0x3c0d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c0d18:
    // 0x3c0d18: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3c0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3c0d1c:
    // 0x3c0d1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c0d20:
    // 0x3c0d20: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c0d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c0d24:
    // 0x3c0d24: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c0d28:
    // 0x3c0d28: 0x40f809  jalr        $v0
label_3c0d2c:
    if (ctx->pc == 0x3C0D2Cu) {
        ctx->pc = 0x3C0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D28u;
        // 0x3c0d2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D30u;
        goto label_3c0d30;
    }
    ctx->pc = 0x3C0D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0D30u);
        ctx->pc = 0x3C0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D28u;
        // 0x3c0d2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0D28u, 0x3C0D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0D30u;
label_3c0d30:
    // 0x3c0d30: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x3c0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_3c0d34:
    // 0x3c0d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c0d38:
    // 0x3c0d38: 0x1000000a  b           . + 4 + (0xA << 2)
label_3c0d3c:
    if (ctx->pc == 0x3C0D3Cu) {
        ctx->pc = 0x3C0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D38u;
        // 0x3c0d3c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D40u;
        goto label_3c0d40;
    }
    ctx->pc = 0x3C0D38u;
    {
        const bool branch_taken_0x3c0d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D38u;
        // 0x3c0d3c: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d38) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0D40u;
label_3c0d40:
    // 0x3c0d40: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x3c0d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3c0d44:
    // 0x3c0d44: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3c0d48:
    if (ctx->pc == 0x3C0D48u) {
        ctx->pc = 0x3C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D44u;
        // 0x3c0d48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D4Cu;
        goto label_3c0d4c;
    }
    ctx->pc = 0x3C0D44u;
    {
        const bool branch_taken_0x3c0d44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D44u;
        // 0x3c0d48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d44) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0D4Cu;
label_3c0d4c:
    // 0x3c0d4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c0d50:
    // 0x3c0d50: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3c0d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c0d54:
    // 0x3c0d54: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c0d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c0d58:
    // 0x3c0d58: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c0d5c:
    // 0x3c0d5c: 0x60f809  jalr        $v1
label_3c0d60:
    if (ctx->pc == 0x3C0D60u) {
        ctx->pc = 0x3C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D5Cu;
        // 0x3c0d60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D64u;
        goto label_3c0d64;
    }
    ctx->pc = 0x3C0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C0D64u);
        ctx->pc = 0x3C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D5Cu;
        // 0x3c0d60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0D5Cu, 0x3C0D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0D64u;
label_3c0d64:
    // 0x3c0d64: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3c0d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3c0d68:
    // 0x3c0d68: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3c0d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c0d6c:
    // 0x3c0d6c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3c0d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c0d70:
    // 0x3c0d70: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3c0d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c0d74:
    // 0x3c0d74: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3c0d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c0d78:
    // 0x3c0d78: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3c0d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c0d7c:
    // 0x3c0d7c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3c0d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c0d80:
    // 0x3c0d80: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c0d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3c0d84:
    // 0x3c0d84: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3c0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c0d88:
    // 0x3c0d88: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3c0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c0d8c:
    // 0x3c0d8c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3c0d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c0d90:
    // 0x3c0d90: 0x3e00008  jr          $ra
label_3c0d94:
    if (ctx->pc == 0x3C0D94u) {
        ctx->pc = 0x3C0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D90u;
        // 0x3c0d94: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0D98u;
        goto label_fallthrough_0x3c0d90;
    }
    ctx->pc = 0x3C0D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D90u;
        // 0x3c0d94: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c0d90:
    ctx->pc = 0x3C0D98u;
}
