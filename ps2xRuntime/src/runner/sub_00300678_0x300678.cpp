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

// Function: sub_00300678
// Address: 0x300678 - 0x301248
void sub_00300678_0x300678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300678_0x300678");
#endif

    switch (ctx->pc) {
        case 0x300678u: goto label_300678;
        case 0x30067cu: goto label_30067c;
        case 0x300680u: goto label_300680;
        case 0x300684u: goto label_300684;
        case 0x300688u: goto label_300688;
        case 0x30068cu: goto label_30068c;
        case 0x300690u: goto label_300690;
        case 0x300694u: goto label_300694;
        case 0x300698u: goto label_300698;
        case 0x30069cu: goto label_30069c;
        case 0x3006a0u: goto label_3006a0;
        case 0x3006a4u: goto label_3006a4;
        case 0x3006a8u: goto label_3006a8;
        case 0x3006acu: goto label_3006ac;
        case 0x3006b0u: goto label_3006b0;
        case 0x3006b4u: goto label_3006b4;
        case 0x3006b8u: goto label_3006b8;
        case 0x3006bcu: goto label_3006bc;
        case 0x3006c0u: goto label_3006c0;
        case 0x3006c4u: goto label_3006c4;
        case 0x3006c8u: goto label_3006c8;
        case 0x3006ccu: goto label_3006cc;
        case 0x3006d0u: goto label_3006d0;
        case 0x3006d4u: goto label_3006d4;
        case 0x3006d8u: goto label_3006d8;
        case 0x3006dcu: goto label_3006dc;
        case 0x3006e0u: goto label_3006e0;
        case 0x3006e4u: goto label_3006e4;
        case 0x3006e8u: goto label_3006e8;
        case 0x3006ecu: goto label_3006ec;
        case 0x3006f0u: goto label_3006f0;
        case 0x3006f4u: goto label_3006f4;
        case 0x3006f8u: goto label_3006f8;
        case 0x3006fcu: goto label_3006fc;
        case 0x300700u: goto label_300700;
        case 0x300704u: goto label_300704;
        case 0x300708u: goto label_300708;
        case 0x30070cu: goto label_30070c;
        case 0x300710u: goto label_300710;
        case 0x300714u: goto label_300714;
        case 0x300718u: goto label_300718;
        case 0x30071cu: goto label_30071c;
        case 0x300720u: goto label_300720;
        case 0x300724u: goto label_300724;
        case 0x300728u: goto label_300728;
        case 0x30072cu: goto label_30072c;
        case 0x300730u: goto label_300730;
        case 0x300734u: goto label_300734;
        case 0x300738u: goto label_300738;
        case 0x30073cu: goto label_30073c;
        case 0x300740u: goto label_300740;
        case 0x300744u: goto label_300744;
        case 0x300748u: goto label_300748;
        case 0x30074cu: goto label_30074c;
        case 0x300750u: goto label_300750;
        case 0x300754u: goto label_300754;
        case 0x300758u: goto label_300758;
        case 0x30075cu: goto label_30075c;
        case 0x300760u: goto label_300760;
        case 0x300764u: goto label_300764;
        case 0x300768u: goto label_300768;
        case 0x30076cu: goto label_30076c;
        case 0x300770u: goto label_300770;
        case 0x300774u: goto label_300774;
        case 0x300778u: goto label_300778;
        case 0x30077cu: goto label_30077c;
        case 0x300780u: goto label_300780;
        case 0x300784u: goto label_300784;
        case 0x300788u: goto label_300788;
        case 0x30078cu: goto label_30078c;
        case 0x300790u: goto label_300790;
        case 0x300794u: goto label_300794;
        case 0x300798u: goto label_300798;
        case 0x30079cu: goto label_30079c;
        case 0x3007a0u: goto label_3007a0;
        case 0x3007a4u: goto label_3007a4;
        case 0x3007a8u: goto label_3007a8;
        case 0x3007acu: goto label_3007ac;
        case 0x3007b0u: goto label_3007b0;
        case 0x3007b4u: goto label_3007b4;
        case 0x3007b8u: goto label_3007b8;
        case 0x3007bcu: goto label_3007bc;
        case 0x3007c0u: goto label_3007c0;
        case 0x3007c4u: goto label_3007c4;
        case 0x3007c8u: goto label_3007c8;
        case 0x3007ccu: goto label_3007cc;
        case 0x3007d0u: goto label_3007d0;
        case 0x3007d4u: goto label_3007d4;
        case 0x3007d8u: goto label_3007d8;
        case 0x3007dcu: goto label_3007dc;
        case 0x3007e0u: goto label_3007e0;
        case 0x3007e4u: goto label_3007e4;
        case 0x3007e8u: goto label_3007e8;
        case 0x3007ecu: goto label_3007ec;
        case 0x3007f0u: goto label_3007f0;
        case 0x3007f4u: goto label_3007f4;
        case 0x3007f8u: goto label_3007f8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300800u: goto label_300800;
        case 0x300804u: goto label_300804;
        case 0x300808u: goto label_300808;
        case 0x30080cu: goto label_30080c;
        case 0x300810u: goto label_300810;
        case 0x300814u: goto label_300814;
        case 0x300818u: goto label_300818;
        case 0x30081cu: goto label_30081c;
        case 0x300820u: goto label_300820;
        case 0x300824u: goto label_300824;
        case 0x300828u: goto label_300828;
        case 0x30082cu: goto label_30082c;
        case 0x300830u: goto label_300830;
        case 0x300834u: goto label_300834;
        case 0x300838u: goto label_300838;
        case 0x30083cu: goto label_30083c;
        case 0x300840u: goto label_300840;
        case 0x300844u: goto label_300844;
        case 0x300848u: goto label_300848;
        case 0x30084cu: goto label_30084c;
        case 0x300850u: goto label_300850;
        case 0x300854u: goto label_300854;
        case 0x300858u: goto label_300858;
        case 0x30085cu: goto label_30085c;
        case 0x300860u: goto label_300860;
        case 0x300864u: goto label_300864;
        case 0x300868u: goto label_300868;
        case 0x30086cu: goto label_30086c;
        case 0x300870u: goto label_300870;
        case 0x300874u: goto label_300874;
        case 0x300878u: goto label_300878;
        case 0x30087cu: goto label_30087c;
        case 0x300880u: goto label_300880;
        case 0x300884u: goto label_300884;
        case 0x300888u: goto label_300888;
        case 0x30088cu: goto label_30088c;
        case 0x300890u: goto label_300890;
        case 0x300894u: goto label_300894;
        case 0x300898u: goto label_300898;
        case 0x30089cu: goto label_30089c;
        case 0x3008a0u: goto label_3008a0;
        case 0x3008a4u: goto label_3008a4;
        case 0x3008a8u: goto label_3008a8;
        case 0x3008acu: goto label_3008ac;
        case 0x3008b0u: goto label_3008b0;
        case 0x3008b4u: goto label_3008b4;
        case 0x3008b8u: goto label_3008b8;
        case 0x3008bcu: goto label_3008bc;
        case 0x3008c0u: goto label_3008c0;
        case 0x3008c4u: goto label_3008c4;
        case 0x3008c8u: goto label_3008c8;
        case 0x3008ccu: goto label_3008cc;
        case 0x3008d0u: goto label_3008d0;
        case 0x3008d4u: goto label_3008d4;
        case 0x3008d8u: goto label_3008d8;
        case 0x3008dcu: goto label_3008dc;
        case 0x3008e0u: goto label_3008e0;
        case 0x3008e4u: goto label_3008e4;
        case 0x3008e8u: goto label_3008e8;
        case 0x3008ecu: goto label_3008ec;
        case 0x3008f0u: goto label_3008f0;
        case 0x3008f4u: goto label_3008f4;
        case 0x3008f8u: goto label_3008f8;
        case 0x3008fcu: goto label_3008fc;
        case 0x300900u: goto label_300900;
        case 0x300904u: goto label_300904;
        case 0x300908u: goto label_300908;
        case 0x30090cu: goto label_30090c;
        case 0x300910u: goto label_300910;
        case 0x300914u: goto label_300914;
        case 0x300918u: goto label_300918;
        case 0x30091cu: goto label_30091c;
        case 0x300920u: goto label_300920;
        case 0x300924u: goto label_300924;
        case 0x300928u: goto label_300928;
        case 0x30092cu: goto label_30092c;
        case 0x300930u: goto label_300930;
        case 0x300934u: goto label_300934;
        case 0x300938u: goto label_300938;
        case 0x30093cu: goto label_30093c;
        case 0x300940u: goto label_300940;
        case 0x300944u: goto label_300944;
        case 0x300948u: goto label_300948;
        case 0x30094cu: goto label_30094c;
        case 0x300950u: goto label_300950;
        case 0x300954u: goto label_300954;
        case 0x300958u: goto label_300958;
        case 0x30095cu: goto label_30095c;
        case 0x300960u: goto label_300960;
        case 0x300964u: goto label_300964;
        case 0x300968u: goto label_300968;
        case 0x30096cu: goto label_30096c;
        case 0x300970u: goto label_300970;
        case 0x300974u: goto label_300974;
        case 0x300978u: goto label_300978;
        case 0x30097cu: goto label_30097c;
        case 0x300980u: goto label_300980;
        case 0x300984u: goto label_300984;
        case 0x300988u: goto label_300988;
        case 0x30098cu: goto label_30098c;
        case 0x300990u: goto label_300990;
        case 0x300994u: goto label_300994;
        case 0x300998u: goto label_300998;
        case 0x30099cu: goto label_30099c;
        case 0x3009a0u: goto label_3009a0;
        case 0x3009a4u: goto label_3009a4;
        case 0x3009a8u: goto label_3009a8;
        case 0x3009acu: goto label_3009ac;
        case 0x3009b0u: goto label_3009b0;
        case 0x3009b4u: goto label_3009b4;
        case 0x3009b8u: goto label_3009b8;
        case 0x3009bcu: goto label_3009bc;
        case 0x3009c0u: goto label_3009c0;
        case 0x3009c4u: goto label_3009c4;
        case 0x3009c8u: goto label_3009c8;
        case 0x3009ccu: goto label_3009cc;
        case 0x3009d0u: goto label_3009d0;
        case 0x3009d4u: goto label_3009d4;
        case 0x3009d8u: goto label_3009d8;
        case 0x3009dcu: goto label_3009dc;
        case 0x3009e0u: goto label_3009e0;
        case 0x3009e4u: goto label_3009e4;
        case 0x3009e8u: goto label_3009e8;
        case 0x3009ecu: goto label_3009ec;
        case 0x3009f0u: goto label_3009f0;
        case 0x3009f4u: goto label_3009f4;
        case 0x3009f8u: goto label_3009f8;
        case 0x3009fcu: goto label_3009fc;
        case 0x300a00u: goto label_300a00;
        case 0x300a04u: goto label_300a04;
        case 0x300a08u: goto label_300a08;
        case 0x300a0cu: goto label_300a0c;
        case 0x300a10u: goto label_300a10;
        case 0x300a14u: goto label_300a14;
        case 0x300a18u: goto label_300a18;
        case 0x300a1cu: goto label_300a1c;
        case 0x300a20u: goto label_300a20;
        case 0x300a24u: goto label_300a24;
        case 0x300a28u: goto label_300a28;
        case 0x300a2cu: goto label_300a2c;
        case 0x300a30u: goto label_300a30;
        case 0x300a34u: goto label_300a34;
        case 0x300a38u: goto label_300a38;
        case 0x300a3cu: goto label_300a3c;
        case 0x300a40u: goto label_300a40;
        case 0x300a44u: goto label_300a44;
        case 0x300a48u: goto label_300a48;
        case 0x300a4cu: goto label_300a4c;
        case 0x300a50u: goto label_300a50;
        case 0x300a54u: goto label_300a54;
        case 0x300a58u: goto label_300a58;
        case 0x300a5cu: goto label_300a5c;
        case 0x300a60u: goto label_300a60;
        case 0x300a64u: goto label_300a64;
        case 0x300a68u: goto label_300a68;
        case 0x300a6cu: goto label_300a6c;
        case 0x300a70u: goto label_300a70;
        case 0x300a74u: goto label_300a74;
        case 0x300a78u: goto label_300a78;
        case 0x300a7cu: goto label_300a7c;
        case 0x300a80u: goto label_300a80;
        case 0x300a84u: goto label_300a84;
        case 0x300a88u: goto label_300a88;
        case 0x300a8cu: goto label_300a8c;
        case 0x300a90u: goto label_300a90;
        case 0x300a94u: goto label_300a94;
        case 0x300a98u: goto label_300a98;
        case 0x300a9cu: goto label_300a9c;
        case 0x300aa0u: goto label_300aa0;
        case 0x300aa4u: goto label_300aa4;
        case 0x300aa8u: goto label_300aa8;
        case 0x300aacu: goto label_300aac;
        case 0x300ab0u: goto label_300ab0;
        case 0x300ab4u: goto label_300ab4;
        case 0x300ab8u: goto label_300ab8;
        case 0x300abcu: goto label_300abc;
        case 0x300ac0u: goto label_300ac0;
        case 0x300ac4u: goto label_300ac4;
        case 0x300ac8u: goto label_300ac8;
        case 0x300accu: goto label_300acc;
        case 0x300ad0u: goto label_300ad0;
        case 0x300ad4u: goto label_300ad4;
        case 0x300ad8u: goto label_300ad8;
        case 0x300adcu: goto label_300adc;
        case 0x300ae0u: goto label_300ae0;
        case 0x300ae4u: goto label_300ae4;
        case 0x300ae8u: goto label_300ae8;
        case 0x300aecu: goto label_300aec;
        case 0x300af0u: goto label_300af0;
        case 0x300af4u: goto label_300af4;
        case 0x300af8u: goto label_300af8;
        case 0x300afcu: goto label_300afc;
        case 0x300b00u: goto label_300b00;
        case 0x300b04u: goto label_300b04;
        case 0x300b08u: goto label_300b08;
        case 0x300b0cu: goto label_300b0c;
        case 0x300b10u: goto label_300b10;
        case 0x300b14u: goto label_300b14;
        case 0x300b18u: goto label_300b18;
        case 0x300b1cu: goto label_300b1c;
        case 0x300b20u: goto label_300b20;
        case 0x300b24u: goto label_300b24;
        case 0x300b28u: goto label_300b28;
        case 0x300b2cu: goto label_300b2c;
        case 0x300b30u: goto label_300b30;
        case 0x300b34u: goto label_300b34;
        case 0x300b38u: goto label_300b38;
        case 0x300b3cu: goto label_300b3c;
        case 0x300b40u: goto label_300b40;
        case 0x300b44u: goto label_300b44;
        case 0x300b48u: goto label_300b48;
        case 0x300b4cu: goto label_300b4c;
        case 0x300b50u: goto label_300b50;
        case 0x300b54u: goto label_300b54;
        case 0x300b58u: goto label_300b58;
        case 0x300b5cu: goto label_300b5c;
        case 0x300b60u: goto label_300b60;
        case 0x300b64u: goto label_300b64;
        case 0x300b68u: goto label_300b68;
        case 0x300b6cu: goto label_300b6c;
        case 0x300b70u: goto label_300b70;
        case 0x300b74u: goto label_300b74;
        case 0x300b78u: goto label_300b78;
        case 0x300b7cu: goto label_300b7c;
        case 0x300b80u: goto label_300b80;
        case 0x300b84u: goto label_300b84;
        case 0x300b88u: goto label_300b88;
        case 0x300b8cu: goto label_300b8c;
        case 0x300b90u: goto label_300b90;
        case 0x300b94u: goto label_300b94;
        case 0x300b98u: goto label_300b98;
        case 0x300b9cu: goto label_300b9c;
        case 0x300ba0u: goto label_300ba0;
        case 0x300ba4u: goto label_300ba4;
        case 0x300ba8u: goto label_300ba8;
        case 0x300bacu: goto label_300bac;
        case 0x300bb0u: goto label_300bb0;
        case 0x300bb4u: goto label_300bb4;
        case 0x300bb8u: goto label_300bb8;
        case 0x300bbcu: goto label_300bbc;
        case 0x300bc0u: goto label_300bc0;
        case 0x300bc4u: goto label_300bc4;
        case 0x300bc8u: goto label_300bc8;
        case 0x300bccu: goto label_300bcc;
        case 0x300bd0u: goto label_300bd0;
        case 0x300bd4u: goto label_300bd4;
        case 0x300bd8u: goto label_300bd8;
        case 0x300bdcu: goto label_300bdc;
        case 0x300be0u: goto label_300be0;
        case 0x300be4u: goto label_300be4;
        case 0x300be8u: goto label_300be8;
        case 0x300becu: goto label_300bec;
        case 0x300bf0u: goto label_300bf0;
        case 0x300bf4u: goto label_300bf4;
        case 0x300bf8u: goto label_300bf8;
        case 0x300bfcu: goto label_300bfc;
        case 0x300c00u: goto label_300c00;
        case 0x300c04u: goto label_300c04;
        case 0x300c08u: goto label_300c08;
        case 0x300c0cu: goto label_300c0c;
        case 0x300c10u: goto label_300c10;
        case 0x300c14u: goto label_300c14;
        case 0x300c18u: goto label_300c18;
        case 0x300c1cu: goto label_300c1c;
        case 0x300c20u: goto label_300c20;
        case 0x300c24u: goto label_300c24;
        case 0x300c28u: goto label_300c28;
        case 0x300c2cu: goto label_300c2c;
        case 0x300c30u: goto label_300c30;
        case 0x300c34u: goto label_300c34;
        case 0x300c38u: goto label_300c38;
        case 0x300c3cu: goto label_300c3c;
        case 0x300c40u: goto label_300c40;
        case 0x300c44u: goto label_300c44;
        case 0x300c48u: goto label_300c48;
        case 0x300c4cu: goto label_300c4c;
        case 0x300c50u: goto label_300c50;
        case 0x300c54u: goto label_300c54;
        case 0x300c58u: goto label_300c58;
        case 0x300c5cu: goto label_300c5c;
        case 0x300c60u: goto label_300c60;
        case 0x300c64u: goto label_300c64;
        case 0x300c68u: goto label_300c68;
        case 0x300c6cu: goto label_300c6c;
        case 0x300c70u: goto label_300c70;
        case 0x300c74u: goto label_300c74;
        case 0x300c78u: goto label_300c78;
        case 0x300c7cu: goto label_300c7c;
        case 0x300c80u: goto label_300c80;
        case 0x300c84u: goto label_300c84;
        case 0x300c88u: goto label_300c88;
        case 0x300c8cu: goto label_300c8c;
        case 0x300c90u: goto label_300c90;
        case 0x300c94u: goto label_300c94;
        case 0x300c98u: goto label_300c98;
        case 0x300c9cu: goto label_300c9c;
        case 0x300ca0u: goto label_300ca0;
        case 0x300ca4u: goto label_300ca4;
        case 0x300ca8u: goto label_300ca8;
        case 0x300cacu: goto label_300cac;
        case 0x300cb0u: goto label_300cb0;
        case 0x300cb4u: goto label_300cb4;
        case 0x300cb8u: goto label_300cb8;
        case 0x300cbcu: goto label_300cbc;
        case 0x300cc0u: goto label_300cc0;
        case 0x300cc4u: goto label_300cc4;
        case 0x300cc8u: goto label_300cc8;
        case 0x300cccu: goto label_300ccc;
        case 0x300cd0u: goto label_300cd0;
        case 0x300cd4u: goto label_300cd4;
        case 0x300cd8u: goto label_300cd8;
        case 0x300cdcu: goto label_300cdc;
        case 0x300ce0u: goto label_300ce0;
        case 0x300ce4u: goto label_300ce4;
        case 0x300ce8u: goto label_300ce8;
        case 0x300cecu: goto label_300cec;
        case 0x300cf0u: goto label_300cf0;
        case 0x300cf4u: goto label_300cf4;
        case 0x300cf8u: goto label_300cf8;
        case 0x300cfcu: goto label_300cfc;
        case 0x300d00u: goto label_300d00;
        case 0x300d04u: goto label_300d04;
        case 0x300d08u: goto label_300d08;
        case 0x300d0cu: goto label_300d0c;
        case 0x300d10u: goto label_300d10;
        case 0x300d14u: goto label_300d14;
        case 0x300d18u: goto label_300d18;
        case 0x300d1cu: goto label_300d1c;
        case 0x300d20u: goto label_300d20;
        case 0x300d24u: goto label_300d24;
        case 0x300d28u: goto label_300d28;
        case 0x300d2cu: goto label_300d2c;
        case 0x300d30u: goto label_300d30;
        case 0x300d34u: goto label_300d34;
        case 0x300d38u: goto label_300d38;
        case 0x300d3cu: goto label_300d3c;
        case 0x300d40u: goto label_300d40;
        case 0x300d44u: goto label_300d44;
        case 0x300d48u: goto label_300d48;
        case 0x300d4cu: goto label_300d4c;
        case 0x300d50u: goto label_300d50;
        case 0x300d54u: goto label_300d54;
        case 0x300d58u: goto label_300d58;
        case 0x300d5cu: goto label_300d5c;
        case 0x300d60u: goto label_300d60;
        case 0x300d64u: goto label_300d64;
        case 0x300d68u: goto label_300d68;
        case 0x300d6cu: goto label_300d6c;
        case 0x300d70u: goto label_300d70;
        case 0x300d74u: goto label_300d74;
        case 0x300d78u: goto label_300d78;
        case 0x300d7cu: goto label_300d7c;
        case 0x300d80u: goto label_300d80;
        case 0x300d84u: goto label_300d84;
        case 0x300d88u: goto label_300d88;
        case 0x300d8cu: goto label_300d8c;
        case 0x300d90u: goto label_300d90;
        case 0x300d94u: goto label_300d94;
        case 0x300d98u: goto label_300d98;
        case 0x300d9cu: goto label_300d9c;
        case 0x300da0u: goto label_300da0;
        case 0x300da4u: goto label_300da4;
        case 0x300da8u: goto label_300da8;
        case 0x300dacu: goto label_300dac;
        case 0x300db0u: goto label_300db0;
        case 0x300db4u: goto label_300db4;
        case 0x300db8u: goto label_300db8;
        case 0x300dbcu: goto label_300dbc;
        case 0x300dc0u: goto label_300dc0;
        case 0x300dc4u: goto label_300dc4;
        case 0x300dc8u: goto label_300dc8;
        case 0x300dccu: goto label_300dcc;
        case 0x300dd0u: goto label_300dd0;
        case 0x300dd4u: goto label_300dd4;
        case 0x300dd8u: goto label_300dd8;
        case 0x300ddcu: goto label_300ddc;
        case 0x300de0u: goto label_300de0;
        case 0x300de4u: goto label_300de4;
        case 0x300de8u: goto label_300de8;
        case 0x300decu: goto label_300dec;
        case 0x300df0u: goto label_300df0;
        case 0x300df4u: goto label_300df4;
        case 0x300df8u: goto label_300df8;
        case 0x300dfcu: goto label_300dfc;
        case 0x300e00u: goto label_300e00;
        case 0x300e04u: goto label_300e04;
        case 0x300e08u: goto label_300e08;
        case 0x300e0cu: goto label_300e0c;
        case 0x300e10u: goto label_300e10;
        case 0x300e14u: goto label_300e14;
        case 0x300e18u: goto label_300e18;
        case 0x300e1cu: goto label_300e1c;
        case 0x300e20u: goto label_300e20;
        case 0x300e24u: goto label_300e24;
        case 0x300e28u: goto label_300e28;
        case 0x300e2cu: goto label_300e2c;
        case 0x300e30u: goto label_300e30;
        case 0x300e34u: goto label_300e34;
        case 0x300e38u: goto label_300e38;
        case 0x300e3cu: goto label_300e3c;
        case 0x300e40u: goto label_300e40;
        case 0x300e44u: goto label_300e44;
        case 0x300e48u: goto label_300e48;
        case 0x300e4cu: goto label_300e4c;
        case 0x300e50u: goto label_300e50;
        case 0x300e54u: goto label_300e54;
        case 0x300e58u: goto label_300e58;
        case 0x300e5cu: goto label_300e5c;
        case 0x300e60u: goto label_300e60;
        case 0x300e64u: goto label_300e64;
        case 0x300e68u: goto label_300e68;
        case 0x300e6cu: goto label_300e6c;
        case 0x300e70u: goto label_300e70;
        case 0x300e74u: goto label_300e74;
        case 0x300e78u: goto label_300e78;
        case 0x300e7cu: goto label_300e7c;
        case 0x300e80u: goto label_300e80;
        case 0x300e84u: goto label_300e84;
        case 0x300e88u: goto label_300e88;
        case 0x300e8cu: goto label_300e8c;
        case 0x300e90u: goto label_300e90;
        case 0x300e94u: goto label_300e94;
        case 0x300e98u: goto label_300e98;
        case 0x300e9cu: goto label_300e9c;
        case 0x300ea0u: goto label_300ea0;
        case 0x300ea4u: goto label_300ea4;
        case 0x300ea8u: goto label_300ea8;
        case 0x300eacu: goto label_300eac;
        case 0x300eb0u: goto label_300eb0;
        case 0x300eb4u: goto label_300eb4;
        case 0x300eb8u: goto label_300eb8;
        case 0x300ebcu: goto label_300ebc;
        case 0x300ec0u: goto label_300ec0;
        case 0x300ec4u: goto label_300ec4;
        case 0x300ec8u: goto label_300ec8;
        case 0x300eccu: goto label_300ecc;
        case 0x300ed0u: goto label_300ed0;
        case 0x300ed4u: goto label_300ed4;
        case 0x300ed8u: goto label_300ed8;
        case 0x300edcu: goto label_300edc;
        case 0x300ee0u: goto label_300ee0;
        case 0x300ee4u: goto label_300ee4;
        case 0x300ee8u: goto label_300ee8;
        case 0x300eecu: goto label_300eec;
        case 0x300ef0u: goto label_300ef0;
        case 0x300ef4u: goto label_300ef4;
        case 0x300ef8u: goto label_300ef8;
        case 0x300efcu: goto label_300efc;
        case 0x300f00u: goto label_300f00;
        case 0x300f04u: goto label_300f04;
        case 0x300f08u: goto label_300f08;
        case 0x300f0cu: goto label_300f0c;
        case 0x300f10u: goto label_300f10;
        case 0x300f14u: goto label_300f14;
        case 0x300f18u: goto label_300f18;
        case 0x300f1cu: goto label_300f1c;
        case 0x300f20u: goto label_300f20;
        case 0x300f24u: goto label_300f24;
        case 0x300f28u: goto label_300f28;
        case 0x300f2cu: goto label_300f2c;
        case 0x300f30u: goto label_300f30;
        case 0x300f34u: goto label_300f34;
        case 0x300f38u: goto label_300f38;
        case 0x300f3cu: goto label_300f3c;
        case 0x300f40u: goto label_300f40;
        case 0x300f44u: goto label_300f44;
        case 0x300f48u: goto label_300f48;
        case 0x300f4cu: goto label_300f4c;
        case 0x300f50u: goto label_300f50;
        case 0x300f54u: goto label_300f54;
        case 0x300f58u: goto label_300f58;
        case 0x300f5cu: goto label_300f5c;
        case 0x300f60u: goto label_300f60;
        case 0x300f64u: goto label_300f64;
        case 0x300f68u: goto label_300f68;
        case 0x300f6cu: goto label_300f6c;
        case 0x300f70u: goto label_300f70;
        case 0x300f74u: goto label_300f74;
        case 0x300f78u: goto label_300f78;
        case 0x300f7cu: goto label_300f7c;
        case 0x300f80u: goto label_300f80;
        case 0x300f84u: goto label_300f84;
        case 0x300f88u: goto label_300f88;
        case 0x300f8cu: goto label_300f8c;
        case 0x300f90u: goto label_300f90;
        case 0x300f94u: goto label_300f94;
        case 0x300f98u: goto label_300f98;
        case 0x300f9cu: goto label_300f9c;
        case 0x300fa0u: goto label_300fa0;
        case 0x300fa4u: goto label_300fa4;
        case 0x300fa8u: goto label_300fa8;
        case 0x300facu: goto label_300fac;
        case 0x300fb0u: goto label_300fb0;
        case 0x300fb4u: goto label_300fb4;
        case 0x300fb8u: goto label_300fb8;
        case 0x300fbcu: goto label_300fbc;
        case 0x300fc0u: goto label_300fc0;
        case 0x300fc4u: goto label_300fc4;
        case 0x300fc8u: goto label_300fc8;
        case 0x300fccu: goto label_300fcc;
        case 0x300fd0u: goto label_300fd0;
        case 0x300fd4u: goto label_300fd4;
        case 0x300fd8u: goto label_300fd8;
        case 0x300fdcu: goto label_300fdc;
        case 0x300fe0u: goto label_300fe0;
        case 0x300fe4u: goto label_300fe4;
        case 0x300fe8u: goto label_300fe8;
        case 0x300fecu: goto label_300fec;
        case 0x300ff0u: goto label_300ff0;
        case 0x300ff4u: goto label_300ff4;
        case 0x300ff8u: goto label_300ff8;
        case 0x300ffcu: goto label_300ffc;
        case 0x301000u: goto label_301000;
        case 0x301004u: goto label_301004;
        case 0x301008u: goto label_301008;
        case 0x30100cu: goto label_30100c;
        case 0x301010u: goto label_301010;
        case 0x301014u: goto label_301014;
        case 0x301018u: goto label_301018;
        case 0x30101cu: goto label_30101c;
        case 0x301020u: goto label_301020;
        case 0x301024u: goto label_301024;
        case 0x301028u: goto label_301028;
        case 0x30102cu: goto label_30102c;
        case 0x301030u: goto label_301030;
        case 0x301034u: goto label_301034;
        case 0x301038u: goto label_301038;
        case 0x30103cu: goto label_30103c;
        case 0x301040u: goto label_301040;
        case 0x301044u: goto label_301044;
        case 0x301048u: goto label_301048;
        case 0x30104cu: goto label_30104c;
        case 0x301050u: goto label_301050;
        case 0x301054u: goto label_301054;
        case 0x301058u: goto label_301058;
        case 0x30105cu: goto label_30105c;
        case 0x301060u: goto label_301060;
        case 0x301064u: goto label_301064;
        case 0x301068u: goto label_301068;
        case 0x30106cu: goto label_30106c;
        case 0x301070u: goto label_301070;
        case 0x301074u: goto label_301074;
        case 0x301078u: goto label_301078;
        case 0x30107cu: goto label_30107c;
        case 0x301080u: goto label_301080;
        case 0x301084u: goto label_301084;
        case 0x301088u: goto label_301088;
        case 0x30108cu: goto label_30108c;
        case 0x301090u: goto label_301090;
        case 0x301094u: goto label_301094;
        case 0x301098u: goto label_301098;
        case 0x30109cu: goto label_30109c;
        case 0x3010a0u: goto label_3010a0;
        case 0x3010a4u: goto label_3010a4;
        case 0x3010a8u: goto label_3010a8;
        case 0x3010acu: goto label_3010ac;
        case 0x3010b0u: goto label_3010b0;
        case 0x3010b4u: goto label_3010b4;
        case 0x3010b8u: goto label_3010b8;
        case 0x3010bcu: goto label_3010bc;
        case 0x3010c0u: goto label_3010c0;
        case 0x3010c4u: goto label_3010c4;
        case 0x3010c8u: goto label_3010c8;
        case 0x3010ccu: goto label_3010cc;
        case 0x3010d0u: goto label_3010d0;
        case 0x3010d4u: goto label_3010d4;
        case 0x3010d8u: goto label_3010d8;
        case 0x3010dcu: goto label_3010dc;
        case 0x3010e0u: goto label_3010e0;
        case 0x3010e4u: goto label_3010e4;
        case 0x3010e8u: goto label_3010e8;
        case 0x3010ecu: goto label_3010ec;
        case 0x3010f0u: goto label_3010f0;
        case 0x3010f4u: goto label_3010f4;
        case 0x3010f8u: goto label_3010f8;
        case 0x3010fcu: goto label_3010fc;
        case 0x301100u: goto label_301100;
        case 0x301104u: goto label_301104;
        case 0x301108u: goto label_301108;
        case 0x30110cu: goto label_30110c;
        case 0x301110u: goto label_301110;
        case 0x301114u: goto label_301114;
        case 0x301118u: goto label_301118;
        case 0x30111cu: goto label_30111c;
        case 0x301120u: goto label_301120;
        case 0x301124u: goto label_301124;
        case 0x301128u: goto label_301128;
        case 0x30112cu: goto label_30112c;
        case 0x301130u: goto label_301130;
        case 0x301134u: goto label_301134;
        case 0x301138u: goto label_301138;
        case 0x30113cu: goto label_30113c;
        case 0x301140u: goto label_301140;
        case 0x301144u: goto label_301144;
        case 0x301148u: goto label_301148;
        case 0x30114cu: goto label_30114c;
        case 0x301150u: goto label_301150;
        case 0x301154u: goto label_301154;
        case 0x301158u: goto label_301158;
        case 0x30115cu: goto label_30115c;
        case 0x301160u: goto label_301160;
        case 0x301164u: goto label_301164;
        case 0x301168u: goto label_301168;
        case 0x30116cu: goto label_30116c;
        case 0x301170u: goto label_301170;
        case 0x301174u: goto label_301174;
        case 0x301178u: goto label_301178;
        case 0x30117cu: goto label_30117c;
        case 0x301180u: goto label_301180;
        case 0x301184u: goto label_301184;
        case 0x301188u: goto label_301188;
        case 0x30118cu: goto label_30118c;
        case 0x301190u: goto label_301190;
        case 0x301194u: goto label_301194;
        case 0x301198u: goto label_301198;
        case 0x30119cu: goto label_30119c;
        case 0x3011a0u: goto label_3011a0;
        case 0x3011a4u: goto label_3011a4;
        case 0x3011a8u: goto label_3011a8;
        case 0x3011acu: goto label_3011ac;
        case 0x3011b0u: goto label_3011b0;
        case 0x3011b4u: goto label_3011b4;
        case 0x3011b8u: goto label_3011b8;
        case 0x3011bcu: goto label_3011bc;
        case 0x3011c0u: goto label_3011c0;
        case 0x3011c4u: goto label_3011c4;
        case 0x3011c8u: goto label_3011c8;
        case 0x3011ccu: goto label_3011cc;
        case 0x3011d0u: goto label_3011d0;
        case 0x3011d4u: goto label_3011d4;
        case 0x3011d8u: goto label_3011d8;
        case 0x3011dcu: goto label_3011dc;
        case 0x3011e0u: goto label_3011e0;
        case 0x3011e4u: goto label_3011e4;
        case 0x3011e8u: goto label_3011e8;
        case 0x3011ecu: goto label_3011ec;
        case 0x3011f0u: goto label_3011f0;
        case 0x3011f4u: goto label_3011f4;
        case 0x3011f8u: goto label_3011f8;
        case 0x3011fcu: goto label_3011fc;
        case 0x301200u: goto label_301200;
        case 0x301204u: goto label_301204;
        case 0x301208u: goto label_301208;
        case 0x30120cu: goto label_30120c;
        case 0x301210u: goto label_301210;
        case 0x301214u: goto label_301214;
        case 0x301218u: goto label_301218;
        case 0x30121cu: goto label_30121c;
        case 0x301220u: goto label_301220;
        case 0x301224u: goto label_301224;
        case 0x301228u: goto label_301228;
        case 0x30122cu: goto label_30122c;
        case 0x301230u: goto label_301230;
        case 0x301234u: goto label_301234;
        case 0x301238u: goto label_301238;
        case 0x30123cu: goto label_30123c;
        case 0x301240u: goto label_301240;
        case 0x301244u: goto label_301244;
        default: break;
    }

    ctx->pc = 0x300678u;

label_300678:
    // 0x300678: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x300678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_30067c:
    // 0x30067c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x30067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_300680:
    // 0x300680: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x300680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_300684:
    // 0x300684: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x300684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_300688:
    // 0x300688: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x300688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_30068c:
    // 0x30068c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x30068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_300690:
    // 0x300690: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x300690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_300694:
    // 0x300694: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x300694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_300698:
    // 0x300698: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x300698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_30069c:
    // 0x30069c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x30069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3006a0:
    // 0x3006a0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3006a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3006a4:
    // 0x3006a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3006a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3006a8:
    // 0x3006a8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3006a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3006ac:
    // 0x3006ac: 0xc0a3eba  jal         func_28FAE8
label_3006b0:
    if (ctx->pc == 0x3006B0u) {
        ctx->pc = 0x3006B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006ACu;
        // 0x3006b0: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006B4u;
        goto label_3006b4;
    }
    ctx->pc = 0x3006ACu;
    SET_GPR_U32(ctx, 31, 0x3006B4u);
    ctx->pc = 0x3006B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3006ACu;
    // 0x3006b0: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x3006ACu, 0x3006B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3006B4u;
label_3006b4:
    // 0x3006b4: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x3006b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_3006b8:
    // 0x3006b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3006bc:
    if (ctx->pc == 0x3006BCu) {
        ctx->pc = 0x3006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B8u;
        // 0x3006bc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006C0u;
        goto label_3006c0;
    }
    ctx->pc = 0x3006B8u;
    {
        const bool branch_taken_0x3006b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B8u;
        // 0x3006bc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006b8) {
            ctx->pc = 0x3006CCu;
            goto label_3006cc;
        }
    }
    ctx->pc = 0x3006C0u;
label_3006c0:
    // 0x3006c0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3006c4:
    // 0x3006c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3006c8:
    if (ctx->pc == 0x3006C8u) {
        ctx->pc = 0x3006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006C4u;
        // 0x3006c8: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006CCu;
        goto label_3006cc;
    }
    ctx->pc = 0x3006C4u;
    {
        const bool branch_taken_0x3006c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006C4u;
        // 0x3006c8: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006c4) {
            ctx->pc = 0x3006D0u;
            goto label_3006d0;
        }
    }
    ctx->pc = 0x3006CCu;
label_3006cc:
    // 0x3006cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3006ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3006d0:
    // 0x3006d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3006d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3006d4:
    // 0x3006d4: 0x26900164  addiu       $s0, $s4, 0x164
    ctx->pc = 0x3006d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
label_3006d8:
    // 0x3006d8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3006d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3006dc:
    // 0x3006dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3006dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3006e0:
    // 0x3006e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3006e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3006e4:
    // 0x3006e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3006e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3006e8:
    // 0x3006e8: 0xc0e409a  jal         func_390268
label_3006ec:
    if (ctx->pc == 0x3006ECu) {
        ctx->pc = 0x3006ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006E8u;
        // 0x3006ec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3006F0u;
        goto label_3006f0;
    }
    ctx->pc = 0x3006E8u;
    SET_GPR_U32(ctx, 31, 0x3006F0u);
    ctx->pc = 0x3006ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3006E8u;
    // 0x3006ec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3006E8u, 0x3006F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3006F0u;
label_3006f0:
    // 0x3006f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3006f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3006f4:
    // 0x3006f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3006f8:
    // 0x3006f8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3006f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3006fc:
    // 0x3006fc: 0xa0f809  jalr        $a1
label_300700:
    if (ctx->pc == 0x300700u) {
        ctx->pc = 0x300700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006FCu;
        // 0x300700: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300704u;
        goto label_300704;
    }
    ctx->pc = 0x3006FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x300704u);
        ctx->pc = 0x300700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006FCu;
        // 0x300700: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3006FCu, 0x300704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300704u;
label_300704:
    // 0x300704: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x300704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_300708:
    // 0x300708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30070c:
    // 0x30070c: 0xc137882  jal         func_4DE208
label_300710:
    if (ctx->pc == 0x300710u) {
        ctx->pc = 0x300710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30070Cu;
        // 0x300710: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300714u;
        goto label_300714;
    }
    ctx->pc = 0x30070Cu;
    SET_GPR_U32(ctx, 31, 0x300714u);
    ctx->pc = 0x300710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30070Cu;
    // 0x300710: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x30070Cu, 0x300714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300714u;
label_300714:
    // 0x300714: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x300714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300718:
    // 0x300718: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_30071c:
    if (ctx->pc == 0x30071Cu) {
        ctx->pc = 0x30071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300718u;
        // 0x30071c: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300720u;
        goto label_300720;
    }
    ctx->pc = 0x300718u;
    {
        const bool branch_taken_0x300718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300718u;
        // 0x30071c: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300718) {
            ctx->pc = 0x300728u;
            goto label_300728;
        }
    }
    ctx->pc = 0x300720u;
label_300720:
    // 0x300720: 0x10000013  b           . + 4 + (0x13 << 2)
label_300724:
    if (ctx->pc == 0x300724u) {
        ctx->pc = 0x300724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300720u;
        // 0x300724: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300728u;
        goto label_300728;
    }
    ctx->pc = 0x300720u;
    {
        const bool branch_taken_0x300720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300720u;
        // 0x300724: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300720) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x300728u;
label_300728:
    // 0x300728: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x300728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_30072c:
    // 0x30072c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x30072cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_300730:
    // 0x300730: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x300730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_300734:
    // 0x300734: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_300738:
    if (ctx->pc == 0x300738u) {
        ctx->pc = 0x30073Cu;
        goto label_30073c;
    }
    ctx->pc = 0x300734u;
    {
        const bool branch_taken_0x300734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300734) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x30073Cu;
label_30073c:
    // 0x30073c: 0xc0e409a  jal         func_390268
label_300740:
    if (ctx->pc == 0x300740u) {
        ctx->pc = 0x300740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30073Cu;
        // 0x300740: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300744u;
        goto label_300744;
    }
    ctx->pc = 0x30073Cu;
    SET_GPR_U32(ctx, 31, 0x300744u);
    ctx->pc = 0x300740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30073Cu;
    // 0x300740: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30073Cu, 0x300744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300744u;
label_300744:
    // 0x300744: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x300744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_300748:
    // 0x300748: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30074c:
    // 0x30074c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x30074cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300750:
    // 0x300750: 0xa0f809  jalr        $a1
label_300754:
    if (ctx->pc == 0x300754u) {
        ctx->pc = 0x300754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300750u;
        // 0x300754: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300758u;
        goto label_300758;
    }
    ctx->pc = 0x300750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x300758u);
        ctx->pc = 0x300754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300750u;
        // 0x300754: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300750u, 0x300758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300758u;
label_300758:
    // 0x300758: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x300758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_30075c:
    // 0x30075c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300760:
    // 0x300760: 0xc137882  jal         func_4DE208
label_300764:
    if (ctx->pc == 0x300764u) {
        ctx->pc = 0x300764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300760u;
        // 0x300764: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300768u;
        goto label_300768;
    }
    ctx->pc = 0x300760u;
    SET_GPR_U32(ctx, 31, 0x300768u);
    ctx->pc = 0x300764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300760u;
    // 0x300764: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x300760u, 0x300768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300768u;
label_300768:
    // 0x300768: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x300768u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_30076c:
    // 0x30076c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x30076cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_300770:
    // 0x300770: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_300774:
    if (ctx->pc == 0x300774u) {
        ctx->pc = 0x300774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300770u;
        // 0x300774: 0x128840  sll         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300778u;
        goto label_300778;
    }
    ctx->pc = 0x300770u;
    {
        const bool branch_taken_0x300770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x300770) {
            ctx->pc = 0x300774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300770u;
            // 0x300774: 0x128840  sll         $s1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30079Cu;
            goto label_30079c;
        }
    }
    ctx->pc = 0x300778u;
label_300778:
    // 0x300778: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x300778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_30077c:
    // 0x30077c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30077cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_300780:
    // 0x300780: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_300784:
    // 0x300784: 0x40f809  jalr        $v0
label_300788:
    if (ctx->pc == 0x300788u) {
        ctx->pc = 0x300788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300784u;
        // 0x300788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30078Cu;
        goto label_30078c;
    }
    ctx->pc = 0x300784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30078Cu);
        ctx->pc = 0x300788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300784u;
        // 0x300788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300784u, 0x30078Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30078Cu;
label_30078c:
    // 0x30078c: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x30078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_300790:
    // 0x300790: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_300794:
    if (ctx->pc == 0x300794u) {
        ctx->pc = 0x300794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300790u;
        // 0x300794: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300798u;
        goto label_300798;
    }
    ctx->pc = 0x300790u;
    {
        const bool branch_taken_0x300790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x300794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300790u;
        // 0x300794: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300790) {
            ctx->pc = 0x30079Cu;
            goto label_30079c;
        }
    }
    ctx->pc = 0x300798u;
label_300798:
    // 0x300798: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x300798u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30079c:
    // 0x30079c: 0xa291028c  sb          $s1, 0x28C($s4)
    ctx->pc = 0x30079cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 652), (uint8_t)GPR_U32(ctx, 17));
label_3007a0:
    // 0x3007a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3007a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3007a4:
    // 0x3007a4: 0x90a2019e  lbu         $v0, 0x19E($a1)
    ctx->pc = 0x3007a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 414)));
label_3007a8:
    // 0x3007a8: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
label_3007ac:
    if (ctx->pc == 0x3007ACu) {
        ctx->pc = 0x3007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007A8u;
        // 0x3007ac: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007B0u;
        goto label_3007b0;
    }
    ctx->pc = 0x3007A8u;
    {
        const bool branch_taken_0x3007a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007A8u;
        // 0x3007ac: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007a8) {
            ctx->pc = 0x3007D8u;
            goto label_3007d8;
        }
    }
    ctx->pc = 0x3007B0u;
label_3007b0:
    // 0x3007b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3007b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3007b4:
    // 0x3007b4: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x3007b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_3007b8:
    // 0x3007b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3007b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3007bc:
    // 0x3007bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3007bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3007c0:
    // 0x3007c0: 0x40f809  jalr        $v0
label_3007c4:
    if (ctx->pc == 0x3007C4u) {
        ctx->pc = 0x3007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007C0u;
        // 0x3007c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007C8u;
        goto label_3007c8;
    }
    ctx->pc = 0x3007C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3007C8u);
        ctx->pc = 0x3007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007C0u;
        // 0x3007c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3007C0u, 0x3007C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3007C8u;
label_3007c8:
    // 0x3007c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3007c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3007cc:
    // 0x3007cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3007ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3007d0:
    // 0x3007d0: 0xc06ccb8  jal         func_1B32E0
label_3007d4:
    if (ctx->pc == 0x3007D4u) {
        ctx->pc = 0x3007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007D0u;
        // 0x3007d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007D8u;
        goto label_3007d8;
    }
    ctx->pc = 0x3007D0u;
    SET_GPR_U32(ctx, 31, 0x3007D8u);
    ctx->pc = 0x3007D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007D0u;
    // 0x3007d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x3007D0u, 0x3007D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007D8u;
label_3007d8:
    // 0x3007d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3007d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3007dc:
    // 0x3007dc: 0xa051019e  sb          $s1, 0x19E($v0)
    ctx->pc = 0x3007dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 414), (uint8_t)GPR_U32(ctx, 17));
label_3007e0:
    // 0x3007e0: 0x8e83021c  lw          $v1, 0x21C($s4)
    ctx->pc = 0x3007e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_3007e4:
    // 0x3007e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_3007e8:
    if (ctx->pc == 0x3007E8u) {
        ctx->pc = 0x3007ECu;
        goto label_3007ec;
    }
    ctx->pc = 0x3007E4u;
    {
        const bool branch_taken_0x3007e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3007e4) {
            ctx->pc = 0x300834u;
            goto label_300834;
        }
    }
    ctx->pc = 0x3007ECu;
label_3007ec:
    // 0x3007ec: 0xc0a40d2  jal         func_290348
label_3007f0:
    if (ctx->pc == 0x3007F0u) {
        ctx->pc = 0x3007F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007ECu;
        // 0x3007f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007F4u;
        goto label_3007f4;
    }
    ctx->pc = 0x3007ECu;
    SET_GPR_U32(ctx, 31, 0x3007F4u);
    ctx->pc = 0x3007F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007ECu;
    // 0x3007f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x3007ECu, 0x3007F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007F4u;
label_3007f4:
    // 0x3007f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3007f8:
    if (ctx->pc == 0x3007F8u) {
        ctx->pc = 0x3007F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007F4u;
        // 0x3007f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3007FCu;
        goto label_3007fc;
    }
    ctx->pc = 0x3007F4u;
    {
        const bool branch_taken_0x3007f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3007F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007F4u;
        // 0x3007f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007f4) {
            ctx->pc = 0x300834u;
            goto label_300834;
        }
    }
    ctx->pc = 0x3007FCu;
label_3007fc:
    // 0x3007fc: 0xc0a3658  jal         func_28D960
label_300800:
    if (ctx->pc == 0x300800u) {
        ctx->pc = 0x300800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007FCu;
        // 0x300800: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300804u;
        goto label_300804;
    }
    ctx->pc = 0x3007FCu;
    SET_GPR_U32(ctx, 31, 0x300804u);
    ctx->pc = 0x300800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007FCu;
    // 0x300800: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3007FCu, 0x300804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300804u;
label_300804:
    // 0x300804: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x300804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300808:
    // 0x300808: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_30080c:
    if (ctx->pc == 0x30080Cu) {
        ctx->pc = 0x300810u;
        goto label_300810;
    }
    ctx->pc = 0x300808u;
    {
        const bool branch_taken_0x300808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x300808) {
            ctx->pc = 0x300834u;
            goto label_300834;
        }
    }
    ctx->pc = 0x300810u;
label_300810:
    // 0x300810: 0xc137832  jal         func_4DE0C8
label_300814:
    if (ctx->pc == 0x300814u) {
        ctx->pc = 0x300814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300810u;
        // 0x300814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300818u;
        goto label_300818;
    }
    ctx->pc = 0x300810u;
    SET_GPR_U32(ctx, 31, 0x300818u);
    ctx->pc = 0x300814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300810u;
    // 0x300814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x300810u, 0x300818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300818u;
label_300818:
    // 0x300818: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30081c:
    if (ctx->pc == 0x30081Cu) {
        ctx->pc = 0x30081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300818u;
        // 0x30081c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300820u;
        goto label_300820;
    }
    ctx->pc = 0x300818u;
    {
        const bool branch_taken_0x300818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300818u;
        // 0x30081c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300818) {
            ctx->pc = 0x300834u;
            goto label_300834;
        }
    }
    ctx->pc = 0x300820u;
label_300820:
    // 0x300820: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x300820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_300824:
    // 0x300824: 0xa282028f  sb          $v0, 0x28F($s4)
    ctx->pc = 0x300824u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 2));
label_300828:
    // 0x300828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30082c:
    // 0x30082c: 0xc0a3464  jal         func_28D190
label_300830:
    if (ctx->pc == 0x300830u) {
        ctx->pc = 0x300830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30082Cu;
        // 0x300830: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300834u;
        goto label_300834;
    }
    ctx->pc = 0x30082Cu;
    SET_GPR_U32(ctx, 31, 0x300834u);
    ctx->pc = 0x300830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30082Cu;
    // 0x300830: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x30082Cu, 0x300834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300834u;
label_300834:
    // 0x300834: 0xc0e409a  jal         func_390268
label_300838:
    if (ctx->pc == 0x300838u) {
        ctx->pc = 0x300838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300834u;
        // 0x300838: 0x26840124  addiu       $a0, $s4, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30083Cu;
        goto label_30083c;
    }
    ctx->pc = 0x300834u;
    SET_GPR_U32(ctx, 31, 0x30083Cu);
    ctx->pc = 0x300838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300834u;
    // 0x300838: 0x26840124  addiu       $a0, $s4, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x300834u, 0x30083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30083Cu;
label_30083c:
    // 0x30083c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30083cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300840:
    // 0x300840: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_300844:
    if (ctx->pc == 0x300844u) {
        ctx->pc = 0x300844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300840u;
        // 0x300844: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300848u;
        goto label_300848;
    }
    ctx->pc = 0x300840u;
    {
        const bool branch_taken_0x300840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300840u;
        // 0x300844: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300840) {
            ctx->pc = 0x30090Cu;
            goto label_30090c;
        }
    }
    ctx->pc = 0x300848u;
label_300848:
    // 0x300848: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30084c:
    // 0x30084c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x30084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_300850:
    // 0x300850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x300850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_300854:
    // 0x300854: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x300854u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_300858:
    // 0x300858: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x300858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30085c:
    // 0x30085c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30085cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_300860:
    // 0x300860: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x300860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_300864:
    // 0x300864: 0xc0cd8ec  jal         func_3363B0
label_300868:
    if (ctx->pc == 0x300868u) {
        ctx->pc = 0x300868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300864u;
        // 0x300868: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30086Cu;
        goto label_30086c;
    }
    ctx->pc = 0x300864u;
    SET_GPR_U32(ctx, 31, 0x30086Cu);
    ctx->pc = 0x300868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300864u;
    // 0x300868: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x300864u, 0x30086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30086Cu;
label_30086c:
    // 0x30086c: 0x8e1101a8  lw          $s1, 0x1A8($s0)
    ctx->pc = 0x30086cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_300870:
    // 0x300870: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_300874:
    if (ctx->pc == 0x300874u) {
        ctx->pc = 0x300878u;
        goto label_300878;
    }
    ctx->pc = 0x300870u;
    {
        const bool branch_taken_0x300870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x300870) {
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x300878u;
label_300878:
    // 0x300878: 0xc089018  jal         func_224060
label_30087c:
    if (ctx->pc == 0x30087Cu) {
        ctx->pc = 0x30087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300878u;
        // 0x30087c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300880u;
        goto label_300880;
    }
    ctx->pc = 0x300878u;
    SET_GPR_U32(ctx, 31, 0x300880u);
    ctx->pc = 0x30087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300878u;
    // 0x30087c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x300878u, 0x300880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300880u;
label_300880:
    // 0x300880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300884:
    // 0x300884: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_300888:
    if (ctx->pc == 0x300888u) {
        ctx->pc = 0x300888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300884u;
        // 0x300888: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30088Cu;
        goto label_30088c;
    }
    ctx->pc = 0x300884u;
    {
        const bool branch_taken_0x300884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300884) {
            ctx->pc = 0x300888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300884u;
            // 0x300888: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x30088Cu;
label_30088c:
    // 0x30088c: 0xc0e87c0  jal         func_3A1F00
label_300890:
    if (ctx->pc == 0x300890u) {
        ctx->pc = 0x300890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30088Cu;
        // 0x300890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300894u;
        goto label_300894;
    }
    ctx->pc = 0x30088Cu;
    SET_GPR_U32(ctx, 31, 0x300894u);
    ctx->pc = 0x300890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30088Cu;
    // 0x300890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x30088Cu, 0x300894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300894u;
label_300894:
    // 0x300894: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x300894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_300898:
    // 0x300898: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x300898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30089c:
    // 0x30089c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x30089cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3008a0:
    // 0x3008a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3008a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3008a4:
    // 0x3008a4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x3008a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3008a8:
    // 0x3008a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3008a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3008ac:
    // 0x3008ac: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3008acu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3008b0:
    // 0x3008b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3008b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3008b4:
    // 0x3008b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3008b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3008b8:
    // 0x3008b8: 0x0  nop
    ctx->pc = 0x3008b8u;
    // NOP
label_3008bc:
    // 0x3008bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3008bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3008c0:
    // 0x3008c0: 0x0  nop
    ctx->pc = 0x3008c0u;
    // NOP
label_3008c4:
    // 0x3008c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3008c8:
    if (ctx->pc == 0x3008C8u) {
        ctx->pc = 0x3008C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008C4u;
        // 0x3008c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3008CCu;
        goto label_3008cc;
    }
    ctx->pc = 0x3008C4u;
    {
        const bool branch_taken_0x3008c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3008c4) {
            ctx->pc = 0x3008C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3008C4u;
            // 0x3008c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x3008CCu;
label_3008cc:
    // 0x3008cc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3008d0:
    if (ctx->pc == 0x3008D0u) {
        ctx->pc = 0x3008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008CCu;
        // 0x3008d0: 0x96820148  lhu         $v0, 0x148($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3008D4u;
        goto label_3008d4;
    }
    ctx->pc = 0x3008CCu;
    {
        const bool branch_taken_0x3008cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008CCu;
        // 0x3008d0: 0x96820148  lhu         $v0, 0x148($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008cc) {
            ctx->pc = 0x3008F4u;
            goto label_3008f4;
        }
    }
    ctx->pc = 0x3008D4u;
label_3008d4:
    // 0x3008d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3008d8:
    // 0x3008d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3008d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3008dc:
    // 0x3008dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3008dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_3008e0:
    // 0x3008e0: 0x28630025  slti        $v1, $v1, 0x25
    ctx->pc = 0x3008e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
label_3008e4:
    // 0x3008e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3008e8:
    if (ctx->pc == 0x3008E8u) {
        ctx->pc = 0x3008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008E4u;
        // 0x3008e8: 0xa6820148  sh          $v0, 0x148($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3008ECu;
        goto label_3008ec;
    }
    ctx->pc = 0x3008E4u;
    {
        const bool branch_taken_0x3008e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008E4u;
        // 0x3008e8: 0xa6820148  sh          $v0, 0x148($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008e4) {
            ctx->pc = 0x300908u;
            goto label_300908;
        }
    }
    ctx->pc = 0x3008ECu;
label_3008ec:
    // 0x3008ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_3008f0:
    if (ctx->pc == 0x3008F0u) {
        ctx->pc = 0x3008F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008ECu;
        // 0x3008f0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3008F4u;
        goto label_3008f4;
    }
    ctx->pc = 0x3008ECu;
    {
        const bool branch_taken_0x3008ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3008F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008ECu;
        // 0x3008f0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008ec) {
            ctx->pc = 0x300908u;
            goto label_300908;
        }
    }
    ctx->pc = 0x3008F4u;
label_3008f4:
    // 0x3008f4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3008f8:
    // 0x3008f8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3008f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3008fc:
    // 0x3008fc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_300900:
    if (ctx->pc == 0x300900u) {
        ctx->pc = 0x300900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008FCu;
        // 0x300900: 0xa6820148  sh          $v0, 0x148($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300904u;
        goto label_300904;
    }
    ctx->pc = 0x3008FCu;
    {
        const bool branch_taken_0x3008fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x300900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008FCu;
        // 0x300900: 0xa6820148  sh          $v0, 0x148($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008fc) {
            ctx->pc = 0x300908u;
            goto label_300908;
        }
    }
    ctx->pc = 0x300904u;
label_300904:
    // 0x300904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300908:
    // 0x300908: 0xa6820148  sh          $v0, 0x148($s4)
    ctx->pc = 0x300908u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 328), (uint16_t)GPR_U32(ctx, 2));
label_30090c:
    // 0x30090c: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x30090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_300910:
    // 0x300910: 0xc10743a  jal         func_41D0E8
label_300914:
    if (ctx->pc == 0x300914u) {
        ctx->pc = 0x300914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300910u;
        // 0x300914: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300918u;
        goto label_300918;
    }
    ctx->pc = 0x300910u;
    SET_GPR_U32(ctx, 31, 0x300918u);
    ctx->pc = 0x300914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300910u;
    // 0x300914: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0E8u, 0x300910u, 0x300918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300918u;
label_300918:
    // 0x300918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30091c:
    // 0x30091c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300920:
    // 0x300920: 0x1602001b  bne         $s0, $v0, . + 4 + (0x1B << 2)
label_300924:
    if (ctx->pc == 0x300924u) {
        ctx->pc = 0x300924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300920u;
        // 0x300924: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300928u;
        goto label_300928;
    }
    ctx->pc = 0x300920u;
    {
        const bool branch_taken_0x300920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x300924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300920u;
        // 0x300924: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300920) {
            ctx->pc = 0x300990u;
            goto label_300990;
        }
    }
    ctx->pc = 0x300928u;
label_300928:
    // 0x300928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x300928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30092c:
    // 0x30092c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_300930:
    if (ctx->pc == 0x300930u) {
        ctx->pc = 0x300930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30092Cu;
        // 0x300930: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300934u;
        goto label_300934;
    }
    ctx->pc = 0x30092Cu;
    {
        const bool branch_taken_0x30092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30092c) {
            ctx->pc = 0x300930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30092Cu;
            // 0x300930: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300934u;
            goto label_300934;
        }
    }
    ctx->pc = 0x300934u;
label_300934:
    // 0x300934: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x300934u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_300938:
    // 0x300938: 0x1810  mfhi        $v1
    ctx->pc = 0x300938u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30093c:
    // 0x30093c: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_300940:
    if (ctx->pc == 0x300940u) {
        ctx->pc = 0x300940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30093Cu;
        // 0x300940: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300944u;
        goto label_300944;
    }
    ctx->pc = 0x30093Cu;
    {
        const bool branch_taken_0x30093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30093c) {
            ctx->pc = 0x300940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30093Cu;
            // 0x300940: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300990u;
            goto label_300990;
        }
    }
    ctx->pc = 0x300944u;
label_300944:
    // 0x300944: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x300944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_300948:
    // 0x300948: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x300948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_30094c:
    // 0x30094c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_300950:
    if (ctx->pc == 0x300950u) {
        ctx->pc = 0x300950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30094Cu;
        // 0x300950: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300954u;
        goto label_300954;
    }
    ctx->pc = 0x30094Cu;
    {
        const bool branch_taken_0x30094c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30094c) {
            ctx->pc = 0x300950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30094Cu;
            // 0x300950: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300990u;
            goto label_300990;
        }
    }
    ctx->pc = 0x300954u;
label_300954:
    // 0x300954: 0xc0c080e  jal         func_302038
label_300958:
    if (ctx->pc == 0x300958u) {
        ctx->pc = 0x300958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300954u;
        // 0x300958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30095Cu;
        goto label_30095c;
    }
    ctx->pc = 0x300954u;
    SET_GPR_U32(ctx, 31, 0x30095Cu);
    ctx->pc = 0x300958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300954u;
    // 0x300958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x300954u, 0x30095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30095Cu;
label_30095c:
    // 0x30095c: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_300960:
    if (ctx->pc == 0x300960u) {
        ctx->pc = 0x300964u;
        goto label_300964;
    }
    ctx->pc = 0x30095Cu;
    {
        const bool branch_taken_0x30095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x30095c) {
            ctx->pc = 0x300984u;
            goto label_300984;
        }
    }
    ctx->pc = 0x300964u;
label_300964:
    // 0x300964: 0xc0a40d2  jal         func_290348
label_300968:
    if (ctx->pc == 0x300968u) {
        ctx->pc = 0x300968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300964u;
        // 0x300968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30096Cu;
        goto label_30096c;
    }
    ctx->pc = 0x300964u;
    SET_GPR_U32(ctx, 31, 0x30096Cu);
    ctx->pc = 0x300968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300964u;
    // 0x300968: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x300964u, 0x30096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30096Cu;
label_30096c:
    // 0x30096c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_300970:
    if (ctx->pc == 0x300970u) {
        ctx->pc = 0x300974u;
        goto label_300974;
    }
    ctx->pc = 0x30096Cu;
    {
        const bool branch_taken_0x30096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x30096c) {
            ctx->pc = 0x300984u;
            goto label_300984;
        }
    }
    ctx->pc = 0x300974u;
label_300974:
    // 0x300974: 0xc0a40ec  jal         func_2903B0
label_300978:
    if (ctx->pc == 0x300978u) {
        ctx->pc = 0x300978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300974u;
        // 0x300978: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30097Cu;
        goto label_30097c;
    }
    ctx->pc = 0x300974u;
    SET_GPR_U32(ctx, 31, 0x30097Cu);
    ctx->pc = 0x300978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300974u;
    // 0x300978: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x300974u, 0x30097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30097Cu;
label_30097c:
    // 0x30097c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_300980:
    if (ctx->pc == 0x300980u) {
        ctx->pc = 0x300980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30097Cu;
        // 0x300980: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300984u;
        goto label_300984;
    }
    ctx->pc = 0x30097Cu;
    {
        const bool branch_taken_0x30097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x30097c) {
            ctx->pc = 0x300980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30097Cu;
            // 0x300980: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300990u;
            goto label_300990;
        }
    }
    ctx->pc = 0x300984u;
label_300984:
    // 0x300984: 0xc0c0492  jal         func_301248
label_300988:
    if (ctx->pc == 0x300988u) {
        ctx->pc = 0x300988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300984u;
        // 0x300988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30098Cu;
        goto label_30098c;
    }
    ctx->pc = 0x300984u;
    SET_GPR_U32(ctx, 31, 0x30098Cu);
    ctx->pc = 0x300988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300984u;
    // 0x300988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301248u, 0x300984u, 0x30098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30098Cu;
label_30098c:
    // 0x30098c: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x30098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_300990:
    // 0x300990: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x300990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_300994:
    // 0x300994: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_300998:
    if (ctx->pc == 0x300998u) {
        ctx->pc = 0x300998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300994u;
        // 0x300998: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30099Cu;
        goto label_30099c;
    }
    ctx->pc = 0x300994u;
    {
        const bool branch_taken_0x300994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300994) {
            ctx->pc = 0x300998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300994u;
            // 0x300998: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30099Cu;
            goto label_30099c;
        }
    }
    ctx->pc = 0x30099Cu;
label_30099c:
    // 0x30099c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x30099cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3009a0:
    // 0x3009a0: 0x1810  mfhi        $v1
    ctx->pc = 0x3009a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3009a4:
    // 0x3009a4: 0x54600086  bnel        $v1, $zero, . + 4 + (0x86 << 2)
label_3009a8:
    if (ctx->pc == 0x3009A8u) {
        ctx->pc = 0x3009A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009A4u;
        // 0x3009a8: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009ACu;
        goto label_3009ac;
    }
    ctx->pc = 0x3009A4u;
    {
        const bool branch_taken_0x3009a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3009a4) {
            ctx->pc = 0x3009A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3009A4u;
            // 0x3009a8: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x3009ACu;
label_3009ac:
    // 0x3009ac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3009acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3009b0:
    // 0x3009b0: 0xc105bc2  jal         func_416F08
label_3009b4:
    if (ctx->pc == 0x3009B4u) {
        ctx->pc = 0x3009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009B0u;
        // 0x3009b4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009B8u;
        goto label_3009b8;
    }
    ctx->pc = 0x3009B0u;
    SET_GPR_U32(ctx, 31, 0x3009B8u);
    ctx->pc = 0x3009B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009B0u;
    // 0x3009b4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x3009B0u, 0x3009B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009B8u;
label_3009b8:
    // 0x3009b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3009b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3009bc:
    // 0x3009bc: 0x1220007f  beqz        $s1, . + 4 + (0x7F << 2)
label_3009c0:
    if (ctx->pc == 0x3009C0u) {
        ctx->pc = 0x3009C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009BCu;
        // 0x3009c0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009C4u;
        goto label_3009c4;
    }
    ctx->pc = 0x3009BCu;
    {
        const bool branch_taken_0x3009bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009BCu;
        // 0x3009c0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009bc) {
            ctx->pc = 0x300BBCu;
            goto label_300bbc;
        }
    }
    ctx->pc = 0x3009C4u;
label_3009c4:
    // 0x3009c4: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x3009c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_3009c8:
    // 0x3009c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3009c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3009cc:
    // 0x3009cc: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_3009d0:
    if (ctx->pc == 0x3009D0u) {
        ctx->pc = 0x3009D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009CCu;
        // 0x3009d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009D4u;
        goto label_3009d4;
    }
    ctx->pc = 0x3009CCu;
    {
        const bool branch_taken_0x3009cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009CCu;
        // 0x3009d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009cc) {
            ctx->pc = 0x300BBCu;
            goto label_300bbc;
        }
    }
    ctx->pc = 0x3009D4u;
label_3009d4:
    // 0x3009d4: 0xc10587a  jal         func_4161E8
label_3009d8:
    if (ctx->pc == 0x3009D8u) {
        ctx->pc = 0x3009D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009D4u;
        // 0x3009d8: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009DCu;
        goto label_3009dc;
    }
    ctx->pc = 0x3009D4u;
    SET_GPR_U32(ctx, 31, 0x3009DCu);
    ctx->pc = 0x3009D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009D4u;
    // 0x3009d8: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3009D4u, 0x3009DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009DCu;
label_3009dc:
    // 0x3009dc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3009dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3009e0:
    // 0x3009e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3009e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3009e4:
    // 0x3009e4: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_3009e8:
    // 0x3009e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3009e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3009ec:
    // 0x3009ec: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x3009ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_3009f0:
    // 0x3009f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3009f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3009f4:
    // 0x3009f4: 0xc0cdb38  jal         func_336CE0
label_3009f8:
    if (ctx->pc == 0x3009F8u) {
        ctx->pc = 0x3009F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009F4u;
        // 0x3009f8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3009FCu;
        goto label_3009fc;
    }
    ctx->pc = 0x3009F4u;
    SET_GPR_U32(ctx, 31, 0x3009FCu);
    ctx->pc = 0x3009F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009F4u;
    // 0x3009f8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3009F4u, 0x3009FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009FCu;
label_3009fc:
    // 0x3009fc: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_300a00:
    // 0x300a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300a04:
    // 0x300a04: 0x0  nop
    ctx->pc = 0x300a04u;
    // NOP
label_300a08:
    // 0x300a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x300a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300a0c:
    // 0x300a0c: 0x0  nop
    ctx->pc = 0x300a0cu;
    // NOP
label_300a10:
    // 0x300a10: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
label_300a14:
    if (ctx->pc == 0x300A14u) {
        ctx->pc = 0x300A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A10u;
        // 0x300a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A18u;
        goto label_300a18;
    }
    ctx->pc = 0x300A10u;
    {
        const bool branch_taken_0x300a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x300A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A10u;
        // 0x300a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a10) {
            ctx->pc = 0x300BBCu;
            goto label_300bbc;
        }
    }
    ctx->pc = 0x300A18u;
label_300a18:
    // 0x300a18: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x300a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_300a1c:
    // 0x300a1c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x300a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_300a20:
    // 0x300a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300a24:
    // 0x300a24: 0xc10587a  jal         func_4161E8
label_300a28:
    if (ctx->pc == 0x300A28u) {
        ctx->pc = 0x300A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A24u;
        // 0x300a28: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A2Cu;
        goto label_300a2c;
    }
    ctx->pc = 0x300A24u;
    SET_GPR_U32(ctx, 31, 0x300A2Cu);
    ctx->pc = 0x300A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A24u;
    // 0x300a28: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x300A24u, 0x300A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A2Cu;
label_300a2c:
    // 0x300a2c: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x300a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_300a30:
    // 0x300a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a34:
    // 0x300a34: 0xc1067b8  jal         func_419EE0
label_300a38:
    if (ctx->pc == 0x300A38u) {
        ctx->pc = 0x300A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A34u;
        // 0x300a38: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A3Cu;
        goto label_300a3c;
    }
    ctx->pc = 0x300A34u;
    SET_GPR_U32(ctx, 31, 0x300A3Cu);
    ctx->pc = 0x300A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A34u;
    // 0x300a38: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x300A34u, 0x300A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A3Cu;
label_300a3c:
    // 0x300a3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a40:
    // 0x300a40: 0x1240005e  beqz        $s2, . + 4 + (0x5E << 2)
label_300a44:
    if (ctx->pc == 0x300A44u) {
        ctx->pc = 0x300A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A40u;
        // 0x300a44: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A48u;
        goto label_300a48;
    }
    ctx->pc = 0x300A40u;
    {
        const bool branch_taken_0x300a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A40u;
        // 0x300a44: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a40) {
            ctx->pc = 0x300BBCu;
            goto label_300bbc;
        }
    }
    ctx->pc = 0x300A48u;
label_300a48:
    // 0x300a48: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x300a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_300a4c:
    // 0x300a4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300a50:
    // 0x300a50: 0x0  nop
    ctx->pc = 0x300a50u;
    // NOP
label_300a54:
    // 0x300a54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x300a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300a58:
    // 0x300a58: 0x0  nop
    ctx->pc = 0x300a58u;
    // NOP
label_300a5c:
    // 0x300a5c: 0x45020058  bc1fl       . + 4 + (0x58 << 2)
label_300a60:
    if (ctx->pc == 0x300A60u) {
        ctx->pc = 0x300A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A5Cu;
        // 0x300a60: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A64u;
        goto label_300a64;
    }
    ctx->pc = 0x300A5Cu;
    {
        const bool branch_taken_0x300a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300a5c) {
            ctx->pc = 0x300A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A5Cu;
            // 0x300a60: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300A64u;
label_300a64:
    // 0x300a64: 0x924205b7  lbu         $v0, 0x5B7($s2)
    ctx->pc = 0x300a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1463)));
label_300a68:
    // 0x300a68: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_300a6c:
    if (ctx->pc == 0x300A6Cu) {
        ctx->pc = 0x300A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A68u;
        // 0x300a6c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A70u;
        goto label_300a70;
    }
    ctx->pc = 0x300A68u;
    {
        const bool branch_taken_0x300a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A68u;
        // 0x300a6c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a68) {
            ctx->pc = 0x300BBCu;
            goto label_300bbc;
        }
    }
    ctx->pc = 0x300A70u;
label_300a70:
    // 0x300a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300a74:
    // 0x300a74: 0xc0a34d6  jal         func_28D358
label_300a78:
    if (ctx->pc == 0x300A78u) {
        ctx->pc = 0x300A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A74u;
        // 0x300a78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A7Cu;
        goto label_300a7c;
    }
    ctx->pc = 0x300A74u;
    SET_GPR_U32(ctx, 31, 0x300A7Cu);
    ctx->pc = 0x300A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A74u;
    // 0x300a78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x300A74u, 0x300A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A7Cu;
label_300a7c:
    // 0x300a7c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_300a80:
    if (ctx->pc == 0x300A80u) {
        ctx->pc = 0x300A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A7Cu;
        // 0x300a80: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A84u;
        goto label_300a84;
    }
    ctx->pc = 0x300A7Cu;
    {
        const bool branch_taken_0x300a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300a7c) {
            ctx->pc = 0x300A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A7Cu;
            // 0x300a80: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300A84u;
label_300a84:
    // 0x300a84: 0xc0c080e  jal         func_302038
label_300a88:
    if (ctx->pc == 0x300A88u) {
        ctx->pc = 0x300A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A84u;
        // 0x300a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A8Cu;
        goto label_300a8c;
    }
    ctx->pc = 0x300A84u;
    SET_GPR_U32(ctx, 31, 0x300A8Cu);
    ctx->pc = 0x300A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A84u;
    // 0x300a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x300A84u, 0x300A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A8Cu;
label_300a8c:
    // 0x300a8c: 0x5450004c  bnel        $v0, $s0, . + 4 + (0x4C << 2)
label_300a90:
    if (ctx->pc == 0x300A90u) {
        ctx->pc = 0x300A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A8Cu;
        // 0x300a90: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300A94u;
        goto label_300a94;
    }
    ctx->pc = 0x300A8Cu;
    {
        const bool branch_taken_0x300a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x300a8c) {
            ctx->pc = 0x300A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A8Cu;
            // 0x300a90: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300A94u;
label_300a94:
    // 0x300a94: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x300a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_300a98:
    // 0x300a98: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_300a9c:
    if (ctx->pc == 0x300A9Cu) {
        ctx->pc = 0x300A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A98u;
        // 0x300a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AA0u;
        goto label_300aa0;
    }
    ctx->pc = 0x300A98u;
    {
        const bool branch_taken_0x300a98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300a98) {
            ctx->pc = 0x300A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A98u;
            // 0x300a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300AE4u;
            goto label_300ae4;
        }
    }
    ctx->pc = 0x300AA0u;
label_300aa0:
    // 0x300aa0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_300aa4:
    if (ctx->pc == 0x300AA4u) {
        ctx->pc = 0x300AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AA0u;
        // 0x300aa4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AA8u;
        goto label_300aa8;
    }
    ctx->pc = 0x300AA0u;
    {
        const bool branch_taken_0x300aa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x300AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AA0u;
        // 0x300aa4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300aa0) {
            ctx->pc = 0x300AB4u;
            goto label_300ab4;
        }
    }
    ctx->pc = 0x300AA8u;
label_300aa8:
    // 0x300aa8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x300aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_300aac:
    // 0x300aac: 0x10000002  b           . + 4 + (0x2 << 2)
label_300ab0:
    if (ctx->pc == 0x300AB0u) {
        ctx->pc = 0x300AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AACu;
        // 0x300ab0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AB4u;
        goto label_300ab4;
    }
    ctx->pc = 0x300AACu;
    {
        const bool branch_taken_0x300aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AACu;
        // 0x300ab0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300aac) {
            ctx->pc = 0x300AB8u;
            goto label_300ab8;
        }
    }
    ctx->pc = 0x300AB4u;
label_300ab4:
    // 0x300ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300ab8:
    // 0x300ab8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x300ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_300abc:
    // 0x300abc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x300abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_300ac0:
    // 0x300ac0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_300ac4:
    // 0x300ac4: 0x40f809  jalr        $v0
label_300ac8:
    if (ctx->pc == 0x300AC8u) {
        ctx->pc = 0x300AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AC4u;
        // 0x300ac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300ACCu;
        goto label_300acc;
    }
    ctx->pc = 0x300AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300ACCu);
        ctx->pc = 0x300AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AC4u;
        // 0x300ac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300AC4u, 0x300ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300ACCu;
label_300acc:
    // 0x300acc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300ad0:
    // 0x300ad0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_300ad4:
    if (ctx->pc == 0x300AD4u) {
        ctx->pc = 0x300AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AD0u;
        // 0x300ad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AD8u;
        goto label_300ad8;
    }
    ctx->pc = 0x300AD0u;
    {
        const bool branch_taken_0x300ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x300AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AD0u;
        // 0x300ad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ad0) {
            ctx->pc = 0x300AE4u;
            goto label_300ae4;
        }
    }
    ctx->pc = 0x300AD8u;
label_300ad8:
    // 0x300ad8: 0xc0a35f6  jal         func_28D7D8
label_300adc:
    if (ctx->pc == 0x300ADCu) {
        ctx->pc = 0x300ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AD8u;
        // 0x300adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AE0u;
        goto label_300ae0;
    }
    ctx->pc = 0x300AD8u;
    SET_GPR_U32(ctx, 31, 0x300AE0u);
    ctx->pc = 0x300ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AD8u;
    // 0x300adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x300AD8u, 0x300AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AE0u;
label_300ae0:
    // 0x300ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300ae4:
    // 0x300ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300ae8:
    // 0x300ae8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x300ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_300aec:
    // 0x300aec: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_300af0:
    // 0x300af0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x300af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300af4:
    // 0x300af4: 0xc0c0846  jal         func_302118
label_300af8:
    if (ctx->pc == 0x300AF8u) {
        ctx->pc = 0x300AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AF4u;
        // 0x300af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300AFCu;
        goto label_300afc;
    }
    ctx->pc = 0x300AF4u;
    SET_GPR_U32(ctx, 31, 0x300AFCu);
    ctx->pc = 0x300AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AF4u;
    // 0x300af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x300AF4u, 0x300AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AFCu;
label_300afc:
    // 0x300afc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x300afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_300b00:
    // 0x300b00: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x300b00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_300b04:
    // 0x300b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b08:
    // 0x300b08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300b0c:
    // 0x300b0c: 0xc0a3464  jal         func_28D190
label_300b10:
    if (ctx->pc == 0x300B10u) {
        ctx->pc = 0x300B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B0Cu;
        // 0x300b10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B14u;
        goto label_300b14;
    }
    ctx->pc = 0x300B0Cu;
    SET_GPR_U32(ctx, 31, 0x300B14u);
    ctx->pc = 0x300B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B0Cu;
    // 0x300b10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x300B0Cu, 0x300B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B14u;
label_300b14:
    // 0x300b14: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_300b18:
    if (ctx->pc == 0x300B18u) {
        ctx->pc = 0x300B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B14u;
        // 0x300b18: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B1Cu;
        goto label_300b1c;
    }
    ctx->pc = 0x300B14u;
    {
        const bool branch_taken_0x300b14 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x300B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B14u;
        // 0x300b18: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b14) {
            ctx->pc = 0x300B64u;
            goto label_300b64;
        }
    }
    ctx->pc = 0x300B1Cu;
label_300b1c:
    // 0x300b1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300b20:
    // 0x300b20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300b24:
    // 0x300b24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300b28:
    // 0x300b28: 0x40f809  jalr        $v0
label_300b2c:
    if (ctx->pc == 0x300B2Cu) {
        ctx->pc = 0x300B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B28u;
        // 0x300b2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B30u;
        goto label_300b30;
    }
    ctx->pc = 0x300B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300B30u);
        ctx->pc = 0x300B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B28u;
        // 0x300b2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B28u, 0x300B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300B30u;
label_300b30:
    // 0x300b30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x300b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_300b34:
    // 0x300b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b38:
    // 0x300b38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300b3c:
    // 0x300b3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300b40:
    // 0x300b40: 0x40f809  jalr        $v0
label_300b44:
    if (ctx->pc == 0x300B44u) {
        ctx->pc = 0x300B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B40u;
        // 0x300b44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B48u;
        goto label_300b48;
    }
    ctx->pc = 0x300B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300B48u);
        ctx->pc = 0x300B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B40u;
        // 0x300b44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B40u, 0x300B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300B48u;
label_300b48:
    // 0x300b48: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_300b4c:
    // 0x300b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300b50:
    // 0x300b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b54:
    // 0x300b54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x300b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300b58:
    // 0x300b58: 0xc0b11c4  jal         func_2C4710
label_300b5c:
    if (ctx->pc == 0x300B5Cu) {
        ctx->pc = 0x300B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B58u;
        // 0x300b5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B60u;
        goto label_300b60;
    }
    ctx->pc = 0x300B58u;
    SET_GPR_U32(ctx, 31, 0x300B60u);
    ctx->pc = 0x300B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B58u;
    // 0x300b5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x300B58u, 0x300B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B60u;
label_300b60:
    // 0x300b60: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x300b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300b64:
    // 0x300b64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300b68:
    // 0x300b68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300b6c:
    // 0x300b6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300b70:
    // 0x300b70: 0x40f809  jalr        $v0
label_300b74:
    if (ctx->pc == 0x300B74u) {
        ctx->pc = 0x300B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B70u;
        // 0x300b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300B78u;
        goto label_300b78;
    }
    ctx->pc = 0x300B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300B78u);
        ctx->pc = 0x300B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B70u;
        // 0x300b74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B70u, 0x300B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300B78u;
label_300b78:
    // 0x300b78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x300b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_300b7c:
    // 0x300b7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b80:
    // 0x300b80: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x300b80u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_300b84:
    // 0x300b84: 0x26654b00  addiu       $a1, $s3, 0x4B00
    ctx->pc = 0x300b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 19200));
label_300b88:
    // 0x300b88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300b8c:
    // 0x300b8c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x300b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_300b90:
    // 0x300b90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300b94:
    // 0x300b94: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x300b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_300b98:
    // 0x300b98: 0x40f809  jalr        $v0
label_300b9c:
    if (ctx->pc == 0x300B9Cu) {
        ctx->pc = 0x300B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B98u;
        // 0x300b9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BA0u;
        goto label_300ba0;
    }
    ctx->pc = 0x300B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300BA0u);
        ctx->pc = 0x300B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B98u;
        // 0x300b9c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300B98u, 0x300BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300BA0u;
label_300ba0:
    // 0x300ba0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x300ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_300ba4:
    // 0x300ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300ba8:
    // 0x300ba8: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x300ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_300bac:
    // 0x300bac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x300bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300bb0:
    // 0x300bb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300bb4:
    // 0x300bb4: 0x1000018d  b           . + 4 + (0x18D << 2)
label_300bb8:
    if (ctx->pc == 0x300BB8u) {
        ctx->pc = 0x300BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BB4u;
        // 0x300bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BBCu;
        goto label_300bbc;
    }
    ctx->pc = 0x300BB4u;
    {
        const bool branch_taken_0x300bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BB4u;
        // 0x300bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bb4) {
            ctx->pc = 0x3011ECu;
            goto label_3011ec;
        }
    }
    ctx->pc = 0x300BBCu;
label_300bbc:
    // 0x300bbc: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x300bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_300bc0:
    // 0x300bc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x300bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_300bc4:
    // 0x300bc4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_300bc8:
    if (ctx->pc == 0x300BC8u) {
        ctx->pc = 0x300BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BC4u;
        // 0x300bc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BCCu;
        goto label_300bcc;
    }
    ctx->pc = 0x300BC4u;
    {
        const bool branch_taken_0x300bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300bc4) {
            ctx->pc = 0x300BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BC4u;
            // 0x300bc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BCCu;
            goto label_300bcc;
        }
    }
    ctx->pc = 0x300BCCu;
label_300bcc:
    // 0x300bcc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x300bccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_300bd0:
    // 0x300bd0: 0x1810  mfhi        $v1
    ctx->pc = 0x300bd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_300bd4:
    // 0x300bd4: 0x5460009c  bnel        $v1, $zero, . + 4 + (0x9C << 2)
label_300bd8:
    if (ctx->pc == 0x300BD8u) {
        ctx->pc = 0x300BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BD4u;
        // 0x300bd8: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BDCu;
        goto label_300bdc;
    }
    ctx->pc = 0x300BD4u;
    {
        const bool branch_taken_0x300bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300bd4) {
            ctx->pc = 0x300BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BD4u;
            // 0x300bd8: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E48u;
            goto label_300e48;
        }
    }
    ctx->pc = 0x300BDCu;
label_300bdc:
    // 0x300bdc: 0x10000094  b           . + 4 + (0x94 << 2)
label_300be0:
    if (ctx->pc == 0x300BE0u) {
        ctx->pc = 0x300BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BDCu;
        // 0x300be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BE4u;
        goto label_300be4;
    }
    ctx->pc = 0x300BDCu;
    {
        const bool branch_taken_0x300bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BDCu;
        // 0x300be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bdc) {
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300BE4u;
label_300be4:
    // 0x300be4: 0x0  nop
    ctx->pc = 0x300be4u;
    // NOP
label_300be8:
    // 0x300be8: 0xc105774  jal         func_415DD0
label_300bec:
    if (ctx->pc == 0x300BECu) {
        ctx->pc = 0x300BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BE8u;
        // 0x300bec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300BF0u;
        goto label_300bf0;
    }
    ctx->pc = 0x300BE8u;
    SET_GPR_U32(ctx, 31, 0x300BF0u);
    ctx->pc = 0x300BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300BE8u;
    // 0x300bec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x300BE8u, 0x300BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BF0u;
label_300bf0:
    // 0x300bf0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x300bf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300bf4:
    // 0x300bf4: 0x96a200d0  lhu         $v0, 0xD0($s5)
    ctx->pc = 0x300bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 208)));
label_300bf8:
    // 0x300bf8: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x300bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_300bfc:
    // 0x300bfc: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
label_300c00:
    if (ctx->pc == 0x300C00u) {
        ctx->pc = 0x300C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BFCu;
        // 0x300c00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C04u;
        goto label_300c04;
    }
    ctx->pc = 0x300BFCu;
    {
        const bool branch_taken_0x300bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300bfc) {
            ctx->pc = 0x300C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BFCu;
            // 0x300c00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300C04u;
label_300c04:
    // 0x300c04: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x300c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_300c08:
    // 0x300c08: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x300c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_300c0c:
    // 0x300c0c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x300c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_300c10:
    // 0x300c10: 0x40f809  jalr        $v0
label_300c14:
    if (ctx->pc == 0x300C14u) {
        ctx->pc = 0x300C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C10u;
        // 0x300c14: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C18u;
        goto label_300c18;
    }
    ctx->pc = 0x300C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300C18u);
        ctx->pc = 0x300C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C10u;
        // 0x300c14: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300C10u, 0x300C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300C18u;
label_300c18:
    // 0x300c18: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
label_300c1c:
    if (ctx->pc == 0x300C1Cu) {
        ctx->pc = 0x300C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C18u;
        // 0x300c1c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C20u;
        goto label_300c20;
    }
    ctx->pc = 0x300C18u;
    {
        const bool branch_taken_0x300c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c18) {
            ctx->pc = 0x300C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C18u;
            // 0x300c1c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300C20u;
label_300c20:
    // 0x300c20: 0xc0a2fc0  jal         func_28BF00
label_300c24:
    if (ctx->pc == 0x300C24u) {
        ctx->pc = 0x300C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C20u;
        // 0x300c24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C28u;
        goto label_300c28;
    }
    ctx->pc = 0x300C20u;
    SET_GPR_U32(ctx, 31, 0x300C28u);
    ctx->pc = 0x300C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C20u;
    // 0x300c24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x300C20u, 0x300C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C28u;
label_300c28:
    // 0x300c28: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x300c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300c2c:
    // 0x300c2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x300c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_300c30:
    // 0x300c30: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x300c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_300c34:
    // 0x300c34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x300c34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_300c38:
    // 0x300c38: 0x84700092  lh          $s0, 0x92($v1)
    ctx->pc = 0x300c38u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_300c3c:
    // 0x300c3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x300c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_300c40:
    // 0x300c40: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x300c40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_300c44:
    // 0x300c44: 0xc10587a  jal         func_4161E8
label_300c48:
    if (ctx->pc == 0x300C48u) {
        ctx->pc = 0x300C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C44u;
        // 0x300c48: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C4Cu;
        goto label_300c4c;
    }
    ctx->pc = 0x300C44u;
    SET_GPR_U32(ctx, 31, 0x300C4Cu);
    ctx->pc = 0x300C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C44u;
    // 0x300c48: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x300C44u, 0x300C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C4Cu;
label_300c4c:
    // 0x300c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300c50:
    // 0x300c50: 0xc0cdb38  jal         func_336CE0
label_300c54:
    if (ctx->pc == 0x300C54u) {
        ctx->pc = 0x300C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C50u;
        // 0x300c54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C58u;
        goto label_300c58;
    }
    ctx->pc = 0x300C50u;
    SET_GPR_U32(ctx, 31, 0x300C58u);
    ctx->pc = 0x300C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C50u;
    // 0x300c54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x300C50u, 0x300C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C58u;
label_300c58:
    // 0x300c58: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x300c58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_300c5c:
    // 0x300c5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x300c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300c60:
    // 0x300c60: 0x0  nop
    ctx->pc = 0x300c60u;
    // NOP
label_300c64:
    // 0x300c64: 0x45030072  bc1tl       . + 4 + (0x72 << 2)
label_300c68:
    if (ctx->pc == 0x300C68u) {
        ctx->pc = 0x300C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C64u;
        // 0x300c68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C6Cu;
        goto label_300c6c;
    }
    ctx->pc = 0x300C64u;
    {
        const bool branch_taken_0x300c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300c64) {
            ctx->pc = 0x300C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C64u;
            // 0x300c68: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300C6Cu;
label_300c6c:
    // 0x300c6c: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x300c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_300c70:
    // 0x300c70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_300c74:
    // 0x300c74: 0xc0e409a  jal         func_390268
label_300c78:
    if (ctx->pc == 0x300C78u) {
        ctx->pc = 0x300C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C74u;
        // 0x300c78: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C7Cu;
        goto label_300c7c;
    }
    ctx->pc = 0x300C74u;
    SET_GPR_U32(ctx, 31, 0x300C7Cu);
    ctx->pc = 0x300C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C74u;
    // 0x300c78: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x300C74u, 0x300C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C7Cu;
label_300c7c:
    // 0x300c7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300c80:
    // 0x300c80: 0x5220006b  beql        $s1, $zero, . + 4 + (0x6B << 2)
label_300c84:
    if (ctx->pc == 0x300C84u) {
        ctx->pc = 0x300C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C80u;
        // 0x300c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C88u;
        goto label_300c88;
    }
    ctx->pc = 0x300C80u;
    {
        const bool branch_taken_0x300c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c80) {
            ctx->pc = 0x300C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C80u;
            // 0x300c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300C88u;
label_300c88:
    // 0x300c88: 0xc087502  jal         func_21D408
label_300c8c:
    if (ctx->pc == 0x300C8Cu) {
        ctx->pc = 0x300C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C88u;
        // 0x300c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C90u;
        goto label_300c90;
    }
    ctx->pc = 0x300C88u;
    SET_GPR_U32(ctx, 31, 0x300C90u);
    ctx->pc = 0x300C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C88u;
    // 0x300c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x300C88u, 0x300C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C90u;
label_300c90:
    // 0x300c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300c94:
    // 0x300c94: 0xc0a408c  jal         func_290230
label_300c98:
    if (ctx->pc == 0x300C98u) {
        ctx->pc = 0x300C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C94u;
        // 0x300c98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300C9Cu;
        goto label_300c9c;
    }
    ctx->pc = 0x300C94u;
    SET_GPR_U32(ctx, 31, 0x300C9Cu);
    ctx->pc = 0x300C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C94u;
    // 0x300c98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x300C94u, 0x300C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C9Cu;
label_300c9c:
    // 0x300c9c: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
label_300ca0:
    if (ctx->pc == 0x300CA0u) {
        ctx->pc = 0x300CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C9Cu;
        // 0x300ca0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CA4u;
        goto label_300ca4;
    }
    ctx->pc = 0x300C9Cu;
    {
        const bool branch_taken_0x300c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300c9c) {
            ctx->pc = 0x300CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C9Cu;
            // 0x300ca0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300CA4u;
label_300ca4:
    // 0x300ca4: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x300ca4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_300ca8:
    // 0x300ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300cac:
    // 0x300cac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x300cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300cb0:
    // 0x300cb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300cb4:
    // 0x300cb4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x300cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_300cb8:
    // 0x300cb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x300cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300cbc:
    // 0x300cbc: 0xc0888dc  jal         func_222370
label_300cc0:
    if (ctx->pc == 0x300CC0u) {
        ctx->pc = 0x300CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CBCu;
        // 0x300cc0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CC4u;
        goto label_300cc4;
    }
    ctx->pc = 0x300CBCu;
    SET_GPR_U32(ctx, 31, 0x300CC4u);
    ctx->pc = 0x300CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300CBCu;
    // 0x300cc0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x300CBCu, 0x300CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CC4u;
label_300cc4:
    // 0x300cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300cc8:
    // 0x300cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300ccc:
    // 0x300ccc: 0x56020058  bnel        $s0, $v0, . + 4 + (0x58 << 2)
label_300cd0:
    if (ctx->pc == 0x300CD0u) {
        ctx->pc = 0x300CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CCCu;
        // 0x300cd0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CD4u;
        goto label_300cd4;
    }
    ctx->pc = 0x300CCCu;
    {
        const bool branch_taken_0x300ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300ccc) {
            ctx->pc = 0x300CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CCCu;
            // 0x300cd0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300CD4u;
label_300cd4:
    // 0x300cd4: 0xc0c080e  jal         func_302038
label_300cd8:
    if (ctx->pc == 0x300CD8u) {
        ctx->pc = 0x300CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CD4u;
        // 0x300cd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CDCu;
        goto label_300cdc;
    }
    ctx->pc = 0x300CD4u;
    SET_GPR_U32(ctx, 31, 0x300CDCu);
    ctx->pc = 0x300CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300CD4u;
    // 0x300cd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x300CD4u, 0x300CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CDCu;
label_300cdc:
    // 0x300cdc: 0x54500054  bnel        $v0, $s0, . + 4 + (0x54 << 2)
label_300ce0:
    if (ctx->pc == 0x300CE0u) {
        ctx->pc = 0x300CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CDCu;
        // 0x300ce0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CE4u;
        goto label_300ce4;
    }
    ctx->pc = 0x300CDCu;
    {
        const bool branch_taken_0x300cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x300cdc) {
            ctx->pc = 0x300CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CDCu;
            // 0x300ce0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300E30u;
            goto label_300e30;
        }
    }
    ctx->pc = 0x300CE4u;
label_300ce4:
    // 0x300ce4: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x300ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_300ce8:
    // 0x300ce8: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_300cec:
    if (ctx->pc == 0x300CECu) {
        ctx->pc = 0x300CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CE8u;
        // 0x300cec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CF0u;
        goto label_300cf0;
    }
    ctx->pc = 0x300CE8u;
    {
        const bool branch_taken_0x300ce8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300ce8) {
            ctx->pc = 0x300CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CE8u;
            // 0x300cec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300D34u;
            goto label_300d34;
        }
    }
    ctx->pc = 0x300CF0u;
label_300cf0:
    // 0x300cf0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_300cf4:
    if (ctx->pc == 0x300CF4u) {
        ctx->pc = 0x300CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CF0u;
        // 0x300cf4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300CF8u;
        goto label_300cf8;
    }
    ctx->pc = 0x300CF0u;
    {
        const bool branch_taken_0x300cf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x300CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CF0u;
        // 0x300cf4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cf0) {
            ctx->pc = 0x300D04u;
            goto label_300d04;
        }
    }
    ctx->pc = 0x300CF8u;
label_300cf8:
    // 0x300cf8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x300cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_300cfc:
    // 0x300cfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_300d00:
    if (ctx->pc == 0x300D00u) {
        ctx->pc = 0x300D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CFCu;
        // 0x300d00: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D04u;
        goto label_300d04;
    }
    ctx->pc = 0x300CFCu;
    {
        const bool branch_taken_0x300cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CFCu;
        // 0x300d00: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cfc) {
            ctx->pc = 0x300D08u;
            goto label_300d08;
        }
    }
    ctx->pc = 0x300D04u;
label_300d04:
    // 0x300d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300d08:
    // 0x300d08: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x300d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_300d0c:
    // 0x300d0c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x300d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_300d10:
    // 0x300d10: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_300d14:
    // 0x300d14: 0x40f809  jalr        $v0
label_300d18:
    if (ctx->pc == 0x300D18u) {
        ctx->pc = 0x300D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D14u;
        // 0x300d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D1Cu;
        goto label_300d1c;
    }
    ctx->pc = 0x300D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300D1Cu);
        ctx->pc = 0x300D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D14u;
        // 0x300d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D14u, 0x300D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300D1Cu;
label_300d1c:
    // 0x300d1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300d20:
    // 0x300d20: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_300d24:
    if (ctx->pc == 0x300D24u) {
        ctx->pc = 0x300D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D20u;
        // 0x300d24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D28u;
        goto label_300d28;
    }
    ctx->pc = 0x300D20u;
    {
        const bool branch_taken_0x300d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x300D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D20u;
        // 0x300d24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d20) {
            ctx->pc = 0x300D34u;
            goto label_300d34;
        }
    }
    ctx->pc = 0x300D28u;
label_300d28:
    // 0x300d28: 0xc0a35f6  jal         func_28D7D8
label_300d2c:
    if (ctx->pc == 0x300D2Cu) {
        ctx->pc = 0x300D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D28u;
        // 0x300d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D30u;
        goto label_300d30;
    }
    ctx->pc = 0x300D28u;
    SET_GPR_U32(ctx, 31, 0x300D30u);
    ctx->pc = 0x300D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D28u;
    // 0x300d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x300D28u, 0x300D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D30u;
label_300d30:
    // 0x300d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300d34:
    // 0x300d34: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x300d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_300d38:
    // 0x300d38: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x300d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_300d3c:
    // 0x300d3c: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x300d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_300d40:
    // 0x300d40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x300d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300d44:
    // 0x300d44: 0xc0c0846  jal         func_302118
label_300d48:
    if (ctx->pc == 0x300D48u) {
        ctx->pc = 0x300D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D44u;
        // 0x300d48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D4Cu;
        goto label_300d4c;
    }
    ctx->pc = 0x300D44u;
    SET_GPR_U32(ctx, 31, 0x300D4Cu);
    ctx->pc = 0x300D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D44u;
    // 0x300d48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x300D44u, 0x300D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D4Cu;
label_300d4c:
    // 0x300d4c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x300d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_300d50:
    // 0x300d50: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x300d50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_300d54:
    // 0x300d54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300d58:
    // 0x300d58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300d5c:
    // 0x300d5c: 0xc0a3464  jal         func_28D190
label_300d60:
    if (ctx->pc == 0x300D60u) {
        ctx->pc = 0x300D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D5Cu;
        // 0x300d60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D64u;
        goto label_300d64;
    }
    ctx->pc = 0x300D5Cu;
    SET_GPR_U32(ctx, 31, 0x300D64u);
    ctx->pc = 0x300D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D5Cu;
    // 0x300d60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x300D5Cu, 0x300D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D64u;
label_300d64:
    // 0x300d64: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
label_300d68:
    if (ctx->pc == 0x300D68u) {
        ctx->pc = 0x300D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D64u;
        // 0x300d68: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D6Cu;
        goto label_300d6c;
    }
    ctx->pc = 0x300D64u;
    {
        const bool branch_taken_0x300d64 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x300D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D64u;
        // 0x300d68: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d64) {
            ctx->pc = 0x300DB4u;
            goto label_300db4;
        }
    }
    ctx->pc = 0x300D6Cu;
label_300d6c:
    // 0x300d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300d70:
    // 0x300d70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300d74:
    // 0x300d74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300d78:
    // 0x300d78: 0x40f809  jalr        $v0
label_300d7c:
    if (ctx->pc == 0x300D7Cu) {
        ctx->pc = 0x300D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D78u;
        // 0x300d7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D80u;
        goto label_300d80;
    }
    ctx->pc = 0x300D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300D80u);
        ctx->pc = 0x300D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D78u;
        // 0x300d7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D78u, 0x300D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300D80u;
label_300d80:
    // 0x300d80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300d84:
    // 0x300d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300d88:
    // 0x300d88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300d8c:
    // 0x300d8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300d90:
    // 0x300d90: 0x40f809  jalr        $v0
label_300d94:
    if (ctx->pc == 0x300D94u) {
        ctx->pc = 0x300D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D90u;
        // 0x300d94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300D98u;
        goto label_300d98;
    }
    ctx->pc = 0x300D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300D98u);
        ctx->pc = 0x300D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D90u;
        // 0x300d94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D90u, 0x300D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300D98u;
label_300d98:
    // 0x300d98: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x300d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_300d9c:
    // 0x300d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300da0:
    // 0x300da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300da4:
    // 0x300da4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x300da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300da8:
    // 0x300da8: 0xc0b11c4  jal         func_2C4710
label_300dac:
    if (ctx->pc == 0x300DACu) {
        ctx->pc = 0x300DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DA8u;
        // 0x300dac: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300DB0u;
        goto label_300db0;
    }
    ctx->pc = 0x300DA8u;
    SET_GPR_U32(ctx, 31, 0x300DB0u);
    ctx->pc = 0x300DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DA8u;
    // 0x300dac: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x300DA8u, 0x300DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DB0u;
label_300db0:
    // 0x300db0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x300db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300db4:
    // 0x300db4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300db8:
    // 0x300db8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300dbc:
    // 0x300dbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300dc0:
    // 0x300dc0: 0x40f809  jalr        $v0
label_300dc4:
    if (ctx->pc == 0x300DC4u) {
        ctx->pc = 0x300DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DC0u;
        // 0x300dc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300DC8u;
        goto label_300dc8;
    }
    ctx->pc = 0x300DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300DC8u);
        ctx->pc = 0x300DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DC0u;
        // 0x300dc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300DC0u, 0x300DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300DC8u;
label_300dc8:
    // 0x300dc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x300dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_300dcc:
    // 0x300dcc: 0xc10587a  jal         func_4161E8
label_300dd0:
    if (ctx->pc == 0x300DD0u) {
        ctx->pc = 0x300DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DCCu;
        // 0x300dd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300DD4u;
        goto label_300dd4;
    }
    ctx->pc = 0x300DCCu;
    SET_GPR_U32(ctx, 31, 0x300DD4u);
    ctx->pc = 0x300DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DCCu;
    // 0x300dd0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x300DCCu, 0x300DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DD4u;
label_300dd4:
    // 0x300dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300dd8:
    // 0x300dd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ddc:
    // 0x300ddc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300de0:
    // 0x300de0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300de4:
    // 0x300de4: 0x40f809  jalr        $v0
label_300de8:
    if (ctx->pc == 0x300DE8u) {
        ctx->pc = 0x300DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DE4u;
        // 0x300de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300DECu;
        goto label_300dec;
    }
    ctx->pc = 0x300DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300DECu);
        ctx->pc = 0x300DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DE4u;
        // 0x300de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300DE4u, 0x300DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300DECu;
label_300dec:
    // 0x300dec: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x300decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_300df0:
    // 0x300df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300df4:
    // 0x300df4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x300df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_300df8:
    // 0x300df8: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x300df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_300dfc:
    // 0x300dfc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x300dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_300e00:
    // 0x300e00: 0x8c71bd30  lw          $s1, -0x42D0($v1)
    ctx->pc = 0x300e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_300e04:
    // 0x300e04: 0x40f809  jalr        $v0
label_300e08:
    if (ctx->pc == 0x300E08u) {
        ctx->pc = 0x300E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E04u;
        // 0x300e08: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E0Cu;
        goto label_300e0c;
    }
    ctx->pc = 0x300E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300E0Cu);
        ctx->pc = 0x300E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E04u;
        // 0x300e08: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300E04u, 0x300E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300E0Cu;
label_300e0c:
    // 0x300e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300e10:
    // 0x300e10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x300e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300e14:
    // 0x300e14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x300e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300e18:
    // 0x300e18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x300e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300e1c:
    // 0x300e1c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x300e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300e20:
    // 0x300e20: 0xc0b1018  jal         func_2C4060
label_300e24:
    if (ctx->pc == 0x300E24u) {
        ctx->pc = 0x300E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E20u;
        // 0x300e24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E28u;
        goto label_300e28;
    }
    ctx->pc = 0x300E20u;
    SET_GPR_U32(ctx, 31, 0x300E28u);
    ctx->pc = 0x300E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E20u;
    // 0x300e24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x300E20u, 0x300E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E28u;
label_300e28:
    // 0x300e28: 0x10000007  b           . + 4 + (0x7 << 2)
label_300e2c:
    if (ctx->pc == 0x300E2Cu) {
        ctx->pc = 0x300E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E28u;
        // 0x300e2c: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E30u;
        goto label_300e30;
    }
    ctx->pc = 0x300E28u;
    {
        const bool branch_taken_0x300e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E28u;
        // 0x300e2c: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e28) {
            ctx->pc = 0x300E48u;
            goto label_300e48;
        }
    }
    ctx->pc = 0x300E30u;
label_300e30:
    // 0x300e30: 0xc10574c  jal         func_415D30
label_300e34:
    if (ctx->pc == 0x300E34u) {
        ctx->pc = 0x300E38u;
        goto label_300e38;
    }
    ctx->pc = 0x300E30u;
    SET_GPR_U32(ctx, 31, 0x300E38u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x300E30u, 0x300E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E38u;
label_300e38:
    // 0x300e38: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x300e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_300e3c:
    // 0x300e3c: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_300e40:
    if (ctx->pc == 0x300E40u) {
        ctx->pc = 0x300E44u;
        goto label_300e44;
    }
    ctx->pc = 0x300E3Cu;
    {
        const bool branch_taken_0x300e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300e3c) {
            ctx->pc = 0x300BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300be8;
        }
    }
    ctx->pc = 0x300E44u;
label_300e44:
    // 0x300e44: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x300e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_300e48:
    // 0x300e48: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x300e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_300e4c:
    // 0x300e4c: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_300e50:
    if (ctx->pc == 0x300E50u) {
        ctx->pc = 0x300E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E4Cu;
        // 0x300e50: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E54u;
        goto label_300e54;
    }
    ctx->pc = 0x300E4Cu;
    {
        const bool branch_taken_0x300e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300e4c) {
            ctx->pc = 0x300E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300E4Cu;
            // 0x300e50: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30103Cu;
            goto label_30103c;
        }
    }
    ctx->pc = 0x300E54u;
label_300e54:
    // 0x300e54: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x300e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300e58:
    // 0x300e58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x300e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300e5c:
    // 0x300e5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x300e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_300e60:
    // 0x300e60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300e64:
    // 0x300e64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300e68:
    // 0x300e68: 0x40f809  jalr        $v0
label_300e6c:
    if (ctx->pc == 0x300E6Cu) {
        ctx->pc = 0x300E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E68u;
        // 0x300e6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E70u;
        goto label_300e70;
    }
    ctx->pc = 0x300E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300E70u);
        ctx->pc = 0x300E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E68u;
        // 0x300e6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300E68u, 0x300E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300E70u;
label_300e70:
    // 0x300e70: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x300e70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300e74:
    // 0x300e74: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x300e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_300e78:
    // 0x300e78: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x300e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_300e7c:
    // 0x300e7c: 0x5860006f  blezl       $v1, . + 4 + (0x6F << 2)
label_300e80:
    if (ctx->pc == 0x300E80u) {
        ctx->pc = 0x300E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E7Cu;
        // 0x300e80: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E84u;
        goto label_300e84;
    }
    ctx->pc = 0x300E7Cu;
    {
        const bool branch_taken_0x300e7c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x300e7c) {
            ctx->pc = 0x300E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300E7Cu;
            // 0x300e80: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30103Cu;
            goto label_30103c;
        }
    }
    ctx->pc = 0x300E84u;
label_300e84:
    // 0x300e84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x300e84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300e88:
    // 0x300e88: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_300e8c:
    // 0x300e8c: 0x0  nop
    ctx->pc = 0x300e8cu;
    // NOP
label_300e90:
    // 0x300e90: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x300e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_300e94:
    // 0x300e94: 0xc0e409a  jal         func_390268
label_300e98:
    if (ctx->pc == 0x300E98u) {
        ctx->pc = 0x300E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E94u;
        // 0x300e98: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300E9Cu;
        goto label_300e9c;
    }
    ctx->pc = 0x300E94u;
    SET_GPR_U32(ctx, 31, 0x300E9Cu);
    ctx->pc = 0x300E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E94u;
    // 0x300e98: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x300E94u, 0x300E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E9Cu;
label_300e9c:
    // 0x300e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ea0:
    // 0x300ea0: 0xc08a17e  jal         func_2285F8
label_300ea4:
    if (ctx->pc == 0x300EA4u) {
        ctx->pc = 0x300EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EA0u;
        // 0x300ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EA8u;
        goto label_300ea8;
    }
    ctx->pc = 0x300EA0u;
    SET_GPR_U32(ctx, 31, 0x300EA8u);
    ctx->pc = 0x300EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EA0u;
    // 0x300ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x300EA0u, 0x300EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EA8u;
label_300ea8:
    // 0x300ea8: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
label_300eac:
    if (ctx->pc == 0x300EACu) {
        ctx->pc = 0x300EB0u;
        goto label_300eb0;
    }
    ctx->pc = 0x300EA8u;
    {
        const bool branch_taken_0x300ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x300ea8) {
            ctx->pc = 0x300EC0u;
            goto label_300ec0;
        }
    }
    ctx->pc = 0x300EB0u;
label_300eb0:
    // 0x300eb0: 0xc08a170  jal         func_2285C0
label_300eb4:
    if (ctx->pc == 0x300EB4u) {
        ctx->pc = 0x300EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EB0u;
        // 0x300eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EB8u;
        goto label_300eb8;
    }
    ctx->pc = 0x300EB0u;
    SET_GPR_U32(ctx, 31, 0x300EB8u);
    ctx->pc = 0x300EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EB0u;
    // 0x300eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x300EB0u, 0x300EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EB8u;
label_300eb8:
    // 0x300eb8: 0x1456005a  bne         $v0, $s6, . + 4 + (0x5A << 2)
label_300ebc:
    if (ctx->pc == 0x300EBCu) {
        ctx->pc = 0x300EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EB8u;
        // 0x300ebc: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EC0u;
        goto label_300ec0;
    }
    ctx->pc = 0x300EB8u;
    {
        const bool branch_taken_0x300eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x300EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EB8u;
        // 0x300ebc: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300eb8) {
            ctx->pc = 0x301024u;
            goto label_301024;
        }
    }
    ctx->pc = 0x300EC0u;
label_300ec0:
    // 0x300ec0: 0xc0c080e  jal         func_302038
label_300ec4:
    if (ctx->pc == 0x300EC4u) {
        ctx->pc = 0x300EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EC0u;
        // 0x300ec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EC8u;
        goto label_300ec8;
    }
    ctx->pc = 0x300EC0u;
    SET_GPR_U32(ctx, 31, 0x300EC8u);
    ctx->pc = 0x300EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EC0u;
    // 0x300ec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x300EC0u, 0x300EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EC8u;
label_300ec8:
    // 0x300ec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ecc:
    // 0x300ecc: 0x16560055  bne         $s2, $s6, . + 4 + (0x55 << 2)
label_300ed0:
    if (ctx->pc == 0x300ED0u) {
        ctx->pc = 0x300ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ECCu;
        // 0x300ed0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300ED4u;
        goto label_300ed4;
    }
    ctx->pc = 0x300ECCu;
    {
        const bool branch_taken_0x300ecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x300ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ECCu;
        // 0x300ed0: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ecc) {
            ctx->pc = 0x301024u;
            goto label_301024;
        }
    }
    ctx->pc = 0x300ED4u;
label_300ed4:
    // 0x300ed4: 0xc695012c  lwc1        $f21, 0x12C($s4)
    ctx->pc = 0x300ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_300ed8:
    // 0x300ed8: 0xc0a2fc0  jal         func_28BF00
label_300edc:
    if (ctx->pc == 0x300EDCu) {
        ctx->pc = 0x300EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ED8u;
        // 0x300edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EE0u;
        goto label_300ee0;
    }
    ctx->pc = 0x300ED8u;
    SET_GPR_U32(ctx, 31, 0x300EE0u);
    ctx->pc = 0x300EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300ED8u;
    // 0x300edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x300ED8u, 0x300EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EE0u;
label_300ee0:
    // 0x300ee0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x300ee0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_300ee4:
    // 0x300ee4: 0xc0a2fc0  jal         func_28BF00
label_300ee8:
    if (ctx->pc == 0x300EE8u) {
        ctx->pc = 0x300EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EE4u;
        // 0x300ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300EECu;
        goto label_300eec;
    }
    ctx->pc = 0x300EE4u;
    SET_GPR_U32(ctx, 31, 0x300EECu);
    ctx->pc = 0x300EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EE4u;
    // 0x300ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x300EE4u, 0x300EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EECu;
label_300eec:
    // 0x300eec: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x300eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_300ef0:
    // 0x300ef0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_300ef4:
    // 0x300ef4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x300ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_300ef8:
    // 0x300ef8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x300ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_300efc:
    // 0x300efc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x300efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_300f00:
    // 0x300f00: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x300f00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_300f04:
    // 0x300f04: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x300f04u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_300f08:
    // 0x300f08: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x300f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_300f0c:
    // 0x300f0c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x300f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_300f10:
    // 0x300f10: 0xc0888fa  jal         func_2223E8
label_300f14:
    if (ctx->pc == 0x300F14u) {
        ctx->pc = 0x300F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F10u;
        // 0x300f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F18u;
        goto label_300f18;
    }
    ctx->pc = 0x300F10u;
    SET_GPR_U32(ctx, 31, 0x300F18u);
    ctx->pc = 0x300F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F10u;
    // 0x300f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x300F10u, 0x300F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F18u;
label_300f18:
    // 0x300f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300f1c:
    // 0x300f1c: 0x16120041  bne         $s0, $s2, . + 4 + (0x41 << 2)
label_300f20:
    if (ctx->pc == 0x300F20u) {
        ctx->pc = 0x300F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F1Cu;
        // 0x300f20: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F24u;
        goto label_300f24;
    }
    ctx->pc = 0x300F1Cu;
    {
        const bool branch_taken_0x300f1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x300F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F1Cu;
        // 0x300f20: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f1c) {
            ctx->pc = 0x301024u;
            goto label_301024;
        }
    }
    ctx->pc = 0x300F24u;
label_300f24:
    // 0x300f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300f28:
    // 0x300f28: 0xc08a17e  jal         func_2285F8
label_300f2c:
    if (ctx->pc == 0x300F2Cu) {
        ctx->pc = 0x300F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F28u;
        // 0x300f2c: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F30u;
        goto label_300f30;
    }
    ctx->pc = 0x300F28u;
    SET_GPR_U32(ctx, 31, 0x300F30u);
    ctx->pc = 0x300F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F28u;
    // 0x300f2c: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x300F28u, 0x300F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F30u;
label_300f30:
    // 0x300f30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300f34:
    // 0x300f34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x300f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_300f38:
    // 0x300f38: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x300f38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
label_300f3c:
    // 0x300f3c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x300f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_300f40:
    // 0x300f40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x300f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_300f44:
    // 0x300f44: 0x40f809  jalr        $v0
label_300f48:
    if (ctx->pc == 0x300F48u) {
        ctx->pc = 0x300F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F44u;
        // 0x300f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F4Cu;
        goto label_300f4c;
    }
    ctx->pc = 0x300F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300F4Cu);
        ctx->pc = 0x300F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F44u;
        // 0x300f48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300F44u, 0x300F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300F4Cu;
label_300f4c:
    // 0x300f4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300f50:
    // 0x300f50: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x300f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_300f54:
    // 0x300f54: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_300f58:
    if (ctx->pc == 0x300F58u) {
        ctx->pc = 0x300F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F54u;
        // 0x300f58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F5Cu;
        goto label_300f5c;
    }
    ctx->pc = 0x300F54u;
    {
        const bool branch_taken_0x300f54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300f54) {
            ctx->pc = 0x300F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300F54u;
            // 0x300f58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300FA0u;
            goto label_300fa0;
        }
    }
    ctx->pc = 0x300F5Cu;
label_300f5c:
    // 0x300f5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_300f60:
    if (ctx->pc == 0x300F60u) {
        ctx->pc = 0x300F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F5Cu;
        // 0x300f60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F64u;
        goto label_300f64;
    }
    ctx->pc = 0x300F5Cu;
    {
        const bool branch_taken_0x300f5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x300F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F5Cu;
        // 0x300f60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f5c) {
            ctx->pc = 0x300F70u;
            goto label_300f70;
        }
    }
    ctx->pc = 0x300F64u;
label_300f64:
    // 0x300f64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x300f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_300f68:
    // 0x300f68: 0x10000002  b           . + 4 + (0x2 << 2)
label_300f6c:
    if (ctx->pc == 0x300F6Cu) {
        ctx->pc = 0x300F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F68u;
        // 0x300f6c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F70u;
        goto label_300f70;
    }
    ctx->pc = 0x300F68u;
    {
        const bool branch_taken_0x300f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F68u;
        // 0x300f6c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f68) {
            ctx->pc = 0x300F74u;
            goto label_300f74;
        }
    }
    ctx->pc = 0x300F70u;
label_300f70:
    // 0x300f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300f74:
    // 0x300f74: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x300f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_300f78:
    // 0x300f78: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x300f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_300f7c:
    // 0x300f7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_300f80:
    // 0x300f80: 0x40f809  jalr        $v0
label_300f84:
    if (ctx->pc == 0x300F84u) {
        ctx->pc = 0x300F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F80u;
        // 0x300f84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F88u;
        goto label_300f88;
    }
    ctx->pc = 0x300F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x300F88u);
        ctx->pc = 0x300F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F80u;
        // 0x300f84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300F80u, 0x300F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x300F88u;
label_300f88:
    // 0x300f88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300f8c:
    // 0x300f8c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_300f90:
    if (ctx->pc == 0x300F90u) {
        ctx->pc = 0x300F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F8Cu;
        // 0x300f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F94u;
        goto label_300f94;
    }
    ctx->pc = 0x300F8Cu;
    {
        const bool branch_taken_0x300f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x300F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F8Cu;
        // 0x300f90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f8c) {
            ctx->pc = 0x300FA0u;
            goto label_300fa0;
        }
    }
    ctx->pc = 0x300F94u;
label_300f94:
    // 0x300f94: 0xc0a35f6  jal         func_28D7D8
label_300f98:
    if (ctx->pc == 0x300F98u) {
        ctx->pc = 0x300F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F94u;
        // 0x300f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300F9Cu;
        goto label_300f9c;
    }
    ctx->pc = 0x300F94u;
    SET_GPR_U32(ctx, 31, 0x300F9Cu);
    ctx->pc = 0x300F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F94u;
    // 0x300f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x300F94u, 0x300F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F9Cu;
label_300f9c:
    // 0x300f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300fa0:
    // 0x300fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x300fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300fa4:
    // 0x300fa4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x300fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_300fa8:
    // 0x300fa8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x300fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_300fac:
    // 0x300fac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x300facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300fb0:
    // 0x300fb0: 0xc0c0846  jal         func_302118
label_300fb4:
    if (ctx->pc == 0x300FB4u) {
        ctx->pc = 0x300FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FB0u;
        // 0x300fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300FB8u;
        goto label_300fb8;
    }
    ctx->pc = 0x300FB0u;
    SET_GPR_U32(ctx, 31, 0x300FB8u);
    ctx->pc = 0x300FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FB0u;
    // 0x300fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x300FB0u, 0x300FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FB8u;
label_300fb8:
    // 0x300fb8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x300fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_300fbc:
    // 0x300fbc: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x300fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_300fc0:
    // 0x300fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300fc4:
    // 0x300fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300fc8:
    // 0x300fc8: 0xc0a3464  jal         func_28D190
label_300fcc:
    if (ctx->pc == 0x300FCCu) {
        ctx->pc = 0x300FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FC8u;
        // 0x300fcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x300FD0u;
        goto label_300fd0;
    }
    ctx->pc = 0x300FC8u;
    SET_GPR_U32(ctx, 31, 0x300FD0u);
    ctx->pc = 0x300FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FC8u;
    // 0x300fcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x300FC8u, 0x300FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FD0u;
label_300fd0:
    // 0x300fd0: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
label_300fd4:
    if (ctx->pc == 0x300FD4u) {
        ctx->pc = 0x300FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FD0u;
        // 0x300fd4: 0x8fa80028  lw          $t0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300FD8u;
        goto label_300fd8;
    }
    ctx->pc = 0x300FD0u;
    {
        const bool branch_taken_0x300fd0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x300FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FD0u;
        // 0x300fd4: 0x8fa80028  lw          $t0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300fd0) {
            ctx->pc = 0x300FECu;
            goto label_300fec;
        }
    }
    ctx->pc = 0x300FD8u;
label_300fd8:
    // 0x300fd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x300fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300fdc:
    // 0x300fdc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x300fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_300fe0:
    // 0x300fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300fe4:
    // 0x300fe4: 0xc0b11c4  jal         func_2C4710
label_300fe8:
    if (ctx->pc == 0x300FE8u) {
        ctx->pc = 0x300FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300FE4u;
        // 0x300fe8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x300FECu;
        goto label_300fec;
    }
    ctx->pc = 0x300FE4u;
    SET_GPR_U32(ctx, 31, 0x300FECu);
    ctx->pc = 0x300FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FE4u;
    // 0x300fe8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x300FE4u, 0x300FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FECu;
label_300fec:
    // 0x300fec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x300fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_300ff0:
    // 0x300ff0: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x300ff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_300ff4:
    // 0x300ff4: 0x8c48bd30  lw          $t0, -0x42D0($v0)
    ctx->pc = 0x300ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_300ff8:
    // 0x300ff8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x300ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_300ffc:
    // 0x300ffc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x300ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_301000:
    // 0x301000: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x301000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_301004:
    // 0x301004: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x301004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_301008:
    // 0x301008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x301008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30100c:
    // 0x30100c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x30100cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_301010:
    // 0x301010: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x301010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301014:
    // 0x301014: 0xc0b1018  jal         func_2C4060
label_301018:
    if (ctx->pc == 0x301018u) {
        ctx->pc = 0x301018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301014u;
        // 0x301018: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30101Cu;
        goto label_30101c;
    }
    ctx->pc = 0x301014u;
    SET_GPR_U32(ctx, 31, 0x30101Cu);
    ctx->pc = 0x301018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301014u;
    // 0x301018: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x301014u, 0x30101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30101Cu;
label_30101c:
    // 0x30101c: 0x10000007  b           . + 4 + (0x7 << 2)
label_301020:
    if (ctx->pc == 0x301020u) {
        ctx->pc = 0x301020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30101Cu;
        // 0x301020: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301024u;
        goto label_301024;
    }
    ctx->pc = 0x30101Cu;
    {
        const bool branch_taken_0x30101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30101Cu;
        // 0x301020: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30101c) {
            ctx->pc = 0x30103Cu;
            goto label_30103c;
        }
    }
    ctx->pc = 0x301024u;
label_301024:
    // 0x301024: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x301024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_301028:
    // 0x301028: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x301028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_30102c:
    // 0x30102c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x30102cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_301030:
    // 0x301030: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_301034:
    if (ctx->pc == 0x301034u) {
        ctx->pc = 0x301034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301030u;
        // 0x301034: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301038u;
        goto label_301038;
    }
    ctx->pc = 0x301030u;
    {
        const bool branch_taken_0x301030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301030u;
        // 0x301034: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301030) {
            ctx->pc = 0x300E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300e90;
        }
    }
    ctx->pc = 0x301038u;
label_301038:
    // 0x301038: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x301038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_30103c:
    // 0x30103c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x30103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_301040:
    // 0x301040: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_301044:
    if (ctx->pc == 0x301044u) {
        ctx->pc = 0x301044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301040u;
        // 0x301044: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301048u;
        goto label_301048;
    }
    ctx->pc = 0x301040u;
    {
        const bool branch_taken_0x301040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301040u;
        // 0x301044: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301040) {
            ctx->pc = 0x301214u;
            goto label_301214;
        }
    }
    ctx->pc = 0x301048u;
label_301048:
    // 0x301048: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x301048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30104c:
    // 0x30104c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30104cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301050:
    // 0x301050: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x301050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301054:
    // 0x301054: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301058:
    // 0x301058: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30105c:
    // 0x30105c: 0x40f809  jalr        $v0
label_301060:
    if (ctx->pc == 0x301060u) {
        ctx->pc = 0x301060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30105Cu;
        // 0x301060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301064u;
        goto label_301064;
    }
    ctx->pc = 0x30105Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301064u);
        ctx->pc = 0x301060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30105Cu;
        // 0x301060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30105Cu, 0x301064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301064u;
label_301064:
    // 0x301064: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301068:
    // 0x301068: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x301068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_30106c:
    // 0x30106c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x30106cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_301070:
    // 0x301070: 0x18600067  blez        $v1, . + 4 + (0x67 << 2)
label_301074:
    if (ctx->pc == 0x301074u) {
        ctx->pc = 0x301074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301070u;
        // 0x301074: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301078u;
        goto label_301078;
    }
    ctx->pc = 0x301070u;
    {
        const bool branch_taken_0x301070 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x301074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301070u;
        // 0x301074: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301070) {
            ctx->pc = 0x301210u;
            goto label_301210;
        }
    }
    ctx->pc = 0x301078u;
label_301078:
    // 0x301078: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x301078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_30107c:
    // 0x30107c: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_301080:
    // 0x301080: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x301080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_301084:
    // 0x301084: 0xc0e409a  jal         func_390268
label_301088:
    if (ctx->pc == 0x301088u) {
        ctx->pc = 0x301088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301084u;
        // 0x301088: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30108Cu;
        goto label_30108c;
    }
    ctx->pc = 0x301084u;
    SET_GPR_U32(ctx, 31, 0x30108Cu);
    ctx->pc = 0x301088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301084u;
    // 0x301088: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x301084u, 0x30108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30108Cu;
label_30108c:
    // 0x30108c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30108cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301090:
    // 0x301090: 0xc089bfc  jal         func_226FF0
label_301094:
    if (ctx->pc == 0x301094u) {
        ctx->pc = 0x301094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301090u;
        // 0x301094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301098u;
        goto label_301098;
    }
    ctx->pc = 0x301090u;
    SET_GPR_U32(ctx, 31, 0x301098u);
    ctx->pc = 0x301094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301090u;
    // 0x301094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x301090u, 0x301098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301098u;
label_301098:
    // 0x301098: 0xc0e57ce  jal         func_395F38
label_30109c:
    if (ctx->pc == 0x30109Cu) {
        ctx->pc = 0x30109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301098u;
        // 0x30109c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010A0u;
        goto label_3010a0;
    }
    ctx->pc = 0x301098u;
    SET_GPR_U32(ctx, 31, 0x3010A0u);
    ctx->pc = 0x30109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301098u;
    // 0x30109c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x301098u, 0x3010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010A0u;
label_3010a0:
    // 0x3010a0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_3010a4:
    if (ctx->pc == 0x3010A4u) {
        ctx->pc = 0x3010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010A0u;
        // 0x3010a4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010A8u;
        goto label_3010a8;
    }
    ctx->pc = 0x3010A0u;
    {
        const bool branch_taken_0x3010a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010A0u;
        // 0x3010a4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010a0) {
            ctx->pc = 0x3011FCu;
            goto label_3011fc;
        }
    }
    ctx->pc = 0x3010A8u;
label_3010a8:
    // 0x3010a8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x3010a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_3010ac:
    // 0x3010ac: 0x3c023c4e  lui         $v0, 0x3C4E
    ctx->pc = 0x3010acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15438 << 16));
label_3010b0:
    // 0x3010b0: 0x3442590b  ori         $v0, $v0, 0x590B
    ctx->pc = 0x3010b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22795);
label_3010b4:
    // 0x3010b4: 0x14620051  bne         $v1, $v0, . + 4 + (0x51 << 2)
label_3010b8:
    if (ctx->pc == 0x3010B8u) {
        ctx->pc = 0x3010B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010B4u;
        // 0x3010b8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010BCu;
        goto label_3010bc;
    }
    ctx->pc = 0x3010B4u;
    {
        const bool branch_taken_0x3010b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3010B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010B4u;
        // 0x3010b8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010b4) {
            ctx->pc = 0x3011FCu;
            goto label_3011fc;
        }
    }
    ctx->pc = 0x3010BCu;
label_3010bc:
    // 0x3010bc: 0xc0c080e  jal         func_302038
label_3010c0:
    if (ctx->pc == 0x3010C0u) {
        ctx->pc = 0x3010C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010BCu;
        // 0x3010c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010C4u;
        goto label_3010c4;
    }
    ctx->pc = 0x3010BCu;
    SET_GPR_U32(ctx, 31, 0x3010C4u);
    ctx->pc = 0x3010C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010BCu;
    // 0x3010c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x3010BCu, 0x3010C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010C4u;
label_3010c4:
    // 0x3010c4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_3010c8:
    if (ctx->pc == 0x3010C8u) {
        ctx->pc = 0x3010C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010C4u;
        // 0x3010c8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010CCu;
        goto label_3010cc;
    }
    ctx->pc = 0x3010C4u;
    {
        const bool branch_taken_0x3010c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010C4u;
        // 0x3010c8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010c4) {
            ctx->pc = 0x3011FCu;
            goto label_3011fc;
        }
    }
    ctx->pc = 0x3010CCu;
label_3010cc:
    // 0x3010cc: 0xc695012c  lwc1        $f21, 0x12C($s4)
    ctx->pc = 0x3010ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3010d0:
    // 0x3010d0: 0xc0a2fc0  jal         func_28BF00
label_3010d4:
    if (ctx->pc == 0x3010D4u) {
        ctx->pc = 0x3010D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010D0u;
        // 0x3010d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010D8u;
        goto label_3010d8;
    }
    ctx->pc = 0x3010D0u;
    SET_GPR_U32(ctx, 31, 0x3010D8u);
    ctx->pc = 0x3010D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010D0u;
    // 0x3010d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x3010D0u, 0x3010D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010D8u;
label_3010d8:
    // 0x3010d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3010d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3010dc:
    // 0x3010dc: 0xc0a2fc0  jal         func_28BF00
label_3010e0:
    if (ctx->pc == 0x3010E0u) {
        ctx->pc = 0x3010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010DCu;
        // 0x3010e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3010E4u;
        goto label_3010e4;
    }
    ctx->pc = 0x3010DCu;
    SET_GPR_U32(ctx, 31, 0x3010E4u);
    ctx->pc = 0x3010E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3010DCu;
    // 0x3010e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x3010DCu, 0x3010E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010E4u;
label_3010e4:
    // 0x3010e4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3010e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3010e8:
    // 0x3010e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3010e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3010ec:
    // 0x3010ec: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3010ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3010f0:
    // 0x3010f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3010f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3010f4:
    // 0x3010f4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3010f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3010f8:
    // 0x3010f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3010f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3010fc:
    // 0x3010fc: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x3010fcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_301100:
    // 0x301100: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x301100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_301104:
    // 0x301104: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x301104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_301108:
    // 0x301108: 0xc0888fa  jal         func_2223E8
label_30110c:
    if (ctx->pc == 0x30110Cu) {
        ctx->pc = 0x30110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301108u;
        // 0x30110c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301110u;
        goto label_301110;
    }
    ctx->pc = 0x301108u;
    SET_GPR_U32(ctx, 31, 0x301110u);
    ctx->pc = 0x30110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301108u;
    // 0x30110c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x301108u, 0x301110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301110u;
label_301110:
    // 0x301110: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_301114:
    if (ctx->pc == 0x301114u) {
        ctx->pc = 0x301114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301110u;
        // 0x301114: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301118u;
        goto label_301118;
    }
    ctx->pc = 0x301110u;
    {
        const bool branch_taken_0x301110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301110u;
        // 0x301114: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301110) {
            ctx->pc = 0x3011FCu;
            goto label_3011fc;
        }
    }
    ctx->pc = 0x301118u;
label_301118:
    // 0x301118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x301118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30111c:
    // 0x30111c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30111cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301120:
    // 0x301120: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301124:
    // 0x301124: 0x40f809  jalr        $v0
label_301128:
    if (ctx->pc == 0x301128u) {
        ctx->pc = 0x301128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301124u;
        // 0x301128: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30112Cu;
        goto label_30112c;
    }
    ctx->pc = 0x301124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30112Cu);
        ctx->pc = 0x301128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301124u;
        // 0x301128: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301124u, 0x30112Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30112Cu;
label_30112c:
    // 0x30112c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30112cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301130:
    // 0x301130: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_301134:
    // 0x301134: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_301138:
    if (ctx->pc == 0x301138u) {
        ctx->pc = 0x301138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301134u;
        // 0x301138: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30113Cu;
        goto label_30113c;
    }
    ctx->pc = 0x301134u;
    {
        const bool branch_taken_0x301134 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x301134) {
            ctx->pc = 0x301138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301134u;
            // 0x301138: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301180u;
            goto label_301180;
        }
    }
    ctx->pc = 0x30113Cu;
label_30113c:
    // 0x30113c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_301140:
    if (ctx->pc == 0x301140u) {
        ctx->pc = 0x301140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30113Cu;
        // 0x301140: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301144u;
        goto label_301144;
    }
    ctx->pc = 0x30113Cu;
    {
        const bool branch_taken_0x30113c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30113Cu;
        // 0x301140: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30113c) {
            ctx->pc = 0x301150u;
            goto label_301150;
        }
    }
    ctx->pc = 0x301144u;
label_301144:
    // 0x301144: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x301144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_301148:
    // 0x301148: 0x10000002  b           . + 4 + (0x2 << 2)
label_30114c:
    if (ctx->pc == 0x30114Cu) {
        ctx->pc = 0x30114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301148u;
        // 0x30114c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301150u;
        goto label_301150;
    }
    ctx->pc = 0x301148u;
    {
        const bool branch_taken_0x301148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301148u;
        // 0x30114c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301148) {
            ctx->pc = 0x301154u;
            goto label_301154;
        }
    }
    ctx->pc = 0x301150u;
label_301150:
    // 0x301150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301154:
    // 0x301154: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x301154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_301158:
    // 0x301158: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x301158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30115c:
    // 0x30115c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_301160:
    // 0x301160: 0x40f809  jalr        $v0
label_301164:
    if (ctx->pc == 0x301164u) {
        ctx->pc = 0x301164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301160u;
        // 0x301164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301168u;
        goto label_301168;
    }
    ctx->pc = 0x301160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301168u);
        ctx->pc = 0x301164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301160u;
        // 0x301164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301160u, 0x301168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301168u;
label_301168:
    // 0x301168: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x301168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30116c:
    // 0x30116c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_301170:
    if (ctx->pc == 0x301170u) {
        ctx->pc = 0x301170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30116Cu;
        // 0x301170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301174u;
        goto label_301174;
    }
    ctx->pc = 0x30116Cu;
    {
        const bool branch_taken_0x30116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x301170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30116Cu;
        // 0x301170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30116c) {
            ctx->pc = 0x301180u;
            goto label_301180;
        }
    }
    ctx->pc = 0x301174u;
label_301174:
    // 0x301174: 0xc0a35f6  jal         func_28D7D8
label_301178:
    if (ctx->pc == 0x301178u) {
        ctx->pc = 0x301178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301174u;
        // 0x301178: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30117Cu;
        goto label_30117c;
    }
    ctx->pc = 0x301174u;
    SET_GPR_U32(ctx, 31, 0x30117Cu);
    ctx->pc = 0x301178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301174u;
    // 0x301178: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x301174u, 0x30117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30117Cu;
label_30117c:
    // 0x30117c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301180:
    // 0x301180: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x301180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_301184:
    // 0x301184: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x301184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_301188:
    // 0x301188: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x301188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_30118c:
    // 0x30118c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30118cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301190:
    // 0x301190: 0xc0c0846  jal         func_302118
label_301194:
    if (ctx->pc == 0x301194u) {
        ctx->pc = 0x301194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301190u;
        // 0x301194: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301198u;
        goto label_301198;
    }
    ctx->pc = 0x301190u;
    SET_GPR_U32(ctx, 31, 0x301198u);
    ctx->pc = 0x301194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301190u;
    // 0x301194: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x301190u, 0x301198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301198u;
label_301198:
    // 0x301198: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x301198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30119c:
    // 0x30119c: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x30119cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_3011a0:
    // 0x3011a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3011a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3011a4:
    // 0x3011a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3011a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3011a8:
    // 0x3011a8: 0xc0a3464  jal         func_28D190
label_3011ac:
    if (ctx->pc == 0x3011ACu) {
        ctx->pc = 0x3011ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011A8u;
        // 0x3011ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3011B0u;
        goto label_3011b0;
    }
    ctx->pc = 0x3011A8u;
    SET_GPR_U32(ctx, 31, 0x3011B0u);
    ctx->pc = 0x3011ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3011A8u;
    // 0x3011ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x3011A8u, 0x3011B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011B0u;
label_3011b0:
    // 0x3011b0: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
label_3011b4:
    if (ctx->pc == 0x3011B4u) {
        ctx->pc = 0x3011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011B0u;
        // 0x3011b4: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3011B8u;
        goto label_3011b8;
    }
    ctx->pc = 0x3011B0u;
    {
        const bool branch_taken_0x3011b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011B0u;
        // 0x3011b4: 0x8fa8002c  lw          $t0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011b0) {
            ctx->pc = 0x3011CCu;
            goto label_3011cc;
        }
    }
    ctx->pc = 0x3011B8u;
label_3011b8:
    // 0x3011b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3011b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3011bc:
    // 0x3011bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3011bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3011c0:
    // 0x3011c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3011c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3011c4:
    // 0x3011c4: 0xc0b11c4  jal         func_2C4710
label_3011c8:
    if (ctx->pc == 0x3011C8u) {
        ctx->pc = 0x3011C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011C4u;
        // 0x3011c8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3011CCu;
        goto label_3011cc;
    }
    ctx->pc = 0x3011C4u;
    SET_GPR_U32(ctx, 31, 0x3011CCu);
    ctx->pc = 0x3011C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3011C4u;
    // 0x3011c8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x3011C4u, 0x3011CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011CCu;
label_3011cc:
    // 0x3011cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3011d0:
    // 0x3011d0: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x3011d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_3011d4:
    // 0x3011d4: 0x8c48bd30  lw          $t0, -0x42D0($v0)
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3011d8:
    // 0x3011d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3011dc:
    // 0x3011dc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3011dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_3011e0:
    // 0x3011e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3011e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3011e4:
    // 0x3011e4: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x3011e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_3011e8:
    // 0x3011e8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3011e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3011ec:
    // 0x3011ec: 0xc0b1018  jal         func_2C4060
label_3011f0:
    if (ctx->pc == 0x3011F0u) {
        ctx->pc = 0x3011F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011ECu;
        // 0x3011f0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3011F4u;
        goto label_3011f4;
    }
    ctx->pc = 0x3011ECu;
    SET_GPR_U32(ctx, 31, 0x3011F4u);
    ctx->pc = 0x3011F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3011ECu;
    // 0x3011f0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x3011ECu, 0x3011F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3011F4u;
label_3011f4:
    // 0x3011f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3011f8:
    if (ctx->pc == 0x3011F8u) {
        ctx->pc = 0x3011F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011F4u;
        // 0x3011f8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3011FCu;
        goto label_3011fc;
    }
    ctx->pc = 0x3011F4u;
    {
        const bool branch_taken_0x3011f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011F4u;
        // 0x3011f8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011f4) {
            ctx->pc = 0x301214u;
            goto label_301214;
        }
    }
    ctx->pc = 0x3011FCu;
label_3011fc:
    // 0x3011fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3011fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_301200:
    // 0x301200: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x301200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_301204:
    // 0x301204: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x301204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_301208:
    // 0x301208: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_30120c:
    if (ctx->pc == 0x30120Cu) {
        ctx->pc = 0x30120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301208u;
        // 0x30120c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301210u;
        goto label_301210;
    }
    ctx->pc = 0x301208u;
    {
        const bool branch_taken_0x301208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301208u;
        // 0x30120c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301208) {
            ctx->pc = 0x301080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301080;
        }
    }
    ctx->pc = 0x301210u;
label_301210:
    // 0x301210: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x301210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_301214:
    // 0x301214: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x301214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_301218:
    // 0x301218: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x301218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30121c:
    // 0x30121c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x30121cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_301220:
    // 0x301220: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x301220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_301224:
    // 0x301224: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x301224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_301228:
    // 0x301228: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x301228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30122c:
    // 0x30122c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x30122cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_301230:
    // 0x301230: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x301230u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301234:
    // 0x301234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x301234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_301238:
    // 0x301238: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x301238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30123c:
    // 0x30123c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x30123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301240:
    // 0x301240: 0x3e00008  jr          $ra
label_301244:
    if (ctx->pc == 0x301244u) {
        ctx->pc = 0x301244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301240u;
        // 0x301244: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301248u;
        goto label_fallthrough_0x301240;
    }
    ctx->pc = 0x301240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301240u;
        // 0x301244: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x301240:
    ctx->pc = 0x301248u;
}
