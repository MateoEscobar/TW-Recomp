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

// Function: sub_00186710
// Address: 0x186710 - 0x186e88
void sub_00186710_0x186710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186710_0x186710");
#endif

    switch (ctx->pc) {
        case 0x186710u: goto label_186710;
        case 0x186714u: goto label_186714;
        case 0x186718u: goto label_186718;
        case 0x18671cu: goto label_18671c;
        case 0x186720u: goto label_186720;
        case 0x186724u: goto label_186724;
        case 0x186728u: goto label_186728;
        case 0x18672cu: goto label_18672c;
        case 0x186730u: goto label_186730;
        case 0x186734u: goto label_186734;
        case 0x186738u: goto label_186738;
        case 0x18673cu: goto label_18673c;
        case 0x186740u: goto label_186740;
        case 0x186744u: goto label_186744;
        case 0x186748u: goto label_186748;
        case 0x18674cu: goto label_18674c;
        case 0x186750u: goto label_186750;
        case 0x186754u: goto label_186754;
        case 0x186758u: goto label_186758;
        case 0x18675cu: goto label_18675c;
        case 0x186760u: goto label_186760;
        case 0x186764u: goto label_186764;
        case 0x186768u: goto label_186768;
        case 0x18676cu: goto label_18676c;
        case 0x186770u: goto label_186770;
        case 0x186774u: goto label_186774;
        case 0x186778u: goto label_186778;
        case 0x18677cu: goto label_18677c;
        case 0x186780u: goto label_186780;
        case 0x186784u: goto label_186784;
        case 0x186788u: goto label_186788;
        case 0x18678cu: goto label_18678c;
        case 0x186790u: goto label_186790;
        case 0x186794u: goto label_186794;
        case 0x186798u: goto label_186798;
        case 0x18679cu: goto label_18679c;
        case 0x1867a0u: goto label_1867a0;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867a8u: goto label_1867a8;
        case 0x1867acu: goto label_1867ac;
        case 0x1867b0u: goto label_1867b0;
        case 0x1867b4u: goto label_1867b4;
        case 0x1867b8u: goto label_1867b8;
        case 0x1867bcu: goto label_1867bc;
        case 0x1867c0u: goto label_1867c0;
        case 0x1867c4u: goto label_1867c4;
        case 0x1867c8u: goto label_1867c8;
        case 0x1867ccu: goto label_1867cc;
        case 0x1867d0u: goto label_1867d0;
        case 0x1867d4u: goto label_1867d4;
        case 0x1867d8u: goto label_1867d8;
        case 0x1867dcu: goto label_1867dc;
        case 0x1867e0u: goto label_1867e0;
        case 0x1867e4u: goto label_1867e4;
        case 0x1867e8u: goto label_1867e8;
        case 0x1867ecu: goto label_1867ec;
        case 0x1867f0u: goto label_1867f0;
        case 0x1867f4u: goto label_1867f4;
        case 0x1867f8u: goto label_1867f8;
        case 0x1867fcu: goto label_1867fc;
        case 0x186800u: goto label_186800;
        case 0x186804u: goto label_186804;
        case 0x186808u: goto label_186808;
        case 0x18680cu: goto label_18680c;
        case 0x186810u: goto label_186810;
        case 0x186814u: goto label_186814;
        case 0x186818u: goto label_186818;
        case 0x18681cu: goto label_18681c;
        case 0x186820u: goto label_186820;
        case 0x186824u: goto label_186824;
        case 0x186828u: goto label_186828;
        case 0x18682cu: goto label_18682c;
        case 0x186830u: goto label_186830;
        case 0x186834u: goto label_186834;
        case 0x186838u: goto label_186838;
        case 0x18683cu: goto label_18683c;
        case 0x186840u: goto label_186840;
        case 0x186844u: goto label_186844;
        case 0x186848u: goto label_186848;
        case 0x18684cu: goto label_18684c;
        case 0x186850u: goto label_186850;
        case 0x186854u: goto label_186854;
        case 0x186858u: goto label_186858;
        case 0x18685cu: goto label_18685c;
        case 0x186860u: goto label_186860;
        case 0x186864u: goto label_186864;
        case 0x186868u: goto label_186868;
        case 0x18686cu: goto label_18686c;
        case 0x186870u: goto label_186870;
        case 0x186874u: goto label_186874;
        case 0x186878u: goto label_186878;
        case 0x18687cu: goto label_18687c;
        case 0x186880u: goto label_186880;
        case 0x186884u: goto label_186884;
        case 0x186888u: goto label_186888;
        case 0x18688cu: goto label_18688c;
        case 0x186890u: goto label_186890;
        case 0x186894u: goto label_186894;
        case 0x186898u: goto label_186898;
        case 0x18689cu: goto label_18689c;
        case 0x1868a0u: goto label_1868a0;
        case 0x1868a4u: goto label_1868a4;
        case 0x1868a8u: goto label_1868a8;
        case 0x1868acu: goto label_1868ac;
        case 0x1868b0u: goto label_1868b0;
        case 0x1868b4u: goto label_1868b4;
        case 0x1868b8u: goto label_1868b8;
        case 0x1868bcu: goto label_1868bc;
        case 0x1868c0u: goto label_1868c0;
        case 0x1868c4u: goto label_1868c4;
        case 0x1868c8u: goto label_1868c8;
        case 0x1868ccu: goto label_1868cc;
        case 0x1868d0u: goto label_1868d0;
        case 0x1868d4u: goto label_1868d4;
        case 0x1868d8u: goto label_1868d8;
        case 0x1868dcu: goto label_1868dc;
        case 0x1868e0u: goto label_1868e0;
        case 0x1868e4u: goto label_1868e4;
        case 0x1868e8u: goto label_1868e8;
        case 0x1868ecu: goto label_1868ec;
        case 0x1868f0u: goto label_1868f0;
        case 0x1868f4u: goto label_1868f4;
        case 0x1868f8u: goto label_1868f8;
        case 0x1868fcu: goto label_1868fc;
        case 0x186900u: goto label_186900;
        case 0x186904u: goto label_186904;
        case 0x186908u: goto label_186908;
        case 0x18690cu: goto label_18690c;
        case 0x186910u: goto label_186910;
        case 0x186914u: goto label_186914;
        case 0x186918u: goto label_186918;
        case 0x18691cu: goto label_18691c;
        case 0x186920u: goto label_186920;
        case 0x186924u: goto label_186924;
        case 0x186928u: goto label_186928;
        case 0x18692cu: goto label_18692c;
        case 0x186930u: goto label_186930;
        case 0x186934u: goto label_186934;
        case 0x186938u: goto label_186938;
        case 0x18693cu: goto label_18693c;
        case 0x186940u: goto label_186940;
        case 0x186944u: goto label_186944;
        case 0x186948u: goto label_186948;
        case 0x18694cu: goto label_18694c;
        case 0x186950u: goto label_186950;
        case 0x186954u: goto label_186954;
        case 0x186958u: goto label_186958;
        case 0x18695cu: goto label_18695c;
        case 0x186960u: goto label_186960;
        case 0x186964u: goto label_186964;
        case 0x186968u: goto label_186968;
        case 0x18696cu: goto label_18696c;
        case 0x186970u: goto label_186970;
        case 0x186974u: goto label_186974;
        case 0x186978u: goto label_186978;
        case 0x18697cu: goto label_18697c;
        case 0x186980u: goto label_186980;
        case 0x186984u: goto label_186984;
        case 0x186988u: goto label_186988;
        case 0x18698cu: goto label_18698c;
        case 0x186990u: goto label_186990;
        case 0x186994u: goto label_186994;
        case 0x186998u: goto label_186998;
        case 0x18699cu: goto label_18699c;
        case 0x1869a0u: goto label_1869a0;
        case 0x1869a4u: goto label_1869a4;
        case 0x1869a8u: goto label_1869a8;
        case 0x1869acu: goto label_1869ac;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869b4u: goto label_1869b4;
        case 0x1869b8u: goto label_1869b8;
        case 0x1869bcu: goto label_1869bc;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869c4u: goto label_1869c4;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869ccu: goto label_1869cc;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869d8u: goto label_1869d8;
        case 0x1869dcu: goto label_1869dc;
        case 0x1869e0u: goto label_1869e0;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        case 0x186c18u: goto label_186c18;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c20u: goto label_186c20;
        case 0x186c24u: goto label_186c24;
        case 0x186c28u: goto label_186c28;
        case 0x186c2cu: goto label_186c2c;
        case 0x186c30u: goto label_186c30;
        case 0x186c34u: goto label_186c34;
        case 0x186c38u: goto label_186c38;
        case 0x186c3cu: goto label_186c3c;
        case 0x186c40u: goto label_186c40;
        case 0x186c44u: goto label_186c44;
        case 0x186c48u: goto label_186c48;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c50u: goto label_186c50;
        case 0x186c54u: goto label_186c54;
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        case 0x186d90u: goto label_186d90;
        case 0x186d94u: goto label_186d94;
        case 0x186d98u: goto label_186d98;
        case 0x186d9cu: goto label_186d9c;
        case 0x186da0u: goto label_186da0;
        case 0x186da4u: goto label_186da4;
        case 0x186da8u: goto label_186da8;
        case 0x186dacu: goto label_186dac;
        case 0x186db0u: goto label_186db0;
        case 0x186db4u: goto label_186db4;
        case 0x186db8u: goto label_186db8;
        case 0x186dbcu: goto label_186dbc;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dc4u: goto label_186dc4;
        case 0x186dc8u: goto label_186dc8;
        case 0x186dccu: goto label_186dcc;
        case 0x186dd0u: goto label_186dd0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186dd8u: goto label_186dd8;
        case 0x186ddcu: goto label_186ddc;
        case 0x186de0u: goto label_186de0;
        case 0x186de4u: goto label_186de4;
        case 0x186de8u: goto label_186de8;
        case 0x186decu: goto label_186dec;
        case 0x186df0u: goto label_186df0;
        case 0x186df4u: goto label_186df4;
        case 0x186df8u: goto label_186df8;
        case 0x186dfcu: goto label_186dfc;
        case 0x186e00u: goto label_186e00;
        case 0x186e04u: goto label_186e04;
        case 0x186e08u: goto label_186e08;
        case 0x186e0cu: goto label_186e0c;
        case 0x186e10u: goto label_186e10;
        case 0x186e14u: goto label_186e14;
        case 0x186e18u: goto label_186e18;
        case 0x186e1cu: goto label_186e1c;
        case 0x186e20u: goto label_186e20;
        case 0x186e24u: goto label_186e24;
        case 0x186e28u: goto label_186e28;
        case 0x186e2cu: goto label_186e2c;
        case 0x186e30u: goto label_186e30;
        case 0x186e34u: goto label_186e34;
        case 0x186e38u: goto label_186e38;
        case 0x186e3cu: goto label_186e3c;
        case 0x186e40u: goto label_186e40;
        case 0x186e44u: goto label_186e44;
        case 0x186e48u: goto label_186e48;
        case 0x186e4cu: goto label_186e4c;
        case 0x186e50u: goto label_186e50;
        case 0x186e54u: goto label_186e54;
        case 0x186e58u: goto label_186e58;
        case 0x186e5cu: goto label_186e5c;
        case 0x186e60u: goto label_186e60;
        case 0x186e64u: goto label_186e64;
        case 0x186e68u: goto label_186e68;
        case 0x186e6cu: goto label_186e6c;
        case 0x186e70u: goto label_186e70;
        case 0x186e74u: goto label_186e74;
        case 0x186e78u: goto label_186e78;
        case 0x186e7cu: goto label_186e7c;
        case 0x186e80u: goto label_186e80;
        case 0x186e84u: goto label_186e84;
        default: break;
    }

    ctx->pc = 0x186710u;

label_186710:
    // 0x186710: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x186710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_186714:
    // 0x186714: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x186714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_186718:
    // 0x186718: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x186718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_18671c:
    // 0x18671c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x18671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_186720:
    // 0x186720: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x186720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_186724:
    // 0x186724: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x186724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_186728:
    // 0x186728: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x186728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_18672c:
    // 0x18672c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x18672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_186730:
    // 0x186730: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x186730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186734:
    // 0x186734: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x186734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_186738:
    // 0x186738: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x186738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18673c:
    // 0x18673c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x18673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_186740:
    // 0x186740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186744:
    // 0x186744: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x186744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_186748:
    // 0x186748: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x186748u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_18674c:
    // 0x18674c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_186750:
    // 0x186750: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x186750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_186754:
    // 0x186754: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x186754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_186758:
    // 0x186758: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x186758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_18675c:
    // 0x18675c: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_186760:
    // 0x186760: 0xc05509a  jal         func_154268
label_186764:
    if (ctx->pc == 0x186764u) {
        ctx->pc = 0x186764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186760u;
        // 0x186764: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186768u;
        goto label_186768;
    }
    ctx->pc = 0x186760u;
    SET_GPR_U32(ctx, 31, 0x186768u);
    ctx->pc = 0x186764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186760u;
    // 0x186764: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154268u, 0x186760u, 0x186768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186768u;
label_186768:
    // 0x186768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x186768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18676c:
    // 0x18676c: 0xc061e6e  jal         func_1879B8
label_186770:
    if (ctx->pc == 0x186770u) {
        ctx->pc = 0x186770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18676Cu;
        // 0x186770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186774u;
        goto label_186774;
    }
    ctx->pc = 0x18676Cu;
    SET_GPR_U32(ctx, 31, 0x186774u);
    ctx->pc = 0x186770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18676Cu;
    // 0x186770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x18676Cu, 0x186774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186774u;
label_186774:
    // 0x186774: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x186774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186778:
    // 0x186778: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x186778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18677c:
    // 0x18677c: 0x8ee5b9b8  lw          $a1, -0x4648($s7)
    ctx->pc = 0x18677cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949304)));
label_186780:
    // 0x186780: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x186780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186784:
    // 0x186784: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_186788:
    // 0x186788: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x186788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18678c:
    // 0x18678c: 0x60f809  jalr        $v1
label_186790:
    if (ctx->pc == 0x186790u) {
        ctx->pc = 0x186790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18678Cu;
        // 0x186790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186794u;
        goto label_186794;
    }
    ctx->pc = 0x18678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186794u);
        ctx->pc = 0x186790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18678Cu;
        // 0x186790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18678Cu, 0x186794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186794u;
label_186794:
    // 0x186794: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x186794u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186798:
    // 0x186798: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x186798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18679c:
    // 0x18679c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18679cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1867a0:
    // 0x1867a0: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
label_1867a4:
    // 0x1867a4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1867a8:
    // 0x1867a8: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1867a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1867ac:
    // 0x1867ac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1867b0:
    // 0x1867b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1867b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1867b4:
    // 0x1867b4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1867b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1867b8:
    // 0x1867b8: 0x24090505  addiu       $t1, $zero, 0x505
    ctx->pc = 0x1867b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
label_1867bc:
    // 0x1867bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1867bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1867c0:
    // 0x1867c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1867c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1867c4:
    // 0x1867c4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1867c8:
    // 0x1867c8: 0x40f809  jalr        $v0
label_1867cc:
    if (ctx->pc == 0x1867CCu) {
        ctx->pc = 0x1867CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867C8u;
        // 0x1867cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867D0u;
        goto label_1867d0;
    }
    ctx->pc = 0x1867C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1867D0u);
        ctx->pc = 0x1867CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867C8u;
        // 0x1867cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867C8u, 0x1867D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1867D0u;
label_1867d0:
    // 0x1867d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1867d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1867d4:
    // 0x1867d4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1867d8:
    if (ctx->pc == 0x1867D8u) {
        ctx->pc = 0x1867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D4u;
        // 0x1867d8: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867DCu;
        goto label_1867dc;
    }
    ctx->pc = 0x1867D4u;
    {
        const bool branch_taken_0x1867d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D4u;
        // 0x1867d8: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d4) {
            ctx->pc = 0x1867E4u;
            goto label_1867e4;
        }
    }
    ctx->pc = 0x1867DCu;
label_1867dc:
    // 0x1867dc: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x1867dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_1867e0:
    // 0x1867e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1867e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1867e4:
    // 0x1867e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1867e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1867e8:
    // 0x1867e8: 0xc061e6e  jal         func_1879B8
label_1867ec:
    if (ctx->pc == 0x1867ECu) {
        ctx->pc = 0x1867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E8u;
        // 0x1867ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867F0u;
        goto label_1867f0;
    }
    ctx->pc = 0x1867E8u;
    SET_GPR_U32(ctx, 31, 0x1867F0u);
    ctx->pc = 0x1867ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1867E8u;
    // 0x1867ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1867E8u, 0x1867F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867F0u;
label_1867f0:
    // 0x1867f0: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x1867f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1867f4:
    // 0x1867f4: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1867f8:
    // 0x1867f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1867f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1867fc:
    // 0x1867fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1867fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186800:
    // 0x186800: 0xc0ce108  jal         func_338420
label_186804:
    if (ctx->pc == 0x186804u) {
        ctx->pc = 0x186804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186800u;
        // 0x186804: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186808u;
        goto label_186808;
    }
    ctx->pc = 0x186800u;
    SET_GPR_U32(ctx, 31, 0x186808u);
    ctx->pc = 0x186804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186800u;
    // 0x186804: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x186800u, 0x186808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186808u;
label_186808:
    // 0x186808: 0x26960c64  addiu       $s6, $s4, 0xC64
    ctx->pc = 0x186808u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 3172));
label_18680c:
    // 0x18680c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x18680cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186810:
    // 0x186810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186814:
    // 0x186814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186818:
    // 0x186818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18681c:
    // 0x18681c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x18681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186820:
    // 0x186820: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_186824:
    // 0x186824: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_186828:
    // 0x186828: 0x40f809  jalr        $v0
label_18682c:
    if (ctx->pc == 0x18682Cu) {
        ctx->pc = 0x18682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186828u;
        // 0x18682c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186830u;
        goto label_186830;
    }
    ctx->pc = 0x186828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186830u);
        ctx->pc = 0x18682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186828u;
        // 0x18682c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186828u, 0x186830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186830u;
label_186830:
    // 0x186830: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x186830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186834:
    // 0x186834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186838:
    // 0x186838: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18683c:
    // 0x18683c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18683cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_186840:
    // 0x186840: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x186840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186844:
    // 0x186844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186848:
    // 0x186848: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x186848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_18684c:
    // 0x18684c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x18684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_186850:
    // 0x186850: 0x60f809  jalr        $v1
label_186854:
    if (ctx->pc == 0x186854u) {
        ctx->pc = 0x186854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186850u;
        // 0x186854: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186858u;
        goto label_186858;
    }
    ctx->pc = 0x186850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186858u);
        ctx->pc = 0x186854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186850u;
        // 0x186854: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186850u, 0x186858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186858u;
label_186858:
    // 0x186858: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x186858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_18685c:
    // 0x18685c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186860:
    // 0x186860: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x186860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186864:
    // 0x186864: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x186864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_186868:
    // 0x186868: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x186868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18686c:
    // 0x18686c: 0x60f809  jalr        $v1
label_186870:
    if (ctx->pc == 0x186870u) {
        ctx->pc = 0x186870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18686Cu;
        // 0x186870: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186874u;
        goto label_186874;
    }
    ctx->pc = 0x18686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186874u);
        ctx->pc = 0x186870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18686Cu;
        // 0x186870: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18686Cu, 0x186874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186874u;
label_186874:
    // 0x186874: 0xc051060  jal         func_144180
label_186878:
    if (ctx->pc == 0x186878u) {
        ctx->pc = 0x186878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186874u;
        // 0x186878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18687Cu;
        goto label_18687c;
    }
    ctx->pc = 0x186874u;
    SET_GPR_U32(ctx, 31, 0x18687Cu);
    ctx->pc = 0x186878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186874u;
    // 0x186878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x186874u, 0x18687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18687Cu;
label_18687c:
    // 0x18687c: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x18687cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186880:
    // 0x186880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186884:
    // 0x186884: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x186884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186888:
    // 0x186888: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18688c:
    // 0x18688c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_186890:
    // 0x186890: 0x60f809  jalr        $v1
label_186894:
    if (ctx->pc == 0x186894u) {
        ctx->pc = 0x186894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186890u;
        // 0x186894: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186898u;
        goto label_186898;
    }
    ctx->pc = 0x186890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186898u);
        ctx->pc = 0x186894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186890u;
        // 0x186894: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186890u, 0x186898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186898u;
label_186898:
    // 0x186898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18689c:
    // 0x18689c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18689cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1868a0:
    // 0x1868a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1868a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1868a4:
    // 0x1868a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1868a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1868a8:
    // 0x1868a8: 0xc061c26  jal         func_187098
label_1868ac:
    if (ctx->pc == 0x1868ACu) {
        ctx->pc = 0x1868ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868A8u;
        // 0x1868ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1868B0u;
        goto label_1868b0;
    }
    ctx->pc = 0x1868A8u;
    SET_GPR_U32(ctx, 31, 0x1868B0u);
    ctx->pc = 0x1868ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1868A8u;
    // 0x1868ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187098u, 0x1868A8u, 0x1868B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868B0u;
label_1868b0:
    // 0x1868b0: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x1868b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1868b4:
    // 0x1868b4: 0x8ee5b9b8  lw          $a1, -0x4648($s7)
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949304)));
label_1868b8:
    // 0x1868b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1868bc:
    // 0x1868bc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1868c0:
    // 0x1868c0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1868c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1868c4:
    // 0x1868c4: 0x60f809  jalr        $v1
label_1868c8:
    if (ctx->pc == 0x1868C8u) {
        ctx->pc = 0x1868C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868C4u;
        // 0x1868c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1868CCu;
        goto label_1868cc;
    }
    ctx->pc = 0x1868C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1868CCu);
        ctx->pc = 0x1868C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868C4u;
        // 0x1868c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868C4u, 0x1868CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1868CCu;
label_1868cc:
    // 0x1868cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1868ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1868d0:
    // 0x1868d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1868d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1868d4:
    // 0x1868d4: 0xc137f64  jal         func_4DFD90
label_1868d8:
    if (ctx->pc == 0x1868D8u) {
        ctx->pc = 0x1868D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868D4u;
        // 0x1868d8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1868DCu;
        goto label_1868dc;
    }
    ctx->pc = 0x1868D4u;
    SET_GPR_U32(ctx, 31, 0x1868DCu);
    ctx->pc = 0x1868D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1868D4u;
    // 0x1868d8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFD90u, 0x1868D4u, 0x1868DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868DCu;
label_1868dc:
    // 0x1868dc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1868dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1868e0:
    // 0x1868e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1868e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1868e4:
    // 0x1868e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1868e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1868e8:
    // 0x1868e8: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1868e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_1868ec:
    // 0x1868ec: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1868ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1868f0:
    // 0x1868f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1868f4:
    // 0x1868f4: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x1868f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1868f8:
    // 0x1868f8: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1868fc:
    // 0x1868fc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_186900:
    if (ctx->pc == 0x186900u) {
        ctx->pc = 0x186900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868FCu;
        // 0x186900: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186904u;
        goto label_186904;
    }
    ctx->pc = 0x1868FCu;
    {
        const bool branch_taken_0x1868fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868FCu;
        // 0x186900: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868fc) {
            ctx->pc = 0x186940u;
            goto label_186940;
        }
    }
    ctx->pc = 0x186904u;
label_186904:
    // 0x186904: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x186904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_186908:
    // 0x186908: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_18690c:
    if (ctx->pc == 0x18690Cu) {
        ctx->pc = 0x18690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186908u;
        // 0x18690c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186910u;
        goto label_186910;
    }
    ctx->pc = 0x186908u;
    {
        const bool branch_taken_0x186908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186908) {
            ctx->pc = 0x18690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186908u;
            // 0x18690c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186918u;
            goto label_186918;
        }
    }
    ctx->pc = 0x186910u;
label_186910:
    // 0x186910: 0x1000000c  b           . + 4 + (0xC << 2)
label_186914:
    if (ctx->pc == 0x186914u) {
        ctx->pc = 0x186914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186910u;
        // 0x186914: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186918u;
        goto label_186918;
    }
    ctx->pc = 0x186910u;
    {
        const bool branch_taken_0x186910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186910u;
        // 0x186914: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186910) {
            ctx->pc = 0x186944u;
            goto label_186944;
        }
    }
    ctx->pc = 0x186918u;
label_186918:
    // 0x186918: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x186918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18691c:
    // 0x18691c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_186920:
    if (ctx->pc == 0x186920u) {
        ctx->pc = 0x186920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18691Cu;
        // 0x186920: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186924u;
        goto label_186924;
    }
    ctx->pc = 0x18691Cu;
    {
        const bool branch_taken_0x18691c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18691c) {
            ctx->pc = 0x186920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18691Cu;
            // 0x186920: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186944u;
            goto label_186944;
        }
    }
    ctx->pc = 0x186924u;
label_186924:
    // 0x186924: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_186928:
    // 0x186928: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18692c:
    // 0x18692c: 0x0  nop
    ctx->pc = 0x18692cu;
    // NOP
label_186930:
    // 0x186930: 0x0  nop
    ctx->pc = 0x186930u;
    // NOP
label_186934:
    // 0x186934: 0x0  nop
    ctx->pc = 0x186934u;
    // NOP
label_186938:
    // 0x186938: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18693c:
    if (ctx->pc == 0x18693Cu) {
        ctx->pc = 0x18693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186938u;
        // 0x18693c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186940u;
        goto label_186940;
    }
    ctx->pc = 0x186938u;
    {
        const bool branch_taken_0x186938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186938) {
            ctx->pc = 0x18693Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186938u;
            // 0x18693c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186928;
        }
    }
    ctx->pc = 0x186940u;
label_186940:
    // 0x186940: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x186940u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_186944:
    // 0x186944: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_186948:
    if (ctx->pc == 0x186948u) {
        ctx->pc = 0x18694Cu;
        goto label_18694c;
    }
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x186944) {
            ctx->pc = 0x1869D0u;
            goto label_1869d0;
        }
    }
    ctx->pc = 0x18694Cu;
label_18694c:
    // 0x18694c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_186950:
    // 0x186950: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x186950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_186954:
    // 0x186954: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x186954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_186958:
    // 0x186958: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x186958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_18695c:
    // 0x18695c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186960:
    // 0x186960: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_186964:
    if (ctx->pc == 0x186964u) {
        ctx->pc = 0x186964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186960u;
        // 0x186964: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186968u;
        goto label_186968;
    }
    ctx->pc = 0x186960u;
    {
        const bool branch_taken_0x186960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x186964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186960u;
        // 0x186964: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186960) {
            ctx->pc = 0x18698Cu;
            goto label_18698c;
        }
    }
    ctx->pc = 0x186968u;
label_186968:
    // 0x186968: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_18696c:
    if (ctx->pc == 0x18696Cu) {
        ctx->pc = 0x18696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186968u;
        // 0x18696c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186970u;
        goto label_186970;
    }
    ctx->pc = 0x186968u;
    {
        const bool branch_taken_0x186968 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186968u;
        // 0x18696c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186968) {
            ctx->pc = 0x186974u;
            goto label_186974;
        }
    }
    ctx->pc = 0x186970u;
label_186970:
    // 0x186970: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x186970u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_186974:
    // 0x186974: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_186978:
    // 0x186978: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x186978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_18697c:
    // 0x18697c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186980:
    // 0x186980: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x186980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_186984:
    // 0x186984: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186988:
    // 0x186988: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x186988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_18698c:
    // 0x18698c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x18698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186990:
    // 0x186990: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_186994:
    if (ctx->pc == 0x186994u) {
        ctx->pc = 0x186994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186990u;
        // 0x186994: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186998u;
        goto label_186998;
    }
    ctx->pc = 0x186990u;
    {
        const bool branch_taken_0x186990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x186990) {
            ctx->pc = 0x186994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186990u;
            // 0x186994: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1869A0u;
            goto label_1869a0;
        }
    }
    ctx->pc = 0x186998u;
label_186998:
    // 0x186998: 0x10000005  b           . + 4 + (0x5 << 2)
label_18699c:
    if (ctx->pc == 0x18699Cu) {
        ctx->pc = 0x18699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186998u;
        // 0x18699c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869A0u;
        goto label_1869a0;
    }
    ctx->pc = 0x186998u;
    {
        const bool branch_taken_0x186998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186998u;
        // 0x18699c: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186998) {
            ctx->pc = 0x1869B0u;
            goto label_1869b0;
        }
    }
    ctx->pc = 0x1869A0u;
label_1869a0:
    // 0x1869a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1869a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1869a4:
    // 0x1869a4: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_1869a8:
    if (ctx->pc == 0x1869A8u) {
        ctx->pc = 0x1869A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869A4u;
        // 0x1869a8: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869ACu;
        goto label_1869ac;
    }
    ctx->pc = 0x1869A4u;
    {
        const bool branch_taken_0x1869a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1869a4) {
            ctx->pc = 0x1869A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1869A4u;
            // 0x1869a8: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1869B0u;
            goto label_1869b0;
        }
    }
    ctx->pc = 0x1869ACu;
label_1869ac:
    // 0x1869ac: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1869acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1869b0:
    // 0x1869b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1869b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1869b4:
    // 0x1869b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1869b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1869b8:
    // 0x1869b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1869b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1869bc:
    // 0x1869bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1869bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1869c0:
    // 0x1869c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1869c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1869c4:
    // 0x1869c4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1869c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1869c8:
    // 0x1869c8: 0x10000034  b           . + 4 + (0x34 << 2)
label_1869cc:
    if (ctx->pc == 0x1869CCu) {
        ctx->pc = 0x1869CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869C8u;
        // 0x1869cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869D0u;
        goto label_1869d0;
    }
    ctx->pc = 0x1869C8u;
    {
        const bool branch_taken_0x1869c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869C8u;
        // 0x1869cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869c8) {
            ctx->pc = 0x186A9Cu;
            goto label_186a9c;
        }
    }
    ctx->pc = 0x1869D0u;
label_1869d0:
    // 0x1869d0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_1869d4:
    if (ctx->pc == 0x1869D4u) {
        ctx->pc = 0x1869D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869D0u;
        // 0x1869d4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869D8u;
        goto label_1869d8;
    }
    ctx->pc = 0x1869D0u;
    {
        const bool branch_taken_0x1869d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869D0u;
        // 0x1869d4: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869d0) {
            ctx->pc = 0x1869DCu;
            goto label_1869dc;
        }
    }
    ctx->pc = 0x1869D8u;
label_1869d8:
    // 0x1869d8: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x1869d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_1869dc:
    // 0x1869dc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1869dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1869e0:
    // 0x1869e0: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_1869e4:
    if (ctx->pc == 0x1869E4u) {
        ctx->pc = 0x1869E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869E0u;
        // 0x1869e4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869E8u;
        goto label_1869e8;
    }
    ctx->pc = 0x1869E0u;
    {
        const bool branch_taken_0x1869e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1869e0) {
            ctx->pc = 0x1869E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1869E0u;
            // 0x1869e4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1869F0u;
            goto label_1869f0;
        }
    }
    ctx->pc = 0x1869E8u;
label_1869e8:
    // 0x1869e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1869ec:
    if (ctx->pc == 0x1869ECu) {
        ctx->pc = 0x1869ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869E8u;
        // 0x1869ec: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869F0u;
        goto label_1869f0;
    }
    ctx->pc = 0x1869E8u;
    {
        const bool branch_taken_0x1869e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869E8u;
        // 0x1869ec: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869e8) {
            ctx->pc = 0x186A00u;
            goto label_186a00;
        }
    }
    ctx->pc = 0x1869F0u;
label_1869f0:
    // 0x1869f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1869f4:
    // 0x1869f4: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_1869f8:
    if (ctx->pc == 0x1869F8u) {
        ctx->pc = 0x1869F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869F4u;
        // 0x1869f8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869FCu;
        goto label_1869fc;
    }
    ctx->pc = 0x1869F4u;
    {
        const bool branch_taken_0x1869f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1869f4) {
            ctx->pc = 0x1869F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1869F4u;
            // 0x1869f8: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A00u;
            goto label_186a00;
        }
    }
    ctx->pc = 0x1869FCu;
label_1869fc:
    // 0x1869fc: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1869fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_186a00:
    // 0x186a00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x186a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186a04:
    // 0x186a04: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_186a08:
    if (ctx->pc == 0x186A08u) {
        ctx->pc = 0x186A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A04u;
        // 0x186a08: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A0Cu;
        goto label_186a0c;
    }
    ctx->pc = 0x186A04u;
    {
        const bool branch_taken_0x186a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x186a04) {
            ctx->pc = 0x186A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A04u;
            // 0x186a08: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A50u;
            goto label_186a50;
        }
    }
    ctx->pc = 0x186A0Cu;
label_186a0c:
    // 0x186a0c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186a10:
    // 0x186a10: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_186a14:
    if (ctx->pc == 0x186A14u) {
        ctx->pc = 0x186A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A10u;
        // 0x186a14: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A18u;
        goto label_186a18;
    }
    ctx->pc = 0x186A10u;
    {
        const bool branch_taken_0x186a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a10) {
            ctx->pc = 0x186A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A10u;
            // 0x186a14: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A24u;
            goto label_186a24;
        }
    }
    ctx->pc = 0x186A18u;
label_186a18:
    // 0x186a18: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x186a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_186a1c:
    // 0x186a1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_186a20:
    if (ctx->pc == 0x186A20u) {
        ctx->pc = 0x186A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A1Cu;
        // 0x186a20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A24u;
        goto label_186a24;
    }
    ctx->pc = 0x186A1Cu;
    {
        const bool branch_taken_0x186a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A1Cu;
        // 0x186a20: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a1c) {
            ctx->pc = 0x186A4Cu;
            goto label_186a4c;
        }
    }
    ctx->pc = 0x186A24u;
label_186a24:
    // 0x186a24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_186a28:
    if (ctx->pc == 0x186A28u) {
        ctx->pc = 0x186A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A24u;
        // 0x186a28: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A2Cu;
        goto label_186a2c;
    }
    ctx->pc = 0x186A24u;
    {
        const bool branch_taken_0x186a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A24u;
        // 0x186a28: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a24) {
            ctx->pc = 0x186A48u;
            goto label_186a48;
        }
    }
    ctx->pc = 0x186A2Cu;
label_186a2c:
    // 0x186a2c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x186a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a30:
    // 0x186a30: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a34:
    // 0x186a34: 0x0  nop
    ctx->pc = 0x186a34u;
    // NOP
label_186a38:
    // 0x186a38: 0x0  nop
    ctx->pc = 0x186a38u;
    // NOP
label_186a3c:
    // 0x186a3c: 0x0  nop
    ctx->pc = 0x186a3cu;
    // NOP
label_186a40:
    // 0x186a40: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_186a44:
    if (ctx->pc == 0x186A44u) {
        ctx->pc = 0x186A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A40u;
        // 0x186a44: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A48u;
        goto label_186a48;
    }
    ctx->pc = 0x186A40u;
    {
        const bool branch_taken_0x186a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a40) {
            ctx->pc = 0x186A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A40u;
            // 0x186a44: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186a30;
        }
    }
    ctx->pc = 0x186A48u;
label_186a48:
    // 0x186a48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x186a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_186a4c:
    // 0x186a4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186a50:
    // 0x186a50: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_186a54:
    if (ctx->pc == 0x186A54u) {
        ctx->pc = 0x186A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A50u;
        // 0x186a54: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A58u;
        goto label_186a58;
    }
    ctx->pc = 0x186A50u;
    {
        const bool branch_taken_0x186a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x186a50) {
            ctx->pc = 0x186A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A50u;
            // 0x186a54: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AA0u;
            goto label_186aa0;
        }
    }
    ctx->pc = 0x186A58u;
label_186a58:
    // 0x186a58: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x186a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_186a5c:
    // 0x186a5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_186a60:
    if (ctx->pc == 0x186A60u) {
        ctx->pc = 0x186A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A5Cu;
        // 0x186a60: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A64u;
        goto label_186a64;
    }
    ctx->pc = 0x186A5Cu;
    {
        const bool branch_taken_0x186a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a5c) {
            ctx->pc = 0x186A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A5Cu;
            // 0x186a60: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A70u;
            goto label_186a70;
        }
    }
    ctx->pc = 0x186A64u;
label_186a64:
    // 0x186a64: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x186a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_186a68:
    // 0x186a68: 0x1000000c  b           . + 4 + (0xC << 2)
label_186a6c:
    if (ctx->pc == 0x186A6Cu) {
        ctx->pc = 0x186A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A68u;
        // 0x186a6c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A70u;
        goto label_186a70;
    }
    ctx->pc = 0x186A68u;
    {
        const bool branch_taken_0x186a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A68u;
        // 0x186a6c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a68) {
            ctx->pc = 0x186A9Cu;
            goto label_186a9c;
        }
    }
    ctx->pc = 0x186A70u;
label_186a70:
    // 0x186a70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_186a74:
    if (ctx->pc == 0x186A74u) {
        ctx->pc = 0x186A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A70u;
        // 0x186a74: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A78u;
        goto label_186a78;
    }
    ctx->pc = 0x186A70u;
    {
        const bool branch_taken_0x186a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A70u;
        // 0x186a74: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a70) {
            ctx->pc = 0x186A98u;
            goto label_186a98;
        }
    }
    ctx->pc = 0x186A78u;
label_186a78:
    // 0x186a78: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x186a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_186a7c:
    // 0x186a7c: 0x0  nop
    ctx->pc = 0x186a7cu;
    // NOP
label_186a80:
    // 0x186a80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_186a84:
    // 0x186a84: 0x0  nop
    ctx->pc = 0x186a84u;
    // NOP
label_186a88:
    // 0x186a88: 0x0  nop
    ctx->pc = 0x186a88u;
    // NOP
label_186a8c:
    // 0x186a8c: 0x0  nop
    ctx->pc = 0x186a8cu;
    // NOP
label_186a90:
    // 0x186a90: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_186a94:
    if (ctx->pc == 0x186A94u) {
        ctx->pc = 0x186A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A90u;
        // 0x186a94: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A98u;
        goto label_186a98;
    }
    ctx->pc = 0x186A90u;
    {
        const bool branch_taken_0x186a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186a90) {
            ctx->pc = 0x186A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A90u;
            // 0x186a94: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186a80;
        }
    }
    ctx->pc = 0x186A98u;
label_186a98:
    // 0x186a98: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x186a98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_186a9c:
    // 0x186a9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_186aa0:
    // 0x186aa0: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_186aa4:
    if (ctx->pc == 0x186AA4u) {
        ctx->pc = 0x186AA8u;
        goto label_186aa8;
    }
    ctx->pc = 0x186AA0u;
    {
        const bool branch_taken_0x186aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186aa0) {
            ctx->pc = 0x186DECu;
            goto label_186dec;
        }
    }
    ctx->pc = 0x186AA8u;
label_186aa8:
    // 0x186aa8: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_186aac:
    if (ctx->pc == 0x186AACu) {
        ctx->pc = 0x186AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AA8u;
        // 0x186aac: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AB0u;
        goto label_186ab0;
    }
    ctx->pc = 0x186AA8u;
    {
        const bool branch_taken_0x186aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AA8u;
        // 0x186aac: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186aa8) {
            ctx->pc = 0x186DC0u;
            goto label_186dc0;
        }
    }
    ctx->pc = 0x186AB0u;
label_186ab0:
    // 0x186ab0: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_186ab4:
    if (ctx->pc == 0x186AB4u) {
        ctx->pc = 0x186AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AB0u;
        // 0x186ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AB8u;
        goto label_186ab8;
    }
    ctx->pc = 0x186AB0u;
    {
        const bool branch_taken_0x186ab0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x186AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AB0u;
        // 0x186ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ab0) {
            ctx->pc = 0x186C34u;
            goto label_186c34;
        }
    }
    ctx->pc = 0x186AB8u;
label_186ab8:
    // 0x186ab8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x186ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186abc:
    // 0x186abc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186ac0:
    // 0x186ac0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_186ac4:
    if (ctx->pc == 0x186AC4u) {
        ctx->pc = 0x186AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC0u;
        // 0x186ac4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AC8u;
        goto label_186ac8;
    }
    ctx->pc = 0x186AC0u;
    {
        const bool branch_taken_0x186ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ac0) {
            ctx->pc = 0x186AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AC0u;
            // 0x186ac4: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B28u;
            goto label_186b28;
        }
    }
    ctx->pc = 0x186AC8u;
label_186ac8:
    // 0x186ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186acc:
    // 0x186acc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186ad0:
    // 0x186ad0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x186ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_186ad4:
    // 0x186ad4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x186ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186ad8:
    // 0x186ad8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186adc:
    // 0x186adc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x186adcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_186ae0:
    // 0x186ae0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186ae4:
    // 0x186ae4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186ae8:
    if (ctx->pc == 0x186AE8u) {
        ctx->pc = 0x186AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AE4u;
        // 0x186ae8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AECu;
        goto label_186aec;
    }
    ctx->pc = 0x186AE4u;
    {
        const bool branch_taken_0x186ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ae4) {
            ctx->pc = 0x186AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AE4u;
            // 0x186ae8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AECu;
            goto label_186aec;
        }
    }
    ctx->pc = 0x186AECu;
label_186aec:
    // 0x186aec: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_186af0:
    // 0x186af0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186af4:
    // 0x186af4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186af8:
    // 0x186af8: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_186afc:
    if (ctx->pc == 0x186AFCu) {
        ctx->pc = 0x186AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AF8u;
        // 0x186afc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B00u;
        goto label_186b00;
    }
    ctx->pc = 0x186AF8u;
    {
        const bool branch_taken_0x186af8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x186af8) {
            ctx->pc = 0x186AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AF8u;
            // 0x186afc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B08u;
            goto label_186b08;
        }
    }
    ctx->pc = 0x186B00u;
label_186b00:
    // 0x186b00: 0x10000005  b           . + 4 + (0x5 << 2)
label_186b04:
    if (ctx->pc == 0x186B04u) {
        ctx->pc = 0x186B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B00u;
        // 0x186b04: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B08u;
        goto label_186b08;
    }
    ctx->pc = 0x186B00u;
    {
        const bool branch_taken_0x186b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B00u;
        // 0x186b04: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b00) {
            ctx->pc = 0x186B18u;
            goto label_186b18;
        }
    }
    ctx->pc = 0x186B08u;
label_186b08:
    // 0x186b08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b0c:
    // 0x186b0c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_186b10:
    if (ctx->pc == 0x186B10u) {
        ctx->pc = 0x186B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B0Cu;
        // 0x186b10: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B14u;
        goto label_186b14;
    }
    ctx->pc = 0x186B0Cu;
    {
        const bool branch_taken_0x186b0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x186b0c) {
            ctx->pc = 0x186B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B0Cu;
            // 0x186b10: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B18u;
            goto label_186b18;
        }
    }
    ctx->pc = 0x186B14u;
label_186b14:
    // 0x186b14: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x186b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_186b18:
    // 0x186b18: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x186b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_186b1c:
    // 0x186b1c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x186b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_186b20:
    // 0x186b20: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x186b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186b24:
    // 0x186b24: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x186b24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186b28:
    // 0x186b28: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_186b2c:
    if (ctx->pc == 0x186B2Cu) {
        ctx->pc = 0x186B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B28u;
        // 0x186b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B30u;
        goto label_186b30;
    }
    ctx->pc = 0x186B28u;
    {
        const bool branch_taken_0x186b28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B28u;
        // 0x186b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b28) {
            ctx->pc = 0x186B3Cu;
            goto label_186b3c;
        }
    }
    ctx->pc = 0x186B30u;
label_186b30:
    // 0x186b30: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x186b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186b34:
    // 0x186b34: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_186b38:
    if (ctx->pc == 0x186B38u) {
        ctx->pc = 0x186B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B34u;
        // 0x186b38: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B3Cu;
        goto label_186b3c;
    }
    ctx->pc = 0x186B34u;
    {
        const bool branch_taken_0x186b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B34u;
        // 0x186b38: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b34) {
            ctx->pc = 0x186B54u;
            goto label_186b54;
        }
    }
    ctx->pc = 0x186B3Cu;
label_186b3c:
    // 0x186b3c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x186b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b40:
    // 0x186b40: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_186b44:
    if (ctx->pc == 0x186B44u) {
        ctx->pc = 0x186B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B40u;
        // 0x186b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B48u;
        goto label_186b48;
    }
    ctx->pc = 0x186B40u;
    {
        const bool branch_taken_0x186b40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B40u;
        // 0x186b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b40) {
            ctx->pc = 0x186CCCu;
            goto label_186ccc;
        }
    }
    ctx->pc = 0x186B48u;
label_186b48:
    // 0x186b48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x186b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186b4c:
    // 0x186b4c: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_186b50:
    if (ctx->pc == 0x186B50u) {
        ctx->pc = 0x186B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B4Cu;
        // 0x186b50: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B54u;
        goto label_186b54;
    }
    ctx->pc = 0x186B4Cu;
    {
        const bool branch_taken_0x186b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186b4c) {
            ctx->pc = 0x186B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B4Cu;
            // 0x186b50: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CD0u;
            goto label_186cd0;
        }
    }
    ctx->pc = 0x186B54u;
label_186b54:
    // 0x186b54: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_186b58:
    if (ctx->pc == 0x186B58u) {
        ctx->pc = 0x186B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B54u;
        // 0x186b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B5Cu;
        goto label_186b5c;
    }
    ctx->pc = 0x186B54u;
    {
        const bool branch_taken_0x186b54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B54u;
        // 0x186b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b54) {
            ctx->pc = 0x186B68u;
            goto label_186b68;
        }
    }
    ctx->pc = 0x186B5Cu;
label_186b5c:
    // 0x186b5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186b60:
    // 0x186b60: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_186b64:
    if (ctx->pc == 0x186B64u) {
        ctx->pc = 0x186B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B60u;
        // 0x186b64: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B68u;
        goto label_186b68;
    }
    ctx->pc = 0x186B60u;
    {
        const bool branch_taken_0x186b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186b60) {
            ctx->pc = 0x186B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B60u;
            // 0x186b64: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BCCu;
            goto label_186bcc;
        }
    }
    ctx->pc = 0x186B68u;
label_186b68:
    // 0x186b68: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_186b6c:
    if (ctx->pc == 0x186B6Cu) {
        ctx->pc = 0x186B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B68u;
        // 0x186b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B70u;
        goto label_186b70;
    }
    ctx->pc = 0x186B68u;
    {
        const bool branch_taken_0x186b68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B68u;
        // 0x186b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b68) {
            ctx->pc = 0x186B74u;
            goto label_186b74;
        }
    }
    ctx->pc = 0x186B70u;
label_186b70:
    // 0x186b70: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x186b70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_186b74:
    // 0x186b74: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186b78:
    // 0x186b78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x186b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_186b7c:
    // 0x186b7c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186b80:
    // 0x186b80: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x186b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_186b84:
    // 0x186b84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186b88:
    // 0x186b88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186b8c:
    if (ctx->pc == 0x186B8Cu) {
        ctx->pc = 0x186B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B88u;
        // 0x186b8c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B90u;
        goto label_186b90;
    }
    ctx->pc = 0x186B88u;
    {
        const bool branch_taken_0x186b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b88) {
            ctx->pc = 0x186B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B88u;
            // 0x186b8c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B90u;
            goto label_186b90;
        }
    }
    ctx->pc = 0x186B90u;
label_186b90:
    // 0x186b90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x186b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_186b94:
    // 0x186b94: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x186b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_186b98:
    // 0x186b98: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186b9c:
    // 0x186b9c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_186ba0:
    if (ctx->pc == 0x186BA0u) {
        ctx->pc = 0x186BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B9Cu;
        // 0x186ba0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BA4u;
        goto label_186ba4;
    }
    ctx->pc = 0x186B9Cu;
    {
        const bool branch_taken_0x186b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x186b9c) {
            ctx->pc = 0x186BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B9Cu;
            // 0x186ba0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BACu;
            goto label_186bac;
        }
    }
    ctx->pc = 0x186BA4u;
label_186ba4:
    // 0x186ba4: 0x10000005  b           . + 4 + (0x5 << 2)
label_186ba8:
    if (ctx->pc == 0x186BA8u) {
        ctx->pc = 0x186BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BA4u;
        // 0x186ba8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BACu;
        goto label_186bac;
    }
    ctx->pc = 0x186BA4u;
    {
        const bool branch_taken_0x186ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BA4u;
        // 0x186ba8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ba4) {
            ctx->pc = 0x186BBCu;
            goto label_186bbc;
        }
    }
    ctx->pc = 0x186BACu;
label_186bac:
    // 0x186bac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_186bb0:
    // 0x186bb0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_186bb4:
    if (ctx->pc == 0x186BB4u) {
        ctx->pc = 0x186BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BB0u;
        // 0x186bb4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BB8u;
        goto label_186bb8;
    }
    ctx->pc = 0x186BB0u;
    {
        const bool branch_taken_0x186bb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x186bb0) {
            ctx->pc = 0x186BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BB0u;
            // 0x186bb4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BBCu;
            goto label_186bbc;
        }
    }
    ctx->pc = 0x186BB8u;
label_186bb8:
    // 0x186bb8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x186bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_186bbc:
    // 0x186bbc: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x186bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_186bc0:
    // 0x186bc0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x186bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_186bc4:
    // 0x186bc4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x186bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186bc8:
    // 0x186bc8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_186bcc:
    // 0x186bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186bd0:
    // 0x186bd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186bd4:
    // 0x186bd4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x186bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_186bd8:
    // 0x186bd8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186bdc:
    // 0x186bdc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186be0:
    if (ctx->pc == 0x186BE0u) {
        ctx->pc = 0x186BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BDCu;
        // 0x186be0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BE4u;
        goto label_186be4;
    }
    ctx->pc = 0x186BDCu;
    {
        const bool branch_taken_0x186bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bdc) {
            ctx->pc = 0x186BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BDCu;
            // 0x186be0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BE4u;
            goto label_186be4;
        }
    }
    ctx->pc = 0x186BE4u;
label_186be4:
    // 0x186be4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186be8:
    // 0x186be8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x186be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186bec:
    // 0x186bec: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x186becu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_186bf0:
    // 0x186bf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186bf4:
    // 0x186bf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186bf8:
    if (ctx->pc == 0x186BF8u) {
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BFCu;
        goto label_186bfc;
    }
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BF4u;
            // 0x186bf8: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BFCu;
            goto label_186bfc;
        }
    }
    ctx->pc = 0x186BFCu;
label_186bfc:
    // 0x186bfc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x186bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_186c00:
    // 0x186c00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186c04:
    // 0x186c04: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186c08:
    // 0x186c08: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_186c0c:
    if (ctx->pc == 0x186C0Cu) {
        ctx->pc = 0x186C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C08u;
        // 0x186c0c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C10u;
        goto label_186c10;
    }
    ctx->pc = 0x186C08u;
    {
        const bool branch_taken_0x186c08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x186c08) {
            ctx->pc = 0x186C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C08u;
            // 0x186c0c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C18u;
            goto label_186c18;
        }
    }
    ctx->pc = 0x186C10u;
label_186c10:
    // 0x186c10: 0x10000005  b           . + 4 + (0x5 << 2)
label_186c14:
    if (ctx->pc == 0x186C14u) {
        ctx->pc = 0x186C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C10u;
        // 0x186c14: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C18u;
        goto label_186c18;
    }
    ctx->pc = 0x186C10u;
    {
        const bool branch_taken_0x186c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C10u;
        // 0x186c14: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c10) {
            ctx->pc = 0x186C28u;
            goto label_186c28;
        }
    }
    ctx->pc = 0x186C18u;
label_186c18:
    // 0x186c18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186c1c:
    // 0x186c1c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_186c20:
    if (ctx->pc == 0x186C20u) {
        ctx->pc = 0x186C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C1Cu;
        // 0x186c20: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C24u;
        goto label_186c24;
    }
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C1Cu;
            // 0x186c20: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C28u;
            goto label_186c28;
        }
    }
    ctx->pc = 0x186C24u;
label_186c24:
    // 0x186c24: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x186c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_186c28:
    // 0x186c28: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x186c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_186c2c:
    // 0x186c2c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_186c30:
    if (ctx->pc == 0x186C30u) {
        ctx->pc = 0x186C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C2Cu;
        // 0x186c30: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C34u;
        goto label_186c34;
    }
    ctx->pc = 0x186C2Cu;
    {
        const bool branch_taken_0x186c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C2Cu;
        // 0x186c30: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c2c) {
            ctx->pc = 0x186DE0u;
            goto label_186de0;
        }
    }
    ctx->pc = 0x186C34u;
label_186c34:
    // 0x186c34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x186c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186c38:
    // 0x186c38: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_186c3c:
    if (ctx->pc == 0x186C3Cu) {
        ctx->pc = 0x186C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C38u;
        // 0x186c3c: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C40u;
        goto label_186c40;
    }
    ctx->pc = 0x186C38u;
    {
        const bool branch_taken_0x186c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c38) {
            ctx->pc = 0x186C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C38u;
            // 0x186c3c: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x186C40u;
label_186c40:
    // 0x186c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186c44:
    // 0x186c44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186c48:
    // 0x186c48: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x186c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_186c4c:
    // 0x186c4c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186c50:
    // 0x186c50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186c54:
    // 0x186c54: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x186c54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_186c58:
    // 0x186c58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186c5c:
    // 0x186c5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186c60:
    if (ctx->pc == 0x186C60u) {
        ctx->pc = 0x186C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C5Cu;
        // 0x186c60: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C64u;
        goto label_186c64;
    }
    ctx->pc = 0x186C5Cu;
    {
        const bool branch_taken_0x186c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c5c) {
            ctx->pc = 0x186C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C5Cu;
            // 0x186c60: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C64u;
            goto label_186c64;
        }
    }
    ctx->pc = 0x186C64u;
label_186c64:
    // 0x186c64: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x186c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_186c68:
    // 0x186c68: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186c6c:
    // 0x186c6c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186c70:
    // 0x186c70: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_186c74:
    if (ctx->pc == 0x186C74u) {
        ctx->pc = 0x186C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C70u;
        // 0x186c74: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C78u;
        goto label_186c78;
    }
    ctx->pc = 0x186C70u;
    {
        const bool branch_taken_0x186c70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x186c70) {
            ctx->pc = 0x186C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C70u;
            // 0x186c74: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C80u;
            goto label_186c80;
        }
    }
    ctx->pc = 0x186C78u;
label_186c78:
    // 0x186c78: 0x10000005  b           . + 4 + (0x5 << 2)
label_186c7c:
    if (ctx->pc == 0x186C7Cu) {
        ctx->pc = 0x186C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C78u;
        // 0x186c7c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C80u;
        goto label_186c80;
    }
    ctx->pc = 0x186C78u;
    {
        const bool branch_taken_0x186c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C78u;
        // 0x186c7c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c78) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C80u;
label_186c80:
    // 0x186c80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_186c84:
    // 0x186c84: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_186c88:
    if (ctx->pc == 0x186C88u) {
        ctx->pc = 0x186C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C84u;
        // 0x186c88: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C8Cu;
        goto label_186c8c;
    }
    ctx->pc = 0x186C84u;
    {
        const bool branch_taken_0x186c84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x186c84) {
            ctx->pc = 0x186C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C84u;
            // 0x186c88: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x186c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_186c90:
    // 0x186c90: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x186c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_186c94:
    // 0x186c94: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x186c94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_186c98:
    // 0x186c98: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186c9c:
    // 0x186c9c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x186c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186ca0:
    // 0x186ca0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_186ca4:
    if (ctx->pc == 0x186CA4u) {
        ctx->pc = 0x186CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CA0u;
        // 0x186ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CA8u;
        goto label_186ca8;
    }
    ctx->pc = 0x186CA0u;
    {
        const bool branch_taken_0x186ca0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CA0u;
        // 0x186ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ca0) {
            ctx->pc = 0x186CB4u;
            goto label_186cb4;
        }
    }
    ctx->pc = 0x186CA8u;
label_186ca8:
    // 0x186ca8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x186ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186cac:
    // 0x186cac: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_186cb0:
    if (ctx->pc == 0x186CB0u) {
        ctx->pc = 0x186CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CACu;
        // 0x186cb0: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CB4u;
        goto label_186cb4;
    }
    ctx->pc = 0x186CACu;
    {
        const bool branch_taken_0x186cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CACu;
        // 0x186cb0: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cac) {
            ctx->pc = 0x186CDCu;
            goto label_186cdc;
        }
    }
    ctx->pc = 0x186CB4u;
label_186cb4:
    // 0x186cb4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186cb8:
    // 0x186cb8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_186cbc:
    if (ctx->pc == 0x186CBCu) {
        ctx->pc = 0x186CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CB8u;
        // 0x186cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CC0u;
        goto label_186cc0;
    }
    ctx->pc = 0x186CB8u;
    {
        const bool branch_taken_0x186cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CB8u;
        // 0x186cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cb8) {
            ctx->pc = 0x186CCCu;
            goto label_186ccc;
        }
    }
    ctx->pc = 0x186CC0u;
label_186cc0:
    // 0x186cc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186cc4:
    // 0x186cc4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_186cc8:
    if (ctx->pc == 0x186CC8u) {
        ctx->pc = 0x186CCCu;
        goto label_186ccc;
    }
    ctx->pc = 0x186CC4u;
    {
        const bool branch_taken_0x186cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186cc4) {
            ctx->pc = 0x186CDCu;
            goto label_186cdc;
        }
    }
    ctx->pc = 0x186CCCu;
label_186ccc:
    // 0x186ccc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x186cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_186cd0:
    // 0x186cd0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x186cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_186cd4:
    // 0x186cd4: 0x10000039  b           . + 4 + (0x39 << 2)
label_186cd8:
    if (ctx->pc == 0x186CD8u) {
        ctx->pc = 0x186CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CD4u;
        // 0x186cd8: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CDCu;
        goto label_186cdc;
    }
    ctx->pc = 0x186CD4u;
    {
        const bool branch_taken_0x186cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CD4u;
        // 0x186cd8: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cd4) {
            ctx->pc = 0x186DBCu;
            goto label_186dbc;
        }
    }
    ctx->pc = 0x186CDCu;
label_186cdc:
    // 0x186cdc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_186ce0:
    if (ctx->pc == 0x186CE0u) {
        ctx->pc = 0x186CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CDCu;
        // 0x186ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CE4u;
        goto label_186ce4;
    }
    ctx->pc = 0x186CDCu;
    {
        const bool branch_taken_0x186cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CDCu;
        // 0x186ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cdc) {
            ctx->pc = 0x186CF0u;
            goto label_186cf0;
        }
    }
    ctx->pc = 0x186CE4u;
label_186ce4:
    // 0x186ce4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186ce8:
    // 0x186ce8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_186cec:
    if (ctx->pc == 0x186CECu) {
        ctx->pc = 0x186CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE8u;
        // 0x186cec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CF0u;
        goto label_186cf0;
    }
    ctx->pc = 0x186CE8u;
    {
        const bool branch_taken_0x186ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186ce8) {
            ctx->pc = 0x186CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CE8u;
            // 0x186cec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D54u;
            goto label_186d54;
        }
    }
    ctx->pc = 0x186CF0u;
label_186cf0:
    // 0x186cf0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_186cf4:
    if (ctx->pc == 0x186CF4u) {
        ctx->pc = 0x186CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CF0u;
        // 0x186cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CF8u;
        goto label_186cf8;
    }
    ctx->pc = 0x186CF0u;
    {
        const bool branch_taken_0x186cf0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CF0u;
        // 0x186cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cf0) {
            ctx->pc = 0x186CFCu;
            goto label_186cfc;
        }
    }
    ctx->pc = 0x186CF8u;
label_186cf8:
    // 0x186cf8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x186cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_186cfc:
    // 0x186cfc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186d00:
    // 0x186d00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x186d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_186d04:
    // 0x186d04: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_186d08:
    // 0x186d08: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x186d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_186d0c:
    // 0x186d0c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_186d10:
    // 0x186d10: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186d14:
    if (ctx->pc == 0x186D14u) {
        ctx->pc = 0x186D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D10u;
        // 0x186d14: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D18u;
        goto label_186d18;
    }
    ctx->pc = 0x186D10u;
    {
        const bool branch_taken_0x186d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d10) {
            ctx->pc = 0x186D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D10u;
            // 0x186d14: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D18u;
            goto label_186d18;
        }
    }
    ctx->pc = 0x186D18u;
label_186d18:
    // 0x186d18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_186d1c:
    // 0x186d1c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x186d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_186d20:
    // 0x186d20: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186d24:
    // 0x186d24: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_186d28:
    if (ctx->pc == 0x186D28u) {
        ctx->pc = 0x186D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D24u;
        // 0x186d28: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D2Cu;
        goto label_186d2c;
    }
    ctx->pc = 0x186D24u;
    {
        const bool branch_taken_0x186d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x186d24) {
            ctx->pc = 0x186D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D24u;
            // 0x186d28: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D34u;
            goto label_186d34;
        }
    }
    ctx->pc = 0x186D2Cu;
label_186d2c:
    // 0x186d2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_186d30:
    if (ctx->pc == 0x186D30u) {
        ctx->pc = 0x186D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D2Cu;
        // 0x186d30: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D34u;
        goto label_186d34;
    }
    ctx->pc = 0x186D2Cu;
    {
        const bool branch_taken_0x186d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D2Cu;
        // 0x186d30: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d2c) {
            ctx->pc = 0x186D44u;
            goto label_186d44;
        }
    }
    ctx->pc = 0x186D34u;
label_186d34:
    // 0x186d34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186d38:
    // 0x186d38: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_186d3c:
    if (ctx->pc == 0x186D3Cu) {
        ctx->pc = 0x186D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D38u;
        // 0x186d3c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D40u;
        goto label_186d40;
    }
    ctx->pc = 0x186D38u;
    {
        const bool branch_taken_0x186d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x186d38) {
            ctx->pc = 0x186D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D38u;
            // 0x186d3c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D44u;
            goto label_186d44;
        }
    }
    ctx->pc = 0x186D40u;
label_186d40:
    // 0x186d40: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x186d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_186d44:
    // 0x186d44: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x186d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_186d48:
    // 0x186d48: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x186d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_186d4c:
    // 0x186d4c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186d50:
    // 0x186d50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_186d54:
    // 0x186d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186d58:
    // 0x186d58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186d5c:
    // 0x186d5c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x186d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_186d60:
    // 0x186d60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x186d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_186d64:
    // 0x186d64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186d68:
    if (ctx->pc == 0x186D68u) {
        ctx->pc = 0x186D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D64u;
        // 0x186d68: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D6Cu;
        goto label_186d6c;
    }
    ctx->pc = 0x186D64u;
    {
        const bool branch_taken_0x186d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d64) {
            ctx->pc = 0x186D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D64u;
            // 0x186d68: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D6Cu;
            goto label_186d6c;
        }
    }
    ctx->pc = 0x186D6Cu;
label_186d6c:
    // 0x186d6c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x186d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186d70:
    // 0x186d70: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186d74:
    // 0x186d74: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x186d74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_186d78:
    // 0x186d78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186d7c:
    // 0x186d7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_186d80:
    if (ctx->pc == 0x186D80u) {
        ctx->pc = 0x186D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D7Cu;
        // 0x186d80: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D84u;
        goto label_186d84;
    }
    ctx->pc = 0x186D7Cu;
    {
        const bool branch_taken_0x186d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d7c) {
            ctx->pc = 0x186D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D7Cu;
            // 0x186d80: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D84u;
            goto label_186d84;
        }
    }
    ctx->pc = 0x186D84u;
label_186d84:
    // 0x186d84: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x186d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_186d88:
    // 0x186d88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186d8c:
    // 0x186d8c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186d90:
    // 0x186d90: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_186d94:
    if (ctx->pc == 0x186D94u) {
        ctx->pc = 0x186D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D90u;
        // 0x186d94: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D98u;
        goto label_186d98;
    }
    ctx->pc = 0x186D90u;
    {
        const bool branch_taken_0x186d90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x186d90) {
            ctx->pc = 0x186D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D90u;
            // 0x186d94: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DA0u;
            goto label_186da0;
        }
    }
    ctx->pc = 0x186D98u;
label_186d98:
    // 0x186d98: 0x10000005  b           . + 4 + (0x5 << 2)
label_186d9c:
    if (ctx->pc == 0x186D9Cu) {
        ctx->pc = 0x186D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D98u;
        // 0x186d9c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DA0u;
        goto label_186da0;
    }
    ctx->pc = 0x186D98u;
    {
        const bool branch_taken_0x186d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D98u;
        // 0x186d9c: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d98) {
            ctx->pc = 0x186DB0u;
            goto label_186db0;
        }
    }
    ctx->pc = 0x186DA0u;
label_186da0:
    // 0x186da0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_186da4:
    // 0x186da4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_186da8:
    if (ctx->pc == 0x186DA8u) {
        ctx->pc = 0x186DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DA4u;
        // 0x186da8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DACu;
        goto label_186dac;
    }
    ctx->pc = 0x186DA4u;
    {
        const bool branch_taken_0x186da4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x186da4) {
            ctx->pc = 0x186DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DA4u;
            // 0x186da8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DB0u;
            goto label_186db0;
        }
    }
    ctx->pc = 0x186DACu;
label_186dac:
    // 0x186dac: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x186dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_186db0:
    // 0x186db0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x186db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_186db4:
    // 0x186db4: 0x1000000a  b           . + 4 + (0xA << 2)
label_186db8:
    if (ctx->pc == 0x186DB8u) {
        ctx->pc = 0x186DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DB4u;
        // 0x186db8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DBCu;
        goto label_186dbc;
    }
    ctx->pc = 0x186DB4u;
    {
        const bool branch_taken_0x186db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DB4u;
        // 0x186db8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186db4) {
            ctx->pc = 0x186DE0u;
            goto label_186de0;
        }
    }
    ctx->pc = 0x186DBCu;
label_186dbc:
    // 0x186dbc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x186dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_186dc0:
    // 0x186dc0: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_186dc4:
    if (ctx->pc == 0x186DC4u) {
        ctx->pc = 0x186DC8u;
        goto label_186dc8;
    }
    ctx->pc = 0x186DC0u;
    {
        const bool branch_taken_0x186dc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x186dc0) {
            ctx->pc = 0x186DE0u;
            goto label_186de0;
        }
    }
    ctx->pc = 0x186DC8u;
label_186dc8:
    // 0x186dc8: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_186dcc:
    if (ctx->pc == 0x186DCCu) {
        ctx->pc = 0x186DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DC8u;
        // 0x186dcc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DD0u;
        goto label_186dd0;
    }
    ctx->pc = 0x186DC8u;
    {
        const bool branch_taken_0x186dc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x186dc8) {
            ctx->pc = 0x186DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DC8u;
            // 0x186dcc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186ab0;
        }
    }
    ctx->pc = 0x186DD0u;
label_186dd0:
    // 0x186dd0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x186dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_186dd4:
    // 0x186dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186dd8:
    // 0x186dd8: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_186ddc:
    if (ctx->pc == 0x186DDCu) {
        ctx->pc = 0x186DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DD8u;
        // 0x186ddc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DE0u;
        goto label_186de0;
    }
    ctx->pc = 0x186DD8u;
    {
        const bool branch_taken_0x186dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186dd8) {
            ctx->pc = 0x186DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DD8u;
            // 0x186ddc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186ab0;
        }
    }
    ctx->pc = 0x186DE0u;
label_186de0:
    // 0x186de0: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_186de4:
    if (ctx->pc == 0x186DE4u) {
        ctx->pc = 0x186DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DE0u;
        // 0x186de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DE8u;
        goto label_186de8;
    }
    ctx->pc = 0x186DE0u;
    {
        const bool branch_taken_0x186de0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DE0u;
        // 0x186de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186de0) {
            ctx->pc = 0x186DECu;
            goto label_186dec;
        }
    }
    ctx->pc = 0x186DE8u;
label_186de8:
    // 0x186de8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x186de8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_186dec:
    // 0x186dec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_186df0:
    if (ctx->pc == 0x186DF0u) {
        ctx->pc = 0x186DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DECu;
        // 0x186df0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DF4u;
        goto label_186df4;
    }
    ctx->pc = 0x186DECu;
    {
        const bool branch_taken_0x186dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DECu;
        // 0x186df0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186dec) {
            ctx->pc = 0x186E18u;
            goto label_186e18;
        }
    }
    ctx->pc = 0x186DF4u;
label_186df4:
    // 0x186df4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_186df8:
    // 0x186df8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_186dfc:
    // 0x186dfc: 0x24c62c10  addiu       $a2, $a2, 0x2C10
    ctx->pc = 0x186dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11280));
label_186e00:
    // 0x186e00: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x186e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_186e04:
    // 0x186e04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186e08:
    // 0x186e08: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x186e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_186e0c:
    // 0x186e0c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x186e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_186e10:
    // 0x186e10: 0x60f809  jalr        $v1
label_186e14:
    if (ctx->pc == 0x186E14u) {
        ctx->pc = 0x186E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E10u;
        // 0x186e14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E18u;
        goto label_186e18;
    }
    ctx->pc = 0x186E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186E18u);
        ctx->pc = 0x186E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E10u;
        // 0x186e14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E10u, 0x186E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186E18u;
label_186e18:
    // 0x186e18: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x186e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_186e1c:
    // 0x186e1c: 0x34039024  ori         $v1, $zero, 0x9024
    ctx->pc = 0x186e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36900);
label_186e20:
    // 0x186e20: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x186e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_186e24:
    // 0x186e24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_186e28:
    // 0x186e28: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_186e2c:
    if (ctx->pc == 0x186E2Cu) {
        ctx->pc = 0x186E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E28u;
        // 0x186e2c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E30u;
        goto label_186e30;
    }
    ctx->pc = 0x186E28u;
    {
        const bool branch_taken_0x186e28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E28u;
        // 0x186e2c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e28) {
            ctx->pc = 0x186E4Cu;
            goto label_186e4c;
        }
    }
    ctx->pc = 0x186E30u;
label_186e30:
    // 0x186e30: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x186e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_186e34:
    // 0x186e34: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x186e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_186e38:
    // 0x186e38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_186e3c:
    // 0x186e3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x186e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_186e40:
    // 0x186e40: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x186e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_186e44:
    // 0x186e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186e48:
    // 0x186e48: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x186e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_186e4c:
    // 0x186e4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186e50:
    // 0x186e50: 0xc0550a4  jal         func_154290
label_186e54:
    if (ctx->pc == 0x186E54u) {
        ctx->pc = 0x186E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E50u;
        // 0x186e54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E58u;
        goto label_186e58;
    }
    ctx->pc = 0x186E50u;
    SET_GPR_U32(ctx, 31, 0x186E58u);
    ctx->pc = 0x186E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E50u;
    // 0x186e54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154290u, 0x186E50u, 0x186E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E58u;
label_186e58:
    // 0x186e58: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x186e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_186e5c:
    // 0x186e5c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x186e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_186e60:
    // 0x186e60: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x186e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_186e64:
    // 0x186e64: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x186e64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_186e68:
    // 0x186e68: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x186e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_186e6c:
    // 0x186e6c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x186e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_186e70:
    // 0x186e70: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x186e70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_186e74:
    // 0x186e74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x186e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_186e78:
    // 0x186e78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x186e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_186e7c:
    // 0x186e7c: 0x3e00008  jr          $ra
label_186e80:
    if (ctx->pc == 0x186E80u) {
        ctx->pc = 0x186E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E7Cu;
        // 0x186e80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E84u;
        goto label_186e84;
    }
    ctx->pc = 0x186E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E7Cu;
        // 0x186e80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E84u;
label_186e84:
    // 0x186e84: 0x0  nop
    ctx->pc = 0x186e84u;
    // NOP
    ctx->pc = 0x186e88u;
}
