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

// Function: sub_00158728
// Address: 0x158728 - 0x159468
void sub_00158728_0x158728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158728_0x158728");
#endif

    switch (ctx->pc) {
        case 0x158728u: goto label_158728;
        case 0x15872cu: goto label_15872c;
        case 0x158730u: goto label_158730;
        case 0x158734u: goto label_158734;
        case 0x158738u: goto label_158738;
        case 0x15873cu: goto label_15873c;
        case 0x158740u: goto label_158740;
        case 0x158744u: goto label_158744;
        case 0x158748u: goto label_158748;
        case 0x15874cu: goto label_15874c;
        case 0x158750u: goto label_158750;
        case 0x158754u: goto label_158754;
        case 0x158758u: goto label_158758;
        case 0x15875cu: goto label_15875c;
        case 0x158760u: goto label_158760;
        case 0x158764u: goto label_158764;
        case 0x158768u: goto label_158768;
        case 0x15876cu: goto label_15876c;
        case 0x158770u: goto label_158770;
        case 0x158774u: goto label_158774;
        case 0x158778u: goto label_158778;
        case 0x15877cu: goto label_15877c;
        case 0x158780u: goto label_158780;
        case 0x158784u: goto label_158784;
        case 0x158788u: goto label_158788;
        case 0x15878cu: goto label_15878c;
        case 0x158790u: goto label_158790;
        case 0x158794u: goto label_158794;
        case 0x158798u: goto label_158798;
        case 0x15879cu: goto label_15879c;
        case 0x1587a0u: goto label_1587a0;
        case 0x1587a4u: goto label_1587a4;
        case 0x1587a8u: goto label_1587a8;
        case 0x1587acu: goto label_1587ac;
        case 0x1587b0u: goto label_1587b0;
        case 0x1587b4u: goto label_1587b4;
        case 0x1587b8u: goto label_1587b8;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587c0u: goto label_1587c0;
        case 0x1587c4u: goto label_1587c4;
        case 0x1587c8u: goto label_1587c8;
        case 0x1587ccu: goto label_1587cc;
        case 0x1587d0u: goto label_1587d0;
        case 0x1587d4u: goto label_1587d4;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587dcu: goto label_1587dc;
        case 0x1587e0u: goto label_1587e0;
        case 0x1587e4u: goto label_1587e4;
        case 0x1587e8u: goto label_1587e8;
        case 0x1587ecu: goto label_1587ec;
        case 0x1587f0u: goto label_1587f0;
        case 0x1587f4u: goto label_1587f4;
        case 0x1587f8u: goto label_1587f8;
        case 0x1587fcu: goto label_1587fc;
        case 0x158800u: goto label_158800;
        case 0x158804u: goto label_158804;
        case 0x158808u: goto label_158808;
        case 0x15880cu: goto label_15880c;
        case 0x158810u: goto label_158810;
        case 0x158814u: goto label_158814;
        case 0x158818u: goto label_158818;
        case 0x15881cu: goto label_15881c;
        case 0x158820u: goto label_158820;
        case 0x158824u: goto label_158824;
        case 0x158828u: goto label_158828;
        case 0x15882cu: goto label_15882c;
        case 0x158830u: goto label_158830;
        case 0x158834u: goto label_158834;
        case 0x158838u: goto label_158838;
        case 0x15883cu: goto label_15883c;
        case 0x158840u: goto label_158840;
        case 0x158844u: goto label_158844;
        case 0x158848u: goto label_158848;
        case 0x15884cu: goto label_15884c;
        case 0x158850u: goto label_158850;
        case 0x158854u: goto label_158854;
        case 0x158858u: goto label_158858;
        case 0x15885cu: goto label_15885c;
        case 0x158860u: goto label_158860;
        case 0x158864u: goto label_158864;
        case 0x158868u: goto label_158868;
        case 0x15886cu: goto label_15886c;
        case 0x158870u: goto label_158870;
        case 0x158874u: goto label_158874;
        case 0x158878u: goto label_158878;
        case 0x15887cu: goto label_15887c;
        case 0x158880u: goto label_158880;
        case 0x158884u: goto label_158884;
        case 0x158888u: goto label_158888;
        case 0x15888cu: goto label_15888c;
        case 0x158890u: goto label_158890;
        case 0x158894u: goto label_158894;
        case 0x158898u: goto label_158898;
        case 0x15889cu: goto label_15889c;
        case 0x1588a0u: goto label_1588a0;
        case 0x1588a4u: goto label_1588a4;
        case 0x1588a8u: goto label_1588a8;
        case 0x1588acu: goto label_1588ac;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588b4u: goto label_1588b4;
        case 0x1588b8u: goto label_1588b8;
        case 0x1588bcu: goto label_1588bc;
        case 0x1588c0u: goto label_1588c0;
        case 0x1588c4u: goto label_1588c4;
        case 0x1588c8u: goto label_1588c8;
        case 0x1588ccu: goto label_1588cc;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588d4u: goto label_1588d4;
        case 0x1588d8u: goto label_1588d8;
        case 0x1588dcu: goto label_1588dc;
        case 0x1588e0u: goto label_1588e0;
        case 0x1588e4u: goto label_1588e4;
        case 0x1588e8u: goto label_1588e8;
        case 0x1588ecu: goto label_1588ec;
        case 0x1588f0u: goto label_1588f0;
        case 0x1588f4u: goto label_1588f4;
        case 0x1588f8u: goto label_1588f8;
        case 0x1588fcu: goto label_1588fc;
        case 0x158900u: goto label_158900;
        case 0x158904u: goto label_158904;
        case 0x158908u: goto label_158908;
        case 0x15890cu: goto label_15890c;
        case 0x158910u: goto label_158910;
        case 0x158914u: goto label_158914;
        case 0x158918u: goto label_158918;
        case 0x15891cu: goto label_15891c;
        case 0x158920u: goto label_158920;
        case 0x158924u: goto label_158924;
        case 0x158928u: goto label_158928;
        case 0x15892cu: goto label_15892c;
        case 0x158930u: goto label_158930;
        case 0x158934u: goto label_158934;
        case 0x158938u: goto label_158938;
        case 0x15893cu: goto label_15893c;
        case 0x158940u: goto label_158940;
        case 0x158944u: goto label_158944;
        case 0x158948u: goto label_158948;
        case 0x15894cu: goto label_15894c;
        case 0x158950u: goto label_158950;
        case 0x158954u: goto label_158954;
        case 0x158958u: goto label_158958;
        case 0x15895cu: goto label_15895c;
        case 0x158960u: goto label_158960;
        case 0x158964u: goto label_158964;
        case 0x158968u: goto label_158968;
        case 0x15896cu: goto label_15896c;
        case 0x158970u: goto label_158970;
        case 0x158974u: goto label_158974;
        case 0x158978u: goto label_158978;
        case 0x15897cu: goto label_15897c;
        case 0x158980u: goto label_158980;
        case 0x158984u: goto label_158984;
        case 0x158988u: goto label_158988;
        case 0x15898cu: goto label_15898c;
        case 0x158990u: goto label_158990;
        case 0x158994u: goto label_158994;
        case 0x158998u: goto label_158998;
        case 0x15899cu: goto label_15899c;
        case 0x1589a0u: goto label_1589a0;
        case 0x1589a4u: goto label_1589a4;
        case 0x1589a8u: goto label_1589a8;
        case 0x1589acu: goto label_1589ac;
        case 0x1589b0u: goto label_1589b0;
        case 0x1589b4u: goto label_1589b4;
        case 0x1589b8u: goto label_1589b8;
        case 0x1589bcu: goto label_1589bc;
        case 0x1589c0u: goto label_1589c0;
        case 0x1589c4u: goto label_1589c4;
        case 0x1589c8u: goto label_1589c8;
        case 0x1589ccu: goto label_1589cc;
        case 0x1589d0u: goto label_1589d0;
        case 0x1589d4u: goto label_1589d4;
        case 0x1589d8u: goto label_1589d8;
        case 0x1589dcu: goto label_1589dc;
        case 0x1589e0u: goto label_1589e0;
        case 0x1589e4u: goto label_1589e4;
        case 0x1589e8u: goto label_1589e8;
        case 0x1589ecu: goto label_1589ec;
        case 0x1589f0u: goto label_1589f0;
        case 0x1589f4u: goto label_1589f4;
        case 0x1589f8u: goto label_1589f8;
        case 0x1589fcu: goto label_1589fc;
        case 0x158a00u: goto label_158a00;
        case 0x158a04u: goto label_158a04;
        case 0x158a08u: goto label_158a08;
        case 0x158a0cu: goto label_158a0c;
        case 0x158a10u: goto label_158a10;
        case 0x158a14u: goto label_158a14;
        case 0x158a18u: goto label_158a18;
        case 0x158a1cu: goto label_158a1c;
        case 0x158a20u: goto label_158a20;
        case 0x158a24u: goto label_158a24;
        case 0x158a28u: goto label_158a28;
        case 0x158a2cu: goto label_158a2c;
        case 0x158a30u: goto label_158a30;
        case 0x158a34u: goto label_158a34;
        case 0x158a38u: goto label_158a38;
        case 0x158a3cu: goto label_158a3c;
        case 0x158a40u: goto label_158a40;
        case 0x158a44u: goto label_158a44;
        case 0x158a48u: goto label_158a48;
        case 0x158a4cu: goto label_158a4c;
        case 0x158a50u: goto label_158a50;
        case 0x158a54u: goto label_158a54;
        case 0x158a58u: goto label_158a58;
        case 0x158a5cu: goto label_158a5c;
        case 0x158a60u: goto label_158a60;
        case 0x158a64u: goto label_158a64;
        case 0x158a68u: goto label_158a68;
        case 0x158a6cu: goto label_158a6c;
        case 0x158a70u: goto label_158a70;
        case 0x158a74u: goto label_158a74;
        case 0x158a78u: goto label_158a78;
        case 0x158a7cu: goto label_158a7c;
        case 0x158a80u: goto label_158a80;
        case 0x158a84u: goto label_158a84;
        case 0x158a88u: goto label_158a88;
        case 0x158a8cu: goto label_158a8c;
        case 0x158a90u: goto label_158a90;
        case 0x158a94u: goto label_158a94;
        case 0x158a98u: goto label_158a98;
        case 0x158a9cu: goto label_158a9c;
        case 0x158aa0u: goto label_158aa0;
        case 0x158aa4u: goto label_158aa4;
        case 0x158aa8u: goto label_158aa8;
        case 0x158aacu: goto label_158aac;
        case 0x158ab0u: goto label_158ab0;
        case 0x158ab4u: goto label_158ab4;
        case 0x158ab8u: goto label_158ab8;
        case 0x158abcu: goto label_158abc;
        case 0x158ac0u: goto label_158ac0;
        case 0x158ac4u: goto label_158ac4;
        case 0x158ac8u: goto label_158ac8;
        case 0x158accu: goto label_158acc;
        case 0x158ad0u: goto label_158ad0;
        case 0x158ad4u: goto label_158ad4;
        case 0x158ad8u: goto label_158ad8;
        case 0x158adcu: goto label_158adc;
        case 0x158ae0u: goto label_158ae0;
        case 0x158ae4u: goto label_158ae4;
        case 0x158ae8u: goto label_158ae8;
        case 0x158aecu: goto label_158aec;
        case 0x158af0u: goto label_158af0;
        case 0x158af4u: goto label_158af4;
        case 0x158af8u: goto label_158af8;
        case 0x158afcu: goto label_158afc;
        case 0x158b00u: goto label_158b00;
        case 0x158b04u: goto label_158b04;
        case 0x158b08u: goto label_158b08;
        case 0x158b0cu: goto label_158b0c;
        case 0x158b10u: goto label_158b10;
        case 0x158b14u: goto label_158b14;
        case 0x158b18u: goto label_158b18;
        case 0x158b1cu: goto label_158b1c;
        case 0x158b20u: goto label_158b20;
        case 0x158b24u: goto label_158b24;
        case 0x158b28u: goto label_158b28;
        case 0x158b2cu: goto label_158b2c;
        case 0x158b30u: goto label_158b30;
        case 0x158b34u: goto label_158b34;
        case 0x158b38u: goto label_158b38;
        case 0x158b3cu: goto label_158b3c;
        case 0x158b40u: goto label_158b40;
        case 0x158b44u: goto label_158b44;
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        case 0x158b80u: goto label_158b80;
        case 0x158b84u: goto label_158b84;
        case 0x158b88u: goto label_158b88;
        case 0x158b8cu: goto label_158b8c;
        case 0x158b90u: goto label_158b90;
        case 0x158b94u: goto label_158b94;
        case 0x158b98u: goto label_158b98;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba0u: goto label_158ba0;
        case 0x158ba4u: goto label_158ba4;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bacu: goto label_158bac;
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        case 0x158c80u: goto label_158c80;
        case 0x158c84u: goto label_158c84;
        case 0x158c88u: goto label_158c88;
        case 0x158c8cu: goto label_158c8c;
        case 0x158c90u: goto label_158c90;
        case 0x158c94u: goto label_158c94;
        case 0x158c98u: goto label_158c98;
        case 0x158c9cu: goto label_158c9c;
        case 0x158ca0u: goto label_158ca0;
        case 0x158ca4u: goto label_158ca4;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cacu: goto label_158cac;
        case 0x158cb0u: goto label_158cb0;
        case 0x158cb4u: goto label_158cb4;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cbcu: goto label_158cbc;
        case 0x158cc0u: goto label_158cc0;
        case 0x158cc4u: goto label_158cc4;
        case 0x158cc8u: goto label_158cc8;
        case 0x158cccu: goto label_158ccc;
        case 0x158cd0u: goto label_158cd0;
        case 0x158cd4u: goto label_158cd4;
        case 0x158cd8u: goto label_158cd8;
        case 0x158cdcu: goto label_158cdc;
        case 0x158ce0u: goto label_158ce0;
        case 0x158ce4u: goto label_158ce4;
        case 0x158ce8u: goto label_158ce8;
        case 0x158cecu: goto label_158cec;
        case 0x158cf0u: goto label_158cf0;
        case 0x158cf4u: goto label_158cf4;
        case 0x158cf8u: goto label_158cf8;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d00u: goto label_158d00;
        case 0x158d04u: goto label_158d04;
        case 0x158d08u: goto label_158d08;
        case 0x158d0cu: goto label_158d0c;
        case 0x158d10u: goto label_158d10;
        case 0x158d14u: goto label_158d14;
        case 0x158d18u: goto label_158d18;
        case 0x158d1cu: goto label_158d1c;
        case 0x158d20u: goto label_158d20;
        case 0x158d24u: goto label_158d24;
        case 0x158d28u: goto label_158d28;
        case 0x158d2cu: goto label_158d2c;
        case 0x158d30u: goto label_158d30;
        case 0x158d34u: goto label_158d34;
        case 0x158d38u: goto label_158d38;
        case 0x158d3cu: goto label_158d3c;
        case 0x158d40u: goto label_158d40;
        case 0x158d44u: goto label_158d44;
        case 0x158d48u: goto label_158d48;
        case 0x158d4cu: goto label_158d4c;
        case 0x158d50u: goto label_158d50;
        case 0x158d54u: goto label_158d54;
        case 0x158d58u: goto label_158d58;
        case 0x158d5cu: goto label_158d5c;
        case 0x158d60u: goto label_158d60;
        case 0x158d64u: goto label_158d64;
        case 0x158d68u: goto label_158d68;
        case 0x158d6cu: goto label_158d6c;
        case 0x158d70u: goto label_158d70;
        case 0x158d74u: goto label_158d74;
        case 0x158d78u: goto label_158d78;
        case 0x158d7cu: goto label_158d7c;
        case 0x158d80u: goto label_158d80;
        case 0x158d84u: goto label_158d84;
        case 0x158d88u: goto label_158d88;
        case 0x158d8cu: goto label_158d8c;
        case 0x158d90u: goto label_158d90;
        case 0x158d94u: goto label_158d94;
        case 0x158d98u: goto label_158d98;
        case 0x158d9cu: goto label_158d9c;
        case 0x158da0u: goto label_158da0;
        case 0x158da4u: goto label_158da4;
        case 0x158da8u: goto label_158da8;
        case 0x158dacu: goto label_158dac;
        case 0x158db0u: goto label_158db0;
        case 0x158db4u: goto label_158db4;
        case 0x158db8u: goto label_158db8;
        case 0x158dbcu: goto label_158dbc;
        case 0x158dc0u: goto label_158dc0;
        case 0x158dc4u: goto label_158dc4;
        case 0x158dc8u: goto label_158dc8;
        case 0x158dccu: goto label_158dcc;
        case 0x158dd0u: goto label_158dd0;
        case 0x158dd4u: goto label_158dd4;
        case 0x158dd8u: goto label_158dd8;
        case 0x158ddcu: goto label_158ddc;
        case 0x158de0u: goto label_158de0;
        case 0x158de4u: goto label_158de4;
        case 0x158de8u: goto label_158de8;
        case 0x158decu: goto label_158dec;
        case 0x158df0u: goto label_158df0;
        case 0x158df4u: goto label_158df4;
        case 0x158df8u: goto label_158df8;
        case 0x158dfcu: goto label_158dfc;
        case 0x158e00u: goto label_158e00;
        case 0x158e04u: goto label_158e04;
        case 0x158e08u: goto label_158e08;
        case 0x158e0cu: goto label_158e0c;
        case 0x158e10u: goto label_158e10;
        case 0x158e14u: goto label_158e14;
        case 0x158e18u: goto label_158e18;
        case 0x158e1cu: goto label_158e1c;
        case 0x158e20u: goto label_158e20;
        case 0x158e24u: goto label_158e24;
        case 0x158e28u: goto label_158e28;
        case 0x158e2cu: goto label_158e2c;
        case 0x158e30u: goto label_158e30;
        case 0x158e34u: goto label_158e34;
        case 0x158e38u: goto label_158e38;
        case 0x158e3cu: goto label_158e3c;
        case 0x158e40u: goto label_158e40;
        case 0x158e44u: goto label_158e44;
        case 0x158e48u: goto label_158e48;
        case 0x158e4cu: goto label_158e4c;
        case 0x158e50u: goto label_158e50;
        case 0x158e54u: goto label_158e54;
        case 0x158e58u: goto label_158e58;
        case 0x158e5cu: goto label_158e5c;
        case 0x158e60u: goto label_158e60;
        case 0x158e64u: goto label_158e64;
        case 0x158e68u: goto label_158e68;
        case 0x158e6cu: goto label_158e6c;
        case 0x158e70u: goto label_158e70;
        case 0x158e74u: goto label_158e74;
        case 0x158e78u: goto label_158e78;
        case 0x158e7cu: goto label_158e7c;
        case 0x158e80u: goto label_158e80;
        case 0x158e84u: goto label_158e84;
        case 0x158e88u: goto label_158e88;
        case 0x158e8cu: goto label_158e8c;
        case 0x158e90u: goto label_158e90;
        case 0x158e94u: goto label_158e94;
        case 0x158e98u: goto label_158e98;
        case 0x158e9cu: goto label_158e9c;
        case 0x158ea0u: goto label_158ea0;
        case 0x158ea4u: goto label_158ea4;
        case 0x158ea8u: goto label_158ea8;
        case 0x158eacu: goto label_158eac;
        case 0x158eb0u: goto label_158eb0;
        case 0x158eb4u: goto label_158eb4;
        case 0x158eb8u: goto label_158eb8;
        case 0x158ebcu: goto label_158ebc;
        case 0x158ec0u: goto label_158ec0;
        case 0x158ec4u: goto label_158ec4;
        case 0x158ec8u: goto label_158ec8;
        case 0x158eccu: goto label_158ecc;
        case 0x158ed0u: goto label_158ed0;
        case 0x158ed4u: goto label_158ed4;
        case 0x158ed8u: goto label_158ed8;
        case 0x158edcu: goto label_158edc;
        case 0x158ee0u: goto label_158ee0;
        case 0x158ee4u: goto label_158ee4;
        case 0x158ee8u: goto label_158ee8;
        case 0x158eecu: goto label_158eec;
        case 0x158ef0u: goto label_158ef0;
        case 0x158ef4u: goto label_158ef4;
        case 0x158ef8u: goto label_158ef8;
        case 0x158efcu: goto label_158efc;
        case 0x158f00u: goto label_158f00;
        case 0x158f04u: goto label_158f04;
        case 0x158f08u: goto label_158f08;
        case 0x158f0cu: goto label_158f0c;
        case 0x158f10u: goto label_158f10;
        case 0x158f14u: goto label_158f14;
        case 0x158f18u: goto label_158f18;
        case 0x158f1cu: goto label_158f1c;
        case 0x158f20u: goto label_158f20;
        case 0x158f24u: goto label_158f24;
        case 0x158f28u: goto label_158f28;
        case 0x158f2cu: goto label_158f2c;
        case 0x158f30u: goto label_158f30;
        case 0x158f34u: goto label_158f34;
        case 0x158f38u: goto label_158f38;
        case 0x158f3cu: goto label_158f3c;
        case 0x158f40u: goto label_158f40;
        case 0x158f44u: goto label_158f44;
        case 0x158f48u: goto label_158f48;
        case 0x158f4cu: goto label_158f4c;
        case 0x158f50u: goto label_158f50;
        case 0x158f54u: goto label_158f54;
        case 0x158f58u: goto label_158f58;
        case 0x158f5cu: goto label_158f5c;
        case 0x158f60u: goto label_158f60;
        case 0x158f64u: goto label_158f64;
        case 0x158f68u: goto label_158f68;
        case 0x158f6cu: goto label_158f6c;
        case 0x158f70u: goto label_158f70;
        case 0x158f74u: goto label_158f74;
        case 0x158f78u: goto label_158f78;
        case 0x158f7cu: goto label_158f7c;
        case 0x158f80u: goto label_158f80;
        case 0x158f84u: goto label_158f84;
        case 0x158f88u: goto label_158f88;
        case 0x158f8cu: goto label_158f8c;
        case 0x158f90u: goto label_158f90;
        case 0x158f94u: goto label_158f94;
        case 0x158f98u: goto label_158f98;
        case 0x158f9cu: goto label_158f9c;
        case 0x158fa0u: goto label_158fa0;
        case 0x158fa4u: goto label_158fa4;
        case 0x158fa8u: goto label_158fa8;
        case 0x158facu: goto label_158fac;
        case 0x158fb0u: goto label_158fb0;
        case 0x158fb4u: goto label_158fb4;
        case 0x158fb8u: goto label_158fb8;
        case 0x158fbcu: goto label_158fbc;
        case 0x158fc0u: goto label_158fc0;
        case 0x158fc4u: goto label_158fc4;
        case 0x158fc8u: goto label_158fc8;
        case 0x158fccu: goto label_158fcc;
        case 0x158fd0u: goto label_158fd0;
        case 0x158fd4u: goto label_158fd4;
        case 0x158fd8u: goto label_158fd8;
        case 0x158fdcu: goto label_158fdc;
        case 0x158fe0u: goto label_158fe0;
        case 0x158fe4u: goto label_158fe4;
        case 0x158fe8u: goto label_158fe8;
        case 0x158fecu: goto label_158fec;
        case 0x158ff0u: goto label_158ff0;
        case 0x158ff4u: goto label_158ff4;
        case 0x158ff8u: goto label_158ff8;
        case 0x158ffcu: goto label_158ffc;
        case 0x159000u: goto label_159000;
        case 0x159004u: goto label_159004;
        case 0x159008u: goto label_159008;
        case 0x15900cu: goto label_15900c;
        case 0x159010u: goto label_159010;
        case 0x159014u: goto label_159014;
        case 0x159018u: goto label_159018;
        case 0x15901cu: goto label_15901c;
        case 0x159020u: goto label_159020;
        case 0x159024u: goto label_159024;
        case 0x159028u: goto label_159028;
        case 0x15902cu: goto label_15902c;
        case 0x159030u: goto label_159030;
        case 0x159034u: goto label_159034;
        case 0x159038u: goto label_159038;
        case 0x15903cu: goto label_15903c;
        case 0x159040u: goto label_159040;
        case 0x159044u: goto label_159044;
        case 0x159048u: goto label_159048;
        case 0x15904cu: goto label_15904c;
        case 0x159050u: goto label_159050;
        case 0x159054u: goto label_159054;
        case 0x159058u: goto label_159058;
        case 0x15905cu: goto label_15905c;
        case 0x159060u: goto label_159060;
        case 0x159064u: goto label_159064;
        case 0x159068u: goto label_159068;
        case 0x15906cu: goto label_15906c;
        case 0x159070u: goto label_159070;
        case 0x159074u: goto label_159074;
        case 0x159078u: goto label_159078;
        case 0x15907cu: goto label_15907c;
        case 0x159080u: goto label_159080;
        case 0x159084u: goto label_159084;
        case 0x159088u: goto label_159088;
        case 0x15908cu: goto label_15908c;
        case 0x159090u: goto label_159090;
        case 0x159094u: goto label_159094;
        case 0x159098u: goto label_159098;
        case 0x15909cu: goto label_15909c;
        case 0x1590a0u: goto label_1590a0;
        case 0x1590a4u: goto label_1590a4;
        case 0x1590a8u: goto label_1590a8;
        case 0x1590acu: goto label_1590ac;
        case 0x1590b0u: goto label_1590b0;
        case 0x1590b4u: goto label_1590b4;
        case 0x1590b8u: goto label_1590b8;
        case 0x1590bcu: goto label_1590bc;
        case 0x1590c0u: goto label_1590c0;
        case 0x1590c4u: goto label_1590c4;
        case 0x1590c8u: goto label_1590c8;
        case 0x1590ccu: goto label_1590cc;
        case 0x1590d0u: goto label_1590d0;
        case 0x1590d4u: goto label_1590d4;
        case 0x1590d8u: goto label_1590d8;
        case 0x1590dcu: goto label_1590dc;
        case 0x1590e0u: goto label_1590e0;
        case 0x1590e4u: goto label_1590e4;
        case 0x1590e8u: goto label_1590e8;
        case 0x1590ecu: goto label_1590ec;
        case 0x1590f0u: goto label_1590f0;
        case 0x1590f4u: goto label_1590f4;
        case 0x1590f8u: goto label_1590f8;
        case 0x1590fcu: goto label_1590fc;
        case 0x159100u: goto label_159100;
        case 0x159104u: goto label_159104;
        case 0x159108u: goto label_159108;
        case 0x15910cu: goto label_15910c;
        case 0x159110u: goto label_159110;
        case 0x159114u: goto label_159114;
        case 0x159118u: goto label_159118;
        case 0x15911cu: goto label_15911c;
        case 0x159120u: goto label_159120;
        case 0x159124u: goto label_159124;
        case 0x159128u: goto label_159128;
        case 0x15912cu: goto label_15912c;
        case 0x159130u: goto label_159130;
        case 0x159134u: goto label_159134;
        case 0x159138u: goto label_159138;
        case 0x15913cu: goto label_15913c;
        case 0x159140u: goto label_159140;
        case 0x159144u: goto label_159144;
        case 0x159148u: goto label_159148;
        case 0x15914cu: goto label_15914c;
        case 0x159150u: goto label_159150;
        case 0x159154u: goto label_159154;
        case 0x159158u: goto label_159158;
        case 0x15915cu: goto label_15915c;
        case 0x159160u: goto label_159160;
        case 0x159164u: goto label_159164;
        case 0x159168u: goto label_159168;
        case 0x15916cu: goto label_15916c;
        case 0x159170u: goto label_159170;
        case 0x159174u: goto label_159174;
        case 0x159178u: goto label_159178;
        case 0x15917cu: goto label_15917c;
        case 0x159180u: goto label_159180;
        case 0x159184u: goto label_159184;
        case 0x159188u: goto label_159188;
        case 0x15918cu: goto label_15918c;
        case 0x159190u: goto label_159190;
        case 0x159194u: goto label_159194;
        case 0x159198u: goto label_159198;
        case 0x15919cu: goto label_15919c;
        case 0x1591a0u: goto label_1591a0;
        case 0x1591a4u: goto label_1591a4;
        case 0x1591a8u: goto label_1591a8;
        case 0x1591acu: goto label_1591ac;
        case 0x1591b0u: goto label_1591b0;
        case 0x1591b4u: goto label_1591b4;
        case 0x1591b8u: goto label_1591b8;
        case 0x1591bcu: goto label_1591bc;
        case 0x1591c0u: goto label_1591c0;
        case 0x1591c4u: goto label_1591c4;
        case 0x1591c8u: goto label_1591c8;
        case 0x1591ccu: goto label_1591cc;
        case 0x1591d0u: goto label_1591d0;
        case 0x1591d4u: goto label_1591d4;
        case 0x1591d8u: goto label_1591d8;
        case 0x1591dcu: goto label_1591dc;
        case 0x1591e0u: goto label_1591e0;
        case 0x1591e4u: goto label_1591e4;
        case 0x1591e8u: goto label_1591e8;
        case 0x1591ecu: goto label_1591ec;
        case 0x1591f0u: goto label_1591f0;
        case 0x1591f4u: goto label_1591f4;
        case 0x1591f8u: goto label_1591f8;
        case 0x1591fcu: goto label_1591fc;
        case 0x159200u: goto label_159200;
        case 0x159204u: goto label_159204;
        case 0x159208u: goto label_159208;
        case 0x15920cu: goto label_15920c;
        case 0x159210u: goto label_159210;
        case 0x159214u: goto label_159214;
        case 0x159218u: goto label_159218;
        case 0x15921cu: goto label_15921c;
        case 0x159220u: goto label_159220;
        case 0x159224u: goto label_159224;
        case 0x159228u: goto label_159228;
        case 0x15922cu: goto label_15922c;
        case 0x159230u: goto label_159230;
        case 0x159234u: goto label_159234;
        case 0x159238u: goto label_159238;
        case 0x15923cu: goto label_15923c;
        case 0x159240u: goto label_159240;
        case 0x159244u: goto label_159244;
        case 0x159248u: goto label_159248;
        case 0x15924cu: goto label_15924c;
        case 0x159250u: goto label_159250;
        case 0x159254u: goto label_159254;
        case 0x159258u: goto label_159258;
        case 0x15925cu: goto label_15925c;
        case 0x159260u: goto label_159260;
        case 0x159264u: goto label_159264;
        case 0x159268u: goto label_159268;
        case 0x15926cu: goto label_15926c;
        case 0x159270u: goto label_159270;
        case 0x159274u: goto label_159274;
        case 0x159278u: goto label_159278;
        case 0x15927cu: goto label_15927c;
        case 0x159280u: goto label_159280;
        case 0x159284u: goto label_159284;
        case 0x159288u: goto label_159288;
        case 0x15928cu: goto label_15928c;
        case 0x159290u: goto label_159290;
        case 0x159294u: goto label_159294;
        case 0x159298u: goto label_159298;
        case 0x15929cu: goto label_15929c;
        case 0x1592a0u: goto label_1592a0;
        case 0x1592a4u: goto label_1592a4;
        case 0x1592a8u: goto label_1592a8;
        case 0x1592acu: goto label_1592ac;
        case 0x1592b0u: goto label_1592b0;
        case 0x1592b4u: goto label_1592b4;
        case 0x1592b8u: goto label_1592b8;
        case 0x1592bcu: goto label_1592bc;
        case 0x1592c0u: goto label_1592c0;
        case 0x1592c4u: goto label_1592c4;
        case 0x1592c8u: goto label_1592c8;
        case 0x1592ccu: goto label_1592cc;
        case 0x1592d0u: goto label_1592d0;
        case 0x1592d4u: goto label_1592d4;
        case 0x1592d8u: goto label_1592d8;
        case 0x1592dcu: goto label_1592dc;
        case 0x1592e0u: goto label_1592e0;
        case 0x1592e4u: goto label_1592e4;
        case 0x1592e8u: goto label_1592e8;
        case 0x1592ecu: goto label_1592ec;
        case 0x1592f0u: goto label_1592f0;
        case 0x1592f4u: goto label_1592f4;
        case 0x1592f8u: goto label_1592f8;
        case 0x1592fcu: goto label_1592fc;
        case 0x159300u: goto label_159300;
        case 0x159304u: goto label_159304;
        case 0x159308u: goto label_159308;
        case 0x15930cu: goto label_15930c;
        case 0x159310u: goto label_159310;
        case 0x159314u: goto label_159314;
        case 0x159318u: goto label_159318;
        case 0x15931cu: goto label_15931c;
        case 0x159320u: goto label_159320;
        case 0x159324u: goto label_159324;
        case 0x159328u: goto label_159328;
        case 0x15932cu: goto label_15932c;
        case 0x159330u: goto label_159330;
        case 0x159334u: goto label_159334;
        case 0x159338u: goto label_159338;
        case 0x15933cu: goto label_15933c;
        case 0x159340u: goto label_159340;
        case 0x159344u: goto label_159344;
        case 0x159348u: goto label_159348;
        case 0x15934cu: goto label_15934c;
        case 0x159350u: goto label_159350;
        case 0x159354u: goto label_159354;
        case 0x159358u: goto label_159358;
        case 0x15935cu: goto label_15935c;
        case 0x159360u: goto label_159360;
        case 0x159364u: goto label_159364;
        case 0x159368u: goto label_159368;
        case 0x15936cu: goto label_15936c;
        case 0x159370u: goto label_159370;
        case 0x159374u: goto label_159374;
        case 0x159378u: goto label_159378;
        case 0x15937cu: goto label_15937c;
        case 0x159380u: goto label_159380;
        case 0x159384u: goto label_159384;
        case 0x159388u: goto label_159388;
        case 0x15938cu: goto label_15938c;
        case 0x159390u: goto label_159390;
        case 0x159394u: goto label_159394;
        case 0x159398u: goto label_159398;
        case 0x15939cu: goto label_15939c;
        case 0x1593a0u: goto label_1593a0;
        case 0x1593a4u: goto label_1593a4;
        case 0x1593a8u: goto label_1593a8;
        case 0x1593acu: goto label_1593ac;
        case 0x1593b0u: goto label_1593b0;
        case 0x1593b4u: goto label_1593b4;
        case 0x1593b8u: goto label_1593b8;
        case 0x1593bcu: goto label_1593bc;
        case 0x1593c0u: goto label_1593c0;
        case 0x1593c4u: goto label_1593c4;
        case 0x1593c8u: goto label_1593c8;
        case 0x1593ccu: goto label_1593cc;
        case 0x1593d0u: goto label_1593d0;
        case 0x1593d4u: goto label_1593d4;
        case 0x1593d8u: goto label_1593d8;
        case 0x1593dcu: goto label_1593dc;
        case 0x1593e0u: goto label_1593e0;
        case 0x1593e4u: goto label_1593e4;
        case 0x1593e8u: goto label_1593e8;
        case 0x1593ecu: goto label_1593ec;
        case 0x1593f0u: goto label_1593f0;
        case 0x1593f4u: goto label_1593f4;
        case 0x1593f8u: goto label_1593f8;
        case 0x1593fcu: goto label_1593fc;
        case 0x159400u: goto label_159400;
        case 0x159404u: goto label_159404;
        case 0x159408u: goto label_159408;
        case 0x15940cu: goto label_15940c;
        case 0x159410u: goto label_159410;
        case 0x159414u: goto label_159414;
        case 0x159418u: goto label_159418;
        case 0x15941cu: goto label_15941c;
        case 0x159420u: goto label_159420;
        case 0x159424u: goto label_159424;
        case 0x159428u: goto label_159428;
        case 0x15942cu: goto label_15942c;
        case 0x159430u: goto label_159430;
        case 0x159434u: goto label_159434;
        case 0x159438u: goto label_159438;
        case 0x15943cu: goto label_15943c;
        case 0x159440u: goto label_159440;
        case 0x159444u: goto label_159444;
        case 0x159448u: goto label_159448;
        case 0x15944cu: goto label_15944c;
        case 0x159450u: goto label_159450;
        case 0x159454u: goto label_159454;
        case 0x159458u: goto label_159458;
        case 0x15945cu: goto label_15945c;
        case 0x159460u: goto label_159460;
        case 0x159464u: goto label_159464;
        default: break;
    }

    ctx->pc = 0x158728u;

label_158728:
    // 0x158728: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x158728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_15872c:
    // 0x15872c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_158730:
    // 0x158730: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x158730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_158734:
    // 0x158734: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x158734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158738:
    // 0x158738: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x158738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_15873c:
    // 0x15873c: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_158740:
    // 0x158740: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x158740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158744:
    // 0x158744: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x158744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_158748:
    // 0x158748: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x158748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_15874c:
    // 0x15874c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x15874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_158750:
    // 0x158750: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x158750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_158754:
    // 0x158754: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x158754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_158758:
    // 0x158758: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x158758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_15875c:
    // 0x15875c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_158760:
    // 0x158760: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x158760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_158764:
    // 0x158764: 0xc063408  jal         func_18D020
label_158768:
    if (ctx->pc == 0x158768u) {
        ctx->pc = 0x158768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158764u;
        // 0x158768: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15876Cu;
        goto label_15876c;
    }
    ctx->pc = 0x158764u;
    SET_GPR_U32(ctx, 31, 0x15876Cu);
    ctx->pc = 0x158768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158764u;
    // 0x158768: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D020u, 0x158764u, 0x15876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15876Cu;
label_15876c:
    // 0x15876c: 0xc05651a  jal         func_159468
label_158770:
    if (ctx->pc == 0x158770u) {
        ctx->pc = 0x158770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15876Cu;
        // 0x158770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158774u;
        goto label_158774;
    }
    ctx->pc = 0x15876Cu;
    SET_GPR_U32(ctx, 31, 0x158774u);
    ctx->pc = 0x158770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15876Cu;
    // 0x158770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x15876Cu, 0x158774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158774u;
label_158774:
    // 0x158774: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158778:
    // 0x158778: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x158778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15877c:
    // 0x15877c: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x15877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_158780:
    // 0x158780: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_158784:
    if (ctx->pc == 0x158784u) {
        ctx->pc = 0x158784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158780u;
        // 0x158784: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158788u;
        goto label_158788;
    }
    ctx->pc = 0x158780u;
    {
        const bool branch_taken_0x158780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x158784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158780u;
        // 0x158784: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158780) {
            ctx->pc = 0x158794u;
            goto label_158794;
        }
    }
    ctx->pc = 0x158788u;
label_158788:
    // 0x158788: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15878c:
    // 0x15878c: 0x14620133  bne         $v1, $v0, . + 4 + (0x133 << 2)
label_158790:
    if (ctx->pc == 0x158790u) {
        ctx->pc = 0x158790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15878Cu;
        // 0x158790: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158794u;
        goto label_158794;
    }
    ctx->pc = 0x15878Cu;
    {
        const bool branch_taken_0x15878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15878Cu;
        // 0x158790: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15878c) {
            ctx->pc = 0x158C5Cu;
            goto label_158c5c;
        }
    }
    ctx->pc = 0x158794u;
label_158794:
    // 0x158794: 0x92a20028  lbu         $v0, 0x28($s5)
    ctx->pc = 0x158794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158798:
    // 0x158798: 0x10400326  beqz        $v0, . + 4 + (0x326 << 2)
label_15879c:
    if (ctx->pc == 0x15879Cu) {
        ctx->pc = 0x15879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158798u;
        // 0x15879c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587A0u;
        goto label_1587a0;
    }
    ctx->pc = 0x158798u;
    {
        const bool branch_taken_0x158798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158798u;
        // 0x15879c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158798) {
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x1587A0u;
label_1587a0:
    // 0x1587a0: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_1587a4:
    if (ctx->pc == 0x1587A4u) {
        ctx->pc = 0x1587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587A0u;
        // 0x1587a4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587A8u;
        goto label_1587a8;
    }
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587A0u;
        // 0x1587a4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x1587B4u;
            goto label_1587b4;
        }
    }
    ctx->pc = 0x1587A8u;
label_1587a8:
    // 0x1587a8: 0xc107444  jal         func_41D110
label_1587ac:
    if (ctx->pc == 0x1587ACu) {
        ctx->pc = 0x1587B0u;
        goto label_1587b0;
    }
    ctx->pc = 0x1587A8u;
    SET_GPR_U32(ctx, 31, 0x1587B0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1587A8u, 0x1587B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587B0u;
label_1587b0:
    // 0x1587b0: 0x202f00a  movz        $fp, $s0, $v0
    ctx->pc = 0x1587b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
label_1587b4:
    // 0x1587b4: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
label_1587b8:
    if (ctx->pc == 0x1587B8u) {
        ctx->pc = 0x1587BCu;
        goto label_1587bc;
    }
    ctx->pc = 0x1587B4u;
    {
        const bool branch_taken_0x1587b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587b4) {
            ctx->pc = 0x1587D4u;
            goto label_1587d4;
        }
    }
    ctx->pc = 0x1587BCu;
label_1587bc:
    // 0x1587bc: 0x92a30028  lbu         $v1, 0x28($s5)
    ctx->pc = 0x1587bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_1587c0:
    // 0x1587c0: 0x2c62005b  sltiu       $v0, $v1, 0x5B
    ctx->pc = 0x1587c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
label_1587c4:
    // 0x1587c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1587c8:
    if (ctx->pc == 0x1587C8u) {
        ctx->pc = 0x1587C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C4u;
        // 0x1587c8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587CCu;
        goto label_1587cc;
    }
    ctx->pc = 0x1587C4u;
    {
        const bool branch_taken_0x1587c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587c4) {
            ctx->pc = 0x1587C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1587C4u;
            // 0x1587c8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1587CCu;
            goto label_1587cc;
        }
    }
    ctx->pc = 0x1587CCu;
label_1587cc:
    // 0x1587cc: 0x10000070  b           . + 4 + (0x70 << 2)
label_1587d0:
    if (ctx->pc == 0x1587D0u) {
        ctx->pc = 0x1587D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587CCu;
        // 0x1587d0: 0xa2a30028  sb          $v1, 0x28($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587D4u;
        goto label_1587d4;
    }
    ctx->pc = 0x1587CCu;
    {
        const bool branch_taken_0x1587cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587CCu;
        // 0x1587d0: 0xa2a30028  sb          $v1, 0x28($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587cc) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x1587D4u;
label_1587d4:
    // 0x1587d4: 0xc048038  jal         func_1200E0
label_1587d8:
    if (ctx->pc == 0x1587D8u) {
        ctx->pc = 0x1587D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587D4u;
        // 0x1587d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587DCu;
        goto label_1587dc;
    }
    ctx->pc = 0x1587D4u;
    SET_GPR_U32(ctx, 31, 0x1587DCu);
    ctx->pc = 0x1587D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587D4u;
    // 0x1587d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x1587D4u, 0x1587DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587DCu;
label_1587dc:
    // 0x1587dc: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_1587e0:
    if (ctx->pc == 0x1587E0u) {
        ctx->pc = 0x1587E4u;
        goto label_1587e4;
    }
    ctx->pc = 0x1587DCu;
    {
        const bool branch_taken_0x1587dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587dc) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x1587E4u;
label_1587e4:
    // 0x1587e4: 0xc047e6c  jal         func_11F9B0
label_1587e8:
    if (ctx->pc == 0x1587E8u) {
        ctx->pc = 0x1587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587E4u;
        // 0x1587e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587ECu;
        goto label_1587ec;
    }
    ctx->pc = 0x1587E4u;
    SET_GPR_U32(ctx, 31, 0x1587ECu);
    ctx->pc = 0x1587E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587E4u;
    // 0x1587e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1587E4u, 0x1587ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587ECu;
label_1587ec:
    // 0x1587ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1587f0:
    if (ctx->pc == 0x1587F0u) {
        ctx->pc = 0x1587F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587ECu;
        // 0x1587f0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587F4u;
        goto label_1587f4;
    }
    ctx->pc = 0x1587ECu;
    {
        const bool branch_taken_0x1587ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587ECu;
        // 0x1587f0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587ec) {
            ctx->pc = 0x15881Cu;
            goto label_15881c;
        }
    }
    ctx->pc = 0x1587F4u;
label_1587f4:
    // 0x1587f4: 0xc047e6c  jal         func_11F9B0
label_1587f8:
    if (ctx->pc == 0x1587F8u) {
        ctx->pc = 0x1587F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587F4u;
        // 0x1587f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587FCu;
        goto label_1587fc;
    }
    ctx->pc = 0x1587F4u;
    SET_GPR_U32(ctx, 31, 0x1587FCu);
    ctx->pc = 0x1587F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587F4u;
    // 0x1587f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1587F4u, 0x1587FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587FCu;
label_1587fc:
    // 0x1587fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1587fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158800:
    // 0x158800: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x158800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_158804:
    // 0x158804: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x158804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_158808:
    // 0x158808: 0xa0f809  jalr        $a1
label_15880c:
    if (ctx->pc == 0x15880Cu) {
        ctx->pc = 0x15880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158808u;
        // 0x15880c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158810u;
        goto label_158810;
    }
    ctx->pc = 0x158808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x158810u);
        ctx->pc = 0x15880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158808u;
        // 0x15880c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158808u, 0x158810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158810u;
label_158810:
    // 0x158810: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x158810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_158814:
    // 0x158814: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_158818:
    if (ctx->pc == 0x158818u) {
        ctx->pc = 0x158818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158814u;
        // 0x158818: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15881Cu;
        goto label_15881c;
    }
    ctx->pc = 0x158814u;
    {
        const bool branch_taken_0x158814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158814u;
        // 0x158818: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158814) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x15881Cu;
label_15881c:
    // 0x15881c: 0x94620152  lhu         $v0, 0x152($v1)
    ctx->pc = 0x15881cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 338)));
label_158820:
    // 0x158820: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x158820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_158824:
    // 0x158824: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_158828:
    if (ctx->pc == 0x158828u) {
        ctx->pc = 0x15882Cu;
        goto label_15882c;
    }
    ctx->pc = 0x158824u;
    {
        const bool branch_taken_0x158824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158824) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x15882Cu;
label_15882c:
    // 0x15882c: 0xc048038  jal         func_1200E0
label_158830:
    if (ctx->pc == 0x158830u) {
        ctx->pc = 0x158830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15882Cu;
        // 0x158830: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158834u;
        goto label_158834;
    }
    ctx->pc = 0x15882Cu;
    SET_GPR_U32(ctx, 31, 0x158834u);
    ctx->pc = 0x158830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15882Cu;
    // 0x158830: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x15882Cu, 0x158834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158834u;
label_158834:
    // 0x158834: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_158838:
    if (ctx->pc == 0x158838u) {
        ctx->pc = 0x158838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158834u;
        // 0x158838: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15883Cu;
        goto label_15883c;
    }
    ctx->pc = 0x158834u;
    {
        const bool branch_taken_0x158834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158834u;
        // 0x158838: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158834) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x15883Cu;
label_15883c:
    // 0x15883c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158840:
    // 0x158840: 0x2443b1e8  addiu       $v1, $v0, -0x4E18
    ctx->pc = 0x158840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947304));
label_158844:
    // 0x158844: 0xac50b1e8  sw          $s0, -0x4E18($v0)
    ctx->pc = 0x158844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947304), GPR_U32(ctx, 16));
label_158848:
    // 0x158848: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x158848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_15884c:
    // 0x15884c: 0xc047e6c  jal         func_11F9B0
label_158850:
    if (ctx->pc == 0x158850u) {
        ctx->pc = 0x158850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15884Cu;
        // 0x158850: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158854u;
        goto label_158854;
    }
    ctx->pc = 0x15884Cu;
    SET_GPR_U32(ctx, 31, 0x158854u);
    ctx->pc = 0x158850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15884Cu;
    // 0x158850: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15884Cu, 0x158854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158854u;
label_158854:
    // 0x158854: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x158854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
label_158858:
    // 0x158858: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x158858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15885c:
    // 0x15885c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158860:
    // 0x158860: 0xc048038  jal         func_1200E0
label_158864:
    if (ctx->pc == 0x158864u) {
        ctx->pc = 0x158864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158860u;
        // 0x158864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158868u;
        goto label_158868;
    }
    ctx->pc = 0x158860u;
    SET_GPR_U32(ctx, 31, 0x158868u);
    ctx->pc = 0x158864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158860u;
    // 0x158864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x158860u, 0x158868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158868u;
label_158868:
    // 0x158868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x158868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15886c:
    // 0x15886c: 0xac5001e4  sw          $s0, 0x1E4($v0)
    ctx->pc = 0x15886cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 16));
label_158870:
    // 0x158870: 0xc048038  jal         func_1200E0
label_158874:
    if (ctx->pc == 0x158874u) {
        ctx->pc = 0x158874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158870u;
        // 0x158874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158878u;
        goto label_158878;
    }
    ctx->pc = 0x158870u;
    SET_GPR_U32(ctx, 31, 0x158878u);
    ctx->pc = 0x158874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158870u;
    // 0x158874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x158870u, 0x158878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158878u;
label_158878:
    // 0x158878: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x158878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15887c:
    // 0x15887c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_158880:
    // 0x158880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158884:
    // 0x158884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158888:
    // 0x158888: 0xc047b82  jal         func_11EE08
label_15888c:
    if (ctx->pc == 0x15888Cu) {
        ctx->pc = 0x15888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158888u;
        // 0x15888c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158890u;
        goto label_158890;
    }
    ctx->pc = 0x158888u;
    SET_GPR_U32(ctx, 31, 0x158890u);
    ctx->pc = 0x15888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158888u;
    // 0x15888c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x158888u, 0x158890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158890u;
label_158890:
    // 0x158890: 0xc048038  jal         func_1200E0
label_158894:
    if (ctx->pc == 0x158894u) {
        ctx->pc = 0x158894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158890u;
        // 0x158894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158898u;
        goto label_158898;
    }
    ctx->pc = 0x158890u;
    SET_GPR_U32(ctx, 31, 0x158898u);
    ctx->pc = 0x158894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158890u;
    // 0x158894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x158890u, 0x158898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158898u;
label_158898:
    // 0x158898: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x158898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_15889c:
    // 0x15889c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1588a0:
    // 0x1588a0: 0x8c65deb8  lw          $a1, -0x2148($v1)
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958776)));
label_1588a4:
    // 0x1588a4: 0x8ca301c4  lw          $v1, 0x1C4($a1)
    ctx->pc = 0x1588a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
label_1588a8:
    // 0x1588a8: 0xc048038  jal         func_1200E0
label_1588ac:
    if (ctx->pc == 0x1588ACu) {
        ctx->pc = 0x1588ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588A8u;
        // 0x1588ac: 0xac4301f8  sw          $v1, 0x1F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588B0u;
        goto label_1588b0;
    }
    ctx->pc = 0x1588A8u;
    SET_GPR_U32(ctx, 31, 0x1588B0u);
    ctx->pc = 0x1588ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588A8u;
    // 0x1588ac: 0xac4301f8  sw          $v1, 0x1F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x1588A8u, 0x1588B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588B0u;
label_1588b0:
    // 0x1588b0: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_1588b4:
    // 0x1588b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1588b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1588b8:
    // 0x1588b8: 0x26310840  addiu       $s1, $s1, 0x840
    ctx->pc = 0x1588b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_1588bc:
    // 0x1588bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1588bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1588c0:
    // 0x1588c0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1588c4:
    // 0x1588c4: 0x8c6577a0  lw          $a1, 0x77A0($v1)
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30624)));
label_1588c8:
    // 0x1588c8: 0xc048038  jal         func_1200E0
label_1588cc:
    if (ctx->pc == 0x1588CCu) {
        ctx->pc = 0x1588CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588C8u;
        // 0x1588cc: 0xa44501fc  sh          $a1, 0x1FC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 508), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588D0u;
        goto label_1588d0;
    }
    ctx->pc = 0x1588C8u;
    SET_GPR_U32(ctx, 31, 0x1588D0u);
    ctx->pc = 0x1588CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588C8u;
    // 0x1588cc: 0xa44501fc  sh          $a1, 0x1FC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 508), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x1588C8u, 0x1588D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588D0u;
label_1588d0:
    // 0x1588d0: 0x8e45aa84  lw          $a1, -0x557C($s2)
    ctx->pc = 0x1588d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_1588d4:
    // 0x1588d4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1588d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_1588d8:
    // 0x1588d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1588d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1588dc:
    // 0x1588dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1588dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1588e0:
    // 0x1588e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1588e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1588e4:
    // 0x1588e4: 0xc4a07a5c  lwc1        $f0, 0x7A5C($a1)
    ctx->pc = 0x1588e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1588e8:
    // 0x1588e8: 0xc048038  jal         func_1200E0
label_1588ec:
    if (ctx->pc == 0x1588ECu) {
        ctx->pc = 0x1588ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588E8u;
        // 0x1588ec: 0xe44001f0  swc1        $f0, 0x1F0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588F0u;
        goto label_1588f0;
    }
    ctx->pc = 0x1588E8u;
    SET_GPR_U32(ctx, 31, 0x1588F0u);
    ctx->pc = 0x1588ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588E8u;
    // 0x1588ec: 0xe44001f0  swc1        $f0, 0x1F0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x1588E8u, 0x1588F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588F0u;
label_1588f0:
    // 0x1588f0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x1588f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_1588f4:
    // 0x1588f4: 0xc04415c  jal         func_110570
label_1588f8:
    if (ctx->pc == 0x1588F8u) {
        ctx->pc = 0x1588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588F4u;
        // 0x1588f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588FCu;
        goto label_1588fc;
    }
    ctx->pc = 0x1588F4u;
    SET_GPR_U32(ctx, 31, 0x1588FCu);
    ctx->pc = 0x1588F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588F4u;
    // 0x1588f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110570u, 0x1588F4u, 0x1588FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588FCu;
label_1588fc:
    // 0x1588fc: 0xe60001f4  swc1        $f0, 0x1F4($s0)
    ctx->pc = 0x1588fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
label_158900:
    // 0x158900: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x158900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_158904:
    // 0x158904: 0x3c05d000  lui         $a1, 0xD000
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53248 << 16));
label_158908:
    // 0x158908: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15890c:
    // 0x15890c: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_158910:
    // 0x158910: 0xc063262  jal         func_18C988
label_158914:
    if (ctx->pc == 0x158914u) {
        ctx->pc = 0x158914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158910u;
        // 0x158914: 0x34a50014  ori         $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158918u;
        goto label_158918;
    }
    ctx->pc = 0x158910u;
    SET_GPR_U32(ctx, 31, 0x158918u);
    ctx->pc = 0x158914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158910u;
    // 0x158914: 0x34a50014  ori         $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x158910u, 0x158918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158918u;
label_158918:
    // 0x158918: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_15891c:
    // 0x15891c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15891cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158920:
    // 0x158920: 0x8c64deb8  lw          $a0, -0x2148($v1)
    ctx->pc = 0x158920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958776)));
label_158924:
    // 0x158924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158928:
    // 0x158928: 0xc063416  jal         func_18D058
label_15892c:
    if (ctx->pc == 0x15892Cu) {
        ctx->pc = 0x15892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158928u;
        // 0x15892c: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158930u;
        goto label_158930;
    }
    ctx->pc = 0x158928u;
    SET_GPR_U32(ctx, 31, 0x158930u);
    ctx->pc = 0x15892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158928u;
    // 0x15892c: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x158928u, 0x158930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158930u;
label_158930:
    // 0x158930: 0xc06c7ce  jal         func_1B1F38
label_158934:
    if (ctx->pc == 0x158934u) {
        ctx->pc = 0x158934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158930u;
        // 0x158934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158938u;
        goto label_158938;
    }
    ctx->pc = 0x158930u;
    SET_GPR_U32(ctx, 31, 0x158938u);
    ctx->pc = 0x158934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158930u;
    // 0x158934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x158930u, 0x158938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158938u;
label_158938:
    // 0x158938: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_15893c:
    // 0x15893c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x15893cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_158940:
    // 0x158940: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_158944:
    if (ctx->pc == 0x158944u) {
        ctx->pc = 0x158948u;
        goto label_158948;
    }
    ctx->pc = 0x158940u;
    {
        const bool branch_taken_0x158940 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x158940) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x158948u;
label_158948:
    // 0x158948: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x158948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_15894c:
    // 0x15894c: 0x0  nop
    ctx->pc = 0x15894cu;
    // NOP
label_158950:
    // 0x158950: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158954:
    // 0x158954: 0xc0e409a  jal         func_390268
label_158958:
    if (ctx->pc == 0x158958u) {
        ctx->pc = 0x158958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158954u;
        // 0x158958: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15895Cu;
        goto label_15895c;
    }
    ctx->pc = 0x158954u;
    SET_GPR_U32(ctx, 31, 0x15895Cu);
    ctx->pc = 0x158958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158954u;
    // 0x158958: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158954u, 0x15895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15895Cu;
label_15895c:
    // 0x15895c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158960:
    // 0x158960: 0xc089d02  jal         func_227408
label_158964:
    if (ctx->pc == 0x158964u) {
        ctx->pc = 0x158964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158960u;
        // 0x158964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158968u;
        goto label_158968;
    }
    ctx->pc = 0x158960u;
    SET_GPR_U32(ctx, 31, 0x158968u);
    ctx->pc = 0x158964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158960u;
    // 0x158964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x158960u, 0x158968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158968u;
label_158968:
    // 0x158968: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15896c:
    if (ctx->pc == 0x15896Cu) {
        ctx->pc = 0x15896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158968u;
        // 0x15896c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158970u;
        goto label_158970;
    }
    ctx->pc = 0x158968u;
    {
        const bool branch_taken_0x158968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158968u;
        // 0x15896c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158968) {
            ctx->pc = 0x15897Cu;
            goto label_15897c;
        }
    }
    ctx->pc = 0x158970u;
label_158970:
    // 0x158970: 0xc089ce2  jal         func_227388
label_158974:
    if (ctx->pc == 0x158974u) {
        ctx->pc = 0x158974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158970u;
        // 0x158974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158978u;
        goto label_158978;
    }
    ctx->pc = 0x158970u;
    SET_GPR_U32(ctx, 31, 0x158978u);
    ctx->pc = 0x158974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158970u;
    // 0x158974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x158970u, 0x158978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158978u;
label_158978:
    // 0x158978: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x158978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_15897c:
    // 0x15897c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15897cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_158980:
    // 0x158980: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_158984:
    // 0x158984: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x158984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_158988:
    // 0x158988: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15898c:
    if (ctx->pc == 0x15898Cu) {
        ctx->pc = 0x15898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158988u;
        // 0x15898c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158990u;
        goto label_158990;
    }
    ctx->pc = 0x158988u;
    {
        const bool branch_taken_0x158988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158988u;
        // 0x15898c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158988) {
            ctx->pc = 0x158950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158950;
        }
    }
    ctx->pc = 0x158990u;
label_158990:
    // 0x158990: 0xc047e6c  jal         func_11F9B0
label_158994:
    if (ctx->pc == 0x158994u) {
        ctx->pc = 0x158994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158990u;
        // 0x158994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158998u;
        goto label_158998;
    }
    ctx->pc = 0x158990u;
    SET_GPR_U32(ctx, 31, 0x158998u);
    ctx->pc = 0x158994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158990u;
    // 0x158994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158990u, 0x158998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158998u;
label_158998:
    // 0x158998: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_15899c:
    if (ctx->pc == 0x15899Cu) {
        ctx->pc = 0x15899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158998u;
        // 0x15899c: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589A0u;
        goto label_1589a0;
    }
    ctx->pc = 0x158998u;
    {
        const bool branch_taken_0x158998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158998) {
            ctx->pc = 0x15899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158998u;
            // 0x15899c: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158A28u;
            goto label_158a28;
        }
    }
    ctx->pc = 0x1589A0u;
label_1589a0:
    // 0x1589a0: 0xc047e6c  jal         func_11F9B0
label_1589a4:
    if (ctx->pc == 0x1589A4u) {
        ctx->pc = 0x1589A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589A0u;
        // 0x1589a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589A8u;
        goto label_1589a8;
    }
    ctx->pc = 0x1589A0u;
    SET_GPR_U32(ctx, 31, 0x1589A8u);
    ctx->pc = 0x1589A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1589A0u;
    // 0x1589a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1589A0u, 0x1589A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589A8u;
label_1589a8:
    // 0x1589a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1589a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1589ac:
    // 0x1589ac: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1589b0:
    // 0x1589b0: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1589b4:
    // 0x1589b4: 0xa0f809  jalr        $a1
label_1589b8:
    if (ctx->pc == 0x1589B8u) {
        ctx->pc = 0x1589B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B4u;
        // 0x1589b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589BCu;
        goto label_1589bc;
    }
    ctx->pc = 0x1589B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1589BCu);
        ctx->pc = 0x1589B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B4u;
        // 0x1589b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589B4u, 0x1589BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1589BCu;
label_1589bc:
    // 0x1589bc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1589bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1589c0:
    // 0x1589c0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_1589c4:
    if (ctx->pc == 0x1589C4u) {
        ctx->pc = 0x1589C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589C0u;
        // 0x1589c4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1589C8u;
        goto label_1589c8;
    }
    ctx->pc = 0x1589C0u;
    {
        const bool branch_taken_0x1589c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1589C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589C0u;
        // 0x1589c4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589c0) {
            ctx->pc = 0x158A28u;
            goto label_158a28;
        }
    }
    ctx->pc = 0x1589C8u;
label_1589c8:
    // 0x1589c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1589c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1589cc:
    // 0x1589cc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1589d0:
    // 0x1589d0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1589d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1589d4:
    // 0x1589d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1589d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1589d8:
    // 0x1589d8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1589d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1589dc:
    // 0x1589dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1589dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1589e0:
    // 0x1589e0: 0x0  nop
    ctx->pc = 0x1589e0u;
    // NOP
label_1589e4:
    // 0x1589e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1589e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1589e8:
    // 0x1589e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1589e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1589ec:
    // 0x1589ec: 0x8c83aa84  lw          $v1, -0x557C($a0)
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_1589f0:
    // 0x1589f0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1589f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1589f4:
    // 0x1589f4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1589f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1589f8:
    // 0x1589f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1589f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1589fc:
    // 0x1589fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1589fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_158a00:
    // 0x158a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_158a04:
    // 0x158a04: 0xc4607a5c  lwc1        $f0, 0x7A5C($v1)
    ctx->pc = 0x158a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158a08:
    // 0x158a08: 0x460100e9  min.s       $f3, $f0, $f1
    ctx->pc = 0x158a08u;
    ctx->f[3] = std::min(ctx->f[0], ctx->f[1]);
label_158a0c:
    // 0x158a0c: 0x0  nop
    ctx->pc = 0x158a0cu;
    // NOP
label_158a10:
    // 0x158a10: 0x0  nop
    ctx->pc = 0x158a10u;
    // NOP
label_158a14:
    // 0x158a14: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x158a14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_158a18:
    // 0x158a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_158a1c:
    // 0x158a1c: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x158a1cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_158a20:
    // 0x158a20: 0xe4607a5c  swc1        $f0, 0x7A5C($v1)
    ctx->pc = 0x158a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 31324), bits); }
label_158a24:
    // 0x158a24: 0x92a30028  lbu         $v1, 0x28($s5)
    ctx->pc = 0x158a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158a28:
    // 0x158a28: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x158a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_158a2c:
    // 0x158a2c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_158a30:
    if (ctx->pc == 0x158A30u) {
        ctx->pc = 0x158A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A2Cu;
        // 0x158a30: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A34u;
        goto label_158a34;
    }
    ctx->pc = 0x158A2Cu;
    {
        const bool branch_taken_0x158a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x158A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A2Cu;
        // 0x158a30: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a2c) {
            ctx->pc = 0x158A60u;
            goto label_158a60;
        }
    }
    ctx->pc = 0x158A34u;
label_158a34:
    // 0x158a34: 0xc107444  jal         func_41D110
label_158a38:
    if (ctx->pc == 0x158A38u) {
        ctx->pc = 0x158A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A34u;
        // 0x158a38: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A3Cu;
        goto label_158a3c;
    }
    ctx->pc = 0x158A34u;
    SET_GPR_U32(ctx, 31, 0x158A3Cu);
    ctx->pc = 0x158A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A34u;
    // 0x158a38: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x158A34u, 0x158A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A3Cu;
label_158a3c:
    // 0x158a3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_158a40:
    if (ctx->pc == 0x158A40u) {
        ctx->pc = 0x158A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A3Cu;
        // 0x158a40: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A44u;
        goto label_158a44;
    }
    ctx->pc = 0x158A3Cu;
    {
        const bool branch_taken_0x158a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A3Cu;
        // 0x158a40: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a3c) {
            ctx->pc = 0x158A60u;
            goto label_158a60;
        }
    }
    ctx->pc = 0x158A44u;
label_158a44:
    // 0x158a44: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158a48:
    // 0x158a48: 0xc106802  jal         func_41A008
label_158a4c:
    if (ctx->pc == 0x158A4Cu) {
        ctx->pc = 0x158A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A48u;
        // 0x158a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A50u;
        goto label_158a50;
    }
    ctx->pc = 0x158A48u;
    SET_GPR_U32(ctx, 31, 0x158A50u);
    ctx->pc = 0x158A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A48u;
    // 0x158a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x158A48u, 0x158A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A50u;
label_158a50:
    // 0x158a50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158a54:
    // 0x158a54: 0xc04414a  jal         func_110528
label_158a58:
    if (ctx->pc == 0x158A58u) {
        ctx->pc = 0x158A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A54u;
        // 0x158a58: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A5Cu;
        goto label_158a5c;
    }
    ctx->pc = 0x158A54u;
    SET_GPR_U32(ctx, 31, 0x158A5Cu);
    ctx->pc = 0x158A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A54u;
    // 0x158a58: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x158A54u, 0x158A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A5Cu;
label_158a5c:
    // 0x158a5c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_158a60:
    // 0x158a60: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_158a64:
    // 0x158a64: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x158a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_158a68:
    // 0x158a68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x158a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_158a6c:
    // 0x158a6c: 0x2450d810  addiu       $s0, $v0, -0x27F0
    ctx->pc = 0x158a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_158a70:
    // 0x158a70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x158a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158a74:
    // 0x158a74: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x158a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_158a78:
    // 0x158a78: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158a7c:
    // 0x158a7c: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x158a7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158a80:
    // 0x158a80: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_158a84:
    // 0x158a84: 0x0  nop
    ctx->pc = 0x158a84u;
    // NOP
label_158a88:
    // 0x158a88: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_158a8c:
    // 0x158a8c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_158a90:
    if (ctx->pc == 0x158A90u) {
        ctx->pc = 0x158A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A8Cu;
        // 0x158a90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158A94u;
        goto label_158a94;
    }
    ctx->pc = 0x158A8Cu;
    {
        const bool branch_taken_0x158a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a8c) {
            ctx->pc = 0x158A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158A8Cu;
            // 0x158a90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B40u;
            goto label_158b40;
        }
    }
    ctx->pc = 0x158A94u;
label_158a94:
    // 0x158a94: 0x86020042  lh          $v0, 0x42($s0)
    ctx->pc = 0x158a94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_158a98:
    // 0x158a98: 0x10530028  beq         $v0, $s3, . + 4 + (0x28 << 2)
label_158a9c:
    if (ctx->pc == 0x158A9Cu) {
        ctx->pc = 0x158A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A98u;
        // 0x158a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AA0u;
        goto label_158aa0;
    }
    ctx->pc = 0x158A98u;
    {
        const bool branch_taken_0x158a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x158A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A98u;
        // 0x158a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a98) {
            ctx->pc = 0x158B3Cu;
            goto label_158b3c;
        }
    }
    ctx->pc = 0x158AA0u;
label_158aa0:
    // 0x158aa0: 0xc0512fc  jal         func_144BF0
label_158aa4:
    if (ctx->pc == 0x158AA4u) {
        ctx->pc = 0x158AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AA0u;
        // 0x158aa4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AA8u;
        goto label_158aa8;
    }
    ctx->pc = 0x158AA0u;
    SET_GPR_U32(ctx, 31, 0x158AA8u);
    ctx->pc = 0x158AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AA0u;
    // 0x158aa4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x158AA0u, 0x158AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AA8u;
label_158aa8:
    // 0x158aa8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_158aac:
    if (ctx->pc == 0x158AACu) {
        ctx->pc = 0x158AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AA8u;
        // 0x158aac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AB0u;
        goto label_158ab0;
    }
    ctx->pc = 0x158AA8u;
    {
        const bool branch_taken_0x158aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158aa8) {
            ctx->pc = 0x158AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AA8u;
            // 0x158aac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B40u;
            goto label_158b40;
        }
    }
    ctx->pc = 0x158AB0u;
label_158ab0:
    // 0x158ab0: 0x92a20028  lbu         $v0, 0x28($s5)
    ctx->pc = 0x158ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158ab4:
    // 0x158ab4: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x158ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_158ab8:
    // 0x158ab8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_158abc:
    if (ctx->pc == 0x158ABCu) {
        ctx->pc = 0x158ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB8u;
        // 0x158abc: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AC0u;
        goto label_158ac0;
    }
    ctx->pc = 0x158AB8u;
    {
        const bool branch_taken_0x158ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158ab8) {
            ctx->pc = 0x158ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AB8u;
            // 0x158abc: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B28u;
            goto label_158b28;
        }
    }
    ctx->pc = 0x158AC0u;
label_158ac0:
    // 0x158ac0: 0x57d60019  bnel        $fp, $s6, . + 4 + (0x19 << 2)
label_158ac4:
    if (ctx->pc == 0x158AC4u) {
        ctx->pc = 0x158AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AC0u;
        // 0x158ac4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AC8u;
        goto label_158ac8;
    }
    ctx->pc = 0x158AC0u;
    {
        const bool branch_taken_0x158ac0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 22));
        if (branch_taken_0x158ac0) {
            ctx->pc = 0x158AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AC0u;
            // 0x158ac4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B28u;
            goto label_158b28;
        }
    }
    ctx->pc = 0x158AC8u;
label_158ac8:
    // 0x158ac8: 0xc047e6c  jal         func_11F9B0
label_158acc:
    if (ctx->pc == 0x158ACCu) {
        ctx->pc = 0x158ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AC8u;
        // 0x158acc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AD0u;
        goto label_158ad0;
    }
    ctx->pc = 0x158AC8u;
    SET_GPR_U32(ctx, 31, 0x158AD0u);
    ctx->pc = 0x158ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AC8u;
    // 0x158acc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158AC8u, 0x158AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AD0u;
label_158ad0:
    // 0x158ad0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_158ad4:
    if (ctx->pc == 0x158AD4u) {
        ctx->pc = 0x158AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AD0u;
        // 0x158ad4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AD8u;
        goto label_158ad8;
    }
    ctx->pc = 0x158AD0u;
    {
        const bool branch_taken_0x158ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ad0) {
            ctx->pc = 0x158AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AD0u;
            // 0x158ad4: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B28u;
            goto label_158b28;
        }
    }
    ctx->pc = 0x158AD8u;
label_158ad8:
    // 0x158ad8: 0xc047e6c  jal         func_11F9B0
label_158adc:
    if (ctx->pc == 0x158ADCu) {
        ctx->pc = 0x158ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AD8u;
        // 0x158adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AE0u;
        goto label_158ae0;
    }
    ctx->pc = 0x158AD8u;
    SET_GPR_U32(ctx, 31, 0x158AE0u);
    ctx->pc = 0x158ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AD8u;
    // 0x158adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158AD8u, 0x158AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AE0u;
label_158ae0:
    // 0x158ae0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158ae4:
    // 0x158ae4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_158ae8:
    // 0x158ae8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x158ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_158aec:
    // 0x158aec: 0xa0f809  jalr        $a1
label_158af0:
    if (ctx->pc == 0x158AF0u) {
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AF4u;
        goto label_158af4;
    }
    ctx->pc = 0x158AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x158AF4u);
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158AECu, 0x158AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158AF4u;
label_158af4:
    // 0x158af4: 0x5457000c  bnel        $v0, $s7, . + 4 + (0xC << 2)
label_158af8:
    if (ctx->pc == 0x158AF8u) {
        ctx->pc = 0x158AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AF4u;
        // 0x158af8: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AFCu;
        goto label_158afc;
    }
    ctx->pc = 0x158AF4u;
    {
        const bool branch_taken_0x158af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x158af4) {
            ctx->pc = 0x158AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AF4u;
            // 0x158af8: 0x92a30028  lbu         $v1, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B28u;
            goto label_158b28;
        }
    }
    ctx->pc = 0x158AFCu;
label_158afc:
    // 0x158afc: 0x8e44deb8  lw          $a0, -0x2148($s2)
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958776)));
label_158b00:
    // 0x158b00: 0x3c05d000  lui         $a1, 0xD000
    ctx->pc = 0x158b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53248 << 16));
label_158b04:
    // 0x158b04: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x158b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
label_158b08:
    // 0x158b08: 0xc063262  jal         func_18C988
label_158b0c:
    if (ctx->pc == 0x158B0Cu) {
        ctx->pc = 0x158B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B08u;
        // 0x158b0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B10u;
        goto label_158b10;
    }
    ctx->pc = 0x158B08u;
    SET_GPR_U32(ctx, 31, 0x158B10u);
    ctx->pc = 0x158B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B08u;
    // 0x158b0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x158B08u, 0x158B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B10u;
label_158b10:
    // 0x158b10: 0x8e44deb8  lw          $a0, -0x2148($s2)
    ctx->pc = 0x158b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958776)));
label_158b14:
    // 0x158b14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158b14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158b18:
    // 0x158b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158b1c:
    // 0x158b1c: 0xc063416  jal         func_18D058
label_158b20:
    if (ctx->pc == 0x158B20u) {
        ctx->pc = 0x158B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B1Cu;
        // 0x158b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B24u;
        goto label_158b24;
    }
    ctx->pc = 0x158B1Cu;
    SET_GPR_U32(ctx, 31, 0x158B24u);
    ctx->pc = 0x158B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B1Cu;
    // 0x158b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x158B1Cu, 0x158B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B24u;
label_158b24:
    // 0x158b24: 0x92a30028  lbu         $v1, 0x28($s5)
    ctx->pc = 0x158b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158b28:
    // 0x158b28: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x158b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_158b2c:
    // 0x158b2c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_158b30:
    if (ctx->pc == 0x158B30u) {
        ctx->pc = 0x158B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B2Cu;
        // 0x158b30: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B34u;
        goto label_158b34;
    }
    ctx->pc = 0x158B2Cu;
    {
        const bool branch_taken_0x158b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b2c) {
            ctx->pc = 0x158B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B2Cu;
            // 0x158b30: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B34u;
            goto label_158b34;
        }
    }
    ctx->pc = 0x158B34u;
label_158b34:
    // 0x158b34: 0x10000005  b           . + 4 + (0x5 << 2)
label_158b38:
    if (ctx->pc == 0x158B38u) {
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0xa2a30028  sb          $v1, 0x28($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B3Cu;
        goto label_158b3c;
    }
    ctx->pc = 0x158B34u;
    {
        const bool branch_taken_0x158b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0xa2a30028  sb          $v1, 0x28($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b34) {
            ctx->pc = 0x158B4Cu;
            goto label_158b4c;
        }
    }
    ctx->pc = 0x158B3Cu;
label_158b3c:
    // 0x158b3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_158b40:
    // 0x158b40: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x158b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_158b44:
    // 0x158b44: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_158b48:
    if (ctx->pc == 0x158B48u) {
        ctx->pc = 0x158B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B44u;
        // 0x158b48: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B4Cu;
        goto label_158b4c;
    }
    ctx->pc = 0x158B44u;
    {
        const bool branch_taken_0x158b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B44u;
        // 0x158b48: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b44) {
            ctx->pc = 0x158A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158a88;
        }
    }
    ctx->pc = 0x158B4Cu;
label_158b4c:
    // 0x158b4c: 0x92a20028  lbu         $v0, 0x28($s5)
    ctx->pc = 0x158b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158b50:
    // 0x158b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b54:
    // 0x158b54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x158b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_158b58:
    // 0x158b58: 0xa2a20028  sb          $v0, 0x28($s5)
    ctx->pc = 0x158b58u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 2));
label_158b5c:
    // 0x158b5c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158b60:
    // 0x158b60: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x158b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_158b64:
    // 0x158b64: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_158b68:
    if (ctx->pc == 0x158B68u) {
        ctx->pc = 0x158B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B64u;
        // 0x158b68: 0x92a20028  lbu         $v0, 0x28($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B6Cu;
        goto label_158b6c;
    }
    ctx->pc = 0x158B64u;
    {
        const bool branch_taken_0x158b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b64) {
            ctx->pc = 0x158B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B64u;
            // 0x158b68: 0x92a20028  lbu         $v0, 0x28($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B80u;
            goto label_158b80;
        }
    }
    ctx->pc = 0x158B6Cu;
label_158b6c:
    // 0x158b6c: 0x94820152  lhu         $v0, 0x152($a0)
    ctx->pc = 0x158b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 338)));
label_158b70:
    // 0x158b70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x158b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_158b74:
    // 0x158b74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_158b78:
    if (ctx->pc == 0x158B78u) {
        ctx->pc = 0x158B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B74u;
        // 0x158b78: 0xa2a00028  sb          $zero, 0x28($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B7Cu;
        goto label_158b7c;
    }
    ctx->pc = 0x158B74u;
    {
        const bool branch_taken_0x158b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158b74) {
            ctx->pc = 0x158B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158B74u;
            // 0x158b78: 0xa2a00028  sb          $zero, 0x28($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B7Cu;
            goto label_158b7c;
        }
    }
    ctx->pc = 0x158B7Cu;
label_158b7c:
    // 0x158b7c: 0x92a20028  lbu         $v0, 0x28($s5)
    ctx->pc = 0x158b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
label_158b80:
    // 0x158b80: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_158b84:
    if (ctx->pc == 0x158B84u) {
        ctx->pc = 0x158B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B80u;
        // 0x158b84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B88u;
        goto label_158b88;
    }
    ctx->pc = 0x158B80u;
    {
        const bool branch_taken_0x158b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B80u;
        // 0x158b84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b80) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158B88u;
label_158b88:
    // 0x158b88: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158b8c:
    // 0x158b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158b90:
    // 0x158b90: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_158b94:
    // 0x158b94: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_158b98:
    if (ctx->pc == 0x158B98u) {
        ctx->pc = 0x158B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B94u;
        // 0x158b98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B9Cu;
        goto label_158b9c;
    }
    ctx->pc = 0x158B94u;
    {
        const bool branch_taken_0x158b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B94u;
        // 0x158b98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b94) {
            ctx->pc = 0x158C44u;
            goto label_158c44;
        }
    }
    ctx->pc = 0x158B9Cu;
label_158b9c:
    // 0x158b9c: 0xc047e6c  jal         func_11F9B0
label_158ba0:
    if (ctx->pc == 0x158BA0u) {
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B9Cu;
        // 0x158ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BA4u;
        goto label_158ba4;
    }
    ctx->pc = 0x158B9Cu;
    SET_GPR_U32(ctx, 31, 0x158BA4u);
    ctx->pc = 0x158BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B9Cu;
    // 0x158ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158B9Cu, 0x158BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BA4u;
label_158ba4:
    // 0x158ba4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_158ba8:
    if (ctx->pc == 0x158BA8u) {
        ctx->pc = 0x158BACu;
        goto label_158bac;
    }
    ctx->pc = 0x158BA4u;
    {
        const bool branch_taken_0x158ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ba4) {
            ctx->pc = 0x158C14u;
            goto label_158c14;
        }
    }
    ctx->pc = 0x158BACu;
label_158bac:
    // 0x158bac: 0xc047e6c  jal         func_11F9B0
label_158bb0:
    if (ctx->pc == 0x158BB0u) {
        ctx->pc = 0x158BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BACu;
        // 0x158bb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BB4u;
        goto label_158bb4;
    }
    ctx->pc = 0x158BACu;
    SET_GPR_U32(ctx, 31, 0x158BB4u);
    ctx->pc = 0x158BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BACu;
    // 0x158bb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158BACu, 0x158BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BB4u;
label_158bb4:
    // 0x158bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158bb8:
    // 0x158bb8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x158bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_158bbc:
    // 0x158bbc: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x158bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_158bc0:
    // 0x158bc0: 0xa0f809  jalr        $a1
label_158bc4:
    if (ctx->pc == 0x158BC4u) {
        ctx->pc = 0x158BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BC0u;
        // 0x158bc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BC8u;
        goto label_158bc8;
    }
    ctx->pc = 0x158BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x158BC8u);
        ctx->pc = 0x158BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BC0u;
        // 0x158bc4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BC0u, 0x158BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158BC8u;
label_158bc8:
    // 0x158bc8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158bcc:
    // 0x158bcc: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_158bd0:
    if (ctx->pc == 0x158BD0u) {
        ctx->pc = 0x158BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BCCu;
        // 0x158bd0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BD4u;
        goto label_158bd4;
    }
    ctx->pc = 0x158BCCu;
    {
        const bool branch_taken_0x158bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BCCu;
        // 0x158bd0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bcc) {
            ctx->pc = 0x158C14u;
            goto label_158c14;
        }
    }
    ctx->pc = 0x158BD4u;
label_158bd4:
    // 0x158bd4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x158bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_158bd8:
    // 0x158bd8: 0xc0632de  jal         func_18CB78
label_158bdc:
    if (ctx->pc == 0x158BDCu) {
        ctx->pc = 0x158BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BD8u;
        // 0x158bdc: 0x8c44deb8  lw          $a0, -0x2148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BE0u;
        goto label_158be0;
    }
    ctx->pc = 0x158BD8u;
    SET_GPR_U32(ctx, 31, 0x158BE0u);
    ctx->pc = 0x158BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BD8u;
    // 0x158bdc: 0x8c44deb8  lw          $a0, -0x2148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB78u, 0x158BD8u, 0x158BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BE0u;
label_158be0:
    // 0x158be0: 0xc048038  jal         func_1200E0
label_158be4:
    if (ctx->pc == 0x158BE4u) {
        ctx->pc = 0x158BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE0u;
        // 0x158be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BE8u;
        goto label_158be8;
    }
    ctx->pc = 0x158BE0u;
    SET_GPR_U32(ctx, 31, 0x158BE8u);
    ctx->pc = 0x158BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BE0u;
    // 0x158be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x158BE0u, 0x158BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BE8u;
label_158be8:
    // 0x158be8: 0x8e05aa84  lw          $a1, -0x557C($s0)
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_158bec:
    // 0x158bec: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_158bf0:
    // 0x158bf0: 0xc44001f0  lwc1        $f0, 0x1F0($v0)
    ctx->pc = 0x158bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158bf4:
    // 0x158bf4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x158bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_158bf8:
    // 0x158bf8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_158bfc:
    // 0x158bfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158c00:
    // 0x158c00: 0xc048038  jal         func_1200E0
label_158c04:
    if (ctx->pc == 0x158C04u) {
        ctx->pc = 0x158C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C00u;
        // 0x158c04: 0xe4a07a5c  swc1        $f0, 0x7A5C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 31324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C08u;
        goto label_158c08;
    }
    ctx->pc = 0x158C00u;
    SET_GPR_U32(ctx, 31, 0x158C08u);
    ctx->pc = 0x158C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C00u;
    // 0x158c04: 0xe4a07a5c  swc1        $f0, 0x7A5C($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 31324), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x158C00u, 0x158C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C08u;
label_158c08:
    // 0x158c08: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_158c0c:
    // 0x158c0c: 0xc044164  jal         func_110590
label_158c10:
    if (ctx->pc == 0x158C10u) {
        ctx->pc = 0x158C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C0Cu;
        // 0x158c10: 0xc44c01f4  lwc1        $f12, 0x1F4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C14u;
        goto label_158c14;
    }
    ctx->pc = 0x158C0Cu;
    SET_GPR_U32(ctx, 31, 0x158C14u);
    ctx->pc = 0x158C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C0Cu;
    // 0x158c10: 0xc44c01f4  lwc1        $f12, 0x1F4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x110590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110590u, 0x158C0Cu, 0x158C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C14u;
label_158c14:
    // 0x158c14: 0xc107444  jal         func_41D110
label_158c18:
    if (ctx->pc == 0x158C18u) {
        ctx->pc = 0x158C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C14u;
        // 0x158c18: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C1Cu;
        goto label_158c1c;
    }
    ctx->pc = 0x158C14u;
    SET_GPR_U32(ctx, 31, 0x158C1Cu);
    ctx->pc = 0x158C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C14u;
    // 0x158c18: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x158C14u, 0x158C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C1Cu;
label_158c1c:
    // 0x158c1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_158c20:
    if (ctx->pc == 0x158C20u) {
        ctx->pc = 0x158C24u;
        goto label_158c24;
    }
    ctx->pc = 0x158C1Cu;
    {
        const bool branch_taken_0x158c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c1c) {
            ctx->pc = 0x158C34u;
            goto label_158c34;
        }
    }
    ctx->pc = 0x158C24u;
label_158c24:
    // 0x158c24: 0xc0555fe  jal         func_1557F8
label_158c28:
    if (ctx->pc == 0x158C28u) {
        ctx->pc = 0x158C2Cu;
        goto label_158c2c;
    }
    ctx->pc = 0x158C24u;
    SET_GPR_U32(ctx, 31, 0x158C2Cu);
    ctx->pc = 0x1557F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1557F8u, 0x158C24u, 0x158C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C2Cu;
label_158c2c:
    // 0x158c2c: 0x10000013  b           . + 4 + (0x13 << 2)
label_158c30:
    if (ctx->pc == 0x158C30u) {
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C34u;
        goto label_158c34;
    }
    ctx->pc = 0x158C2Cu;
    {
        const bool branch_taken_0x158c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C2Cu;
        // 0x158c30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c2c) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C34u;
label_158c34:
    // 0x158c34: 0xc055502  jal         func_155408
label_158c38:
    if (ctx->pc == 0x158C38u) {
        ctx->pc = 0x158C3Cu;
        goto label_158c3c;
    }
    ctx->pc = 0x158C34u;
    SET_GPR_U32(ctx, 31, 0x158C3Cu);
    ctx->pc = 0x155408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155408u, 0x158C34u, 0x158C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C3Cu;
label_158c3c:
    // 0x158c3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_158c40:
    if (ctx->pc == 0x158C40u) {
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C44u;
        goto label_158c44;
    }
    ctx->pc = 0x158C3Cu;
    {
        const bool branch_taken_0x158c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c3c) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C44u;
label_158c44:
    // 0x158c44: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
label_158c48:
    if (ctx->pc == 0x158C48u) {
        ctx->pc = 0x158C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C44u;
        // 0x158c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C4Cu;
        goto label_158c4c;
    }
    ctx->pc = 0x158C44u;
    {
        const bool branch_taken_0x158c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x158c44) {
            ctx->pc = 0x158C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158C44u;
            // 0x158c48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C4Cu;
label_158c4c:
    // 0x158c4c: 0xc057508  jal         func_15D420
label_158c50:
    if (ctx->pc == 0x158C50u) {
        ctx->pc = 0x158C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C4Cu;
        // 0x158c50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C54u;
        goto label_158c54;
    }
    ctx->pc = 0x158C4Cu;
    SET_GPR_U32(ctx, 31, 0x158C54u);
    ctx->pc = 0x158C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C4Cu;
    // 0x158c50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D420u, 0x158C4Cu, 0x158C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C54u;
label_158c54:
    // 0x158c54: 0x10000009  b           . + 4 + (0x9 << 2)
label_158c58:
    if (ctx->pc == 0x158C58u) {
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C5Cu;
        goto label_158c5c;
    }
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C5Cu;
label_158c5c:
    // 0x158c5c: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_158c60:
    if (ctx->pc == 0x158C60u) {
        ctx->pc = 0x158C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C5Cu;
        // 0x158c60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C64u;
        goto label_158c64;
    }
    ctx->pc = 0x158C5Cu;
    {
        const bool branch_taken_0x158c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x158C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C5Cu;
        // 0x158c60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c5c) {
            ctx->pc = 0x158C7Cu;
            goto label_158c7c;
        }
    }
    ctx->pc = 0x158C64u;
label_158c64:
    // 0x158c64: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_158c68:
    if (ctx->pc == 0x158C68u) {
        ctx->pc = 0x158C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C64u;
        // 0x158c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C6Cu;
        goto label_158c6c;
    }
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C64u;
        // 0x158c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c64) {
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x158C6Cu;
label_158c6c:
    // 0x158c6c: 0xc106cbe  jal         func_41B2F8
label_158c70:
    if (ctx->pc == 0x158C70u) {
        ctx->pc = 0x158C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C6Cu;
        // 0x158c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C74u;
        goto label_158c74;
    }
    ctx->pc = 0x158C6Cu;
    SET_GPR_U32(ctx, 31, 0x158C74u);
    ctx->pc = 0x158C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C6Cu;
    // 0x158c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B2F8u, 0x158C6Cu, 0x158C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C74u;
label_158c74:
    // 0x158c74: 0x10000197  b           . + 4 + (0x197 << 2)
label_158c78:
    if (ctx->pc == 0x158C78u) {
        ctx->pc = 0x158C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C74u;
        // 0x158c78: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C7Cu;
        goto label_158c7c;
    }
    ctx->pc = 0x158C74u;
    {
        const bool branch_taken_0x158c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C74u;
        // 0x158c78: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c74) {
            ctx->pc = 0x1592D4u;
            goto label_1592d4;
        }
    }
    ctx->pc = 0x158C7Cu;
label_158c7c:
    // 0x158c7c: 0xc05587e  jal         func_1561F8
label_158c80:
    if (ctx->pc == 0x158C80u) {
        ctx->pc = 0x158C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C7Cu;
        // 0x158c80: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C84u;
        goto label_158c84;
    }
    ctx->pc = 0x158C7Cu;
    SET_GPR_U32(ctx, 31, 0x158C84u);
    ctx->pc = 0x158C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C7Cu;
    // 0x158c80: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x158C7Cu, 0x158C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C84u;
label_158c84:
    // 0x158c84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158c88:
    // 0x158c88: 0xc108cfe  jal         func_4233F8
label_158c8c:
    if (ctx->pc == 0x158C8Cu) {
        ctx->pc = 0x158C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C88u;
        // 0x158c8c: 0x8c44504c  lw          $a0, 0x504C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C90u;
        goto label_158c90;
    }
    ctx->pc = 0x158C88u;
    SET_GPR_U32(ctx, 31, 0x158C90u);
    ctx->pc = 0x158C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C88u;
    // 0x158c8c: 0x8c44504c  lw          $a0, 0x504C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4233F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4233F8u, 0x158C88u, 0x158C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C90u;
label_158c90:
    // 0x158c90: 0xc123508  jal         func_48D420
label_158c94:
    if (ctx->pc == 0x158C94u) {
        ctx->pc = 0x158C98u;
        goto label_158c98;
    }
    ctx->pc = 0x158C90u;
    SET_GPR_U32(ctx, 31, 0x158C98u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x158C90u, 0x158C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C98u;
label_158c98:
    // 0x158c98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158c9c:
    // 0x158c9c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x158c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_158ca0:
    // 0x158ca0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_158ca4:
    // 0x158ca4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_158ca8:
    // 0x158ca8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_158cac:
    // 0x158cac: 0x40f809  jalr        $v0
label_158cb0:
    if (ctx->pc == 0x158CB0u) {
        ctx->pc = 0x158CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CACu;
        // 0x158cb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CB4u;
        goto label_158cb4;
    }
    ctx->pc = 0x158CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158CB4u);
        ctx->pc = 0x158CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CACu;
        // 0x158cb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158CACu, 0x158CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158CB4u;
label_158cb4:
    // 0x158cb4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x158cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_158cb8:
    // 0x158cb8: 0xc0e8c52  jal         func_3A3148
label_158cbc:
    if (ctx->pc == 0x158CBCu) {
        ctx->pc = 0x158CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB8u;
        // 0x158cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CC0u;
        goto label_158cc0;
    }
    ctx->pc = 0x158CB8u;
    SET_GPR_U32(ctx, 31, 0x158CC0u);
    ctx->pc = 0x158CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CB8u;
    // 0x158cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x158CB8u, 0x158CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CC0u;
label_158cc0:
    // 0x158cc0: 0xc0558b2  jal         func_1562C8
label_158cc4:
    if (ctx->pc == 0x158CC4u) {
        ctx->pc = 0x158CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC0u;
        // 0x158cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CC8u;
        goto label_158cc8;
    }
    ctx->pc = 0x158CC0u;
    SET_GPR_U32(ctx, 31, 0x158CC8u);
    ctx->pc = 0x158CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CC0u;
    // 0x158cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x158CC0u, 0x158CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CC8u;
label_158cc8:
    // 0x158cc8: 0xc055888  jal         func_156220
label_158ccc:
    if (ctx->pc == 0x158CCCu) {
        ctx->pc = 0x158CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CC8u;
        // 0x158ccc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CD0u;
        goto label_158cd0;
    }
    ctx->pc = 0x158CC8u;
    SET_GPR_U32(ctx, 31, 0x158CD0u);
    ctx->pc = 0x158CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CC8u;
    // 0x158ccc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x158CC8u, 0x158CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CD0u;
label_158cd0:
    // 0x158cd0: 0xc055a70  jal         func_1569C0
label_158cd4:
    if (ctx->pc == 0x158CD4u) {
        ctx->pc = 0x158CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CD0u;
        // 0x158cd4: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CD8u;
        goto label_158cd8;
    }
    ctx->pc = 0x158CD0u;
    SET_GPR_U32(ctx, 31, 0x158CD8u);
    ctx->pc = 0x158CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CD0u;
    // 0x158cd4: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x158CD0u, 0x158CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CD8u;
label_158cd8:
    // 0x158cd8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_158cdc:
    // 0x158cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158ce0:
    // 0x158ce0: 0x8c62536c  lw          $v0, 0x536C($v1)
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21356)));
label_158ce4:
    // 0x158ce4: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_158ce8:
    if (ctx->pc == 0x158CE8u) {
        ctx->pc = 0x158CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CE4u;
        // 0x158ce8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CECu;
        goto label_158cec;
    }
    ctx->pc = 0x158CE4u;
    {
        const bool branch_taken_0x158ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CE4u;
        // 0x158ce8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ce4) {
            ctx->pc = 0x158D18u;
            goto label_158d18;
        }
    }
    ctx->pc = 0x158CECu;
label_158cec:
    // 0x158cec: 0xc0926e6  jal         func_249B98
label_158cf0:
    if (ctx->pc == 0x158CF0u) {
        ctx->pc = 0x158CF4u;
        goto label_158cf4;
    }
    ctx->pc = 0x158CECu;
    SET_GPR_U32(ctx, 31, 0x158CF4u);
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x158CECu, 0x158CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158CF4u;
label_158cf4:
    // 0x158cf4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_158cf8:
    // 0x158cf8: 0xc0e8c6a  jal         func_3A31A8
label_158cfc:
    if (ctx->pc == 0x158CFCu) {
        ctx->pc = 0x158CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CF8u;
        // 0x158cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D00u;
        goto label_158d00;
    }
    ctx->pc = 0x158CF8u;
    SET_GPR_U32(ctx, 31, 0x158D00u);
    ctx->pc = 0x158CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CF8u;
    // 0x158cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x158CF8u, 0x158D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D00u;
label_158d00:
    // 0x158d00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158d04:
    // 0x158d04: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_158d08:
    // 0x158d08: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_158d0c:
    // 0x158d0c: 0xc0d4456  jal         func_351158
label_158d10:
    if (ctx->pc == 0x158D10u) {
        ctx->pc = 0x158D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D0Cu;
        // 0x158d10: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D14u;
        goto label_158d14;
    }
    ctx->pc = 0x158D0Cu;
    SET_GPR_U32(ctx, 31, 0x158D14u);
    ctx->pc = 0x158D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D0Cu;
    // 0x158d10: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x158D0Cu, 0x158D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D14u;
label_158d14:
    // 0x158d14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158d18:
    // 0x158d18: 0x8c43c694  lw          $v1, -0x396C($v0)
    ctx->pc = 0x158d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952596)));
label_158d1c:
    // 0x158d1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_158d20:
    if (ctx->pc == 0x158D20u) {
        ctx->pc = 0x158D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D1Cu;
        // 0x158d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D24u;
        goto label_158d24;
    }
    ctx->pc = 0x158D1Cu;
    {
        const bool branch_taken_0x158d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D1Cu;
        // 0x158d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d1c) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158D24u;
label_158d24:
    // 0x158d24: 0xc103e28  jal         func_40F8A0
label_158d28:
    if (ctx->pc == 0x158D28u) {
        ctx->pc = 0x158D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D24u;
        // 0x158d28: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D2Cu;
        goto label_158d2c;
    }
    ctx->pc = 0x158D24u;
    SET_GPR_U32(ctx, 31, 0x158D2Cu);
    ctx->pc = 0x158D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D24u;
    // 0x158d28: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x158D24u, 0x158D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D2Cu;
label_158d2c:
    // 0x158d2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x158d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_158d30:
    // 0x158d30: 0xc06181a  jal         func_186068
label_158d34:
    if (ctx->pc == 0x158D34u) {
        ctx->pc = 0x158D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D30u;
        // 0x158d34: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D38u;
        goto label_158d38;
    }
    ctx->pc = 0x158D30u;
    SET_GPR_U32(ctx, 31, 0x158D38u);
    ctx->pc = 0x158D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D30u;
    // 0x158d34: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x158D30u, 0x158D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D38u;
label_158d38:
    // 0x158d38: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158d3c:
    // 0x158d3c: 0xc0e409a  jal         func_390268
label_158d40:
    if (ctx->pc == 0x158D40u) {
        ctx->pc = 0x158D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D3Cu;
        // 0x158d40: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D44u;
        goto label_158d44;
    }
    ctx->pc = 0x158D3Cu;
    SET_GPR_U32(ctx, 31, 0x158D44u);
    ctx->pc = 0x158D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D3Cu;
    // 0x158d40: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158D3Cu, 0x158D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D44u;
label_158d44:
    // 0x158d44: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
label_158d48:
    if (ctx->pc == 0x158D48u) {
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D4Cu;
        goto label_158d4c;
    }
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d44) {
            ctx->pc = 0x1593B8u;
            goto label_1593b8;
        }
    }
    ctx->pc = 0x158D4Cu;
label_158d4c:
    // 0x158d4c: 0x90620411  lbu         $v0, 0x411($v1)
    ctx->pc = 0x158d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1041)));
label_158d50:
    // 0x158d50: 0x14400182  bnez        $v0, . + 4 + (0x182 << 2)
label_158d54:
    if (ctx->pc == 0x158D54u) {
        ctx->pc = 0x158D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D50u;
        // 0x158d54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D58u;
        goto label_158d58;
    }
    ctx->pc = 0x158D50u;
    {
        const bool branch_taken_0x158d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D50u;
        // 0x158d54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d50) {
            ctx->pc = 0x15935Cu;
            goto label_15935c;
        }
    }
    ctx->pc = 0x158D58u;
label_158d58:
    // 0x158d58: 0x90620410  lbu         $v0, 0x410($v1)
    ctx->pc = 0x158d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_158d5c:
    // 0x158d5c: 0x14400180  bnez        $v0, . + 4 + (0x180 << 2)
label_158d60:
    if (ctx->pc == 0x158D60u) {
        ctx->pc = 0x158D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D5Cu;
        // 0x158d60: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D64u;
        goto label_158d64;
    }
    ctx->pc = 0x158D5Cu;
    {
        const bool branch_taken_0x158d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D5Cu;
        // 0x158d60: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d5c) {
            ctx->pc = 0x159360u;
            goto label_159360;
        }
    }
    ctx->pc = 0x158D64u;
label_158d64:
    // 0x158d64: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x158d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_158d68:
    // 0x158d68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x158d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158d6c:
    // 0x158d6c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x158d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_158d70:
    // 0x158d70: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x158d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_158d74:
    // 0x158d74: 0x184000c0  blez        $v0, . + 4 + (0xC0 << 2)
label_158d78:
    if (ctx->pc == 0x158D78u) {
        ctx->pc = 0x158D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D74u;
        // 0x158d78: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D7Cu;
        goto label_158d7c;
    }
    ctx->pc = 0x158D74u;
    {
        const bool branch_taken_0x158d74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x158D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D74u;
        // 0x158d78: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d74) {
            ctx->pc = 0x159078u;
            goto label_159078;
        }
    }
    ctx->pc = 0x158D7Cu;
label_158d7c:
    // 0x158d7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x158d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_158d80:
    // 0x158d80: 0x241e0228  addiu       $fp, $zero, 0x228
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_158d84:
    // 0x158d84: 0x24830840  addiu       $v1, $a0, 0x840
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_158d88:
    // 0x158d88: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x158d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158d8c:
    // 0x158d8c: 0x24760008  addiu       $s6, $v1, 0x8
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_158d90:
    // 0x158d90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x158d90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158d94:
    // 0x158d94: 0x0  nop
    ctx->pc = 0x158d94u;
    // NOP
label_158d98:
    // 0x158d98: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x158d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158d9c:
    // 0x158d9c: 0x26e40228  addiu       $a0, $s7, 0x228
    ctx->pc = 0x158d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 552));
label_158da0:
    // 0x158da0: 0xc0e409a  jal         func_390268
label_158da4:
    if (ctx->pc == 0x158DA4u) {
        ctx->pc = 0x158DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DA0u;
        // 0x158da4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DA8u;
        goto label_158da8;
    }
    ctx->pc = 0x158DA0u;
    SET_GPR_U32(ctx, 31, 0x158DA8u);
    ctx->pc = 0x158DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158DA0u;
    // 0x158da4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158DA0u, 0x158DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DA8u;
label_158da8:
    // 0x158da8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158dac:
    // 0x158dac: 0xc047e6c  jal         func_11F9B0
label_158db0:
    if (ctx->pc == 0x158DB0u) {
        ctx->pc = 0x158DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DACu;
        // 0x158db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DB4u;
        goto label_158db4;
    }
    ctx->pc = 0x158DACu;
    SET_GPR_U32(ctx, 31, 0x158DB4u);
    ctx->pc = 0x158DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158DACu;
    // 0x158db0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x158DACu, 0x158DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DB4u;
label_158db4:
    // 0x158db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158db8:
    // 0x158db8: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_158dbc:
    if (ctx->pc == 0x158DBCu) {
        ctx->pc = 0x158DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DB8u;
        // 0x158dbc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DC0u;
        goto label_158dc0;
    }
    ctx->pc = 0x158DB8u;
    {
        const bool branch_taken_0x158db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DB8u;
        // 0x158dbc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158db8) {
            ctx->pc = 0x158EB4u;
            goto label_158eb4;
        }
    }
    ctx->pc = 0x158DC0u;
label_158dc0:
    // 0x158dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158dc4:
    // 0x158dc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x158dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_158dc8:
    // 0x158dc8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x158dc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_158dcc:
    // 0x158dcc: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_158dd0:
    // 0x158dd0: 0xc0f809  jalr        $a2
label_158dd4:
    if (ctx->pc == 0x158DD4u) {
        ctx->pc = 0x158DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DD0u;
        // 0x158dd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DD8u;
        goto label_158dd8;
    }
    ctx->pc = 0x158DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x158DD8u);
        ctx->pc = 0x158DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DD0u;
        // 0x158dd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DD0u, 0x158DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158DD8u;
label_158dd8:
    // 0x158dd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x158dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158ddc:
    // 0x158ddc: 0x84640228  lh          $a0, 0x228($v1)
    ctx->pc = 0x158ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
label_158de0:
    // 0x158de0: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x158de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_158de4:
    // 0x158de4: 0x40f809  jalr        $v0
label_158de8:
    if (ctx->pc == 0x158DE8u) {
        ctx->pc = 0x158DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DE4u;
        // 0x158de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158DECu;
        goto label_158dec;
    }
    ctx->pc = 0x158DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158DECu);
        ctx->pc = 0x158DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DE4u;
        // 0x158de8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DE4u, 0x158DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158DECu;
label_158dec:
    // 0x158dec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x158decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_158df0:
    // 0x158df0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x158df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_158df4:
    // 0x158df4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x158df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_158df8:
    // 0x158df8: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_158dfc:
    // 0x158dfc: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_158e00:
    // 0x158e00: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_158e04:
    if (ctx->pc == 0x158E04u) {
        ctx->pc = 0x158E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E00u;
        // 0x158e04: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E08u;
        goto label_158e08;
    }
    ctx->pc = 0x158E00u;
    {
        const bool branch_taken_0x158e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E00u;
        // 0x158e04: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e00) {
            ctx->pc = 0x158EA8u;
            goto label_158ea8;
        }
    }
    ctx->pc = 0x158E08u;
label_158e08:
    // 0x158e08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x158e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_158e0c:
    // 0x158e0c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_158e10:
    // 0x158e10: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_158e14:
    // 0x158e14: 0x40f809  jalr        $v0
label_158e18:
    if (ctx->pc == 0x158E18u) {
        ctx->pc = 0x158E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E14u;
        // 0x158e18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E1Cu;
        goto label_158e1c;
    }
    ctx->pc = 0x158E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158E1Cu);
        ctx->pc = 0x158E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E14u;
        // 0x158e18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E14u, 0x158E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158E1Cu;
label_158e1c:
    // 0x158e1c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x158e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_158e20:
    // 0x158e20: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_158e24:
    if (ctx->pc == 0x158E24u) {
        ctx->pc = 0x158E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E20u;
        // 0x158e24: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E28u;
        goto label_158e28;
    }
    ctx->pc = 0x158E20u;
    {
        const bool branch_taken_0x158e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E20u;
        // 0x158e24: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e20) {
            ctx->pc = 0x158EA4u;
            goto label_158ea4;
        }
    }
    ctx->pc = 0x158E28u;
label_158e28:
    // 0x158e28: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x158e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_158e2c:
    // 0x158e2c: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x158e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_158e30:
    // 0x158e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158e34:
    // 0x158e34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x158e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_158e38:
    // 0x158e38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x158e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_158e3c:
    // 0x158e3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x158e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_158e40:
    // 0x158e40: 0xc088edc  jal         func_223B70
label_158e44:
    if (ctx->pc == 0x158E44u) {
        ctx->pc = 0x158E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E40u;
        // 0x158e44: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E48u;
        goto label_158e48;
    }
    ctx->pc = 0x158E40u;
    SET_GPR_U32(ctx, 31, 0x158E48u);
    ctx->pc = 0x158E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E40u;
    // 0x158e44: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x158E40u, 0x158E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E48u;
label_158e48:
    // 0x158e48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_158e4c:
    if (ctx->pc == 0x158E4Cu) {
        ctx->pc = 0x158E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E48u;
        // 0x158e4c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E50u;
        goto label_158e50;
    }
    ctx->pc = 0x158E48u;
    {
        const bool branch_taken_0x158e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E48u;
        // 0x158e4c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e48) {
            ctx->pc = 0x158E64u;
            goto label_158e64;
        }
    }
    ctx->pc = 0x158E50u;
label_158e50:
    // 0x158e50: 0xc089f76  jal         func_227DD8
label_158e54:
    if (ctx->pc == 0x158E54u) {
        ctx->pc = 0x158E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E50u;
        // 0x158e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E58u;
        goto label_158e58;
    }
    ctx->pc = 0x158E50u;
    SET_GPR_U32(ctx, 31, 0x158E58u);
    ctx->pc = 0x158E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E50u;
    // 0x158e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x158E50u, 0x158E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E58u;
label_158e58:
    // 0x158e58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_158e5c:
    if (ctx->pc == 0x158E5Cu) {
        ctx->pc = 0x158E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E58u;
        // 0x158e5c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E60u;
        goto label_158e60;
    }
    ctx->pc = 0x158E58u;
    {
        const bool branch_taken_0x158e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E58u;
        // 0x158e5c: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e58) {
            ctx->pc = 0x158E8Cu;
            goto label_158e8c;
        }
    }
    ctx->pc = 0x158E60u;
label_158e60:
    // 0x158e60: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158e64:
    // 0x158e64: 0xc0e409a  jal         func_390268
label_158e68:
    if (ctx->pc == 0x158E68u) {
        ctx->pc = 0x158E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E64u;
        // 0x158e68: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E6Cu;
        goto label_158e6c;
    }
    ctx->pc = 0x158E64u;
    SET_GPR_U32(ctx, 31, 0x158E6Cu);
    ctx->pc = 0x158E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E64u;
    // 0x158e68: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158E64u, 0x158E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E6Cu;
label_158e6c:
    // 0x158e6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_158e70:
    if (ctx->pc == 0x158E70u) {
        ctx->pc = 0x158E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E6Cu;
        // 0x158e70: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158E74u;
        goto label_158e74;
    }
    ctx->pc = 0x158E6Cu;
    {
        const bool branch_taken_0x158e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E6Cu;
        // 0x158e70: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e6c) {
            ctx->pc = 0x158E8Cu;
            goto label_158e8c;
        }
    }
    ctx->pc = 0x158E74u;
label_158e74:
    // 0x158e74: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x158e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_158e78:
    // 0x158e78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_158e7c:
    // 0x158e7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x158e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_158e80:
    // 0x158e80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x158e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_158e84:
    // 0x158e84: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x158e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_158e88:
    // 0x158e88: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x158e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158e8c:
    // 0x158e8c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_158e90:
    // 0x158e90: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x158e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_158e94:
    // 0x158e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_158e98:
    // 0x158e98: 0x0  nop
    ctx->pc = 0x158e98u;
    // NOP
label_158e9c:
    // 0x158e9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x158e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_158ea0:
    // 0x158ea0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x158ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_158ea4:
    // 0x158ea4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x158ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_158ea8:
    // 0x158ea8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x158ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_158eac:
    // 0x158eac: 0x10000003  b           . + 4 + (0x3 << 2)
label_158eb0:
    if (ctx->pc == 0x158EB0u) {
        ctx->pc = 0x158EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EACu;
        // 0x158eb0: 0x7ba30050  lq          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EB4u;
        goto label_158eb4;
    }
    ctx->pc = 0x158EACu;
    {
        const bool branch_taken_0x158eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EACu;
        // 0x158eb0: 0x7ba30050  lq          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158eac) {
            ctx->pc = 0x158EBCu;
            goto label_158ebc;
        }
    }
    ctx->pc = 0x158EB4u;
label_158eb4:
    // 0x158eb4: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x158eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_158eb8:
    // 0x158eb8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x158eb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_158ebc:
    // 0x158ebc: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x158ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_158ec0:
    // 0x158ec0: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158ec4:
    // 0x158ec4: 0xc0e409a  jal         func_390268
label_158ec8:
    if (ctx->pc == 0x158EC8u) {
        ctx->pc = 0x158EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EC4u;
        // 0x158ec8: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158ECCu;
        goto label_158ecc;
    }
    ctx->pc = 0x158EC4u;
    SET_GPR_U32(ctx, 31, 0x158ECCu);
    ctx->pc = 0x158EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EC4u;
    // 0x158ec8: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158EC4u, 0x158ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158ECCu;
label_158ecc:
    // 0x158ecc: 0xc0874fa  jal         func_21D3E8
label_158ed0:
    if (ctx->pc == 0x158ED0u) {
        ctx->pc = 0x158ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ECCu;
        // 0x158ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158ED4u;
        goto label_158ed4;
    }
    ctx->pc = 0x158ECCu;
    SET_GPR_U32(ctx, 31, 0x158ED4u);
    ctx->pc = 0x158ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158ECCu;
    // 0x158ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x158ECCu, 0x158ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158ED4u;
label_158ed4:
    // 0x158ed4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x158ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_158ed8:
    // 0x158ed8: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
label_158edc:
    if (ctx->pc == 0x158EDCu) {
        ctx->pc = 0x158EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED8u;
        // 0x158edc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EE0u;
        goto label_158ee0;
    }
    ctx->pc = 0x158ED8u;
    {
        const bool branch_taken_0x158ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED8u;
        // 0x158edc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ed8) {
            ctx->pc = 0x159054u;
            goto label_159054;
        }
    }
    ctx->pc = 0x158EE0u;
label_158ee0:
    // 0x158ee0: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x158ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_158ee4:
    // 0x158ee4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_158ee8:
    if (ctx->pc == 0x158EE8u) {
        ctx->pc = 0x158EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE4u;
        // 0x158ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EECu;
        goto label_158eec;
    }
    ctx->pc = 0x158EE4u;
    {
        const bool branch_taken_0x158ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE4u;
        // 0x158ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee4) {
            ctx->pc = 0x158F20u;
            goto label_158f20;
        }
    }
    ctx->pc = 0x158EECu;
label_158eec:
    // 0x158eec: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x158eecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_158ef0:
    // 0x158ef0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_158ef4:
    if (ctx->pc == 0x158EF4u) {
        ctx->pc = 0x158EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF0u;
        // 0x158ef4: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158EF8u;
        goto label_158ef8;
    }
    ctx->pc = 0x158EF0u;
    {
        const bool branch_taken_0x158ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x158EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF0u;
        // 0x158ef4: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ef0) {
            ctx->pc = 0x158F0Cu;
            goto label_158f0c;
        }
    }
    ctx->pc = 0x158EF8u;
label_158ef8:
    // 0x158ef8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x158ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_158efc:
    // 0x158efc: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x158efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_158f00:
    // 0x158f00: 0x600013  mtlo        $v1
    ctx->pc = 0x158f00u;
    ctx->lo = GPR_U64(ctx, 3);
label_158f04:
    // 0x158f04: 0x10000002  b           . + 4 + (0x2 << 2)
label_158f08:
    if (ctx->pc == 0x158F08u) {
        ctx->pc = 0x158F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F04u;
        // 0x158f08: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F0Cu;
        goto label_158f0c;
    }
    ctx->pc = 0x158F04u;
    {
        const bool branch_taken_0x158f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F04u;
        // 0x158f08: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f04) {
            ctx->pc = 0x158F10u;
            goto label_158f10;
        }
    }
    ctx->pc = 0x158F0Cu;
label_158f0c:
    // 0x158f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158f10:
    // 0x158f10: 0xc0512fc  jal         func_144BF0
label_158f14:
    if (ctx->pc == 0x158F14u) {
        ctx->pc = 0x158F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F10u;
        // 0x158f14: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F18u;
        goto label_158f18;
    }
    ctx->pc = 0x158F10u;
    SET_GPR_U32(ctx, 31, 0x158F18u);
    ctx->pc = 0x158F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F10u;
    // 0x158f14: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x158F10u, 0x158F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F18u;
label_158f18:
    // 0x158f18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_158f1c:
    if (ctx->pc == 0x158F1Cu) {
        ctx->pc = 0x158F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F18u;
        // 0x158f1c: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F20u;
        goto label_158f20;
    }
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158F18u;
            // 0x158f1c: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158F34u;
            goto label_158f34;
        }
    }
    ctx->pc = 0x158F20u;
label_158f20:
    // 0x158f20: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_158f24:
    // 0x158f24: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_158f28:
    // 0x158f28: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_158f2c:
    if (ctx->pc == 0x158F2Cu) {
        ctx->pc = 0x158F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F28u;
        // 0x158f2c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F30u;
        goto label_158f30;
    }
    ctx->pc = 0x158F28u;
    {
        const bool branch_taken_0x158f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F28u;
        // 0x158f2c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f28) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x158F30u;
label_158f30:
    // 0x158f30: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_158f34:
    // 0x158f34: 0x8ca34120  lw          $v1, 0x4120($a1)
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_158f38:
    // 0x158f38: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_158f3c:
    // 0x158f3c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x158f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_158f40:
    // 0x158f40: 0x40f809  jalr        $v0
label_158f44:
    if (ctx->pc == 0x158F44u) {
        ctx->pc = 0x158F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F40u;
        // 0x158f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F48u;
        goto label_158f48;
    }
    ctx->pc = 0x158F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158F48u);
        ctx->pc = 0x158F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F40u;
        // 0x158f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F40u, 0x158F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158F48u;
label_158f48:
    // 0x158f48: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_158f4c:
    if (ctx->pc == 0x158F4Cu) {
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F48u;
        // 0x158f4c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F50u;
        goto label_158f50;
    }
    ctx->pc = 0x158F48u;
    {
        const bool branch_taken_0x158f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F48u;
        // 0x158f4c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f48) {
            ctx->pc = 0x158FB4u;
            goto label_158fb4;
        }
    }
    ctx->pc = 0x158F50u;
label_158f50:
    // 0x158f50: 0xc089f76  jal         func_227DD8
label_158f54:
    if (ctx->pc == 0x158F54u) {
        ctx->pc = 0x158F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F50u;
        // 0x158f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F58u;
        goto label_158f58;
    }
    ctx->pc = 0x158F50u;
    SET_GPR_U32(ctx, 31, 0x158F58u);
    ctx->pc = 0x158F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F50u;
    // 0x158f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x158F50u, 0x158F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F58u;
label_158f58:
    // 0x158f58: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_158f5c:
    if (ctx->pc == 0x158F5Cu) {
        ctx->pc = 0x158F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F58u;
        // 0x158f5c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F60u;
        goto label_158f60;
    }
    ctx->pc = 0x158F58u;
    {
        const bool branch_taken_0x158f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F58u;
        // 0x158f5c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f58) {
            ctx->pc = 0x158FB4u;
            goto label_158fb4;
        }
    }
    ctx->pc = 0x158F60u;
label_158f60:
    // 0x158f60: 0xc107444  jal         func_41D110
label_158f64:
    if (ctx->pc == 0x158F64u) {
        ctx->pc = 0x158F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F60u;
        // 0x158f64: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F68u;
        goto label_158f68;
    }
    ctx->pc = 0x158F60u;
    SET_GPR_U32(ctx, 31, 0x158F68u);
    ctx->pc = 0x158F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F60u;
    // 0x158f64: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x158F60u, 0x158F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F68u;
label_158f68:
    // 0x158f68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_158f6c:
    if (ctx->pc == 0x158F6Cu) {
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F70u;
        goto label_158f70;
    }
    ctx->pc = 0x158F68u;
    {
        const bool branch_taken_0x158f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f68) {
            ctx->pc = 0x158F7Cu;
            goto label_158f7c;
        }
    }
    ctx->pc = 0x158F70u;
label_158f70:
    // 0x158f70: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_158f74:
    // 0x158f74: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
label_158f78:
    if (ctx->pc == 0x158F78u) {
        ctx->pc = 0x158F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F74u;
        // 0x158f78: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F7Cu;
        goto label_158f7c;
    }
    ctx->pc = 0x158F74u;
    {
        const bool branch_taken_0x158f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F74u;
        // 0x158f78: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f74) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x158F7Cu;
label_158f7c:
    // 0x158f7c: 0xc107444  jal         func_41D110
label_158f80:
    if (ctx->pc == 0x158F80u) {
        ctx->pc = 0x158F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F7Cu;
        // 0x158f80: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F84u;
        goto label_158f84;
    }
    ctx->pc = 0x158F7Cu;
    SET_GPR_U32(ctx, 31, 0x158F84u);
    ctx->pc = 0x158F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F7Cu;
    // 0x158f80: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x158F7Cu, 0x158F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F84u;
label_158f84:
    // 0x158f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_158f88:
    if (ctx->pc == 0x158F88u) {
        ctx->pc = 0x158F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F84u;
        // 0x158f88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F8Cu;
        goto label_158f8c;
    }
    ctx->pc = 0x158F84u;
    {
        const bool branch_taken_0x158f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F84u;
        // 0x158f88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f84) {
            ctx->pc = 0x158F94u;
            goto label_158f94;
        }
    }
    ctx->pc = 0x158F8Cu;
label_158f8c:
    // 0x158f8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_158f90:
    if (ctx->pc == 0x158F90u) {
        ctx->pc = 0x158F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F8Cu;
        // 0x158f90: 0x8c43ec34  lw          $v1, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158F94u;
        goto label_158f94;
    }
    ctx->pc = 0x158F8Cu;
    {
        const bool branch_taken_0x158f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F8Cu;
        // 0x158f90: 0x8c43ec34  lw          $v1, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f8c) {
            ctx->pc = 0x158F9Cu;
            goto label_158f9c;
        }
    }
    ctx->pc = 0x158F94u;
label_158f94:
    // 0x158f94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158f98:
    // 0x158f98: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x158f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_158f9c:
    // 0x158f9c: 0xac731bc0  sw          $s3, 0x1BC0($v1)
    ctx->pc = 0x158f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7104), GPR_U32(ctx, 19));
label_158fa0:
    // 0x158fa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158fa4:
    // 0x158fa4: 0xc0553ca  jal         func_154F28
label_158fa8:
    if (ctx->pc == 0x158FA8u) {
        ctx->pc = 0x158FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FA4u;
        // 0x158fa8: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FACu;
        goto label_158fac;
    }
    ctx->pc = 0x158FA4u;
    SET_GPR_U32(ctx, 31, 0x158FACu);
    ctx->pc = 0x158FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FA4u;
    // 0x158fa8: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F28u, 0x158FA4u, 0x158FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FACu;
label_158fac:
    // 0x158fac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_158fb0:
    if (ctx->pc == 0x158FB0u) {
        ctx->pc = 0x158FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FACu;
        // 0x158fb0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FB4u;
        goto label_158fb4;
    }
    ctx->pc = 0x158FACu;
    {
        const bool branch_taken_0x158fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FACu;
        // 0x158fb0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fac) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x158FB4u;
label_158fb4:
    // 0x158fb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x158fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_158fb8:
    // 0x158fb8: 0x24640840  addiu       $a0, $v1, 0x840
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_158fbc:
    // 0x158fbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x158fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_158fc0:
    // 0x158fc0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_158fc4:
    // 0x158fc4: 0x8e2310d0  lw          $v1, 0x10D0($s1)
    ctx->pc = 0x158fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4304)));
label_158fc8:
    // 0x158fc8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_158fcc:
    if (ctx->pc == 0x158FCCu) {
        ctx->pc = 0x158FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FC8u;
        // 0x158fcc: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FD0u;
        goto label_158fd0;
    }
    ctx->pc = 0x158FC8u;
    {
        const bool branch_taken_0x158fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FC8u;
        // 0x158fcc: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fc8) {
            ctx->pc = 0x159058u;
            goto label_159058;
        }
    }
    ctx->pc = 0x158FD0u;
label_158fd0:
    // 0x158fd0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_158fd4:
    // 0x158fd4: 0x8ca34120  lw          $v1, 0x4120($a1)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_158fd8:
    // 0x158fd8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_158fdc:
    // 0x158fdc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x158fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_158fe0:
    // 0x158fe0: 0x40f809  jalr        $v0
label_158fe4:
    if (ctx->pc == 0x158FE4u) {
        ctx->pc = 0x158FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE0u;
        // 0x158fe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FE8u;
        goto label_158fe8;
    }
    ctx->pc = 0x158FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158FE8u);
        ctx->pc = 0x158FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE0u;
        // 0x158fe4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158FE0u, 0x158FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158FE8u;
label_158fe8:
    // 0x158fe8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_158fec:
    if (ctx->pc == 0x158FECu) {
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FF0u;
        goto label_158ff0;
    }
    ctx->pc = 0x158FE8u;
    {
        const bool branch_taken_0x158fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe8) {
            ctx->pc = 0x159054u;
            goto label_159054;
        }
    }
    ctx->pc = 0x158FF0u;
label_158ff0:
    // 0x158ff0: 0x26e40228  addiu       $a0, $s7, 0x228
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 552));
label_158ff4:
    // 0x158ff4: 0xc0e409a  jal         func_390268
label_158ff8:
    if (ctx->pc == 0x158FF8u) {
        ctx->pc = 0x158FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FF4u;
        // 0x158ff8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158FFCu;
        goto label_158ffc;
    }
    ctx->pc = 0x158FF4u;
    SET_GPR_U32(ctx, 31, 0x158FFCu);
    ctx->pc = 0x158FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FF4u;
    // 0x158ff8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x158FF4u, 0x158FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FFCu;
label_158ffc:
    // 0x158ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159000:
    // 0x159000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159004:
    // 0x159004: 0xc08bad0  jal         func_22EB40
label_159008:
    if (ctx->pc == 0x159008u) {
        ctx->pc = 0x159008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159004u;
        // 0x159008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15900Cu;
        goto label_15900c;
    }
    ctx->pc = 0x159004u;
    SET_GPR_U32(ctx, 31, 0x15900Cu);
    ctx->pc = 0x159008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159004u;
    // 0x159008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x159004u, 0x15900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15900Cu;
label_15900c:
    // 0x15900c: 0xc08a18c  jal         func_228630
label_159010:
    if (ctx->pc == 0x159010u) {
        ctx->pc = 0x159010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15900Cu;
        // 0x159010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159014u;
        goto label_159014;
    }
    ctx->pc = 0x15900Cu;
    SET_GPR_U32(ctx, 31, 0x159014u);
    ctx->pc = 0x159010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15900Cu;
    // 0x159010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228630u, 0x15900Cu, 0x159014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159014u;
label_159014:
    // 0x159014: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x159014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_159018:
    // 0x159018: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x159018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_15901c:
    // 0x15901c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x15901cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_159020:
    // 0x159020: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_159024:
    // 0x159024: 0x60f809  jalr        $v1
label_159028:
    if (ctx->pc == 0x159028u) {
        ctx->pc = 0x159028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159024u;
        // 0x159028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15902Cu;
        goto label_15902c;
    }
    ctx->pc = 0x159024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15902Cu);
        ctx->pc = 0x159028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159024u;
        // 0x159028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159024u, 0x15902Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15902Cu;
label_15902c:
    // 0x15902c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x15902cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_159030:
    // 0x159030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159034:
    // 0x159034: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x159034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_159038:
    // 0x159038: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x159038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_15903c:
    // 0x15903c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x15903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_159040:
    // 0x159040: 0x60f809  jalr        $v1
label_159044:
    if (ctx->pc == 0x159044u) {
        ctx->pc = 0x159044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159040u;
        // 0x159044: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159048u;
        goto label_159048;
    }
    ctx->pc = 0x159040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159048u);
        ctx->pc = 0x159044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159040u;
        // 0x159044: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159040u, 0x159048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159048u;
label_159048:
    // 0x159048: 0x8e2210d0  lw          $v0, 0x10D0($s1)
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4304)));
label_15904c:
    // 0x15904c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_159050:
    // 0x159050: 0xae2210d0  sw          $v0, 0x10D0($s1)
    ctx->pc = 0x159050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4304), GPR_U32(ctx, 2));
label_159054:
    // 0x159054: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x159054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_159058:
    // 0x159058: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x159058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15905c:
    // 0x15905c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_159060:
    // 0x159060: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x159060u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_159064:
    // 0x159064: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_159068:
    // 0x159068: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x159068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_15906c:
    // 0x15906c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x15906cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_159070:
    // 0x159070: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
label_159074:
    if (ctx->pc == 0x159074u) {
        ctx->pc = 0x159074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159070u;
        // 0x159074: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159078u;
        goto label_159078;
    }
    ctx->pc = 0x159070u;
    {
        const bool branch_taken_0x159070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159070u;
        // 0x159074: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159070) {
            ctx->pc = 0x158D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158d98;
        }
    }
    ctx->pc = 0x159078u;
label_159078:
    // 0x159078: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15907c:
    // 0x15907c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159080:
    // 0x159080: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x159080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_159084:
    // 0x159084: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x159084u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159088:
    // 0x159088: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15908c:
    // 0x15908c: 0xc043e04  jal         func_10F810
label_159090:
    if (ctx->pc == 0x159090u) {
        ctx->pc = 0x159090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15908Cu;
        // 0x159090: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159094u;
        goto label_159094;
    }
    ctx->pc = 0x15908Cu;
    SET_GPR_U32(ctx, 31, 0x159094u);
    ctx->pc = 0x159090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15908Cu;
    // 0x159090: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15908Cu, 0x159094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159094u;
label_159094:
    // 0x159094: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x159094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_159098:
    // 0x159098: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x159098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_15909c:
    // 0x15909c: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x15909cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1590a0:
    // 0x1590a0: 0x24640840  addiu       $a0, $v1, 0x840
    ctx->pc = 0x1590a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_1590a4:
    // 0x1590a4: 0xc06bc04  jal         func_1AF010
label_1590a8:
    if (ctx->pc == 0x1590A8u) {
        ctx->pc = 0x1590A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590A4u;
        // 0x1590a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590ACu;
        goto label_1590ac;
    }
    ctx->pc = 0x1590A4u;
    SET_GPR_U32(ctx, 31, 0x1590ACu);
    ctx->pc = 0x1590A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590A4u;
    // 0x1590a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF010u, 0x1590A4u, 0x1590ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590ACu;
label_1590ac:
    // 0x1590ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1590b0:
    if (ctx->pc == 0x1590B0u) {
        ctx->pc = 0x1590B4u;
        goto label_1590b4;
    }
    ctx->pc = 0x1590ACu;
    {
        const bool branch_taken_0x1590ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590ac) {
            ctx->pc = 0x159120u;
            goto label_159120;
        }
    }
    ctx->pc = 0x1590B4u;
label_1590b4:
    // 0x1590b4: 0x0  nop
    ctx->pc = 0x1590b4u;
    // NOP
label_1590b8:
    // 0x1590b8: 0xc047e6c  jal         func_11F9B0
label_1590bc:
    if (ctx->pc == 0x1590BCu) {
        ctx->pc = 0x1590BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590B8u;
        // 0x1590bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590C0u;
        goto label_1590c0;
    }
    ctx->pc = 0x1590B8u;
    SET_GPR_U32(ctx, 31, 0x1590C0u);
    ctx->pc = 0x1590BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590B8u;
    // 0x1590bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1590B8u, 0x1590C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590C0u;
label_1590c0:
    // 0x1590c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1590c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1590c4:
    // 0x1590c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1590c8:
    // 0x1590c8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1590c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1590cc:
    // 0x1590cc: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1590d0:
    // 0x1590d0: 0x40f809  jalr        $v0
label_1590d4:
    if (ctx->pc == 0x1590D4u) {
        ctx->pc = 0x1590D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D0u;
        // 0x1590d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590D8u;
        goto label_1590d8;
    }
    ctx->pc = 0x1590D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1590D8u);
        ctx->pc = 0x1590D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D0u;
        // 0x1590d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1590D0u, 0x1590D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1590D8u;
label_1590d8:
    // 0x1590d8: 0x50530010  beql        $v0, $s3, . + 4 + (0x10 << 2)
label_1590dc:
    if (ctx->pc == 0x1590DCu) {
        ctx->pc = 0x1590DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590D8u;
        // 0x1590dc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590E0u;
        goto label_1590e0;
    }
    ctx->pc = 0x1590D8u;
    {
        const bool branch_taken_0x1590d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1590d8) {
            ctx->pc = 0x1590DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1590D8u;
            // 0x1590dc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15911Cu;
            goto label_15911c;
        }
    }
    ctx->pc = 0x1590E0u;
label_1590e0:
    // 0x1590e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1590e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1590e4:
    // 0x1590e4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1590e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1590e8:
    // 0x1590e8: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x1590e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1590ec:
    // 0x1590ec: 0x40f809  jalr        $v0
label_1590f0:
    if (ctx->pc == 0x1590F0u) {
        ctx->pc = 0x1590F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590ECu;
        // 0x1590f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590F4u;
        goto label_1590f4;
    }
    ctx->pc = 0x1590ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1590F4u);
        ctx->pc = 0x1590F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590ECu;
        // 0x1590f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1590ECu, 0x1590F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1590F4u;
label_1590f4:
    // 0x1590f4: 0x50520009  beql        $v0, $s2, . + 4 + (0x9 << 2)
label_1590f8:
    if (ctx->pc == 0x1590F8u) {
        ctx->pc = 0x1590F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590F4u;
        // 0x1590f8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1590FCu;
        goto label_1590fc;
    }
    ctx->pc = 0x1590F4u;
    {
        const bool branch_taken_0x1590f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1590f4) {
            ctx->pc = 0x1590F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1590F4u;
            // 0x1590f8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15911Cu;
            goto label_15911c;
        }
    }
    ctx->pc = 0x1590FCu;
label_1590fc:
    // 0x1590fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159100:
    // 0x159100: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_159104:
    // 0x159104: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_159108:
    // 0x159108: 0x40f809  jalr        $v0
label_15910c:
    if (ctx->pc == 0x15910Cu) {
        ctx->pc = 0x15910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159108u;
        // 0x15910c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159110u;
        goto label_159110;
    }
    ctx->pc = 0x159108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159110u);
        ctx->pc = 0x15910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159108u;
        // 0x15910c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159108u, 0x159110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159110u;
label_159110:
    // 0x159110: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_159114:
    if (ctx->pc == 0x159114u) {
        ctx->pc = 0x159114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159110u;
        // 0x159114: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159118u;
        goto label_159118;
    }
    ctx->pc = 0x159110u;
    {
        const bool branch_taken_0x159110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159110) {
            ctx->pc = 0x159114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159110u;
            // 0x159114: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159120u;
            goto label_159120;
        }
    }
    ctx->pc = 0x159118u;
label_159118:
    // 0x159118: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15911c:
    // 0x15911c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15911cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_159120:
    // 0x159120: 0xc047ab8  jal         func_11EAE0
label_159124:
    if (ctx->pc == 0x159124u) {
        ctx->pc = 0x159128u;
        goto label_159128;
    }
    ctx->pc = 0x159120u;
    SET_GPR_U32(ctx, 31, 0x159128u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x159120u, 0x159128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159128u;
label_159128:
    // 0x159128: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x159128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15912c:
    // 0x15912c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_159130:
    if (ctx->pc == 0x159130u) {
        ctx->pc = 0x159134u;
        goto label_159134;
    }
    ctx->pc = 0x15912Cu;
    {
        const bool branch_taken_0x15912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15912c) {
            ctx->pc = 0x1590B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1590b8;
        }
    }
    ctx->pc = 0x159134u;
label_159134:
    // 0x159134: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x159134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_159138:
    // 0x159138: 0x8c83deb8  lw          $v1, -0x2148($a0)
    ctx->pc = 0x159138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958776)));
label_15913c:
    // 0x15913c: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x15913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_159140:
    // 0x159140: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_159144:
    if (ctx->pc == 0x159144u) {
        ctx->pc = 0x159144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159140u;
        // 0x159144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159148u;
        goto label_159148;
    }
    ctx->pc = 0x159140u;
    {
        const bool branch_taken_0x159140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159140u;
        // 0x159144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159140) {
            ctx->pc = 0x159164u;
            goto label_159164;
        }
    }
    ctx->pc = 0x159148u;
label_159148:
    // 0x159148: 0xc46101ec  lwc1        $f1, 0x1EC($v1)
    ctx->pc = 0x159148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15914c:
    // 0x15914c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15914cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_159150:
    // 0x159150: 0x0  nop
    ctx->pc = 0x159150u;
    // NOP
label_159154:
    // 0x159154: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x159154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_159158:
    // 0x159158: 0x0  nop
    ctx->pc = 0x159158u;
    // NOP
label_15915c:
    // 0x15915c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_159160:
    if (ctx->pc == 0x159160u) {
        ctx->pc = 0x159160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15915Cu;
        // 0x159160: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159164u;
        goto label_159164;
    }
    ctx->pc = 0x15915Cu;
    {
        const bool branch_taken_0x15915c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15915Cu;
        // 0x159160: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15915c) {
            ctx->pc = 0x15916Cu;
            goto label_15916c;
        }
    }
    ctx->pc = 0x159164u;
label_159164:
    // 0x159164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159168:
    // 0x159168: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15916c:
    // 0x15916c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159170:
    // 0x159170: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x159170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159174:
    // 0x159174: 0xc047e6c  jal         func_11F9B0
label_159178:
    if (ctx->pc == 0x159178u) {
        ctx->pc = 0x159178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159174u;
        // 0x159178: 0x5900a  movz        $s2, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15917Cu;
        goto label_15917c;
    }
    ctx->pc = 0x159174u;
    SET_GPR_U32(ctx, 31, 0x15917Cu);
    ctx->pc = 0x159178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159174u;
    // 0x159178: 0x5900a  movz        $s2, $zero, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x159174u, 0x15917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15917Cu;
label_15917c:
    // 0x15917c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_159180:
    // 0x159180: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x159180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_159184:
    // 0x159184: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_159188:
    // 0x159188: 0xa0f809  jalr        $a1
label_15918c:
    if (ctx->pc == 0x15918Cu) {
        ctx->pc = 0x15918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159188u;
        // 0x15918c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159190u;
        goto label_159190;
    }
    ctx->pc = 0x159188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x159190u);
        ctx->pc = 0x15918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159188u;
        // 0x15918c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159188u, 0x159190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159190u;
label_159190:
    // 0x159190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x159190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159194:
    // 0x159194: 0x16700012  bne         $s3, $s0, . + 4 + (0x12 << 2)
label_159198:
    if (ctx->pc == 0x159198u) {
        ctx->pc = 0x159198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159194u;
        // 0x159198: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15919Cu;
        goto label_15919c;
    }
    ctx->pc = 0x159194u;
    {
        const bool branch_taken_0x159194 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x159198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159194u;
        // 0x159198: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159194) {
            ctx->pc = 0x1591E0u;
            goto label_1591e0;
        }
    }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_1591a0:
    // 0x1591a0: 0xc136ad6  jal         func_4DAB58
label_1591a4:
    if (ctx->pc == 0x1591A4u) {
        ctx->pc = 0x1591A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591A0u;
        // 0x1591a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591A8u;
        goto label_1591a8;
    }
    ctx->pc = 0x1591A0u;
    SET_GPR_U32(ctx, 31, 0x1591A8u);
    ctx->pc = 0x1591A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1591A0u;
    // 0x1591a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1591A0u, 0x1591A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1591A8u;
label_1591a8:
    // 0x1591a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1591a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1591ac:
    // 0x1591ac: 0xc136ad4  jal         func_4DAB50
label_1591b0:
    if (ctx->pc == 0x1591B0u) {
        ctx->pc = 0x1591B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591ACu;
        // 0x1591b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591B4u;
        goto label_1591b4;
    }
    ctx->pc = 0x1591ACu;
    SET_GPR_U32(ctx, 31, 0x1591B4u);
    ctx->pc = 0x1591B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1591ACu;
    // 0x1591b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1591ACu, 0x1591B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1591B4u;
label_1591b4:
    // 0x1591b4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1591b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1591b8:
    // 0x1591b8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1591b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1591bc:
    // 0x1591bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1591bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1591c0:
    // 0x1591c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1591c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1591c4:
    // 0x1591c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1591c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1591c8:
    // 0x1591c8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1591cc:
    if (ctx->pc == 0x1591CCu) {
        ctx->pc = 0x1591CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591C8u;
        // 0x1591cc: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591D0u;
        goto label_1591d0;
    }
    ctx->pc = 0x1591C8u;
    {
        const bool branch_taken_0x1591c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1591CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591C8u;
        // 0x1591cc: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591c8) {
            ctx->pc = 0x1591E0u;
            goto label_1591e0;
        }
    }
    ctx->pc = 0x1591D0u;
label_1591d0:
    // 0x1591d0: 0x8462033a  lh          $v0, 0x33A($v1)
    ctx->pc = 0x1591d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
label_1591d4:
    // 0x1591d4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1591d8:
    // 0x1591d8: 0x262b00a  movz        $s6, $s3, $v0
    ctx->pc = 0x1591d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 19));
label_1591dc:
    // 0x1591dc: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x1591dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_1591e0:
    // 0x1591e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1591e4:
    // 0x1591e4: 0x16c2003a  bne         $s6, $v0, . + 4 + (0x3A << 2)
label_1591e8:
    if (ctx->pc == 0x1591E8u) {
        ctx->pc = 0x1591E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591E4u;
        // 0x1591e8: 0x84770224  lh          $s7, 0x224($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591ECu;
        goto label_1591ec;
    }
    ctx->pc = 0x1591E4u;
    {
        const bool branch_taken_0x1591e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1591E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591E4u;
        // 0x1591e8: 0x84770224  lh          $s7, 0x224($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591e4) {
            ctx->pc = 0x1592D0u;
            goto label_1592d0;
        }
    }
    ctx->pc = 0x1591ECu;
label_1591ec:
    // 0x1591ec: 0x16400039  bnez        $s2, . + 4 + (0x39 << 2)
label_1591f0:
    if (ctx->pc == 0x1591F0u) {
        ctx->pc = 0x1591F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591ECu;
        // 0x1591f0: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1591F4u;
        goto label_1591f4;
    }
    ctx->pc = 0x1591ECu;
    {
        const bool branch_taken_0x1591ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1591F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591ECu;
        // 0x1591f0: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591ec) {
            ctx->pc = 0x1592D4u;
            goto label_1592d4;
        }
    }
    ctx->pc = 0x1591F4u;
label_1591f4:
    // 0x1591f4: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x1591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_1591f8:
    // 0x1591f8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_1591fc:
    if (ctx->pc == 0x1591FCu) {
        ctx->pc = 0x1591FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591F8u;
        // 0x1591fc: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159200u;
        goto label_159200;
    }
    ctx->pc = 0x1591F8u;
    {
        const bool branch_taken_0x1591f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1591FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591F8u;
        // 0x1591fc: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591f8) {
            ctx->pc = 0x1592D4u;
            goto label_1592d4;
        }
    }
    ctx->pc = 0x159200u;
label_159200:
    // 0x159200: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_159204:
    // 0x159204: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_159208:
    // 0x159208: 0x2456e790  addiu       $s6, $v0, -0x1870
    ctx->pc = 0x159208u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_15920c:
    // 0x15920c: 0x2471d810  addiu       $s1, $v1, -0x27F0
    ctx->pc = 0x15920cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_159210:
    // 0x159210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159214:
    // 0x159214: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159218:
    // 0x159218: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x159218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_15921c:
    // 0x15921c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_159220:
    if (ctx->pc == 0x159220u) {
        ctx->pc = 0x159220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15921Cu;
        // 0x159220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159224u;
        goto label_159224;
    }
    ctx->pc = 0x15921Cu;
    {
        const bool branch_taken_0x15921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15921Cu;
        // 0x159220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15921c) {
            ctx->pc = 0x1592C0u;
            goto label_1592c0;
        }
    }
    ctx->pc = 0x159224u;
label_159224:
    // 0x159224: 0xc0512e2  jal         func_144B88
label_159228:
    if (ctx->pc == 0x159228u) {
        ctx->pc = 0x159228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159224u;
        // 0x159228: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15922Cu;
        goto label_15922c;
    }
    ctx->pc = 0x159224u;
    SET_GPR_U32(ctx, 31, 0x15922Cu);
    ctx->pc = 0x159228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159224u;
    // 0x159228: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x159224u, 0x15922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15922Cu;
label_15922c:
    // 0x15922c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_159230:
    if (ctx->pc == 0x159230u) {
        ctx->pc = 0x159230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15922Cu;
        // 0x159230: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159234u;
        goto label_159234;
    }
    ctx->pc = 0x15922Cu;
    {
        const bool branch_taken_0x15922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15922c) {
            ctx->pc = 0x159230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15922Cu;
            // 0x159230: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1592C4u;
            goto label_1592c4;
        }
    }
    ctx->pc = 0x159234u;
label_159234:
    // 0x159234: 0xc107444  jal         func_41D110
label_159238:
    if (ctx->pc == 0x159238u) {
        ctx->pc = 0x159238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159234u;
        // 0x159238: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15923Cu;
        goto label_15923c;
    }
    ctx->pc = 0x159234u;
    SET_GPR_U32(ctx, 31, 0x15923Cu);
    ctx->pc = 0x159238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159234u;
    // 0x159238: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x159234u, 0x15923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15923Cu;
label_15923c:
    // 0x15923c: 0x14530011  bne         $v0, $s3, . + 4 + (0x11 << 2)
label_159240:
    if (ctx->pc == 0x159240u) {
        ctx->pc = 0x159240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15923Cu;
        // 0x159240: 0x86240042  lh          $a0, 0x42($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159244u;
        goto label_159244;
    }
    ctx->pc = 0x15923Cu;
    {
        const bool branch_taken_0x15923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x159240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15923Cu;
        // 0x159240: 0x86240042  lh          $a0, 0x42($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15923c) {
            ctx->pc = 0x159284u;
            goto label_159284;
        }
    }
    ctx->pc = 0x159244u;
label_159244:
    // 0x159244: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_159248:
    if (ctx->pc == 0x159248u) {
        ctx->pc = 0x159248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159244u;
        // 0x159248: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15924Cu;
        goto label_15924c;
    }
    ctx->pc = 0x159244u;
    {
        const bool branch_taken_0x159244 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x159248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159244u;
        // 0x159248: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159244) {
            ctx->pc = 0x159264u;
            goto label_159264;
        }
    }
    ctx->pc = 0x15924Cu;
label_15924c:
    // 0x15924c: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x15924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_159250:
    // 0x159250: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_159254:
    // 0x159254: 0xc0e409a  jal         func_390268
label_159258:
    if (ctx->pc == 0x159258u) {
        ctx->pc = 0x159258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159254u;
        // 0x159258: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15925Cu;
        goto label_15925c;
    }
    ctx->pc = 0x159254u;
    SET_GPR_U32(ctx, 31, 0x15925Cu);
    ctx->pc = 0x159258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159254u;
    // 0x159258: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x159254u, 0x15925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15925Cu;
label_15925c:
    // 0x15925c: 0x10000002  b           . + 4 + (0x2 << 2)
label_159260:
    if (ctx->pc == 0x159260u) {
        ctx->pc = 0x159260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15925Cu;
        // 0x159260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159264u;
        goto label_159264;
    }
    ctx->pc = 0x15925Cu;
    {
        const bool branch_taken_0x15925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15925Cu;
        // 0x159260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15925c) {
            ctx->pc = 0x159268u;
            goto label_159268;
        }
    }
    ctx->pc = 0x159264u;
label_159264:
    // 0x159264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x159264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159268:
    // 0x159268: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_15926c:
    if (ctx->pc == 0x15926Cu) {
        ctx->pc = 0x15926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159268u;
        // 0x15926c: 0x86240042  lh          $a0, 0x42($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159270u;
        goto label_159270;
    }
    ctx->pc = 0x159268u;
    {
        const bool branch_taken_0x159268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x159268) {
            ctx->pc = 0x15926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159268u;
            // 0x15926c: 0x86240042  lh          $a0, 0x42($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159284u;
            goto label_159284;
        }
    }
    ctx->pc = 0x159270u;
label_159270:
    // 0x159270: 0xc089f76  jal         func_227DD8
label_159274:
    if (ctx->pc == 0x159274u) {
        ctx->pc = 0x159274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159270u;
        // 0x159274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159278u;
        goto label_159278;
    }
    ctx->pc = 0x159270u;
    SET_GPR_U32(ctx, 31, 0x159278u);
    ctx->pc = 0x159274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159270u;
    // 0x159274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x159270u, 0x159278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159278u;
label_159278:
    // 0x159278: 0x1440fe7c  bnez        $v0, . + 4 + (-0x184 << 2)
label_15927c:
    if (ctx->pc == 0x15927Cu) {
        ctx->pc = 0x15927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159278u;
        // 0x15927c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159280u;
        goto label_159280;
    }
    ctx->pc = 0x159278u;
    {
        const bool branch_taken_0x159278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159278u;
        // 0x15927c: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159278) {
            ctx->pc = 0x158C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158c6c;
        }
    }
    ctx->pc = 0x159280u;
label_159280:
    // 0x159280: 0x86240042  lh          $a0, 0x42($s1)
    ctx->pc = 0x159280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_159284:
    // 0x159284: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x159284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_159288:
    // 0x159288: 0x10860007  beq         $a0, $a2, . + 4 + (0x7 << 2)
label_15928c:
    if (ctx->pc == 0x15928Cu) {
        ctx->pc = 0x15928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159288u;
        // 0x15928c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159290u;
        goto label_159290;
    }
    ctx->pc = 0x159288u;
    {
        const bool branch_taken_0x159288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x15928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159288u;
        // 0x15928c: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159288) {
            ctx->pc = 0x1592A8u;
            goto label_1592a8;
        }
    }
    ctx->pc = 0x159290u;
label_159290:
    // 0x159290: 0x84420224  lh          $v0, 0x224($v0)
    ctx->pc = 0x159290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_159294:
    // 0x159294: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x159294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_159298:
    // 0x159298: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_15929c:
    if (ctx->pc == 0x15929Cu) {
        ctx->pc = 0x15929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159298u;
        // 0x15929c: 0x82102a  slt         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592A0u;
        goto label_1592a0;
    }
    ctx->pc = 0x159298u;
    {
        const bool branch_taken_0x159298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159298u;
        // 0x15929c: 0x82102a  slt         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159298) {
            ctx->pc = 0x1592C0u;
            goto label_1592c0;
        }
    }
    ctx->pc = 0x1592A0u;
label_1592a0:
    // 0x1592a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1592a4:
    if (ctx->pc == 0x1592A4u) {
        ctx->pc = 0x1592A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592A0u;
        // 0x1592a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592A8u;
        goto label_1592a8;
    }
    ctx->pc = 0x1592A0u;
    {
        const bool branch_taken_0x1592a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1592a0) {
            ctx->pc = 0x1592A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1592A0u;
            // 0x1592a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1592C4u;
            goto label_1592c4;
        }
    }
    ctx->pc = 0x1592A8u;
label_1592a8:
    // 0x1592a8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x1592a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_1592ac:
    // 0x1592ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1592acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1592b0:
    // 0x1592b0: 0xc106918  jal         func_41A460
label_1592b4:
    if (ctx->pc == 0x1592B4u) {
        ctx->pc = 0x1592B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B0u;
        // 0x1592b4: 0xa6260042  sh          $a2, 0x42($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592B8u;
        goto label_1592b8;
    }
    ctx->pc = 0x1592B0u;
    SET_GPR_U32(ctx, 31, 0x1592B8u);
    ctx->pc = 0x1592B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592B0u;
    // 0x1592b4: 0xa6260042  sh          $a2, 0x42($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x1592B0u, 0x1592B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592B8u;
label_1592b8:
    // 0x1592b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1592bc:
    if (ctx->pc == 0x1592BCu) {
        ctx->pc = 0x1592BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B8u;
        // 0x1592bc: 0xaed320ac  sw          $s3, 0x20AC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8364), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592C0u;
        goto label_1592c0;
    }
    ctx->pc = 0x1592B8u;
    {
        const bool branch_taken_0x1592b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B8u;
        // 0x1592bc: 0xaed320ac  sw          $s3, 0x20AC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8364), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592b8) {
            ctx->pc = 0x1592D0u;
            goto label_1592d0;
        }
    }
    ctx->pc = 0x1592C0u;
label_1592c0:
    // 0x1592c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1592c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1592c4:
    // 0x1592c4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1592c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_1592c8:
    // 0x1592c8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1592cc:
    if (ctx->pc == 0x1592CCu) {
        ctx->pc = 0x1592CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592C8u;
        // 0x1592cc: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592D0u;
        goto label_1592d0;
    }
    ctx->pc = 0x1592C8u;
    {
        const bool branch_taken_0x1592c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1592CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592C8u;
        // 0x1592cc: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592c8) {
            ctx->pc = 0x159218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159218;
        }
    }
    ctx->pc = 0x1592D0u;
label_1592d0:
    // 0x1592d0: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x1592d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_1592d4:
    // 0x1592d4: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_1592d8:
    // 0x1592d8: 0x12e30037  beq         $s7, $v1, . + 4 + (0x37 << 2)
label_1592dc:
    if (ctx->pc == 0x1592DCu) {
        ctx->pc = 0x1592DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592D8u;
        // 0x1592dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592E0u;
        goto label_1592e0;
    }
    ctx->pc = 0x1592D8u;
    {
        const bool branch_taken_0x1592d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x1592DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592D8u;
        // 0x1592dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592d8) {
            ctx->pc = 0x1593B8u;
            goto label_1593b8;
        }
    }
    ctx->pc = 0x1592E0u;
label_1592e0:
    // 0x1592e0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1592e4:
    if (ctx->pc == 0x1592E4u) {
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592E8u;
        goto label_1592e8;
    }
    ctx->pc = 0x1592E0u;
    {
        const bool branch_taken_0x1592e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592e0) {
            ctx->pc = 0x159344u;
            goto label_159344;
        }
    }
    ctx->pc = 0x1592E8u;
label_1592e8:
    // 0x1592e8: 0xc047e6c  jal         func_11F9B0
label_1592ec:
    if (ctx->pc == 0x1592ECu) {
        ctx->pc = 0x1592ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E8u;
        // 0x1592ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592F0u;
        goto label_1592f0;
    }
    ctx->pc = 0x1592E8u;
    SET_GPR_U32(ctx, 31, 0x1592F0u);
    ctx->pc = 0x1592ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592E8u;
    // 0x1592ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1592E8u, 0x1592F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592F0u;
label_1592f0:
    // 0x1592f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1592f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1592f4:
    // 0x1592f4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_1592f8:
    if (ctx->pc == 0x1592F8u) {
        ctx->pc = 0x1592F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592F4u;
        // 0x1592f8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1592FCu;
        goto label_1592fc;
    }
    ctx->pc = 0x1592F4u;
    {
        const bool branch_taken_0x1592f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592F4u;
        // 0x1592f8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592f4) {
            ctx->pc = 0x159344u;
            goto label_159344;
        }
    }
    ctx->pc = 0x1592FCu;
label_1592fc:
    // 0x1592fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159300:
    // 0x159300: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x159300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_159304:
    // 0x159304: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x159304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_159308:
    // 0x159308: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15930c:
    // 0x15930c: 0x60f809  jalr        $v1
label_159310:
    if (ctx->pc == 0x159310u) {
        ctx->pc = 0x159310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15930Cu;
        // 0x159310: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159314u;
        goto label_159314;
    }
    ctx->pc = 0x15930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159314u);
        ctx->pc = 0x159310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15930Cu;
        // 0x159310: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15930Cu, 0x159314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159314u;
label_159314:
    // 0x159314: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x159314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_159318:
    // 0x159318: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x159318u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15931c:
    // 0x15931c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_159320:
    // 0x159320: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x159320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_159324:
    // 0x159324: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x159324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159328:
    // 0x159328: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x159328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
label_15932c:
    // 0x15932c: 0x8ca2022c  lw          $v0, 0x22C($a1)
    ctx->pc = 0x15932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 556)));
label_159330:
    // 0x159330: 0x40f809  jalr        $v0
label_159334:
    if (ctx->pc == 0x159334u) {
        ctx->pc = 0x159334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159330u;
        // 0x159334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159338u;
        goto label_159338;
    }
    ctx->pc = 0x159330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159338u);
        ctx->pc = 0x159334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159330u;
        // 0x159334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159330u, 0x159338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159338u;
label_159338:
    // 0x159338: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x159338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15933c:
    // 0x15933c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x15933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_159340:
    // 0x159340: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x159340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_159344:
    // 0x159344: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x159344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_159348:
    // 0x159348: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x159348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_15934c:
    // 0x15934c: 0xc06bc04  jal         func_1AF010
label_159350:
    if (ctx->pc == 0x159350u) {
        ctx->pc = 0x159350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15934Cu;
        // 0x159350: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159354u;
        goto label_159354;
    }
    ctx->pc = 0x15934Cu;
    SET_GPR_U32(ctx, 31, 0x159354u);
    ctx->pc = 0x159350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15934Cu;
    // 0x159350: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF010u, 0x15934Cu, 0x159354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159354u;
label_159354:
    // 0x159354: 0x10000019  b           . + 4 + (0x19 << 2)
label_159358:
    if (ctx->pc == 0x159358u) {
        ctx->pc = 0x159358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159354u;
        // 0x159358: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15935Cu;
        goto label_15935c;
    }
    ctx->pc = 0x159354u;
    {
        const bool branch_taken_0x159354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159354u;
        // 0x159358: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159354) {
            ctx->pc = 0x1593BCu;
            goto label_1593bc;
        }
    }
    ctx->pc = 0x15935Cu;
label_15935c:
    // 0x15935c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_159360:
    // 0x159360: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x159360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159364:
    // 0x159364: 0x0  nop
    ctx->pc = 0x159364u;
    // NOP
label_159368:
    // 0x159368: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x159368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15936c:
    // 0x15936c: 0xc047e6c  jal         func_11F9B0
label_159370:
    if (ctx->pc == 0x159370u) {
        ctx->pc = 0x159370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15936Cu;
        // 0x159370: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159374u;
        goto label_159374;
    }
    ctx->pc = 0x15936Cu;
    SET_GPR_U32(ctx, 31, 0x159374u);
    ctx->pc = 0x159370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15936Cu;
    // 0x159370: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15936Cu, 0x159374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159374u;
label_159374:
    // 0x159374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_159378:
    // 0x159378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15937c:
    // 0x15937c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15937cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_159380:
    // 0x159380: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x159380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_159384:
    // 0x159384: 0xc0f809  jalr        $a2
label_159388:
    if (ctx->pc == 0x159388u) {
        ctx->pc = 0x159388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159384u;
        // 0x159388: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15938Cu;
        goto label_15938c;
    }
    ctx->pc = 0x159384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15938Cu);
        ctx->pc = 0x159388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159384u;
        // 0x159388: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159384u, 0x15938Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15938Cu;
label_15938c:
    // 0x15938c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15938cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_159390:
    // 0x159390: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x159390u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_159394:
    // 0x159394: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x159394u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_159398:
    // 0x159398: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x159398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15939c:
    // 0x15939c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15939cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1593a0:
    // 0x1593a0: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_1593a4:
    if (ctx->pc == 0x1593A4u) {
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593A8u;
        goto label_1593a8;
    }
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x159368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159368;
        }
    }
    ctx->pc = 0x1593A8u;
label_1593a8:
    // 0x1593a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1593ac:
    // 0x1593ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1593acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1593b0:
    // 0x1593b0: 0xc043e04  jal         func_10F810
label_1593b4:
    if (ctx->pc == 0x1593B4u) {
        ctx->pc = 0x1593B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593B0u;
        // 0x1593b4: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593B8u;
        goto label_1593b8;
    }
    ctx->pc = 0x1593B0u;
    SET_GPR_U32(ctx, 31, 0x1593B8u);
    ctx->pc = 0x1593B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593B0u;
    // 0x1593b4: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x1593B0u, 0x1593B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593B8u;
label_1593b8:
    // 0x1593b8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1593bc:
    // 0x1593bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1593bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1593c0:
    // 0x1593c0: 0xc0552b8  jal         func_154AE0
label_1593c4:
    if (ctx->pc == 0x1593C4u) {
        ctx->pc = 0x1593C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593C0u;
        // 0x1593c4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593C8u;
        goto label_1593c8;
    }
    ctx->pc = 0x1593C0u;
    SET_GPR_U32(ctx, 31, 0x1593C8u);
    ctx->pc = 0x1593C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593C0u;
    // 0x1593c4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1593C0u, 0x1593C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593C8u;
label_1593c8:
    // 0x1593c8: 0xc0558a8  jal         func_1562A0
label_1593cc:
    if (ctx->pc == 0x1593CCu) {
        ctx->pc = 0x1593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593C8u;
        // 0x1593cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593D0u;
        goto label_1593d0;
    }
    ctx->pc = 0x1593C8u;
    SET_GPR_U32(ctx, 31, 0x1593D0u);
    ctx->pc = 0x1593CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593C8u;
    // 0x1593cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562A0u, 0x1593C8u, 0x1593D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593D0u;
label_1593d0:
    // 0x1593d0: 0xc055902  jal         func_156408
label_1593d4:
    if (ctx->pc == 0x1593D4u) {
        ctx->pc = 0x1593D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593D0u;
        // 0x1593d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593D8u;
        goto label_1593d8;
    }
    ctx->pc = 0x1593D0u;
    SET_GPR_U32(ctx, 31, 0x1593D8u);
    ctx->pc = 0x1593D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593D0u;
    // 0x1593d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x1593D0u, 0x1593D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593D8u;
label_1593d8:
    // 0x1593d8: 0xc6ac0020  lwc1        $f12, 0x20($s5)
    ctx->pc = 0x1593d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1593dc:
    // 0x1593dc: 0xc055996  jal         func_156658
label_1593e0:
    if (ctx->pc == 0x1593E0u) {
        ctx->pc = 0x1593E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593DCu;
        // 0x1593e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1593E4u;
        goto label_1593e4;
    }
    ctx->pc = 0x1593DCu;
    SET_GPR_U32(ctx, 31, 0x1593E4u);
    ctx->pc = 0x1593E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593DCu;
    // 0x1593e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x1593DCu, 0x1593E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593E4u;
label_1593e4:
    // 0x1593e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1593e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1593e8:
    // 0x1593e8: 0xc6ac0020  lwc1        $f12, 0x20($s5)
    ctx->pc = 0x1593e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1593ec:
    // 0x1593ec: 0x8c652b04  lw          $a1, 0x2B04($v1)
    ctx->pc = 0x1593ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_1593f0:
    // 0x1593f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1593f4:
    // 0x1593f4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1593f8:
    // 0x1593f8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1593fc:
    // 0x1593fc: 0x60f809  jalr        $v1
label_159400:
    if (ctx->pc == 0x159400u) {
        ctx->pc = 0x159400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593FCu;
        // 0x159400: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159404u;
        goto label_159404;
    }
    ctx->pc = 0x1593FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159404u);
        ctx->pc = 0x159400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593FCu;
        // 0x159400: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1593FCu, 0x159404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159404u;
label_159404:
    // 0x159404: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_159408:
    // 0x159408: 0x8c85cdb4  lw          $a1, -0x324C($a0)
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_15940c:
    // 0x15940c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_159410:
    // 0x159410: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_159414:
    // 0x159414: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_159418:
    // 0x159418: 0x60f809  jalr        $v1
label_15941c:
    if (ctx->pc == 0x15941Cu) {
        ctx->pc = 0x15941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159418u;
        // 0x15941c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159420u;
        goto label_159420;
    }
    ctx->pc = 0x159418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159420u);
        ctx->pc = 0x15941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159418u;
        // 0x15941c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159418u, 0x159420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159420u;
label_159420:
    // 0x159420: 0xc058f1a  jal         func_163C68
label_159424:
    if (ctx->pc == 0x159424u) {
        ctx->pc = 0x159428u;
        goto label_159428;
    }
    ctx->pc = 0x159420u;
    SET_GPR_U32(ctx, 31, 0x159428u);
    ctx->pc = 0x163C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C68u, 0x159420u, 0x159428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159428u;
label_159428:
    // 0x159428: 0xc055880  jal         func_156200
label_15942c:
    if (ctx->pc == 0x15942Cu) {
        ctx->pc = 0x15942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159428u;
        // 0x15942c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159430u;
        goto label_159430;
    }
    ctx->pc = 0x159428u;
    SET_GPR_U32(ctx, 31, 0x159430u);
    ctx->pc = 0x15942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159428u;
    // 0x15942c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x159428u, 0x159430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159430u;
label_159430:
    // 0x159430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159434:
    // 0x159434: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x159434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_159438:
    // 0x159438: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x159438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_15943c:
    // 0x15943c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x15943cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_159440:
    // 0x159440: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x159440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_159444:
    // 0x159444: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x159444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_159448:
    // 0x159448: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x159448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15944c:
    // 0x15944c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x15944cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_159450:
    // 0x159450: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x159450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_159454:
    // 0x159454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x159454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_159458:
    // 0x159458: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x159458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15945c:
    // 0x15945c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x15945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_159460:
    // 0x159460: 0x3e00008  jr          $ra
label_159464:
    if (ctx->pc == 0x159464u) {
        ctx->pc = 0x159464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159460u;
        // 0x159464: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159468u;
        goto label_fallthrough_0x159460;
    }
    ctx->pc = 0x159460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159460u;
        // 0x159464: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159460:
    ctx->pc = 0x159468u;
}
