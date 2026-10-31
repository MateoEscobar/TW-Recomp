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

// Function: sub_00188AA8
// Address: 0x188aa8 - 0x1894f8
void sub_00188AA8_0x188aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188AA8_0x188aa8");
#endif

    switch (ctx->pc) {
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        case 0x188b10u: goto label_188b10;
        case 0x188b14u: goto label_188b14;
        case 0x188b18u: goto label_188b18;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b20u: goto label_188b20;
        case 0x188b24u: goto label_188b24;
        case 0x188b28u: goto label_188b28;
        case 0x188b2cu: goto label_188b2c;
        case 0x188b30u: goto label_188b30;
        case 0x188b34u: goto label_188b34;
        case 0x188b38u: goto label_188b38;
        case 0x188b3cu: goto label_188b3c;
        case 0x188b40u: goto label_188b40;
        case 0x188b44u: goto label_188b44;
        case 0x188b48u: goto label_188b48;
        case 0x188b4cu: goto label_188b4c;
        case 0x188b50u: goto label_188b50;
        case 0x188b54u: goto label_188b54;
        case 0x188b58u: goto label_188b58;
        case 0x188b5cu: goto label_188b5c;
        case 0x188b60u: goto label_188b60;
        case 0x188b64u: goto label_188b64;
        case 0x188b68u: goto label_188b68;
        case 0x188b6cu: goto label_188b6c;
        case 0x188b70u: goto label_188b70;
        case 0x188b74u: goto label_188b74;
        case 0x188b78u: goto label_188b78;
        case 0x188b7cu: goto label_188b7c;
        case 0x188b80u: goto label_188b80;
        case 0x188b84u: goto label_188b84;
        case 0x188b88u: goto label_188b88;
        case 0x188b8cu: goto label_188b8c;
        case 0x188b90u: goto label_188b90;
        case 0x188b94u: goto label_188b94;
        case 0x188b98u: goto label_188b98;
        case 0x188b9cu: goto label_188b9c;
        case 0x188ba0u: goto label_188ba0;
        case 0x188ba4u: goto label_188ba4;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bacu: goto label_188bac;
        case 0x188bb0u: goto label_188bb0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bb8u: goto label_188bb8;
        case 0x188bbcu: goto label_188bbc;
        case 0x188bc0u: goto label_188bc0;
        case 0x188bc4u: goto label_188bc4;
        case 0x188bc8u: goto label_188bc8;
        case 0x188bccu: goto label_188bcc;
        case 0x188bd0u: goto label_188bd0;
        case 0x188bd4u: goto label_188bd4;
        case 0x188bd8u: goto label_188bd8;
        case 0x188bdcu: goto label_188bdc;
        case 0x188be0u: goto label_188be0;
        case 0x188be4u: goto label_188be4;
        case 0x188be8u: goto label_188be8;
        case 0x188becu: goto label_188bec;
        case 0x188bf0u: goto label_188bf0;
        case 0x188bf4u: goto label_188bf4;
        case 0x188bf8u: goto label_188bf8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c00u: goto label_188c00;
        case 0x188c04u: goto label_188c04;
        case 0x188c08u: goto label_188c08;
        case 0x188c0cu: goto label_188c0c;
        case 0x188c10u: goto label_188c10;
        case 0x188c14u: goto label_188c14;
        case 0x188c18u: goto label_188c18;
        case 0x188c1cu: goto label_188c1c;
        case 0x188c20u: goto label_188c20;
        case 0x188c24u: goto label_188c24;
        case 0x188c28u: goto label_188c28;
        case 0x188c2cu: goto label_188c2c;
        case 0x188c30u: goto label_188c30;
        case 0x188c34u: goto label_188c34;
        case 0x188c38u: goto label_188c38;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c40u: goto label_188c40;
        case 0x188c44u: goto label_188c44;
        case 0x188c48u: goto label_188c48;
        case 0x188c4cu: goto label_188c4c;
        case 0x188c50u: goto label_188c50;
        case 0x188c54u: goto label_188c54;
        case 0x188c58u: goto label_188c58;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c60u: goto label_188c60;
        case 0x188c64u: goto label_188c64;
        case 0x188c68u: goto label_188c68;
        case 0x188c6cu: goto label_188c6c;
        case 0x188c70u: goto label_188c70;
        case 0x188c74u: goto label_188c74;
        case 0x188c78u: goto label_188c78;
        case 0x188c7cu: goto label_188c7c;
        case 0x188c80u: goto label_188c80;
        case 0x188c84u: goto label_188c84;
        case 0x188c88u: goto label_188c88;
        case 0x188c8cu: goto label_188c8c;
        case 0x188c90u: goto label_188c90;
        case 0x188c94u: goto label_188c94;
        case 0x188c98u: goto label_188c98;
        case 0x188c9cu: goto label_188c9c;
        case 0x188ca0u: goto label_188ca0;
        case 0x188ca4u: goto label_188ca4;
        case 0x188ca8u: goto label_188ca8;
        case 0x188cacu: goto label_188cac;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cb4u: goto label_188cb4;
        case 0x188cb8u: goto label_188cb8;
        case 0x188cbcu: goto label_188cbc;
        case 0x188cc0u: goto label_188cc0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cc8u: goto label_188cc8;
        case 0x188cccu: goto label_188ccc;
        case 0x188cd0u: goto label_188cd0;
        case 0x188cd4u: goto label_188cd4;
        case 0x188cd8u: goto label_188cd8;
        case 0x188cdcu: goto label_188cdc;
        case 0x188ce0u: goto label_188ce0;
        case 0x188ce4u: goto label_188ce4;
        case 0x188ce8u: goto label_188ce8;
        case 0x188cecu: goto label_188cec;
        case 0x188cf0u: goto label_188cf0;
        case 0x188cf4u: goto label_188cf4;
        case 0x188cf8u: goto label_188cf8;
        case 0x188cfcu: goto label_188cfc;
        case 0x188d00u: goto label_188d00;
        case 0x188d04u: goto label_188d04;
        case 0x188d08u: goto label_188d08;
        case 0x188d0cu: goto label_188d0c;
        case 0x188d10u: goto label_188d10;
        case 0x188d14u: goto label_188d14;
        case 0x188d18u: goto label_188d18;
        case 0x188d1cu: goto label_188d1c;
        case 0x188d20u: goto label_188d20;
        case 0x188d24u: goto label_188d24;
        case 0x188d28u: goto label_188d28;
        case 0x188d2cu: goto label_188d2c;
        case 0x188d30u: goto label_188d30;
        case 0x188d34u: goto label_188d34;
        case 0x188d38u: goto label_188d38;
        case 0x188d3cu: goto label_188d3c;
        case 0x188d40u: goto label_188d40;
        case 0x188d44u: goto label_188d44;
        case 0x188d48u: goto label_188d48;
        case 0x188d4cu: goto label_188d4c;
        case 0x188d50u: goto label_188d50;
        case 0x188d54u: goto label_188d54;
        case 0x188d58u: goto label_188d58;
        case 0x188d5cu: goto label_188d5c;
        case 0x188d60u: goto label_188d60;
        case 0x188d64u: goto label_188d64;
        case 0x188d68u: goto label_188d68;
        case 0x188d6cu: goto label_188d6c;
        case 0x188d70u: goto label_188d70;
        case 0x188d74u: goto label_188d74;
        case 0x188d78u: goto label_188d78;
        case 0x188d7cu: goto label_188d7c;
        case 0x188d80u: goto label_188d80;
        case 0x188d84u: goto label_188d84;
        case 0x188d88u: goto label_188d88;
        case 0x188d8cu: goto label_188d8c;
        case 0x188d90u: goto label_188d90;
        case 0x188d94u: goto label_188d94;
        case 0x188d98u: goto label_188d98;
        case 0x188d9cu: goto label_188d9c;
        case 0x188da0u: goto label_188da0;
        case 0x188da4u: goto label_188da4;
        case 0x188da8u: goto label_188da8;
        case 0x188dacu: goto label_188dac;
        case 0x188db0u: goto label_188db0;
        case 0x188db4u: goto label_188db4;
        case 0x188db8u: goto label_188db8;
        case 0x188dbcu: goto label_188dbc;
        case 0x188dc0u: goto label_188dc0;
        case 0x188dc4u: goto label_188dc4;
        case 0x188dc8u: goto label_188dc8;
        case 0x188dccu: goto label_188dcc;
        case 0x188dd0u: goto label_188dd0;
        case 0x188dd4u: goto label_188dd4;
        case 0x188dd8u: goto label_188dd8;
        case 0x188ddcu: goto label_188ddc;
        case 0x188de0u: goto label_188de0;
        case 0x188de4u: goto label_188de4;
        case 0x188de8u: goto label_188de8;
        case 0x188decu: goto label_188dec;
        case 0x188df0u: goto label_188df0;
        case 0x188df4u: goto label_188df4;
        case 0x188df8u: goto label_188df8;
        case 0x188dfcu: goto label_188dfc;
        case 0x188e00u: goto label_188e00;
        case 0x188e04u: goto label_188e04;
        case 0x188e08u: goto label_188e08;
        case 0x188e0cu: goto label_188e0c;
        case 0x188e10u: goto label_188e10;
        case 0x188e14u: goto label_188e14;
        case 0x188e18u: goto label_188e18;
        case 0x188e1cu: goto label_188e1c;
        case 0x188e20u: goto label_188e20;
        case 0x188e24u: goto label_188e24;
        case 0x188e28u: goto label_188e28;
        case 0x188e2cu: goto label_188e2c;
        case 0x188e30u: goto label_188e30;
        case 0x188e34u: goto label_188e34;
        case 0x188e38u: goto label_188e38;
        case 0x188e3cu: goto label_188e3c;
        case 0x188e40u: goto label_188e40;
        case 0x188e44u: goto label_188e44;
        case 0x188e48u: goto label_188e48;
        case 0x188e4cu: goto label_188e4c;
        case 0x188e50u: goto label_188e50;
        case 0x188e54u: goto label_188e54;
        case 0x188e58u: goto label_188e58;
        case 0x188e5cu: goto label_188e5c;
        case 0x188e60u: goto label_188e60;
        case 0x188e64u: goto label_188e64;
        case 0x188e68u: goto label_188e68;
        case 0x188e6cu: goto label_188e6c;
        case 0x188e70u: goto label_188e70;
        case 0x188e74u: goto label_188e74;
        case 0x188e78u: goto label_188e78;
        case 0x188e7cu: goto label_188e7c;
        case 0x188e80u: goto label_188e80;
        case 0x188e84u: goto label_188e84;
        case 0x188e88u: goto label_188e88;
        case 0x188e8cu: goto label_188e8c;
        case 0x188e90u: goto label_188e90;
        case 0x188e94u: goto label_188e94;
        case 0x188e98u: goto label_188e98;
        case 0x188e9cu: goto label_188e9c;
        case 0x188ea0u: goto label_188ea0;
        case 0x188ea4u: goto label_188ea4;
        case 0x188ea8u: goto label_188ea8;
        case 0x188eacu: goto label_188eac;
        case 0x188eb0u: goto label_188eb0;
        case 0x188eb4u: goto label_188eb4;
        case 0x188eb8u: goto label_188eb8;
        case 0x188ebcu: goto label_188ebc;
        case 0x188ec0u: goto label_188ec0;
        case 0x188ec4u: goto label_188ec4;
        case 0x188ec8u: goto label_188ec8;
        case 0x188eccu: goto label_188ecc;
        case 0x188ed0u: goto label_188ed0;
        case 0x188ed4u: goto label_188ed4;
        case 0x188ed8u: goto label_188ed8;
        case 0x188edcu: goto label_188edc;
        case 0x188ee0u: goto label_188ee0;
        case 0x188ee4u: goto label_188ee4;
        case 0x188ee8u: goto label_188ee8;
        case 0x188eecu: goto label_188eec;
        case 0x188ef0u: goto label_188ef0;
        case 0x188ef4u: goto label_188ef4;
        case 0x188ef8u: goto label_188ef8;
        case 0x188efcu: goto label_188efc;
        case 0x188f00u: goto label_188f00;
        case 0x188f04u: goto label_188f04;
        case 0x188f08u: goto label_188f08;
        case 0x188f0cu: goto label_188f0c;
        case 0x188f10u: goto label_188f10;
        case 0x188f14u: goto label_188f14;
        case 0x188f18u: goto label_188f18;
        case 0x188f1cu: goto label_188f1c;
        case 0x188f20u: goto label_188f20;
        case 0x188f24u: goto label_188f24;
        case 0x188f28u: goto label_188f28;
        case 0x188f2cu: goto label_188f2c;
        case 0x188f30u: goto label_188f30;
        case 0x188f34u: goto label_188f34;
        case 0x188f38u: goto label_188f38;
        case 0x188f3cu: goto label_188f3c;
        case 0x188f40u: goto label_188f40;
        case 0x188f44u: goto label_188f44;
        case 0x188f48u: goto label_188f48;
        case 0x188f4cu: goto label_188f4c;
        case 0x188f50u: goto label_188f50;
        case 0x188f54u: goto label_188f54;
        case 0x188f58u: goto label_188f58;
        case 0x188f5cu: goto label_188f5c;
        case 0x188f60u: goto label_188f60;
        case 0x188f64u: goto label_188f64;
        case 0x188f68u: goto label_188f68;
        case 0x188f6cu: goto label_188f6c;
        case 0x188f70u: goto label_188f70;
        case 0x188f74u: goto label_188f74;
        case 0x188f78u: goto label_188f78;
        case 0x188f7cu: goto label_188f7c;
        case 0x188f80u: goto label_188f80;
        case 0x188f84u: goto label_188f84;
        case 0x188f88u: goto label_188f88;
        case 0x188f8cu: goto label_188f8c;
        case 0x188f90u: goto label_188f90;
        case 0x188f94u: goto label_188f94;
        case 0x188f98u: goto label_188f98;
        case 0x188f9cu: goto label_188f9c;
        case 0x188fa0u: goto label_188fa0;
        case 0x188fa4u: goto label_188fa4;
        case 0x188fa8u: goto label_188fa8;
        case 0x188facu: goto label_188fac;
        case 0x188fb0u: goto label_188fb0;
        case 0x188fb4u: goto label_188fb4;
        case 0x188fb8u: goto label_188fb8;
        case 0x188fbcu: goto label_188fbc;
        case 0x188fc0u: goto label_188fc0;
        case 0x188fc4u: goto label_188fc4;
        case 0x188fc8u: goto label_188fc8;
        case 0x188fccu: goto label_188fcc;
        case 0x188fd0u: goto label_188fd0;
        case 0x188fd4u: goto label_188fd4;
        case 0x188fd8u: goto label_188fd8;
        case 0x188fdcu: goto label_188fdc;
        case 0x188fe0u: goto label_188fe0;
        case 0x188fe4u: goto label_188fe4;
        case 0x188fe8u: goto label_188fe8;
        case 0x188fecu: goto label_188fec;
        case 0x188ff0u: goto label_188ff0;
        case 0x188ff4u: goto label_188ff4;
        case 0x188ff8u: goto label_188ff8;
        case 0x188ffcu: goto label_188ffc;
        case 0x189000u: goto label_189000;
        case 0x189004u: goto label_189004;
        case 0x189008u: goto label_189008;
        case 0x18900cu: goto label_18900c;
        case 0x189010u: goto label_189010;
        case 0x189014u: goto label_189014;
        case 0x189018u: goto label_189018;
        case 0x18901cu: goto label_18901c;
        case 0x189020u: goto label_189020;
        case 0x189024u: goto label_189024;
        case 0x189028u: goto label_189028;
        case 0x18902cu: goto label_18902c;
        case 0x189030u: goto label_189030;
        case 0x189034u: goto label_189034;
        case 0x189038u: goto label_189038;
        case 0x18903cu: goto label_18903c;
        case 0x189040u: goto label_189040;
        case 0x189044u: goto label_189044;
        case 0x189048u: goto label_189048;
        case 0x18904cu: goto label_18904c;
        case 0x189050u: goto label_189050;
        case 0x189054u: goto label_189054;
        case 0x189058u: goto label_189058;
        case 0x18905cu: goto label_18905c;
        case 0x189060u: goto label_189060;
        case 0x189064u: goto label_189064;
        case 0x189068u: goto label_189068;
        case 0x18906cu: goto label_18906c;
        case 0x189070u: goto label_189070;
        case 0x189074u: goto label_189074;
        case 0x189078u: goto label_189078;
        case 0x18907cu: goto label_18907c;
        case 0x189080u: goto label_189080;
        case 0x189084u: goto label_189084;
        case 0x189088u: goto label_189088;
        case 0x18908cu: goto label_18908c;
        case 0x189090u: goto label_189090;
        case 0x189094u: goto label_189094;
        case 0x189098u: goto label_189098;
        case 0x18909cu: goto label_18909c;
        case 0x1890a0u: goto label_1890a0;
        case 0x1890a4u: goto label_1890a4;
        case 0x1890a8u: goto label_1890a8;
        case 0x1890acu: goto label_1890ac;
        case 0x1890b0u: goto label_1890b0;
        case 0x1890b4u: goto label_1890b4;
        case 0x1890b8u: goto label_1890b8;
        case 0x1890bcu: goto label_1890bc;
        case 0x1890c0u: goto label_1890c0;
        case 0x1890c4u: goto label_1890c4;
        case 0x1890c8u: goto label_1890c8;
        case 0x1890ccu: goto label_1890cc;
        case 0x1890d0u: goto label_1890d0;
        case 0x1890d4u: goto label_1890d4;
        case 0x1890d8u: goto label_1890d8;
        case 0x1890dcu: goto label_1890dc;
        case 0x1890e0u: goto label_1890e0;
        case 0x1890e4u: goto label_1890e4;
        case 0x1890e8u: goto label_1890e8;
        case 0x1890ecu: goto label_1890ec;
        case 0x1890f0u: goto label_1890f0;
        case 0x1890f4u: goto label_1890f4;
        case 0x1890f8u: goto label_1890f8;
        case 0x1890fcu: goto label_1890fc;
        case 0x189100u: goto label_189100;
        case 0x189104u: goto label_189104;
        case 0x189108u: goto label_189108;
        case 0x18910cu: goto label_18910c;
        case 0x189110u: goto label_189110;
        case 0x189114u: goto label_189114;
        case 0x189118u: goto label_189118;
        case 0x18911cu: goto label_18911c;
        case 0x189120u: goto label_189120;
        case 0x189124u: goto label_189124;
        case 0x189128u: goto label_189128;
        case 0x18912cu: goto label_18912c;
        case 0x189130u: goto label_189130;
        case 0x189134u: goto label_189134;
        case 0x189138u: goto label_189138;
        case 0x18913cu: goto label_18913c;
        case 0x189140u: goto label_189140;
        case 0x189144u: goto label_189144;
        case 0x189148u: goto label_189148;
        case 0x18914cu: goto label_18914c;
        case 0x189150u: goto label_189150;
        case 0x189154u: goto label_189154;
        case 0x189158u: goto label_189158;
        case 0x18915cu: goto label_18915c;
        case 0x189160u: goto label_189160;
        case 0x189164u: goto label_189164;
        case 0x189168u: goto label_189168;
        case 0x18916cu: goto label_18916c;
        case 0x189170u: goto label_189170;
        case 0x189174u: goto label_189174;
        case 0x189178u: goto label_189178;
        case 0x18917cu: goto label_18917c;
        case 0x189180u: goto label_189180;
        case 0x189184u: goto label_189184;
        case 0x189188u: goto label_189188;
        case 0x18918cu: goto label_18918c;
        case 0x189190u: goto label_189190;
        case 0x189194u: goto label_189194;
        case 0x189198u: goto label_189198;
        case 0x18919cu: goto label_18919c;
        case 0x1891a0u: goto label_1891a0;
        case 0x1891a4u: goto label_1891a4;
        case 0x1891a8u: goto label_1891a8;
        case 0x1891acu: goto label_1891ac;
        case 0x1891b0u: goto label_1891b0;
        case 0x1891b4u: goto label_1891b4;
        case 0x1891b8u: goto label_1891b8;
        case 0x1891bcu: goto label_1891bc;
        case 0x1891c0u: goto label_1891c0;
        case 0x1891c4u: goto label_1891c4;
        case 0x1891c8u: goto label_1891c8;
        case 0x1891ccu: goto label_1891cc;
        case 0x1891d0u: goto label_1891d0;
        case 0x1891d4u: goto label_1891d4;
        case 0x1891d8u: goto label_1891d8;
        case 0x1891dcu: goto label_1891dc;
        case 0x1891e0u: goto label_1891e0;
        case 0x1891e4u: goto label_1891e4;
        case 0x1891e8u: goto label_1891e8;
        case 0x1891ecu: goto label_1891ec;
        case 0x1891f0u: goto label_1891f0;
        case 0x1891f4u: goto label_1891f4;
        case 0x1891f8u: goto label_1891f8;
        case 0x1891fcu: goto label_1891fc;
        case 0x189200u: goto label_189200;
        case 0x189204u: goto label_189204;
        case 0x189208u: goto label_189208;
        case 0x18920cu: goto label_18920c;
        case 0x189210u: goto label_189210;
        case 0x189214u: goto label_189214;
        case 0x189218u: goto label_189218;
        case 0x18921cu: goto label_18921c;
        case 0x189220u: goto label_189220;
        case 0x189224u: goto label_189224;
        case 0x189228u: goto label_189228;
        case 0x18922cu: goto label_18922c;
        case 0x189230u: goto label_189230;
        case 0x189234u: goto label_189234;
        case 0x189238u: goto label_189238;
        case 0x18923cu: goto label_18923c;
        case 0x189240u: goto label_189240;
        case 0x189244u: goto label_189244;
        case 0x189248u: goto label_189248;
        case 0x18924cu: goto label_18924c;
        case 0x189250u: goto label_189250;
        case 0x189254u: goto label_189254;
        case 0x189258u: goto label_189258;
        case 0x18925cu: goto label_18925c;
        case 0x189260u: goto label_189260;
        case 0x189264u: goto label_189264;
        case 0x189268u: goto label_189268;
        case 0x18926cu: goto label_18926c;
        case 0x189270u: goto label_189270;
        case 0x189274u: goto label_189274;
        case 0x189278u: goto label_189278;
        case 0x18927cu: goto label_18927c;
        case 0x189280u: goto label_189280;
        case 0x189284u: goto label_189284;
        case 0x189288u: goto label_189288;
        case 0x18928cu: goto label_18928c;
        case 0x189290u: goto label_189290;
        case 0x189294u: goto label_189294;
        case 0x189298u: goto label_189298;
        case 0x18929cu: goto label_18929c;
        case 0x1892a0u: goto label_1892a0;
        case 0x1892a4u: goto label_1892a4;
        case 0x1892a8u: goto label_1892a8;
        case 0x1892acu: goto label_1892ac;
        case 0x1892b0u: goto label_1892b0;
        case 0x1892b4u: goto label_1892b4;
        case 0x1892b8u: goto label_1892b8;
        case 0x1892bcu: goto label_1892bc;
        case 0x1892c0u: goto label_1892c0;
        case 0x1892c4u: goto label_1892c4;
        case 0x1892c8u: goto label_1892c8;
        case 0x1892ccu: goto label_1892cc;
        case 0x1892d0u: goto label_1892d0;
        case 0x1892d4u: goto label_1892d4;
        case 0x1892d8u: goto label_1892d8;
        case 0x1892dcu: goto label_1892dc;
        case 0x1892e0u: goto label_1892e0;
        case 0x1892e4u: goto label_1892e4;
        case 0x1892e8u: goto label_1892e8;
        case 0x1892ecu: goto label_1892ec;
        case 0x1892f0u: goto label_1892f0;
        case 0x1892f4u: goto label_1892f4;
        case 0x1892f8u: goto label_1892f8;
        case 0x1892fcu: goto label_1892fc;
        case 0x189300u: goto label_189300;
        case 0x189304u: goto label_189304;
        case 0x189308u: goto label_189308;
        case 0x18930cu: goto label_18930c;
        case 0x189310u: goto label_189310;
        case 0x189314u: goto label_189314;
        case 0x189318u: goto label_189318;
        case 0x18931cu: goto label_18931c;
        case 0x189320u: goto label_189320;
        case 0x189324u: goto label_189324;
        case 0x189328u: goto label_189328;
        case 0x18932cu: goto label_18932c;
        case 0x189330u: goto label_189330;
        case 0x189334u: goto label_189334;
        case 0x189338u: goto label_189338;
        case 0x18933cu: goto label_18933c;
        case 0x189340u: goto label_189340;
        case 0x189344u: goto label_189344;
        case 0x189348u: goto label_189348;
        case 0x18934cu: goto label_18934c;
        case 0x189350u: goto label_189350;
        case 0x189354u: goto label_189354;
        case 0x189358u: goto label_189358;
        case 0x18935cu: goto label_18935c;
        case 0x189360u: goto label_189360;
        case 0x189364u: goto label_189364;
        case 0x189368u: goto label_189368;
        case 0x18936cu: goto label_18936c;
        case 0x189370u: goto label_189370;
        case 0x189374u: goto label_189374;
        case 0x189378u: goto label_189378;
        case 0x18937cu: goto label_18937c;
        case 0x189380u: goto label_189380;
        case 0x189384u: goto label_189384;
        case 0x189388u: goto label_189388;
        case 0x18938cu: goto label_18938c;
        case 0x189390u: goto label_189390;
        case 0x189394u: goto label_189394;
        case 0x189398u: goto label_189398;
        case 0x18939cu: goto label_18939c;
        case 0x1893a0u: goto label_1893a0;
        case 0x1893a4u: goto label_1893a4;
        case 0x1893a8u: goto label_1893a8;
        case 0x1893acu: goto label_1893ac;
        case 0x1893b0u: goto label_1893b0;
        case 0x1893b4u: goto label_1893b4;
        case 0x1893b8u: goto label_1893b8;
        case 0x1893bcu: goto label_1893bc;
        case 0x1893c0u: goto label_1893c0;
        case 0x1893c4u: goto label_1893c4;
        case 0x1893c8u: goto label_1893c8;
        case 0x1893ccu: goto label_1893cc;
        case 0x1893d0u: goto label_1893d0;
        case 0x1893d4u: goto label_1893d4;
        case 0x1893d8u: goto label_1893d8;
        case 0x1893dcu: goto label_1893dc;
        case 0x1893e0u: goto label_1893e0;
        case 0x1893e4u: goto label_1893e4;
        case 0x1893e8u: goto label_1893e8;
        case 0x1893ecu: goto label_1893ec;
        case 0x1893f0u: goto label_1893f0;
        case 0x1893f4u: goto label_1893f4;
        case 0x1893f8u: goto label_1893f8;
        case 0x1893fcu: goto label_1893fc;
        case 0x189400u: goto label_189400;
        case 0x189404u: goto label_189404;
        case 0x189408u: goto label_189408;
        case 0x18940cu: goto label_18940c;
        case 0x189410u: goto label_189410;
        case 0x189414u: goto label_189414;
        case 0x189418u: goto label_189418;
        case 0x18941cu: goto label_18941c;
        case 0x189420u: goto label_189420;
        case 0x189424u: goto label_189424;
        case 0x189428u: goto label_189428;
        case 0x18942cu: goto label_18942c;
        case 0x189430u: goto label_189430;
        case 0x189434u: goto label_189434;
        case 0x189438u: goto label_189438;
        case 0x18943cu: goto label_18943c;
        case 0x189440u: goto label_189440;
        case 0x189444u: goto label_189444;
        case 0x189448u: goto label_189448;
        case 0x18944cu: goto label_18944c;
        case 0x189450u: goto label_189450;
        case 0x189454u: goto label_189454;
        case 0x189458u: goto label_189458;
        case 0x18945cu: goto label_18945c;
        case 0x189460u: goto label_189460;
        case 0x189464u: goto label_189464;
        case 0x189468u: goto label_189468;
        case 0x18946cu: goto label_18946c;
        case 0x189470u: goto label_189470;
        case 0x189474u: goto label_189474;
        case 0x189478u: goto label_189478;
        case 0x18947cu: goto label_18947c;
        case 0x189480u: goto label_189480;
        case 0x189484u: goto label_189484;
        case 0x189488u: goto label_189488;
        case 0x18948cu: goto label_18948c;
        case 0x189490u: goto label_189490;
        case 0x189494u: goto label_189494;
        case 0x189498u: goto label_189498;
        case 0x18949cu: goto label_18949c;
        case 0x1894a0u: goto label_1894a0;
        case 0x1894a4u: goto label_1894a4;
        case 0x1894a8u: goto label_1894a8;
        case 0x1894acu: goto label_1894ac;
        case 0x1894b0u: goto label_1894b0;
        case 0x1894b4u: goto label_1894b4;
        case 0x1894b8u: goto label_1894b8;
        case 0x1894bcu: goto label_1894bc;
        case 0x1894c0u: goto label_1894c0;
        case 0x1894c4u: goto label_1894c4;
        case 0x1894c8u: goto label_1894c8;
        case 0x1894ccu: goto label_1894cc;
        case 0x1894d0u: goto label_1894d0;
        case 0x1894d4u: goto label_1894d4;
        case 0x1894d8u: goto label_1894d8;
        case 0x1894dcu: goto label_1894dc;
        case 0x1894e0u: goto label_1894e0;
        case 0x1894e4u: goto label_1894e4;
        case 0x1894e8u: goto label_1894e8;
        case 0x1894ecu: goto label_1894ec;
        case 0x1894f0u: goto label_1894f0;
        case 0x1894f4u: goto label_1894f4;
        default: break;
    }

    ctx->pc = 0x188aa8u;

label_188aa8:
    // 0x188aa8: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_188aac:
    // 0x188aac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x188aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_188ab0:
    // 0x188ab0: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x188ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_188ab4:
    // 0x188ab4: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x188ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_188ab8:
    // 0x188ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188abc:
    // 0x188abc: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x188abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_188ac0:
    // 0x188ac0: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x188ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_188ac4:
    // 0x188ac4: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x188ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_188ac8:
    // 0x188ac8: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x188ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_188acc:
    // 0x188acc: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x188accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_188ad0:
    // 0x188ad0: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x188ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_188ad4:
    // 0x188ad4: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x188ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_188ad8:
    // 0x188ad8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x188ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_188adc:
    // 0x188adc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x188adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_188ae0:
    // 0x188ae0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x188ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_188ae4:
    // 0x188ae4: 0x60f809  jalr        $v1
label_188ae8:
    if (ctx->pc == 0x188AE8u) {
        ctx->pc = 0x188AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AE4u;
        // 0x188ae8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AECu;
        goto label_188aec;
    }
    ctx->pc = 0x188AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188AECu);
        ctx->pc = 0x188AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AE4u;
        // 0x188ae8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188AE4u, 0x188AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188AECu;
label_188aec:
    // 0x188aec: 0xc062ac8  jal         func_18AB20
label_188af0:
    if (ctx->pc == 0x188AF0u) {
        ctx->pc = 0x188AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AECu;
        // 0x188af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AF4u;
        goto label_188af4;
    }
    ctx->pc = 0x188AECu;
    SET_GPR_U32(ctx, 31, 0x188AF4u);
    ctx->pc = 0x188AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AECu;
    // 0x188af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB20u, 0x188AECu, 0x188AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AF4u;
label_188af4:
    // 0x188af4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188af8:
    // 0x188af8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188afc:
    // 0x188afc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x188afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_188b00:
    // 0x188b00: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
label_188b04:
    if (ctx->pc == 0x188B04u) {
        ctx->pc = 0x188B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B00u;
        // 0x188b04: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B08u;
        goto label_188b08;
    }
    ctx->pc = 0x188B00u;
    {
        const bool branch_taken_0x188b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B00u;
        // 0x188b04: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b00) {
            ctx->pc = 0x188C60u;
            goto label_188c60;
        }
    }
    ctx->pc = 0x188B08u;
label_188b08:
    // 0x188b08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x188b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_188b0c:
    // 0x188b0c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_188b10:
    // 0x188b10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188b14:
    // 0x188b14: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
label_188b18:
    if (ctx->pc == 0x188B18u) {
        ctx->pc = 0x188B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B14u;
        // 0x188b18: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B1Cu;
        goto label_188b1c;
    }
    ctx->pc = 0x188B14u;
    {
        const bool branch_taken_0x188b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188b14) {
            ctx->pc = 0x188B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B14u;
            // 0x188b18: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BC8u;
            goto label_188bc8;
        }
    }
    ctx->pc = 0x188B1Cu;
label_188b1c:
    // 0x188b1c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x188b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_188b20:
    // 0x188b20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x188b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_188b24:
    // 0x188b24: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188b28:
    // 0x188b28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_188b2c:
    if (ctx->pc == 0x188B2Cu) {
        ctx->pc = 0x188B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B28u;
        // 0x188b2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B30u;
        goto label_188b30;
    }
    ctx->pc = 0x188B28u;
    {
        const bool branch_taken_0x188b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B28u;
        // 0x188b2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b28) {
            ctx->pc = 0x188B68u;
            goto label_188b68;
        }
    }
    ctx->pc = 0x188B30u;
label_188b30:
    // 0x188b30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x188b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_188b34:
    // 0x188b34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188b38:
    // 0x188b38: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_188b3c:
    if (ctx->pc == 0x188B3Cu) {
        ctx->pc = 0x188B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B38u;
        // 0x188b3c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B40u;
        goto label_188b40;
    }
    ctx->pc = 0x188B38u;
    {
        const bool branch_taken_0x188b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B38u;
        // 0x188b3c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b38) {
            ctx->pc = 0x188BACu;
            goto label_188bac;
        }
    }
    ctx->pc = 0x188B40u;
label_188b40:
    // 0x188b40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188b44:
    // 0x188b44: 0x0  nop
    ctx->pc = 0x188b44u;
    // NOP
label_188b48:
    // 0x188b48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188b4c:
    // 0x188b4c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x188b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_188b50:
    // 0x188b50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188b54:
    // 0x188b54: 0x0  nop
    ctx->pc = 0x188b54u;
    // NOP
label_188b58:
    // 0x188b58: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_188b5c:
    if (ctx->pc == 0x188B5Cu) {
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B60u;
        goto label_188b60;
    }
    ctx->pc = 0x188B58u;
    {
        const bool branch_taken_0x188b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188b58) {
            ctx->pc = 0x188B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B58u;
            // 0x188b5c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b48;
        }
    }
    ctx->pc = 0x188B60u;
label_188b60:
    // 0x188b60: 0x10000012  b           . + 4 + (0x12 << 2)
label_188b64:
    if (ctx->pc == 0x188B64u) {
        ctx->pc = 0x188B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B60u;
        // 0x188b64: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B68u;
        goto label_188b68;
    }
    ctx->pc = 0x188B60u;
    {
        const bool branch_taken_0x188b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B60u;
        // 0x188b64: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b60) {
            ctx->pc = 0x188BACu;
            goto label_188bac;
        }
    }
    ctx->pc = 0x188B68u;
label_188b68:
    // 0x188b68: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_188b6c:
    // 0x188b6c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188b70:
    // 0x188b70: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
label_188b74:
    if (ctx->pc == 0x188B74u) {
        ctx->pc = 0x188B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B70u;
        // 0x188b74: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B78u;
        goto label_188b78;
    }
    ctx->pc = 0x188B70u;
    {
        const bool branch_taken_0x188b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x188b70) {
            ctx->pc = 0x188B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B70u;
            // 0x188b74: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B9Cu;
            goto label_188b9c;
        }
    }
    ctx->pc = 0x188B78u;
label_188b78:
    // 0x188b78: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x188b78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_188b7c:
    // 0x188b7c: 0x0  nop
    ctx->pc = 0x188b7cu;
    // NOP
label_188b80:
    // 0x188b80: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188b84:
    // 0x188b84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188b88:
    // 0x188b88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188b8c:
    // 0x188b8c: 0x0  nop
    ctx->pc = 0x188b8cu;
    // NOP
label_188b90:
    // 0x188b90: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188b94:
    if (ctx->pc == 0x188B94u) {
        ctx->pc = 0x188B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B90u;
        // 0x188b94: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B98u;
        goto label_188b98;
    }
    ctx->pc = 0x188B90u;
    {
        const bool branch_taken_0x188b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188b90) {
            ctx->pc = 0x188B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B90u;
            // 0x188b94: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b80;
        }
    }
    ctx->pc = 0x188B98u;
label_188b98:
    // 0x188b98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188b9c:
    // 0x188b9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188ba0:
    // 0x188ba0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188ba4:
    if (ctx->pc == 0x188BA4u) {
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BA8u;
        goto label_188ba8;
    }
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188BA0u;
            // 0x188ba4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BA8u;
            goto label_188ba8;
        }
    }
    ctx->pc = 0x188BA8u;
label_188ba8:
    // 0x188ba8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188bac:
    // 0x188bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188bb0:
    // 0x188bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_188bb4:
    // 0x188bb4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x188bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_188bb8:
    // 0x188bb8: 0xc05e13c  jal         func_1784F0
label_188bbc:
    if (ctx->pc == 0x188BBCu) {
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BB8u;
        // 0x188bbc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BC0u;
        goto label_188bc0;
    }
    ctx->pc = 0x188BB8u;
    SET_GPR_U32(ctx, 31, 0x188BC0u);
    ctx->pc = 0x188BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BB8u;
    // 0x188bbc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784F0u, 0x188BB8u, 0x188BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BC0u;
label_188bc0:
    // 0x188bc0: 0x10000024  b           . + 4 + (0x24 << 2)
label_188bc4:
    if (ctx->pc == 0x188BC4u) {
        ctx->pc = 0x188BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BC0u;
        // 0x188bc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BC8u;
        goto label_188bc8;
    }
    ctx->pc = 0x188BC0u;
    {
        const bool branch_taken_0x188bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BC0u;
        // 0x188bc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bc0) {
            ctx->pc = 0x188C54u;
            goto label_188c54;
        }
    }
    ctx->pc = 0x188BC8u;
label_188bc8:
    // 0x188bc8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188bcc:
    // 0x188bcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_188bd0:
    if (ctx->pc == 0x188BD0u) {
        ctx->pc = 0x188BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BCCu;
        // 0x188bd0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BD4u;
        goto label_188bd4;
    }
    ctx->pc = 0x188BCCu;
    {
        const bool branch_taken_0x188bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BCCu;
        // 0x188bd0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bcc) {
            ctx->pc = 0x188C08u;
            goto label_188c08;
        }
    }
    ctx->pc = 0x188BD4u;
label_188bd4:
    // 0x188bd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x188bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_188bd8:
    // 0x188bd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188bdc:
    // 0x188bdc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_188be0:
    if (ctx->pc == 0x188BE0u) {
        ctx->pc = 0x188BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BDCu;
        // 0x188be0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BE4u;
        goto label_188be4;
    }
    ctx->pc = 0x188BDCu;
    {
        const bool branch_taken_0x188bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BDCu;
        // 0x188be0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bdc) {
            ctx->pc = 0x188C4Cu;
            goto label_188c4c;
        }
    }
    ctx->pc = 0x188BE4u;
label_188be4:
    // 0x188be4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x188be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188be8:
    // 0x188be8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188bec:
    // 0x188bec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x188becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_188bf0:
    // 0x188bf0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188bf4:
    // 0x188bf4: 0x0  nop
    ctx->pc = 0x188bf4u;
    // NOP
label_188bf8:
    // 0x188bf8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_188bfc:
    if (ctx->pc == 0x188BFCu) {
        ctx->pc = 0x188BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF8u;
        // 0x188bfc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C00u;
        goto label_188c00;
    }
    ctx->pc = 0x188BF8u;
    {
        const bool branch_taken_0x188bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188bf8) {
            ctx->pc = 0x188BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188BF8u;
            // 0x188bfc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188be8;
        }
    }
    ctx->pc = 0x188C00u;
label_188c00:
    // 0x188c00: 0x10000012  b           . + 4 + (0x12 << 2)
label_188c04:
    if (ctx->pc == 0x188C04u) {
        ctx->pc = 0x188C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C00u;
        // 0x188c04: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C08u;
        goto label_188c08;
    }
    ctx->pc = 0x188C00u;
    {
        const bool branch_taken_0x188c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C00u;
        // 0x188c04: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c00) {
            ctx->pc = 0x188C4Cu;
            goto label_188c4c;
        }
    }
    ctx->pc = 0x188C08u;
label_188c08:
    // 0x188c08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_188c0c:
    // 0x188c0c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188c10:
    // 0x188c10: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
label_188c14:
    if (ctx->pc == 0x188C14u) {
        ctx->pc = 0x188C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C10u;
        // 0x188c14: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C18u;
        goto label_188c18;
    }
    ctx->pc = 0x188C10u;
    {
        const bool branch_taken_0x188c10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x188c10) {
            ctx->pc = 0x188C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C10u;
            // 0x188c14: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C3Cu;
            goto label_188c3c;
        }
    }
    ctx->pc = 0x188C18u;
label_188c18:
    // 0x188c18: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x188c18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_188c1c:
    // 0x188c1c: 0x0  nop
    ctx->pc = 0x188c1cu;
    // NOP
label_188c20:
    // 0x188c20: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188c24:
    // 0x188c24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188c28:
    // 0x188c28: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188c2c:
    // 0x188c2c: 0x0  nop
    ctx->pc = 0x188c2cu;
    // NOP
label_188c30:
    // 0x188c30: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188c34:
    if (ctx->pc == 0x188C34u) {
        ctx->pc = 0x188C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C30u;
        // 0x188c34: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C38u;
        goto label_188c38;
    }
    ctx->pc = 0x188C30u;
    {
        const bool branch_taken_0x188c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188c30) {
            ctx->pc = 0x188C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C30u;
            // 0x188c34: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188c20;
        }
    }
    ctx->pc = 0x188C38u;
label_188c38:
    // 0x188c38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_188c3c:
    // 0x188c3c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188c40:
    // 0x188c40: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188c44:
    if (ctx->pc == 0x188C44u) {
        ctx->pc = 0x188C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C40u;
        // 0x188c44: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C48u;
        goto label_188c48;
    }
    ctx->pc = 0x188C40u;
    {
        const bool branch_taken_0x188c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188c40) {
            ctx->pc = 0x188C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C40u;
            // 0x188c44: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C48u;
            goto label_188c48;
        }
    }
    ctx->pc = 0x188C48u;
label_188c48:
    // 0x188c48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_188c4c:
    // 0x188c4c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x188c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_188c50:
    // 0x188c50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188c54:
    // 0x188c54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_188c58:
    // 0x188c58: 0x1462ffab  bne         $v1, $v0, . + 4 + (-0x55 << 2)
label_188c5c:
    if (ctx->pc == 0x188C5Cu) {
        ctx->pc = 0x188C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C58u;
        // 0x188c5c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C60u;
        goto label_188c60;
    }
    ctx->pc = 0x188C58u;
    {
        const bool branch_taken_0x188c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C58u;
        // 0x188c5c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c58) {
            ctx->pc = 0x188B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b08;
        }
    }
    ctx->pc = 0x188C60u;
label_188c60:
    // 0x188c60: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_188c64:
    // 0x188c64: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x188c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_188c68:
    // 0x188c68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188c6c:
    // 0x188c6c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x188c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_188c70:
    // 0x188c70: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x188c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_188c74:
    // 0x188c74: 0x26140060  addiu       $s4, $s0, 0x60
    ctx->pc = 0x188c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_188c78:
    // 0x188c78: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x188c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188c7c:
    // 0x188c7c: 0x26150040  addiu       $s5, $s0, 0x40
    ctx->pc = 0x188c7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_188c80:
    // 0x188c80: 0x26160050  addiu       $s6, $s0, 0x50
    ctx->pc = 0x188c80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_188c84:
    // 0x188c84: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x188c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_188c88:
    // 0x188c88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x188c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188c8c:
    // 0x188c8c: 0x10820054  beq         $a0, $v0, . + 4 + (0x54 << 2)
label_188c90:
    if (ctx->pc == 0x188C90u) {
        ctx->pc = 0x188C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C8Cu;
        // 0x188c90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C94u;
        goto label_188c94;
    }
    ctx->pc = 0x188C8Cu;
    {
        const bool branch_taken_0x188c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x188C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C8Cu;
        // 0x188c90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c8c) {
            ctx->pc = 0x188DE0u;
            goto label_188de0;
        }
    }
    ctx->pc = 0x188C94u;
label_188c94:
    // 0x188c94: 0x0  nop
    ctx->pc = 0x188c94u;
    // NOP
label_188c98:
    // 0x188c98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x188c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188c9c:
    // 0x188c9c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x188c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_188ca0:
    // 0x188ca0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188ca4:
    // 0x188ca4: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_188ca8:
    if (ctx->pc == 0x188CA8u) {
        ctx->pc = 0x188CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CA4u;
        // 0x188ca8: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CACu;
        goto label_188cac;
    }
    ctx->pc = 0x188CA4u;
    {
        const bool branch_taken_0x188ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ca4) {
            ctx->pc = 0x188CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188CA4u;
            // 0x188ca8: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188CACu;
label_188cac:
    // 0x188cac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x188cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_188cb0:
    // 0x188cb0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x188cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_188cb4:
    // 0x188cb4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188cb8:
    // 0x188cb8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_188cbc:
    if (ctx->pc == 0x188CBCu) {
        ctx->pc = 0x188CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CB8u;
        // 0x188cbc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CC0u;
        goto label_188cc0;
    }
    ctx->pc = 0x188CB8u;
    {
        const bool branch_taken_0x188cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cb8) {
            ctx->pc = 0x188CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188CB8u;
            // 0x188cbc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188CF8u;
            goto label_188cf8;
        }
    }
    ctx->pc = 0x188CC0u;
label_188cc0:
    // 0x188cc0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x188cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_188cc4:
    // 0x188cc4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188cc8:
    // 0x188cc8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_188ccc:
    if (ctx->pc == 0x188CCCu) {
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CD0u;
        goto label_188cd0;
    }
    ctx->pc = 0x188CC8u;
    {
        const bool branch_taken_0x188cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc8) {
            ctx->pc = 0x188D34u;
            goto label_188d34;
        }
    }
    ctx->pc = 0x188CD0u;
label_188cd0:
    // 0x188cd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x188cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188cd4:
    // 0x188cd4: 0x0  nop
    ctx->pc = 0x188cd4u;
    // NOP
label_188cd8:
    // 0x188cd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188cdc:
    // 0x188cdc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x188cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_188ce0:
    // 0x188ce0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188ce4:
    // 0x188ce4: 0x0  nop
    ctx->pc = 0x188ce4u;
    // NOP
label_188ce8:
    // 0x188ce8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188cec:
    if (ctx->pc == 0x188CECu) {
        ctx->pc = 0x188CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE8u;
        // 0x188cec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CF0u;
        goto label_188cf0;
    }
    ctx->pc = 0x188CE8u;
    {
        const bool branch_taken_0x188ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE8u;
        // 0x188cec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce8) {
            ctx->pc = 0x188CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188cd8;
        }
    }
    ctx->pc = 0x188CF0u;
label_188cf0:
    // 0x188cf0: 0x10000010  b           . + 4 + (0x10 << 2)
label_188cf4:
    if (ctx->pc == 0x188CF4u) {
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CF8u;
        goto label_188cf8;
    }
    ctx->pc = 0x188CF0u;
    {
        const bool branch_taken_0x188cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cf0) {
            ctx->pc = 0x188D34u;
            goto label_188d34;
        }
    }
    ctx->pc = 0x188CF8u;
label_188cf8:
    // 0x188cf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188cfc:
    // 0x188cfc: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188d00:
    if (ctx->pc == 0x188D00u) {
        ctx->pc = 0x188D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CFCu;
        // 0x188d00: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D04u;
        goto label_188d04;
    }
    ctx->pc = 0x188CFCu;
    {
        const bool branch_taken_0x188cfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CFCu;
        // 0x188d00: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cfc) {
            ctx->pc = 0x188D24u;
            goto label_188d24;
        }
    }
    ctx->pc = 0x188D04u;
label_188d04:
    // 0x188d04: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x188d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_188d08:
    // 0x188d08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188d0c:
    // 0x188d0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x188d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188d10:
    // 0x188d10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188d14:
    // 0x188d14: 0x0  nop
    ctx->pc = 0x188d14u;
    // NOP
label_188d18:
    // 0x188d18: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188d1c:
    if (ctx->pc == 0x188D1Cu) {
        ctx->pc = 0x188D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D18u;
        // 0x188d1c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D20u;
        goto label_188d20;
    }
    ctx->pc = 0x188D18u;
    {
        const bool branch_taken_0x188d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188d18) {
            ctx->pc = 0x188D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D18u;
            // 0x188d1c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188d08;
        }
    }
    ctx->pc = 0x188D20u;
label_188d20:
    // 0x188d20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188d24:
    // 0x188d24: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188d28:
    // 0x188d28: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188d2c:
    if (ctx->pc == 0x188D2Cu) {
        ctx->pc = 0x188D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D28u;
        // 0x188d2c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D30u;
        goto label_188d30;
    }
    ctx->pc = 0x188D28u;
    {
        const bool branch_taken_0x188d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188d28) {
            ctx->pc = 0x188D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D28u;
            // 0x188d2c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D30u;
            goto label_188d30;
        }
    }
    ctx->pc = 0x188D30u;
label_188d30:
    // 0x188d30: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_188d34:
    // 0x188d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188d38:
    // 0x188d38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x188d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_188d3c:
    // 0x188d3c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x188d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_188d40:
    // 0x188d40: 0xc06053c  jal         func_1814F0
label_188d44:
    if (ctx->pc == 0x188D44u) {
        ctx->pc = 0x188D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D40u;
        // 0x188d44: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D48u;
        goto label_188d48;
    }
    ctx->pc = 0x188D40u;
    SET_GPR_U32(ctx, 31, 0x188D48u);
    ctx->pc = 0x188D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D40u;
    // 0x188d44: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1814F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1814F0u, 0x188D40u, 0x188D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D48u;
label_188d48:
    // 0x188d48: 0x10000022  b           . + 4 + (0x22 << 2)
label_188d4c:
    if (ctx->pc == 0x188D4Cu) {
        ctx->pc = 0x188D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D48u;
        // 0x188d4c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D50u;
        goto label_188d50;
    }
    ctx->pc = 0x188D48u;
    {
        const bool branch_taken_0x188d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D48u;
        // 0x188d4c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d48) {
            ctx->pc = 0x188DD4u;
            goto label_188dd4;
        }
    }
    ctx->pc = 0x188D50u;
label_188d50:
    // 0x188d50: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188d54:
    // 0x188d54: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_188d58:
    if (ctx->pc == 0x188D58u) {
        ctx->pc = 0x188D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D54u;
        // 0x188d58: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D5Cu;
        goto label_188d5c;
    }
    ctx->pc = 0x188D54u;
    {
        const bool branch_taken_0x188d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d54) {
            ctx->pc = 0x188D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D54u;
            // 0x188d58: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D90u;
            goto label_188d90;
        }
    }
    ctx->pc = 0x188D5Cu;
label_188d5c:
    // 0x188d5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x188d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_188d60:
    // 0x188d60: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188d64:
    // 0x188d64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_188d68:
    if (ctx->pc == 0x188D68u) {
        ctx->pc = 0x188D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D64u;
        // 0x188d68: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D6Cu;
        goto label_188d6c;
    }
    ctx->pc = 0x188D64u;
    {
        const bool branch_taken_0x188d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D64u;
        // 0x188d68: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d64) {
            ctx->pc = 0x188DCCu;
            goto label_188dcc;
        }
    }
    ctx->pc = 0x188D6Cu;
label_188d6c:
    // 0x188d6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x188d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188d70:
    // 0x188d70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188d74:
    // 0x188d74: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x188d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_188d78:
    // 0x188d78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188d7c:
    // 0x188d7c: 0x0  nop
    ctx->pc = 0x188d7cu;
    // NOP
label_188d80:
    // 0x188d80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188d84:
    if (ctx->pc == 0x188D84u) {
        ctx->pc = 0x188D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D80u;
        // 0x188d84: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D88u;
        goto label_188d88;
    }
    ctx->pc = 0x188D80u;
    {
        const bool branch_taken_0x188d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D80u;
        // 0x188d84: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d80) {
            ctx->pc = 0x188D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188d70;
        }
    }
    ctx->pc = 0x188D88u;
label_188d88:
    // 0x188d88: 0x10000010  b           . + 4 + (0x10 << 2)
label_188d8c:
    if (ctx->pc == 0x188D8Cu) {
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D90u;
        goto label_188d90;
    }
    ctx->pc = 0x188D88u;
    {
        const bool branch_taken_0x188d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d88) {
            ctx->pc = 0x188DCCu;
            goto label_188dcc;
        }
    }
    ctx->pc = 0x188D90u;
label_188d90:
    // 0x188d90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188d94:
    // 0x188d94: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188d98:
    if (ctx->pc == 0x188D98u) {
        ctx->pc = 0x188D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D94u;
        // 0x188d98: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D9Cu;
        goto label_188d9c;
    }
    ctx->pc = 0x188D94u;
    {
        const bool branch_taken_0x188d94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D94u;
        // 0x188d98: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d94) {
            ctx->pc = 0x188DBCu;
            goto label_188dbc;
        }
    }
    ctx->pc = 0x188D9Cu;
label_188d9c:
    // 0x188d9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x188d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_188da0:
    // 0x188da0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188da4:
    // 0x188da4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188da8:
    // 0x188da8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188dac:
    // 0x188dac: 0x0  nop
    ctx->pc = 0x188dacu;
    // NOP
label_188db0:
    // 0x188db0: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188db4:
    if (ctx->pc == 0x188DB4u) {
        ctx->pc = 0x188DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB0u;
        // 0x188db4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DB8u;
        goto label_188db8;
    }
    ctx->pc = 0x188DB0u;
    {
        const bool branch_taken_0x188db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188db0) {
            ctx->pc = 0x188DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DB0u;
            // 0x188db4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188da0;
        }
    }
    ctx->pc = 0x188DB8u;
label_188db8:
    // 0x188db8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188dbc:
    // 0x188dbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188dc0:
    // 0x188dc0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188dc4:
    if (ctx->pc == 0x188DC4u) {
        ctx->pc = 0x188DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DC0u;
        // 0x188dc4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DC8u;
        goto label_188dc8;
    }
    ctx->pc = 0x188DC0u;
    {
        const bool branch_taken_0x188dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188dc0) {
            ctx->pc = 0x188DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DC0u;
            // 0x188dc4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188DC8u;
            goto label_188dc8;
        }
    }
    ctx->pc = 0x188DC8u;
label_188dc8:
    // 0x188dc8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x188dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_188dcc:
    // 0x188dcc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x188dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_188dd0:
    // 0x188dd0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_188dd4:
    // 0x188dd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_188dd8:
    // 0x188dd8: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_188ddc:
    if (ctx->pc == 0x188DDCu) {
        ctx->pc = 0x188DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD8u;
        // 0x188ddc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DE0u;
        goto label_188de0;
    }
    ctx->pc = 0x188DD8u;
    {
        const bool branch_taken_0x188dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD8u;
        // 0x188ddc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dd8) {
            ctx->pc = 0x188C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188c98;
        }
    }
    ctx->pc = 0x188DE0u;
label_188de0:
    // 0x188de0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_188de4:
    // 0x188de4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188de8:
    // 0x188de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188dec:
    // 0x188dec: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x188decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_188df0:
    // 0x188df0: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_188df4:
    if (ctx->pc == 0x188DF4u) {
        ctx->pc = 0x188DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DF0u;
        // 0x188df4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188DF8u;
        goto label_188df8;
    }
    ctx->pc = 0x188DF0u;
    {
        const bool branch_taken_0x188df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x188DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DF0u;
        // 0x188df4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188df0) {
            ctx->pc = 0x188F40u;
            goto label_188f40;
        }
    }
    ctx->pc = 0x188DF8u;
label_188df8:
    // 0x188df8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188dfc:
    // 0x188dfc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x188dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_188e00:
    // 0x188e00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188e04:
    // 0x188e04: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_188e08:
    if (ctx->pc == 0x188E08u) {
        ctx->pc = 0x188E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E04u;
        // 0x188e08: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E0Cu;
        goto label_188e0c;
    }
    ctx->pc = 0x188E04u;
    {
        const bool branch_taken_0x188e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e04) {
            ctx->pc = 0x188E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E04u;
            // 0x188e08: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188EB0u;
            goto label_188eb0;
        }
    }
    ctx->pc = 0x188E0Cu;
label_188e0c:
    // 0x188e0c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x188e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_188e10:
    // 0x188e10: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x188e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_188e14:
    // 0x188e14: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188e18:
    // 0x188e18: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_188e1c:
    if (ctx->pc == 0x188E1Cu) {
        ctx->pc = 0x188E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E18u;
        // 0x188e1c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E20u;
        goto label_188e20;
    }
    ctx->pc = 0x188E18u;
    {
        const bool branch_taken_0x188e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e18) {
            ctx->pc = 0x188E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E18u;
            // 0x188e1c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E58u;
            goto label_188e58;
        }
    }
    ctx->pc = 0x188E20u;
label_188e20:
    // 0x188e20: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x188e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_188e24:
    // 0x188e24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188e28:
    // 0x188e28: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_188e2c:
    if (ctx->pc == 0x188E2Cu) {
        ctx->pc = 0x188E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E28u;
        // 0x188e2c: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E30u;
        goto label_188e30;
    }
    ctx->pc = 0x188E28u;
    {
        const bool branch_taken_0x188e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E28u;
        // 0x188e2c: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e28) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188E30u;
label_188e30:
    // 0x188e30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188e34:
    // 0x188e34: 0x0  nop
    ctx->pc = 0x188e34u;
    // NOP
label_188e38:
    // 0x188e38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188e3c:
    // 0x188e3c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x188e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_188e40:
    // 0x188e40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188e44:
    // 0x188e44: 0x0  nop
    ctx->pc = 0x188e44u;
    // NOP
label_188e48:
    // 0x188e48: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188e4c:
    if (ctx->pc == 0x188E4Cu) {
        ctx->pc = 0x188E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E48u;
        // 0x188e4c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E50u;
        goto label_188e50;
    }
    ctx->pc = 0x188E48u;
    {
        const bool branch_taken_0x188e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E48u;
        // 0x188e4c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e48) {
            ctx->pc = 0x188E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188e38;
        }
    }
    ctx->pc = 0x188E50u;
label_188e50:
    // 0x188e50: 0x10000010  b           . + 4 + (0x10 << 2)
label_188e54:
    if (ctx->pc == 0x188E54u) {
        ctx->pc = 0x188E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E50u;
        // 0x188e54: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E58u;
        goto label_188e58;
    }
    ctx->pc = 0x188E50u;
    {
        const bool branch_taken_0x188e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E50u;
        // 0x188e54: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e50) {
            ctx->pc = 0x188E94u;
            goto label_188e94;
        }
    }
    ctx->pc = 0x188E58u;
label_188e58:
    // 0x188e58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188e5c:
    // 0x188e5c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188e60:
    if (ctx->pc == 0x188E60u) {
        ctx->pc = 0x188E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E5Cu;
        // 0x188e60: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E64u;
        goto label_188e64;
    }
    ctx->pc = 0x188E5Cu;
    {
        const bool branch_taken_0x188e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E5Cu;
        // 0x188e60: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e5c) {
            ctx->pc = 0x188E84u;
            goto label_188e84;
        }
    }
    ctx->pc = 0x188E64u;
label_188e64:
    // 0x188e64: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x188e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_188e68:
    // 0x188e68: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188e6c:
    // 0x188e6c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188e70:
    // 0x188e70: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188e74:
    // 0x188e74: 0x0  nop
    ctx->pc = 0x188e74u;
    // NOP
label_188e78:
    // 0x188e78: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188e7c:
    if (ctx->pc == 0x188E7Cu) {
        ctx->pc = 0x188E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E78u;
        // 0x188e7c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E80u;
        goto label_188e80;
    }
    ctx->pc = 0x188E78u;
    {
        const bool branch_taken_0x188e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188e78) {
            ctx->pc = 0x188E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E78u;
            // 0x188e7c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188e68;
        }
    }
    ctx->pc = 0x188E80u;
label_188e80:
    // 0x188e80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188e84:
    // 0x188e84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188e88:
    // 0x188e88: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188e8c:
    if (ctx->pc == 0x188E8Cu) {
        ctx->pc = 0x188E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E88u;
        // 0x188e8c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188E90u;
        goto label_188e90;
    }
    ctx->pc = 0x188E88u;
    {
        const bool branch_taken_0x188e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188e88) {
            ctx->pc = 0x188E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E88u;
            // 0x188e8c: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E90u;
            goto label_188e90;
        }
    }
    ctx->pc = 0x188E90u;
label_188e90:
    // 0x188e90: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_188e94:
    // 0x188e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188e98:
    // 0x188e98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_188e9c:
    // 0x188e9c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x188e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_188ea0:
    // 0x188ea0: 0xc05cef4  jal         func_173BD0
label_188ea4:
    if (ctx->pc == 0x188EA4u) {
        ctx->pc = 0x188EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EA0u;
        // 0x188ea4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EA8u;
        goto label_188ea8;
    }
    ctx->pc = 0x188EA0u;
    SET_GPR_U32(ctx, 31, 0x188EA8u);
    ctx->pc = 0x188EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EA0u;
    // 0x188ea4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173BD0u, 0x188EA0u, 0x188EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EA8u;
label_188ea8:
    // 0x188ea8: 0x10000022  b           . + 4 + (0x22 << 2)
label_188eac:
    if (ctx->pc == 0x188EACu) {
        ctx->pc = 0x188EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EA8u;
        // 0x188eac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EB0u;
        goto label_188eb0;
    }
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EA8u;
        // 0x188eac: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188F34u;
            goto label_188f34;
        }
    }
    ctx->pc = 0x188EB0u;
label_188eb0:
    // 0x188eb0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188eb4:
    // 0x188eb4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_188eb8:
    if (ctx->pc == 0x188EB8u) {
        ctx->pc = 0x188EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EB4u;
        // 0x188eb8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EBCu;
        goto label_188ebc;
    }
    ctx->pc = 0x188EB4u;
    {
        const bool branch_taken_0x188eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188eb4) {
            ctx->pc = 0x188EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EB4u;
            // 0x188eb8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188EF0u;
            goto label_188ef0;
        }
    }
    ctx->pc = 0x188EBCu;
label_188ebc:
    // 0x188ebc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x188ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_188ec0:
    // 0x188ec0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188ec4:
    // 0x188ec4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_188ec8:
    if (ctx->pc == 0x188EC8u) {
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188ECCu;
        goto label_188ecc;
    }
    ctx->pc = 0x188EC4u;
    {
        const bool branch_taken_0x188ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ec4) {
            ctx->pc = 0x188F2Cu;
            goto label_188f2c;
        }
    }
    ctx->pc = 0x188ECCu;
label_188ecc:
    // 0x188ecc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188ed0:
    // 0x188ed0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188ed4:
    // 0x188ed4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x188ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_188ed8:
    // 0x188ed8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188edc:
    // 0x188edc: 0x0  nop
    ctx->pc = 0x188edcu;
    // NOP
label_188ee0:
    // 0x188ee0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188ee4:
    if (ctx->pc == 0x188EE4u) {
        ctx->pc = 0x188EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE0u;
        // 0x188ee4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EE8u;
        goto label_188ee8;
    }
    ctx->pc = 0x188EE0u;
    {
        const bool branch_taken_0x188ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE0u;
        // 0x188ee4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ee0) {
            ctx->pc = 0x188ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188ed0;
        }
    }
    ctx->pc = 0x188EE8u;
label_188ee8:
    // 0x188ee8: 0x10000010  b           . + 4 + (0x10 << 2)
label_188eec:
    if (ctx->pc == 0x188EECu) {
        ctx->pc = 0x188EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE8u;
        // 0x188eec: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EF0u;
        goto label_188ef0;
    }
    ctx->pc = 0x188EE8u;
    {
        const bool branch_taken_0x188ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE8u;
        // 0x188eec: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ee8) {
            ctx->pc = 0x188F2Cu;
            goto label_188f2c;
        }
    }
    ctx->pc = 0x188EF0u;
label_188ef0:
    // 0x188ef0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188ef4:
    // 0x188ef4: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188ef8:
    if (ctx->pc == 0x188EF8u) {
        ctx->pc = 0x188EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF4u;
        // 0x188ef8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188EFCu;
        goto label_188efc;
    }
    ctx->pc = 0x188EF4u;
    {
        const bool branch_taken_0x188ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF4u;
        // 0x188ef8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ef4) {
            ctx->pc = 0x188F1Cu;
            goto label_188f1c;
        }
    }
    ctx->pc = 0x188EFCu;
label_188efc:
    // 0x188efc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x188efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_188f00:
    // 0x188f00: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188f04:
    // 0x188f04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188f08:
    // 0x188f08: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188f0c:
    // 0x188f0c: 0x0  nop
    ctx->pc = 0x188f0cu;
    // NOP
label_188f10:
    // 0x188f10: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188f14:
    if (ctx->pc == 0x188F14u) {
        ctx->pc = 0x188F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F10u;
        // 0x188f14: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F18u;
        goto label_188f18;
    }
    ctx->pc = 0x188F10u;
    {
        const bool branch_taken_0x188f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188f10) {
            ctx->pc = 0x188F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F10u;
            // 0x188f14: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188f00;
        }
    }
    ctx->pc = 0x188F18u;
label_188f18:
    // 0x188f18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x188f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188f1c:
    // 0x188f1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188f20:
    // 0x188f20: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188f24:
    if (ctx->pc == 0x188F24u) {
        ctx->pc = 0x188F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F20u;
        // 0x188f24: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F28u;
        goto label_188f28;
    }
    ctx->pc = 0x188F20u;
    {
        const bool branch_taken_0x188f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188f20) {
            ctx->pc = 0x188F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F20u;
            // 0x188f24: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F28u;
            goto label_188f28;
        }
    }
    ctx->pc = 0x188F28u;
label_188f28:
    // 0x188f28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_188f2c:
    // 0x188f2c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x188f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_188f30:
    // 0x188f30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_188f34:
    // 0x188f34: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_188f38:
    // 0x188f38: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_188f3c:
    if (ctx->pc == 0x188F3Cu) {
        ctx->pc = 0x188F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F38u;
        // 0x188f3c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F40u;
        goto label_188f40;
    }
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F38u;
        // 0x188f3c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f38) {
            ctx->pc = 0x188DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188df8;
        }
    }
    ctx->pc = 0x188F40u;
label_188f40:
    // 0x188f40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x188f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_188f44:
    // 0x188f44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188f48:
    // 0x188f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188f4c:
    // 0x188f4c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x188f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_188f50:
    // 0x188f50: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_188f54:
    if (ctx->pc == 0x188F54u) {
        ctx->pc = 0x188F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F50u;
        // 0x188f54: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F58u;
        goto label_188f58;
    }
    ctx->pc = 0x188F50u;
    {
        const bool branch_taken_0x188f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x188F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F50u;
        // 0x188f54: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f50) {
            ctx->pc = 0x1890A0u;
            goto label_1890a0;
        }
    }
    ctx->pc = 0x188F58u;
label_188f58:
    // 0x188f58: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x188f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_188f5c:
    // 0x188f5c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x188f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_188f60:
    // 0x188f60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188f64:
    // 0x188f64: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_188f68:
    if (ctx->pc == 0x188F68u) {
        ctx->pc = 0x188F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F64u;
        // 0x188f68: 0xafa500d0  sw          $a1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F6Cu;
        goto label_188f6c;
    }
    ctx->pc = 0x188F64u;
    {
        const bool branch_taken_0x188f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f64) {
            ctx->pc = 0x188F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F64u;
            // 0x188f68: 0xafa500d0  sw          $a1, 0xD0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189010u;
            goto label_189010;
        }
    }
    ctx->pc = 0x188F6Cu;
label_188f6c:
    // 0x188f6c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x188f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_188f70:
    // 0x188f70: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x188f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_188f74:
    // 0x188f74: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188f78:
    // 0x188f78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_188f7c:
    if (ctx->pc == 0x188F7Cu) {
        ctx->pc = 0x188F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F78u;
        // 0x188f7c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F80u;
        goto label_188f80;
    }
    ctx->pc = 0x188F78u;
    {
        const bool branch_taken_0x188f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f78) {
            ctx->pc = 0x188F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F78u;
            // 0x188f7c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FB8u;
            goto label_188fb8;
        }
    }
    ctx->pc = 0x188F80u;
label_188f80:
    // 0x188f80: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x188f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_188f84:
    // 0x188f84: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x188f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188f88:
    // 0x188f88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_188f8c:
    if (ctx->pc == 0x188F8Cu) {
        ctx->pc = 0x188F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F88u;
        // 0x188f8c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188F90u;
        goto label_188f90;
    }
    ctx->pc = 0x188F88u;
    {
        const bool branch_taken_0x188f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F88u;
        // 0x188f8c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f88) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F90u;
label_188f90:
    // 0x188f90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_188f94:
    // 0x188f94: 0x0  nop
    ctx->pc = 0x188f94u;
    // NOP
label_188f98:
    // 0x188f98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x188f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_188f9c:
    // 0x188f9c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x188f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_188fa0:
    // 0x188fa0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x188fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_188fa4:
    // 0x188fa4: 0x0  nop
    ctx->pc = 0x188fa4u;
    // NOP
label_188fa8:
    // 0x188fa8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_188fac:
    if (ctx->pc == 0x188FACu) {
        ctx->pc = 0x188FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FA8u;
        // 0x188fac: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FB0u;
        goto label_188fb0;
    }
    ctx->pc = 0x188FA8u;
    {
        const bool branch_taken_0x188fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FA8u;
        // 0x188fac: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fa8) {
            ctx->pc = 0x188F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188f98;
        }
    }
    ctx->pc = 0x188FB0u;
label_188fb0:
    // 0x188fb0: 0x10000010  b           . + 4 + (0x10 << 2)
label_188fb4:
    if (ctx->pc == 0x188FB4u) {
        ctx->pc = 0x188FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FB0u;
        // 0x188fb4: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FB8u;
        goto label_188fb8;
    }
    ctx->pc = 0x188FB0u;
    {
        const bool branch_taken_0x188fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FB0u;
        // 0x188fb4: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fb0) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FB8u;
label_188fb8:
    // 0x188fb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188fbc:
    // 0x188fbc: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_188fc0:
    if (ctx->pc == 0x188FC0u) {
        ctx->pc = 0x188FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FBCu;
        // 0x188fc0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FC4u;
        goto label_188fc4;
    }
    ctx->pc = 0x188FBCu;
    {
        const bool branch_taken_0x188fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FBCu;
        // 0x188fc0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fbc) {
            ctx->pc = 0x188FE4u;
            goto label_188fe4;
        }
    }
    ctx->pc = 0x188FC4u;
label_188fc4:
    // 0x188fc4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x188fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_188fc8:
    // 0x188fc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x188fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188fcc:
    // 0x188fcc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_188fd0:
    // 0x188fd0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188fd4:
    // 0x188fd4: 0x0  nop
    ctx->pc = 0x188fd4u;
    // NOP
label_188fd8:
    // 0x188fd8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_188fdc:
    if (ctx->pc == 0x188FDCu) {
        ctx->pc = 0x188FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD8u;
        // 0x188fdc: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FE0u;
        goto label_188fe0;
    }
    ctx->pc = 0x188FD8u;
    {
        const bool branch_taken_0x188fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188fd8) {
            ctx->pc = 0x188FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188FD8u;
            // 0x188fdc: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188fc8;
        }
    }
    ctx->pc = 0x188FE0u;
label_188fe0:
    // 0x188fe0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_188fe4:
    // 0x188fe4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_188fe8:
    // 0x188fe8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_188fec:
    if (ctx->pc == 0x188FECu) {
        ctx->pc = 0x188FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FE8u;
        // 0x188fec: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188FF0u;
        goto label_188ff0;
    }
    ctx->pc = 0x188FE8u;
    {
        const bool branch_taken_0x188fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x188fe8) {
            ctx->pc = 0x188FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188FE8u;
            // 0x188fec: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188FF0u;
            goto label_188ff0;
        }
    }
    ctx->pc = 0x188FF0u;
label_188ff0:
    // 0x188ff0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x188ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_188ff4:
    // 0x188ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188ff8:
    // 0x188ff8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x188ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_188ffc:
    // 0x188ffc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x188ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_189000:
    // 0x189000: 0xc063b00  jal         func_18EC00
label_189004:
    if (ctx->pc == 0x189004u) {
        ctx->pc = 0x189004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189000u;
        // 0x189004: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189008u;
        goto label_189008;
    }
    ctx->pc = 0x189000u;
    SET_GPR_U32(ctx, 31, 0x189008u);
    ctx->pc = 0x189004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189000u;
    // 0x189004: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC00u, 0x189000u, 0x189008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189008u;
label_189008:
    // 0x189008: 0x10000022  b           . + 4 + (0x22 << 2)
label_18900c:
    if (ctx->pc == 0x18900Cu) {
        ctx->pc = 0x18900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189008u;
        // 0x18900c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189010u;
        goto label_189010;
    }
    ctx->pc = 0x189008u;
    {
        const bool branch_taken_0x189008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189008u;
        // 0x18900c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189008) {
            ctx->pc = 0x189094u;
            goto label_189094;
        }
    }
    ctx->pc = 0x189010u;
label_189010:
    // 0x189010: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x189010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_189014:
    // 0x189014: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_189018:
    if (ctx->pc == 0x189018u) {
        ctx->pc = 0x189018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189014u;
        // 0x189018: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18901Cu;
        goto label_18901c;
    }
    ctx->pc = 0x189014u;
    {
        const bool branch_taken_0x189014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189014) {
            ctx->pc = 0x189018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189014u;
            // 0x189018: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189050u;
            goto label_189050;
        }
    }
    ctx->pc = 0x18901Cu;
label_18901c:
    // 0x18901c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x18901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_189020:
    // 0x189020: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189024:
    // 0x189024: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_189028:
    if (ctx->pc == 0x189028u) {
        ctx->pc = 0x189028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189024u;
        // 0x189028: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18902Cu;
        goto label_18902c;
    }
    ctx->pc = 0x189024u;
    {
        const bool branch_taken_0x189024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189024u;
        // 0x189028: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189024) {
            ctx->pc = 0x18908Cu;
            goto label_18908c;
        }
    }
    ctx->pc = 0x18902Cu;
label_18902c:
    // 0x18902c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_189030:
    // 0x189030: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189034:
    // 0x189034: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x189034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_189038:
    // 0x189038: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x189038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18903c:
    // 0x18903c: 0x0  nop
    ctx->pc = 0x18903cu;
    // NOP
label_189040:
    // 0x189040: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_189044:
    if (ctx->pc == 0x189044u) {
        ctx->pc = 0x189044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189040u;
        // 0x189044: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189048u;
        goto label_189048;
    }
    ctx->pc = 0x189040u;
    {
        const bool branch_taken_0x189040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189040u;
        // 0x189044: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189040) {
            ctx->pc = 0x189030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189030;
        }
    }
    ctx->pc = 0x189048u;
label_189048:
    // 0x189048: 0x10000010  b           . + 4 + (0x10 << 2)
label_18904c:
    if (ctx->pc == 0x18904Cu) {
        ctx->pc = 0x18904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189048u;
        // 0x18904c: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189050u;
        goto label_189050;
    }
    ctx->pc = 0x189048u;
    {
        const bool branch_taken_0x189048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189048u;
        // 0x18904c: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189048) {
            ctx->pc = 0x18908Cu;
            goto label_18908c;
        }
    }
    ctx->pc = 0x189050u;
label_189050:
    // 0x189050: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189054:
    // 0x189054: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_189058:
    if (ctx->pc == 0x189058u) {
        ctx->pc = 0x189058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189054u;
        // 0x189058: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18905Cu;
        goto label_18905c;
    }
    ctx->pc = 0x189054u;
    {
        const bool branch_taken_0x189054 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189054u;
        // 0x189058: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189054) {
            ctx->pc = 0x18907Cu;
            goto label_18907c;
        }
    }
    ctx->pc = 0x18905Cu;
label_18905c:
    // 0x18905c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x18905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_189060:
    // 0x189060: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x189060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189064:
    // 0x189064: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x189064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_189068:
    // 0x189068: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18906c:
    // 0x18906c: 0x0  nop
    ctx->pc = 0x18906cu;
    // NOP
label_189070:
    // 0x189070: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_189074:
    if (ctx->pc == 0x189074u) {
        ctx->pc = 0x189074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189070u;
        // 0x189074: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189078u;
        goto label_189078;
    }
    ctx->pc = 0x189070u;
    {
        const bool branch_taken_0x189070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189070) {
            ctx->pc = 0x189074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189070u;
            // 0x189074: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189060;
        }
    }
    ctx->pc = 0x189078u;
label_189078:
    // 0x189078: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x189078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_18907c:
    // 0x18907c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_189080:
    // 0x189080: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_189084:
    if (ctx->pc == 0x189084u) {
        ctx->pc = 0x189084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189080u;
        // 0x189084: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189088u;
        goto label_189088;
    }
    ctx->pc = 0x189080u;
    {
        const bool branch_taken_0x189080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189080) {
            ctx->pc = 0x189084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189080u;
            // 0x189084: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189088u;
            goto label_189088;
        }
    }
    ctx->pc = 0x189088u;
label_189088:
    // 0x189088: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x189088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_18908c:
    // 0x18908c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x18908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_189090:
    // 0x189090: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_189094:
    // 0x189094: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_189098:
    // 0x189098: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_18909c:
    if (ctx->pc == 0x18909Cu) {
        ctx->pc = 0x18909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189098u;
        // 0x18909c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890A0u;
        goto label_1890a0;
    }
    ctx->pc = 0x189098u;
    {
        const bool branch_taken_0x189098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189098u;
        // 0x18909c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189098) {
            ctx->pc = 0x188F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188f58;
        }
    }
    ctx->pc = 0x1890A0u;
label_1890a0:
    // 0x1890a0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1890a4:
    // 0x1890a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1890a8:
    // 0x1890a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1890a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1890ac:
    // 0x1890ac: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1890acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_1890b0:
    // 0x1890b0: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_1890b4:
    if (ctx->pc == 0x1890B4u) {
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890B8u;
        goto label_1890b8;
    }
    ctx->pc = 0x1890B0u;
    {
        const bool branch_taken_0x1890b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b0) {
            ctx->pc = 0x189200u;
            goto label_189200;
        }
    }
    ctx->pc = 0x1890B8u;
label_1890b8:
    // 0x1890b8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1890bc:
    // 0x1890bc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1890c0:
    // 0x1890c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1890c4:
    // 0x1890c4: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_1890c8:
    if (ctx->pc == 0x1890C8u) {
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890CCu;
        goto label_1890cc;
    }
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890C4u;
            // 0x1890c8: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189170u;
            goto label_189170;
        }
    }
    ctx->pc = 0x1890CCu;
label_1890cc:
    // 0x1890cc: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1890ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_1890d0:
    // 0x1890d0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1890d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_1890d4:
    // 0x1890d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1890d8:
    // 0x1890d8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1890dc:
    if (ctx->pc == 0x1890DCu) {
        ctx->pc = 0x1890DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890D8u;
        // 0x1890dc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890E0u;
        goto label_1890e0;
    }
    ctx->pc = 0x1890D8u;
    {
        const bool branch_taken_0x1890d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890d8) {
            ctx->pc = 0x1890DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890D8u;
            // 0x1890dc: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189118u;
            goto label_189118;
        }
    }
    ctx->pc = 0x1890E0u;
label_1890e0:
    // 0x1890e0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1890e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1890e4:
    // 0x1890e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1890e8:
    // 0x1890e8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1890ec:
    if (ctx->pc == 0x1890ECu) {
        ctx->pc = 0x1890ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890E8u;
        // 0x1890ec: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890F0u;
        goto label_1890f0;
    }
    ctx->pc = 0x1890E8u;
    {
        const bool branch_taken_0x1890e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890E8u;
        // 0x1890ec: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890e8) {
            ctx->pc = 0x189154u;
            goto label_189154;
        }
    }
    ctx->pc = 0x1890F0u;
label_1890f0:
    // 0x1890f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1890f4:
    // 0x1890f4: 0x0  nop
    ctx->pc = 0x1890f4u;
    // NOP
label_1890f8:
    // 0x1890f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1890fc:
    // 0x1890fc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1890fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_189100:
    // 0x189100: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x189100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_189104:
    // 0x189104: 0x0  nop
    ctx->pc = 0x189104u;
    // NOP
label_189108:
    // 0x189108: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_18910c:
    if (ctx->pc == 0x18910Cu) {
        ctx->pc = 0x18910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189108u;
        // 0x18910c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189110u;
        goto label_189110;
    }
    ctx->pc = 0x189108u;
    {
        const bool branch_taken_0x189108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189108u;
        // 0x18910c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189108) {
            ctx->pc = 0x1890F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1890f8;
        }
    }
    ctx->pc = 0x189110u;
label_189110:
    // 0x189110: 0x10000010  b           . + 4 + (0x10 << 2)
label_189114:
    if (ctx->pc == 0x189114u) {
        ctx->pc = 0x189114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189110u;
        // 0x189114: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189118u;
        goto label_189118;
    }
    ctx->pc = 0x189110u;
    {
        const bool branch_taken_0x189110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189110u;
        // 0x189114: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189110) {
            ctx->pc = 0x189154u;
            goto label_189154;
        }
    }
    ctx->pc = 0x189118u;
label_189118:
    // 0x189118: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18911c:
    // 0x18911c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_189120:
    if (ctx->pc == 0x189120u) {
        ctx->pc = 0x189120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18911Cu;
        // 0x189120: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189124u;
        goto label_189124;
    }
    ctx->pc = 0x18911Cu;
    {
        const bool branch_taken_0x18911c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18911Cu;
        // 0x189120: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18911c) {
            ctx->pc = 0x189144u;
            goto label_189144;
        }
    }
    ctx->pc = 0x189124u;
label_189124:
    // 0x189124: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x189124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_189128:
    // 0x189128: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18912c:
    // 0x18912c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x18912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_189130:
    // 0x189130: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189134:
    // 0x189134: 0x0  nop
    ctx->pc = 0x189134u;
    // NOP
label_189138:
    // 0x189138: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_18913c:
    if (ctx->pc == 0x18913Cu) {
        ctx->pc = 0x18913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189138u;
        // 0x18913c: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189140u;
        goto label_189140;
    }
    ctx->pc = 0x189138u;
    {
        const bool branch_taken_0x189138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189138) {
            ctx->pc = 0x18913Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189138u;
            // 0x18913c: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189128;
        }
    }
    ctx->pc = 0x189140u;
label_189140:
    // 0x189140: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_189144:
    // 0x189144: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x189144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_189148:
    // 0x189148: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_18914c:
    if (ctx->pc == 0x18914Cu) {
        ctx->pc = 0x18914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189148u;
        // 0x18914c: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189150u;
        goto label_189150;
    }
    ctx->pc = 0x189148u;
    {
        const bool branch_taken_0x189148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189148) {
            ctx->pc = 0x18914Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189148u;
            // 0x18914c: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189150u;
            goto label_189150;
        }
    }
    ctx->pc = 0x189150u;
label_189150:
    // 0x189150: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x189150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_189154:
    // 0x189154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189158:
    // 0x189158: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x189158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_18915c:
    // 0x18915c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x18915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_189160:
    // 0x189160: 0xc060874  jal         func_1821D0
label_189164:
    if (ctx->pc == 0x189164u) {
        ctx->pc = 0x189164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189160u;
        // 0x189164: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189168u;
        goto label_189168;
    }
    ctx->pc = 0x189160u;
    SET_GPR_U32(ctx, 31, 0x189168u);
    ctx->pc = 0x189164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189160u;
    // 0x189164: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1821D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1821D0u, 0x189160u, 0x189168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189168u;
label_189168:
    // 0x189168: 0x10000022  b           . + 4 + (0x22 << 2)
label_18916c:
    if (ctx->pc == 0x18916Cu) {
        ctx->pc = 0x18916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189168u;
        // 0x18916c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189170u;
        goto label_189170;
    }
    ctx->pc = 0x189168u;
    {
        const bool branch_taken_0x189168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189168u;
        // 0x18916c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189168) {
            ctx->pc = 0x1891F4u;
            goto label_1891f4;
        }
    }
    ctx->pc = 0x189170u;
label_189170:
    // 0x189170: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_189174:
    // 0x189174: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_189178:
    if (ctx->pc == 0x189178u) {
        ctx->pc = 0x189178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189174u;
        // 0x189178: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18917Cu;
        goto label_18917c;
    }
    ctx->pc = 0x189174u;
    {
        const bool branch_taken_0x189174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189174) {
            ctx->pc = 0x189178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189174u;
            // 0x189178: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1891B0u;
            goto label_1891b0;
        }
    }
    ctx->pc = 0x18917Cu;
label_18917c:
    // 0x18917c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x18917cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_189180:
    // 0x189180: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189184:
    // 0x189184: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_189188:
    if (ctx->pc == 0x189188u) {
        ctx->pc = 0x189188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189184u;
        // 0x189188: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18918Cu;
        goto label_18918c;
    }
    ctx->pc = 0x189184u;
    {
        const bool branch_taken_0x189184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189184u;
        // 0x189188: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189184) {
            ctx->pc = 0x1891ECu;
            goto label_1891ec;
        }
    }
    ctx->pc = 0x18918Cu;
label_18918c:
    // 0x18918c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_189190:
    // 0x189190: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189194:
    // 0x189194: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x189194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_189198:
    // 0x189198: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18919c:
    // 0x18919c: 0x0  nop
    ctx->pc = 0x18919cu;
    // NOP
label_1891a0:
    // 0x1891a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1891a4:
    if (ctx->pc == 0x1891A4u) {
        ctx->pc = 0x1891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A0u;
        // 0x1891a4: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891A8u;
        goto label_1891a8;
    }
    ctx->pc = 0x1891A0u;
    {
        const bool branch_taken_0x1891a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A0u;
        // 0x1891a4: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891a0) {
            ctx->pc = 0x189190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189190;
        }
    }
    ctx->pc = 0x1891A8u;
label_1891a8:
    // 0x1891a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1891ac:
    if (ctx->pc == 0x1891ACu) {
        ctx->pc = 0x1891ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A8u;
        // 0x1891ac: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891B0u;
        goto label_1891b0;
    }
    ctx->pc = 0x1891A8u;
    {
        const bool branch_taken_0x1891a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A8u;
        // 0x1891ac: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891a8) {
            ctx->pc = 0x1891ECu;
            goto label_1891ec;
        }
    }
    ctx->pc = 0x1891B0u;
label_1891b0:
    // 0x1891b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1891b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1891b4:
    // 0x1891b4: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_1891b8:
    if (ctx->pc == 0x1891B8u) {
        ctx->pc = 0x1891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891B4u;
        // 0x1891b8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891BCu;
        goto label_1891bc;
    }
    ctx->pc = 0x1891B4u;
    {
        const bool branch_taken_0x1891b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891B4u;
        // 0x1891b8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891b4) {
            ctx->pc = 0x1891DCu;
            goto label_1891dc;
        }
    }
    ctx->pc = 0x1891BCu;
label_1891bc:
    // 0x1891bc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1891bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_1891c0:
    // 0x1891c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1891c4:
    // 0x1891c4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1891c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1891c8:
    // 0x1891c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1891cc:
    // 0x1891cc: 0x0  nop
    ctx->pc = 0x1891ccu;
    // NOP
label_1891d0:
    // 0x1891d0: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1891d4:
    if (ctx->pc == 0x1891D4u) {
        ctx->pc = 0x1891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891D0u;
        // 0x1891d4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891D8u;
        goto label_1891d8;
    }
    ctx->pc = 0x1891D0u;
    {
        const bool branch_taken_0x1891d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1891d0) {
            ctx->pc = 0x1891D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1891D0u;
            // 0x1891d4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1891C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1891c0;
        }
    }
    ctx->pc = 0x1891D8u;
label_1891d8:
    // 0x1891d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1891d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1891dc:
    // 0x1891dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1891e0:
    // 0x1891e0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1891e4:
    if (ctx->pc == 0x1891E4u) {
        ctx->pc = 0x1891E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891E0u;
        // 0x1891e4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891E8u;
        goto label_1891e8;
    }
    ctx->pc = 0x1891E0u;
    {
        const bool branch_taken_0x1891e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1891e0) {
            ctx->pc = 0x1891E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1891E0u;
            // 0x1891e4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1891E8u;
            goto label_1891e8;
        }
    }
    ctx->pc = 0x1891E8u;
label_1891e8:
    // 0x1891e8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1891e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1891ec:
    // 0x1891ec: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1891ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1891f0:
    // 0x1891f0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1891f4:
    // 0x1891f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1891f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1891f8:
    // 0x1891f8: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_1891fc:
    if (ctx->pc == 0x1891FCu) {
        ctx->pc = 0x1891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891F8u;
        // 0x1891fc: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189200u;
        goto label_189200;
    }
    ctx->pc = 0x1891F8u;
    {
        const bool branch_taken_0x1891f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891F8u;
        // 0x1891fc: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891f8) {
            ctx->pc = 0x1890B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1890b8;
        }
    }
    ctx->pc = 0x189200u;
label_189200:
    // 0x189200: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x189200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_189204:
    // 0x189204: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189208:
    // 0x189208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18920c:
    // 0x18920c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x18920cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_189210:
    // 0x189210: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_189214:
    if (ctx->pc == 0x189214u) {
        ctx->pc = 0x189214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189210u;
        // 0x189214: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189218u;
        goto label_189218;
    }
    ctx->pc = 0x189210u;
    {
        const bool branch_taken_0x189210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x189214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189210u;
        // 0x189214: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189210) {
            ctx->pc = 0x189360u;
            goto label_189360;
        }
    }
    ctx->pc = 0x189218u;
label_189218:
    // 0x189218: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_18921c:
    // 0x18921c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x18921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_189220:
    // 0x189220: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x189220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_189224:
    // 0x189224: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_189228:
    if (ctx->pc == 0x189228u) {
        ctx->pc = 0x189228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189224u;
        // 0x189228: 0xafa50130  sw          $a1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18922Cu;
        goto label_18922c;
    }
    ctx->pc = 0x189224u;
    {
        const bool branch_taken_0x189224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189224) {
            ctx->pc = 0x189228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189224u;
            // 0x189228: 0xafa50130  sw          $a1, 0x130($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1892D0u;
            goto label_1892d0;
        }
    }
    ctx->pc = 0x18922Cu;
label_18922c:
    // 0x18922c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x18922cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_189230:
    // 0x189230: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x189230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_189234:
    // 0x189234: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_189238:
    // 0x189238: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_18923c:
    if (ctx->pc == 0x18923Cu) {
        ctx->pc = 0x18923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189238u;
        // 0x18923c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189240u;
        goto label_189240;
    }
    ctx->pc = 0x189238u;
    {
        const bool branch_taken_0x189238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189238) {
            ctx->pc = 0x18923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189238u;
            // 0x18923c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189278u;
            goto label_189278;
        }
    }
    ctx->pc = 0x189240u;
label_189240:
    // 0x189240: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x189240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_189244:
    // 0x189244: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189248:
    // 0x189248: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18924c:
    if (ctx->pc == 0x18924Cu) {
        ctx->pc = 0x18924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189248u;
        // 0x18924c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189250u;
        goto label_189250;
    }
    ctx->pc = 0x189248u;
    {
        const bool branch_taken_0x189248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189248u;
        // 0x18924c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189248) {
            ctx->pc = 0x1892B4u;
            goto label_1892b4;
        }
    }
    ctx->pc = 0x189250u;
label_189250:
    // 0x189250: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189254:
    // 0x189254: 0x0  nop
    ctx->pc = 0x189254u;
    // NOP
label_189258:
    // 0x189258: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18925c:
    // 0x18925c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x18925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_189260:
    // 0x189260: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x189260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_189264:
    // 0x189264: 0x0  nop
    ctx->pc = 0x189264u;
    // NOP
label_189268:
    // 0x189268: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_18926c:
    if (ctx->pc == 0x18926Cu) {
        ctx->pc = 0x18926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189268u;
        // 0x18926c: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189270u;
        goto label_189270;
    }
    ctx->pc = 0x189268u;
    {
        const bool branch_taken_0x189268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189268u;
        // 0x18926c: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189268) {
            ctx->pc = 0x189258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189258;
        }
    }
    ctx->pc = 0x189270u;
label_189270:
    // 0x189270: 0x10000010  b           . + 4 + (0x10 << 2)
label_189274:
    if (ctx->pc == 0x189274u) {
        ctx->pc = 0x189274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189270u;
        // 0x189274: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189278u;
        goto label_189278;
    }
    ctx->pc = 0x189270u;
    {
        const bool branch_taken_0x189270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189270u;
        // 0x189274: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189270) {
            ctx->pc = 0x1892B4u;
            goto label_1892b4;
        }
    }
    ctx->pc = 0x189278u;
label_189278:
    // 0x189278: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18927c:
    // 0x18927c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_189280:
    if (ctx->pc == 0x189280u) {
        ctx->pc = 0x189280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18927Cu;
        // 0x189280: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189284u;
        goto label_189284;
    }
    ctx->pc = 0x18927Cu;
    {
        const bool branch_taken_0x18927c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18927Cu;
        // 0x189280: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18927c) {
            ctx->pc = 0x1892A4u;
            goto label_1892a4;
        }
    }
    ctx->pc = 0x189284u;
label_189284:
    // 0x189284: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x189284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_189288:
    // 0x189288: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x189288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18928c:
    // 0x18928c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189290:
    // 0x189290: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189294:
    // 0x189294: 0x0  nop
    ctx->pc = 0x189294u;
    // NOP
label_189298:
    // 0x189298: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_18929c:
    if (ctx->pc == 0x18929Cu) {
        ctx->pc = 0x18929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189298u;
        // 0x18929c: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892A0u;
        goto label_1892a0;
    }
    ctx->pc = 0x189298u;
    {
        const bool branch_taken_0x189298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189298) {
            ctx->pc = 0x18929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189298u;
            // 0x18929c: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189288;
        }
    }
    ctx->pc = 0x1892A0u;
label_1892a0:
    // 0x1892a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1892a4:
    // 0x1892a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1892a8:
    // 0x1892a8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1892ac:
    if (ctx->pc == 0x1892ACu) {
        ctx->pc = 0x1892ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892A8u;
        // 0x1892ac: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892B0u;
        goto label_1892b0;
    }
    ctx->pc = 0x1892A8u;
    {
        const bool branch_taken_0x1892a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1892a8) {
            ctx->pc = 0x1892ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1892A8u;
            // 0x1892ac: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1892B0u;
            goto label_1892b0;
        }
    }
    ctx->pc = 0x1892B0u;
label_1892b0:
    // 0x1892b0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1892b4:
    // 0x1892b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1892b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1892b8:
    // 0x1892b8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1892bc:
    // 0x1892bc: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1892bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_1892c0:
    // 0x1892c0: 0xc05bac4  jal         func_16EB10
label_1892c4:
    if (ctx->pc == 0x1892C4u) {
        ctx->pc = 0x1892C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892C0u;
        // 0x1892c4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892C8u;
        goto label_1892c8;
    }
    ctx->pc = 0x1892C0u;
    SET_GPR_U32(ctx, 31, 0x1892C8u);
    ctx->pc = 0x1892C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892C0u;
    // 0x1892c4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EB10u, 0x1892C0u, 0x1892C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892C8u;
label_1892c8:
    // 0x1892c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1892cc:
    if (ctx->pc == 0x1892CCu) {
        ctx->pc = 0x1892CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892C8u;
        // 0x1892cc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892D0u;
        goto label_1892d0;
    }
    ctx->pc = 0x1892C8u;
    {
        const bool branch_taken_0x1892c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892C8u;
        // 0x1892cc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892c8) {
            ctx->pc = 0x189354u;
            goto label_189354;
        }
    }
    ctx->pc = 0x1892D0u;
label_1892d0:
    // 0x1892d0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1892d4:
    // 0x1892d4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1892d8:
    if (ctx->pc == 0x1892D8u) {
        ctx->pc = 0x1892D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892D4u;
        // 0x1892d8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892DCu;
        goto label_1892dc;
    }
    ctx->pc = 0x1892D4u;
    {
        const bool branch_taken_0x1892d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892d4) {
            ctx->pc = 0x1892D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1892D4u;
            // 0x1892d8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189310u;
            goto label_189310;
        }
    }
    ctx->pc = 0x1892DCu;
label_1892dc:
    // 0x1892dc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1892dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1892e0:
    // 0x1892e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1892e4:
    // 0x1892e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1892e8:
    if (ctx->pc == 0x1892E8u) {
        ctx->pc = 0x1892E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892E4u;
        // 0x1892e8: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892ECu;
        goto label_1892ec;
    }
    ctx->pc = 0x1892E4u;
    {
        const bool branch_taken_0x1892e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892E4u;
        // 0x1892e8: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892e4) {
            ctx->pc = 0x18934Cu;
            goto label_18934c;
        }
    }
    ctx->pc = 0x1892ECu;
label_1892ec:
    // 0x1892ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1892f0:
    // 0x1892f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1892f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1892f4:
    // 0x1892f4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1892f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1892f8:
    // 0x1892f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1892fc:
    // 0x1892fc: 0x0  nop
    ctx->pc = 0x1892fcu;
    // NOP
label_189300:
    // 0x189300: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_189304:
    if (ctx->pc == 0x189304u) {
        ctx->pc = 0x189304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189300u;
        // 0x189304: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189308u;
        goto label_189308;
    }
    ctx->pc = 0x189300u;
    {
        const bool branch_taken_0x189300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189300u;
        // 0x189304: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189300) {
            ctx->pc = 0x1892F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1892f0;
        }
    }
    ctx->pc = 0x189308u;
label_189308:
    // 0x189308: 0x10000010  b           . + 4 + (0x10 << 2)
label_18930c:
    if (ctx->pc == 0x18930Cu) {
        ctx->pc = 0x18930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189308u;
        // 0x18930c: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189310u;
        goto label_189310;
    }
    ctx->pc = 0x189308u;
    {
        const bool branch_taken_0x189308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189308u;
        // 0x18930c: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189308) {
            ctx->pc = 0x18934Cu;
            goto label_18934c;
        }
    }
    ctx->pc = 0x189310u;
label_189310:
    // 0x189310: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189314:
    // 0x189314: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_189318:
    if (ctx->pc == 0x189318u) {
        ctx->pc = 0x189318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189314u;
        // 0x189318: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18931Cu;
        goto label_18931c;
    }
    ctx->pc = 0x189314u;
    {
        const bool branch_taken_0x189314 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189314u;
        // 0x189318: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189314) {
            ctx->pc = 0x18933Cu;
            goto label_18933c;
        }
    }
    ctx->pc = 0x18931Cu;
label_18931c:
    // 0x18931c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x18931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_189320:
    // 0x189320: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x189320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189324:
    // 0x189324: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189328:
    // 0x189328: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18932c:
    // 0x18932c: 0x0  nop
    ctx->pc = 0x18932cu;
    // NOP
label_189330:
    // 0x189330: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_189334:
    if (ctx->pc == 0x189334u) {
        ctx->pc = 0x189334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189330u;
        // 0x189334: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189338u;
        goto label_189338;
    }
    ctx->pc = 0x189330u;
    {
        const bool branch_taken_0x189330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189330) {
            ctx->pc = 0x189334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189330u;
            // 0x189334: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189320;
        }
    }
    ctx->pc = 0x189338u;
label_189338:
    // 0x189338: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x189338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_18933c:
    // 0x18933c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_189340:
    // 0x189340: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_189344:
    if (ctx->pc == 0x189344u) {
        ctx->pc = 0x189344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189340u;
        // 0x189344: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189348u;
        goto label_189348;
    }
    ctx->pc = 0x189340u;
    {
        const bool branch_taken_0x189340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189340) {
            ctx->pc = 0x189344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189340u;
            // 0x189344: 0xafa400e0  sw          $a0, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189348u;
            goto label_189348;
        }
    }
    ctx->pc = 0x189348u;
label_189348:
    // 0x189348: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_18934c:
    // 0x18934c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x18934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_189350:
    // 0x189350: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_189354:
    // 0x189354: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189358:
    // 0x189358: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_18935c:
    if (ctx->pc == 0x18935Cu) {
        ctx->pc = 0x18935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189358u;
        // 0x18935c: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189360u;
        goto label_189360;
    }
    ctx->pc = 0x189358u;
    {
        const bool branch_taken_0x189358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189358u;
        // 0x18935c: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189358) {
            ctx->pc = 0x189218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189218;
        }
    }
    ctx->pc = 0x189360u;
label_189360:
    // 0x189360: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_189364:
    // 0x189364: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189368:
    // 0x189368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x189368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18936c:
    // 0x18936c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x18936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_189370:
    // 0x189370: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
label_189374:
    if (ctx->pc == 0x189374u) {
        ctx->pc = 0x189374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189370u;
        // 0x189374: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189378u;
        goto label_189378;
    }
    ctx->pc = 0x189370u;
    {
        const bool branch_taken_0x189370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x189374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189370u;
        // 0x189374: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189370) {
            ctx->pc = 0x1894C0u;
            goto label_1894c0;
        }
    }
    ctx->pc = 0x189378u;
label_189378:
    // 0x189378: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x189378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_18937c:
    // 0x18937c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x18937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_189380:
    // 0x189380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_189384:
    // 0x189384: 0x5460002a  bnel        $v1, $zero, . + 4 + (0x2A << 2)
label_189388:
    if (ctx->pc == 0x189388u) {
        ctx->pc = 0x189388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189384u;
        // 0x189388: 0xafa50160  sw          $a1, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18938Cu;
        goto label_18938c;
    }
    ctx->pc = 0x189384u;
    {
        const bool branch_taken_0x189384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189384) {
            ctx->pc = 0x189388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189384u;
            // 0x189388: 0xafa50160  sw          $a1, 0x160($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189430u;
            goto label_189430;
        }
    }
    ctx->pc = 0x18938Cu;
label_18938c:
    // 0x18938c: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x18938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_189390:
    // 0x189390: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x189390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_189394:
    // 0x189394: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_189398:
    // 0x189398: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_18939c:
    if (ctx->pc == 0x18939Cu) {
        ctx->pc = 0x18939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189398u;
        // 0x18939c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893A0u;
        goto label_1893a0;
    }
    ctx->pc = 0x189398u;
    {
        const bool branch_taken_0x189398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189398) {
            ctx->pc = 0x18939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189398u;
            // 0x18939c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893D8u;
            goto label_1893d8;
        }
    }
    ctx->pc = 0x1893A0u;
label_1893a0:
    // 0x1893a0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1893a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1893a4:
    // 0x1893a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1893a8:
    // 0x1893a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1893ac:
    if (ctx->pc == 0x1893ACu) {
        ctx->pc = 0x1893ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893A8u;
        // 0x1893ac: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893B0u;
        goto label_1893b0;
    }
    ctx->pc = 0x1893A8u;
    {
        const bool branch_taken_0x1893a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893A8u;
        // 0x1893ac: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893a8) {
            ctx->pc = 0x189414u;
            goto label_189414;
        }
    }
    ctx->pc = 0x1893B0u;
label_1893b0:
    // 0x1893b0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1893b4:
    // 0x1893b4: 0x0  nop
    ctx->pc = 0x1893b4u;
    // NOP
label_1893b8:
    // 0x1893b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1893bc:
    // 0x1893bc: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1893bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_1893c0:
    // 0x1893c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1893c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1893c4:
    // 0x1893c4: 0x0  nop
    ctx->pc = 0x1893c4u;
    // NOP
label_1893c8:
    // 0x1893c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1893cc:
    if (ctx->pc == 0x1893CCu) {
        ctx->pc = 0x1893CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C8u;
        // 0x1893cc: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893D0u;
        goto label_1893d0;
    }
    ctx->pc = 0x1893C8u;
    {
        const bool branch_taken_0x1893c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1893CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C8u;
        // 0x1893cc: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893c8) {
            ctx->pc = 0x1893B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893b8;
        }
    }
    ctx->pc = 0x1893D0u;
label_1893d0:
    // 0x1893d0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1893d4:
    if (ctx->pc == 0x1893D4u) {
        ctx->pc = 0x1893D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893D0u;
        // 0x1893d4: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893D8u;
        goto label_1893d8;
    }
    ctx->pc = 0x1893D0u;
    {
        const bool branch_taken_0x1893d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893D0u;
        // 0x1893d4: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893d0) {
            ctx->pc = 0x189414u;
            goto label_189414;
        }
    }
    ctx->pc = 0x1893D8u;
label_1893d8:
    // 0x1893d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1893d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1893dc:
    // 0x1893dc: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_1893e0:
    if (ctx->pc == 0x1893E0u) {
        ctx->pc = 0x1893E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893DCu;
        // 0x1893e0: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1893E4u;
        goto label_1893e4;
    }
    ctx->pc = 0x1893DCu;
    {
        const bool branch_taken_0x1893dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1893E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893DCu;
        // 0x1893e0: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893dc) {
            ctx->pc = 0x189404u;
            goto label_189404;
        }
    }
    ctx->pc = 0x1893E4u;
label_1893e4:
    // 0x1893e4: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1893e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_1893e8:
    // 0x1893e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1893e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1893ec:
    // 0x1893ec: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1893f0:
    // 0x1893f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1893f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1893f4:
    // 0x1893f4: 0x0  nop
    ctx->pc = 0x1893f4u;
    // NOP
label_1893f8:
    // 0x1893f8: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1893fc:
    if (ctx->pc == 0x1893FCu) {
        ctx->pc = 0x1893FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893F8u;
        // 0x1893fc: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189400u;
        goto label_189400;
    }
    ctx->pc = 0x1893F8u;
    {
        const bool branch_taken_0x1893f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1893f8) {
            ctx->pc = 0x1893FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1893F8u;
            // 0x1893fc: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1893E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893e8;
        }
    }
    ctx->pc = 0x189400u;
label_189400:
    // 0x189400: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_189404:
    // 0x189404: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x189404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_189408:
    // 0x189408: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_18940c:
    if (ctx->pc == 0x18940Cu) {
        ctx->pc = 0x18940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189408u;
        // 0x18940c: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189410u;
        goto label_189410;
    }
    ctx->pc = 0x189408u;
    {
        const bool branch_taken_0x189408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189408) {
            ctx->pc = 0x18940Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189408u;
            // 0x18940c: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189410u;
            goto label_189410;
        }
    }
    ctx->pc = 0x189410u;
label_189410:
    // 0x189410: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x189410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_189414:
    // 0x189414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189418:
    // 0x189418: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x189418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_18941c:
    // 0x18941c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x18941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_189420:
    // 0x189420: 0xc05bcda  jal         func_16F368
label_189424:
    if (ctx->pc == 0x189424u) {
        ctx->pc = 0x189424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189420u;
        // 0x189424: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189428u;
        goto label_189428;
    }
    ctx->pc = 0x189420u;
    SET_GPR_U32(ctx, 31, 0x189428u);
    ctx->pc = 0x189424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189420u;
    // 0x189424: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F368u, 0x189420u, 0x189428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189428u;
label_189428:
    // 0x189428: 0x10000022  b           . + 4 + (0x22 << 2)
label_18942c:
    if (ctx->pc == 0x18942Cu) {
        ctx->pc = 0x18942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189428u;
        // 0x18942c: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189430u;
        goto label_189430;
    }
    ctx->pc = 0x189428u;
    {
        const bool branch_taken_0x189428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189428u;
        // 0x18942c: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189428) {
            ctx->pc = 0x1894B4u;
            goto label_1894b4;
        }
    }
    ctx->pc = 0x189430u;
label_189430:
    // 0x189430: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_189434:
    // 0x189434: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_189438:
    if (ctx->pc == 0x189438u) {
        ctx->pc = 0x189438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189434u;
        // 0x189438: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18943Cu;
        goto label_18943c;
    }
    ctx->pc = 0x189434u;
    {
        const bool branch_taken_0x189434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189434) {
            ctx->pc = 0x189438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189434u;
            // 0x189438: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189470u;
            goto label_189470;
        }
    }
    ctx->pc = 0x18943Cu;
label_18943c:
    // 0x18943c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x18943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_189440:
    // 0x189440: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189444:
    // 0x189444: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_189448:
    if (ctx->pc == 0x189448u) {
        ctx->pc = 0x189448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189444u;
        // 0x189448: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18944Cu;
        goto label_18944c;
    }
    ctx->pc = 0x189444u;
    {
        const bool branch_taken_0x189444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189444u;
        // 0x189448: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189444) {
            ctx->pc = 0x1894ACu;
            goto label_1894ac;
        }
    }
    ctx->pc = 0x18944Cu;
label_18944c:
    // 0x18944c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_189450:
    // 0x189450: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_189454:
    // 0x189454: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x189454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_189458:
    // 0x189458: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18945c:
    // 0x18945c: 0x0  nop
    ctx->pc = 0x18945cu;
    // NOP
label_189460:
    // 0x189460: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_189464:
    if (ctx->pc == 0x189464u) {
        ctx->pc = 0x189464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189460u;
        // 0x189464: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189468u;
        goto label_189468;
    }
    ctx->pc = 0x189460u;
    {
        const bool branch_taken_0x189460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189460u;
        // 0x189464: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189460) {
            ctx->pc = 0x189450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189450;
        }
    }
    ctx->pc = 0x189468u;
label_189468:
    // 0x189468: 0x10000010  b           . + 4 + (0x10 << 2)
label_18946c:
    if (ctx->pc == 0x18946Cu) {
        ctx->pc = 0x18946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189468u;
        // 0x18946c: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189470u;
        goto label_189470;
    }
    ctx->pc = 0x189468u;
    {
        const bool branch_taken_0x189468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189468u;
        // 0x18946c: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189468) {
            ctx->pc = 0x1894ACu;
            goto label_1894ac;
        }
    }
    ctx->pc = 0x189470u;
label_189470:
    // 0x189470: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189474:
    // 0x189474: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_189478:
    if (ctx->pc == 0x189478u) {
        ctx->pc = 0x189478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189474u;
        // 0x189478: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18947Cu;
        goto label_18947c;
    }
    ctx->pc = 0x189474u;
    {
        const bool branch_taken_0x189474 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189474u;
        // 0x189478: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189474) {
            ctx->pc = 0x18949Cu;
            goto label_18949c;
        }
    }
    ctx->pc = 0x18947Cu;
label_18947c:
    // 0x18947c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x18947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_189480:
    // 0x189480: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189484:
    // 0x189484: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_189488:
    // 0x189488: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18948c:
    // 0x18948c: 0x0  nop
    ctx->pc = 0x18948cu;
    // NOP
label_189490:
    // 0x189490: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_189494:
    if (ctx->pc == 0x189494u) {
        ctx->pc = 0x189494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189490u;
        // 0x189494: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189498u;
        goto label_189498;
    }
    ctx->pc = 0x189490u;
    {
        const bool branch_taken_0x189490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189490) {
            ctx->pc = 0x189494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189490u;
            // 0x189494: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189480;
        }
    }
    ctx->pc = 0x189498u;
label_189498:
    // 0x189498: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_18949c:
    // 0x18949c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1894a0:
    // 0x1894a0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1894a4:
    if (ctx->pc == 0x1894A4u) {
        ctx->pc = 0x1894A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894A0u;
        // 0x1894a4: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894A8u;
        goto label_1894a8;
    }
    ctx->pc = 0x1894A0u;
    {
        const bool branch_taken_0x1894a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1894a0) {
            ctx->pc = 0x1894A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1894A0u;
            // 0x1894a4: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894A8u;
            goto label_1894a8;
        }
    }
    ctx->pc = 0x1894A8u;
label_1894a8:
    // 0x1894a8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1894ac:
    // 0x1894ac: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1894acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1894b0:
    // 0x1894b0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1894b4:
    // 0x1894b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1894b8:
    // 0x1894b8: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_1894bc:
    if (ctx->pc == 0x1894BCu) {
        ctx->pc = 0x1894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B8u;
        // 0x1894bc: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894C0u;
        goto label_1894c0;
    }
    ctx->pc = 0x1894B8u;
    {
        const bool branch_taken_0x1894b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B8u;
        // 0x1894bc: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b8) {
            ctx->pc = 0x189378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189378;
        }
    }
    ctx->pc = 0x1894C0u;
label_1894c0:
    // 0x1894c0: 0xc06221e  jal         func_188878
label_1894c4:
    if (ctx->pc == 0x1894C4u) {
        ctx->pc = 0x1894C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894C0u;
        // 0x1894c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894C8u;
        goto label_1894c8;
    }
    ctx->pc = 0x1894C0u;
    SET_GPR_U32(ctx, 31, 0x1894C8u);
    ctx->pc = 0x1894C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894C0u;
    // 0x1894c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188878u, 0x1894C0u, 0x1894C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894C8u;
label_1894c8:
    // 0x1894c8: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x1894c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1894cc:
    // 0x1894cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1894ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1894d0:
    // 0x1894d0: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x1894d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1894d4:
    // 0x1894d4: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x1894d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1894d8:
    // 0x1894d8: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x1894d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1894dc:
    // 0x1894dc: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x1894dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1894e0:
    // 0x1894e0: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x1894e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1894e4:
    // 0x1894e4: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x1894e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1894e8:
    // 0x1894e8: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x1894e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_1894ec:
    // 0x1894ec: 0x3e00008  jr          $ra
label_1894f0:
    if (ctx->pc == 0x1894F0u) {
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894F4u;
        goto label_1894f4;
    }
    ctx->pc = 0x1894ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1894ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1894F4u;
label_1894f4:
    // 0x1894f4: 0x0  nop
    ctx->pc = 0x1894f4u;
    // NOP
    ctx->pc = 0x1894f8u;
}
