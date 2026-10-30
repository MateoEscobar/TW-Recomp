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

// Function: sub_00243848
// Address: 0x243848 - 0x2445f8
void sub_00243848_0x243848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243848_0x243848");
#endif

    switch (ctx->pc) {
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bb4u: goto label_243bb4;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bbcu: goto label_243bbc;
        case 0x243bc0u: goto label_243bc0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bccu: goto label_243bcc;
        case 0x243bd0u: goto label_243bd0;
        case 0x243bd4u: goto label_243bd4;
        case 0x243bd8u: goto label_243bd8;
        case 0x243bdcu: goto label_243bdc;
        case 0x243be0u: goto label_243be0;
        case 0x243be4u: goto label_243be4;
        case 0x243be8u: goto label_243be8;
        case 0x243becu: goto label_243bec;
        case 0x243bf0u: goto label_243bf0;
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c00u: goto label_243c00;
        case 0x243c04u: goto label_243c04;
        case 0x243c08u: goto label_243c08;
        case 0x243c0cu: goto label_243c0c;
        case 0x243c10u: goto label_243c10;
        case 0x243c14u: goto label_243c14;
        case 0x243c18u: goto label_243c18;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c20u: goto label_243c20;
        case 0x243c24u: goto label_243c24;
        case 0x243c28u: goto label_243c28;
        case 0x243c2cu: goto label_243c2c;
        case 0x243c30u: goto label_243c30;
        case 0x243c34u: goto label_243c34;
        case 0x243c38u: goto label_243c38;
        case 0x243c3cu: goto label_243c3c;
        case 0x243c40u: goto label_243c40;
        case 0x243c44u: goto label_243c44;
        case 0x243c48u: goto label_243c48;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c50u: goto label_243c50;
        case 0x243c54u: goto label_243c54;
        case 0x243c58u: goto label_243c58;
        case 0x243c5cu: goto label_243c5c;
        case 0x243c60u: goto label_243c60;
        case 0x243c64u: goto label_243c64;
        case 0x243c68u: goto label_243c68;
        case 0x243c6cu: goto label_243c6c;
        case 0x243c70u: goto label_243c70;
        case 0x243c74u: goto label_243c74;
        case 0x243c78u: goto label_243c78;
        case 0x243c7cu: goto label_243c7c;
        case 0x243c80u: goto label_243c80;
        case 0x243c84u: goto label_243c84;
        case 0x243c88u: goto label_243c88;
        case 0x243c8cu: goto label_243c8c;
        case 0x243c90u: goto label_243c90;
        case 0x243c94u: goto label_243c94;
        case 0x243c98u: goto label_243c98;
        case 0x243c9cu: goto label_243c9c;
        case 0x243ca0u: goto label_243ca0;
        case 0x243ca4u: goto label_243ca4;
        case 0x243ca8u: goto label_243ca8;
        case 0x243cacu: goto label_243cac;
        case 0x243cb0u: goto label_243cb0;
        case 0x243cb4u: goto label_243cb4;
        case 0x243cb8u: goto label_243cb8;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cc0u: goto label_243cc0;
        case 0x243cc4u: goto label_243cc4;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cccu: goto label_243ccc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd4u: goto label_243cd4;
        case 0x243cd8u: goto label_243cd8;
        case 0x243cdcu: goto label_243cdc;
        case 0x243ce0u: goto label_243ce0;
        case 0x243ce4u: goto label_243ce4;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf0u: goto label_243cf0;
        case 0x243cf4u: goto label_243cf4;
        case 0x243cf8u: goto label_243cf8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d00u: goto label_243d00;
        case 0x243d04u: goto label_243d04;
        case 0x243d08u: goto label_243d08;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d10u: goto label_243d10;
        case 0x243d14u: goto label_243d14;
        case 0x243d18u: goto label_243d18;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d20u: goto label_243d20;
        case 0x243d24u: goto label_243d24;
        case 0x243d28u: goto label_243d28;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d30u: goto label_243d30;
        case 0x243d34u: goto label_243d34;
        case 0x243d38u: goto label_243d38;
        case 0x243d3cu: goto label_243d3c;
        case 0x243d40u: goto label_243d40;
        case 0x243d44u: goto label_243d44;
        case 0x243d48u: goto label_243d48;
        case 0x243d4cu: goto label_243d4c;
        case 0x243d50u: goto label_243d50;
        case 0x243d54u: goto label_243d54;
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fa4u: goto label_243fa4;
        case 0x243fa8u: goto label_243fa8;
        case 0x243facu: goto label_243fac;
        case 0x243fb0u: goto label_243fb0;
        case 0x243fb4u: goto label_243fb4;
        case 0x243fb8u: goto label_243fb8;
        case 0x243fbcu: goto label_243fbc;
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        case 0x244018u: goto label_244018;
        case 0x24401cu: goto label_24401c;
        case 0x244020u: goto label_244020;
        case 0x244024u: goto label_244024;
        case 0x244028u: goto label_244028;
        case 0x24402cu: goto label_24402c;
        case 0x244030u: goto label_244030;
        case 0x244034u: goto label_244034;
        case 0x244038u: goto label_244038;
        case 0x24403cu: goto label_24403c;
        case 0x244040u: goto label_244040;
        case 0x244044u: goto label_244044;
        case 0x244048u: goto label_244048;
        case 0x24404cu: goto label_24404c;
        case 0x244050u: goto label_244050;
        case 0x244054u: goto label_244054;
        case 0x244058u: goto label_244058;
        case 0x24405cu: goto label_24405c;
        case 0x244060u: goto label_244060;
        case 0x244064u: goto label_244064;
        case 0x244068u: goto label_244068;
        case 0x24406cu: goto label_24406c;
        case 0x244070u: goto label_244070;
        case 0x244074u: goto label_244074;
        case 0x244078u: goto label_244078;
        case 0x24407cu: goto label_24407c;
        case 0x244080u: goto label_244080;
        case 0x244084u: goto label_244084;
        case 0x244088u: goto label_244088;
        case 0x24408cu: goto label_24408c;
        case 0x244090u: goto label_244090;
        case 0x244094u: goto label_244094;
        case 0x244098u: goto label_244098;
        case 0x24409cu: goto label_24409c;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440a4u: goto label_2440a4;
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        case 0x24411cu: goto label_24411c;
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        default: break;
    }

    ctx->pc = 0x243848u;

label_243848:
    // 0x243848: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_24384c:
    // 0x24384c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x24384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_243850:
    // 0x243850: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x243850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_243854:
    // 0x243854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x243854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243858:
    // 0x243858: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x243858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_24385c:
    // 0x24385c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24385cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243860:
    // 0x243860: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x243860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_243864:
    // 0x243864: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x243864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243868:
    // 0x243868: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x243868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_24386c:
    // 0x24386c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x24386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_243870:
    // 0x243870: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x243870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_243874:
    // 0x243874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x243874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_243878:
    // 0x243878: 0xe7bd0138  swc1        $f29, 0x138($sp)
    ctx->pc = 0x243878u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24387c:
    // 0x24387c: 0xe7bc0130  swc1        $f28, 0x130($sp)
    ctx->pc = 0x24387cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_243880:
    // 0x243880: 0xe7bb0128  swc1        $f27, 0x128($sp)
    ctx->pc = 0x243880u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_243884:
    // 0x243884: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x243884u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_243888:
    // 0x243888: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x243888u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_24388c:
    // 0x24388c: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x24388cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_243890:
    // 0x243890: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x243890u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_243894:
    // 0x243894: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x243894u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_243898:
    // 0x243898: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x243898u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_24389c:
    // 0x24389c: 0xc0874fa  jal         func_21D3E8
label_2438a0:
    if (ctx->pc == 0x2438A0u) {
        ctx->pc = 0x2438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24389Cu;
        // 0x2438a0: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438A4u;
        goto label_2438a4;
    }
    ctx->pc = 0x24389Cu;
    SET_GPR_U32(ctx, 31, 0x2438A4u);
    ctx->pc = 0x2438A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24389Cu;
    // 0x2438a0: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x24389Cu, 0x2438A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438A4u;
label_2438a4:
    // 0x2438a4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2438a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2438a8:
    // 0x2438a8: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
label_2438ac:
    if (ctx->pc == 0x2438ACu) {
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438B0u;
        goto label_2438b0;
    }
    ctx->pc = 0x2438A8u;
    {
        const bool branch_taken_0x2438a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438a8) {
            ctx->pc = 0x2438ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2438A8u;
            // 0x2438ac: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2439C0u;
            goto label_2439c0;
        }
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x862201c6  lh          $v0, 0x1C6($s1)
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 454)));
label_2438b4:
    // 0x2438b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2438b8:
    if (ctx->pc == 0x2438B8u) {
        ctx->pc = 0x2438BCu;
        goto label_2438bc;
    }
    ctx->pc = 0x2438B4u;
    {
        const bool branch_taken_0x2438b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438b4) {
            ctx->pc = 0x2438C4u;
            goto label_2438c4;
        }
    }
    ctx->pc = 0x2438BCu;
label_2438bc:
    // 0x2438bc: 0xc088420  jal         func_221080
label_2438c0:
    if (ctx->pc == 0x2438C0u) {
        ctx->pc = 0x2438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438BCu;
        // 0x2438c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438C4u;
        goto label_2438c4;
    }
    ctx->pc = 0x2438BCu;
    SET_GPR_U32(ctx, 31, 0x2438C4u);
    ctx->pc = 0x2438C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438BCu;
    // 0x2438c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2438BCu, 0x2438C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438C4u;
label_2438c4:
    // 0x2438c4: 0xc089fda  jal         func_227F68
label_2438c8:
    if (ctx->pc == 0x2438C8u) {
        ctx->pc = 0x2438C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438C4u;
        // 0x2438c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438CCu;
        goto label_2438cc;
    }
    ctx->pc = 0x2438C4u;
    SET_GPR_U32(ctx, 31, 0x2438CCu);
    ctx->pc = 0x2438C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438C4u;
    // 0x2438c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x2438C4u, 0x2438CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438CCu;
label_2438cc:
    // 0x2438cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2438d0:
    if (ctx->pc == 0x2438D0u) {
        ctx->pc = 0x2438D4u;
        goto label_2438d4;
    }
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x2438E4u;
            goto label_2438e4;
        }
    }
    ctx->pc = 0x2438D4u;
label_2438d4:
    // 0x2438d4: 0xc089f0a  jal         func_227C28
label_2438d8:
    if (ctx->pc == 0x2438D8u) {
        ctx->pc = 0x2438D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438D4u;
        // 0x2438d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438DCu;
        goto label_2438dc;
    }
    ctx->pc = 0x2438D4u;
    SET_GPR_U32(ctx, 31, 0x2438DCu);
    ctx->pc = 0x2438D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438D4u;
    // 0x2438d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C28u, 0x2438D4u, 0x2438DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438DCu;
label_2438dc:
    // 0x2438dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2438e0:
    if (ctx->pc == 0x2438E0u) {
        ctx->pc = 0x2438E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438DCu;
        // 0x2438e0: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438E4u;
        goto label_2438e4;
    }
    ctx->pc = 0x2438DCu;
    {
        const bool branch_taken_0x2438dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438DCu;
        // 0x2438e0: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438dc) {
            ctx->pc = 0x24395Cu;
            goto label_24395c;
        }
    }
    ctx->pc = 0x2438E4u;
label_2438e4:
    // 0x2438e4: 0xc089f1a  jal         func_227C68
label_2438e8:
    if (ctx->pc == 0x2438E8u) {
        ctx->pc = 0x2438E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438E4u;
        // 0x2438e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438ECu;
        goto label_2438ec;
    }
    ctx->pc = 0x2438E4u;
    SET_GPR_U32(ctx, 31, 0x2438ECu);
    ctx->pc = 0x2438E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438E4u;
    // 0x2438e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C68u, 0x2438E4u, 0x2438ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438ECu;
label_2438ec:
    // 0x2438ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2438f0:
    if (ctx->pc == 0x2438F0u) {
        ctx->pc = 0x2438F4u;
        goto label_2438f4;
    }
    ctx->pc = 0x2438ECu;
    {
        const bool branch_taken_0x2438ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438ec) {
            ctx->pc = 0x243904u;
            goto label_243904;
        }
    }
    ctx->pc = 0x2438F4u;
label_2438f4:
    // 0x2438f4: 0xc089ede  jal         func_227B78
label_2438f8:
    if (ctx->pc == 0x2438F8u) {
        ctx->pc = 0x2438F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438F4u;
        // 0x2438f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438FCu;
        goto label_2438fc;
    }
    ctx->pc = 0x2438F4u;
    SET_GPR_U32(ctx, 31, 0x2438FCu);
    ctx->pc = 0x2438F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438F4u;
    // 0x2438f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B78u, 0x2438F4u, 0x2438FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438FCu;
label_2438fc:
    // 0x2438fc: 0x10000017  b           . + 4 + (0x17 << 2)
label_243900:
    if (ctx->pc == 0x243900u) {
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438FCu;
        // 0x243900: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243904u;
        goto label_243904;
    }
    ctx->pc = 0x2438FCu;
    {
        const bool branch_taken_0x2438fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438FCu;
        // 0x243900: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438fc) {
            ctx->pc = 0x24395Cu;
            goto label_24395c;
        }
    }
    ctx->pc = 0x243904u;
label_243904:
    // 0x243904: 0xc089e8e  jal         func_227A38
label_243908:
    if (ctx->pc == 0x243908u) {
        ctx->pc = 0x243908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243904u;
        // 0x243908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24390Cu;
        goto label_24390c;
    }
    ctx->pc = 0x243904u;
    SET_GPR_U32(ctx, 31, 0x24390Cu);
    ctx->pc = 0x243908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243904u;
    // 0x243908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A38u, 0x243904u, 0x24390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24390Cu;
label_24390c:
    // 0x24390c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243910:
    if (ctx->pc == 0x243910u) {
        ctx->pc = 0x243914u;
        goto label_243914;
    }
    ctx->pc = 0x24390Cu;
    {
        const bool branch_taken_0x24390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24390c) {
            ctx->pc = 0x243924u;
            goto label_243924;
        }
    }
    ctx->pc = 0x243914u;
label_243914:
    // 0x243914: 0xc09117e  jal         func_2445F8
label_243918:
    if (ctx->pc == 0x243918u) {
        ctx->pc = 0x243918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243914u;
        // 0x243918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24391Cu;
        goto label_24391c;
    }
    ctx->pc = 0x243914u;
    SET_GPR_U32(ctx, 31, 0x24391Cu);
    ctx->pc = 0x243918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243914u;
    // 0x243918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2445F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445F8u, 0x243914u, 0x24391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24391Cu;
label_24391c:
    // 0x24391c: 0x1000000f  b           . + 4 + (0xF << 2)
label_243920:
    if (ctx->pc == 0x243920u) {
        ctx->pc = 0x243920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24391Cu;
        // 0x243920: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243924u;
        goto label_243924;
    }
    ctx->pc = 0x24391Cu;
    {
        const bool branch_taken_0x24391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24391Cu;
        // 0x243920: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24391c) {
            ctx->pc = 0x24395Cu;
            goto label_24395c;
        }
    }
    ctx->pc = 0x243924u;
label_243924:
    // 0x243924: 0xc089e98  jal         func_227A60
label_243928:
    if (ctx->pc == 0x243928u) {
        ctx->pc = 0x243928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243924u;
        // 0x243928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24392Cu;
        goto label_24392c;
    }
    ctx->pc = 0x243924u;
    SET_GPR_U32(ctx, 31, 0x24392Cu);
    ctx->pc = 0x243928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243924u;
    // 0x243928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A60u, 0x243924u, 0x24392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24392Cu;
label_24392c:
    // 0x24392c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243930:
    if (ctx->pc == 0x243930u) {
        ctx->pc = 0x243930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24392Cu;
        // 0x243930: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243934u;
        goto label_243934;
    }
    ctx->pc = 0x24392Cu;
    {
        const bool branch_taken_0x24392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24392Cu;
        // 0x243930: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24392c) {
            ctx->pc = 0x243944u;
            goto label_243944;
        }
    }
    ctx->pc = 0x243934u;
label_243934:
    // 0x243934: 0xc091188  jal         func_244620
label_243938:
    if (ctx->pc == 0x243938u) {
        ctx->pc = 0x243938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243934u;
        // 0x243938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24393Cu;
        goto label_24393c;
    }
    ctx->pc = 0x243934u;
    SET_GPR_U32(ctx, 31, 0x24393Cu);
    ctx->pc = 0x243938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243934u;
    // 0x243938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x243934u, 0x24393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24393Cu;
label_24393c:
    // 0x24393c: 0x10000007  b           . + 4 + (0x7 << 2)
label_243940:
    if (ctx->pc == 0x243940u) {
        ctx->pc = 0x243940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24393Cu;
        // 0x243940: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243944u;
        goto label_243944;
    }
    ctx->pc = 0x24393Cu;
    {
        const bool branch_taken_0x24393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24393Cu;
        // 0x243940: 0x862501be  lh          $a1, 0x1BE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24393c) {
            ctx->pc = 0x24395Cu;
            goto label_24395c;
        }
    }
    ctx->pc = 0x243944u;
label_243944:
    // 0x243944: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_243948:
    // 0x243948: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x243948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24394c:
    // 0x24394c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x24394cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_243950:
    // 0x243950: 0xb22301c3  sdl         $v1, 0x1C3($s1)
    ctx->pc = 0x243950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_243954:
    // 0x243954: 0xb62301bc  sdr         $v1, 0x1BC($s1)
    ctx->pc = 0x243954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_243958:
    // 0x243958: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x243958u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_24395c:
    // 0x24395c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_243960:
    if (ctx->pc == 0x243960u) {
        ctx->pc = 0x243960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24395Cu;
        // 0x243960: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243964u;
        goto label_243964;
    }
    ctx->pc = 0x24395Cu;
    {
        const bool branch_taken_0x24395c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x243960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24395Cu;
        // 0x243960: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24395c) {
            ctx->pc = 0x243984u;
            goto label_243984;
        }
    }
    ctx->pc = 0x243964u;
label_243964:
    // 0x243964: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_243968:
    // 0x243968: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24396c:
    // 0x24396c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243970:
    // 0x243970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_243974:
    // 0x243974: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x243974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_243978:
    // 0x243978: 0x10383f  dsra32      $a3, $s0, 0
    ctx->pc = 0x243978u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> (32 + 0));
label_24397c:
    // 0x24397c: 0x10000003  b           . + 4 + (0x3 << 2)
label_243980:
    if (ctx->pc == 0x243980u) {
        ctx->pc = 0x243980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24397Cu;
        // 0x243980: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243984u;
        goto label_243984;
    }
    ctx->pc = 0x24397Cu;
    {
        const bool branch_taken_0x24397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24397Cu;
        // 0x243980: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24397c) {
            ctx->pc = 0x24398Cu;
            goto label_24398c;
        }
    }
    ctx->pc = 0x243984u;
label_243984:
    // 0x243984: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x243984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_243988:
    // 0x243988: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x243988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_24398c:
    // 0x24398c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_243990:
    if (ctx->pc == 0x243990u) {
        ctx->pc = 0x243990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24398Cu;
        // 0x243990: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243994u;
        goto label_243994;
    }
    ctx->pc = 0x24398Cu;
    {
        const bool branch_taken_0x24398c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x243990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24398Cu;
        // 0x243990: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24398c) {
            ctx->pc = 0x2439A4u;
            goto label_2439a4;
        }
    }
    ctx->pc = 0x243994u;
label_243994:
    // 0x243994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x243994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_243998:
    // 0x243998: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_24399c:
    // 0x24399c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2439a0:
    if (ctx->pc == 0x2439A0u) {
        ctx->pc = 0x2439A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24399Cu;
        // 0x2439a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439A4u;
        goto label_2439a4;
    }
    ctx->pc = 0x24399Cu;
    {
        const bool branch_taken_0x24399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24399Cu;
        // 0x2439a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24399c) {
            ctx->pc = 0x2439A8u;
            goto label_2439a8;
        }
    }
    ctx->pc = 0x2439A4u;
label_2439a4:
    // 0x2439a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2439a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2439a8:
    // 0x2439a8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2439a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2439ac:
    // 0x2439ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2439acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2439b0:
    // 0x2439b0: 0xe0f809  jalr        $a3
label_2439b4:
    if (ctx->pc == 0x2439B4u) {
        ctx->pc = 0x2439B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439B0u;
        // 0x2439b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439B8u;
        goto label_2439b8;
    }
    ctx->pc = 0x2439B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2439B8u);
        ctx->pc = 0x2439B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439B0u;
        // 0x2439b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439B0u, 0x2439B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2439B8u;
label_2439b8:
    // 0x2439b8: 0x100002ef  b           . + 4 + (0x2EF << 2)
label_2439bc:
    if (ctx->pc == 0x2439BCu) {
        ctx->pc = 0x2439BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439B8u;
        // 0x2439bc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439C0u;
        goto label_2439c0;
    }
    ctx->pc = 0x2439B8u;
    {
        const bool branch_taken_0x2439b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439B8u;
        // 0x2439bc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439b8) {
            ctx->pc = 0x244578u;
            goto label_244578;
        }
    }
    ctx->pc = 0x2439C0u;
label_2439c0:
    // 0x2439c0: 0x104002ed  beqz        $v0, . + 4 + (0x2ED << 2)
label_2439c4:
    if (ctx->pc == 0x2439C4u) {
        ctx->pc = 0x2439C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C0u;
        // 0x2439c4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439C8u;
        goto label_2439c8;
    }
    ctx->pc = 0x2439C0u;
    {
        const bool branch_taken_0x2439c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C0u;
        // 0x2439c4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439c0) {
            ctx->pc = 0x244578u;
            goto label_244578;
        }
    }
    ctx->pc = 0x2439C8u;
label_2439c8:
    // 0x2439c8: 0xc087502  jal         func_21D408
label_2439cc:
    if (ctx->pc == 0x2439CCu) {
        ctx->pc = 0x2439CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439C8u;
        // 0x2439cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439D0u;
        goto label_2439d0;
    }
    ctx->pc = 0x2439C8u;
    SET_GPR_U32(ctx, 31, 0x2439D0u);
    ctx->pc = 0x2439CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439C8u;
    // 0x2439cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2439C8u, 0x2439D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439D0u;
label_2439d0:
    // 0x2439d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2439d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2439d4:
    // 0x2439d4: 0xc6970114  lwc1        $f23, 0x114($s4)
    ctx->pc = 0x2439d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2439d8:
    // 0x2439d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2439dc:
    // 0x2439dc: 0xc0a2ac2  jal         func_28AB08
label_2439e0:
    if (ctx->pc == 0x2439E0u) {
        ctx->pc = 0x2439E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439DCu;
        // 0x2439e0: 0x4600bf06  mov.s       $f28, $f23 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439E4u;
        goto label_2439e4;
    }
    ctx->pc = 0x2439DCu;
    SET_GPR_U32(ctx, 31, 0x2439E4u);
    ctx->pc = 0x2439E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439DCu;
    // 0x2439e0: 0x4600bf06  mov.s       $f28, $f23 (Delay Slot)
    ctx->f[28] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB08u, 0x2439DCu, 0x2439E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439E4u;
label_2439e4:
    // 0x2439e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2439e8:
    if (ctx->pc == 0x2439E8u) {
        ctx->pc = 0x2439ECu;
        goto label_2439ec;
    }
    ctx->pc = 0x2439E4u;
    {
        const bool branch_taken_0x2439e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2439e4) {
            ctx->pc = 0x2439FCu;
            goto label_2439fc;
        }
    }
    ctx->pc = 0x2439ECu;
label_2439ec:
    // 0x2439ec: 0xc097d14  jal         func_25F450
label_2439f0:
    if (ctx->pc == 0x2439F0u) {
        ctx->pc = 0x2439F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439ECu;
        // 0x2439f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439F4u;
        goto label_2439f4;
    }
    ctx->pc = 0x2439ECu;
    SET_GPR_U32(ctx, 31, 0x2439F4u);
    ctx->pc = 0x2439F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439ECu;
    // 0x2439f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2439ECu, 0x2439F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439F4u;
label_2439f4:
    // 0x2439f4: 0xc093390  jal         func_24CE40
label_2439f8:
    if (ctx->pc == 0x2439F8u) {
        ctx->pc = 0x2439F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439F4u;
        // 0x2439f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2439FCu;
        goto label_2439fc;
    }
    ctx->pc = 0x2439F4u;
    SET_GPR_U32(ctx, 31, 0x2439FCu);
    ctx->pc = 0x2439F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439F4u;
    // 0x2439f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x2439F4u, 0x2439FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439FCu;
label_2439fc:
    // 0x2439fc: 0xc089f4a  jal         func_227D28
label_243a00:
    if (ctx->pc == 0x243A00u) {
        ctx->pc = 0x243A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439FCu;
        // 0x243a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A04u;
        goto label_243a04;
    }
    ctx->pc = 0x2439FCu;
    SET_GPR_U32(ctx, 31, 0x243A04u);
    ctx->pc = 0x243A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439FCu;
    // 0x243a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x2439FCu, 0x243A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A04u;
label_243a04:
    // 0x243a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243a08:
    if (ctx->pc == 0x243A08u) {
        ctx->pc = 0x243A0Cu;
        goto label_243a0c;
    }
    ctx->pc = 0x243A04u;
    {
        const bool branch_taken_0x243a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a04) {
            ctx->pc = 0x243A14u;
            goto label_243a14;
        }
    }
    ctx->pc = 0x243A0Cu;
label_243a0c:
    // 0x243a0c: 0xc093390  jal         func_24CE40
label_243a10:
    if (ctx->pc == 0x243A10u) {
        ctx->pc = 0x243A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A0Cu;
        // 0x243a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A14u;
        goto label_243a14;
    }
    ctx->pc = 0x243A0Cu;
    SET_GPR_U32(ctx, 31, 0x243A14u);
    ctx->pc = 0x243A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A0Cu;
    // 0x243a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x243A0Cu, 0x243A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A14u;
label_243a14:
    // 0x243a14: 0xc088f2c  jal         func_223CB0
label_243a18:
    if (ctx->pc == 0x243A18u) {
        ctx->pc = 0x243A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A14u;
        // 0x243a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A1Cu;
        goto label_243a1c;
    }
    ctx->pc = 0x243A14u;
    SET_GPR_U32(ctx, 31, 0x243A1Cu);
    ctx->pc = 0x243A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A14u;
    // 0x243a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x243A14u, 0x243A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A1Cu;
label_243a1c:
    // 0x243a1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_243a20:
    if (ctx->pc == 0x243A20u) {
        ctx->pc = 0x243A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A1Cu;
        // 0x243a20: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A24u;
        goto label_243a24;
    }
    ctx->pc = 0x243A1Cu;
    {
        const bool branch_taken_0x243a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a1c) {
            ctx->pc = 0x243A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A1Cu;
            // 0x243a20: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243A48u;
            goto label_243a48;
        }
    }
    ctx->pc = 0x243A24u;
label_243a24:
    // 0x243a24: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_243a28:
    // 0x243a28: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x243a28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_243a2c:
    // 0x243a2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_243a30:
    if (ctx->pc == 0x243A30u) {
        ctx->pc = 0x243A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A2Cu;
        // 0x243a30: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A34u;
        goto label_243a34;
    }
    ctx->pc = 0x243A2Cu;
    {
        const bool branch_taken_0x243a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a2c) {
            ctx->pc = 0x243A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A2Cu;
            // 0x243a30: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243A48u;
            goto label_243a48;
        }
    }
    ctx->pc = 0x243A34u;
label_243a34:
    // 0x243a34: 0xc088eb4  jal         func_223AD0
label_243a38:
    if (ctx->pc == 0x243A38u) {
        ctx->pc = 0x243A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A34u;
        // 0x243a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A3Cu;
        goto label_243a3c;
    }
    ctx->pc = 0x243A34u;
    SET_GPR_U32(ctx, 31, 0x243A3Cu);
    ctx->pc = 0x243A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A34u;
    // 0x243a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x243A34u, 0x243A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A3Cu;
label_243a3c:
    // 0x243a3c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_243a40:
    if (ctx->pc == 0x243A40u) {
        ctx->pc = 0x243A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A3Cu;
        // 0x243a40: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A44u;
        goto label_243a44;
    }
    ctx->pc = 0x243A3Cu;
    {
        const bool branch_taken_0x243a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a3c) {
            ctx->pc = 0x243A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A3Cu;
            // 0x243a40: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243A74u;
            goto label_243a74;
        }
    }
    ctx->pc = 0x243A44u;
label_243a44:
    // 0x243a44: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_243a48:
    // 0x243a48: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x243a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_243a4c:
    // 0x243a4c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x243a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_243a50:
    // 0x243a50: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x243a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_243a54:
    // 0x243a54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x243a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_243a58:
    // 0x243a58: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x243a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_243a5c:
    // 0x243a5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_243a60:
    // 0x243a60: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x243a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_243a64:
    // 0x243a64: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x243a64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_243a68:
    // 0x243a68: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x243a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_243a6c:
    // 0x243a6c: 0x10000128  b           . + 4 + (0x128 << 2)
label_243a70:
    if (ctx->pc == 0x243A70u) {
        ctx->pc = 0x243A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A6Cu;
        // 0x243a70: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A74u;
        goto label_243a74;
    }
    ctx->pc = 0x243A6Cu;
    {
        const bool branch_taken_0x243a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A6Cu;
        // 0x243a70: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a6c) {
            ctx->pc = 0x243F10u;
            goto label_243f10;
        }
    }
    ctx->pc = 0x243A74u;
label_243a74:
    // 0x243a74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x243a74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_243a78:
    // 0x243a78: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_243a7c:
    if (ctx->pc == 0x243A7Cu) {
        ctx->pc = 0x243A80u;
        goto label_243a80;
    }
    ctx->pc = 0x243A78u;
    {
        const bool branch_taken_0x243a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243a78) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243A80u;
label_243a80:
    // 0x243a80: 0x8282000b  lb          $v0, 0xB($s4)
    ctx->pc = 0x243a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
label_243a84:
    // 0x243a84: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_243a88:
    if (ctx->pc == 0x243A88u) {
        ctx->pc = 0x243A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A84u;
        // 0x243a88: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A8Cu;
        goto label_243a8c;
    }
    ctx->pc = 0x243A84u;
    {
        const bool branch_taken_0x243a84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x243a84) {
            ctx->pc = 0x243A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243A84u;
            // 0x243a88: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243AD4u;
            goto label_243ad4;
        }
    }
    ctx->pc = 0x243A8Cu;
label_243a8c:
    // 0x243a8c: 0xc08a0d0  jal         func_228340
label_243a90:
    if (ctx->pc == 0x243A90u) {
        ctx->pc = 0x243A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A8Cu;
        // 0x243a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A94u;
        goto label_243a94;
    }
    ctx->pc = 0x243A8Cu;
    SET_GPR_U32(ctx, 31, 0x243A94u);
    ctx->pc = 0x243A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A8Cu;
    // 0x243a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x243A8Cu, 0x243A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A94u;
label_243a94:
    // 0x243a94: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_243a98:
    if (ctx->pc == 0x243A98u) {
        ctx->pc = 0x243A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A94u;
        // 0x243a98: 0x24040174  addiu       $a0, $zero, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243A9Cu;
        goto label_243a9c;
    }
    ctx->pc = 0x243A94u;
    {
        const bool branch_taken_0x243a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243A94u;
        // 0x243a98: 0x24040174  addiu       $a0, $zero, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a94) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243A9Cu;
label_243a9c:
    // 0x243a9c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x243a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_243aa0:
    // 0x243aa0: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x243aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_243aa4:
    // 0x243aa4: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
label_243aa8:
    if (ctx->pc == 0x243AA8u) {
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA4u;
        // 0x243aa8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AACu;
        goto label_243aac;
    }
    ctx->pc = 0x243AA4u;
    {
        const bool branch_taken_0x243aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA4u;
        // 0x243aa8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243aa4) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243AACu;
label_243aac:
    // 0x243aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ab0:
    // 0x243ab0: 0xc094d7c  jal         func_2535F0
label_243ab4:
    if (ctx->pc == 0x243AB4u) {
        ctx->pc = 0x243AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AB0u;
        // 0x243ab4: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AB8u;
        goto label_243ab8;
    }
    ctx->pc = 0x243AB0u;
    SET_GPR_U32(ctx, 31, 0x243AB8u);
    ctx->pc = 0x243AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AB0u;
    // 0x243ab4: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x243AB0u, 0x243AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AB8u;
label_243ab8:
    // 0x243ab8: 0xc09501e  jal         func_254078
label_243abc:
    if (ctx->pc == 0x243ABCu) {
        ctx->pc = 0x243ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AB8u;
        // 0x243abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AC0u;
        goto label_243ac0;
    }
    ctx->pc = 0x243AB8u;
    SET_GPR_U32(ctx, 31, 0x243AC0u);
    ctx->pc = 0x243ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AB8u;
    // 0x243abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254078u, 0x243AB8u, 0x243AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AC0u;
label_243ac0:
    // 0x243ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ac4:
    // 0x243ac4: 0xc089974  jal         func_2265D0
label_243ac8:
    if (ctx->pc == 0x243AC8u) {
        ctx->pc = 0x243AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AC4u;
        // 0x243ac8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ACCu;
        goto label_243acc;
    }
    ctx->pc = 0x243AC4u;
    SET_GPR_U32(ctx, 31, 0x243ACCu);
    ctx->pc = 0x243AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AC4u;
    // 0x243ac8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x243AC4u, 0x243ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ACCu;
label_243acc:
    // 0x243acc: 0x1000000d  b           . + 4 + (0xD << 2)
label_243ad0:
    if (ctx->pc == 0x243AD0u) {
        ctx->pc = 0x243AD4u;
        goto label_243ad4;
    }
    ctx->pc = 0x243ACCu;
    {
        const bool branch_taken_0x243acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243acc) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243AD4u;
label_243ad4:
    // 0x243ad4: 0x2404017c  addiu       $a0, $zero, 0x17C
    ctx->pc = 0x243ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_243ad8:
    // 0x243ad8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x243ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_243adc:
    // 0x243adc: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_243ae0:
    if (ctx->pc == 0x243AE0u) {
        ctx->pc = 0x243AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ADCu;
        // 0x243ae0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AE4u;
        goto label_243ae4;
    }
    ctx->pc = 0x243ADCu;
    {
        const bool branch_taken_0x243adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x243AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ADCu;
        // 0x243ae0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243adc) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243AE4u;
label_243ae4:
    // 0x243ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ae8:
    // 0x243ae8: 0xc094d7c  jal         func_2535F0
label_243aec:
    if (ctx->pc == 0x243AECu) {
        ctx->pc = 0x243AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AE8u;
        // 0x243aec: 0x24060174  addiu       $a2, $zero, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AF0u;
        goto label_243af0;
    }
    ctx->pc = 0x243AE8u;
    SET_GPR_U32(ctx, 31, 0x243AF0u);
    ctx->pc = 0x243AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE8u;
    // 0x243aec: 0x24060174  addiu       $a2, $zero, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x243AE8u, 0x243AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF0u;
label_243af0:
    // 0x243af0: 0xc09501e  jal         func_254078
label_243af4:
    if (ctx->pc == 0x243AF4u) {
        ctx->pc = 0x243AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AF0u;
        // 0x243af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243AF8u;
        goto label_243af8;
    }
    ctx->pc = 0x243AF0u;
    SET_GPR_U32(ctx, 31, 0x243AF8u);
    ctx->pc = 0x243AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AF0u;
    // 0x243af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254078u, 0x243AF0u, 0x243AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF8u;
label_243af8:
    // 0x243af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243afc:
    // 0x243afc: 0xc089974  jal         func_2265D0
label_243b00:
    if (ctx->pc == 0x243B00u) {
        ctx->pc = 0x243B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AFCu;
        // 0x243b00: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B04u;
        goto label_243b04;
    }
    ctx->pc = 0x243AFCu;
    SET_GPR_U32(ctx, 31, 0x243B04u);
    ctx->pc = 0x243B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AFCu;
    // 0x243b00: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x243AFCu, 0x243B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B04u;
label_243b04:
    // 0x243b04: 0xc089f66  jal         func_227D98
label_243b08:
    if (ctx->pc == 0x243B08u) {
        ctx->pc = 0x243B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B04u;
        // 0x243b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B0Cu;
        goto label_243b0c;
    }
    ctx->pc = 0x243B04u;
    SET_GPR_U32(ctx, 31, 0x243B0Cu);
    ctx->pc = 0x243B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B04u;
    // 0x243b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x243B04u, 0x243B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B0Cu;
label_243b0c:
    // 0x243b0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_243b10:
    if (ctx->pc == 0x243B10u) {
        ctx->pc = 0x243B14u;
        goto label_243b14;
    }
    ctx->pc = 0x243B0Cu;
    {
        const bool branch_taken_0x243b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b0c) {
            ctx->pc = 0x243B40u;
            goto label_243b40;
        }
    }
    ctx->pc = 0x243B14u;
label_243b14:
    // 0x243b14: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_243b18:
    // 0x243b18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_243b1c:
    // 0x243b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243b20:
    // 0x243b20: 0x0  nop
    ctx->pc = 0x243b20u;
    // NOP
label_243b24:
    // 0x243b24: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x243b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243b28:
    // 0x243b28: 0x0  nop
    ctx->pc = 0x243b28u;
    // NOP
label_243b2c:
    // 0x243b2c: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_243b30:
    if (ctx->pc == 0x243B30u) {
        ctx->pc = 0x243B34u;
        goto label_243b34;
    }
    ctx->pc = 0x243B2Cu;
    {
        const bool branch_taken_0x243b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243b2c) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243B34u;
label_243b34:
    // 0x243b34: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_243b38:
    // 0x243b38: 0x1000003c  b           . + 4 + (0x3C << 2)
label_243b3c:
    if (ctx->pc == 0x243B3Cu) {
        ctx->pc = 0x243B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B38u;
        // 0x243b3c: 0xc4570170  lwc1        $f23, 0x170($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B40u;
        goto label_243b40;
    }
    ctx->pc = 0x243B38u;
    {
        const bool branch_taken_0x243b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B38u;
        // 0x243b3c: 0xc4570170  lwc1        $f23, 0x170($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b38) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243B40u;
label_243b40:
    // 0x243b40: 0xc08a0d0  jal         func_228340
label_243b44:
    if (ctx->pc == 0x243B44u) {
        ctx->pc = 0x243B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B40u;
        // 0x243b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B48u;
        goto label_243b48;
    }
    ctx->pc = 0x243B40u;
    SET_GPR_U32(ctx, 31, 0x243B48u);
    ctx->pc = 0x243B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B40u;
    // 0x243b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x243B40u, 0x243B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B48u;
label_243b48:
    // 0x243b48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_243b4c:
    if (ctx->pc == 0x243B4Cu) {
        ctx->pc = 0x243B50u;
        goto label_243b50;
    }
    ctx->pc = 0x243B48u;
    {
        const bool branch_taken_0x243b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b48) {
            ctx->pc = 0x243B8Cu;
            goto label_243b8c;
        }
    }
    ctx->pc = 0x243B50u;
label_243b50:
    // 0x243b50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_243b54:
    // 0x243b54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_243b58:
    // 0x243b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243b5c:
    // 0x243b5c: 0x0  nop
    ctx->pc = 0x243b5cu;
    // NOP
label_243b60:
    // 0x243b60: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x243b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243b64:
    // 0x243b64: 0x0  nop
    ctx->pc = 0x243b64u;
    // NOP
label_243b68:
    // 0x243b68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_243b6c:
    if (ctx->pc == 0x243B6Cu) {
        ctx->pc = 0x243B70u;
        goto label_243b70;
    }
    ctx->pc = 0x243B68u;
    {
        const bool branch_taken_0x243b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243b68) {
            ctx->pc = 0x243B80u;
            goto label_243b80;
        }
    }
    ctx->pc = 0x243B70u;
label_243b70:
    // 0x243b70: 0xc0885c4  jal         func_221710
label_243b74:
    if (ctx->pc == 0x243B74u) {
        ctx->pc = 0x243B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B70u;
        // 0x243b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B78u;
        goto label_243b78;
    }
    ctx->pc = 0x243B70u;
    SET_GPR_U32(ctx, 31, 0x243B78u);
    ctx->pc = 0x243B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B70u;
    // 0x243b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221710u, 0x243B70u, 0x243B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B78u;
label_243b78:
    // 0x243b78: 0x1000002c  b           . + 4 + (0x2C << 2)
label_243b7c:
    if (ctx->pc == 0x243B7Cu) {
        ctx->pc = 0x243B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B78u;
        // 0x243b7c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B80u;
        goto label_243b80;
    }
    ctx->pc = 0x243B78u;
    {
        const bool branch_taken_0x243b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B78u;
        // 0x243b7c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b78) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243B80u;
label_243b80:
    // 0x243b80: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x243b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_243b84:
    // 0x243b84: 0x10000029  b           . + 4 + (0x29 << 2)
label_243b88:
    if (ctx->pc == 0x243B88u) {
        ctx->pc = 0x243B8Cu;
        goto label_243b8c;
    }
    ctx->pc = 0x243B84u;
    {
        const bool branch_taken_0x243b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b84) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243B8Cu;
label_243b8c:
    // 0x243b8c: 0xc089000  jal         func_224000
label_243b90:
    if (ctx->pc == 0x243B90u) {
        ctx->pc = 0x243B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B8Cu;
        // 0x243b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B94u;
        goto label_243b94;
    }
    ctx->pc = 0x243B8Cu;
    SET_GPR_U32(ctx, 31, 0x243B94u);
    ctx->pc = 0x243B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B8Cu;
    // 0x243b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x243B8Cu, 0x243B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B94u;
label_243b94:
    // 0x243b94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_243b98:
    if (ctx->pc == 0x243B98u) {
        ctx->pc = 0x243B9Cu;
        goto label_243b9c;
    }
    ctx->pc = 0x243B94u;
    {
        const bool branch_taken_0x243b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b94) {
            ctx->pc = 0x243C10u;
            goto label_243c10;
        }
    }
    ctx->pc = 0x243B9Cu;
label_243b9c:
    // 0x243b9c: 0xc08859c  jal         func_221670
label_243ba0:
    if (ctx->pc == 0x243BA0u) {
        ctx->pc = 0x243BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B9Cu;
        // 0x243ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BA4u;
        goto label_243ba4;
    }
    ctx->pc = 0x243B9Cu;
    SET_GPR_U32(ctx, 31, 0x243BA4u);
    ctx->pc = 0x243BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B9Cu;
    // 0x243ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x243B9Cu, 0x243BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BA4u;
label_243ba4:
    // 0x243ba4: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x243ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ba8:
    // 0x243ba8: 0x0  nop
    ctx->pc = 0x243ba8u;
    // NOP
label_243bac:
    // 0x243bac: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_243bb0:
    if (ctx->pc == 0x243BB0u) {
        ctx->pc = 0x243BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BACu;
        // 0x243bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BB4u;
        goto label_243bb4;
    }
    ctx->pc = 0x243BACu;
    {
        const bool branch_taken_0x243bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BACu;
        // 0x243bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bac) {
            ctx->pc = 0x243C10u;
            goto label_243c10;
        }
    }
    ctx->pc = 0x243BB4u;
label_243bb4:
    // 0x243bb4: 0xc089bfc  jal         func_226FF0
label_243bb8:
    if (ctx->pc == 0x243BB8u) {
        ctx->pc = 0x243BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BB4u;
        // 0x243bb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BBCu;
        goto label_243bbc;
    }
    ctx->pc = 0x243BB4u;
    SET_GPR_U32(ctx, 31, 0x243BBCu);
    ctx->pc = 0x243BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BB4u;
    // 0x243bb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x243BB4u, 0x243BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BBCu;
label_243bbc:
    // 0x243bbc: 0xc0e57ce  jal         func_395F38
label_243bc0:
    if (ctx->pc == 0x243BC0u) {
        ctx->pc = 0x243BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BBCu;
        // 0x243bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BC4u;
        goto label_243bc4;
    }
    ctx->pc = 0x243BBCu;
    SET_GPR_U32(ctx, 31, 0x243BC4u);
    ctx->pc = 0x243BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BBCu;
    // 0x243bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x243BBCu, 0x243BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BC4u;
label_243bc4:
    // 0x243bc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x243bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243bc8:
    // 0x243bc8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_243bcc:
    if (ctx->pc == 0x243BCCu) {
        ctx->pc = 0x243BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BC8u;
        // 0x243bcc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BD0u;
        goto label_243bd0;
    }
    ctx->pc = 0x243BC8u;
    {
        const bool branch_taken_0x243bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BC8u;
        // 0x243bcc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bc8) {
            ctx->pc = 0x243BF8u;
            goto label_243bf8;
        }
    }
    ctx->pc = 0x243BD0u;
label_243bd0:
    // 0x243bd0: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x243bd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_243bd4:
    // 0x243bd4: 0xc0e44cc  jal         func_391330
label_243bd8:
    if (ctx->pc == 0x243BD8u) {
        ctx->pc = 0x243BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BD4u;
        // 0x243bd8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BDCu;
        goto label_243bdc;
    }
    ctx->pc = 0x243BD4u;
    SET_GPR_U32(ctx, 31, 0x243BDCu);
    ctx->pc = 0x243BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BD4u;
    // 0x243bd8: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x243BD4u, 0x243BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BDCu;
label_243bdc:
    // 0x243bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x243bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243be0:
    // 0x243be0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x243be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243be4:
    // 0x243be4: 0x80820087  lb          $v0, 0x87($a0)
    ctx->pc = 0x243be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 135)));
label_243be8:
    // 0x243be8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_243bec:
    if (ctx->pc == 0x243BECu) {
        ctx->pc = 0x243BF0u;
        goto label_243bf0;
    }
    ctx->pc = 0x243BE8u;
    {
        const bool branch_taken_0x243be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x243be8) {
            ctx->pc = 0x243BF8u;
            goto label_243bf8;
        }
    }
    ctx->pc = 0x243BF0u;
label_243bf0:
    // 0x243bf0: 0x8082005a  lb          $v0, 0x5A($a0)
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_243bf4:
    // 0x243bf4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x243bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_243bf8:
    // 0x243bf8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_243bfc:
    if (ctx->pc == 0x243BFCu) {
        ctx->pc = 0x243C00u;
        goto label_243c00;
    }
    ctx->pc = 0x243BF8u;
    {
        const bool branch_taken_0x243bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x243bf8) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243C00u;
label_243c00:
    // 0x243c00: 0xc095fce  jal         func_257F38
label_243c04:
    if (ctx->pc == 0x243C04u) {
        ctx->pc = 0x243C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C00u;
        // 0x243c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C08u;
        goto label_243c08;
    }
    ctx->pc = 0x243C00u;
    SET_GPR_U32(ctx, 31, 0x243C08u);
    ctx->pc = 0x243C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C00u;
    // 0x243c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x243C00u, 0x243C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C08u;
label_243c08:
    // 0x243c08: 0x10000008  b           . + 4 + (0x8 << 2)
label_243c0c:
    if (ctx->pc == 0x243C0Cu) {
        ctx->pc = 0x243C10u;
        goto label_243c10;
    }
    ctx->pc = 0x243C08u;
    {
        const bool branch_taken_0x243c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c08) {
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243C10u;
label_243c10:
    // 0x243c10: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_243c14:
    // 0x243c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243c18:
    // 0x243c18: 0x0  nop
    ctx->pc = 0x243c18u;
    // NOP
label_243c1c:
    // 0x243c1c: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x243c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c20:
    // 0x243c20: 0x0  nop
    ctx->pc = 0x243c20u;
    // NOP
label_243c24:
    // 0x243c24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_243c28:
    if (ctx->pc == 0x243C28u) {
        ctx->pc = 0x243C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C24u;
        // 0x243c28: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C2Cu;
        goto label_243c2c;
    }
    ctx->pc = 0x243C24u;
    {
        const bool branch_taken_0x243c24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c24) {
            ctx->pc = 0x243C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243C24u;
            // 0x243c28: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243C2Cu;
            goto label_243c2c;
        }
    }
    ctx->pc = 0x243C2Cu;
label_243c2c:
    // 0x243c2c: 0xc0e87c0  jal         func_3A1F00
label_243c30:
    if (ctx->pc == 0x243C30u) {
        ctx->pc = 0x243C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C2Cu;
        // 0x243c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C34u;
        goto label_243c34;
    }
    ctx->pc = 0x243C2Cu;
    SET_GPR_U32(ctx, 31, 0x243C34u);
    ctx->pc = 0x243C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C2Cu;
    // 0x243c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x243C2Cu, 0x243C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C34u;
label_243c34:
    // 0x243c34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x243c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_243c38:
    // 0x243c38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x243c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_243c3c:
    // 0x243c3c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x243c3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243c40:
    // 0x243c40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x243c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243c44:
    // 0x243c44: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x243c44u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_243c48:
    // 0x243c48: 0x4a0003bf  vwaitq
    ctx->pc = 0x243c48u;
    // VWAITQ (Q already resolved in this runtime)
label_243c4c:
    // 0x243c4c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x243c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243c50:
    // 0x243c50: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x243c50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_243c54:
    // 0x243c54: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x243c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_243c58:
    // 0x243c58: 0x0  nop
    ctx->pc = 0x243c58u;
    // NOP
label_243c5c:
    // 0x243c5c: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x243c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c60:
    // 0x243c60: 0x0  nop
    ctx->pc = 0x243c60u;
    // NOP
label_243c64:
    // 0x243c64: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_243c68:
    if (ctx->pc == 0x243C68u) {
        ctx->pc = 0x243C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C64u;
        // 0x243c68: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C6Cu;
        goto label_243c6c;
    }
    ctx->pc = 0x243C64u;
    {
        const bool branch_taken_0x243c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C64u;
        // 0x243c68: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c64) {
            ctx->pc = 0x243D40u;
            goto label_243d40;
        }
    }
    ctx->pc = 0x243C6Cu;
label_243c6c:
    // 0x243c6c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_243c70:
    // 0x243c70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_243c74:
    if (ctx->pc == 0x243C74u) {
        ctx->pc = 0x243C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C70u;
        // 0x243c74: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C78u;
        goto label_243c78;
    }
    ctx->pc = 0x243C70u;
    {
        const bool branch_taken_0x243c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C70u;
        // 0x243c74: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c70) {
            ctx->pc = 0x243C80u;
            goto label_243c80;
        }
    }
    ctx->pc = 0x243C78u;
label_243c78:
    // 0x243c78: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_243c7c:
    if (ctx->pc == 0x243C7Cu) {
        ctx->pc = 0x243C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C78u;
        // 0x243c7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C80u;
        goto label_243c80;
    }
    ctx->pc = 0x243C78u;
    {
        const bool branch_taken_0x243c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C78u;
        // 0x243c7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c78) {
            ctx->pc = 0x243D14u;
            goto label_243d14;
        }
    }
    ctx->pc = 0x243C80u;
label_243c80:
    // 0x243c80: 0xc088e98  jal         func_223A60
label_243c84:
    if (ctx->pc == 0x243C84u) {
        ctx->pc = 0x243C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C80u;
        // 0x243c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C88u;
        goto label_243c88;
    }
    ctx->pc = 0x243C80u;
    SET_GPR_U32(ctx, 31, 0x243C88u);
    ctx->pc = 0x243C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C80u;
    // 0x243c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x243C80u, 0x243C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C88u;
label_243c88:
    // 0x243c88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_243c8c:
    if (ctx->pc == 0x243C8Cu) {
        ctx->pc = 0x243C90u;
        goto label_243c90;
    }
    ctx->pc = 0x243C88u;
    {
        const bool branch_taken_0x243c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c88) {
            ctx->pc = 0x243CA0u;
            goto label_243ca0;
        }
    }
    ctx->pc = 0x243C90u;
label_243c90:
    // 0x243c90: 0xc088ea6  jal         func_223A98
label_243c94:
    if (ctx->pc == 0x243C94u) {
        ctx->pc = 0x243C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C90u;
        // 0x243c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C98u;
        goto label_243c98;
    }
    ctx->pc = 0x243C90u;
    SET_GPR_U32(ctx, 31, 0x243C98u);
    ctx->pc = 0x243C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C90u;
    // 0x243c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x243C90u, 0x243C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C98u;
label_243c98:
    // 0x243c98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_243c9c:
    if (ctx->pc == 0x243C9Cu) {
        ctx->pc = 0x243C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C98u;
        // 0x243c9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CA0u;
        goto label_243ca0;
    }
    ctx->pc = 0x243C98u;
    {
        const bool branch_taken_0x243c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C98u;
        // 0x243c9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c98) {
            ctx->pc = 0x243D14u;
            goto label_243d14;
        }
    }
    ctx->pc = 0x243CA0u;
label_243ca0:
    // 0x243ca0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x243ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_243ca4:
    // 0x243ca4: 0x0  nop
    ctx->pc = 0x243ca4u;
    // NOP
label_243ca8:
    // 0x243ca8: 0x4615b832  c.eq.s      $f23, $f21
    ctx->pc = 0x243ca8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243cac:
    // 0x243cac: 0x0  nop
    ctx->pc = 0x243cacu;
    // NOP
label_243cb0:
    // 0x243cb0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_243cb4:
    if (ctx->pc == 0x243CB4u) {
        ctx->pc = 0x243CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CB0u;
        // 0x243cb4: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CB8u;
        goto label_243cb8;
    }
    ctx->pc = 0x243CB0u;
    {
        const bool branch_taken_0x243cb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CB0u;
        // 0x243cb4: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cb0) {
            ctx->pc = 0x243D10u;
            goto label_243d10;
        }
    }
    ctx->pc = 0x243CB8u;
label_243cb8:
    // 0x243cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243cbc:
    // 0x243cbc: 0xc089998  jal         func_226660
label_243cc0:
    if (ctx->pc == 0x243CC0u) {
        ctx->pc = 0x243CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CBCu;
        // 0x243cc0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CC4u;
        goto label_243cc4;
    }
    ctx->pc = 0x243CBCu;
    SET_GPR_U32(ctx, 31, 0x243CC4u);
    ctx->pc = 0x243CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CBCu;
    // 0x243cc0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x243CBCu, 0x243CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CC4u;
label_243cc4:
    // 0x243cc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_243cc8:
    if (ctx->pc == 0x243CC8u) {
        ctx->pc = 0x243CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CC4u;
        // 0x243cc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CCCu;
        goto label_243ccc;
    }
    ctx->pc = 0x243CC4u;
    {
        const bool branch_taken_0x243cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CC4u;
        // 0x243cc8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cc4) {
            ctx->pc = 0x243D14u;
            goto label_243d14;
        }
    }
    ctx->pc = 0x243CCCu;
label_243ccc:
    // 0x243ccc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_243cd0:
    // 0x243cd0: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x243cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_243cd4:
    // 0x243cd4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x243cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_243cd8:
    // 0x243cd8: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_243cdc:
    // 0x243cdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x243cdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_243ce0:
    // 0x243ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ce4:
    // 0x243ce4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x243ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_243ce8:
    // 0x243ce8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x243ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_243cec:
    // 0x243cec: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x243cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_243cf0:
    // 0x243cf0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x243cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_243cf4:
    // 0x243cf4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x243cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_243cf8:
    // 0x243cf8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x243cf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_243cfc:
    // 0x243cfc: 0xc0899aa  jal         func_2266A8
label_243d00:
    if (ctx->pc == 0x243D00u) {
        ctx->pc = 0x243D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CFCu;
        // 0x243d00: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D04u;
        goto label_243d04;
    }
    ctx->pc = 0x243CFCu;
    SET_GPR_U32(ctx, 31, 0x243D04u);
    ctx->pc = 0x243D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CFCu;
    // 0x243d00: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x243CFCu, 0x243D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D04u;
label_243d04:
    // 0x243d04: 0xe635029c  swc1        $f21, 0x29C($s1)
    ctx->pc = 0x243d04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
label_243d08:
    // 0x243d08: 0x1000021a  b           . + 4 + (0x21A << 2)
label_243d0c:
    if (ctx->pc == 0x243D0Cu) {
        ctx->pc = 0x243D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D08u;
        // 0x243d0c: 0xe6350298  swc1        $f21, 0x298($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 664), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D10u;
        goto label_243d10;
    }
    ctx->pc = 0x243D08u;
    {
        const bool branch_taken_0x243d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D08u;
        // 0x243d0c: 0xe6350298  swc1        $f21, 0x298($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d08) {
            ctx->pc = 0x244574u;
            goto label_244574;
        }
    }
    ctx->pc = 0x243D10u;
label_243d10:
    // 0x243d10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x243d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_243d14:
    // 0x243d14: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x243d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_243d18:
    // 0x243d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243d1c:
    // 0x243d1c: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x243d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243d20:
    // 0x243d20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x243d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_243d24:
    // 0x243d24: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x243d24u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_243d28:
    // 0x243d28: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x243d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243d2c:
    // 0x243d2c: 0x0  nop
    ctx->pc = 0x243d2cu;
    // NOP
label_243d30:
    // 0x243d30: 0x4503004b  bc1tl       . + 4 + (0x4B << 2)
label_243d34:
    if (ctx->pc == 0x243D34u) {
        ctx->pc = 0x243D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D30u;
        // 0x243d34: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D38u;
        goto label_243d38;
    }
    ctx->pc = 0x243D30u;
    {
        const bool branch_taken_0x243d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243d30) {
            ctx->pc = 0x243D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243D30u;
            // 0x243d34: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243E60u;
            goto label_243e60;
        }
    }
    ctx->pc = 0x243D38u;
label_243d38:
    // 0x243d38: 0x1000004a  b           . + 4 + (0x4A << 2)
label_243d3c:
    if (ctx->pc == 0x243D3Cu) {
        ctx->pc = 0x243D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D38u;
        // 0x243d3c: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D40u;
        goto label_243d40;
    }
    ctx->pc = 0x243D38u;
    {
        const bool branch_taken_0x243d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D38u;
        // 0x243d3c: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d38) {
            ctx->pc = 0x243E64u;
            goto label_243e64;
        }
    }
    ctx->pc = 0x243D40u;
label_243d40:
    // 0x243d40: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x243d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243d44:
    // 0x243d44: 0x0  nop
    ctx->pc = 0x243d44u;
    // NOP
label_243d48:
    // 0x243d48: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_243d4c:
    if (ctx->pc == 0x243D4Cu) {
        ctx->pc = 0x243D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D48u;
        // 0x243d4c: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D50u;
        goto label_243d50;
    }
    ctx->pc = 0x243D48u;
    {
        const bool branch_taken_0x243d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D48u;
        // 0x243d4c: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d48) {
            ctx->pc = 0x243E64u;
            goto label_243e64;
        }
    }
    ctx->pc = 0x243D50u;
label_243d50:
    // 0x243d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243d54:
    // 0x243d54: 0x0  nop
    ctx->pc = 0x243d54u;
    // NOP
label_243d58:
    // 0x243d58: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x243d58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243d5c:
    // 0x243d5c: 0x0  nop
    ctx->pc = 0x243d5cu;
    // NOP
label_243d60:
    // 0x243d60: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_243d64:
    if (ctx->pc == 0x243D64u) {
        ctx->pc = 0x243D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D60u;
        // 0x243d64: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D68u;
        goto label_243d68;
    }
    ctx->pc = 0x243D60u;
    {
        const bool branch_taken_0x243d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D60u;
        // 0x243d64: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d60) {
            ctx->pc = 0x243E18u;
            goto label_243e18;
        }
    }
    ctx->pc = 0x243D68u;
label_243d68:
    // 0x243d68: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x243d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_243d6c:
    // 0x243d6c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x243d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_243d70:
    // 0x243d70: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_243d74:
    // 0x243d74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_243d78:
    if (ctx->pc == 0x243D78u) {
        ctx->pc = 0x243D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D74u;
        // 0x243d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D7Cu;
        goto label_243d7c;
    }
    ctx->pc = 0x243D74u;
    {
        const bool branch_taken_0x243d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D74u;
        // 0x243d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d74) {
            ctx->pc = 0x243D94u;
            goto label_243d94;
        }
    }
    ctx->pc = 0x243D7Cu;
label_243d7c:
    // 0x243d7c: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x243d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_243d80:
    // 0x243d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_243d84:
    if (ctx->pc == 0x243D84u) {
        ctx->pc = 0x243D88u;
        goto label_243d88;
    }
    ctx->pc = 0x243D80u;
    {
        const bool branch_taken_0x243d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d80) {
            ctx->pc = 0x243D94u;
            goto label_243d94;
        }
    }
    ctx->pc = 0x243D88u;
label_243d88:
    // 0x243d88: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x243d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_243d8c:
    // 0x243d8c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x243d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_243d90:
    // 0x243d90: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x243d90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_243d94:
    // 0x243d94: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_243d98:
    if (ctx->pc == 0x243D98u) {
        ctx->pc = 0x243D9Cu;
        goto label_243d9c;
    }
    ctx->pc = 0x243D94u;
    {
        const bool branch_taken_0x243d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d94) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243D9Cu;
label_243d9c:
    // 0x243d9c: 0xc08859c  jal         func_221670
label_243da0:
    if (ctx->pc == 0x243DA0u) {
        ctx->pc = 0x243DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D9Cu;
        // 0x243da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DA4u;
        goto label_243da4;
    }
    ctx->pc = 0x243D9Cu;
    SET_GPR_U32(ctx, 31, 0x243DA4u);
    ctx->pc = 0x243DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D9Cu;
    // 0x243da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x243D9Cu, 0x243DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DA4u;
label_243da4:
    // 0x243da4: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x243da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243da8:
    // 0x243da8: 0x0  nop
    ctx->pc = 0x243da8u;
    // NOP
label_243dac:
    // 0x243dac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_243db0:
    if (ctx->pc == 0x243DB0u) {
        ctx->pc = 0x243DB4u;
        goto label_243db4;
    }
    ctx->pc = 0x243DACu;
    {
        const bool branch_taken_0x243dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243dac) {
            ctx->pc = 0x243DE0u;
            goto label_243de0;
        }
    }
    ctx->pc = 0x243DB4u;
label_243db4:
    // 0x243db4: 0x8282000c  lb          $v0, 0xC($s4)
    ctx->pc = 0x243db4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_243db8:
    // 0x243db8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_243dbc:
    if (ctx->pc == 0x243DBCu) {
        ctx->pc = 0x243DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB8u;
        // 0x243dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DC0u;
        goto label_243dc0;
    }
    ctx->pc = 0x243DB8u;
    {
        const bool branch_taken_0x243db8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x243DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB8u;
        // 0x243dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243db8) {
            ctx->pc = 0x243DD0u;
            goto label_243dd0;
        }
    }
    ctx->pc = 0x243DC0u;
label_243dc0:
    // 0x243dc0: 0xc0899aa  jal         func_2266A8
label_243dc4:
    if (ctx->pc == 0x243DC4u) {
        ctx->pc = 0x243DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DC0u;
        // 0x243dc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DC8u;
        goto label_243dc8;
    }
    ctx->pc = 0x243DC0u;
    SET_GPR_U32(ctx, 31, 0x243DC8u);
    ctx->pc = 0x243DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DC0u;
    // 0x243dc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x243DC0u, 0x243DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DC8u;
label_243dc8:
    // 0x243dc8: 0x1000000d  b           . + 4 + (0xD << 2)
label_243dcc:
    if (ctx->pc == 0x243DCCu) {
        ctx->pc = 0x243DD0u;
        goto label_243dd0;
    }
    ctx->pc = 0x243DC8u;
    {
        const bool branch_taken_0x243dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243dc8) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243DD0u;
label_243dd0:
    // 0x243dd0: 0xc0899aa  jal         func_2266A8
label_243dd4:
    if (ctx->pc == 0x243DD4u) {
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD0u;
        // 0x243dd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DD8u;
        goto label_243dd8;
    }
    ctx->pc = 0x243DD0u;
    SET_GPR_U32(ctx, 31, 0x243DD8u);
    ctx->pc = 0x243DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DD0u;
    // 0x243dd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x243DD0u, 0x243DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DD8u;
label_243dd8:
    // 0x243dd8: 0x10000009  b           . + 4 + (0x9 << 2)
label_243ddc:
    if (ctx->pc == 0x243DDCu) {
        ctx->pc = 0x243DE0u;
        goto label_243de0;
    }
    ctx->pc = 0x243DD8u;
    {
        const bool branch_taken_0x243dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243dd8) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243DE0u;
label_243de0:
    // 0x243de0: 0xc088574  jal         func_2215D0
label_243de4:
    if (ctx->pc == 0x243DE4u) {
        ctx->pc = 0x243DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DE0u;
        // 0x243de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DE8u;
        goto label_243de8;
    }
    ctx->pc = 0x243DE0u;
    SET_GPR_U32(ctx, 31, 0x243DE8u);
    ctx->pc = 0x243DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DE0u;
    // 0x243de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215D0u, 0x243DE0u, 0x243DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DE8u;
label_243de8:
    // 0x243de8: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x243de8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243dec:
    // 0x243dec: 0x0  nop
    ctx->pc = 0x243decu;
    // NOP
label_243df0:
    // 0x243df0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243df4:
    if (ctx->pc == 0x243DF4u) {
        ctx->pc = 0x243DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF0u;
        // 0x243df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DF8u;
        goto label_243df8;
    }
    ctx->pc = 0x243DF0u;
    {
        const bool branch_taken_0x243df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF0u;
        // 0x243df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243df0) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243DF8u;
label_243df8:
    // 0x243df8: 0xc0899aa  jal         func_2266A8
label_243dfc:
    if (ctx->pc == 0x243DFCu) {
        ctx->pc = 0x243DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF8u;
        // 0x243dfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E00u;
        goto label_243e00;
    }
    ctx->pc = 0x243DF8u;
    SET_GPR_U32(ctx, 31, 0x243E00u);
    ctx->pc = 0x243DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DF8u;
    // 0x243dfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x243DF8u, 0x243E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E00u;
label_243e00:
    // 0x243e00: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_243e04:
    // 0x243e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243e08:
    // 0x243e08: 0x0  nop
    ctx->pc = 0x243e08u;
    // NOP
label_243e0c:
    // 0x243e0c: 0x4600bde9  min.s       $f23, $f23, $f0
    ctx->pc = 0x243e0cu;
    ctx->f[23] = std::min(ctx->f[23], ctx->f[0]);
label_243e10:
    // 0x243e10: 0x10000014  b           . + 4 + (0x14 << 2)
label_243e14:
    if (ctx->pc == 0x243E14u) {
        ctx->pc = 0x243E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E10u;
        // 0x243e14: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E18u;
        goto label_243e18;
    }
    ctx->pc = 0x243E10u;
    {
        const bool branch_taken_0x243e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E10u;
        // 0x243e14: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e10) {
            ctx->pc = 0x243E64u;
            goto label_243e64;
        }
    }
    ctx->pc = 0x243E18u;
label_243e18:
    // 0x243e18: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x243e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_243e1c:
    // 0x243e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243e20:
    // 0x243e20: 0xc44302cc  lwc1        $f3, 0x2CC($v0)
    ctx->pc = 0x243e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243e24:
    // 0x243e24: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_243e28:
    // 0x243e28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x243e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_243e2c:
    // 0x243e2c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x243e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_243e30:
    // 0x243e30: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x243e30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_243e34:
    // 0x243e34: 0x4614b841  sub.s       $f1, $f23, $f20
    ctx->pc = 0x243e34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_243e38:
    // 0x243e38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x243e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e3c:
    // 0x243e3c: 0x0  nop
    ctx->pc = 0x243e3cu;
    // NOP
label_243e40:
    // 0x243e40: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243e44:
    if (ctx->pc == 0x243E44u) {
        ctx->pc = 0x243E48u;
        goto label_243e48;
    }
    ctx->pc = 0x243E40u;
    {
        const bool branch_taken_0x243e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243e40) {
            ctx->pc = 0x243E5Cu;
            goto label_243e5c;
        }
    }
    ctx->pc = 0x243E48u;
label_243e48:
    // 0x243e48: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_243e4c:
    // 0x243e4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243e50:
    // 0x243e50: 0x0  nop
    ctx->pc = 0x243e50u;
    // NOP
label_243e54:
    // 0x243e54: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x243e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_243e58:
    // 0x243e58: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x243e58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_243e5c:
    // 0x243e5c: 0x4614bde9  min.s       $f23, $f23, $f20
    ctx->pc = 0x243e5cu;
    ctx->f[23] = std::min(ctx->f[23], ctx->f[20]);
label_243e60:
    // 0x243e60: 0x3c05110c  lui         $a1, 0x110C
    ctx->pc = 0x243e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
label_243e64:
    // 0x243e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243e68:
    // 0x243e68: 0xc089998  jal         func_226660
label_243e6c:
    if (ctx->pc == 0x243E6Cu) {
        ctx->pc = 0x243E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E68u;
        // 0x243e6c: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E70u;
        goto label_243e70;
    }
    ctx->pc = 0x243E68u;
    SET_GPR_U32(ctx, 31, 0x243E70u);
    ctx->pc = 0x243E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E68u;
    // 0x243e6c: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x243E68u, 0x243E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E70u;
label_243e70:
    // 0x243e70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_243e74:
    if (ctx->pc == 0x243E74u) {
        ctx->pc = 0x243E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E70u;
        // 0x243e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E78u;
        goto label_243e78;
    }
    ctx->pc = 0x243E70u;
    {
        const bool branch_taken_0x243e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E70u;
        // 0x243e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e70) {
            ctx->pc = 0x243E98u;
            goto label_243e98;
        }
    }
    ctx->pc = 0x243E78u;
label_243e78:
    // 0x243e78: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x243e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_243e7c:
    // 0x243e7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x243e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_243e80:
    // 0x243e80: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_243e84:
    // 0x243e84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_243e88:
    if (ctx->pc == 0x243E88u) {
        ctx->pc = 0x243E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E84u;
        // 0x243e88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E8Cu;
        goto label_243e8c;
    }
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x243E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E84u;
        // 0x243e88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243E94u;
            goto label_243e94;
        }
    }
    ctx->pc = 0x243E8Cu;
label_243e8c:
    // 0x243e8c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_243e90:
    if (ctx->pc == 0x243E90u) {
        ctx->pc = 0x243E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E8Cu;
        // 0x243e90: 0x92220333  lbu         $v0, 0x333($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E94u;
        goto label_243e94;
    }
    ctx->pc = 0x243E8Cu;
    {
        const bool branch_taken_0x243e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x243e8c) {
            ctx->pc = 0x243E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E8Cu;
            // 0x243e90: 0x92220333  lbu         $v0, 0x333($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EA8u;
            goto label_243ea8;
        }
    }
    ctx->pc = 0x243E94u;
label_243e94:
    // 0x243e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x243e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_243e98:
    // 0x243e98: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_243e9c:
    // 0x243e9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x243e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_243ea0:
    // 0x243ea0: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x243ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_243ea4:
    // 0x243ea4: 0x92220333  lbu         $v0, 0x333($s1)
    ctx->pc = 0x243ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
label_243ea8:
    // 0x243ea8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x243ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_243eac:
    // 0x243eac: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_243eb0:
    if (ctx->pc == 0x243EB0u) {
        ctx->pc = 0x243EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EACu;
        // 0x243eb0: 0x7a830090  lq          $v1, 0x90($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EB4u;
        goto label_243eb4;
    }
    ctx->pc = 0x243EACu;
    {
        const bool branch_taken_0x243eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243eac) {
            ctx->pc = 0x243EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243EACu;
            // 0x243eb0: 0x7a830090  lq          $v1, 0x90($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F1Cu;
            goto label_243f1c;
        }
    }
    ctx->pc = 0x243EB4u;
label_243eb4:
    // 0x243eb4: 0x3c05310c  lui         $a1, 0x310C
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12556 << 16));
label_243eb8:
    // 0x243eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ebc:
    // 0x243ebc: 0xc089998  jal         func_226660
label_243ec0:
    if (ctx->pc == 0x243EC0u) {
        ctx->pc = 0x243EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EBCu;
        // 0x243ec0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EC4u;
        goto label_243ec4;
    }
    ctx->pc = 0x243EBCu;
    SET_GPR_U32(ctx, 31, 0x243EC4u);
    ctx->pc = 0x243EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EBCu;
    // 0x243ec0: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x243EBCu, 0x243EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EC4u;
label_243ec4:
    // 0x243ec4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_243ec8:
    if (ctx->pc == 0x243EC8u) {
        ctx->pc = 0x243EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC4u;
        // 0x243ec8: 0x7a830090  lq          $v1, 0x90($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ECCu;
        goto label_243ecc;
    }
    ctx->pc = 0x243EC4u;
    {
        const bool branch_taken_0x243ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ec4) {
            ctx->pc = 0x243EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243EC4u;
            // 0x243ec8: 0x7a830090  lq          $v1, 0x90($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F1Cu;
            goto label_243f1c;
        }
    }
    ctx->pc = 0x243ECCu;
label_243ecc:
    // 0x243ecc: 0xc6940110  lwc1        $f20, 0x110($s4)
    ctx->pc = 0x243eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_243ed0:
    // 0x243ed0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x243ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_243ed4:
    // 0x243ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243ed8:
    // 0x243ed8: 0xc0cd790  jal         func_335E40
label_243edc:
    if (ctx->pc == 0x243EDCu) {
        ctx->pc = 0x243EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED8u;
        // 0x243edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EE0u;
        goto label_243ee0;
    }
    ctx->pc = 0x243ED8u;
    SET_GPR_U32(ctx, 31, 0x243EE0u);
    ctx->pc = 0x243EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243ED8u;
    // 0x243edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x243ED8u, 0x243EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EE0u;
label_243ee0:
    // 0x243ee0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x243ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_243ee4:
    // 0x243ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243ee8:
    // 0x243ee8: 0xc136b24  jal         func_4DAC90
label_243eec:
    if (ctx->pc == 0x243EECu) {
        ctx->pc = 0x243EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EE8u;
        // 0x243eec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EF0u;
        goto label_243ef0;
    }
    ctx->pc = 0x243EE8u;
    SET_GPR_U32(ctx, 31, 0x243EF0u);
    ctx->pc = 0x243EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EE8u;
    // 0x243eec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x243EE8u, 0x243EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EF0u;
label_243ef0:
    // 0x243ef0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x243ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243ef4:
    // 0x243ef4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_243ef8:
    // 0x243ef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_243efc:
    // 0x243efc: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x243efcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_243f00:
    // 0x243f00: 0xc0cd7a8  jal         func_335EA0
label_243f04:
    if (ctx->pc == 0x243F04u) {
        ctx->pc = 0x243F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F00u;
        // 0x243f04: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F08u;
        goto label_243f08;
    }
    ctx->pc = 0x243F00u;
    SET_GPR_U32(ctx, 31, 0x243F08u);
    ctx->pc = 0x243F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F00u;
    // 0x243f04: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x243F00u, 0x243F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F08u;
label_243f08:
    // 0x243f08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x243f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_243f0c:
    // 0x243f0c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x243f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_243f10:
    // 0x243f10: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x243f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_243f14:
    // 0x243f14: 0x10000197  b           . + 4 + (0x197 << 2)
label_243f18:
    if (ctx->pc == 0x243F18u) {
        ctx->pc = 0x243F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F14u;
        // 0x243f18: 0xae200298  sw          $zero, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F1Cu;
        goto label_243f1c;
    }
    ctx->pc = 0x243F14u;
    {
        const bool branch_taken_0x243f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F14u;
        // 0x243f18: 0xae200298  sw          $zero, 0x298($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f14) {
            ctx->pc = 0x244574u;
            goto label_244574;
        }
    }
    ctx->pc = 0x243F1Cu;
label_243f1c:
    // 0x243f1c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x243f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_243f20:
    // 0x243f20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x243f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_243f24:
    // 0x243f24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x243f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243f28:
    // 0x243f28: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x243f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_243f2c:
    // 0x243f2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x243f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243f30:
    // 0x243f30: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x243f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_243f34:
    // 0x243f34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_243f38:
    // 0x243f38: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_243f3c:
    // 0x243f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x243f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_243f40:
    // 0x243f40: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x243f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_243f44:
    // 0x243f44: 0xc136afa  jal         func_4DABE8
label_243f48:
    if (ctx->pc == 0x243F48u) {
        ctx->pc = 0x243F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F44u;
        // 0x243f48: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F4Cu;
        goto label_243f4c;
    }
    ctx->pc = 0x243F44u;
    SET_GPR_U32(ctx, 31, 0x243F4Cu);
    ctx->pc = 0x243F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F44u;
    // 0x243f48: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x243F44u, 0x243F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F4Cu;
label_243f4c:
    // 0x243f4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x243f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_243f50:
    // 0x243f50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x243f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_243f54:
    // 0x243f54: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x243f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243f58:
    // 0x243f58: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x243f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243f5c:
    // 0x243f5c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x243f5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_243f60:
    // 0x243f60: 0x4a0003bf  vwaitq
    ctx->pc = 0x243f60u;
    // VWAITQ (Q already resolved in this runtime)
label_243f64:
    // 0x243f64: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x243f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_243f68:
    // 0x243f68: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x243f68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_243f6c:
    // 0x243f6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x243f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243f70:
    // 0x243f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243f74:
    // 0x243f74: 0x0  nop
    ctx->pc = 0x243f74u;
    // NOP
label_243f78:
    // 0x243f78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243f78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243f7c:
    // 0x243f7c: 0x0  nop
    ctx->pc = 0x243f7cu;
    // NOP
label_243f80:
    // 0x243f80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_243f84:
    if (ctx->pc == 0x243F84u) {
        ctx->pc = 0x243F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F80u;
        // 0x243f84: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F88u;
        goto label_243f88;
    }
    ctx->pc = 0x243F80u;
    {
        const bool branch_taken_0x243f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F80u;
        // 0x243f84: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f80) {
            ctx->pc = 0x243FA0u;
            goto label_243fa0;
        }
    }
    ctx->pc = 0x243F88u;
label_243f88:
    // 0x243f88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x243f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_243f8c:
    // 0x243f8c: 0x46000dc6  mov.s       $f23, $f1
    ctx->pc = 0x243f8cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[1]);
label_243f90:
    // 0x243f90: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x243f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_243f94:
    // 0x243f94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x243f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_243f98:
    // 0x243f98: 0x1000000a  b           . + 4 + (0xA << 2)
label_243f9c:
    if (ctx->pc == 0x243F9Cu) {
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F98u;
        // 0x243f9c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FA0u;
        goto label_243fa0;
    }
    ctx->pc = 0x243F98u;
    {
        const bool branch_taken_0x243f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F98u;
        // 0x243f9c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f98) {
            ctx->pc = 0x243FC4u;
            goto label_243fc4;
        }
    }
    ctx->pc = 0x243FA0u;
label_243fa0:
    // 0x243fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_243fa4:
    // 0x243fa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243fa8:
    // 0x243fa8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_243fac:
    // 0x243fac: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x243facu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_243fb0:
    // 0x243fb0: 0xc136b24  jal         func_4DAC90
label_243fb4:
    if (ctx->pc == 0x243FB4u) {
        ctx->pc = 0x243FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FB0u;
        // 0x243fb4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FB8u;
        goto label_243fb8;
    }
    ctx->pc = 0x243FB0u;
    SET_GPR_U32(ctx, 31, 0x243FB8u);
    ctx->pc = 0x243FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FB0u;
    // 0x243fb4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x243FB0u, 0x243FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FB8u;
label_243fb8:
    // 0x243fb8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x243fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_243fbc:
    // 0x243fbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x243fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_243fc0:
    // 0x243fc0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x243fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_243fc4:
    // 0x243fc4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x243fc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_243fc8:
    // 0x243fc8: 0x26b64b00  addiu       $s6, $s5, 0x4B00
    ctx->pc = 0x243fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_243fcc:
    // 0x243fcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x243fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_243fd0:
    // 0x243fd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243fd4:
    // 0x243fd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x243fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_243fd8:
    // 0x243fd8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_243fdc:
    // 0x243fdc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x243fdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_243fe0:
    // 0x243fe0: 0xc0cd8ec  jal         func_3363B0
label_243fe4:
    if (ctx->pc == 0x243FE4u) {
        ctx->pc = 0x243FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FE0u;
        // 0x243fe4: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FE8u;
        goto label_243fe8;
    }
    ctx->pc = 0x243FE0u;
    SET_GPR_U32(ctx, 31, 0x243FE8u);
    ctx->pc = 0x243FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FE0u;
    // 0x243fe4: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x243FE0u, 0x243FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FE8u;
label_243fe8:
    // 0x243fe8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x243fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_243fec:
    // 0x243fec: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x243fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_243ff0:
    // 0x243ff0: 0xc0cd5ea  jal         func_3357A8
label_243ff4:
    if (ctx->pc == 0x243FF4u) {
        ctx->pc = 0x243FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FF0u;
        // 0x243ff4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FF8u;
        goto label_243ff8;
    }
    ctx->pc = 0x243FF0u;
    SET_GPR_U32(ctx, 31, 0x243FF8u);
    ctx->pc = 0x243FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FF0u;
    // 0x243ff4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x243FF0u, 0x243FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FF8u;
label_243ff8:
    // 0x243ff8: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x243ff8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_243ffc:
    // 0x243ffc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x243ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_244000:
    // 0x244000: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_244004:
    // 0x244004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_244008:
    // 0x244008: 0xc6800110  lwc1        $f0, 0x110($s4)
    ctx->pc = 0x244008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24400c:
    // 0x24400c: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x24400cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_244010:
    // 0x244010: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x244010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244014:
    // 0x244014: 0x0  nop
    ctx->pc = 0x244014u;
    // NOP
label_244018:
    // 0x244018: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_24401c:
    if (ctx->pc == 0x24401Cu) {
        ctx->pc = 0x244020u;
        goto label_244020;
    }
    ctx->pc = 0x244018u;
    {
        const bool branch_taken_0x244018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244018) {
            ctx->pc = 0x244034u;
            goto label_244034;
        }
    }
    ctx->pc = 0x244020u;
label_244020:
    // 0x244020: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_244024:
    // 0x244024: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_244028:
    // 0x244028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24402c:
    // 0x24402c: 0x0  nop
    ctx->pc = 0x24402cu;
    // NOP
label_244030:
    // 0x244030: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x244030u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_244034:
    // 0x244034: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x244034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_244038:
    // 0x244038: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24403c:
    // 0x24403c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24403cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244040:
    // 0x244040: 0x0  nop
    ctx->pc = 0x244040u;
    // NOP
label_244044:
    // 0x244044: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x244044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244048:
    // 0x244048: 0x0  nop
    ctx->pc = 0x244048u;
    // NOP
label_24404c:
    // 0x24404c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_244050:
    if (ctx->pc == 0x244050u) {
        ctx->pc = 0x244050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24404Cu;
        // 0x244050: 0x461ab601  sub.s       $f24, $f22, $f26 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244054u;
        goto label_244054;
    }
    ctx->pc = 0x24404Cu;
    {
        const bool branch_taken_0x24404c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24404c) {
            ctx->pc = 0x244050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24404Cu;
            // 0x244050: 0x461ab601  sub.s       $f24, $f22, $f26 (Delay Slot)
            ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24406Cu;
            goto label_24406c;
        }
    }
    ctx->pc = 0x244054u;
label_244054:
    // 0x244054: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_244058:
    // 0x244058: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_24405c:
    // 0x24405c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24405cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244060:
    // 0x244060: 0x0  nop
    ctx->pc = 0x244060u;
    // NOP
label_244064:
    // 0x244064: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x244064u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_244068:
    // 0x244068: 0x461ab601  sub.s       $f24, $f22, $f26
    ctx->pc = 0x244068u;
    ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[26]);
label_24406c:
    // 0x24406c: 0x46181034  c.lt.s      $f2, $f24
    ctx->pc = 0x24406cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244070:
    // 0x244070: 0x0  nop
    ctx->pc = 0x244070u;
    // NOP
label_244074:
    // 0x244074: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_244078:
    if (ctx->pc == 0x244078u) {
        ctx->pc = 0x24407Cu;
        goto label_24407c;
    }
    ctx->pc = 0x244074u;
    {
        const bool branch_taken_0x244074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244074) {
            ctx->pc = 0x244090u;
            goto label_244090;
        }
    }
    ctx->pc = 0x24407Cu;
label_24407c:
    // 0x24407c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_244080:
    // 0x244080: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_244084:
    // 0x244084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244088:
    // 0x244088: 0x0  nop
    ctx->pc = 0x244088u;
    // NOP
label_24408c:
    // 0x24408c: 0x4600c601  sub.s       $f24, $f24, $f0
    ctx->pc = 0x24408cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_244090:
    // 0x244090: 0x4601c036  c.le.s      $f24, $f1
    ctx->pc = 0x244090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244094:
    // 0x244094: 0x0  nop
    ctx->pc = 0x244094u;
    // NOP
label_244098:
    // 0x244098: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_24409c:
    if (ctx->pc == 0x24409Cu) {
        ctx->pc = 0x2440A0u;
        goto label_2440a0;
    }
    ctx->pc = 0x244098u;
    {
        const bool branch_taken_0x244098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244098) {
            ctx->pc = 0x2440B4u;
            goto label_2440b4;
        }
    }
    ctx->pc = 0x2440A0u;
label_2440a0:
    // 0x2440a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2440a4:
    // 0x2440a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2440a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2440a8:
    // 0x2440a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2440a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2440ac:
    // 0x2440ac: 0x0  nop
    ctx->pc = 0x2440acu;
    // NOP
label_2440b0:
    // 0x2440b0: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x2440b0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_2440b4:
    // 0x2440b4: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x2440b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_2440b8:
    // 0x2440b8: 0xc0884f6  jal         func_2213D8
label_2440bc:
    if (ctx->pc == 0x2440BCu) {
        ctx->pc = 0x2440BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440B8u;
        // 0x2440bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440C0u;
        goto label_2440c0;
    }
    ctx->pc = 0x2440B8u;
    SET_GPR_U32(ctx, 31, 0x2440C0u);
    ctx->pc = 0x2440BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440B8u;
    // 0x2440bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2440B8u, 0x2440C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440C0u;
label_2440c0:
    // 0x2440c0: 0x4600c6c5  abs.s       $f27, $f24
    ctx->pc = 0x2440c0u;
    ctx->f[27] = FPU_ABS_S(ctx->f[24]);
label_2440c4:
    // 0x2440c4: 0x461ce834  c.lt.s      $f29, $f28
    ctx->pc = 0x2440c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[29], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2440c8:
    // 0x2440c8: 0x0  nop
    ctx->pc = 0x2440c8u;
    // NOP
label_2440cc:
    // 0x2440cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2440d0:
    if (ctx->pc == 0x2440D0u) {
        ctx->pc = 0x2440D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440CCu;
        // 0x2440d0: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440D4u;
        goto label_2440d4;
    }
    ctx->pc = 0x2440CCu;
    {
        const bool branch_taken_0x2440cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2440D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440CCu;
        // 0x2440d0: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440cc) {
            ctx->pc = 0x2440E4u;
            goto label_2440e4;
        }
    }
    ctx->pc = 0x2440D4u;
label_2440d4:
    // 0x2440d4: 0xc089f66  jal         func_227D98
label_2440d8:
    if (ctx->pc == 0x2440D8u) {
        ctx->pc = 0x2440D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440D4u;
        // 0x2440d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440DCu;
        goto label_2440dc;
    }
    ctx->pc = 0x2440D4u;
    SET_GPR_U32(ctx, 31, 0x2440DCu);
    ctx->pc = 0x2440D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440D4u;
    // 0x2440d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2440D4u, 0x2440DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440DCu;
label_2440dc:
    // 0x2440dc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2440e0:
    if (ctx->pc == 0x2440E0u) {
        ctx->pc = 0x2440E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440DCu;
        // 0x2440e0: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440E4u;
        goto label_2440e4;
    }
    ctx->pc = 0x2440DCu;
    {
        const bool branch_taken_0x2440dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440DCu;
        // 0x2440e0: 0x3c05110c  lui         $a1, 0x110C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440dc) {
            ctx->pc = 0x244260u;
            goto label_244260;
        }
    }
    ctx->pc = 0x2440E4u;
label_2440e4:
    // 0x2440e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2440e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2440e8:
    // 0x2440e8: 0x8c4304e8  lw          $v1, 0x4E8($v0)
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
label_2440ec:
    // 0x2440ec: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_2440f0:
    if (ctx->pc == 0x2440F0u) {
        ctx->pc = 0x2440F4u;
        goto label_2440f4;
    }
    ctx->pc = 0x2440ECu;
    {
        const bool branch_taken_0x2440ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2440ec) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x2440F4u;
label_2440f4:
    // 0x2440f4: 0x9282011c  lbu         $v0, 0x11C($s4)
    ctx->pc = 0x2440f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
label_2440f8:
    // 0x2440f8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2440fc:
    if (ctx->pc == 0x2440FCu) {
        ctx->pc = 0x244100u;
        goto label_244100;
    }
    ctx->pc = 0x2440F8u;
    {
        const bool branch_taken_0x2440f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2440f8) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244100u;
label_244100:
    // 0x244100: 0xc088588  jal         func_221620
label_244104:
    if (ctx->pc == 0x244104u) {
        ctx->pc = 0x244104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244100u;
        // 0x244104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244108u;
        goto label_244108;
    }
    ctx->pc = 0x244100u;
    SET_GPR_U32(ctx, 31, 0x244108u);
    ctx->pc = 0x244104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244100u;
    // 0x244104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221620u, 0x244100u, 0x244108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244108u;
label_244108:
    // 0x244108: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x244108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24410c:
    // 0x24410c: 0x0  nop
    ctx->pc = 0x24410cu;
    // NOP
label_244110:
    // 0x244110: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_244114:
    if (ctx->pc == 0x244114u) {
        ctx->pc = 0x244118u;
        goto label_244118;
    }
    ctx->pc = 0x244110u;
    {
        const bool branch_taken_0x244110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244110) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244118u;
label_244118:
    // 0x244118: 0xc088ed2  jal         func_223B48
label_24411c:
    if (ctx->pc == 0x24411Cu) {
        ctx->pc = 0x24411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244118u;
        // 0x24411c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244120u;
        goto label_244120;
    }
    ctx->pc = 0x244118u;
    SET_GPR_U32(ctx, 31, 0x244120u);
    ctx->pc = 0x24411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244118u;
    // 0x24411c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x244118u, 0x244120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244120u;
label_244120:
    // 0x244120: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_244124:
    if (ctx->pc == 0x244124u) {
        ctx->pc = 0x244128u;
        goto label_244128;
    }
    ctx->pc = 0x244120u;
    {
        const bool branch_taken_0x244120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244120) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244128u;
label_244128:
    // 0x244128: 0xc089f66  jal         func_227D98
label_24412c:
    if (ctx->pc == 0x24412Cu) {
        ctx->pc = 0x24412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244128u;
        // 0x24412c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244130u;
        goto label_244130;
    }
    ctx->pc = 0x244128u;
    SET_GPR_U32(ctx, 31, 0x244130u);
    ctx->pc = 0x24412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244128u;
    // 0x24412c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x244128u, 0x244130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244130u;
label_244130:
    // 0x244130: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_244134:
    if (ctx->pc == 0x244134u) {
        ctx->pc = 0x244134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244130u;
        // 0x244134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244138u;
        goto label_244138;
    }
    ctx->pc = 0x244130u;
    {
        const bool branch_taken_0x244130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244130u;
        // 0x244134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244130) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244138u;
label_244138:
    // 0x244138: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x244138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_24413c:
    // 0x24413c: 0xc089998  jal         func_226660
label_244140:
    if (ctx->pc == 0x244140u) {
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244144u;
        goto label_244144;
    }
    ctx->pc = 0x24413Cu;
    SET_GPR_U32(ctx, 31, 0x244144u);
    ctx->pc = 0x244140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24413Cu;
    // 0x244140: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x24413Cu, 0x244144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244144u;
label_244144:
    // 0x244144: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_244148:
    if (ctx->pc == 0x244148u) {
        ctx->pc = 0x244148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244144u;
        // 0x244148: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24414Cu;
        goto label_24414c;
    }
    ctx->pc = 0x244144u;
    {
        const bool branch_taken_0x244144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244144u;
        // 0x244148: 0x4600e306  mov.s       $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244144) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x24414Cu;
label_24414c:
    // 0x24414c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_244150:
    // 0x244150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244154:
    // 0x244154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244158:
    // 0x244158: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_24415c:
    // 0x24415c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24415cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244160:
    // 0x244160: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_244164:
    // 0x244164: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x244164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_244168:
    // 0x244168: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x244168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_24416c:
    // 0x24416c: 0xc09716e  jal         func_25C5B8
label_244170:
    if (ctx->pc == 0x244170u) {
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244174u;
        goto label_244174;
    }
    ctx->pc = 0x24416Cu;
    SET_GPR_U32(ctx, 31, 0x244174u);
    ctx->pc = 0x244170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24416Cu;
    // 0x244170: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C5B8u, 0x24416Cu, 0x244174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244174u;
label_244174:
    // 0x244174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244178:
    // 0x244178: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_24417c:
    if (ctx->pc == 0x24417Cu) {
        ctx->pc = 0x24417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244178u;
        // 0x24417c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244180u;
        goto label_244180;
    }
    ctx->pc = 0x244178u;
    {
        const bool branch_taken_0x244178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244178u;
        // 0x24417c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244178) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244180u;
label_244180:
    // 0x244180: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_244184:
    // 0x244184: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x244184u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_244188:
    // 0x244188: 0x100000fa  b           . + 4 + (0xFA << 2)
label_24418c:
    if (ctx->pc == 0x24418Cu) {
        ctx->pc = 0x24418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244188u;
        // 0x24418c: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244190u;
        goto label_244190;
    }
    ctx->pc = 0x244188u;
    {
        const bool branch_taken_0x244188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244188u;
        // 0x24418c: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244188) {
            ctx->pc = 0x244574u;
            goto label_244574;
        }
    }
    ctx->pc = 0x244190u;
label_244190:
    // 0x244190: 0x4619d836  c.le.s      $f27, $f25
    ctx->pc = 0x244190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[27], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244194:
    // 0x244194: 0x0  nop
    ctx->pc = 0x244194u;
    // NOP
label_244198:
    // 0x244198: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_24419c:
    if (ctx->pc == 0x24419Cu) {
        ctx->pc = 0x24419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244198u;
        // 0x24419c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441A0u;
        goto label_2441a0;
    }
    ctx->pc = 0x244198u;
    {
        const bool branch_taken_0x244198 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244198u;
        // 0x24419c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244198) {
            ctx->pc = 0x2441BCu;
            goto label_2441bc;
        }
    }
    ctx->pc = 0x2441A0u;
label_2441a0:
    // 0x2441a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2441a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2441a4:
    // 0x2441a4: 0x0  nop
    ctx->pc = 0x2441a4u;
    // NOP
label_2441a8:
    // 0x2441a8: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x2441a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2441ac:
    // 0x2441ac: 0x0  nop
    ctx->pc = 0x2441acu;
    // NOP
label_2441b0:
    // 0x2441b0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2441b4:
    if (ctx->pc == 0x2441B4u) {
        ctx->pc = 0x2441B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441B0u;
        // 0x2441b4: 0x4619d540  add.s       $f21, $f26, $f25 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441B8u;
        goto label_2441b8;
    }
    ctx->pc = 0x2441B0u;
    {
        const bool branch_taken_0x2441b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441b0) {
            ctx->pc = 0x2441B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441B0u;
            // 0x2441b4: 0x4619d540  add.s       $f21, $f26, $f25 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2441BCu;
            goto label_2441bc;
        }
    }
    ctx->pc = 0x2441B8u;
label_2441b8:
    // 0x2441b8: 0x4619d541  sub.s       $f21, $f26, $f25
    ctx->pc = 0x2441b8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[26], ctx->f[25]);
label_2441bc:
    // 0x2441bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2441bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2441c0:
    // 0x2441c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2441c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2441c4:
    // 0x2441c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2441c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2441c8:
    // 0x2441c8: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x2441c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_2441cc:
    // 0x2441cc: 0x4615b601  sub.s       $f24, $f22, $f21
    ctx->pc = 0x2441ccu;
    ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_2441d0:
    // 0x2441d0: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x2441d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_2441d4:
    // 0x2441d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2441d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2441d8:
    // 0x2441d8: 0x4616d741  sub.s       $f29, $f26, $f22
    ctx->pc = 0x2441d8u;
    ctx->f[29] = FPU_SUB_S(ctx->f[26], ctx->f[22]);
label_2441dc:
    // 0x2441dc: 0x4600c6c5  abs.s       $f27, $f24
    ctx->pc = 0x2441dcu;
    ctx->f[27] = FPU_ABS_S(ctx->f[24]);
label_2441e0:
    // 0x2441e0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2441e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2441e4:
    // 0x2441e4: 0xc12e310  jal         func_4B8C40
label_2441e8:
    if (ctx->pc == 0x2441E8u) {
        ctx->pc = 0x2441E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E4u;
        // 0x2441e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441ECu;
        goto label_2441ec;
    }
    ctx->pc = 0x2441E4u;
    SET_GPR_U32(ctx, 31, 0x2441ECu);
    ctx->pc = 0x2441E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441E4u;
    // 0x2441e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2441E4u, 0x2441ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441ECu;
label_2441ec:
    // 0x2441ec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2441ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2441f0:
    // 0x2441f0: 0xc12e29c  jal         func_4B8A70
label_2441f4:
    if (ctx->pc == 0x2441F4u) {
        ctx->pc = 0x2441F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441F0u;
        // 0x2441f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441F8u;
        goto label_2441f8;
    }
    ctx->pc = 0x2441F0u;
    SET_GPR_U32(ctx, 31, 0x2441F8u);
    ctx->pc = 0x2441F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441F0u;
    // 0x2441f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2441F0u, 0x2441F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441F8u;
label_2441f8:
    // 0x2441f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2441f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2441fc:
    // 0x2441fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2441fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_244200:
    // 0x244200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244204:
    // 0x244204: 0x4600e905  abs.s       $f4, $f29
    ctx->pc = 0x244204u;
    ctx->f[4] = FPU_ABS_S(ctx->f[29]);
label_244208:
    // 0x244208: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x244208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24420c:
    // 0x24420c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x24420cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_244210:
    // 0x244210: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x244210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_244214:
    // 0x244214: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x244214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_244218:
    // 0x244218: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x244218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_24421c:
    // 0x24421c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24421cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_244220:
    // 0x244220: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x244220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_244224:
    // 0x244224: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x244224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_244228:
    // 0x244228: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x244228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_24422c:
    // 0x24422c: 0x4601d141  sub.s       $f5, $f26, $f1
    ctx->pc = 0x24422cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[1]);
label_244230:
    // 0x244230: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x244230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_244234:
    // 0x244234: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x244234u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
label_244238:
    // 0x244238: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x244238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24423c:
    // 0x24423c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x24423cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244240:
    // 0x244240: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x244240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244244:
    // 0x244244: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x244244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_244248:
    // 0x244248: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x244248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_24424c:
    // 0x24424c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x24424cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_244250:
    // 0x244250: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_244254:
    if (ctx->pc == 0x244254u) {
        ctx->pc = 0x244254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244250u;
        // 0x244254: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244258u;
        goto label_244258;
    }
    ctx->pc = 0x244250u;
    {
        const bool branch_taken_0x244250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244250u;
        // 0x244254: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244250) {
            ctx->pc = 0x24425Cu;
            goto label_24425c;
        }
    }
    ctx->pc = 0x244258u;
label_244258:
    // 0x244258: 0x46002f46  mov.s       $f29, $f5
    ctx->pc = 0x244258u;
    ctx->f[29] = FPU_MOV_S(ctx->f[5]);
label_24425c:
    // 0x24425c: 0x3c05110c  lui         $a1, 0x110C
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
label_244260:
    // 0x244260: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x244260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244264:
    // 0x244264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244268:
    // 0x244268: 0xc089998  jal         func_226660
label_24426c:
    if (ctx->pc == 0x24426Cu) {
        ctx->pc = 0x24426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244268u;
        // 0x24426c: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244270u;
        goto label_244270;
    }
    ctx->pc = 0x244268u;
    SET_GPR_U32(ctx, 31, 0x244270u);
    ctx->pc = 0x24426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244268u;
    // 0x24426c: 0x34a50880  ori         $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x244268u, 0x244270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244270u;
label_244270:
    // 0x244270: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_244274:
    if (ctx->pc == 0x244274u) {
        ctx->pc = 0x244274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244270u;
        // 0x244274: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244278u;
        goto label_244278;
    }
    ctx->pc = 0x244270u;
    {
        const bool branch_taken_0x244270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244270u;
        // 0x244274: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244270) {
            ctx->pc = 0x244298u;
            goto label_244298;
        }
    }
    ctx->pc = 0x244278u;
label_244278:
    // 0x244278: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x244278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_24427c:
    // 0x24427c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_244280:
    // 0x244280: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_244284:
    // 0x244284: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_244288:
    if (ctx->pc == 0x244288u) {
        ctx->pc = 0x244288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244284u;
        // 0x244288: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24428Cu;
        goto label_24428c;
    }
    ctx->pc = 0x244284u;
    {
        const bool branch_taken_0x244284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x244288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244284u;
        // 0x244288: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244284) {
            ctx->pc = 0x244294u;
            goto label_244294;
        }
    }
    ctx->pc = 0x24428Cu;
label_24428c:
    // 0x24428c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_244290:
    if (ctx->pc == 0x244290u) {
        ctx->pc = 0x244290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24428Cu;
        // 0x244290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244294u;
        goto label_244294;
    }
    ctx->pc = 0x24428Cu;
    {
        const bool branch_taken_0x24428c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x244290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24428Cu;
        // 0x244290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24428c) {
            ctx->pc = 0x2442A8u;
            goto label_2442a8;
        }
    }
    ctx->pc = 0x244294u;
label_244294:
    // 0x244294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_244298:
    // 0x244298: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x244298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_24429c:
    // 0x24429c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24429cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2442a0:
    // 0x2442a0: 0x10000028  b           . + 4 + (0x28 << 2)
label_2442a4:
    if (ctx->pc == 0x2442A4u) {
        ctx->pc = 0x2442A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A0u;
        // 0x2442a4: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442A8u;
        goto label_2442a8;
    }
    ctx->pc = 0x2442A0u;
    {
        const bool branch_taken_0x2442a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A0u;
        // 0x2442a4: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442a0) {
            ctx->pc = 0x244344u;
            goto label_244344;
        }
    }
    ctx->pc = 0x2442A8u;
label_2442a8:
    // 0x2442a8: 0xc089998  jal         func_226660
label_2442ac:
    if (ctx->pc == 0x2442ACu) {
        ctx->pc = 0x2442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A8u;
        // 0x2442ac: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442B0u;
        goto label_2442b0;
    }
    ctx->pc = 0x2442A8u;
    SET_GPR_U32(ctx, 31, 0x2442B0u);
    ctx->pc = 0x2442ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442A8u;
    // 0x2442ac: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2442A8u, 0x2442B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442B0u;
label_2442b0:
    // 0x2442b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2442b4:
    if (ctx->pc == 0x2442B4u) {
        ctx->pc = 0x2442B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B0u;
        // 0x2442b4: 0x26a54b00  addiu       $a1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442B8u;
        goto label_2442b8;
    }
    ctx->pc = 0x2442B0u;
    {
        const bool branch_taken_0x2442b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B0u;
        // 0x2442b4: 0x26a54b00  addiu       $a1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442b0) {
            ctx->pc = 0x2442E0u;
            goto label_2442e0;
        }
    }
    ctx->pc = 0x2442B8u;
label_2442b8:
    // 0x2442b8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2442b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2442bc:
    // 0x2442bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2442bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2442c0:
    // 0x2442c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2442c4:
    // 0x2442c4: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2442c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_2442c8:
    // 0x2442c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2442c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2442cc:
    // 0x2442cc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2442ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2442d0:
    // 0x2442d0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2442d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_2442d4:
    // 0x2442d4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2442d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2442d8:
    // 0x2442d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2442dc:
    if (ctx->pc == 0x2442DCu) {
        ctx->pc = 0x2442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442D8u;
        // 0x2442dc: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442E0u;
        goto label_2442e0;
    }
    ctx->pc = 0x2442D8u;
    {
        const bool branch_taken_0x2442d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442D8u;
        // 0x2442dc: 0x7e630000  sq          $v1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442d8) {
            ctx->pc = 0x244344u;
            goto label_244344;
        }
    }
    ctx->pc = 0x2442E0u;
label_2442e0:
    // 0x2442e0: 0xc08a0d0  jal         func_228340
label_2442e4:
    if (ctx->pc == 0x2442E4u) {
        ctx->pc = 0x2442E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E0u;
        // 0x2442e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442E8u;
        goto label_2442e8;
    }
    ctx->pc = 0x2442E0u;
    SET_GPR_U32(ctx, 31, 0x2442E8u);
    ctx->pc = 0x2442E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442E0u;
    // 0x2442e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2442E0u, 0x2442E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442E8u;
label_2442e8:
    // 0x2442e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2442ec:
    if (ctx->pc == 0x2442ECu) {
        ctx->pc = 0x2442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E8u;
        // 0x2442ec: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442F0u;
        goto label_2442f0;
    }
    ctx->pc = 0x2442E8u;
    {
        const bool branch_taken_0x2442e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E8u;
        // 0x2442ec: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442e8) {
            ctx->pc = 0x244314u;
            goto label_244314;
        }
    }
    ctx->pc = 0x2442F0u;
label_2442f0:
    // 0x2442f0: 0xc0cd8ec  jal         func_3363B0
label_2442f4:
    if (ctx->pc == 0x2442F4u) {
        ctx->pc = 0x2442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F0u;
        // 0x2442f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442F8u;
        goto label_2442f8;
    }
    ctx->pc = 0x2442F0u;
    SET_GPR_U32(ctx, 31, 0x2442F8u);
    ctx->pc = 0x2442F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442F0u;
    // 0x2442f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2442F0u, 0x2442F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442F8u;
label_2442f8:
    // 0x2442f8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2442f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2442fc:
    // 0x2442fc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2442fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244300:
    // 0x244300: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_244304:
    // 0x244304: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244308:
    // 0x244308: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x244308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_24430c:
    // 0x24430c: 0x10000008  b           . + 4 + (0x8 << 2)
label_244310:
    if (ctx->pc == 0x244310u) {
        ctx->pc = 0x244310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24430Cu;
        // 0x244310: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244314u;
        goto label_244314;
    }
    ctx->pc = 0x24430Cu;
    {
        const bool branch_taken_0x24430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24430Cu;
        // 0x244310: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24430c) {
            ctx->pc = 0x244330u;
            goto label_244330;
        }
    }
    ctx->pc = 0x244314u;
label_244314:
    // 0x244314: 0xc08a0d0  jal         func_228340
label_244318:
    if (ctx->pc == 0x244318u) {
        ctx->pc = 0x244318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244314u;
        // 0x244318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24431Cu;
        goto label_24431c;
    }
    ctx->pc = 0x244314u;
    SET_GPR_U32(ctx, 31, 0x24431Cu);
    ctx->pc = 0x244318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244314u;
    // 0x244318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x244314u, 0x24431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24431Cu;
label_24431c:
    // 0x24431c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_244320:
    if (ctx->pc == 0x244320u) {
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244324u;
        goto label_244324;
    }
    ctx->pc = 0x24431Cu;
    {
        const bool branch_taken_0x24431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24431c) {
            ctx->pc = 0x244344u;
            goto label_244344;
        }
    }
    ctx->pc = 0x244324u;
label_244324:
    // 0x244324: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x244324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_244328:
    // 0x244328: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x244328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_24432c:
    // 0x24432c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x24432cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244330:
    // 0x244330: 0xc136b24  jal         func_4DAC90
label_244334:
    if (ctx->pc == 0x244334u) {
        ctx->pc = 0x244338u;
        goto label_244338;
    }
    ctx->pc = 0x244330u;
    SET_GPR_U32(ctx, 31, 0x244338u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x244330u, 0x244338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244338u;
label_244338:
    // 0x244338: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x244338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24433c:
    // 0x24433c: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x24433cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_244340:
    // 0x244340: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x244340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_244344:
    // 0x244344: 0xc088e60  jal         func_223980
label_244348:
    if (ctx->pc == 0x244348u) {
        ctx->pc = 0x244348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244344u;
        // 0x244348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24434Cu;
        goto label_24434c;
    }
    ctx->pc = 0x244344u;
    SET_GPR_U32(ctx, 31, 0x24434Cu);
    ctx->pc = 0x244348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244344u;
    // 0x244348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x244344u, 0x24434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24434Cu;
label_24434c:
    // 0x24434c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_244350:
    if (ctx->pc == 0x244350u) {
        ctx->pc = 0x244354u;
        goto label_244354;
    }
    ctx->pc = 0x24434Cu;
    {
        const bool branch_taken_0x24434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24434c) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x244354u;
label_244354:
    // 0x244354: 0xc089f66  jal         func_227D98
label_244358:
    if (ctx->pc == 0x244358u) {
        ctx->pc = 0x244358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244354u;
        // 0x244358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24435Cu;
        goto label_24435c;
    }
    ctx->pc = 0x244354u;
    SET_GPR_U32(ctx, 31, 0x24435Cu);
    ctx->pc = 0x244358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244354u;
    // 0x244358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x244354u, 0x24435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24435Cu;
label_24435c:
    // 0x24435c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_244360:
    if (ctx->pc == 0x244360u) {
        ctx->pc = 0x244364u;
        goto label_244364;
    }
    ctx->pc = 0x24435Cu;
    {
        const bool branch_taken_0x24435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24435c) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x244364u;
label_244364:
    // 0x244364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244368:
    // 0x244368: 0x0  nop
    ctx->pc = 0x244368u;
    // NOP
label_24436c:
    // 0x24436c: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x24436cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244370:
    // 0x244370: 0x0  nop
    ctx->pc = 0x244370u;
    // NOP
label_244374:
    // 0x244374: 0x45020072  bc1fl       . + 4 + (0x72 << 2)
label_244378:
    if (ctx->pc == 0x244378u) {
        ctx->pc = 0x244378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244374u;
        // 0x244378: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24437Cu;
        goto label_24437c;
    }
    ctx->pc = 0x244374u;
    {
        const bool branch_taken_0x244374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244374) {
            ctx->pc = 0x244378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244374u;
            // 0x244378: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244540u;
            goto label_244540;
        }
    }
    ctx->pc = 0x24437Cu;
label_24437c:
    // 0x24437c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x24437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_244380:
    // 0x244380: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x244380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_244384:
    // 0x244384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244388:
    // 0x244388: 0x0  nop
    ctx->pc = 0x244388u;
    // NOP
label_24438c:
    // 0x24438c: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x24438cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244390:
    // 0x244390: 0x0  nop
    ctx->pc = 0x244390u;
    // NOP
label_244394:
    // 0x244394: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_244398:
    if (ctx->pc == 0x244398u) {
        ctx->pc = 0x244398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244394u;
        // 0x244398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24439Cu;
        goto label_24439c;
    }
    ctx->pc = 0x244394u;
    {
        const bool branch_taken_0x244394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244394u;
        // 0x244398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244394) {
            ctx->pc = 0x2443C0u;
            goto label_2443c0;
        }
    }
    ctx->pc = 0x24439Cu;
label_24439c:
    // 0x24439c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2443a0:
    // 0x2443a0: 0xc089998  jal         func_226660
label_2443a4:
    if (ctx->pc == 0x2443A4u) {
        ctx->pc = 0x2443A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443A0u;
        // 0x2443a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443A8u;
        goto label_2443a8;
    }
    ctx->pc = 0x2443A0u;
    SET_GPR_U32(ctx, 31, 0x2443A8u);
    ctx->pc = 0x2443A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443A0u;
    // 0x2443a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2443A0u, 0x2443A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443A8u;
label_2443a8:
    // 0x2443a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2443ac:
    if (ctx->pc == 0x2443ACu) {
        ctx->pc = 0x2443ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443A8u;
        // 0x2443ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443B0u;
        goto label_2443b0;
    }
    ctx->pc = 0x2443A8u;
    {
        const bool branch_taken_0x2443a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2443ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443A8u;
        // 0x2443ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443a8) {
            ctx->pc = 0x2443C0u;
            goto label_2443c0;
        }
    }
    ctx->pc = 0x2443B0u;
label_2443b0:
    // 0x2443b0: 0xc097090  jal         func_25C240
label_2443b4:
    if (ctx->pc == 0x2443B4u) {
        ctx->pc = 0x2443B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B0u;
        // 0x2443b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443B8u;
        goto label_2443b8;
    }
    ctx->pc = 0x2443B0u;
    SET_GPR_U32(ctx, 31, 0x2443B8u);
    ctx->pc = 0x2443B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443B0u;
    // 0x2443b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C240u, 0x2443B0u, 0x2443B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443B8u;
label_2443b8:
    // 0x2443b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2443bc:
    if (ctx->pc == 0x2443BCu) {
        ctx->pc = 0x2443BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B8u;
        // 0x2443bc: 0x86020002  lh          $v0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443C0u;
        goto label_2443c0;
    }
    ctx->pc = 0x2443B8u;
    {
        const bool branch_taken_0x2443b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B8u;
        // 0x2443bc: 0x86020002  lh          $v0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443b8) {
            ctx->pc = 0x2443DCu;
            goto label_2443dc;
        }
    }
    ctx->pc = 0x2443C0u;
label_2443c0:
    // 0x2443c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2443c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2443c4:
    // 0x2443c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2443c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2443c8:
    // 0x2443c8: 0xc089998  jal         func_226660
label_2443cc:
    if (ctx->pc == 0x2443CCu) {
        ctx->pc = 0x2443CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443C8u;
        // 0x2443cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443D0u;
        goto label_2443d0;
    }
    ctx->pc = 0x2443C8u;
    SET_GPR_U32(ctx, 31, 0x2443D0u);
    ctx->pc = 0x2443CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443C8u;
    // 0x2443cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2443C8u, 0x2443D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443D0u;
label_2443d0:
    // 0x2443d0: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
label_2443d4:
    if (ctx->pc == 0x2443D4u) {
        ctx->pc = 0x2443D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D0u;
        // 0x2443d4: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443D8u;
        goto label_2443d8;
    }
    ctx->pc = 0x2443D0u;
    {
        const bool branch_taken_0x2443d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2443d0) {
            ctx->pc = 0x2443D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2443D0u;
            // 0x2443d4: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244540u;
            goto label_244540;
        }
    }
    ctx->pc = 0x2443D8u;
label_2443d8:
    // 0x2443d8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2443d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2443dc:
    // 0x2443dc: 0x26a44b00  addiu       $a0, $s5, 0x4B00
    ctx->pc = 0x2443dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_2443e0:
    // 0x2443e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2443e4:
    // 0x2443e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2443e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2443e8:
    // 0x2443e8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2443e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2443ec:
    // 0x2443ec: 0x10000053  b           . + 4 + (0x53 << 2)
label_2443f0:
    if (ctx->pc == 0x2443F0u) {
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443F4u;
        goto label_2443f4;
    }
    ctx->pc = 0x2443ECu;
    {
        const bool branch_taken_0x2443ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443ec) {
            ctx->pc = 0x24453Cu;
            goto label_24453c;
        }
    }
    ctx->pc = 0x2443F4u;
label_2443f4:
    // 0x2443f4: 0xc088e70  jal         func_2239C0
label_2443f8:
    if (ctx->pc == 0x2443F8u) {
        ctx->pc = 0x2443F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F4u;
        // 0x2443f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443FCu;
        goto label_2443fc;
    }
    ctx->pc = 0x2443F4u;
    SET_GPR_U32(ctx, 31, 0x2443FCu);
    ctx->pc = 0x2443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443F4u;
    // 0x2443f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2443F4u, 0x2443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443FCu;
label_2443fc:
    // 0x2443fc: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_244400:
    if (ctx->pc == 0x244400u) {
        ctx->pc = 0x244400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443FCu;
        // 0x244400: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244404u;
        goto label_244404;
    }
    ctx->pc = 0x2443FCu;
    {
        const bool branch_taken_0x2443fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2443fc) {
            ctx->pc = 0x244400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2443FCu;
            // 0x244400: 0xc62003a0  lwc1        $f0, 0x3A0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244540u;
            goto label_244540;
        }
    }
    ctx->pc = 0x244404u;
label_244404:
    // 0x244404: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x244404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_244408:
    // 0x244408: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x244408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_24440c:
    // 0x24440c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24440cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244410:
    // 0x244410: 0x0  nop
    ctx->pc = 0x244410u;
    // NOP
label_244414:
    // 0x244414: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x244414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244418:
    // 0x244418: 0x0  nop
    ctx->pc = 0x244418u;
    // NOP
label_24441c:
    // 0x24441c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_244420:
    if (ctx->pc == 0x244420u) {
        ctx->pc = 0x244420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24441Cu;
        // 0x244420: 0x26a34b00  addiu       $v1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244424u;
        goto label_244424;
    }
    ctx->pc = 0x24441Cu;
    {
        const bool branch_taken_0x24441c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24441Cu;
        // 0x244420: 0x26a34b00  addiu       $v1, $s5, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24441c) {
            ctx->pc = 0x24453Cu;
            goto label_24453c;
        }
    }
    ctx->pc = 0x244424u;
label_244424:
    // 0x244424: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x244424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_244428:
    // 0x244428: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24442c:
    // 0x24442c: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x24442cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_244430:
    // 0x244430: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x244430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_244434:
    // 0x244434: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_244438:
    // 0x244438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24443c:
    // 0x24443c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24443cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_244440:
    // 0x244440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244444:
    // 0x244444: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x244444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_244448:
    // 0x244448: 0x461bc834  c.lt.s      $f25, $f27
    ctx->pc = 0x244448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24444c:
    // 0x24444c: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x24444cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_244450:
    // 0x244450: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x244450u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_244454:
    // 0x244454: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x244454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_244458:
    // 0x244458: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x244458u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_24445c:
    // 0x24445c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x24445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_244460:
    // 0x244460: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x244460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244464:
    // 0x244464: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_244468:
    if (ctx->pc == 0x244468u) {
        ctx->pc = 0x244468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244464u;
        // 0x244468: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24446Cu;
        goto label_24446c;
    }
    ctx->pc = 0x244464u;
    {
        const bool branch_taken_0x244464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244464u;
        // 0x244468: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244464) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x24446Cu;
label_24446c:
    // 0x24446c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24446cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244470:
    // 0x244470: 0x0  nop
    ctx->pc = 0x244470u;
    // NOP
label_244474:
    // 0x244474: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x244474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244478:
    // 0x244478: 0x0  nop
    ctx->pc = 0x244478u;
    // NOP
label_24447c:
    // 0x24447c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_244480:
    if (ctx->pc == 0x244480u) {
        ctx->pc = 0x244480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24447Cu;
        // 0x244480: 0x4619d540  add.s       $f21, $f26, $f25 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244484u;
        goto label_244484;
    }
    ctx->pc = 0x24447Cu;
    {
        const bool branch_taken_0x24447c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24447c) {
            ctx->pc = 0x244480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24447Cu;
            // 0x244480: 0x4619d540  add.s       $f21, $f26, $f25 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244484u;
label_244484:
    // 0x244484: 0x4619d541  sub.s       $f21, $f26, $f25
    ctx->pc = 0x244484u;
    ctx->f[21] = FPU_SUB_S(ctx->f[26], ctx->f[25]);
label_244488:
    // 0x244488: 0xc12e29c  jal         func_4B8A70
label_24448c:
    if (ctx->pc == 0x24448Cu) {
        ctx->pc = 0x24448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244488u;
        // 0x24448c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244490u;
        goto label_244490;
    }
    ctx->pc = 0x244488u;
    SET_GPR_U32(ctx, 31, 0x244490u);
    ctx->pc = 0x24448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244488u;
    // 0x24448c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x244488u, 0x244490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244490u;
label_244490:
    // 0x244490: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x244490u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_244494:
    // 0x244494: 0xc12e310  jal         func_4B8C40
label_244498:
    if (ctx->pc == 0x244498u) {
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24449Cu;
        goto label_24449c;
    }
    ctx->pc = 0x244494u;
    SET_GPR_U32(ctx, 31, 0x24449Cu);
    ctx->pc = 0x244498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244494u;
    // 0x244498: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x244494u, 0x24449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24449Cu;
label_24449c:
    // 0x24449c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2444a0:
    // 0x2444a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2444a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2444a4:
    // 0x2444a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2444a8:
    // 0x2444a8: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x2444a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2444ac:
    // 0x2444ac: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2444acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_2444b0:
    // 0x2444b0: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2444b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2444b4:
    // 0x2444b4: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2444b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2444b8:
    // 0x2444b8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2444b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_2444bc:
    // 0x2444bc: 0x4405b000  mfc1        $a1, $f22
    ctx->pc = 0x2444bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2444c0:
    // 0x2444c0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2444c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2444c4:
    // 0x2444c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2444c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2444c8:
    // 0x2444c8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2444c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2444cc:
    // 0x2444cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2444ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2444d0:
    // 0x2444d0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2444d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2444d4:
    // 0x2444d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2444d8:
    // 0x2444d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2444d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2444dc:
    // 0x2444dc: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x2444dcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_2444e0:
    // 0x2444e0: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x2444e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_2444e4:
    // 0x2444e4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2444e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2444e8:
    // 0x2444e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2444e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2444ec:
    // 0x2444ec: 0xc12e310  jal         func_4B8C40
label_2444f0:
    if (ctx->pc == 0x2444F0u) {
        ctx->pc = 0x2444F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444ECu;
        // 0x2444f0: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444F4u;
        goto label_2444f4;
    }
    ctx->pc = 0x2444ECu;
    SET_GPR_U32(ctx, 31, 0x2444F4u);
    ctx->pc = 0x2444F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444ECu;
    // 0x2444f0: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2444ECu, 0x2444F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444F4u;
label_2444f4:
    // 0x2444f4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2444f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2444f8:
    // 0x2444f8: 0xc12e29c  jal         func_4B8A70
label_2444fc:
    if (ctx->pc == 0x2444FCu) {
        ctx->pc = 0x2444FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444F8u;
        // 0x2444fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244500u;
        goto label_244500;
    }
    ctx->pc = 0x2444F8u;
    SET_GPR_U32(ctx, 31, 0x244500u);
    ctx->pc = 0x2444FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444F8u;
    // 0x2444fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2444F8u, 0x244500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244500u;
label_244500:
    // 0x244500: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x244500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244504:
    // 0x244504: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x244504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_244508:
    // 0x244508: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x244508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_24450c:
    // 0x24450c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24450cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_244510:
    // 0x244510: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x244510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_244514:
    // 0x244514: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x244514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_244518:
    // 0x244518: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x244518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24451c:
    // 0x24451c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_244520:
    // 0x244520: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x244520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_244524:
    // 0x244524: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x244524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244528:
    // 0x244528: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x244528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24452c:
    // 0x24452c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244530:
    // 0x244530: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x244530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_244534:
    // 0x244534: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x244534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_244538:
    // 0x244538: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x244538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_24453c:
    // 0x24453c: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x24453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244540:
    // 0x244540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244544:
    // 0x244544: 0xc08a0d0  jal         func_228340
label_244548:
    if (ctx->pc == 0x244548u) {
        ctx->pc = 0x244548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244544u;
        // 0x244548: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24454Cu;
        goto label_24454c;
    }
    ctx->pc = 0x244544u;
    SET_GPR_U32(ctx, 31, 0x24454Cu);
    ctx->pc = 0x244548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244544u;
    // 0x244548: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x244544u, 0x24454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24454Cu;
label_24454c:
    // 0x24454c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_244550:
    if (ctx->pc == 0x244550u) {
        ctx->pc = 0x244550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24454Cu;
        // 0x244550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244554u;
        goto label_244554;
    }
    ctx->pc = 0x24454Cu;
    {
        const bool branch_taken_0x24454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24454Cu;
        // 0x244550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24454c) {
            ctx->pc = 0x244564u;
            goto label_244564;
        }
    }
    ctx->pc = 0x244554u;
label_244554:
    // 0x244554: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x244554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_244558:
    // 0x244558: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24455c:
    // 0x24455c: 0xc09c9b6  jal         func_2726D8
label_244560:
    if (ctx->pc == 0x244560u) {
        ctx->pc = 0x244560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24455Cu;
        // 0x244560: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244564u;
        goto label_244564;
    }
    ctx->pc = 0x24455Cu;
    SET_GPR_U32(ctx, 31, 0x244564u);
    ctx->pc = 0x244560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24455Cu;
    // 0x244560: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2726D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2726D8u, 0x24455Cu, 0x244564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244564u;
label_244564:
    // 0x244564: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_244568:
    if (ctx->pc == 0x244568u) {
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24456Cu;
        goto label_24456c;
    }
    ctx->pc = 0x244564u;
    {
        const bool branch_taken_0x244564 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244564) {
            ctx->pc = 0x244574u;
            goto label_244574;
        }
    }
    ctx->pc = 0x24456Cu;
label_24456c:
    // 0x24456c: 0xc09237c  jal         func_248DF0
label_244570:
    if (ctx->pc == 0x244570u) {
        ctx->pc = 0x244570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24456Cu;
        // 0x244570: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244574u;
        goto label_244574;
    }
    ctx->pc = 0x24456Cu;
    SET_GPR_U32(ctx, 31, 0x244574u);
    ctx->pc = 0x244570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24456Cu;
    // 0x244570: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x24456Cu, 0x244574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244574u;
label_244574:
    // 0x244574: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x244574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_244578:
    // 0x244578: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x244578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24457c:
    // 0x24457c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x24457cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_244580:
    // 0x244580: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x244580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_244584:
    // 0x244584: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x244584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_244588:
    // 0x244588: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x244588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24458c:
    // 0x24458c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x24458cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_244590:
    // 0x244590: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x244590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_244594:
    // 0x244594: 0xc7bd0138  lwc1        $f29, 0x138($sp)
    ctx->pc = 0x244594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_244598:
    // 0x244598: 0xc7bc0130  lwc1        $f28, 0x130($sp)
    ctx->pc = 0x244598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_24459c:
    // 0x24459c: 0xc7bb0128  lwc1        $f27, 0x128($sp)
    ctx->pc = 0x24459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2445a0:
    // 0x2445a0: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x2445a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2445a4:
    // 0x2445a4: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x2445a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2445a8:
    // 0x2445a8: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x2445a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2445ac:
    // 0x2445ac: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x2445acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2445b0:
    // 0x2445b0: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2445b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2445b4:
    // 0x2445b4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2445b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2445b8:
    // 0x2445b8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2445b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2445bc:
    // 0x2445bc: 0x3e00008  jr          $ra
label_2445c0:
    if (ctx->pc == 0x2445C0u) {
        ctx->pc = 0x2445C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445BCu;
        // 0x2445c0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445C4u;
        goto label_2445c4;
    }
    ctx->pc = 0x2445BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445BCu;
        // 0x2445c0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2445C4u;
label_2445c4:
    // 0x2445c4: 0x0  nop
    ctx->pc = 0x2445c4u;
    // NOP
label_2445c8:
    // 0x2445c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2445c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2445cc:
    // 0x2445cc: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2445ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_2445d0:
    // 0x2445d0: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x2445d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_2445d4:
    // 0x2445d4: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2445d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_2445d8:
    // 0x2445d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2445d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2445dc:
    // 0x2445dc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2445dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_2445e0:
    // 0x2445e0: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x2445e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_2445e4:
    // 0x2445e4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2445e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2445e8:
    // 0x2445e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2445ec:
    // 0x2445ec: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2445ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_2445f0:
    // 0x2445f0: 0x3e00008  jr          $ra
label_2445f4:
    if (ctx->pc == 0x2445F4u) {
        ctx->pc = 0x2445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F0u;
        // 0x2445f4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445F8u;
        goto label_fallthrough_0x2445f0;
    }
    ctx->pc = 0x2445F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F0u;
        // 0x2445f4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2445f0:
    ctx->pc = 0x2445F8u;
}
