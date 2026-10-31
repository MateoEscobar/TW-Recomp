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

// Function: sub_00262AC8
// Address: 0x262ac8 - 0x263380
void sub_00262AC8_0x262ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262AC8_0x262ac8");
#endif

    switch (ctx->pc) {
        case 0x262ac8u: goto label_262ac8;
        case 0x262accu: goto label_262acc;
        case 0x262ad0u: goto label_262ad0;
        case 0x262ad4u: goto label_262ad4;
        case 0x262ad8u: goto label_262ad8;
        case 0x262adcu: goto label_262adc;
        case 0x262ae0u: goto label_262ae0;
        case 0x262ae4u: goto label_262ae4;
        case 0x262ae8u: goto label_262ae8;
        case 0x262aecu: goto label_262aec;
        case 0x262af0u: goto label_262af0;
        case 0x262af4u: goto label_262af4;
        case 0x262af8u: goto label_262af8;
        case 0x262afcu: goto label_262afc;
        case 0x262b00u: goto label_262b00;
        case 0x262b04u: goto label_262b04;
        case 0x262b08u: goto label_262b08;
        case 0x262b0cu: goto label_262b0c;
        case 0x262b10u: goto label_262b10;
        case 0x262b14u: goto label_262b14;
        case 0x262b18u: goto label_262b18;
        case 0x262b1cu: goto label_262b1c;
        case 0x262b20u: goto label_262b20;
        case 0x262b24u: goto label_262b24;
        case 0x262b28u: goto label_262b28;
        case 0x262b2cu: goto label_262b2c;
        case 0x262b30u: goto label_262b30;
        case 0x262b34u: goto label_262b34;
        case 0x262b38u: goto label_262b38;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b40u: goto label_262b40;
        case 0x262b44u: goto label_262b44;
        case 0x262b48u: goto label_262b48;
        case 0x262b4cu: goto label_262b4c;
        case 0x262b50u: goto label_262b50;
        case 0x262b54u: goto label_262b54;
        case 0x262b58u: goto label_262b58;
        case 0x262b5cu: goto label_262b5c;
        case 0x262b60u: goto label_262b60;
        case 0x262b64u: goto label_262b64;
        case 0x262b68u: goto label_262b68;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b70u: goto label_262b70;
        case 0x262b74u: goto label_262b74;
        case 0x262b78u: goto label_262b78;
        case 0x262b7cu: goto label_262b7c;
        case 0x262b80u: goto label_262b80;
        case 0x262b84u: goto label_262b84;
        case 0x262b88u: goto label_262b88;
        case 0x262b8cu: goto label_262b8c;
        case 0x262b90u: goto label_262b90;
        case 0x262b94u: goto label_262b94;
        case 0x262b98u: goto label_262b98;
        case 0x262b9cu: goto label_262b9c;
        case 0x262ba0u: goto label_262ba0;
        case 0x262ba4u: goto label_262ba4;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bacu: goto label_262bac;
        case 0x262bb0u: goto label_262bb0;
        case 0x262bb4u: goto label_262bb4;
        case 0x262bb8u: goto label_262bb8;
        case 0x262bbcu: goto label_262bbc;
        case 0x262bc0u: goto label_262bc0;
        case 0x262bc4u: goto label_262bc4;
        case 0x262bc8u: goto label_262bc8;
        case 0x262bccu: goto label_262bcc;
        case 0x262bd0u: goto label_262bd0;
        case 0x262bd4u: goto label_262bd4;
        case 0x262bd8u: goto label_262bd8;
        case 0x262bdcu: goto label_262bdc;
        case 0x262be0u: goto label_262be0;
        case 0x262be4u: goto label_262be4;
        case 0x262be8u: goto label_262be8;
        case 0x262becu: goto label_262bec;
        case 0x262bf0u: goto label_262bf0;
        case 0x262bf4u: goto label_262bf4;
        case 0x262bf8u: goto label_262bf8;
        case 0x262bfcu: goto label_262bfc;
        case 0x262c00u: goto label_262c00;
        case 0x262c04u: goto label_262c04;
        case 0x262c08u: goto label_262c08;
        case 0x262c0cu: goto label_262c0c;
        case 0x262c10u: goto label_262c10;
        case 0x262c14u: goto label_262c14;
        case 0x262c18u: goto label_262c18;
        case 0x262c1cu: goto label_262c1c;
        case 0x262c20u: goto label_262c20;
        case 0x262c24u: goto label_262c24;
        case 0x262c28u: goto label_262c28;
        case 0x262c2cu: goto label_262c2c;
        case 0x262c30u: goto label_262c30;
        case 0x262c34u: goto label_262c34;
        case 0x262c38u: goto label_262c38;
        case 0x262c3cu: goto label_262c3c;
        case 0x262c40u: goto label_262c40;
        case 0x262c44u: goto label_262c44;
        case 0x262c48u: goto label_262c48;
        case 0x262c4cu: goto label_262c4c;
        case 0x262c50u: goto label_262c50;
        case 0x262c54u: goto label_262c54;
        case 0x262c58u: goto label_262c58;
        case 0x262c5cu: goto label_262c5c;
        case 0x262c60u: goto label_262c60;
        case 0x262c64u: goto label_262c64;
        case 0x262c68u: goto label_262c68;
        case 0x262c6cu: goto label_262c6c;
        case 0x262c70u: goto label_262c70;
        case 0x262c74u: goto label_262c74;
        case 0x262c78u: goto label_262c78;
        case 0x262c7cu: goto label_262c7c;
        case 0x262c80u: goto label_262c80;
        case 0x262c84u: goto label_262c84;
        case 0x262c88u: goto label_262c88;
        case 0x262c8cu: goto label_262c8c;
        case 0x262c90u: goto label_262c90;
        case 0x262c94u: goto label_262c94;
        case 0x262c98u: goto label_262c98;
        case 0x262c9cu: goto label_262c9c;
        case 0x262ca0u: goto label_262ca0;
        case 0x262ca4u: goto label_262ca4;
        case 0x262ca8u: goto label_262ca8;
        case 0x262cacu: goto label_262cac;
        case 0x262cb0u: goto label_262cb0;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cb8u: goto label_262cb8;
        case 0x262cbcu: goto label_262cbc;
        case 0x262cc0u: goto label_262cc0;
        case 0x262cc4u: goto label_262cc4;
        case 0x262cc8u: goto label_262cc8;
        case 0x262cccu: goto label_262ccc;
        case 0x262cd0u: goto label_262cd0;
        case 0x262cd4u: goto label_262cd4;
        case 0x262cd8u: goto label_262cd8;
        case 0x262cdcu: goto label_262cdc;
        case 0x262ce0u: goto label_262ce0;
        case 0x262ce4u: goto label_262ce4;
        case 0x262ce8u: goto label_262ce8;
        case 0x262cecu: goto label_262cec;
        case 0x262cf0u: goto label_262cf0;
        case 0x262cf4u: goto label_262cf4;
        case 0x262cf8u: goto label_262cf8;
        case 0x262cfcu: goto label_262cfc;
        case 0x262d00u: goto label_262d00;
        case 0x262d04u: goto label_262d04;
        case 0x262d08u: goto label_262d08;
        case 0x262d0cu: goto label_262d0c;
        case 0x262d10u: goto label_262d10;
        case 0x262d14u: goto label_262d14;
        case 0x262d18u: goto label_262d18;
        case 0x262d1cu: goto label_262d1c;
        case 0x262d20u: goto label_262d20;
        case 0x262d24u: goto label_262d24;
        case 0x262d28u: goto label_262d28;
        case 0x262d2cu: goto label_262d2c;
        case 0x262d30u: goto label_262d30;
        case 0x262d34u: goto label_262d34;
        case 0x262d38u: goto label_262d38;
        case 0x262d3cu: goto label_262d3c;
        case 0x262d40u: goto label_262d40;
        case 0x262d44u: goto label_262d44;
        case 0x262d48u: goto label_262d48;
        case 0x262d4cu: goto label_262d4c;
        case 0x262d50u: goto label_262d50;
        case 0x262d54u: goto label_262d54;
        case 0x262d58u: goto label_262d58;
        case 0x262d5cu: goto label_262d5c;
        case 0x262d60u: goto label_262d60;
        case 0x262d64u: goto label_262d64;
        case 0x262d68u: goto label_262d68;
        case 0x262d6cu: goto label_262d6c;
        case 0x262d70u: goto label_262d70;
        case 0x262d74u: goto label_262d74;
        case 0x262d78u: goto label_262d78;
        case 0x262d7cu: goto label_262d7c;
        case 0x262d80u: goto label_262d80;
        case 0x262d84u: goto label_262d84;
        case 0x262d88u: goto label_262d88;
        case 0x262d8cu: goto label_262d8c;
        case 0x262d90u: goto label_262d90;
        case 0x262d94u: goto label_262d94;
        case 0x262d98u: goto label_262d98;
        case 0x262d9cu: goto label_262d9c;
        case 0x262da0u: goto label_262da0;
        case 0x262da4u: goto label_262da4;
        case 0x262da8u: goto label_262da8;
        case 0x262dacu: goto label_262dac;
        case 0x262db0u: goto label_262db0;
        case 0x262db4u: goto label_262db4;
        case 0x262db8u: goto label_262db8;
        case 0x262dbcu: goto label_262dbc;
        case 0x262dc0u: goto label_262dc0;
        case 0x262dc4u: goto label_262dc4;
        case 0x262dc8u: goto label_262dc8;
        case 0x262dccu: goto label_262dcc;
        case 0x262dd0u: goto label_262dd0;
        case 0x262dd4u: goto label_262dd4;
        case 0x262dd8u: goto label_262dd8;
        case 0x262ddcu: goto label_262ddc;
        case 0x262de0u: goto label_262de0;
        case 0x262de4u: goto label_262de4;
        case 0x262de8u: goto label_262de8;
        case 0x262decu: goto label_262dec;
        case 0x262df0u: goto label_262df0;
        case 0x262df4u: goto label_262df4;
        case 0x262df8u: goto label_262df8;
        case 0x262dfcu: goto label_262dfc;
        case 0x262e00u: goto label_262e00;
        case 0x262e04u: goto label_262e04;
        case 0x262e08u: goto label_262e08;
        case 0x262e0cu: goto label_262e0c;
        case 0x262e10u: goto label_262e10;
        case 0x262e14u: goto label_262e14;
        case 0x262e18u: goto label_262e18;
        case 0x262e1cu: goto label_262e1c;
        case 0x262e20u: goto label_262e20;
        case 0x262e24u: goto label_262e24;
        case 0x262e28u: goto label_262e28;
        case 0x262e2cu: goto label_262e2c;
        case 0x262e30u: goto label_262e30;
        case 0x262e34u: goto label_262e34;
        case 0x262e38u: goto label_262e38;
        case 0x262e3cu: goto label_262e3c;
        case 0x262e40u: goto label_262e40;
        case 0x262e44u: goto label_262e44;
        case 0x262e48u: goto label_262e48;
        case 0x262e4cu: goto label_262e4c;
        case 0x262e50u: goto label_262e50;
        case 0x262e54u: goto label_262e54;
        case 0x262e58u: goto label_262e58;
        case 0x262e5cu: goto label_262e5c;
        case 0x262e60u: goto label_262e60;
        case 0x262e64u: goto label_262e64;
        case 0x262e68u: goto label_262e68;
        case 0x262e6cu: goto label_262e6c;
        case 0x262e70u: goto label_262e70;
        case 0x262e74u: goto label_262e74;
        case 0x262e78u: goto label_262e78;
        case 0x262e7cu: goto label_262e7c;
        case 0x262e80u: goto label_262e80;
        case 0x262e84u: goto label_262e84;
        case 0x262e88u: goto label_262e88;
        case 0x262e8cu: goto label_262e8c;
        case 0x262e90u: goto label_262e90;
        case 0x262e94u: goto label_262e94;
        case 0x262e98u: goto label_262e98;
        case 0x262e9cu: goto label_262e9c;
        case 0x262ea0u: goto label_262ea0;
        case 0x262ea4u: goto label_262ea4;
        case 0x262ea8u: goto label_262ea8;
        case 0x262eacu: goto label_262eac;
        case 0x262eb0u: goto label_262eb0;
        case 0x262eb4u: goto label_262eb4;
        case 0x262eb8u: goto label_262eb8;
        case 0x262ebcu: goto label_262ebc;
        case 0x262ec0u: goto label_262ec0;
        case 0x262ec4u: goto label_262ec4;
        case 0x262ec8u: goto label_262ec8;
        case 0x262eccu: goto label_262ecc;
        case 0x262ed0u: goto label_262ed0;
        case 0x262ed4u: goto label_262ed4;
        case 0x262ed8u: goto label_262ed8;
        case 0x262edcu: goto label_262edc;
        case 0x262ee0u: goto label_262ee0;
        case 0x262ee4u: goto label_262ee4;
        case 0x262ee8u: goto label_262ee8;
        case 0x262eecu: goto label_262eec;
        case 0x262ef0u: goto label_262ef0;
        case 0x262ef4u: goto label_262ef4;
        case 0x262ef8u: goto label_262ef8;
        case 0x262efcu: goto label_262efc;
        case 0x262f00u: goto label_262f00;
        case 0x262f04u: goto label_262f04;
        case 0x262f08u: goto label_262f08;
        case 0x262f0cu: goto label_262f0c;
        case 0x262f10u: goto label_262f10;
        case 0x262f14u: goto label_262f14;
        case 0x262f18u: goto label_262f18;
        case 0x262f1cu: goto label_262f1c;
        case 0x262f20u: goto label_262f20;
        case 0x262f24u: goto label_262f24;
        case 0x262f28u: goto label_262f28;
        case 0x262f2cu: goto label_262f2c;
        case 0x262f30u: goto label_262f30;
        case 0x262f34u: goto label_262f34;
        case 0x262f38u: goto label_262f38;
        case 0x262f3cu: goto label_262f3c;
        case 0x262f40u: goto label_262f40;
        case 0x262f44u: goto label_262f44;
        case 0x262f48u: goto label_262f48;
        case 0x262f4cu: goto label_262f4c;
        case 0x262f50u: goto label_262f50;
        case 0x262f54u: goto label_262f54;
        case 0x262f58u: goto label_262f58;
        case 0x262f5cu: goto label_262f5c;
        case 0x262f60u: goto label_262f60;
        case 0x262f64u: goto label_262f64;
        case 0x262f68u: goto label_262f68;
        case 0x262f6cu: goto label_262f6c;
        case 0x262f70u: goto label_262f70;
        case 0x262f74u: goto label_262f74;
        case 0x262f78u: goto label_262f78;
        case 0x262f7cu: goto label_262f7c;
        case 0x262f80u: goto label_262f80;
        case 0x262f84u: goto label_262f84;
        case 0x262f88u: goto label_262f88;
        case 0x262f8cu: goto label_262f8c;
        case 0x262f90u: goto label_262f90;
        case 0x262f94u: goto label_262f94;
        case 0x262f98u: goto label_262f98;
        case 0x262f9cu: goto label_262f9c;
        case 0x262fa0u: goto label_262fa0;
        case 0x262fa4u: goto label_262fa4;
        case 0x262fa8u: goto label_262fa8;
        case 0x262facu: goto label_262fac;
        case 0x262fb0u: goto label_262fb0;
        case 0x262fb4u: goto label_262fb4;
        case 0x262fb8u: goto label_262fb8;
        case 0x262fbcu: goto label_262fbc;
        case 0x262fc0u: goto label_262fc0;
        case 0x262fc4u: goto label_262fc4;
        case 0x262fc8u: goto label_262fc8;
        case 0x262fccu: goto label_262fcc;
        case 0x262fd0u: goto label_262fd0;
        case 0x262fd4u: goto label_262fd4;
        case 0x262fd8u: goto label_262fd8;
        case 0x262fdcu: goto label_262fdc;
        case 0x262fe0u: goto label_262fe0;
        case 0x262fe4u: goto label_262fe4;
        case 0x262fe8u: goto label_262fe8;
        case 0x262fecu: goto label_262fec;
        case 0x262ff0u: goto label_262ff0;
        case 0x262ff4u: goto label_262ff4;
        case 0x262ff8u: goto label_262ff8;
        case 0x262ffcu: goto label_262ffc;
        case 0x263000u: goto label_263000;
        case 0x263004u: goto label_263004;
        case 0x263008u: goto label_263008;
        case 0x26300cu: goto label_26300c;
        case 0x263010u: goto label_263010;
        case 0x263014u: goto label_263014;
        case 0x263018u: goto label_263018;
        case 0x26301cu: goto label_26301c;
        case 0x263020u: goto label_263020;
        case 0x263024u: goto label_263024;
        case 0x263028u: goto label_263028;
        case 0x26302cu: goto label_26302c;
        case 0x263030u: goto label_263030;
        case 0x263034u: goto label_263034;
        case 0x263038u: goto label_263038;
        case 0x26303cu: goto label_26303c;
        case 0x263040u: goto label_263040;
        case 0x263044u: goto label_263044;
        case 0x263048u: goto label_263048;
        case 0x26304cu: goto label_26304c;
        case 0x263050u: goto label_263050;
        case 0x263054u: goto label_263054;
        case 0x263058u: goto label_263058;
        case 0x26305cu: goto label_26305c;
        case 0x263060u: goto label_263060;
        case 0x263064u: goto label_263064;
        case 0x263068u: goto label_263068;
        case 0x26306cu: goto label_26306c;
        case 0x263070u: goto label_263070;
        case 0x263074u: goto label_263074;
        case 0x263078u: goto label_263078;
        case 0x26307cu: goto label_26307c;
        case 0x263080u: goto label_263080;
        case 0x263084u: goto label_263084;
        case 0x263088u: goto label_263088;
        case 0x26308cu: goto label_26308c;
        case 0x263090u: goto label_263090;
        case 0x263094u: goto label_263094;
        case 0x263098u: goto label_263098;
        case 0x26309cu: goto label_26309c;
        case 0x2630a0u: goto label_2630a0;
        case 0x2630a4u: goto label_2630a4;
        case 0x2630a8u: goto label_2630a8;
        case 0x2630acu: goto label_2630ac;
        case 0x2630b0u: goto label_2630b0;
        case 0x2630b4u: goto label_2630b4;
        case 0x2630b8u: goto label_2630b8;
        case 0x2630bcu: goto label_2630bc;
        case 0x2630c0u: goto label_2630c0;
        case 0x2630c4u: goto label_2630c4;
        case 0x2630c8u: goto label_2630c8;
        case 0x2630ccu: goto label_2630cc;
        case 0x2630d0u: goto label_2630d0;
        case 0x2630d4u: goto label_2630d4;
        case 0x2630d8u: goto label_2630d8;
        case 0x2630dcu: goto label_2630dc;
        case 0x2630e0u: goto label_2630e0;
        case 0x2630e4u: goto label_2630e4;
        case 0x2630e8u: goto label_2630e8;
        case 0x2630ecu: goto label_2630ec;
        case 0x2630f0u: goto label_2630f0;
        case 0x2630f4u: goto label_2630f4;
        case 0x2630f8u: goto label_2630f8;
        case 0x2630fcu: goto label_2630fc;
        case 0x263100u: goto label_263100;
        case 0x263104u: goto label_263104;
        case 0x263108u: goto label_263108;
        case 0x26310cu: goto label_26310c;
        case 0x263110u: goto label_263110;
        case 0x263114u: goto label_263114;
        case 0x263118u: goto label_263118;
        case 0x26311cu: goto label_26311c;
        case 0x263120u: goto label_263120;
        case 0x263124u: goto label_263124;
        case 0x263128u: goto label_263128;
        case 0x26312cu: goto label_26312c;
        case 0x263130u: goto label_263130;
        case 0x263134u: goto label_263134;
        case 0x263138u: goto label_263138;
        case 0x26313cu: goto label_26313c;
        case 0x263140u: goto label_263140;
        case 0x263144u: goto label_263144;
        case 0x263148u: goto label_263148;
        case 0x26314cu: goto label_26314c;
        case 0x263150u: goto label_263150;
        case 0x263154u: goto label_263154;
        case 0x263158u: goto label_263158;
        case 0x26315cu: goto label_26315c;
        case 0x263160u: goto label_263160;
        case 0x263164u: goto label_263164;
        case 0x263168u: goto label_263168;
        case 0x26316cu: goto label_26316c;
        case 0x263170u: goto label_263170;
        case 0x263174u: goto label_263174;
        case 0x263178u: goto label_263178;
        case 0x26317cu: goto label_26317c;
        case 0x263180u: goto label_263180;
        case 0x263184u: goto label_263184;
        case 0x263188u: goto label_263188;
        case 0x26318cu: goto label_26318c;
        case 0x263190u: goto label_263190;
        case 0x263194u: goto label_263194;
        case 0x263198u: goto label_263198;
        case 0x26319cu: goto label_26319c;
        case 0x2631a0u: goto label_2631a0;
        case 0x2631a4u: goto label_2631a4;
        case 0x2631a8u: goto label_2631a8;
        case 0x2631acu: goto label_2631ac;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631b4u: goto label_2631b4;
        case 0x2631b8u: goto label_2631b8;
        case 0x2631bcu: goto label_2631bc;
        case 0x2631c0u: goto label_2631c0;
        case 0x2631c4u: goto label_2631c4;
        case 0x2631c8u: goto label_2631c8;
        case 0x2631ccu: goto label_2631cc;
        case 0x2631d0u: goto label_2631d0;
        case 0x2631d4u: goto label_2631d4;
        case 0x2631d8u: goto label_2631d8;
        case 0x2631dcu: goto label_2631dc;
        case 0x2631e0u: goto label_2631e0;
        case 0x2631e4u: goto label_2631e4;
        case 0x2631e8u: goto label_2631e8;
        case 0x2631ecu: goto label_2631ec;
        case 0x2631f0u: goto label_2631f0;
        case 0x2631f4u: goto label_2631f4;
        case 0x2631f8u: goto label_2631f8;
        case 0x2631fcu: goto label_2631fc;
        case 0x263200u: goto label_263200;
        case 0x263204u: goto label_263204;
        case 0x263208u: goto label_263208;
        case 0x26320cu: goto label_26320c;
        case 0x263210u: goto label_263210;
        case 0x263214u: goto label_263214;
        case 0x263218u: goto label_263218;
        case 0x26321cu: goto label_26321c;
        case 0x263220u: goto label_263220;
        case 0x263224u: goto label_263224;
        case 0x263228u: goto label_263228;
        case 0x26322cu: goto label_26322c;
        case 0x263230u: goto label_263230;
        case 0x263234u: goto label_263234;
        case 0x263238u: goto label_263238;
        case 0x26323cu: goto label_26323c;
        case 0x263240u: goto label_263240;
        case 0x263244u: goto label_263244;
        case 0x263248u: goto label_263248;
        case 0x26324cu: goto label_26324c;
        case 0x263250u: goto label_263250;
        case 0x263254u: goto label_263254;
        case 0x263258u: goto label_263258;
        case 0x26325cu: goto label_26325c;
        case 0x263260u: goto label_263260;
        case 0x263264u: goto label_263264;
        case 0x263268u: goto label_263268;
        case 0x26326cu: goto label_26326c;
        case 0x263270u: goto label_263270;
        case 0x263274u: goto label_263274;
        case 0x263278u: goto label_263278;
        case 0x26327cu: goto label_26327c;
        case 0x263280u: goto label_263280;
        case 0x263284u: goto label_263284;
        case 0x263288u: goto label_263288;
        case 0x26328cu: goto label_26328c;
        case 0x263290u: goto label_263290;
        case 0x263294u: goto label_263294;
        case 0x263298u: goto label_263298;
        case 0x26329cu: goto label_26329c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632a4u: goto label_2632a4;
        case 0x2632a8u: goto label_2632a8;
        case 0x2632acu: goto label_2632ac;
        case 0x2632b0u: goto label_2632b0;
        case 0x2632b4u: goto label_2632b4;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632bcu: goto label_2632bc;
        case 0x2632c0u: goto label_2632c0;
        case 0x2632c4u: goto label_2632c4;
        case 0x2632c8u: goto label_2632c8;
        case 0x2632ccu: goto label_2632cc;
        case 0x2632d0u: goto label_2632d0;
        case 0x2632d4u: goto label_2632d4;
        case 0x2632d8u: goto label_2632d8;
        case 0x2632dcu: goto label_2632dc;
        case 0x2632e0u: goto label_2632e0;
        case 0x2632e4u: goto label_2632e4;
        case 0x2632e8u: goto label_2632e8;
        case 0x2632ecu: goto label_2632ec;
        case 0x2632f0u: goto label_2632f0;
        case 0x2632f4u: goto label_2632f4;
        case 0x2632f8u: goto label_2632f8;
        case 0x2632fcu: goto label_2632fc;
        case 0x263300u: goto label_263300;
        case 0x263304u: goto label_263304;
        case 0x263308u: goto label_263308;
        case 0x26330cu: goto label_26330c;
        case 0x263310u: goto label_263310;
        case 0x263314u: goto label_263314;
        case 0x263318u: goto label_263318;
        case 0x26331cu: goto label_26331c;
        case 0x263320u: goto label_263320;
        case 0x263324u: goto label_263324;
        case 0x263328u: goto label_263328;
        case 0x26332cu: goto label_26332c;
        case 0x263330u: goto label_263330;
        case 0x263334u: goto label_263334;
        case 0x263338u: goto label_263338;
        case 0x26333cu: goto label_26333c;
        case 0x263340u: goto label_263340;
        case 0x263344u: goto label_263344;
        case 0x263348u: goto label_263348;
        case 0x26334cu: goto label_26334c;
        case 0x263350u: goto label_263350;
        case 0x263354u: goto label_263354;
        case 0x263358u: goto label_263358;
        case 0x26335cu: goto label_26335c;
        case 0x263360u: goto label_263360;
        case 0x263364u: goto label_263364;
        case 0x263368u: goto label_263368;
        case 0x26336cu: goto label_26336c;
        case 0x263370u: goto label_263370;
        case 0x263374u: goto label_263374;
        case 0x263378u: goto label_263378;
        case 0x26337cu: goto label_26337c;
        default: break;
    }

    ctx->pc = 0x262ac8u;

label_262ac8:
    // 0x262ac8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_262acc:
    // 0x262acc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x262accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_262ad0:
    // 0x262ad0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x262ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_262ad4:
    // 0x262ad4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x262ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_262ad8:
    // 0x262ad8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_262adc:
    // 0x262adc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x262adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_262ae0:
    // 0x262ae0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x262ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262ae4:
    // 0x262ae4: 0x24de0001  addiu       $fp, $a2, 0x1
    ctx->pc = 0x262ae4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_262ae8:
    // 0x262ae8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_262aec:
    // 0x262aec: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x262aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_262af0:
    // 0x262af0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262af4:
    // 0x262af4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x262af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_262af8:
    // 0x262af8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x262af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_262afc:
    // 0x262afc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x262afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_262b00:
    // 0x262b00: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x262b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_262b04:
    // 0x262b04: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x262b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_262b08:
    // 0x262b08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x262b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_262b0c:
    // 0x262b0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x262b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_262b10:
    // 0x262b10: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x262b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
label_262b14:
    // 0x262b14: 0xc040698  jal         func_101A60
label_262b18:
    if (ctx->pc == 0x262B18u) {
        ctx->pc = 0x262B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B14u;
        // 0x262b18: 0xafa80038  sw          $t0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B1Cu;
        goto label_262b1c;
    }
    ctx->pc = 0x262B14u;
    SET_GPR_U32(ctx, 31, 0x262B1Cu);
    ctx->pc = 0x262B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B14u;
    // 0x262b18: 0xafa80038  sw          $t0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x262B14u, 0x262B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B1Cu;
label_262b1c:
    // 0x262b1c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x262b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_262b20:
    // 0x262b20: 0xc088ee6  jal         func_223B98
label_262b24:
    if (ctx->pc == 0x262B24u) {
        ctx->pc = 0x262B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B20u;
        // 0x262b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B28u;
        goto label_262b28;
    }
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x262B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B20u;
    // 0x262b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x262B20u, 0x262B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_262b2c:
    if (ctx->pc == 0x262B2Cu) {
        ctx->pc = 0x262B30u;
        goto label_262b30;
    }
    ctx->pc = 0x262B28u;
    {
        const bool branch_taken_0x262b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262b28) {
            ctx->pc = 0x262B4Cu;
            goto label_262b4c;
        }
    }
    ctx->pc = 0x262B30u;
label_262b30:
    // 0x262b30: 0xc095018  jal         func_254060
label_262b34:
    if (ctx->pc == 0x262B34u) {
        ctx->pc = 0x262B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B30u;
        // 0x262b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B38u;
        goto label_262b38;
    }
    ctx->pc = 0x262B30u;
    SET_GPR_U32(ctx, 31, 0x262B38u);
    ctx->pc = 0x262B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B30u;
    // 0x262b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x262B30u, 0x262B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B38u;
label_262b38:
    // 0x262b38: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x262b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_262b3c:
    // 0x262b3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_262b40:
    if (ctx->pc == 0x262B40u) {
        ctx->pc = 0x262B44u;
        goto label_262b44;
    }
    ctx->pc = 0x262B3Cu;
    {
        const bool branch_taken_0x262b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262b3c) {
            ctx->pc = 0x262B4Cu;
            goto label_262b4c;
        }
    }
    ctx->pc = 0x262B44u;
label_262b44:
    // 0x262b44: 0xc094fca  jal         func_253F28
label_262b48:
    if (ctx->pc == 0x262B48u) {
        ctx->pc = 0x262B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B44u;
        // 0x262b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B4Cu;
        goto label_262b4c;
    }
    ctx->pc = 0x262B44u;
    SET_GPR_U32(ctx, 31, 0x262B4Cu);
    ctx->pc = 0x262B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B44u;
    // 0x262b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x262B44u, 0x262B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B4Cu;
label_262b4c:
    // 0x262b4c: 0x12400200  beqz        $s2, . + 4 + (0x200 << 2)
label_262b50:
    if (ctx->pc == 0x262B50u) {
        ctx->pc = 0x262B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B4Cu;
        // 0x262b50: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B54u;
        goto label_262b54;
    }
    ctx->pc = 0x262B4Cu;
    {
        const bool branch_taken_0x262b4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B4Cu;
        // 0x262b50: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b4c) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262B54u;
label_262b54:
    // 0x262b54: 0xc088e78  jal         func_2239E0
label_262b58:
    if (ctx->pc == 0x262B58u) {
        ctx->pc = 0x262B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B54u;
        // 0x262b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B5Cu;
        goto label_262b5c;
    }
    ctx->pc = 0x262B54u;
    SET_GPR_U32(ctx, 31, 0x262B5Cu);
    ctx->pc = 0x262B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B54u;
    // 0x262b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x262B54u, 0x262B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B5Cu;
label_262b5c:
    // 0x262b5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_262b60:
    if (ctx->pc == 0x262B60u) {
        ctx->pc = 0x262B64u;
        goto label_262b64;
    }
    ctx->pc = 0x262B5Cu;
    {
        const bool branch_taken_0x262b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262b5c) {
            ctx->pc = 0x262B74u;
            goto label_262b74;
        }
    }
    ctx->pc = 0x262B64u;
label_262b64:
    // 0x262b64: 0xc088e80  jal         func_223A00
label_262b68:
    if (ctx->pc == 0x262B68u) {
        ctx->pc = 0x262B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B64u;
        // 0x262b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B6Cu;
        goto label_262b6c;
    }
    ctx->pc = 0x262B64u;
    SET_GPR_U32(ctx, 31, 0x262B6Cu);
    ctx->pc = 0x262B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B64u;
    // 0x262b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x262B64u, 0x262B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B6Cu;
label_262b6c:
    // 0x262b6c: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
label_262b70:
    if (ctx->pc == 0x262B70u) {
        ctx->pc = 0x262B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B6Cu;
        // 0x262b70: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B74u;
        goto label_262b74;
    }
    ctx->pc = 0x262B6Cu;
    {
        const bool branch_taken_0x262b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B6Cu;
        // 0x262b70: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b6c) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262B74u;
label_262b74:
    // 0x262b74: 0xc088e78  jal         func_2239E0
label_262b78:
    if (ctx->pc == 0x262B78u) {
        ctx->pc = 0x262B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B74u;
        // 0x262b78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B7Cu;
        goto label_262b7c;
    }
    ctx->pc = 0x262B74u;
    SET_GPR_U32(ctx, 31, 0x262B7Cu);
    ctx->pc = 0x262B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B74u;
    // 0x262b78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x262B74u, 0x262B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B7Cu;
label_262b7c:
    // 0x262b7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_262b80:
    if (ctx->pc == 0x262B80u) {
        ctx->pc = 0x262B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B7Cu;
        // 0x262b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B84u;
        goto label_262b84;
    }
    ctx->pc = 0x262B7Cu;
    {
        const bool branch_taken_0x262b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B7Cu;
        // 0x262b80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b7c) {
            ctx->pc = 0x262B98u;
            goto label_262b98;
        }
    }
    ctx->pc = 0x262B84u;
label_262b84:
    // 0x262b84: 0xc088e80  jal         func_223A00
label_262b88:
    if (ctx->pc == 0x262B88u) {
        ctx->pc = 0x262B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B84u;
        // 0x262b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B8Cu;
        goto label_262b8c;
    }
    ctx->pc = 0x262B84u;
    SET_GPR_U32(ctx, 31, 0x262B8Cu);
    ctx->pc = 0x262B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B84u;
    // 0x262b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x262B84u, 0x262B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B8Cu;
label_262b8c:
    // 0x262b8c: 0x144001f0  bnez        $v0, . + 4 + (0x1F0 << 2)
label_262b90:
    if (ctx->pc == 0x262B90u) {
        ctx->pc = 0x262B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B8Cu;
        // 0x262b90: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B94u;
        goto label_262b94;
    }
    ctx->pc = 0x262B8Cu;
    {
        const bool branch_taken_0x262b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B8Cu;
        // 0x262b90: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b8c) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262B94u;
label_262b94:
    // 0x262b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262b98:
    // 0x262b98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262b9c:
    // 0x262b9c: 0xc099cb4  jal         func_2672D0
label_262ba0:
    if (ctx->pc == 0x262BA0u) {
        ctx->pc = 0x262BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B9Cu;
        // 0x262ba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BA4u;
        goto label_262ba4;
    }
    ctx->pc = 0x262B9Cu;
    SET_GPR_U32(ctx, 31, 0x262BA4u);
    ctx->pc = 0x262BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B9Cu;
    // 0x262ba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x262B9Cu, 0x262BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BA4u;
label_262ba4:
    // 0x262ba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262ba8:
    // 0x262ba8: 0xc0e409a  jal         func_390268
label_262bac:
    if (ctx->pc == 0x262BACu) {
        ctx->pc = 0x262BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BA8u;
        // 0x262bac: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BB0u;
        goto label_262bb0;
    }
    ctx->pc = 0x262BA8u;
    SET_GPR_U32(ctx, 31, 0x262BB0u);
    ctx->pc = 0x262BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BA8u;
    // 0x262bac: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262BA8u, 0x262BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BB0u;
label_262bb0:
    // 0x262bb0: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
label_262bb4:
    if (ctx->pc == 0x262BB4u) {
        ctx->pc = 0x262BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BB0u;
        // 0x262bb4: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BB8u;
        goto label_262bb8;
    }
    ctx->pc = 0x262BB0u;
    {
        const bool branch_taken_0x262bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x262BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BB0u;
        // 0x262bb4: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bb0) {
            ctx->pc = 0x262BE0u;
            goto label_262be0;
        }
    }
    ctx->pc = 0x262BB8u;
label_262bb8:
    // 0x262bb8: 0x124001e4  beqz        $s2, . + 4 + (0x1E4 << 2)
label_262bbc:
    if (ctx->pc == 0x262BBCu) {
        ctx->pc = 0x262BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BB8u;
        // 0x262bbc: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BC0u;
        goto label_262bc0;
    }
    ctx->pc = 0x262BB8u;
    {
        const bool branch_taken_0x262bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BB8u;
        // 0x262bbc: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bb8) {
            ctx->pc = 0x26334Cu;
            goto label_26334c;
        }
    }
    ctx->pc = 0x262BC0u;
label_262bc0:
    // 0x262bc0: 0x2e060001  sltiu       $a2, $s0, 0x1
    ctx->pc = 0x262bc0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_262bc4:
    // 0x262bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262bc8:
    // 0x262bc8: 0xc09dec8  jal         func_277B20
label_262bcc:
    if (ctx->pc == 0x262BCCu) {
        ctx->pc = 0x262BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BC8u;
        // 0x262bcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BD0u;
        goto label_262bd0;
    }
    ctx->pc = 0x262BC8u;
    SET_GPR_U32(ctx, 31, 0x262BD0u);
    ctx->pc = 0x262BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BC8u;
    // 0x262bcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B20u, 0x262BC8u, 0x262BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BD0u;
label_262bd0:
    // 0x262bd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_262bd4:
    if (ctx->pc == 0x262BD4u) {
        ctx->pc = 0x262BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD0u;
        // 0x262bd4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BD8u;
        goto label_262bd8;
    }
    ctx->pc = 0x262BD0u;
    {
        const bool branch_taken_0x262bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD0u;
        // 0x262bd4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bd0) {
            ctx->pc = 0x262C20u;
            goto label_262c20;
        }
    }
    ctx->pc = 0x262BD8u;
label_262bd8:
    // 0x262bd8: 0x100001dd  b           . + 4 + (0x1DD << 2)
label_262bdc:
    if (ctx->pc == 0x262BDCu) {
        ctx->pc = 0x262BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD8u;
        // 0x262bdc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BE0u;
        goto label_262be0;
    }
    ctx->pc = 0x262BD8u;
    {
        const bool branch_taken_0x262bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD8u;
        // 0x262bdc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bd8) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262BE0u;
label_262be0:
    // 0x262be0: 0x2862009b  slti        $v0, $v1, 0x9B
    ctx->pc = 0x262be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)155) ? 1 : 0);
label_262be4:
    // 0x262be4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_262be8:
    // 0x262be8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_262bec:
    if (ctx->pc == 0x262BECu) {
        ctx->pc = 0x262BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE8u;
        // 0x262bec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BF0u;
        goto label_262bf0;
    }
    ctx->pc = 0x262BE8u;
    {
        const bool branch_taken_0x262be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE8u;
        // 0x262bec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262be8) {
            ctx->pc = 0x262C00u;
            goto label_262c00;
        }
    }
    ctx->pc = 0x262BF0u;
label_262bf0:
    // 0x262bf0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x262bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_262bf4:
    // 0x262bf4: 0x288200a4  slti        $v0, $a0, 0xA4
    ctx->pc = 0x262bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)164) ? 1 : 0);
label_262bf8:
    // 0x262bf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_262bfc:
    if (ctx->pc == 0x262BFCu) {
        ctx->pc = 0x262C00u;
        goto label_262c00;
    }
    ctx->pc = 0x262BF8u;
    {
        const bool branch_taken_0x262bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262bf8) {
            ctx->pc = 0x262C14u;
            goto label_262c14;
        }
    }
    ctx->pc = 0x262C00u;
label_262c00:
    // 0x262c00: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x262c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_262c04:
    // 0x262c04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262c08:
    // 0x262c08: 0xc09de56  jal         func_277958
label_262c0c:
    if (ctx->pc == 0x262C0Cu) {
        ctx->pc = 0x262C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C08u;
        // 0x262c0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C10u;
        goto label_262c10;
    }
    ctx->pc = 0x262C08u;
    SET_GPR_U32(ctx, 31, 0x262C10u);
    ctx->pc = 0x262C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C08u;
    // 0x262c0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277958u, 0x262C08u, 0x262C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C10u;
label_262c10:
    // 0x262c10: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x262c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_262c14:
    // 0x262c14: 0x146001ce  bnez        $v1, . + 4 + (0x1CE << 2)
label_262c18:
    if (ctx->pc == 0x262C18u) {
        ctx->pc = 0x262C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C14u;
        // 0x262c18: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C1Cu;
        goto label_262c1c;
    }
    ctx->pc = 0x262C14u;
    {
        const bool branch_taken_0x262c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C14u;
        // 0x262c18: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c14) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262C1Cu;
label_262c1c:
    // 0x262c1c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_262c20:
    // 0x262c20: 0xc0950ba  jal         func_2542E8
label_262c24:
    if (ctx->pc == 0x262C24u) {
        ctx->pc = 0x262C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C20u;
        // 0x262c24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C28u;
        goto label_262c28;
    }
    ctx->pc = 0x262C20u;
    SET_GPR_U32(ctx, 31, 0x262C28u);
    ctx->pc = 0x262C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C20u;
    // 0x262c24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x262C20u, 0x262C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C28u;
label_262c28:
    // 0x262c28: 0xc10b1c6  jal         func_42C718
label_262c2c:
    if (ctx->pc == 0x262C2Cu) {
        ctx->pc = 0x262C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C28u;
        // 0x262c2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C30u;
        goto label_262c30;
    }
    ctx->pc = 0x262C28u;
    SET_GPR_U32(ctx, 31, 0x262C30u);
    ctx->pc = 0x262C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C28u;
    // 0x262c2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x262C28u, 0x262C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C30u;
label_262c30:
    // 0x262c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262c34:
    // 0x262c34: 0xc08c6a0  jal         func_231A80
label_262c38:
    if (ctx->pc == 0x262C38u) {
        ctx->pc = 0x262C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C34u;
        // 0x262c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C3Cu;
        goto label_262c3c;
    }
    ctx->pc = 0x262C34u;
    SET_GPR_U32(ctx, 31, 0x262C3Cu);
    ctx->pc = 0x262C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C34u;
    // 0x262c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x262C34u, 0x262C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C3Cu;
label_262c3c:
    // 0x262c3c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_262c40:
    if (ctx->pc == 0x262C40u) {
        ctx->pc = 0x262C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C3Cu;
        // 0x262c40: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C44u;
        goto label_262c44;
    }
    ctx->pc = 0x262C3Cu;
    {
        const bool branch_taken_0x262c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c3c) {
            ctx->pc = 0x262C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262C3Cu;
            // 0x262c40: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262C94u;
            goto label_262c94;
        }
    }
    ctx->pc = 0x262C44u;
label_262c44:
    // 0x262c44: 0xc088ade  jal         func_222B78
label_262c48:
    if (ctx->pc == 0x262C48u) {
        ctx->pc = 0x262C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C44u;
        // 0x262c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C4Cu;
        goto label_262c4c;
    }
    ctx->pc = 0x262C44u;
    SET_GPR_U32(ctx, 31, 0x262C4Cu);
    ctx->pc = 0x262C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C44u;
    // 0x262c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x262C44u, 0x262C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C4Cu;
label_262c4c:
    // 0x262c4c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_262c50:
    if (ctx->pc == 0x262C50u) {
        ctx->pc = 0x262C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C4Cu;
        // 0x262c50: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C54u;
        goto label_262c54;
    }
    ctx->pc = 0x262C4Cu;
    {
        const bool branch_taken_0x262c4c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x262C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C4Cu;
        // 0x262c50: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c4c) {
            ctx->pc = 0x262C68u;
            goto label_262c68;
        }
    }
    ctx->pc = 0x262C54u;
label_262c54:
    // 0x262c54: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x262c54u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262c58:
    // 0x262c58: 0x0  nop
    ctx->pc = 0x262c58u;
    // NOP
label_262c5c:
    // 0x262c5c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x262c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_262c60:
    // 0x262c60: 0x10000008  b           . + 4 + (0x8 << 2)
label_262c64:
    if (ctx->pc == 0x262C64u) {
        ctx->pc = 0x262C68u;
        goto label_262c68;
    }
    ctx->pc = 0x262C60u;
    {
        const bool branch_taken_0x262c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c60) {
            ctx->pc = 0x262C84u;
            goto label_262c84;
        }
    }
    ctx->pc = 0x262C68u;
label_262c68:
    // 0x262c68: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x262c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_262c6c:
    // 0x262c6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x262c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_262c70:
    // 0x262c70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x262c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_262c74:
    // 0x262c74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x262c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262c78:
    // 0x262c78: 0x0  nop
    ctx->pc = 0x262c78u;
    // NOP
label_262c7c:
    // 0x262c7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x262c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_262c80:
    // 0x262c80: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x262c80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_262c84:
    // 0x262c84: 0xc10b1c6  jal         func_42C718
label_262c88:
    if (ctx->pc == 0x262C88u) {
        ctx->pc = 0x262C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C84u;
        // 0x262c88: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C8Cu;
        goto label_262c8c;
    }
    ctx->pc = 0x262C84u;
    SET_GPR_U32(ctx, 31, 0x262C8Cu);
    ctx->pc = 0x262C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C84u;
    // 0x262c88: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x262C84u, 0x262C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C8Cu;
label_262c8c:
    // 0x262c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262c90:
    // 0x262c90: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x262c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_262c94:
    // 0x262c94: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_262c98:
    // 0x262c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262c9c:
    // 0x262c9c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x262c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_262ca0:
    // 0x262ca0: 0xc088e78  jal         func_2239E0
label_262ca4:
    if (ctx->pc == 0x262CA4u) {
        ctx->pc = 0x262CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CA0u;
        // 0x262ca4: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CA8u;
        goto label_262ca8;
    }
    ctx->pc = 0x262CA0u;
    SET_GPR_U32(ctx, 31, 0x262CA8u);
    ctx->pc = 0x262CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CA0u;
    // 0x262ca4: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x262CA0u, 0x262CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CA8u;
label_262ca8:
    // 0x262ca8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_262cac:
    if (ctx->pc == 0x262CACu) {
        ctx->pc = 0x262CB0u;
        goto label_262cb0;
    }
    ctx->pc = 0x262CA8u;
    {
        const bool branch_taken_0x262ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ca8) {
            ctx->pc = 0x262D10u;
            goto label_262d10;
        }
    }
    ctx->pc = 0x262CB0u;
label_262cb0:
    // 0x262cb0: 0xc088e80  jal         func_223A00
label_262cb4:
    if (ctx->pc == 0x262CB4u) {
        ctx->pc = 0x262CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CB0u;
        // 0x262cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CB8u;
        goto label_262cb8;
    }
    ctx->pc = 0x262CB0u;
    SET_GPR_U32(ctx, 31, 0x262CB8u);
    ctx->pc = 0x262CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CB0u;
    // 0x262cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x262CB0u, 0x262CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CB8u;
label_262cb8:
    // 0x262cb8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_262cbc:
    if (ctx->pc == 0x262CBCu) {
        ctx->pc = 0x262CC0u;
        goto label_262cc0;
    }
    ctx->pc = 0x262CB8u;
    {
        const bool branch_taken_0x262cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262cb8) {
            ctx->pc = 0x262D10u;
            goto label_262d10;
        }
    }
    ctx->pc = 0x262CC0u;
label_262cc0:
    // 0x262cc0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_262cc4:
    if (ctx->pc == 0x262CC4u) {
        ctx->pc = 0x262CC8u;
        goto label_262cc8;
    }
    ctx->pc = 0x262CC0u;
    {
        const bool branch_taken_0x262cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x262cc0) {
            ctx->pc = 0x262CF0u;
            goto label_262cf0;
        }
    }
    ctx->pc = 0x262CC8u;
label_262cc8:
    // 0x262cc8: 0xc089944  jal         func_226510
label_262ccc:
    if (ctx->pc == 0x262CCCu) {
        ctx->pc = 0x262CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CC8u;
        // 0x262ccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CD0u;
        goto label_262cd0;
    }
    ctx->pc = 0x262CC8u;
    SET_GPR_U32(ctx, 31, 0x262CD0u);
    ctx->pc = 0x262CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CC8u;
    // 0x262ccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x262CC8u, 0x262CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CD0u;
label_262cd0:
    // 0x262cd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_262cd4:
    // 0x262cd4: 0xc44c0278  lwc1        $f12, 0x278($v0)
    ctx->pc = 0x262cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_262cd8:
    // 0x262cd8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x262cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262cdc:
    // 0x262cdc: 0x0  nop
    ctx->pc = 0x262cdcu;
    // NOP
label_262ce0:
    // 0x262ce0: 0x4500019b  bc1f        . + 4 + (0x19B << 2)
label_262ce4:
    if (ctx->pc == 0x262CE4u) {
        ctx->pc = 0x262CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CE0u;
        // 0x262ce4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CE8u;
        goto label_262ce8;
    }
    ctx->pc = 0x262CE0u;
    {
        const bool branch_taken_0x262ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CE0u;
        // 0x262ce4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ce0) {
            ctx->pc = 0x263350u;
            goto label_263350;
        }
    }
    ctx->pc = 0x262CE8u;
label_262ce8:
    // 0x262ce8: 0xc089912  jal         func_226448
label_262cec:
    if (ctx->pc == 0x262CECu) {
        ctx->pc = 0x262CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CE8u;
        // 0x262cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CF0u;
        goto label_262cf0;
    }
    ctx->pc = 0x262CE8u;
    SET_GPR_U32(ctx, 31, 0x262CF0u);
    ctx->pc = 0x262CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CE8u;
    // 0x262cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x262CE8u, 0x262CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CF0u;
label_262cf0:
    // 0x262cf0: 0xc098a30  jal         func_2628C0
label_262cf4:
    if (ctx->pc == 0x262CF4u) {
        ctx->pc = 0x262CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CF0u;
        // 0x262cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262CF8u;
        goto label_262cf8;
    }
    ctx->pc = 0x262CF0u;
    SET_GPR_U32(ctx, 31, 0x262CF8u);
    ctx->pc = 0x262CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CF0u;
    // 0x262cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2628C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2628C0u, 0x262CF0u, 0x262CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CF8u;
label_262cf8:
    // 0x262cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262cfc:
    // 0x262cfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262d00:
    // 0x262d00: 0xc08ae58  jal         func_22B960
label_262d04:
    if (ctx->pc == 0x262D04u) {
        ctx->pc = 0x262D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D00u;
        // 0x262d04: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D08u;
        goto label_262d08;
    }
    ctx->pc = 0x262D00u;
    SET_GPR_U32(ctx, 31, 0x262D08u);
    ctx->pc = 0x262D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D00u;
    // 0x262d04: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x262D00u, 0x262D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D08u;
label_262d08:
    // 0x262d08: 0x10000018  b           . + 4 + (0x18 << 2)
label_262d0c:
    if (ctx->pc == 0x262D0Cu) {
        ctx->pc = 0x262D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D08u;
        // 0x262d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D10u;
        goto label_262d10;
    }
    ctx->pc = 0x262D08u;
    {
        const bool branch_taken_0x262d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D08u;
        // 0x262d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d08) {
            ctx->pc = 0x262D6Cu;
            goto label_262d6c;
        }
    }
    ctx->pc = 0x262D10u;
label_262d10:
    // 0x262d10: 0xc0899ae  jal         func_2266B8
label_262d14:
    if (ctx->pc == 0x262D14u) {
        ctx->pc = 0x262D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D10u;
        // 0x262d14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D18u;
        goto label_262d18;
    }
    ctx->pc = 0x262D10u;
    SET_GPR_U32(ctx, 31, 0x262D18u);
    ctx->pc = 0x262D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D10u;
    // 0x262d14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x262D10u, 0x262D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D18u;
label_262d18:
    // 0x262d18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x262d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262d1c:
    // 0x262d1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262d20:
    // 0x262d20: 0xc0993e8  jal         func_264FA0
label_262d24:
    if (ctx->pc == 0x262D24u) {
        ctx->pc = 0x262D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D20u;
        // 0x262d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D28u;
        goto label_262d28;
    }
    ctx->pc = 0x262D20u;
    SET_GPR_U32(ctx, 31, 0x262D28u);
    ctx->pc = 0x262D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D20u;
    // 0x262d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x262D20u, 0x262D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D28u;
label_262d28:
    // 0x262d28: 0xc098a48  jal         func_262920
label_262d2c:
    if (ctx->pc == 0x262D2Cu) {
        ctx->pc = 0x262D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D28u;
        // 0x262d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D30u;
        goto label_262d30;
    }
    ctx->pc = 0x262D28u;
    SET_GPR_U32(ctx, 31, 0x262D30u);
    ctx->pc = 0x262D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D28u;
    // 0x262d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262920u, 0x262D28u, 0x262D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D30u;
label_262d30:
    // 0x262d30: 0xc089f86  jal         func_227E18
label_262d34:
    if (ctx->pc == 0x262D34u) {
        ctx->pc = 0x262D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D30u;
        // 0x262d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D38u;
        goto label_262d38;
    }
    ctx->pc = 0x262D30u;
    SET_GPR_U32(ctx, 31, 0x262D38u);
    ctx->pc = 0x262D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D30u;
    // 0x262d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x262D30u, 0x262D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D38u;
label_262d38:
    // 0x262d38: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_262d3c:
    if (ctx->pc == 0x262D3Cu) {
        ctx->pc = 0x262D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D38u;
        // 0x262d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D40u;
        goto label_262d40;
    }
    ctx->pc = 0x262D38u;
    {
        const bool branch_taken_0x262d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D38u;
        // 0x262d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d38) {
            ctx->pc = 0x262D6Cu;
            goto label_262d6c;
        }
    }
    ctx->pc = 0x262D40u;
label_262d40:
    // 0x262d40: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_262d44:
    // 0x262d44: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_262d48:
    if (ctx->pc == 0x262D48u) {
        ctx->pc = 0x262D4Cu;
        goto label_262d4c;
    }
    ctx->pc = 0x262D44u;
    {
        const bool branch_taken_0x262d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d44) {
            ctx->pc = 0x262D6Cu;
            goto label_262d6c;
        }
    }
    ctx->pc = 0x262D4Cu;
label_262d4c:
    // 0x262d4c: 0xc095018  jal         func_254060
label_262d50:
    if (ctx->pc == 0x262D50u) {
        ctx->pc = 0x262D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D4Cu;
        // 0x262d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D54u;
        goto label_262d54;
    }
    ctx->pc = 0x262D4Cu;
    SET_GPR_U32(ctx, 31, 0x262D54u);
    ctx->pc = 0x262D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D4Cu;
    // 0x262d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x262D4Cu, 0x262D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D54u;
label_262d54:
    // 0x262d54: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x262d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_262d58:
    // 0x262d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_262d5c:
    if (ctx->pc == 0x262D5Cu) {
        ctx->pc = 0x262D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D58u;
        // 0x262d5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D60u;
        goto label_262d60;
    }
    ctx->pc = 0x262D58u;
    {
        const bool branch_taken_0x262d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D58u;
        // 0x262d5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d58) {
            ctx->pc = 0x262D68u;
            goto label_262d68;
        }
    }
    ctx->pc = 0x262D60u;
label_262d60:
    // 0x262d60: 0xc094fb4  jal         func_253ED0
label_262d64:
    if (ctx->pc == 0x262D64u) {
        ctx->pc = 0x262D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D60u;
        // 0x262d64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D68u;
        goto label_262d68;
    }
    ctx->pc = 0x262D60u;
    SET_GPR_U32(ctx, 31, 0x262D68u);
    ctx->pc = 0x262D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D60u;
    // 0x262d64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x262D60u, 0x262D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D68u;
label_262d68:
    // 0x262d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262d6c:
    // 0x262d6c: 0xc09970a  jal         func_265C28
label_262d70:
    if (ctx->pc == 0x262D70u) {
        ctx->pc = 0x262D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D6Cu;
        // 0x262d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D74u;
        goto label_262d74;
    }
    ctx->pc = 0x262D6Cu;
    SET_GPR_U32(ctx, 31, 0x262D74u);
    ctx->pc = 0x262D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D6Cu;
    // 0x262d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x262D6Cu, 0x262D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D74u;
label_262d74:
    // 0x262d74: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_262d78:
    if (ctx->pc == 0x262D78u) {
        ctx->pc = 0x262D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D74u;
        // 0x262d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D7Cu;
        goto label_262d7c;
    }
    ctx->pc = 0x262D74u;
    {
        const bool branch_taken_0x262d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D74u;
        // 0x262d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d74) {
            ctx->pc = 0x262F14u;
            goto label_262f14;
        }
    }
    ctx->pc = 0x262D7Cu;
label_262d7c:
    // 0x262d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262d80:
    // 0x262d80: 0xc0899d8  jal         func_226760
label_262d84:
    if (ctx->pc == 0x262D84u) {
        ctx->pc = 0x262D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D80u;
        // 0x262d84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D88u;
        goto label_262d88;
    }
    ctx->pc = 0x262D80u;
    SET_GPR_U32(ctx, 31, 0x262D88u);
    ctx->pc = 0x262D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D80u;
    // 0x262d84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x262D80u, 0x262D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D88u;
label_262d88:
    // 0x262d88: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x262d88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_262d8c:
    // 0x262d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262d90:
    // 0x262d90: 0xc087b0e  jal         func_21EC38
label_262d94:
    if (ctx->pc == 0x262D94u) {
        ctx->pc = 0x262D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D90u;
        // 0x262d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D98u;
        goto label_262d98;
    }
    ctx->pc = 0x262D90u;
    SET_GPR_U32(ctx, 31, 0x262D98u);
    ctx->pc = 0x262D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D90u;
    // 0x262d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x262D90u, 0x262D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D98u;
label_262d98:
    // 0x262d98: 0x2614dd30  addiu       $s4, $s0, -0x22D0
    ctx->pc = 0x262d98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_262d9c:
    // 0x262d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262da0:
    // 0x262da0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x262da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_262da4:
    // 0x262da4: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x262da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_262da8:
    // 0x262da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262dac:
    // 0x262dac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x262dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_262db0:
    // 0x262db0: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x262db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_262db4:
    // 0x262db4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x262db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_262db8:
    // 0x262db8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x262db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_262dbc:
    // 0x262dbc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x262dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_262dc0:
    // 0x262dc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_262dc4:
    // 0x262dc4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x262dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_262dc8:
    // 0x262dc8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_262dcc:
    // 0x262dcc: 0x40f809  jalr        $v0
label_262dd0:
    if (ctx->pc == 0x262DD0u) {
        ctx->pc = 0x262DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DCCu;
        // 0x262dd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262DD4u;
        goto label_262dd4;
    }
    ctx->pc = 0x262DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262DD4u);
        ctx->pc = 0x262DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DCCu;
        // 0x262dd0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DCCu, 0x262DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262DD4u;
label_262dd4:
    // 0x262dd4: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262dd8:
    // 0x262dd8: 0xc041532  jal         func_1054C8
label_262ddc:
    if (ctx->pc == 0x262DDCu) {
        ctx->pc = 0x262DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DD8u;
        // 0x262ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262DE0u;
        goto label_262de0;
    }
    ctx->pc = 0x262DD8u;
    SET_GPR_U32(ctx, 31, 0x262DE0u);
    ctx->pc = 0x262DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DD8u;
    // 0x262ddc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262DD8u, 0x262DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262DE0u;
label_262de0:
    // 0x262de0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x262de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262de4:
    // 0x262de4: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_262de8:
    if (ctx->pc == 0x262DE8u) {
        ctx->pc = 0x262DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DE4u;
        // 0x262de8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262DECu;
        goto label_262dec;
    }
    ctx->pc = 0x262DE4u;
    {
        const bool branch_taken_0x262de4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DE4u;
        // 0x262de8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262de4) {
            ctx->pc = 0x262E04u;
            goto label_262e04;
        }
    }
    ctx->pc = 0x262DECu;
label_262dec:
    // 0x262dec: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x262decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262df0:
    // 0x262df0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262df4:
    // 0x262df4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x262df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_262df8:
    // 0x262df8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x262df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262dfc:
    // 0x262dfc: 0xc041b20  jal         func_106C80
label_262e00:
    if (ctx->pc == 0x262E00u) {
        ctx->pc = 0x262E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DFCu;
        // 0x262e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E04u;
        goto label_262e04;
    }
    ctx->pc = 0x262DFCu;
    SET_GPR_U32(ctx, 31, 0x262E04u);
    ctx->pc = 0x262E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262DFCu;
    // 0x262e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262DFCu, 0x262E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E04u;
label_262e04:
    // 0x262e04: 0xc05d484  jal         func_175210
label_262e08:
    if (ctx->pc == 0x262E08u) {
        ctx->pc = 0x262E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E04u;
        // 0x262e08: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E0Cu;
        goto label_262e0c;
    }
    ctx->pc = 0x262E04u;
    SET_GPR_U32(ctx, 31, 0x262E0Cu);
    ctx->pc = 0x262E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E04u;
    // 0x262e08: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262E04u, 0x262E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E0Cu;
label_262e0c:
    // 0x262e0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262e10:
    // 0x262e10: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262e14:
    // 0x262e14: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_262e18:
    // 0x262e18: 0xa0f809  jalr        $a1
label_262e1c:
    if (ctx->pc == 0x262E1Cu) {
        ctx->pc = 0x262E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E18u;
        // 0x262e1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E20u;
        goto label_262e20;
    }
    ctx->pc = 0x262E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262E20u);
        ctx->pc = 0x262E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E18u;
        // 0x262e1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E18u, 0x262E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262E20u;
label_262e20:
    // 0x262e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262e24:
    // 0x262e24: 0xc087016  jal         func_21C058
label_262e28:
    if (ctx->pc == 0x262E28u) {
        ctx->pc = 0x262E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E24u;
        // 0x262e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E2Cu;
        goto label_262e2c;
    }
    ctx->pc = 0x262E24u;
    SET_GPR_U32(ctx, 31, 0x262E2Cu);
    ctx->pc = 0x262E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E24u;
    // 0x262e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x262E24u, 0x262E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E2Cu;
label_262e2c:
    // 0x262e2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x262e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_262e30:
    // 0x262e30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_262e34:
    if (ctx->pc == 0x262E34u) {
        ctx->pc = 0x262E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E30u;
        // 0x262e34: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E38u;
        goto label_262e38;
    }
    ctx->pc = 0x262E30u;
    {
        const bool branch_taken_0x262e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E30u;
        // 0x262e34: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e30) {
            ctx->pc = 0x262E54u;
            goto label_262e54;
        }
    }
    ctx->pc = 0x262E38u;
label_262e38:
    // 0x262e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262e3c:
    // 0x262e3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262e40:
    // 0x262e40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x262e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262e44:
    // 0x262e44: 0xc099e80  jal         func_267A00
label_262e48:
    if (ctx->pc == 0x262E48u) {
        ctx->pc = 0x262E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E44u;
        // 0x262e48: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E4Cu;
        goto label_262e4c;
    }
    ctx->pc = 0x262E44u;
    SET_GPR_U32(ctx, 31, 0x262E4Cu);
    ctx->pc = 0x262E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E44u;
    // 0x262e48: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x262E44u, 0x262E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E4Cu;
label_262e4c:
    // 0x262e4c: 0x10000029  b           . + 4 + (0x29 << 2)
label_262e50:
    if (ctx->pc == 0x262E50u) {
        ctx->pc = 0x262E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E4Cu;
        // 0x262e50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E54u;
        goto label_262e54;
    }
    ctx->pc = 0x262E4Cu;
    {
        const bool branch_taken_0x262e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E4Cu;
        // 0x262e50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e4c) {
            ctx->pc = 0x262EF4u;
            goto label_262ef4;
        }
    }
    ctx->pc = 0x262E54u;
label_262e54:
    // 0x262e54: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x262e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_262e58:
    // 0x262e58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_262e5c:
    // 0x262e5c: 0xc0cd526  jal         func_335498
label_262e60:
    if (ctx->pc == 0x262E60u) {
        ctx->pc = 0x262E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E5Cu;
        // 0x262e60: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E64u;
        goto label_262e64;
    }
    ctx->pc = 0x262E5Cu;
    SET_GPR_U32(ctx, 31, 0x262E64u);
    ctx->pc = 0x262E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E5Cu;
    // 0x262e60: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x262E5Cu, 0x262E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E64u;
label_262e64:
    // 0x262e64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262e68:
    // 0x262e68: 0xc041532  jal         func_1054C8
label_262e6c:
    if (ctx->pc == 0x262E6Cu) {
        ctx->pc = 0x262E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E68u;
        // 0x262e6c: 0x24500134  addiu       $s0, $v0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E70u;
        goto label_262e70;
    }
    ctx->pc = 0x262E68u;
    SET_GPR_U32(ctx, 31, 0x262E70u);
    ctx->pc = 0x262E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E68u;
    // 0x262e6c: 0x24500134  addiu       $s0, $v0, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262E68u, 0x262E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E70u;
label_262e70:
    // 0x262e70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x262e70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262e74:
    // 0x262e74: 0x52800020  beql        $s4, $zero, . + 4 + (0x20 << 2)
label_262e78:
    if (ctx->pc == 0x262E78u) {
        ctx->pc = 0x262E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E74u;
        // 0x262e78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E7Cu;
        goto label_262e7c;
    }
    ctx->pc = 0x262E74u;
    {
        const bool branch_taken_0x262e74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e74) {
            ctx->pc = 0x262E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262E74u;
            // 0x262e78: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262EF8u;
            goto label_262ef8;
        }
    }
    ctx->pc = 0x262E7Cu;
label_262e7c:
    // 0x262e7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x262e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_262e80:
    // 0x262e80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x262e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_262e84:
    // 0x262e84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x262e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_262e88:
    // 0x262e88: 0x40f809  jalr        $v0
label_262e8c:
    if (ctx->pc == 0x262E8Cu) {
        ctx->pc = 0x262E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E88u;
        // 0x262e8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262E90u;
        goto label_262e90;
    }
    ctx->pc = 0x262E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262E90u);
        ctx->pc = 0x262E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E88u;
        // 0x262e8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E88u, 0x262E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262E90u;
label_262e90:
    // 0x262e90: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x262e90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_262e94:
    // 0x262e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x262e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262e98:
    // 0x262e98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262e9c:
    // 0x262e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262ea0:
    // 0x262ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262ea4:
    // 0x262ea4: 0xc099e80  jal         func_267A00
label_262ea8:
    if (ctx->pc == 0x262EA8u) {
        ctx->pc = 0x262EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EA4u;
        // 0x262ea8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262EACu;
        goto label_262eac;
    }
    ctx->pc = 0x262EA4u;
    SET_GPR_U32(ctx, 31, 0x262EACu);
    ctx->pc = 0x262EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EA4u;
    // 0x262ea8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x262EA4u, 0x262EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EACu;
label_262eac:
    // 0x262eac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x262eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_262eb0:
    // 0x262eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262eb4:
    // 0x262eb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x262eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_262eb8:
    // 0x262eb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x262eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_262ebc:
    // 0x262ebc: 0x40f809  jalr        $v0
label_262ec0:
    if (ctx->pc == 0x262EC0u) {
        ctx->pc = 0x262EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EBCu;
        // 0x262ec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262EC4u;
        goto label_262ec4;
    }
    ctx->pc = 0x262EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262EC4u);
        ctx->pc = 0x262EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EBCu;
        // 0x262ec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262EBCu, 0x262EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262EC4u;
label_262ec4:
    // 0x262ec4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x262ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_262ec8:
    // 0x262ec8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x262ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_262ecc:
    // 0x262ecc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262ed0:
    // 0x262ed0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262ed4:
    // 0x262ed4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x262ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_262ed8:
    // 0x262ed8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x262ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262edc:
    // 0x262edc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x262edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262ee0:
    // 0x262ee0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262ee4:
    // 0x262ee4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x262ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_262ee8:
    // 0x262ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x262ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262eec:
    // 0x262eec: 0xc04229e  jal         func_108A78
label_262ef0:
    if (ctx->pc == 0x262EF0u) {
        ctx->pc = 0x262EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EECu;
        // 0x262ef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262EF4u;
        goto label_262ef4;
    }
    ctx->pc = 0x262EECu;
    SET_GPR_U32(ctx, 31, 0x262EF4u);
    ctx->pc = 0x262EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EECu;
    // 0x262ef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x262EECu, 0x262EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262EF4u;
label_262ef4:
    // 0x262ef4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x262ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262ef8:
    // 0x262ef8: 0xc05d53a  jal         func_1754E8
label_262efc:
    if (ctx->pc == 0x262EFCu) {
        ctx->pc = 0x262EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EF8u;
        // 0x262efc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F00u;
        goto label_262f00;
    }
    ctx->pc = 0x262EF8u;
    SET_GPR_U32(ctx, 31, 0x262F00u);
    ctx->pc = 0x262EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262EF8u;
    // 0x262efc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x262EF8u, 0x262F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F00u;
label_262f00:
    // 0x262f00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x262f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_262f04:
    // 0x262f04: 0xc05d4f6  jal         func_1753D8
label_262f08:
    if (ctx->pc == 0x262F08u) {
        ctx->pc = 0x262F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F04u;
        // 0x262f08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F0Cu;
        goto label_262f0c;
    }
    ctx->pc = 0x262F04u;
    SET_GPR_U32(ctx, 31, 0x262F0Cu);
    ctx->pc = 0x262F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F04u;
    // 0x262f08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x262F04u, 0x262F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F0Cu;
label_262f0c:
    // 0x262f0c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_262f10:
    if (ctx->pc == 0x262F10u) {
        ctx->pc = 0x262F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F0Cu;
        // 0x262f10: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F14u;
        goto label_262f14;
    }
    ctx->pc = 0x262F0Cu;
    {
        const bool branch_taken_0x262f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F0Cu;
        // 0x262f10: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f0c) {
            ctx->pc = 0x263224u;
            goto label_263224;
        }
    }
    ctx->pc = 0x262F14u;
label_262f14:
    // 0x262f14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262f18:
    // 0x262f18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x262f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262f1c:
    // 0x262f1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262f20:
    // 0x262f20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x262f20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262f24:
    // 0x262f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262f28:
    // 0x262f28: 0xc0875a0  jal         func_21D680
label_262f2c:
    if (ctx->pc == 0x262F2Cu) {
        ctx->pc = 0x262F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F28u;
        // 0x262f2c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F30u;
        goto label_262f30;
    }
    ctx->pc = 0x262F28u;
    SET_GPR_U32(ctx, 31, 0x262F30u);
    ctx->pc = 0x262F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F28u;
    // 0x262f2c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x262F28u, 0x262F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F30u;
label_262f30:
    // 0x262f30: 0x2615dd30  addiu       $s5, $s0, -0x22D0
    ctx->pc = 0x262f30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_262f34:
    // 0x262f34: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x262f34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262f38:
    // 0x262f38: 0xc041532  jal         func_1054C8
label_262f3c:
    if (ctx->pc == 0x262F3Cu) {
        ctx->pc = 0x262F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F38u;
        // 0x262f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F40u;
        goto label_262f40;
    }
    ctx->pc = 0x262F38u;
    SET_GPR_U32(ctx, 31, 0x262F40u);
    ctx->pc = 0x262F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F38u;
    // 0x262f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262F38u, 0x262F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F40u;
label_262f40:
    // 0x262f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_262f44:
    // 0x262f44: 0xc041532  jal         func_1054C8
label_262f48:
    if (ctx->pc == 0x262F48u) {
        ctx->pc = 0x262F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F44u;
        // 0x262f48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F4Cu;
        goto label_262f4c;
    }
    ctx->pc = 0x262F44u;
    SET_GPR_U32(ctx, 31, 0x262F4Cu);
    ctx->pc = 0x262F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F44u;
    // 0x262f48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262F44u, 0x262F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F4Cu;
label_262f4c:
    // 0x262f4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x262f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262f50:
    // 0x262f50: 0xc041532  jal         func_1054C8
label_262f54:
    if (ctx->pc == 0x262F54u) {
        ctx->pc = 0x262F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F50u;
        // 0x262f54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F58u;
        goto label_262f58;
    }
    ctx->pc = 0x262F50u;
    SET_GPR_U32(ctx, 31, 0x262F58u);
    ctx->pc = 0x262F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F50u;
    // 0x262f54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262F50u, 0x262F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F58u;
label_262f58:
    // 0x262f58: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262f5c:
    // 0x262f5c: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_262f60:
    if (ctx->pc == 0x262F60u) {
        ctx->pc = 0x262F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F5Cu;
        // 0x262f60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F64u;
        goto label_262f64;
    }
    ctx->pc = 0x262F5Cu;
    {
        const bool branch_taken_0x262f5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F5Cu;
        // 0x262f60: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f5c) {
            ctx->pc = 0x262F7Cu;
            goto label_262f7c;
        }
    }
    ctx->pc = 0x262F64u;
label_262f64:
    // 0x262f64: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_262f68:
    // 0x262f68: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262f6c:
    // 0x262f6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x262f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_262f70:
    // 0x262f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x262f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262f74:
    // 0x262f74: 0xc041b20  jal         func_106C80
label_262f78:
    if (ctx->pc == 0x262F78u) {
        ctx->pc = 0x262F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F74u;
        // 0x262f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F7Cu;
        goto label_262f7c;
    }
    ctx->pc = 0x262F74u;
    SET_GPR_U32(ctx, 31, 0x262F7Cu);
    ctx->pc = 0x262F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F74u;
    // 0x262f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262F74u, 0x262F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F7Cu;
label_262f7c:
    // 0x262f7c: 0xc05d484  jal         func_175210
label_262f80:
    if (ctx->pc == 0x262F80u) {
        ctx->pc = 0x262F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F7Cu;
        // 0x262f80: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F84u;
        goto label_262f84;
    }
    ctx->pc = 0x262F7Cu;
    SET_GPR_U32(ctx, 31, 0x262F84u);
    ctx->pc = 0x262F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F7Cu;
    // 0x262f80: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262F7Cu, 0x262F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F84u;
label_262f84:
    // 0x262f84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262f88:
    // 0x262f88: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x262f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_262f8c:
    // 0x262f8c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x262f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_262f90:
    // 0x262f90: 0xa0f809  jalr        $a1
label_262f94:
    if (ctx->pc == 0x262F94u) {
        ctx->pc = 0x262F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F90u;
        // 0x262f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262F98u;
        goto label_262f98;
    }
    ctx->pc = 0x262F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x262F98u);
        ctx->pc = 0x262F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F90u;
        // 0x262f94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262F90u, 0x262F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262F98u;
label_262f98:
    // 0x262f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262f9c:
    // 0x262f9c: 0xc087016  jal         func_21C058
label_262fa0:
    if (ctx->pc == 0x262FA0u) {
        ctx->pc = 0x262FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F9Cu;
        // 0x262fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262FA4u;
        goto label_262fa4;
    }
    ctx->pc = 0x262F9Cu;
    SET_GPR_U32(ctx, 31, 0x262FA4u);
    ctx->pc = 0x262FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F9Cu;
    // 0x262fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x262F9Cu, 0x262FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FA4u;
label_262fa4:
    // 0x262fa4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x262fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_262fa8:
    // 0x262fa8: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_262fac:
    if (ctx->pc == 0x262FACu) {
        ctx->pc = 0x262FB0u;
        goto label_262fb0;
    }
    ctx->pc = 0x262FA8u;
    {
        const bool branch_taken_0x262fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fa8) {
            ctx->pc = 0x263124u;
            goto label_263124;
        }
    }
    ctx->pc = 0x262FB0u;
label_262fb0:
    // 0x262fb0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_262fb4:
    if (ctx->pc == 0x262FB4u) {
        ctx->pc = 0x262FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FB0u;
        // 0x262fb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262FB8u;
        goto label_262fb8;
    }
    ctx->pc = 0x262FB0u;
    {
        const bool branch_taken_0x262fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FB0u;
        // 0x262fb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fb0) {
            ctx->pc = 0x262FD4u;
            goto label_262fd4;
        }
    }
    ctx->pc = 0x262FB8u;
label_262fb8:
    // 0x262fb8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x262fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_262fbc:
    // 0x262fbc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262fc0:
    // 0x262fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262fc4:
    // 0x262fc4: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_262fc8:
    // 0x262fc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262fcc:
    // 0x262fcc: 0xc04159e  jal         func_105678
label_262fd0:
    if (ctx->pc == 0x262FD0u) {
        ctx->pc = 0x262FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FCCu;
        // 0x262fd0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262FD4u;
        goto label_262fd4;
    }
    ctx->pc = 0x262FCCu;
    SET_GPR_U32(ctx, 31, 0x262FD4u);
    ctx->pc = 0x262FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FCCu;
    // 0x262fd0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x262FCCu, 0x262FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FD4u;
label_262fd4:
    // 0x262fd4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x262fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_262fd8:
    // 0x262fd8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x262fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_262fdc:
    // 0x262fdc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x262fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_262fe0:
    // 0x262fe0: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_262fe4:
    if (ctx->pc == 0x262FE4u) {
        ctx->pc = 0x262FE8u;
        goto label_262fe8;
    }
    ctx->pc = 0x262FE0u;
    {
        const bool branch_taken_0x262fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262fe0) {
            ctx->pc = 0x2630BCu;
            goto label_2630bc;
        }
    }
    ctx->pc = 0x262FE8u;
label_262fe8:
    // 0x262fe8: 0xc041532  jal         func_1054C8
label_262fec:
    if (ctx->pc == 0x262FECu) {
        ctx->pc = 0x262FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FE8u;
        // 0x262fec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262FF0u;
        goto label_262ff0;
    }
    ctx->pc = 0x262FE8u;
    SET_GPR_U32(ctx, 31, 0x262FF0u);
    ctx->pc = 0x262FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FE8u;
    // 0x262fec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x262FE8u, 0x262FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FF0u;
label_262ff0:
    // 0x262ff0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x262ff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262ff4:
    // 0x262ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262ff8:
    // 0x262ff8: 0xc089990  jal         func_226640
label_262ffc:
    if (ctx->pc == 0x262FFCu) {
        ctx->pc = 0x262FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FF8u;
        // 0x262ffc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263000u;
        goto label_263000;
    }
    ctx->pc = 0x262FF8u;
    SET_GPR_U32(ctx, 31, 0x263000u);
    ctx->pc = 0x262FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FF8u;
    // 0x262ffc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x262FF8u, 0x263000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263000u;
label_263000:
    // 0x263000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x263000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_263004:
    // 0x263004: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x263004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_263008:
    // 0x263008: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x263008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
label_26300c:
    // 0x26300c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x26300cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_263010:
    // 0x263010: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_263014:
    if (ctx->pc == 0x263014u) {
        ctx->pc = 0x263014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263010u;
        // 0x263014: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263018u;
        goto label_263018;
    }
    ctx->pc = 0x263010u;
    {
        const bool branch_taken_0x263010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x263014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263010u;
        // 0x263014: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263010) {
            ctx->pc = 0x26306Cu;
            goto label_26306c;
        }
    }
    ctx->pc = 0x263018u;
label_263018:
    // 0x263018: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26301c:
    // 0x26301c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26301cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263020:
    // 0x263020: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263024:
    // 0x263024: 0x40f809  jalr        $v0
label_263028:
    if (ctx->pc == 0x263028u) {
        ctx->pc = 0x263028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263024u;
        // 0x263028: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26302Cu;
        goto label_26302c;
    }
    ctx->pc = 0x263024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26302Cu);
        ctx->pc = 0x263028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263024u;
        // 0x263028: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263024u, 0x26302Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26302Cu;
label_26302c:
    // 0x26302c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_263030:
    // 0x263030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263034:
    // 0x263034: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263038:
    // 0x263038: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26303c:
    // 0x26303c: 0x40f809  jalr        $v0
label_263040:
    if (ctx->pc == 0x263040u) {
        ctx->pc = 0x263040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26303Cu;
        // 0x263040: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263044u;
        goto label_263044;
    }
    ctx->pc = 0x26303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263044u);
        ctx->pc = 0x263040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26303Cu;
        // 0x263040: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26303Cu, 0x263044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263044u;
label_263044:
    // 0x263044: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263048:
    // 0x263048: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26304c:
    // 0x26304c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26304cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263050:
    // 0x263050: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263054:
    // 0x263054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x263054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263058:
    // 0x263058: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26305c:
    // 0x26305c: 0x240700c6  addiu       $a3, $zero, 0xC6
    ctx->pc = 0x26305cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_263060:
    // 0x263060: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x263060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_263064:
    // 0x263064: 0xc04229e  jal         func_108A78
label_263068:
    if (ctx->pc == 0x263068u) {
        ctx->pc = 0x263068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263064u;
        // 0x263068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26306Cu;
        goto label_26306c;
    }
    ctx->pc = 0x263064u;
    SET_GPR_U32(ctx, 31, 0x26306Cu);
    ctx->pc = 0x263068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263064u;
    // 0x263068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x263064u, 0x26306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26306Cu;
label_26306c:
    // 0x26306c: 0x52800064  beql        $s4, $zero, . + 4 + (0x64 << 2)
label_263070:
    if (ctx->pc == 0x263070u) {
        ctx->pc = 0x263070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26306Cu;
        // 0x263070: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263074u;
        goto label_263074;
    }
    ctx->pc = 0x26306Cu;
    {
        const bool branch_taken_0x26306c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26306c) {
            ctx->pc = 0x263070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26306Cu;
            // 0x263070: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263200u;
            goto label_263200;
        }
    }
    ctx->pc = 0x263074u;
label_263074:
    // 0x263074: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263078:
    // 0x263078: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26307c:
    // 0x26307c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263080:
    // 0x263080: 0x40f809  jalr        $v0
label_263084:
    if (ctx->pc == 0x263084u) {
        ctx->pc = 0x263084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263080u;
        // 0x263084: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263088u;
        goto label_263088;
    }
    ctx->pc = 0x263080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263088u);
        ctx->pc = 0x263084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263080u;
        // 0x263084: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263080u, 0x263088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263088u;
label_263088:
    // 0x263088: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26308c:
    // 0x26308c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263090:
    // 0x263090: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263094:
    // 0x263094: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263098:
    // 0x263098: 0x40f809  jalr        $v0
label_26309c:
    if (ctx->pc == 0x26309Cu) {
        ctx->pc = 0x26309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263098u;
        // 0x26309c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630A0u;
        goto label_2630a0;
    }
    ctx->pc = 0x263098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2630A0u);
        ctx->pc = 0x26309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263098u;
        // 0x26309c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263098u, 0x2630A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2630A0u;
label_2630a0:
    // 0x2630a0: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2630a4:
    // 0x2630a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2630a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2630a8:
    // 0x2630a8: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x2630a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2630ac:
    // 0x2630ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2630acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2630b0:
    // 0x2630b0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2630b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2630b4:
    // 0x2630b4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2630b8:
    if (ctx->pc == 0x2630B8u) {
        ctx->pc = 0x2630B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630B4u;
        // 0x2630b8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630BCu;
        goto label_2630bc;
    }
    ctx->pc = 0x2630B4u;
    {
        const bool branch_taken_0x2630b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630B4u;
        // 0x2630b8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630b4) {
            ctx->pc = 0x263108u;
            goto label_263108;
        }
    }
    ctx->pc = 0x2630BCu;
label_2630bc:
    // 0x2630bc: 0x52800050  beql        $s4, $zero, . + 4 + (0x50 << 2)
label_2630c0:
    if (ctx->pc == 0x2630C0u) {
        ctx->pc = 0x2630C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630BCu;
        // 0x2630c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630C4u;
        goto label_2630c4;
    }
    ctx->pc = 0x2630BCu;
    {
        const bool branch_taken_0x2630bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2630bc) {
            ctx->pc = 0x2630C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2630BCu;
            // 0x2630c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263200u;
            goto label_263200;
        }
    }
    ctx->pc = 0x2630C4u;
label_2630c4:
    // 0x2630c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2630c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2630c8:
    // 0x2630c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2630c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2630cc:
    // 0x2630cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2630ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2630d0:
    // 0x2630d0: 0x40f809  jalr        $v0
label_2630d4:
    if (ctx->pc == 0x2630D4u) {
        ctx->pc = 0x2630D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630D0u;
        // 0x2630d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630D8u;
        goto label_2630d8;
    }
    ctx->pc = 0x2630D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2630D8u);
        ctx->pc = 0x2630D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630D0u;
        // 0x2630d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2630D0u, 0x2630D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2630D8u;
label_2630d8:
    // 0x2630d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2630d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2630dc:
    // 0x2630dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2630dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2630e0:
    // 0x2630e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2630e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2630e4:
    // 0x2630e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2630e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2630e8:
    // 0x2630e8: 0x40f809  jalr        $v0
label_2630ec:
    if (ctx->pc == 0x2630ECu) {
        ctx->pc = 0x2630ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630E8u;
        // 0x2630ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2630F0u;
        goto label_2630f0;
    }
    ctx->pc = 0x2630E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2630F0u);
        ctx->pc = 0x2630ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630E8u;
        // 0x2630ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2630E8u, 0x2630F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2630F0u;
label_2630f0:
    // 0x2630f0: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2630f4:
    // 0x2630f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2630f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2630f8:
    // 0x2630f8: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x2630f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2630fc:
    // 0x2630fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263100:
    // 0x263100: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x263100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263104:
    // 0x263104: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x263104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263108:
    // 0x263108: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26310c:
    // 0x26310c: 0x256b2a38  addiu       $t3, $t3, 0x2A38
    ctx->pc = 0x26310cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
label_263110:
    // 0x263110: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263114:
    // 0x263114: 0xc04229e  jal         func_108A78
label_263118:
    if (ctx->pc == 0x263118u) {
        ctx->pc = 0x263118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263114u;
        // 0x263118: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26311Cu;
        goto label_26311c;
    }
    ctx->pc = 0x263114u;
    SET_GPR_U32(ctx, 31, 0x26311Cu);
    ctx->pc = 0x263118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263114u;
    // 0x263118: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x263114u, 0x26311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26311Cu;
label_26311c:
    // 0x26311c: 0x10000038  b           . + 4 + (0x38 << 2)
label_263120:
    if (ctx->pc == 0x263120u) {
        ctx->pc = 0x263120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26311Cu;
        // 0x263120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263124u;
        goto label_263124;
    }
    ctx->pc = 0x26311Cu;
    {
        const bool branch_taken_0x26311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26311Cu;
        // 0x263120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26311c) {
            ctx->pc = 0x263200u;
            goto label_263200;
        }
    }
    ctx->pc = 0x263124u;
label_263124:
    // 0x263124: 0xc088ef0  jal         func_223BC0
label_263128:
    if (ctx->pc == 0x263128u) {
        ctx->pc = 0x263128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263124u;
        // 0x263128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26312Cu;
        goto label_26312c;
    }
    ctx->pc = 0x263124u;
    SET_GPR_U32(ctx, 31, 0x26312Cu);
    ctx->pc = 0x263128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263124u;
    // 0x263128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x263124u, 0x26312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26312Cu;
label_26312c:
    // 0x26312c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_263130:
    if (ctx->pc == 0x263130u) {
        ctx->pc = 0x263134u;
        goto label_263134;
    }
    ctx->pc = 0x26312Cu;
    {
        const bool branch_taken_0x26312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26312c) {
            ctx->pc = 0x263164u;
            goto label_263164;
        }
    }
    ctx->pc = 0x263134u;
label_263134:
    // 0x263134: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_263138:
    if (ctx->pc == 0x263138u) {
        ctx->pc = 0x263138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263134u;
        // 0x263138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26313Cu;
        goto label_26313c;
    }
    ctx->pc = 0x263134u;
    {
        const bool branch_taken_0x263134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263134u;
        // 0x263138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263134) {
            ctx->pc = 0x263158u;
            goto label_263158;
        }
    }
    ctx->pc = 0x26313Cu;
label_26313c:
    // 0x26313c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263140:
    // 0x263140: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263144:
    // 0x263144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263148:
    // 0x263148: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x263148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26314c:
    // 0x26314c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26314cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263150:
    // 0x263150: 0xc04159e  jal         func_105678
label_263154:
    if (ctx->pc == 0x263154u) {
        ctx->pc = 0x263154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263150u;
        // 0x263154: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263158u;
        goto label_263158;
    }
    ctx->pc = 0x263150u;
    SET_GPR_U32(ctx, 31, 0x263158u);
    ctx->pc = 0x263154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263150u;
    // 0x263154: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x263150u, 0x263158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263158u;
label_263158:
    // 0x263158: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x263158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26315c:
    // 0x26315c: 0x1000000d  b           . + 4 + (0xD << 2)
label_263160:
    if (ctx->pc == 0x263160u) {
        ctx->pc = 0x263160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26315Cu;
        // 0x263160: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263164u;
        goto label_263164;
    }
    ctx->pc = 0x26315Cu;
    {
        const bool branch_taken_0x26315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26315Cu;
        // 0x263160: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26315c) {
            ctx->pc = 0x263194u;
            goto label_263194;
        }
    }
    ctx->pc = 0x263164u;
label_263164:
    // 0x263164: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_263168:
    if (ctx->pc == 0x263168u) {
        ctx->pc = 0x263168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263164u;
        // 0x263168: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26316Cu;
        goto label_26316c;
    }
    ctx->pc = 0x263164u;
    {
        const bool branch_taken_0x263164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263164u;
        // 0x263168: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263164) {
            ctx->pc = 0x263188u;
            goto label_263188;
        }
    }
    ctx->pc = 0x26316Cu;
label_26316c:
    // 0x26316c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263170:
    // 0x263170: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263174:
    // 0x263174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263178:
    // 0x263178: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26317c:
    // 0x26317c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26317cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263180:
    // 0x263180: 0xc04159e  jal         func_105678
label_263184:
    if (ctx->pc == 0x263184u) {
        ctx->pc = 0x263184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263180u;
        // 0x263184: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263188u;
        goto label_263188;
    }
    ctx->pc = 0x263180u;
    SET_GPR_U32(ctx, 31, 0x263188u);
    ctx->pc = 0x263184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263180u;
    // 0x263184: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x263180u, 0x263188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263188u;
label_263188:
    // 0x263188: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x263188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26318c:
    // 0x26318c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_263190:
    // 0x263190: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x263190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_263194:
    // 0x263194: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_263198:
    if (ctx->pc == 0x263198u) {
        ctx->pc = 0x263198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263194u;
        // 0x263198: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26319Cu;
        goto label_26319c;
    }
    ctx->pc = 0x263194u;
    {
        const bool branch_taken_0x263194 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x263194) {
            ctx->pc = 0x263198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263194u;
            // 0x263198: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263200u;
            goto label_263200;
        }
    }
    ctx->pc = 0x26319Cu;
label_26319c:
    // 0x26319c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2631a0:
    // 0x2631a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2631a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2631a4:
    // 0x2631a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2631a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2631a8:
    // 0x2631a8: 0x40f809  jalr        $v0
label_2631ac:
    if (ctx->pc == 0x2631ACu) {
        ctx->pc = 0x2631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631A8u;
        // 0x2631ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2631B0u;
        goto label_2631b0;
    }
    ctx->pc = 0x2631A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2631B0u);
        ctx->pc = 0x2631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631A8u;
        // 0x2631ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2631A8u, 0x2631B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2631B0u;
label_2631b0:
    // 0x2631b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2631b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2631b4:
    // 0x2631b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2631b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2631b8:
    // 0x2631b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2631bc:
    // 0x2631bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2631bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2631c0:
    // 0x2631c0: 0x40f809  jalr        $v0
label_2631c4:
    if (ctx->pc == 0x2631C4u) {
        ctx->pc = 0x2631C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631C0u;
        // 0x2631c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2631C8u;
        goto label_2631c8;
    }
    ctx->pc = 0x2631C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2631C8u);
        ctx->pc = 0x2631C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631C0u;
        // 0x2631c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2631C0u, 0x2631C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2631C8u;
label_2631c8:
    // 0x2631c8: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2631c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2631cc:
    // 0x2631cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2631ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2631d0:
    // 0x2631d0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2631d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2631d4:
    // 0x2631d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2631d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2631d8:
    // 0x2631d8: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x2631d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2631dc:
    // 0x2631dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2631dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2631e0:
    // 0x2631e0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2631e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2631e4:
    // 0x2631e4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2631e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2631e8:
    // 0x2631e8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2631e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2631ec:
    // 0x2631ec: 0x256b2a38  addiu       $t3, $t3, 0x2A38
    ctx->pc = 0x2631ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
label_2631f0:
    // 0x2631f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2631f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2631f4:
    // 0x2631f4: 0xc04229e  jal         func_108A78
label_2631f8:
    if (ctx->pc == 0x2631F8u) {
        ctx->pc = 0x2631F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631F4u;
        // 0x2631f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2631FCu;
        goto label_2631fc;
    }
    ctx->pc = 0x2631F4u;
    SET_GPR_U32(ctx, 31, 0x2631FCu);
    ctx->pc = 0x2631F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2631F4u;
    // 0x2631f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x2631F4u, 0x2631FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2631FCu;
label_2631fc:
    // 0x2631fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2631fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263200:
    // 0x263200: 0xc05d53a  jal         func_1754E8
label_263204:
    if (ctx->pc == 0x263204u) {
        ctx->pc = 0x263204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263200u;
        // 0x263204: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263208u;
        goto label_263208;
    }
    ctx->pc = 0x263200u;
    SET_GPR_U32(ctx, 31, 0x263208u);
    ctx->pc = 0x263204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263200u;
    // 0x263204: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x263200u, 0x263208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263208u;
label_263208:
    // 0x263208: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x263208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26320c:
    // 0x26320c: 0xc05d4f6  jal         func_1753D8
label_263210:
    if (ctx->pc == 0x263210u) {
        ctx->pc = 0x263210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26320Cu;
        // 0x263210: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263214u;
        goto label_263214;
    }
    ctx->pc = 0x26320Cu;
    SET_GPR_U32(ctx, 31, 0x263214u);
    ctx->pc = 0x263210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26320Cu;
    // 0x263210: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26320Cu, 0x263214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263214u;
label_263214:
    // 0x263214: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x263214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_263218:
    // 0x263218: 0xc089990  jal         func_226640
label_26321c:
    if (ctx->pc == 0x26321Cu) {
        ctx->pc = 0x26321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263218u;
        // 0x26321c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263220u;
        goto label_263220;
    }
    ctx->pc = 0x263218u;
    SET_GPR_U32(ctx, 31, 0x263220u);
    ctx->pc = 0x26321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263218u;
    // 0x26321c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x263218u, 0x263220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263220u;
label_263220:
    // 0x263220: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x263220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_263224:
    // 0x263224: 0x8e7600d8  lw          $s6, 0xD8($s3)
    ctx->pc = 0x263224u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_263228:
    // 0x263228: 0x24b0dd30  addiu       $s0, $a1, -0x22D0
    ctx->pc = 0x263228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958384));
label_26322c:
    // 0x26322c: 0xc041532  jal         func_1054C8
label_263230:
    if (ctx->pc == 0x263230u) {
        ctx->pc = 0x263230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26322Cu;
        // 0x263230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263234u;
        goto label_263234;
    }
    ctx->pc = 0x26322Cu;
    SET_GPR_U32(ctx, 31, 0x263234u);
    ctx->pc = 0x263230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26322Cu;
    // 0x263230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26322Cu, 0x263234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263234u;
label_263234:
    // 0x263234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263238:
    // 0x263238: 0xc041532  jal         func_1054C8
label_26323c:
    if (ctx->pc == 0x26323Cu) {
        ctx->pc = 0x26323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263238u;
        // 0x26323c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263240u;
        goto label_263240;
    }
    ctx->pc = 0x263238u;
    SET_GPR_U32(ctx, 31, 0x263240u);
    ctx->pc = 0x26323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263238u;
    // 0x26323c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263238u, 0x263240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263240u;
label_263240:
    // 0x263240: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263244:
    // 0x263244: 0xc041532  jal         func_1054C8
label_263248:
    if (ctx->pc == 0x263248u) {
        ctx->pc = 0x263248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263244u;
        // 0x263248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26324Cu;
        goto label_26324c;
    }
    ctx->pc = 0x263244u;
    SET_GPR_U32(ctx, 31, 0x26324Cu);
    ctx->pc = 0x263248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263244u;
    // 0x263248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263244u, 0x26324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26324Cu;
label_26324c:
    // 0x26324c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_263250:
    if (ctx->pc == 0x263250u) {
        ctx->pc = 0x263250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26324Cu;
        // 0x263250: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263254u;
        goto label_263254;
    }
    ctx->pc = 0x26324Cu;
    {
        const bool branch_taken_0x26324c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26324Cu;
        // 0x263250: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26324c) {
            ctx->pc = 0x263278u;
            goto label_263278;
        }
    }
    ctx->pc = 0x263254u;
label_263254:
    // 0x263254: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x263254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_263258:
    // 0x263258: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x263258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26325c:
    // 0x26325c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26325cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263260:
    // 0x263260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263264:
    // 0x263264: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_263268:
    // 0x263268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26326c:
    // 0x26326c: 0xc04159e  jal         func_105678
label_263270:
    if (ctx->pc == 0x263270u) {
        ctx->pc = 0x263270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26326Cu;
        // 0x263270: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263274u;
        goto label_263274;
    }
    ctx->pc = 0x26326Cu;
    SET_GPR_U32(ctx, 31, 0x263274u);
    ctx->pc = 0x263270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26326Cu;
    // 0x263270: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26326Cu, 0x263274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263274u;
label_263274:
    // 0x263274: 0x0  nop
    ctx->pc = 0x263274u;
    // NOP
label_263278:
    // 0x263278: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x263278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26327c:
    // 0x26327c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_263280:
    // 0x263280: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_263284:
    if (ctx->pc == 0x263284u) {
        ctx->pc = 0x263284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263280u;
        // 0x263284: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263288u;
        goto label_263288;
    }
    ctx->pc = 0x263280u;
    {
        const bool branch_taken_0x263280 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x263284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263280u;
        // 0x263284: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263280) {
            ctx->pc = 0x2632E0u;
            goto label_2632e0;
        }
    }
    ctx->pc = 0x263288u;
label_263288:
    // 0x263288: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x263288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26328c:
    // 0x26328c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x26328cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_263290:
    // 0x263290: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263294:
    // 0x263294: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x263294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_263298:
    // 0x263298: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x263298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_26329c:
    // 0x26329c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26329cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2632a0:
    // 0x2632a0: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x2632a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_2632a4:
    // 0x2632a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2632a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2632a8:
    // 0x2632a8: 0x40f809  jalr        $v0
label_2632ac:
    if (ctx->pc == 0x2632ACu) {
        ctx->pc = 0x2632ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632A8u;
        // 0x2632ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2632B0u;
        goto label_2632b0;
    }
    ctx->pc = 0x2632A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2632B0u);
        ctx->pc = 0x2632ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632A8u;
        // 0x2632ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2632A8u, 0x2632B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2632B0u;
label_2632b0:
    // 0x2632b0: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x2632b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_2632b4:
    // 0x2632b4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2632b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2632b8:
    // 0x2632b8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2632b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2632bc:
    // 0x2632bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2632bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2632c0:
    // 0x2632c0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2632c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2632c4:
    // 0x2632c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2632c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2632c8:
    // 0x2632c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2632c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2632cc:
    // 0x2632cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2632ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2632d0:
    // 0x2632d0: 0x254a29a8  addiu       $t2, $t2, 0x29A8
    ctx->pc = 0x2632d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10664));
label_2632d4:
    // 0x2632d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2632d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2632d8:
    // 0x2632d8: 0xc041664  jal         func_105990
label_2632dc:
    if (ctx->pc == 0x2632DCu) {
        ctx->pc = 0x2632DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632D8u;
        // 0x2632dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2632E0u;
        goto label_2632e0;
    }
    ctx->pc = 0x2632D8u;
    SET_GPR_U32(ctx, 31, 0x2632E0u);
    ctx->pc = 0x2632DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632D8u;
    // 0x2632dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2632D8u, 0x2632E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2632E0u;
label_2632e0:
    // 0x2632e0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_2632e4:
    if (ctx->pc == 0x2632E4u) {
        ctx->pc = 0x2632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632E0u;
        // 0x2632e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2632E8u;
        goto label_2632e8;
    }
    ctx->pc = 0x2632E0u;
    {
        const bool branch_taken_0x2632e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632E0u;
        // 0x2632e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632e0) {
            ctx->pc = 0x263300u;
            goto label_263300;
        }
    }
    ctx->pc = 0x2632E8u;
label_2632e8:
    // 0x2632e8: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x2632e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2632ec:
    // 0x2632ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2632ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2632f0:
    // 0x2632f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2632f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2632f4:
    // 0x2632f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2632f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2632f8:
    // 0x2632f8: 0xc041b20  jal         func_106C80
label_2632fc:
    if (ctx->pc == 0x2632FCu) {
        ctx->pc = 0x2632FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632F8u;
        // 0x2632fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263300u;
        goto label_263300;
    }
    ctx->pc = 0x2632F8u;
    SET_GPR_U32(ctx, 31, 0x263300u);
    ctx->pc = 0x2632FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632F8u;
    // 0x2632fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2632F8u, 0x263300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263300u;
label_263300:
    // 0x263300: 0xc05d484  jal         func_175210
label_263304:
    if (ctx->pc == 0x263304u) {
        ctx->pc = 0x263304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263300u;
        // 0x263304: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263308u;
        goto label_263308;
    }
    ctx->pc = 0x263300u;
    SET_GPR_U32(ctx, 31, 0x263308u);
    ctx->pc = 0x263304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263300u;
    // 0x263304: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x263300u, 0x263308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263308u;
label_263308:
    // 0x263308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26330c:
    // 0x26330c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26330cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_263310:
    // 0x263310: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x263310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_263314:
    // 0x263314: 0xa0f809  jalr        $a1
label_263318:
    if (ctx->pc == 0x263318u) {
        ctx->pc = 0x263318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263314u;
        // 0x263318: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26331Cu;
        goto label_26331c;
    }
    ctx->pc = 0x263314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26331Cu);
        ctx->pc = 0x263318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263314u;
        // 0x263318: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263314u, 0x26331Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26331Cu;
label_26331c:
    // 0x26331c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263320:
    // 0x263320: 0xc087016  jal         func_21C058
label_263324:
    if (ctx->pc == 0x263324u) {
        ctx->pc = 0x263324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263320u;
        // 0x263324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263328u;
        goto label_263328;
    }
    ctx->pc = 0x263320u;
    SET_GPR_U32(ctx, 31, 0x263328u);
    ctx->pc = 0x263324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263320u;
    // 0x263324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x263320u, 0x263328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263328u;
label_263328:
    // 0x263328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x263328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26332c:
    // 0x26332c: 0xc05d53a  jal         func_1754E8
label_263330:
    if (ctx->pc == 0x263330u) {
        ctx->pc = 0x263330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26332Cu;
        // 0x263330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263334u;
        goto label_263334;
    }
    ctx->pc = 0x26332Cu;
    SET_GPR_U32(ctx, 31, 0x263334u);
    ctx->pc = 0x263330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26332Cu;
    // 0x263330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26332Cu, 0x263334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263334u;
label_263334:
    // 0x263334: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x263334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263338:
    // 0x263338: 0xc05d4f6  jal         func_1753D8
label_26333c:
    if (ctx->pc == 0x26333Cu) {
        ctx->pc = 0x26333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263338u;
        // 0x26333c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263340u;
        goto label_263340;
    }
    ctx->pc = 0x263338u;
    SET_GPR_U32(ctx, 31, 0x263340u);
    ctx->pc = 0x26333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263338u;
    // 0x26333c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x263338u, 0x263340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263340u;
label_263340:
    // 0x263340: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x263340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_263344:
    // 0x263344: 0xc089990  jal         func_226640
label_263348:
    if (ctx->pc == 0x263348u) {
        ctx->pc = 0x263348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263344u;
        // 0x263348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26334Cu;
        goto label_26334c;
    }
    ctx->pc = 0x263344u;
    SET_GPR_U32(ctx, 31, 0x26334Cu);
    ctx->pc = 0x263348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263344u;
    // 0x263348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x263344u, 0x26334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26334Cu;
label_26334c:
    // 0x26334c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x26334cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_263350:
    // 0x263350: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x263350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_263354:
    // 0x263354: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x263354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_263358:
    // 0x263358: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x263358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_26335c:
    // 0x26335c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x26335cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_263360:
    // 0x263360: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x263360u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_263364:
    // 0x263364: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x263364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_263368:
    // 0x263368: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x263368u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26336c:
    // 0x26336c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x26336cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_263370:
    // 0x263370: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_263374:
    // 0x263374: 0x3e00008  jr          $ra
label_263378:
    if (ctx->pc == 0x263378u) {
        ctx->pc = 0x263378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263374u;
        // 0x263378: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26337Cu;
        goto label_26337c;
    }
    ctx->pc = 0x263374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263374u;
        // 0x263378: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26337Cu;
label_26337c:
    // 0x26337c: 0x0  nop
    ctx->pc = 0x26337cu;
    // NOP
    ctx->pc = 0x263380u;
}
