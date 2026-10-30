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

// Function: sub_00244770
// Address: 0x244770 - 0x244e78
void sub_00244770_0x244770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244770_0x244770");
#endif

    switch (ctx->pc) {
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        case 0x2449fcu: goto label_2449fc;
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        case 0x244aa4u: goto label_244aa4;
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        case 0x244c8cu: goto label_244c8c;
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        case 0x244da4u: goto label_244da4;
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        case 0x244e30u: goto label_244e30;
        case 0x244e34u: goto label_244e34;
        case 0x244e38u: goto label_244e38;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e40u: goto label_244e40;
        case 0x244e44u: goto label_244e44;
        case 0x244e48u: goto label_244e48;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e50u: goto label_244e50;
        case 0x244e54u: goto label_244e54;
        case 0x244e58u: goto label_244e58;
        case 0x244e5cu: goto label_244e5c;
        case 0x244e60u: goto label_244e60;
        case 0x244e64u: goto label_244e64;
        case 0x244e68u: goto label_244e68;
        case 0x244e6cu: goto label_244e6c;
        case 0x244e70u: goto label_244e70;
        case 0x244e74u: goto label_244e74;
        default: break;
    }

    ctx->pc = 0x244770u;

label_244770:
    // 0x244770: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x244770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_244774:
    // 0x244774: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x244774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_244778:
    // 0x244778: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x244778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_24477c:
    // 0x24477c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24477cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244780:
    // 0x244780: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x244780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_244784:
    // 0x244784: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x244784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_244788:
    // 0x244788: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x244788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_24478c:
    // 0x24478c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24478cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244790:
    // 0x244790: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x244790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_244794:
    // 0x244794: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x244794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_244798:
    // 0x244798: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x244798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_24479c:
    // 0x24479c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x24479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2447a0:
    // 0x2447a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2447a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2447a4:
    // 0x2447a4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2447a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2447a8:
    // 0x2447a8: 0xc0874fa  jal         func_21D3E8
label_2447ac:
    if (ctx->pc == 0x2447ACu) {
        ctx->pc = 0x2447ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447A8u;
        // 0x2447ac: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447B0u;
        goto label_2447b0;
    }
    ctx->pc = 0x2447A8u;
    SET_GPR_U32(ctx, 31, 0x2447B0u);
    ctx->pc = 0x2447ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447A8u;
    // 0x2447ac: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2447A8u, 0x2447B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447B0u;
label_2447b0:
    // 0x2447b0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2447b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2447b4:
    // 0x2447b4: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_2447b8:
    if (ctx->pc == 0x2447B8u) {
        ctx->pc = 0x2447B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447B4u;
        // 0x2447b8: 0x92630256  lbu         $v1, 0x256($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 598)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447BCu;
        goto label_2447bc;
    }
    ctx->pc = 0x2447B4u;
    {
        const bool branch_taken_0x2447b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2447b4) {
            ctx->pc = 0x2447B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447B4u;
            // 0x2447b8: 0x92630256  lbu         $v1, 0x256($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 598)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244810u;
            goto label_244810;
        }
    }
    ctx->pc = 0x2447BCu;
label_2447bc:
    // 0x2447bc: 0xc089ea4  jal         func_227A90
label_2447c0:
    if (ctx->pc == 0x2447C0u) {
        ctx->pc = 0x2447C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447BCu;
        // 0x2447c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447C4u;
        goto label_2447c4;
    }
    ctx->pc = 0x2447BCu;
    SET_GPR_U32(ctx, 31, 0x2447C4u);
    ctx->pc = 0x2447C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447BCu;
    // 0x2447c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x2447BCu, 0x2447C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447C4u;
label_2447c4:
    // 0x2447c4: 0xc089f12  jal         func_227C48
label_2447c8:
    if (ctx->pc == 0x2447C8u) {
        ctx->pc = 0x2447C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447C4u;
        // 0x2447c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447CCu;
        goto label_2447cc;
    }
    ctx->pc = 0x2447C4u;
    SET_GPR_U32(ctx, 31, 0x2447CCu);
    ctx->pc = 0x2447C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447C4u;
    // 0x2447c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x2447C4u, 0x2447CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447CCu;
label_2447cc:
    // 0x2447cc: 0x866501be  lh          $a1, 0x1BE($s3)
    ctx->pc = 0x2447ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_2447d0:
    // 0x2447d0: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_2447d4:
    if (ctx->pc == 0x2447D4u) {
        ctx->pc = 0x2447D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D0u;
        // 0x2447d4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447D8u;
        goto label_2447d8;
    }
    ctx->pc = 0x2447D0u;
    {
        const bool branch_taken_0x2447d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2447D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D0u;
        // 0x2447d4: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447d0) {
            ctx->pc = 0x2447F8u;
            goto label_2447f8;
        }
    }
    ctx->pc = 0x2447D8u;
label_2447d8:
    // 0x2447d8: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_2447dc:
    // 0x2447dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2447e0:
    // 0x2447e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2447e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2447e4:
    // 0x2447e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2447e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2447e8:
    // 0x2447e8: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x2447e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2447ec:
    // 0x2447ec: 0x10383f  dsra32      $a3, $s0, 0
    ctx->pc = 0x2447ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> (32 + 0));
label_2447f0:
    // 0x2447f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2447f4:
    if (ctx->pc == 0x2447F4u) {
        ctx->pc = 0x2447F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447F0u;
        // 0x2447f4: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447F8u;
        goto label_2447f8;
    }
    ctx->pc = 0x2447F0u;
    {
        const bool branch_taken_0x2447f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447F0u;
        // 0x2447f4: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447f0) {
            ctx->pc = 0x244800u;
            goto label_244800;
        }
    }
    ctx->pc = 0x2447F8u;
label_2447f8:
    // 0x2447f8: 0x8e6701c0  lw          $a3, 0x1C0($s3)
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_2447fc:
    // 0x2447fc: 0x866301bc  lh          $v1, 0x1BC($s3)
    ctx->pc = 0x2447fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_244800:
    // 0x244800: 0x4a00036  bltz        $a1, . + 4 + (0x36 << 2)
label_244804:
    if (ctx->pc == 0x244804u) {
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244808u;
        goto label_244808;
    }
    ctx->pc = 0x244800u;
    {
        const bool branch_taken_0x244800 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244800) {
            ctx->pc = 0x2448DCu;
            goto label_2448dc;
        }
    }
    ctx->pc = 0x244808u;
label_244808:
    // 0x244808: 0x10000031  b           . + 4 + (0x31 << 2)
label_24480c:
    if (ctx->pc == 0x24480Cu) {
        ctx->pc = 0x24480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244808u;
        // 0x24480c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244810u;
        goto label_244810;
    }
    ctx->pc = 0x244808u;
    {
        const bool branch_taken_0x244808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244808u;
        // 0x24480c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244808) {
            ctx->pc = 0x2448D0u;
            goto label_2448d0;
        }
    }
    ctx->pc = 0x244810u;
label_244810:
    // 0x244810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244814:
    // 0x244814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244818:
    // 0x244818: 0xa2620256  sb          $v0, 0x256($s3)
    ctx->pc = 0x244818u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 598), (uint8_t)GPR_U32(ctx, 2));
label_24481c:
    // 0x24481c: 0xc089bfc  jal         func_226FF0
label_244820:
    if (ctx->pc == 0x244820u) {
        ctx->pc = 0x244820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24481Cu;
        // 0x244820: 0x2c700001  sltiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244824u;
        goto label_244824;
    }
    ctx->pc = 0x24481Cu;
    SET_GPR_U32(ctx, 31, 0x244824u);
    ctx->pc = 0x244820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24481Cu;
    // 0x244820: 0x2c700001  sltiu       $s0, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24481Cu, 0x244824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244824u;
label_244824:
    // 0x244824: 0xc0e57ce  jal         func_395F38
label_244828:
    if (ctx->pc == 0x244828u) {
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244824u;
        // 0x244828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24482Cu;
        goto label_24482c;
    }
    ctx->pc = 0x244824u;
    SET_GPR_U32(ctx, 31, 0x24482Cu);
    ctx->pc = 0x244828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244824u;
    // 0x244828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x244824u, 0x24482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24482Cu;
label_24482c:
    // 0x24482c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24482cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244830:
    // 0x244830: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_244834:
    if (ctx->pc == 0x244834u) {
        ctx->pc = 0x244838u;
        goto label_244838;
    }
    ctx->pc = 0x244830u;
    {
        const bool branch_taken_0x244830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x244830) {
            ctx->pc = 0x24485Cu;
            goto label_24485c;
        }
    }
    ctx->pc = 0x244838u;
label_244838:
    // 0x244838: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24483c:
    // 0x24483c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_244840:
    // 0x244840: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_244844:
    // 0x244844: 0x40f809  jalr        $v0
label_244848:
    if (ctx->pc == 0x244848u) {
        ctx->pc = 0x244848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244844u;
        // 0x244848: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24484Cu;
        goto label_24484c;
    }
    ctx->pc = 0x244844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24484Cu);
        ctx->pc = 0x244848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244844u;
        // 0x244848: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244844u, 0x24484Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24484Cu;
label_24484c:
    // 0x24484c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x24484cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_244850:
    // 0x244850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x244850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_244854:
    // 0x244854: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_244858:
    if (ctx->pc == 0x244858u) {
        ctx->pc = 0x24485Cu;
        goto label_24485c;
    }
    ctx->pc = 0x244854u;
    {
        const bool branch_taken_0x244854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244854) {
            ctx->pc = 0x2448F8u;
            goto label_2448f8;
        }
    }
    ctx->pc = 0x24485Cu;
label_24485c:
    // 0x24485c: 0xc095018  jal         func_254060
label_244860:
    if (ctx->pc == 0x244860u) {
        ctx->pc = 0x244860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24485Cu;
        // 0x244860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244864u;
        goto label_244864;
    }
    ctx->pc = 0x24485Cu;
    SET_GPR_U32(ctx, 31, 0x244864u);
    ctx->pc = 0x244860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24485Cu;
    // 0x244860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x24485Cu, 0x244864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244864u;
label_244864:
    // 0x244864: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x244864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_244868:
    // 0x244868: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_24486c:
    if (ctx->pc == 0x24486Cu) {
        ctx->pc = 0x24486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244868u;
        // 0x24486c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244870u;
        goto label_244870;
    }
    ctx->pc = 0x244868u;
    {
        const bool branch_taken_0x244868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244868u;
        // 0x24486c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244868) {
            ctx->pc = 0x244880u;
            goto label_244880;
        }
    }
    ctx->pc = 0x244870u;
label_244870:
    // 0x244870: 0xc094fca  jal         func_253F28
label_244874:
    if (ctx->pc == 0x244874u) {
        ctx->pc = 0x244874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244870u;
        // 0x244874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244878u;
        goto label_244878;
    }
    ctx->pc = 0x244870u;
    SET_GPR_U32(ctx, 31, 0x244878u);
    ctx->pc = 0x244874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244870u;
    // 0x244874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x244870u, 0x244878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244878u;
label_244878:
    // 0x244878: 0x10000003  b           . + 4 + (0x3 << 2)
label_24487c:
    if (ctx->pc == 0x24487Cu) {
        ctx->pc = 0x244880u;
        goto label_244880;
    }
    ctx->pc = 0x244878u;
    {
        const bool branch_taken_0x244878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244878) {
            ctx->pc = 0x244888u;
            goto label_244888;
        }
    }
    ctx->pc = 0x244880u;
label_244880:
    // 0x244880: 0xc094fde  jal         func_253F78
label_244884:
    if (ctx->pc == 0x244884u) {
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244880u;
        // 0x244884: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244888u;
        goto label_244888;
    }
    ctx->pc = 0x244880u;
    SET_GPR_U32(ctx, 31, 0x244888u);
    ctx->pc = 0x244884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244880u;
    // 0x244884: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x244880u, 0x244888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0xc088420  jal         func_221080
label_24488c:
    if (ctx->pc == 0x24488Cu) {
        ctx->pc = 0x24488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244888u;
        // 0x24488c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244890u;
        goto label_244890;
    }
    ctx->pc = 0x244888u;
    SET_GPR_U32(ctx, 31, 0x244890u);
    ctx->pc = 0x24488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244888u;
    // 0x24488c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x244888u, 0x244890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244890u;
label_244890:
    // 0x244890: 0x866501be  lh          $a1, 0x1BE($s3)
    ctx->pc = 0x244890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_244894:
    // 0x244894: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_244898:
    if (ctx->pc == 0x244898u) {
        ctx->pc = 0x244898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244894u;
        // 0x244898: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24489Cu;
        goto label_24489c;
    }
    ctx->pc = 0x244894u;
    {
        const bool branch_taken_0x244894 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x244898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244894u;
        // 0x244898: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244894) {
            ctx->pc = 0x2448BCu;
            goto label_2448bc;
        }
    }
    ctx->pc = 0x24489Cu;
label_24489c:
    // 0x24489c: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x24489cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_2448a0:
    // 0x2448a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2448a4:
    // 0x2448a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2448a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2448a8:
    // 0x2448a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2448ac:
    // 0x2448ac: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x2448acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2448b0:
    // 0x2448b0: 0x11383f  dsra32      $a3, $s1, 0
    ctx->pc = 0x2448b0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 17) >> (32 + 0));
label_2448b4:
    // 0x2448b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2448b8:
    if (ctx->pc == 0x2448B8u) {
        ctx->pc = 0x2448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B4u;
        // 0x2448b8: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448BCu;
        goto label_2448bc;
    }
    ctx->pc = 0x2448B4u;
    {
        const bool branch_taken_0x2448b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B4u;
        // 0x2448b8: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448b4) {
            ctx->pc = 0x2448C4u;
            goto label_2448c4;
        }
    }
    ctx->pc = 0x2448BCu;
label_2448bc:
    // 0x2448bc: 0x8e6701c0  lw          $a3, 0x1C0($s3)
    ctx->pc = 0x2448bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_2448c0:
    // 0x2448c0: 0x866301bc  lh          $v1, 0x1BC($s3)
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_2448c4:
    // 0x2448c4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_2448c8:
    if (ctx->pc == 0x2448C8u) {
        ctx->pc = 0x2448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448C4u;
        // 0x2448c8: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448CCu;
        goto label_2448cc;
    }
    ctx->pc = 0x2448C4u;
    {
        const bool branch_taken_0x2448c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2448C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448C4u;
        // 0x2448c8: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448c4) {
            ctx->pc = 0x2448DCu;
            goto label_2448dc;
        }
    }
    ctx->pc = 0x2448CCu;
label_2448cc:
    // 0x2448cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2448ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2448d0:
    // 0x2448d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2448d4:
    // 0x2448d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2448d8:
    if (ctx->pc == 0x2448D8u) {
        ctx->pc = 0x2448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D4u;
        // 0x2448d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448DCu;
        goto label_2448dc;
    }
    ctx->pc = 0x2448D4u;
    {
        const bool branch_taken_0x2448d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D4u;
        // 0x2448d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448d4) {
            ctx->pc = 0x2448E0u;
            goto label_2448e0;
        }
    }
    ctx->pc = 0x2448DCu;
label_2448dc:
    // 0x2448dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2448dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2448e0:
    // 0x2448e0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2448e4:
    // 0x2448e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2448e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2448e8:
    // 0x2448e8: 0xe0f809  jalr        $a3
label_2448ec:
    if (ctx->pc == 0x2448ECu) {
        ctx->pc = 0x2448ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E8u;
        // 0x2448ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448F0u;
        goto label_2448f0;
    }
    ctx->pc = 0x2448E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2448F0u);
        ctx->pc = 0x2448ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E8u;
        // 0x2448ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448E8u, 0x2448F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2448F0u;
label_2448f0:
    // 0x2448f0: 0x10000154  b           . + 4 + (0x154 << 2)
label_2448f4:
    if (ctx->pc == 0x2448F4u) {
        ctx->pc = 0x2448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F0u;
        // 0x2448f4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448F8u;
        goto label_2448f8;
    }
    ctx->pc = 0x2448F0u;
    {
        const bool branch_taken_0x2448f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F0u;
        // 0x2448f4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448f0) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x2448F8u;
label_2448f8:
    // 0x2448f8: 0xc088e60  jal         func_223980
label_2448fc:
    if (ctx->pc == 0x2448FCu) {
        ctx->pc = 0x2448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F8u;
        // 0x2448fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244900u;
        goto label_244900;
    }
    ctx->pc = 0x2448F8u;
    SET_GPR_U32(ctx, 31, 0x244900u);
    ctx->pc = 0x2448FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448F8u;
    // 0x2448fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2448F8u, 0x244900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244900u;
label_244900:
    // 0x244900: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244908u;
        goto label_244908;
    }
    ctx->pc = 0x244900u;
    {
        const bool branch_taken_0x244900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244900) {
            ctx->pc = 0x244918u;
            goto label_244918;
        }
    }
    ctx->pc = 0x244908u;
label_244908:
    // 0x244908: 0xc08a01c  jal         func_228070
label_24490c:
    if (ctx->pc == 0x24490Cu) {
        ctx->pc = 0x24490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244908u;
        // 0x24490c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244910u;
        goto label_244910;
    }
    ctx->pc = 0x244908u;
    SET_GPR_U32(ctx, 31, 0x244910u);
    ctx->pc = 0x24490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244908u;
    // 0x24490c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x244908u, 0x244910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244910u;
label_244910:
    // 0x244910: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_244914:
    if (ctx->pc == 0x244914u) {
        ctx->pc = 0x244918u;
        goto label_244918;
    }
    ctx->pc = 0x244910u;
    {
        const bool branch_taken_0x244910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244910) {
            ctx->pc = 0x244984u;
            goto label_244984;
        }
    }
    ctx->pc = 0x244918u;
label_244918:
    // 0x244918: 0xc095018  jal         func_254060
label_24491c:
    if (ctx->pc == 0x24491Cu) {
        ctx->pc = 0x24491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244918u;
        // 0x24491c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244920u;
        goto label_244920;
    }
    ctx->pc = 0x244918u;
    SET_GPR_U32(ctx, 31, 0x244920u);
    ctx->pc = 0x24491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244918u;
    // 0x24491c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x244918u, 0x244920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244920u;
label_244920:
    // 0x244920: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_244924:
    // 0x244924: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_244928:
    if (ctx->pc == 0x244928u) {
        ctx->pc = 0x244928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244924u;
        // 0x244928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24492Cu;
        goto label_24492c;
    }
    ctx->pc = 0x244924u;
    {
        const bool branch_taken_0x244924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x244928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244924u;
        // 0x244928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244924) {
            ctx->pc = 0x24493Cu;
            goto label_24493c;
        }
    }
    ctx->pc = 0x24492Cu;
label_24492c:
    // 0x24492c: 0xc094fca  jal         func_253F28
label_244930:
    if (ctx->pc == 0x244930u) {
        ctx->pc = 0x244930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24492Cu;
        // 0x244930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244934u;
        goto label_244934;
    }
    ctx->pc = 0x24492Cu;
    SET_GPR_U32(ctx, 31, 0x244934u);
    ctx->pc = 0x244930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24492Cu;
    // 0x244930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x24492Cu, 0x244934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244934u;
label_244934:
    // 0x244934: 0x10000003  b           . + 4 + (0x3 << 2)
label_244938:
    if (ctx->pc == 0x244938u) {
        ctx->pc = 0x24493Cu;
        goto label_24493c;
    }
    ctx->pc = 0x244934u;
    {
        const bool branch_taken_0x244934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244934) {
            ctx->pc = 0x244944u;
            goto label_244944;
        }
    }
    ctx->pc = 0x24493Cu;
label_24493c:
    // 0x24493c: 0xc094fde  jal         func_253F78
label_244940:
    if (ctx->pc == 0x244940u) {
        ctx->pc = 0x244940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24493Cu;
        // 0x244940: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244944u;
        goto label_244944;
    }
    ctx->pc = 0x24493Cu;
    SET_GPR_U32(ctx, 31, 0x244944u);
    ctx->pc = 0x244940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24493Cu;
    // 0x244940: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x24493Cu, 0x244944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244944u;
label_244944:
    // 0x244944: 0xc088420  jal         func_221080
label_244948:
    if (ctx->pc == 0x244948u) {
        ctx->pc = 0x244948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244944u;
        // 0x244948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24494Cu;
        goto label_24494c;
    }
    ctx->pc = 0x244944u;
    SET_GPR_U32(ctx, 31, 0x24494Cu);
    ctx->pc = 0x244948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244944u;
    // 0x244948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x244944u, 0x24494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24494Cu;
label_24494c:
    // 0x24494c: 0xc08840e  jal         func_221038
label_244950:
    if (ctx->pc == 0x244950u) {
        ctx->pc = 0x244950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24494Cu;
        // 0x244950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244954u;
        goto label_244954;
    }
    ctx->pc = 0x24494Cu;
    SET_GPR_U32(ctx, 31, 0x244954u);
    ctx->pc = 0x244950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24494Cu;
    // 0x244950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x24494Cu, 0x244954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244954u;
label_244954:
    // 0x244954: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x244954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_244958:
    // 0x244958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24495c:
    // 0x24495c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244960:
    // 0x244960: 0x2449c7a0  addiu       $t1, $v0, -0x3860
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952864));
label_244964:
    // 0x244964: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x244964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_244968:
    // 0x244968: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x244968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24496c:
    // 0x24496c: 0xb26301c3  sdl         $v1, 0x1C3($s3)
    ctx->pc = 0x24496cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_244970:
    // 0x244970: 0xb66301bc  sdr         $v1, 0x1BC($s3)
    ctx->pc = 0x244970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_244974:
    // 0x244974: 0xc0914c4  jal         func_245310
label_244978:
    if (ctx->pc == 0x244978u) {
        ctx->pc = 0x244978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244974u;
        // 0x244978: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24497Cu;
        goto label_24497c;
    }
    ctx->pc = 0x244974u;
    SET_GPR_U32(ctx, 31, 0x24497Cu);
    ctx->pc = 0x244978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244974u;
    // 0x244978: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245310u, 0x244974u, 0x24497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24497Cu;
label_24497c:
    // 0x24497c: 0x10000131  b           . + 4 + (0x131 << 2)
label_244980:
    if (ctx->pc == 0x244980u) {
        ctx->pc = 0x244980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24497Cu;
        // 0x244980: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244984u;
        goto label_244984;
    }
    ctx->pc = 0x24497Cu;
    {
        const bool branch_taken_0x24497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24497Cu;
        // 0x244980: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24497c) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244984u;
label_244984:
    // 0x244984: 0xc0874fa  jal         func_21D3E8
label_244988:
    if (ctx->pc == 0x244988u) {
        ctx->pc = 0x244988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244984u;
        // 0x244988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24498Cu;
        goto label_24498c;
    }
    ctx->pc = 0x244984u;
    SET_GPR_U32(ctx, 31, 0x24498Cu);
    ctx->pc = 0x244988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244984u;
    // 0x244988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x244984u, 0x24498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24498Cu;
label_24498c:
    // 0x24498c: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_244990:
    // 0x244990: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_244994:
    // 0x244994: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_244998:
    // 0x244998: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x244998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24499c:
    // 0x24499c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x24499cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2449a0:
    // 0x2449a0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_2449a4:
    // 0x2449a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2449a8:
    // 0x2449a8: 0x90710018  lbu         $s1, 0x18($v1)
    ctx->pc = 0x2449a8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2449ac:
    // 0x2449ac: 0x90720019  lbu         $s2, 0x19($v1)
    ctx->pc = 0x2449acu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_2449b0:
    // 0x2449b0: 0x2631ff80  addiu       $s1, $s1, -0x80
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967168));
label_2449b4:
    // 0x2449b4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_2449b8:
    if (ctx->pc == 0x2449B8u) {
        ctx->pc = 0x2449B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B4u;
        // 0x2449b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449BCu;
        goto label_2449bc;
    }
    ctx->pc = 0x2449B4u;
    {
        const bool branch_taken_0x2449b4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2449B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B4u;
        // 0x2449b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449b4) {
            ctx->pc = 0x2449C0u;
            goto label_2449c0;
        }
    }
    ctx->pc = 0x2449BCu;
label_2449bc:
    // 0x2449bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2449c0:
    // 0x2449c0: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x2449c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_2449c4:
    // 0x2449c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2449c8:
    if (ctx->pc == 0x2449C8u) {
        ctx->pc = 0x2449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C4u;
        // 0x2449c8: 0xb29023  subu        $s2, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449CCu;
        goto label_2449cc;
    }
    ctx->pc = 0x2449C4u;
    {
        const bool branch_taken_0x2449c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C4u;
        // 0x2449c8: 0xb29023  subu        $s2, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449c4) {
            ctx->pc = 0x2449E4u;
            goto label_2449e4;
        }
    }
    ctx->pc = 0x2449CCu;
label_2449cc:
    // 0x2449cc: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_2449d0:
    if (ctx->pc == 0x2449D0u) {
        ctx->pc = 0x2449D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449CCu;
        // 0x2449d0: 0x2622ffe7  addiu       $v0, $s1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449D4u;
        goto label_2449d4;
    }
    ctx->pc = 0x2449CCu;
    {
        const bool branch_taken_0x2449cc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2449D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449CCu;
        // 0x2449d0: 0x2622ffe7  addiu       $v0, $s1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449cc) {
            ctx->pc = 0x2449D8u;
            goto label_2449d8;
        }
    }
    ctx->pc = 0x2449D4u;
label_2449d4:
    // 0x2449d4: 0x26220019  addiu       $v0, $s1, 0x19
    ctx->pc = 0x2449d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
label_2449d8:
    // 0x2449d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2449d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2449dc:
    // 0x2449dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2449e0:
    if (ctx->pc == 0x2449E0u) {
        ctx->pc = 0x2449E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449DCu;
        // 0x2449e0: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449E4u;
        goto label_2449e4;
    }
    ctx->pc = 0x2449DCu;
    {
        const bool branch_taken_0x2449dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449DCu;
        // 0x2449e0: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449dc) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2449E4u;
label_2449e4:
    // 0x2449e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2449e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2449e8:
    // 0x2449e8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
label_2449ec:
    if (ctx->pc == 0x2449ECu) {
        ctx->pc = 0x2449ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449E8u;
        // 0x2449ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449F0u;
        goto label_2449f0;
    }
    ctx->pc = 0x2449E8u;
    {
        const bool branch_taken_0x2449e8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2449ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449E8u;
        // 0x2449ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449e8) {
            ctx->pc = 0x2449F4u;
            goto label_2449f4;
        }
    }
    ctx->pc = 0x2449F0u;
label_2449f0:
    // 0x2449f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2449f4:
    // 0x2449f4: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x2449f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_2449f8:
    // 0x2449f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2449fc:
    if (ctx->pc == 0x2449FCu) {
        ctx->pc = 0x2449FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449F8u;
        // 0x2449fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A00u;
        goto label_244a00;
    }
    ctx->pc = 0x2449F8u;
    {
        const bool branch_taken_0x2449f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2449f8) {
            ctx->pc = 0x2449FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2449F8u;
            // 0x2449fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A14u;
            goto label_244a14;
        }
    }
    ctx->pc = 0x244A00u;
label_244a00:
    // 0x244a00: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
label_244a04:
    if (ctx->pc == 0x244A04u) {
        ctx->pc = 0x244A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A00u;
        // 0x244a04: 0x2642ffe7  addiu       $v0, $s2, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A08u;
        goto label_244a08;
    }
    ctx->pc = 0x244A00u;
    {
        const bool branch_taken_0x244a00 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x244A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A00u;
        // 0x244a04: 0x2642ffe7  addiu       $v0, $s2, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a00) {
            ctx->pc = 0x244A0Cu;
            goto label_244a0c;
        }
    }
    ctx->pc = 0x244A08u;
label_244a08:
    // 0x244a08: 0x26420019  addiu       $v0, $s2, 0x19
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
label_244a0c:
    // 0x244a0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_244a10:
    // 0x244a10: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_244a14:
    // 0x244a14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_244a18:
    // 0x244a18: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_244a1c:
    // 0x244a1c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_244a20:
    // 0x244a20: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_244a24:
    // 0x244a24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x244a24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_244a28:
    // 0x244a28: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x244a28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244a2c:
    // 0x244a2c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_244a30:
    // 0x244a30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x244a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244a34:
    // 0x244a34: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x244a34u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
label_244a38:
    // 0x244a38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x244a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244a3c:
    // 0x244a3c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x244a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_244a40:
    // 0x244a40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_244a44:
    // 0x244a44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_244a48:
    // 0x244a48: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x244a48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_244a4c:
    // 0x244a4c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x244a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_244a50:
    // 0x244a50: 0xae600298  sw          $zero, 0x298($s3)
    ctx->pc = 0x244a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 664), GPR_U32(ctx, 0));
label_244a54:
    // 0x244a54: 0x16060056  bne         $s0, $a2, . + 4 + (0x56 << 2)
label_244a58:
    if (ctx->pc == 0x244A58u) {
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0xae60029c  sw          $zero, 0x29C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A5Cu;
        goto label_244a5c;
    }
    ctx->pc = 0x244A54u;
    {
        const bool branch_taken_0x244a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x244A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A54u;
        // 0x244a58: 0xae60029c  sw          $zero, 0x29C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a54) {
            ctx->pc = 0x244BB0u;
            goto label_244bb0;
        }
    }
    ctx->pc = 0x244A5Cu;
label_244a5c:
    // 0x244a5c: 0x826601b0  lb          $a2, 0x1B0($s3)
    ctx->pc = 0x244a5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_244a60:
    // 0x244a60: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x244a60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_244a64:
    // 0x244a64: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_244a68:
    if (ctx->pc == 0x244A68u) {
        ctx->pc = 0x244A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A64u;
        // 0x244a68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A6Cu;
        goto label_244a6c;
    }
    ctx->pc = 0x244A64u;
    {
        const bool branch_taken_0x244a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A64u;
        // 0x244a68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a64) {
            ctx->pc = 0x244BB0u;
            goto label_244bb0;
        }
    }
    ctx->pc = 0x244A6Cu;
label_244a6c:
    // 0x244a6c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x244a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_244a70:
    // 0x244a70: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x244a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_244a74:
    // 0x244a74: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x244a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_244a78:
    // 0x244a78: 0x54a2004e  bnel        $a1, $v0, . + 4 + (0x4E << 2)
label_244a7c:
    if (ctx->pc == 0x244A7Cu) {
        ctx->pc = 0x244A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A78u;
        // 0x244a7c: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A80u;
        goto label_244a80;
    }
    ctx->pc = 0x244A78u;
    {
        const bool branch_taken_0x244a78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x244a78) {
            ctx->pc = 0x244A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A78u;
            // 0x244a7c: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244BB4u;
            goto label_244bb4;
        }
    }
    ctx->pc = 0x244A80u;
label_244a80:
    // 0x244a80: 0xc047e6c  jal         func_11F9B0
label_244a84:
    if (ctx->pc == 0x244A84u) {
        ctx->pc = 0x244A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A80u;
        // 0x244a84: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A88u;
        goto label_244a88;
    }
    ctx->pc = 0x244A80u;
    SET_GPR_U32(ctx, 31, 0x244A88u);
    ctx->pc = 0x244A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A80u;
    // 0x244a84: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x244A80u, 0x244A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A88u;
label_244a88:
    // 0x244a88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244a8c:
    // 0x244a8c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_244a90:
    // 0x244a90: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_244a94:
    // 0x244a94: 0xa0f809  jalr        $a1
label_244a98:
    if (ctx->pc == 0x244A98u) {
        ctx->pc = 0x244A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A94u;
        // 0x244a98: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A9Cu;
        goto label_244a9c;
    }
    ctx->pc = 0x244A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x244A9Cu);
        ctx->pc = 0x244A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A94u;
        // 0x244a98: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A94u, 0x244A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244A9Cu;
label_244a9c:
    // 0x244a9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244aa0:
    // 0x244aa0: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_244aa4:
    if (ctx->pc == 0x244AA4u) {
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA0u;
        // 0x244aa4: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AA8u;
        goto label_244aa8;
    }
    ctx->pc = 0x244AA0u;
    {
        const bool branch_taken_0x244aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA0u;
        // 0x244aa4: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa0) {
            ctx->pc = 0x244BB4u;
            goto label_244bb4;
        }
    }
    ctx->pc = 0x244AA8u;
label_244aa8:
    // 0x244aa8: 0xc047e78  jal         func_11F9E0
label_244aac:
    if (ctx->pc == 0x244AACu) {
        ctx->pc = 0x244AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA8u;
        // 0x244aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AB0u;
        goto label_244ab0;
    }
    ctx->pc = 0x244AA8u;
    SET_GPR_U32(ctx, 31, 0x244AB0u);
    ctx->pc = 0x244AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AA8u;
    // 0x244aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x244AA8u, 0x244AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AB0u;
label_244ab0:
    // 0x244ab0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244ab4:
    // 0x244ab4: 0x84640248  lh          $a0, 0x248($v1)
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 584)));
label_244ab8:
    // 0x244ab8: 0x8c65024c  lw          $a1, 0x24C($v1)
    ctx->pc = 0x244ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_244abc:
    // 0x244abc: 0xa0f809  jalr        $a1
label_244ac0:
    if (ctx->pc == 0x244AC0u) {
        ctx->pc = 0x244AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ABCu;
        // 0x244ac0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AC4u;
        goto label_244ac4;
    }
    ctx->pc = 0x244ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x244AC4u);
        ctx->pc = 0x244AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ABCu;
        // 0x244ac0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244ABCu, 0x244AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244AC4u;
label_244ac4:
    // 0x244ac4: 0x826401b0  lb          $a0, 0x1B0($s3)
    ctx->pc = 0x244ac4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_244ac8:
    // 0x244ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244acc:
    // 0x244acc: 0xc047e78  jal         func_11F9E0
label_244ad0:
    if (ctx->pc == 0x244AD0u) {
        ctx->pc = 0x244AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ACCu;
        // 0x244ad0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AD4u;
        goto label_244ad4;
    }
    ctx->pc = 0x244ACCu;
    SET_GPR_U32(ctx, 31, 0x244AD4u);
    ctx->pc = 0x244AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244ACCu;
    // 0x244ad0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x244ACCu, 0x244AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AD4u;
label_244ad4:
    // 0x244ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244ad8:
    // 0x244ad8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_244adc:
    // 0x244adc: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_244ae0:
    // 0x244ae0: 0xa0f809  jalr        $a1
label_244ae4:
    if (ctx->pc == 0x244AE4u) {
        ctx->pc = 0x244AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AE0u;
        // 0x244ae4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AE8u;
        goto label_244ae8;
    }
    ctx->pc = 0x244AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x244AE8u);
        ctx->pc = 0x244AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AE0u;
        // 0x244ae4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244AE0u, 0x244AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244AE8u;
label_244ae8:
    // 0x244ae8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x244ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244aec:
    // 0x244aec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_244af0:
    // 0x244af0: 0xc136afa  jal         func_4DABE8
label_244af4:
    if (ctx->pc == 0x244AF4u) {
        ctx->pc = 0x244AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AF0u;
        // 0x244af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AF8u;
        goto label_244af8;
    }
    ctx->pc = 0x244AF0u;
    SET_GPR_U32(ctx, 31, 0x244AF8u);
    ctx->pc = 0x244AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AF0u;
    // 0x244af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x244AF0u, 0x244AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AF8u;
label_244af8:
    // 0x244af8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x244af8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244afc:
    // 0x244afc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_244b00:
    // 0x244b00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x244b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_244b04:
    // 0x244b04: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x244b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244b08:
    // 0x244b08: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x244b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244b0c:
    // 0x244b0c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x244b0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244b10:
    // 0x244b10: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x244b10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_244b14:
    // 0x244b14: 0x4a0003bf  vwaitq
    ctx->pc = 0x244b14u;
    // VWAITQ (Q already resolved in this runtime)
label_244b18:
    // 0x244b18: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x244b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_244b1c:
    // 0x244b1c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x244b1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_244b20:
    // 0x244b20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x244b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244b24:
    // 0x244b24: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x244b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_244b28:
    // 0x244b28: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x244b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_244b2c:
    // 0x244b2c: 0xc0cd8ec  jal         func_3363B0
label_244b30:
    if (ctx->pc == 0x244B30u) {
        ctx->pc = 0x244B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B2Cu;
        // 0x244b30: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B34u;
        goto label_244b34;
    }
    ctx->pc = 0x244B2Cu;
    SET_GPR_U32(ctx, 31, 0x244B34u);
    ctx->pc = 0x244B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B2Cu;
    // 0x244b30: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x244B2Cu, 0x244B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B34u;
label_244b34:
    // 0x244b34: 0xc0cd766  jal         func_335D98
label_244b38:
    if (ctx->pc == 0x244B38u) {
        ctx->pc = 0x244B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B34u;
        // 0x244b38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B3Cu;
        goto label_244b3c;
    }
    ctx->pc = 0x244B34u;
    SET_GPR_U32(ctx, 31, 0x244B3Cu);
    ctx->pc = 0x244B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B34u;
    // 0x244b38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x244B34u, 0x244B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B3Cu;
label_244b3c:
    // 0x244b3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x244b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_244b40:
    // 0x244b40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244b44:
    // 0x244b44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x244b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_244b48:
    // 0x244b48: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_244b4c:
    // 0x244b4c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x244b4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_244b50:
    // 0x244b50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x244b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_244b54:
    // 0x244b54: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x244b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_244b58:
    // 0x244b58: 0xc12e310  jal         func_4B8C40
label_244b5c:
    if (ctx->pc == 0x244B5Cu) {
        ctx->pc = 0x244B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B58u;
        // 0x244b5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B60u;
        goto label_244b60;
    }
    ctx->pc = 0x244B58u;
    SET_GPR_U32(ctx, 31, 0x244B60u);
    ctx->pc = 0x244B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B58u;
    // 0x244b5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x244B58u, 0x244B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B60u;
label_244b60:
    // 0x244b60: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x244b60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_244b64:
    // 0x244b64: 0xc12e29c  jal         func_4B8A70
label_244b68:
    if (ctx->pc == 0x244B68u) {
        ctx->pc = 0x244B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B64u;
        // 0x244b68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B6Cu;
        goto label_244b6c;
    }
    ctx->pc = 0x244B64u;
    SET_GPR_U32(ctx, 31, 0x244B6Cu);
    ctx->pc = 0x244B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B64u;
    // 0x244b68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x244B64u, 0x244B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B6Cu;
label_244b6c:
    // 0x244b6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x244b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244b70:
    // 0x244b70: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x244b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_244b74:
    // 0x244b74: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x244b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_244b78:
    // 0x244b78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x244b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_244b7c:
    // 0x244b7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x244b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_244b80:
    // 0x244b80: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x244b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_244b84:
    // 0x244b84: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x244b84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_244b88:
    // 0x244b88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x244b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_244b8c:
    // 0x244b8c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x244b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_244b90:
    // 0x244b90: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x244b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244b94:
    // 0x244b94: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x244b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244b98:
    // 0x244b98: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x244b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244b9c:
    // 0x244b9c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x244b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_244ba0:
    // 0x244ba0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x244ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_244ba4:
    // 0x244ba4: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x244ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_244ba8:
    // 0x244ba8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x244ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_244bac:
    // 0x244bac: 0x7e620620  sq          $v0, 0x620($s3)
    ctx->pc = 0x244bacu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1568), GPR_VEC(ctx, 2));
label_244bb0:
    // 0x244bb0: 0x826401b0  lb          $a0, 0x1B0($s3)
    ctx->pc = 0x244bb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_244bb4:
    // 0x244bb4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x244bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_244bb8:
    // 0x244bb8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_244bbc:
    // 0x244bbc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x244bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_244bc0:
    // 0x244bc0: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x244bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_244bc4:
    // 0x244bc4: 0x24845740  addiu       $a0, $a0, 0x5740
    ctx->pc = 0x244bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22336));
label_244bc8:
    // 0x244bc8: 0xc063fb8  jal         func_18FEE0
label_244bcc:
    if (ctx->pc == 0x244BCCu) {
        ctx->pc = 0x244BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC8u;
        // 0x244bcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BD0u;
        goto label_244bd0;
    }
    ctx->pc = 0x244BC8u;
    SET_GPR_U32(ctx, 31, 0x244BD0u);
    ctx->pc = 0x244BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BC8u;
    // 0x244bcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FEE0u, 0x244BC8u, 0x244BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BD0u;
label_244bd0:
    // 0x244bd0: 0x8e620638  lw          $v0, 0x638($s3)
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1592)));
label_244bd4:
    // 0x244bd4: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_244bd8:
    if (ctx->pc == 0x244BD8u) {
        ctx->pc = 0x244BDCu;
        goto label_244bdc;
    }
    ctx->pc = 0x244BD4u;
    {
        const bool branch_taken_0x244bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bd4) {
            ctx->pc = 0x244D4Cu;
            goto label_244d4c;
        }
    }
    ctx->pc = 0x244BDCu;
label_244bdc:
    // 0x244bdc: 0x8e62063c  lw          $v0, 0x63C($s3)
    ctx->pc = 0x244bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1596)));
label_244be0:
    // 0x244be0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_244be4:
    if (ctx->pc == 0x244BE4u) {
        ctx->pc = 0x244BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BE0u;
        // 0x244be4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BE8u;
        goto label_244be8;
    }
    ctx->pc = 0x244BE0u;
    {
        const bool branch_taken_0x244be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244be0) {
            ctx->pc = 0x244BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244BE0u;
            // 0x244be4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244C00u;
            goto label_244c00;
        }
    }
    ctx->pc = 0x244BE8u;
label_244be8:
    // 0x244be8: 0x1620005a  bnez        $s1, . + 4 + (0x5A << 2)
label_244bec:
    if (ctx->pc == 0x244BECu) {
        ctx->pc = 0x244BF0u;
        goto label_244bf0;
    }
    ctx->pc = 0x244BE8u;
    {
        const bool branch_taken_0x244be8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x244be8) {
            ctx->pc = 0x244D54u;
            goto label_244d54;
        }
    }
    ctx->pc = 0x244BF0u;
label_244bf0:
    // 0x244bf0: 0x16400056  bnez        $s2, . + 4 + (0x56 << 2)
label_244bf4:
    if (ctx->pc == 0x244BF4u) {
        ctx->pc = 0x244BF8u;
        goto label_244bf8;
    }
    ctx->pc = 0x244BF0u;
    {
        const bool branch_taken_0x244bf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x244bf0) {
            ctx->pc = 0x244D4Cu;
            goto label_244d4c;
        }
    }
    ctx->pc = 0x244BF8u;
label_244bf8:
    // 0x244bf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_244bfc:
    if (ctx->pc == 0x244BFCu) {
        ctx->pc = 0x244C00u;
        goto label_244c00;
    }
    ctx->pc = 0x244BF8u;
    {
        const bool branch_taken_0x244bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bf8) {
            ctx->pc = 0x244C04u;
            goto label_244c04;
        }
    }
    ctx->pc = 0x244C00u;
label_244c00:
    // 0x244c00: 0xae62063c  sw          $v0, 0x63C($s3)
    ctx->pc = 0x244c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1596), GPR_U32(ctx, 2));
label_244c04:
    // 0x244c04: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x244c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
label_244c08:
    // 0x244c08: 0x3421137f  ori         $at, $at, 0x137F
    ctx->pc = 0x244c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4991);
label_244c0c:
    // 0x244c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244c10:
    // 0x244c10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_244c14:
    // 0x244c14: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x244c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
label_244c18:
    // 0x244c18: 0x3421a79c  ori         $at, $at, 0xA79C
    ctx->pc = 0x244c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42908);
label_244c1c:
    // 0x244c1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_244c20:
    // 0x244c20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_244c24:
    // 0x244c24: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
label_244c28:
    // 0x244c28: 0x34211316  ori         $at, $at, 0x1316
    ctx->pc = 0x244c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4886);
label_244c2c:
    // 0x244c2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x244c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_244c30:
    // 0x244c30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244c34:
    // 0x244c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_244c38:
    // 0x244c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244c3c:
    // 0x244c3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x244c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244c40:
    // 0x244c40: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x244c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_244c44:
    // 0x244c44: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x244c44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_244c48:
    // 0x244c48: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x244c48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_244c4c:
    // 0x244c4c: 0x26321740  addiu       $s2, $s1, 0x1740
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_244c50:
    // 0x244c50: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x244c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_244c54:
    // 0x244c54: 0xc136b30  jal         func_4DACC0
label_244c58:
    if (ctx->pc == 0x244C58u) {
        ctx->pc = 0x244C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C54u;
        // 0x244c58: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C5Cu;
        goto label_244c5c;
    }
    ctx->pc = 0x244C54u;
    SET_GPR_U32(ctx, 31, 0x244C5Cu);
    ctx->pc = 0x244C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C54u;
    // 0x244c58: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x244C54u, 0x244C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C5Cu;
label_244c5c:
    // 0x244c5c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x244c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244c60:
    // 0x244c60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x244c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244c64:
    // 0x244c64: 0x8e660638  lw          $a2, 0x638($s3)
    ctx->pc = 0x244c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1592)));
label_244c68:
    // 0x244c68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x244c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_244c6c:
    // 0x244c6c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x244c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_244c70:
    // 0x244c70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x244c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_244c74:
    // 0x244c74: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x244c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_244c78:
    // 0x244c78: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x244c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_244c7c:
    // 0x244c7c: 0x40f809  jalr        $v0
label_244c80:
    if (ctx->pc == 0x244C80u) {
        ctx->pc = 0x244C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C7Cu;
        // 0x244c80: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C84u;
        goto label_244c84;
    }
    ctx->pc = 0x244C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244C84u);
        ctx->pc = 0x244C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C7Cu;
        // 0x244c80: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C7Cu, 0x244C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244C84u;
label_244c84:
    // 0x244c84: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x244c84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244c88:
    // 0x244c88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244c8c:
    // 0x244c8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244c90:
    // 0x244c90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244c94:
    // 0x244c94: 0xc136afa  jal         func_4DABE8
label_244c98:
    if (ctx->pc == 0x244C98u) {
        ctx->pc = 0x244C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C94u;
        // 0x244c98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C9Cu;
        goto label_244c9c;
    }
    ctx->pc = 0x244C94u;
    SET_GPR_U32(ctx, 31, 0x244C9Cu);
    ctx->pc = 0x244C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C94u;
    // 0x244c98: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x244C94u, 0x244C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x86c60002  lh          $a2, 0x2($s6)
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_244ca0:
    // 0x244ca0: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_244ca4:
    // 0x244ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244ca8:
    // 0x244ca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244cac:
    // 0x244cac: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x244cacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_244cb0:
    // 0x244cb0: 0xc136afa  jal         func_4DABE8
label_244cb4:
    if (ctx->pc == 0x244CB4u) {
        ctx->pc = 0x244CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB0u;
        // 0x244cb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CB8u;
        goto label_244cb8;
    }
    ctx->pc = 0x244CB0u;
    SET_GPR_U32(ctx, 31, 0x244CB8u);
    ctx->pc = 0x244CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CB0u;
    // 0x244cb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x244CB0u, 0x244CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CB8u;
label_244cb8:
    // 0x244cb8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x244cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_244cbc:
    // 0x244cbc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x244cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244cc0:
    // 0x244cc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x244cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_244cc4:
    // 0x244cc4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x244cc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244cc8:
    // 0x244cc8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x244cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244ccc:
    // 0x244ccc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x244cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_244cd0:
    // 0x244cd0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x244cd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_244cd4:
    // 0x244cd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x244cd4u;
    // VWAITQ (Q already resolved in this runtime)
label_244cd8:
    // 0x244cd8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x244cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_244cdc:
    // 0x244cdc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x244cdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_244ce0:
    // 0x244ce0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x244ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_244ce4:
    // 0x244ce4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x244ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_244ce8:
    // 0x244ce8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x244ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_244cec:
    // 0x244cec: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x244cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_244cf0:
    // 0x244cf0: 0xc0cd5ea  jal         func_3357A8
label_244cf4:
    if (ctx->pc == 0x244CF4u) {
        ctx->pc = 0x244CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF0u;
        // 0x244cf4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CF8u;
        goto label_244cf8;
    }
    ctx->pc = 0x244CF0u;
    SET_GPR_U32(ctx, 31, 0x244CF8u);
    ctx->pc = 0x244CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CF0u;
    // 0x244cf4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x244CF0u, 0x244CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CF8u;
label_244cf8:
    // 0x244cf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_244cfc:
    // 0x244cfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244d00:
    // 0x244d00: 0x0  nop
    ctx->pc = 0x244d00u;
    // NOP
label_244d04:
    // 0x244d04: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x244d04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_244d08:
    // 0x244d08: 0xc12e310  jal         func_4B8C40
label_244d0c:
    if (ctx->pc == 0x244D0Cu) {
        ctx->pc = 0x244D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D08u;
        // 0x244d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D10u;
        goto label_244d10;
    }
    ctx->pc = 0x244D08u;
    SET_GPR_U32(ctx, 31, 0x244D10u);
    ctx->pc = 0x244D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D08u;
    // 0x244d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x244D08u, 0x244D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D10u;
label_244d10:
    // 0x244d10: 0xc6221740  lwc1        $f2, 0x1740($s1)
    ctx->pc = 0x244d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244d14:
    // 0x244d14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_244d18:
    // 0x244d18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x244d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_244d1c:
    // 0x244d1c: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x244d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_244d20:
    // 0x244d20: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x244d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244d24:
    // 0x244d24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_244d28:
    // 0x244d28: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x244d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_244d2c:
    // 0x244d2c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x244d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_244d30:
    // 0x244d30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x244d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_244d34:
    // 0x244d34: 0xc12e29c  jal         func_4B8A70
label_244d38:
    if (ctx->pc == 0x244D38u) {
        ctx->pc = 0x244D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D34u;
        // 0x244d38: 0xe6820008  swc1        $f2, 0x8($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D3Cu;
        goto label_244d3c;
    }
    ctx->pc = 0x244D34u;
    SET_GPR_U32(ctx, 31, 0x244D3Cu);
    ctx->pc = 0x244D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D34u;
    // 0x244d38: 0xe6820008  swc1        $f2, 0x8($s4) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x244D34u, 0x244D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D3Cu;
label_244d3c:
    // 0x244d3c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x244d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_244d40:
    // 0x244d40: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x244d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_244d44:
    // 0x244d44: 0x1000003e  b           . + 4 + (0x3E << 2)
label_244d48:
    if (ctx->pc == 0x244D48u) {
        ctx->pc = 0x244D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D44u;
        // 0x244d48: 0x7e620620  sq          $v0, 0x620($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 1568), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D4Cu;
        goto label_244d4c;
    }
    ctx->pc = 0x244D44u;
    {
        const bool branch_taken_0x244d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D44u;
        // 0x244d48: 0x7e620620  sq          $v0, 0x620($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 1568), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d44) {
            ctx->pc = 0x244E40u;
            goto label_244e40;
        }
    }
    ctx->pc = 0x244D4Cu;
label_244d4c:
    // 0x244d4c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_244d50:
    if (ctx->pc == 0x244D50u) {
        ctx->pc = 0x244D54u;
        goto label_244d54;
    }
    ctx->pc = 0x244D4Cu;
    {
        const bool branch_taken_0x244d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d4c) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244D54u;
label_244d54:
    // 0x244d54: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x244d54u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_244d58:
    // 0x244d58: 0x0  nop
    ctx->pc = 0x244d58u;
    // NOP
label_244d5c:
    // 0x244d5c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x244d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_244d60:
    // 0x244d60: 0x3c013a1a  lui         $at, 0x3A1A
    ctx->pc = 0x244d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14874 << 16));
label_244d64:
    // 0x244d64: 0x34216a63  ori         $at, $at, 0x6A63
    ctx->pc = 0x244d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27235);
label_244d68:
    // 0x244d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244d6c:
    // 0x244d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x244d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_244d70:
    // 0x244d70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244d74:
    // 0x244d74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x244d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_244d78:
    // 0x244d78: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x244d78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_244d7c:
    // 0x244d7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x244d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_244d80:
    // 0x244d80: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x244d80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_244d84:
    // 0x244d84: 0xc12e310  jal         func_4B8C40
label_244d88:
    if (ctx->pc == 0x244D88u) {
        ctx->pc = 0x244D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D84u;
        // 0x244d88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D8Cu;
        goto label_244d8c;
    }
    ctx->pc = 0x244D84u;
    SET_GPR_U32(ctx, 31, 0x244D8Cu);
    ctx->pc = 0x244D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D84u;
    // 0x244d88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x244D84u, 0x244D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D8Cu;
label_244d8c:
    // 0x244d8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x244d8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_244d90:
    // 0x244d90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_244d94:
    // 0x244d94: 0xc12e29c  jal         func_4B8A70
label_244d98:
    if (ctx->pc == 0x244D98u) {
        ctx->pc = 0x244D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D94u;
        // 0x244d98: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D9Cu;
        goto label_244d9c;
    }
    ctx->pc = 0x244D94u;
    SET_GPR_U32(ctx, 31, 0x244D9Cu);
    ctx->pc = 0x244D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D94u;
    // 0x244d98: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x244D94u, 0x244D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D9Cu;
label_244d9c:
    // 0x244d9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x244d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244da0:
    // 0x244da0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x244da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_244da4:
    // 0x244da4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x244da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244da8:
    // 0x244da8: 0xc136d44  jal         func_4DB510
label_244dac:
    if (ctx->pc == 0x244DACu) {
        ctx->pc = 0x244DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DA8u;
        // 0x244dac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DB0u;
        goto label_244db0;
    }
    ctx->pc = 0x244DA8u;
    SET_GPR_U32(ctx, 31, 0x244DB0u);
    ctx->pc = 0x244DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DA8u;
    // 0x244dac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x244DA8u, 0x244DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DB0u;
label_244db0:
    // 0x244db0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x244db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244db4:
    // 0x244db4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244db8:
    // 0x244db8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_244dbc:
    // 0x244dbc: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x244dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_244dc0:
    // 0x244dc0: 0xc0899aa  jal         func_2266A8
label_244dc4:
    if (ctx->pc == 0x244DC4u) {
        ctx->pc = 0x244DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC0u;
        // 0x244dc4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DC8u;
        goto label_244dc8;
    }
    ctx->pc = 0x244DC0u;
    SET_GPR_U32(ctx, 31, 0x244DC8u);
    ctx->pc = 0x244DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DC0u;
    // 0x244dc4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x244DC0u, 0x244DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DC8u;
label_244dc8:
    // 0x244dc8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x244dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_244dcc:
    // 0x244dcc: 0x7e620620  sq          $v0, 0x620($s3)
    ctx->pc = 0x244dccu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1568), GPR_VEC(ctx, 2));
label_244dd0:
    // 0x244dd0: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_244dd4:
    if (ctx->pc == 0x244DD4u) {
        ctx->pc = 0x244DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD0u;
        // 0x244dd4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DD8u;
        goto label_244dd8;
    }
    ctx->pc = 0x244DD0u;
    {
        const bool branch_taken_0x244dd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD0u;
        // 0x244dd4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dd0) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244DD8u;
label_244dd8:
    // 0x244dd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x244dd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244ddc:
    // 0x244ddc: 0x0  nop
    ctx->pc = 0x244ddcu;
    // NOP
label_244de0:
    // 0x244de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_244de4:
    // 0x244de4: 0x3c013a1a  lui         $at, 0x3A1A
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14874 << 16));
label_244de8:
    // 0x244de8: 0x34216a63  ori         $at, $at, 0x6A63
    ctx->pc = 0x244de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27235);
label_244dec:
    // 0x244dec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_244df0:
    // 0x244df0: 0xc6610630  lwc1        $f1, 0x630($s3)
    ctx->pc = 0x244df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244df4:
    // 0x244df4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x244df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
label_244df8:
    // 0x244df8: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x244df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_244dfc:
    // 0x244dfc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x244dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_244e00:
    // 0x244e00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x244e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_244e04:
    // 0x244e04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_244e08:
    // 0x244e08: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x244e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244e0c:
    // 0x244e0c: 0x0  nop
    ctx->pc = 0x244e0cu;
    // NOP
label_244e10:
    // 0x244e10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_244e14:
    if (ctx->pc == 0x244E14u) {
        ctx->pc = 0x244E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E10u;
        // 0x244e14: 0xe6610630  swc1        $f1, 0x630($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E18u;
        goto label_244e18;
    }
    ctx->pc = 0x244E10u;
    {
        const bool branch_taken_0x244e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E10u;
        // 0x244e14: 0xe6610630  swc1        $f1, 0x630($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e10) {
            ctx->pc = 0x244E1Cu;
            goto label_244e1c;
        }
    }
    ctx->pc = 0x244E18u;
label_244e18:
    // 0x244e18: 0xe6630630  swc1        $f3, 0x630($s3)
    ctx->pc = 0x244e18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
label_244e1c:
    // 0x244e1c: 0xc6600630  lwc1        $f0, 0x630($s3)
    ctx->pc = 0x244e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244e20:
    // 0x244e20: 0x3c01bf20  lui         $at, 0xBF20
    ctx->pc = 0x244e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48928 << 16));
label_244e24:
    // 0x244e24: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x244e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_244e28:
    // 0x244e28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244e2c:
    // 0x244e2c: 0x0  nop
    ctx->pc = 0x244e2cu;
    // NOP
label_244e30:
    // 0x244e30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244e34:
    // 0x244e34: 0x0  nop
    ctx->pc = 0x244e34u;
    // NOP
label_244e38:
    // 0x244e38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_244e3c:
    if (ctx->pc == 0x244E3Cu) {
        ctx->pc = 0x244E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E38u;
        // 0x244e3c: 0xe6610630  swc1        $f1, 0x630($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E40u;
        goto label_244e40;
    }
    ctx->pc = 0x244E38u;
    {
        const bool branch_taken_0x244e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244e38) {
            ctx->pc = 0x244E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E38u;
            // 0x244e3c: 0xe6610630  swc1        $f1, 0x630($s3) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E40u;
            goto label_244e40;
        }
    }
    ctx->pc = 0x244E40u;
label_244e40:
    // 0x244e40: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x244e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_244e44:
    // 0x244e44: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x244e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_244e48:
    // 0x244e48: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x244e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_244e4c:
    // 0x244e4c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x244e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_244e50:
    // 0x244e50: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x244e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_244e54:
    // 0x244e54: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x244e54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_244e58:
    // 0x244e58: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x244e58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_244e5c:
    // 0x244e5c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x244e5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_244e60:
    // 0x244e60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_244e64:
    // 0x244e64: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x244e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_244e68:
    // 0x244e68: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x244e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_244e6c:
    // 0x244e6c: 0x3e00008  jr          $ra
label_244e70:
    if (ctx->pc == 0x244E70u) {
        ctx->pc = 0x244E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E6Cu;
        // 0x244e70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E74u;
        goto label_244e74;
    }
    ctx->pc = 0x244E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E6Cu;
        // 0x244e70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E74u;
label_244e74:
    // 0x244e74: 0x0  nop
    ctx->pc = 0x244e74u;
    // NOP
    ctx->pc = 0x244e78u;
}
