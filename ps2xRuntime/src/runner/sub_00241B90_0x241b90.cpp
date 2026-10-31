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

// Function: sub_00241B90
// Address: 0x241b90 - 0x2427e8
void sub_00241B90_0x241b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241B90_0x241b90");
#endif

    switch (ctx->pc) {
        case 0x241b90u: goto label_241b90;
        case 0x241b94u: goto label_241b94;
        case 0x241b98u: goto label_241b98;
        case 0x241b9cu: goto label_241b9c;
        case 0x241ba0u: goto label_241ba0;
        case 0x241ba4u: goto label_241ba4;
        case 0x241ba8u: goto label_241ba8;
        case 0x241bacu: goto label_241bac;
        case 0x241bb0u: goto label_241bb0;
        case 0x241bb4u: goto label_241bb4;
        case 0x241bb8u: goto label_241bb8;
        case 0x241bbcu: goto label_241bbc;
        case 0x241bc0u: goto label_241bc0;
        case 0x241bc4u: goto label_241bc4;
        case 0x241bc8u: goto label_241bc8;
        case 0x241bccu: goto label_241bcc;
        case 0x241bd0u: goto label_241bd0;
        case 0x241bd4u: goto label_241bd4;
        case 0x241bd8u: goto label_241bd8;
        case 0x241bdcu: goto label_241bdc;
        case 0x241be0u: goto label_241be0;
        case 0x241be4u: goto label_241be4;
        case 0x241be8u: goto label_241be8;
        case 0x241becu: goto label_241bec;
        case 0x241bf0u: goto label_241bf0;
        case 0x241bf4u: goto label_241bf4;
        case 0x241bf8u: goto label_241bf8;
        case 0x241bfcu: goto label_241bfc;
        case 0x241c00u: goto label_241c00;
        case 0x241c04u: goto label_241c04;
        case 0x241c08u: goto label_241c08;
        case 0x241c0cu: goto label_241c0c;
        case 0x241c10u: goto label_241c10;
        case 0x241c14u: goto label_241c14;
        case 0x241c18u: goto label_241c18;
        case 0x241c1cu: goto label_241c1c;
        case 0x241c20u: goto label_241c20;
        case 0x241c24u: goto label_241c24;
        case 0x241c28u: goto label_241c28;
        case 0x241c2cu: goto label_241c2c;
        case 0x241c30u: goto label_241c30;
        case 0x241c34u: goto label_241c34;
        case 0x241c38u: goto label_241c38;
        case 0x241c3cu: goto label_241c3c;
        case 0x241c40u: goto label_241c40;
        case 0x241c44u: goto label_241c44;
        case 0x241c48u: goto label_241c48;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c50u: goto label_241c50;
        case 0x241c54u: goto label_241c54;
        case 0x241c58u: goto label_241c58;
        case 0x241c5cu: goto label_241c5c;
        case 0x241c60u: goto label_241c60;
        case 0x241c64u: goto label_241c64;
        case 0x241c68u: goto label_241c68;
        case 0x241c6cu: goto label_241c6c;
        case 0x241c70u: goto label_241c70;
        case 0x241c74u: goto label_241c74;
        case 0x241c78u: goto label_241c78;
        case 0x241c7cu: goto label_241c7c;
        case 0x241c80u: goto label_241c80;
        case 0x241c84u: goto label_241c84;
        case 0x241c88u: goto label_241c88;
        case 0x241c8cu: goto label_241c8c;
        case 0x241c90u: goto label_241c90;
        case 0x241c94u: goto label_241c94;
        case 0x241c98u: goto label_241c98;
        case 0x241c9cu: goto label_241c9c;
        case 0x241ca0u: goto label_241ca0;
        case 0x241ca4u: goto label_241ca4;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cacu: goto label_241cac;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cb4u: goto label_241cb4;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cbcu: goto label_241cbc;
        case 0x241cc0u: goto label_241cc0;
        case 0x241cc4u: goto label_241cc4;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cccu: goto label_241ccc;
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        case 0x242650u: goto label_242650;
        case 0x242654u: goto label_242654;
        case 0x242658u: goto label_242658;
        case 0x24265cu: goto label_24265c;
        case 0x242660u: goto label_242660;
        case 0x242664u: goto label_242664;
        case 0x242668u: goto label_242668;
        case 0x24266cu: goto label_24266c;
        case 0x242670u: goto label_242670;
        case 0x242674u: goto label_242674;
        case 0x242678u: goto label_242678;
        case 0x24267cu: goto label_24267c;
        case 0x242680u: goto label_242680;
        case 0x242684u: goto label_242684;
        case 0x242688u: goto label_242688;
        case 0x24268cu: goto label_24268c;
        case 0x242690u: goto label_242690;
        case 0x242694u: goto label_242694;
        case 0x242698u: goto label_242698;
        case 0x24269cu: goto label_24269c;
        case 0x2426a0u: goto label_2426a0;
        case 0x2426a4u: goto label_2426a4;
        case 0x2426a8u: goto label_2426a8;
        case 0x2426acu: goto label_2426ac;
        case 0x2426b0u: goto label_2426b0;
        case 0x2426b4u: goto label_2426b4;
        case 0x2426b8u: goto label_2426b8;
        case 0x2426bcu: goto label_2426bc;
        case 0x2426c0u: goto label_2426c0;
        case 0x2426c4u: goto label_2426c4;
        case 0x2426c8u: goto label_2426c8;
        case 0x2426ccu: goto label_2426cc;
        case 0x2426d0u: goto label_2426d0;
        case 0x2426d4u: goto label_2426d4;
        case 0x2426d8u: goto label_2426d8;
        case 0x2426dcu: goto label_2426dc;
        case 0x2426e0u: goto label_2426e0;
        case 0x2426e4u: goto label_2426e4;
        case 0x2426e8u: goto label_2426e8;
        case 0x2426ecu: goto label_2426ec;
        case 0x2426f0u: goto label_2426f0;
        case 0x2426f4u: goto label_2426f4;
        case 0x2426f8u: goto label_2426f8;
        case 0x2426fcu: goto label_2426fc;
        case 0x242700u: goto label_242700;
        case 0x242704u: goto label_242704;
        case 0x242708u: goto label_242708;
        case 0x24270cu: goto label_24270c;
        case 0x242710u: goto label_242710;
        case 0x242714u: goto label_242714;
        case 0x242718u: goto label_242718;
        case 0x24271cu: goto label_24271c;
        case 0x242720u: goto label_242720;
        case 0x242724u: goto label_242724;
        case 0x242728u: goto label_242728;
        case 0x24272cu: goto label_24272c;
        case 0x242730u: goto label_242730;
        case 0x242734u: goto label_242734;
        case 0x242738u: goto label_242738;
        case 0x24273cu: goto label_24273c;
        case 0x242740u: goto label_242740;
        case 0x242744u: goto label_242744;
        case 0x242748u: goto label_242748;
        case 0x24274cu: goto label_24274c;
        case 0x242750u: goto label_242750;
        case 0x242754u: goto label_242754;
        case 0x242758u: goto label_242758;
        case 0x24275cu: goto label_24275c;
        case 0x242760u: goto label_242760;
        case 0x242764u: goto label_242764;
        case 0x242768u: goto label_242768;
        case 0x24276cu: goto label_24276c;
        case 0x242770u: goto label_242770;
        case 0x242774u: goto label_242774;
        case 0x242778u: goto label_242778;
        case 0x24277cu: goto label_24277c;
        case 0x242780u: goto label_242780;
        case 0x242784u: goto label_242784;
        case 0x242788u: goto label_242788;
        case 0x24278cu: goto label_24278c;
        case 0x242790u: goto label_242790;
        case 0x242794u: goto label_242794;
        case 0x242798u: goto label_242798;
        case 0x24279cu: goto label_24279c;
        case 0x2427a0u: goto label_2427a0;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427a8u: goto label_2427a8;
        case 0x2427acu: goto label_2427ac;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427b4u: goto label_2427b4;
        case 0x2427b8u: goto label_2427b8;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427c0u: goto label_2427c0;
        case 0x2427c4u: goto label_2427c4;
        case 0x2427c8u: goto label_2427c8;
        case 0x2427ccu: goto label_2427cc;
        case 0x2427d0u: goto label_2427d0;
        case 0x2427d4u: goto label_2427d4;
        case 0x2427d8u: goto label_2427d8;
        case 0x2427dcu: goto label_2427dc;
        case 0x2427e0u: goto label_2427e0;
        case 0x2427e4u: goto label_2427e4;
        default: break;
    }

    ctx->pc = 0x241b90u;

label_241b90:
    // 0x241b90: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_241b94:
    // 0x241b94: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x241b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_241b98:
    // 0x241b98: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x241b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_241b9c:
    // 0x241b9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241ba0:
    // 0x241ba0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x241ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_241ba4:
    // 0x241ba4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x241ba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_241ba8:
    // 0x241ba8: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x241ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_241bac:
    // 0x241bac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x241bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241bb0:
    // 0x241bb0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x241bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_241bb4:
    // 0x241bb4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x241bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_241bb8:
    // 0x241bb8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x241bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_241bbc:
    // 0x241bbc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x241bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_241bc0:
    // 0x241bc0: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x241bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_241bc4:
    // 0x241bc4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x241bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_241bc8:
    // 0x241bc8: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x241bc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_241bcc:
    // 0x241bcc: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x241bccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_241bd0:
    // 0x241bd0: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x241bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_241bd4:
    // 0x241bd4: 0xc0874fa  jal         func_21D3E8
label_241bd8:
    if (ctx->pc == 0x241BD8u) {
        ctx->pc = 0x241BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BD4u;
        // 0x241bd8: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BDCu;
        goto label_241bdc;
    }
    ctx->pc = 0x241BD4u;
    SET_GPR_U32(ctx, 31, 0x241BDCu);
    ctx->pc = 0x241BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BD4u;
    // 0x241bd8: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x241BD4u, 0x241BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BDCu;
label_241bdc:
    // 0x241bdc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x241bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_241be0:
    // 0x241be0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_241be4:
    if (ctx->pc == 0x241BE4u) {
        ctx->pc = 0x241BE8u;
        goto label_241be8;
    }
    ctx->pc = 0x241BE0u;
    {
        const bool branch_taken_0x241be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241be0) {
            ctx->pc = 0x241C48u;
            goto label_241c48;
        }
    }
    ctx->pc = 0x241BE8u;
label_241be8:
    // 0x241be8: 0x866201c6  lh          $v0, 0x1C6($s3)
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 454)));
label_241bec:
    // 0x241bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_241bf0:
    if (ctx->pc == 0x241BF0u) {
        ctx->pc = 0x241BF4u;
        goto label_241bf4;
    }
    ctx->pc = 0x241BECu;
    {
        const bool branch_taken_0x241bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241bec) {
            ctx->pc = 0x241BFCu;
            goto label_241bfc;
        }
    }
    ctx->pc = 0x241BF4u;
label_241bf4:
    // 0x241bf4: 0xc088420  jal         func_221080
label_241bf8:
    if (ctx->pc == 0x241BF8u) {
        ctx->pc = 0x241BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BF4u;
        // 0x241bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241BFCu;
        goto label_241bfc;
    }
    ctx->pc = 0x241BF4u;
    SET_GPR_U32(ctx, 31, 0x241BFCu);
    ctx->pc = 0x241BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BF4u;
    // 0x241bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x241BF4u, 0x241BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241BFCu;
label_241bfc:
    // 0x241bfc: 0xc089f12  jal         func_227C48
label_241c00:
    if (ctx->pc == 0x241C00u) {
        ctx->pc = 0x241C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BFCu;
        // 0x241c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C04u;
        goto label_241c04;
    }
    ctx->pc = 0x241BFCu;
    SET_GPR_U32(ctx, 31, 0x241C04u);
    ctx->pc = 0x241C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241BFCu;
    // 0x241c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x241BFCu, 0x241C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C04u;
label_241c04:
    // 0x241c04: 0x866501be  lh          $a1, 0x1BE($s3)
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_241c08:
    // 0x241c08: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_241c0c:
    if (ctx->pc == 0x241C0Cu) {
        ctx->pc = 0x241C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C08u;
        // 0x241c0c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C10u;
        goto label_241c10;
    }
    ctx->pc = 0x241C08u;
    {
        const bool branch_taken_0x241c08 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C08u;
        // 0x241c0c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c08) {
            ctx->pc = 0x241C30u;
            goto label_241c30;
        }
    }
    ctx->pc = 0x241C10u;
label_241c10:
    // 0x241c10: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_241c14:
    // 0x241c14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241c18:
    // 0x241c18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241c1c:
    // 0x241c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241c20:
    // 0x241c20: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x241c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_241c24:
    // 0x241c24: 0x10383f  dsra32      $a3, $s0, 0
    ctx->pc = 0x241c24u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> (32 + 0));
label_241c28:
    // 0x241c28: 0x10000003  b           . + 4 + (0x3 << 2)
label_241c2c:
    if (ctx->pc == 0x241C2Cu) {
        ctx->pc = 0x241C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C28u;
        // 0x241c2c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C30u;
        goto label_241c30;
    }
    ctx->pc = 0x241C28u;
    {
        const bool branch_taken_0x241c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C28u;
        // 0x241c2c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c28) {
            ctx->pc = 0x241C38u;
            goto label_241c38;
        }
    }
    ctx->pc = 0x241C30u;
label_241c30:
    // 0x241c30: 0x8e6701c0  lw          $a3, 0x1C0($s3)
    ctx->pc = 0x241c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_241c34:
    // 0x241c34: 0x866301bc  lh          $v1, 0x1BC($s3)
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_241c38:
    // 0x241c38: 0x4a00081  bltz        $a1, . + 4 + (0x81 << 2)
label_241c3c:
    if (ctx->pc == 0x241C3Cu) {
        ctx->pc = 0x241C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C38u;
        // 0x241c3c: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C40u;
        goto label_241c40;
    }
    ctx->pc = 0x241C38u;
    {
        const bool branch_taken_0x241c38 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C38u;
        // 0x241c3c: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c38) {
            ctx->pc = 0x241E40u;
            goto label_241e40;
        }
    }
    ctx->pc = 0x241C40u;
label_241c40:
    // 0x241c40: 0x1000007c  b           . + 4 + (0x7C << 2)
label_241c44:
    if (ctx->pc == 0x241C44u) {
        ctx->pc = 0x241C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C40u;
        // 0x241c44: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C48u;
        goto label_241c48;
    }
    ctx->pc = 0x241C40u;
    {
        const bool branch_taken_0x241c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C40u;
        // 0x241c44: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c40) {
            ctx->pc = 0x241E34u;
            goto label_241e34;
        }
    }
    ctx->pc = 0x241C48u;
label_241c48:
    // 0x241c48: 0xc089b88  jal         func_226E20
label_241c4c:
    if (ctx->pc == 0x241C4Cu) {
        ctx->pc = 0x241C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C48u;
        // 0x241c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C50u;
        goto label_241c50;
    }
    ctx->pc = 0x241C48u;
    SET_GPR_U32(ctx, 31, 0x241C50u);
    ctx->pc = 0x241C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C48u;
    // 0x241c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E20u, 0x241C48u, 0x241C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C50u;
label_241c50:
    // 0x241c50: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x241c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_241c54:
    // 0x241c54: 0xc0e4060  jal         func_390180
label_241c58:
    if (ctx->pc == 0x241C58u) {
        ctx->pc = 0x241C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C54u;
        // 0x241c58: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C5Cu;
        goto label_241c5c;
    }
    ctx->pc = 0x241C54u;
    SET_GPR_U32(ctx, 31, 0x241C5Cu);
    ctx->pc = 0x241C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C54u;
    // 0x241c58: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x241C54u, 0x241C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C5Cu;
label_241c5c:
    // 0x241c5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x241c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c60:
    // 0x241c60: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_241c64:
    if (ctx->pc == 0x241C64u) {
        ctx->pc = 0x241C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C60u;
        // 0x241c64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C68u;
        goto label_241c68;
    }
    ctx->pc = 0x241C60u;
    {
        const bool branch_taken_0x241c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C60u;
        // 0x241c64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c60) {
            ctx->pc = 0x241CC0u;
            goto label_241cc0;
        }
    }
    ctx->pc = 0x241C68u;
label_241c68:
    // 0x241c68: 0xc08a62e  jal         func_2298B8
label_241c6c:
    if (ctx->pc == 0x241C6Cu) {
        ctx->pc = 0x241C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C68u;
        // 0x241c6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C70u;
        goto label_241c70;
    }
    ctx->pc = 0x241C68u;
    SET_GPR_U32(ctx, 31, 0x241C70u);
    ctx->pc = 0x241C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C68u;
    // 0x241c6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2298B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2298B8u, 0x241C68u, 0x241C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C70u;
label_241c70:
    // 0x241c70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_241c74:
    // 0x241c74: 0xc44104c0  lwc1        $f1, 0x4C0($v0)
    ctx->pc = 0x241c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_241c78:
    // 0x241c78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x241c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241c7c:
    // 0x241c7c: 0x0  nop
    ctx->pc = 0x241c7cu;
    // NOP
label_241c80:
    // 0x241c80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_241c84:
    if (ctx->pc == 0x241C84u) {
        ctx->pc = 0x241C88u;
        goto label_241c88;
    }
    ctx->pc = 0x241C80u;
    {
        const bool branch_taken_0x241c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241c80) {
            ctx->pc = 0x241C94u;
            goto label_241c94;
        }
    }
    ctx->pc = 0x241C88u;
label_241c88:
    // 0x241c88: 0xc089f22  jal         func_227C88
label_241c8c:
    if (ctx->pc == 0x241C8Cu) {
        ctx->pc = 0x241C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C88u;
        // 0x241c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C90u;
        goto label_241c90;
    }
    ctx->pc = 0x241C88u;
    SET_GPR_U32(ctx, 31, 0x241C90u);
    ctx->pc = 0x241C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C88u;
    // 0x241c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x241C88u, 0x241C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C90u;
label_241c90:
    // 0x241c90: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x241c90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_241c94:
    // 0x241c94: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_241c98:
    if (ctx->pc == 0x241C98u) {
        ctx->pc = 0x241C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C94u;
        // 0x241c98: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241C9Cu;
        goto label_241c9c;
    }
    ctx->pc = 0x241C94u;
    {
        const bool branch_taken_0x241c94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c94) {
            ctx->pc = 0x241C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C94u;
            // 0x241c98: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241CC4u;
            goto label_241cc4;
        }
    }
    ctx->pc = 0x241C9Cu;
label_241c9c:
    // 0x241c9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_241ca0:
    // 0x241ca0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_241ca4:
    // 0x241ca4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_241ca8:
    // 0x241ca8: 0x40f809  jalr        $v0
label_241cac:
    if (ctx->pc == 0x241CACu) {
        ctx->pc = 0x241CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CA8u;
        // 0x241cac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CB0u;
        goto label_241cb0;
    }
    ctx->pc = 0x241CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241CB0u);
        ctx->pc = 0x241CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CA8u;
        // 0x241cac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241CA8u, 0x241CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241CB0u;
label_241cb0:
    // 0x241cb0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_241cb4:
    // 0x241cb4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x241cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_241cb8:
    // 0x241cb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x241cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_241cbc:
    // 0x241cbc: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x241cbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_241cc0:
    // 0x241cc0: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_241cc4:
    // 0x241cc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_241cc8:
    // 0x241cc8: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_241ccc:
    // 0x241ccc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_241cd0:
    // 0x241cd0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x241cd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241cd4:
    // 0x241cd4: 0x3c05110c  lui         $a1, 0x110C
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4364 << 16));
label_241cd8:
    // 0x241cd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x241cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_241cdc:
    // 0x241cdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241ce0:
    // 0x241ce0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_241ce4:
    // 0x241ce4: 0x34a50880  ori         $a1, $a1, 0x880
    ctx->pc = 0x241ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2176);
label_241ce8:
    // 0x241ce8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x241ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_241cec:
    // 0x241cec: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x241cecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_241cf0:
    // 0x241cf0: 0xae600298  sw          $zero, 0x298($s3)
    ctx->pc = 0x241cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 664), GPR_U32(ctx, 0));
label_241cf4:
    // 0x241cf4: 0xc089998  jal         func_226660
label_241cf8:
    if (ctx->pc == 0x241CF8u) {
        ctx->pc = 0x241CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF4u;
        // 0x241cf8: 0xae60029c  sw          $zero, 0x29C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241CFCu;
        goto label_241cfc;
    }
    ctx->pc = 0x241CF4u;
    SET_GPR_U32(ctx, 31, 0x241CFCu);
    ctx->pc = 0x241CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241CF4u;
    // 0x241cf8: 0xae60029c  sw          $zero, 0x29C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x241CF4u, 0x241CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241CFCu;
label_241cfc:
    // 0x241cfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_241d00:
    if (ctx->pc == 0x241D00u) {
        ctx->pc = 0x241D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CFCu;
        // 0x241d00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D04u;
        goto label_241d04;
    }
    ctx->pc = 0x241CFCu;
    {
        const bool branch_taken_0x241cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CFCu;
        // 0x241d00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cfc) {
            ctx->pc = 0x241D24u;
            goto label_241d24;
        }
    }
    ctx->pc = 0x241D04u;
label_241d04:
    // 0x241d04: 0xc088f2c  jal         func_223CB0
label_241d08:
    if (ctx->pc == 0x241D08u) {
        ctx->pc = 0x241D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D04u;
        // 0x241d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D0Cu;
        goto label_241d0c;
    }
    ctx->pc = 0x241D04u;
    SET_GPR_U32(ctx, 31, 0x241D0Cu);
    ctx->pc = 0x241D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D04u;
    // 0x241d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x241D04u, 0x241D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D0Cu;
label_241d0c:
    // 0x241d0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241d10:
    if (ctx->pc == 0x241D10u) {
        ctx->pc = 0x241D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D0Cu;
        // 0x241d10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D14u;
        goto label_241d14;
    }
    ctx->pc = 0x241D0Cu;
    {
        const bool branch_taken_0x241d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D0Cu;
        // 0x241d10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d0c) {
            ctx->pc = 0x241D24u;
            goto label_241d24;
        }
    }
    ctx->pc = 0x241D14u;
label_241d14:
    // 0x241d14: 0xc089f4a  jal         func_227D28
label_241d18:
    if (ctx->pc == 0x241D18u) {
        ctx->pc = 0x241D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D14u;
        // 0x241d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D1Cu;
        goto label_241d1c;
    }
    ctx->pc = 0x241D14u;
    SET_GPR_U32(ctx, 31, 0x241D1Cu);
    ctx->pc = 0x241D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D14u;
    // 0x241d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x241D14u, 0x241D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D1Cu;
label_241d1c:
    // 0x241d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_241d20:
    if (ctx->pc == 0x241D20u) {
        ctx->pc = 0x241D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D1Cu;
        // 0x241d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D24u;
        goto label_241d24;
    }
    ctx->pc = 0x241D1Cu;
    {
        const bool branch_taken_0x241d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D1Cu;
        // 0x241d20: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d1c) {
            ctx->pc = 0x241D34u;
            goto label_241d34;
        }
    }
    ctx->pc = 0x241D24u;
label_241d24:
    // 0x241d24: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_241d28:
    // 0x241d28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241d28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241d2c:
    // 0x241d2c: 0x1000029e  b           . + 4 + (0x29E << 2)
label_241d30:
    if (ctx->pc == 0x241D30u) {
        ctx->pc = 0x241D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D2Cu;
        // 0x241d30: 0x7ea30000  sq          $v1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D34u;
        goto label_241d34;
    }
    ctx->pc = 0x241D2Cu;
    {
        const bool branch_taken_0x241d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D2Cu;
        // 0x241d30: 0x7ea30000  sq          $v1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d2c) {
            ctx->pc = 0x2427A8u;
            goto label_2427a8;
        }
    }
    ctx->pc = 0x241D34u;
label_241d34:
    // 0x241d34: 0xc088e60  jal         func_223980
label_241d38:
    if (ctx->pc == 0x241D38u) {
        ctx->pc = 0x241D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D34u;
        // 0x241d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D3Cu;
        goto label_241d3c;
    }
    ctx->pc = 0x241D34u;
    SET_GPR_U32(ctx, 31, 0x241D3Cu);
    ctx->pc = 0x241D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D34u;
    // 0x241d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x241D34u, 0x241D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D3Cu;
label_241d3c:
    // 0x241d3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241d40:
    if (ctx->pc == 0x241D40u) {
        ctx->pc = 0x241D44u;
        goto label_241d44;
    }
    ctx->pc = 0x241D3Cu;
    {
        const bool branch_taken_0x241d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241d3c) {
            ctx->pc = 0x241D54u;
            goto label_241d54;
        }
    }
    ctx->pc = 0x241D44u;
label_241d44:
    // 0x241d44: 0xc08a01c  jal         func_228070
label_241d48:
    if (ctx->pc == 0x241D48u) {
        ctx->pc = 0x241D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D44u;
        // 0x241d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D4Cu;
        goto label_241d4c;
    }
    ctx->pc = 0x241D44u;
    SET_GPR_U32(ctx, 31, 0x241D4Cu);
    ctx->pc = 0x241D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D44u;
    // 0x241d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x241D44u, 0x241D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D4Cu;
label_241d4c:
    // 0x241d4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_241d50:
    if (ctx->pc == 0x241D50u) {
        ctx->pc = 0x241D54u;
        goto label_241d54;
    }
    ctx->pc = 0x241D4Cu;
    {
        const bool branch_taken_0x241d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d4c) {
            ctx->pc = 0x241DB8u;
            goto label_241db8;
        }
    }
    ctx->pc = 0x241D54u;
label_241d54:
    // 0x241d54: 0xc088420  jal         func_221080
label_241d58:
    if (ctx->pc == 0x241D58u) {
        ctx->pc = 0x241D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D54u;
        // 0x241d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D5Cu;
        goto label_241d5c;
    }
    ctx->pc = 0x241D54u;
    SET_GPR_U32(ctx, 31, 0x241D5Cu);
    ctx->pc = 0x241D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D54u;
    // 0x241d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x241D54u, 0x241D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D5Cu;
label_241d5c:
    // 0x241d5c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_241d60:
    // 0x241d60: 0x2446c7a0  addiu       $a2, $v0, -0x3860
    ctx->pc = 0x241d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952864));
label_241d64:
    // 0x241d64: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x241d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_241d68:
    // 0x241d68: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x241d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_241d6c:
    // 0x241d6c: 0xb26301c3  sdl         $v1, 0x1C3($s3)
    ctx->pc = 0x241d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_241d70:
    // 0x241d70: 0xb66301bc  sdr         $v1, 0x1BC($s3)
    ctx->pc = 0x241d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_241d74:
    // 0x241d74: 0x866501be  lh          $a1, 0x1BE($s3)
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_241d78:
    // 0x241d78: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_241d7c:
    if (ctx->pc == 0x241D7Cu) {
        ctx->pc = 0x241D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D78u;
        // 0x241d7c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241D80u;
        goto label_241d80;
    }
    ctx->pc = 0x241D78u;
    {
        const bool branch_taken_0x241d78 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D78u;
        // 0x241d7c: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d78) {
            ctx->pc = 0x241DA0u;
            goto label_241da0;
        }
    }
    ctx->pc = 0x241D80u;
label_241d80:
    // 0x241d80: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_241d84:
    // 0x241d84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241d88:
    // 0x241d88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241d8c:
    // 0x241d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241d90:
    // 0x241d90: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x241d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_241d94:
    // 0x241d94: 0x11383f  dsra32      $a3, $s1, 0
    ctx->pc = 0x241d94u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 17) >> (32 + 0));
label_241d98:
    // 0x241d98: 0x10000003  b           . + 4 + (0x3 << 2)
label_241d9c:
    if (ctx->pc == 0x241D9Cu) {
        ctx->pc = 0x241D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D98u;
        // 0x241d9c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DA0u;
        goto label_241da0;
    }
    ctx->pc = 0x241D98u;
    {
        const bool branch_taken_0x241d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D98u;
        // 0x241d9c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d98) {
            ctx->pc = 0x241DA8u;
            goto label_241da8;
        }
    }
    ctx->pc = 0x241DA0u;
label_241da0:
    // 0x241da0: 0x8e6701c0  lw          $a3, 0x1C0($s3)
    ctx->pc = 0x241da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_241da4:
    // 0x241da4: 0x866301bc  lh          $v1, 0x1BC($s3)
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_241da8:
    // 0x241da8: 0x4a00025  bltz        $a1, . + 4 + (0x25 << 2)
label_241dac:
    if (ctx->pc == 0x241DACu) {
        ctx->pc = 0x241DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DA8u;
        // 0x241dac: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DB0u;
        goto label_241db0;
    }
    ctx->pc = 0x241DA8u;
    {
        const bool branch_taken_0x241da8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DA8u;
        // 0x241dac: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241da8) {
            ctx->pc = 0x241E40u;
            goto label_241e40;
        }
    }
    ctx->pc = 0x241DB0u;
label_241db0:
    // 0x241db0: 0x10000020  b           . + 4 + (0x20 << 2)
label_241db4:
    if (ctx->pc == 0x241DB4u) {
        ctx->pc = 0x241DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DB0u;
        // 0x241db4: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DB8u;
        goto label_241db8;
    }
    ctx->pc = 0x241DB0u;
    {
        const bool branch_taken_0x241db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DB0u;
        // 0x241db4: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241db0) {
            ctx->pc = 0x241E34u;
            goto label_241e34;
        }
    }
    ctx->pc = 0x241DB8u;
label_241db8:
    // 0x241db8: 0xc089f1a  jal         func_227C68
label_241dbc:
    if (ctx->pc == 0x241DBCu) {
        ctx->pc = 0x241DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DB8u;
        // 0x241dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DC0u;
        goto label_241dc0;
    }
    ctx->pc = 0x241DB8u;
    SET_GPR_U32(ctx, 31, 0x241DC0u);
    ctx->pc = 0x241DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DB8u;
    // 0x241dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C68u, 0x241DB8u, 0x241DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DC0u;
label_241dc0:
    // 0x241dc0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_241dc4:
    if (ctx->pc == 0x241DC4u) {
        ctx->pc = 0x241DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DC0u;
        // 0x241dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DC8u;
        goto label_241dc8;
    }
    ctx->pc = 0x241DC0u;
    {
        const bool branch_taken_0x241dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DC0u;
        // 0x241dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dc0) {
            ctx->pc = 0x241E5Cu;
            goto label_241e5c;
        }
    }
    ctx->pc = 0x241DC8u;
label_241dc8:
    // 0x241dc8: 0x866201c6  lh          $v0, 0x1C6($s3)
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 454)));
label_241dcc:
    // 0x241dcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_241dd0:
    if (ctx->pc == 0x241DD0u) {
        ctx->pc = 0x241DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DCCu;
        // 0x241dd0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DD4u;
        goto label_241dd4;
    }
    ctx->pc = 0x241DCCu;
    {
        const bool branch_taken_0x241dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DCCu;
        // 0x241dd0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dcc) {
            ctx->pc = 0x241DE0u;
            goto label_241de0;
        }
    }
    ctx->pc = 0x241DD4u;
label_241dd4:
    // 0x241dd4: 0xc088420  jal         func_221080
label_241dd8:
    if (ctx->pc == 0x241DD8u) {
        ctx->pc = 0x241DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DD4u;
        // 0x241dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241DDCu;
        goto label_241ddc;
    }
    ctx->pc = 0x241DD4u;
    SET_GPR_U32(ctx, 31, 0x241DDCu);
    ctx->pc = 0x241DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DD4u;
    // 0x241dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x241DD4u, 0x241DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DDCu;
label_241ddc:
    // 0x241ddc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x241ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_241de0:
    // 0x241de0: 0x2446c770  addiu       $a2, $v0, -0x3890
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_241de4:
    // 0x241de4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x241de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_241de8:
    // 0x241de8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x241de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_241dec:
    // 0x241dec: 0xb26301c3  sdl         $v1, 0x1C3($s3)
    ctx->pc = 0x241decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_241df0:
    // 0x241df0: 0xb66301bc  sdr         $v1, 0x1BC($s3)
    ctx->pc = 0x241df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_241df4:
    // 0x241df4: 0x866501be  lh          $a1, 0x1BE($s3)
    ctx->pc = 0x241df4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_241df8:
    // 0x241df8: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_241dfc:
    if (ctx->pc == 0x241DFCu) {
        ctx->pc = 0x241DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DF8u;
        // 0x241dfc: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E00u;
        goto label_241e00;
    }
    ctx->pc = 0x241DF8u;
    {
        const bool branch_taken_0x241df8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DF8u;
        // 0x241dfc: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241df8) {
            ctx->pc = 0x241E20u;
            goto label_241e20;
        }
    }
    ctx->pc = 0x241E00u;
label_241e00:
    // 0x241e00: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_241e04:
    // 0x241e04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x241e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241e08:
    // 0x241e08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241e0c:
    // 0x241e0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241e10:
    // 0x241e10: 0xdc76fff8  ld          $s6, -0x8($v1)
    ctx->pc = 0x241e10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_241e14:
    // 0x241e14: 0x16383f  dsra32      $a3, $s6, 0
    ctx->pc = 0x241e14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 22) >> (32 + 0));
label_241e18:
    // 0x241e18: 0x10000003  b           . + 4 + (0x3 << 2)
label_241e1c:
    if (ctx->pc == 0x241E1Cu) {
        ctx->pc = 0x241E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E18u;
        // 0x241e1c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E20u;
        goto label_241e20;
    }
    ctx->pc = 0x241E18u;
    {
        const bool branch_taken_0x241e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E18u;
        // 0x241e1c: 0x866301bc  lh          $v1, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e18) {
            ctx->pc = 0x241E28u;
            goto label_241e28;
        }
    }
    ctx->pc = 0x241E20u;
label_241e20:
    // 0x241e20: 0x8e6701c0  lw          $a3, 0x1C0($s3)
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_241e24:
    // 0x241e24: 0x866301bc  lh          $v1, 0x1BC($s3)
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_241e28:
    // 0x241e28: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_241e2c:
    if (ctx->pc == 0x241E2Cu) {
        ctx->pc = 0x241E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E28u;
        // 0x241e2c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E30u;
        goto label_241e30;
    }
    ctx->pc = 0x241E28u;
    {
        const bool branch_taken_0x241e28 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x241E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E28u;
        // 0x241e2c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e28) {
            ctx->pc = 0x241E40u;
            goto label_241e40;
        }
    }
    ctx->pc = 0x241E30u;
label_241e30:
    // 0x241e30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_241e34:
    // 0x241e34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_241e38:
    // 0x241e38: 0x10000002  b           . + 4 + (0x2 << 2)
label_241e3c:
    if (ctx->pc == 0x241E3Cu) {
        ctx->pc = 0x241E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E38u;
        // 0x241e3c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E40u;
        goto label_241e40;
    }
    ctx->pc = 0x241E38u;
    {
        const bool branch_taken_0x241e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E38u;
        // 0x241e3c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e38) {
            ctx->pc = 0x241E44u;
            goto label_241e44;
        }
    }
    ctx->pc = 0x241E40u;
label_241e40:
    // 0x241e40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x241e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_241e44:
    // 0x241e44: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x241e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_241e48:
    // 0x241e48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x241e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_241e4c:
    // 0x241e4c: 0xe0f809  jalr        $a3
label_241e50:
    if (ctx->pc == 0x241E50u) {
        ctx->pc = 0x241E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E4Cu;
        // 0x241e50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E54u;
        goto label_241e54;
    }
    ctx->pc = 0x241E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x241E54u);
        ctx->pc = 0x241E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E4Cu;
        // 0x241e50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241E4Cu, 0x241E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241E54u;
label_241e54:
    // 0x241e54: 0x10000255  b           . + 4 + (0x255 << 2)
label_241e58:
    if (ctx->pc == 0x241E58u) {
        ctx->pc = 0x241E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E54u;
        // 0x241e58: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E5Cu;
        goto label_241e5c;
    }
    ctx->pc = 0x241E54u;
    {
        const bool branch_taken_0x241e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E54u;
        // 0x241e58: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e54) {
            ctx->pc = 0x2427ACu;
            goto label_2427ac;
        }
    }
    ctx->pc = 0x241E5Cu;
label_241e5c:
    // 0x241e5c: 0xc0874fa  jal         func_21D3E8
label_241e60:
    if (ctx->pc == 0x241E60u) {
        ctx->pc = 0x241E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E5Cu;
        // 0x241e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E64u;
        goto label_241e64;
    }
    ctx->pc = 0x241E5Cu;
    SET_GPR_U32(ctx, 31, 0x241E64u);
    ctx->pc = 0x241E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E5Cu;
    // 0x241e60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x241E5Cu, 0x241E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E64u;
label_241e64:
    // 0x241e64: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_241e68:
    if (ctx->pc == 0x241E68u) {
        ctx->pc = 0x241E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E64u;
        // 0x241e68: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E6Cu;
        goto label_241e6c;
    }
    ctx->pc = 0x241E64u;
    {
        const bool branch_taken_0x241e64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E64u;
        // 0x241e68: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e64) {
            ctx->pc = 0x241EC0u;
            goto label_241ec0;
        }
    }
    ctx->pc = 0x241E6Cu;
label_241e6c:
    // 0x241e6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_241e70:
    // 0x241e70: 0x8c4304ac  lw          $v1, 0x4AC($v0)
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
label_241e74:
    // 0x241e74: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_241e78:
    if (ctx->pc == 0x241E78u) {
        ctx->pc = 0x241E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E74u;
        // 0x241e78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E7Cu;
        goto label_241e7c;
    }
    ctx->pc = 0x241E74u;
    {
        const bool branch_taken_0x241e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E74u;
        // 0x241e78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e74) {
            ctx->pc = 0x241E90u;
            goto label_241e90;
        }
    }
    ctx->pc = 0x241E7Cu;
label_241e7c:
    // 0x241e7c: 0xc09ee38  jal         func_27B8E0
label_241e80:
    if (ctx->pc == 0x241E80u) {
        ctx->pc = 0x241E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E7Cu;
        // 0x241e80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E84u;
        goto label_241e84;
    }
    ctx->pc = 0x241E7Cu;
    SET_GPR_U32(ctx, 31, 0x241E84u);
    ctx->pc = 0x241E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E7Cu;
    // 0x241e80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E0u, 0x241E7Cu, 0x241E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E84u;
label_241e84:
    // 0x241e84: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_241e88:
    if (ctx->pc == 0x241E88u) {
        ctx->pc = 0x241E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E84u;
        // 0x241e88: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E8Cu;
        goto label_241e8c;
    }
    ctx->pc = 0x241E84u;
    {
        const bool branch_taken_0x241e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e84) {
            ctx->pc = 0x241E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E84u;
            // 0x241e88: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EC0u;
            goto label_241ec0;
        }
    }
    ctx->pc = 0x241E8Cu;
label_241e8c:
    // 0x241e8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_241e90:
    // 0x241e90: 0x8c4304b4  lw          $v1, 0x4B4($v0)
    ctx->pc = 0x241e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1204)));
label_241e94:
    // 0x241e94: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_241e98:
    if (ctx->pc == 0x241E98u) {
        ctx->pc = 0x241E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E94u;
        // 0x241e98: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241E9Cu;
        goto label_241e9c;
    }
    ctx->pc = 0x241E94u;
    {
        const bool branch_taken_0x241e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e94) {
            ctx->pc = 0x241E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241E94u;
            // 0x241e98: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EC0u;
            goto label_241ec0;
        }
    }
    ctx->pc = 0x241E9Cu;
label_241e9c:
    // 0x241e9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_241ea0:
    // 0x241ea0: 0x8c4304b8  lw          $v1, 0x4B8($v0)
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1208)));
label_241ea4:
    // 0x241ea4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_241ea8:
    if (ctx->pc == 0x241EA8u) {
        ctx->pc = 0x241EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EA4u;
        // 0x241ea8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EACu;
        goto label_241eac;
    }
    ctx->pc = 0x241EA4u;
    {
        const bool branch_taken_0x241ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241ea4) {
            ctx->pc = 0x241EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241EA4u;
            // 0x241ea8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241EC0u;
            goto label_241ec0;
        }
    }
    ctx->pc = 0x241EACu;
label_241eac:
    // 0x241eac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x241eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_241eb0:
    // 0x241eb0: 0x8c4304b0  lw          $v1, 0x4B0($v0)
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_241eb4:
    // 0x241eb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_241eb8:
    if (ctx->pc == 0x241EB8u) {
        ctx->pc = 0x241EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EB4u;
        // 0x241eb8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241EBCu;
        goto label_241ebc;
    }
    ctx->pc = 0x241EB4u;
    {
        const bool branch_taken_0x241eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EB4u;
        // 0x241eb8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241eb4) {
            ctx->pc = 0x241EC4u;
            goto label_241ec4;
        }
    }
    ctx->pc = 0x241EBCu;
label_241ebc:
    // 0x241ebc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x241ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ec0:
    // 0x241ec0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_241ec4:
    // 0x241ec4: 0x87c20002  lh          $v0, 0x2($fp)
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_241ec8:
    // 0x241ec8: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_241ecc:
    // 0x241ecc: 0x3a250001  xori        $a1, $s1, 0x1
    ctx->pc = 0x241eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_241ed0:
    // 0x241ed0: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_241ed4:
    // 0x241ed4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_241ed8:
    // 0x241ed8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x241ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_241edc:
    // 0x241edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241ee0:
    // 0x241ee0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x241ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_241ee4:
    // 0x241ee4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x241ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_241ee8:
    // 0x241ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241eec:
    // 0x241eec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241eecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241ef0:
    // 0x241ef0: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x241ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_241ef4:
    // 0x241ef4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x241ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_241ef8:
    // 0x241ef8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x241ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_241efc:
    // 0x241efc: 0x92c20018  lbu         $v0, 0x18($s6)
    ctx->pc = 0x241efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
label_241f00:
    // 0x241f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241f04:
    // 0x241f04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_241f08:
    // 0x241f08: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x241f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_241f0c:
    // 0x241f0c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x241f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_241f10:
    // 0x241f10: 0x0  nop
    ctx->pc = 0x241f10u;
    // NOP
label_241f14:
    // 0x241f14: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_241f18:
    if (ctx->pc == 0x241F18u) {
        ctx->pc = 0x241F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F14u;
        // 0x241f18: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F1Cu;
        goto label_241f1c;
    }
    ctx->pc = 0x241F14u;
    {
        const bool branch_taken_0x241f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F14u;
        // 0x241f18: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f14) {
            ctx->pc = 0x241F54u;
            goto label_241f54;
        }
    }
    ctx->pc = 0x241F1Cu;
label_241f1c:
    // 0x241f1c: 0x26d00008  addiu       $s0, $s6, 0x8
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_241f20:
    // 0x241f20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_241f24:
    // 0x241f24: 0xc12e29c  jal         func_4B8A70
label_241f28:
    if (ctx->pc == 0x241F28u) {
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F2Cu;
        goto label_241f2c;
    }
    ctx->pc = 0x241F24u;
    SET_GPR_U32(ctx, 31, 0x241F2Cu);
    ctx->pc = 0x241F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F24u;
    // 0x241f28: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x241F24u, 0x241F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F2Cu;
label_241f2c:
    // 0x241f2c: 0x92c20018  lbu         $v0, 0x18($s6)
    ctx->pc = 0x241f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
label_241f30:
    // 0x241f30: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x241f30u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_241f34:
    // 0x241f34: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_241f38:
    // 0x241f38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241f3c:
    // 0x241f3c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_241f40:
    // 0x241f40: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_241f44:
    // 0x241f44: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x241f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_241f48:
    // 0x241f48: 0xc12e310  jal         func_4B8C40
label_241f4c:
    if (ctx->pc == 0x241F4Cu) {
        ctx->pc = 0x241F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F48u;
        // 0x241f4c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x241F50u;
        goto label_241f50;
    }
    ctx->pc = 0x241F48u;
    SET_GPR_U32(ctx, 31, 0x241F50u);
    ctx->pc = 0x241F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F48u;
    // 0x241f4c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x241F48u, 0x241F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F50u;
label_241f50:
    // 0x241f50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x241f50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_241f54:
    // 0x241f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_241f58:
    // 0x241f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_241f5c:
    // 0x241f5c: 0xe6b60000  swc1        $f22, 0x0($s5)
    ctx->pc = 0x241f5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_241f60:
    // 0x241f60: 0xe6b40004  swc1        $f20, 0x4($s5)
    ctx->pc = 0x241f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_241f64:
    // 0x241f64: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x241f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_241f68:
    // 0x241f68: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x241f68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_241f6c:
    // 0x241f6c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x241f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_241f70:
    // 0x241f70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x241f70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_241f74:
    // 0x241f74: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x241f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241f78:
    // 0x241f78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x241f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_241f7c:
    // 0x241f7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x241f7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_241f80:
    // 0x241f80: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x241f80u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_241f84:
    // 0x241f84: 0x4a0003bf  vwaitq
    ctx->pc = 0x241f84u;
    // VWAITQ (Q already resolved in this runtime)
label_241f88:
    // 0x241f88: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x241f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_241f8c:
    // 0x241f8c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x241f8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_241f90:
    // 0x241f90: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x241f90u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_241f94:
    // 0x241f94: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x241f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_241f98:
    // 0x241f98: 0x82c40019  lb          $a0, 0x19($s6)
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 25)));
label_241f9c:
    // 0x241f9c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_241fa0:
    if (ctx->pc == 0x241FA0u) {
        ctx->pc = 0x241FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F9Cu;
        // 0x241fa0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FA4u;
        goto label_241fa4;
    }
    ctx->pc = 0x241F9Cu;
    {
        const bool branch_taken_0x241f9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x241FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F9Cu;
        // 0x241fa0: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f9c) {
            ctx->pc = 0x241FB8u;
            goto label_241fb8;
        }
    }
    ctx->pc = 0x241FA4u;
label_241fa4:
    // 0x241fa4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x241fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_241fa8:
    // 0x241fa8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x241fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_241fac:
    // 0x241fac: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x241facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_241fb0:
    // 0x241fb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_241fb4:
    if (ctx->pc == 0x241FB4u) {
        ctx->pc = 0x241FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FB0u;
        // 0x241fb4: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FB8u;
        goto label_241fb8;
    }
    ctx->pc = 0x241FB0u;
    {
        const bool branch_taken_0x241fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FB0u;
        // 0x241fb4: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fb0) {
            ctx->pc = 0x241FC0u;
            goto label_241fc0;
        }
    }
    ctx->pc = 0x241FB8u;
label_241fb8:
    // 0x241fb8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x241fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_241fbc:
    // 0x241fbc: 0x2457d810  addiu       $s7, $v0, -0x27F0
    ctx->pc = 0x241fbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_241fc0:
    // 0x241fc0: 0x522000b9  beql        $s1, $zero, . + 4 + (0xB9 << 2)
label_241fc4:
    if (ctx->pc == 0x241FC4u) {
        ctx->pc = 0x241FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FC0u;
        // 0x241fc4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FC8u;
        goto label_241fc8;
    }
    ctx->pc = 0x241FC0u;
    {
        const bool branch_taken_0x241fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fc0) {
            ctx->pc = 0x241FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FC0u;
            // 0x241fc4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2422A8u;
            goto label_2422a8;
        }
    }
    ctx->pc = 0x241FC8u;
label_241fc8:
    // 0x241fc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x241fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_241fcc:
    // 0x241fcc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x241fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_241fd0:
    // 0x241fd0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_241fd4:
    // 0x241fd4: 0x40f809  jalr        $v0
label_241fd8:
    if (ctx->pc == 0x241FD8u) {
        ctx->pc = 0x241FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FD4u;
        // 0x241fd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241FDCu;
        goto label_241fdc;
    }
    ctx->pc = 0x241FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x241FDCu);
        ctx->pc = 0x241FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FD4u;
        // 0x241fd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241FD4u, 0x241FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241FDCu;
label_241fdc:
    // 0x241fdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x241fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_241fe0:
    // 0x241fe0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_241fe4:
    if (ctx->pc == 0x241FE4u) {
        ctx->pc = 0x241FE8u;
        goto label_241fe8;
    }
    ctx->pc = 0x241FE0u;
    {
        const bool branch_taken_0x241fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fe0) {
            ctx->pc = 0x242050u;
            goto label_242050;
        }
    }
    ctx->pc = 0x241FE8u;
label_241fe8:
    // 0x241fe8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x241fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_241fec:
    // 0x241fec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x241fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_241ff0:
    // 0x241ff0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_241ff4:
    // 0x241ff4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x241ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_241ff8:
    // 0x241ff8: 0x60f809  jalr        $v1
label_241ffc:
    if (ctx->pc == 0x241FFCu) {
        ctx->pc = 0x241FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FF8u;
        // 0x241ffc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242000u;
        goto label_242000;
    }
    ctx->pc = 0x241FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x242000u);
        ctx->pc = 0x241FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FF8u;
        // 0x241ffc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241FF8u, 0x242000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242000u;
label_242000:
    // 0x242000: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x242000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242004:
    // 0x242004: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x242004u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242008:
    // 0x242008: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24200c:
    // 0x24200c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24200cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_242010:
    // 0x242010: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x242010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242014:
    // 0x242014: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x242014u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_242018:
    // 0x242018: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x242018u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_24201c:
    // 0x24201c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24201cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242020:
    // 0x242020: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x242020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242024:
    // 0x242024: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x242024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242028:
    // 0x242028: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x242028u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24202c:
    // 0x24202c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x24202cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_242030:
    // 0x242030: 0x4a0003bf  vwaitq
    ctx->pc = 0x242030u;
    // VWAITQ (Q already resolved in this runtime)
label_242034:
    // 0x242034: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x242034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242038:
    // 0x242038: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x242038u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_24203c:
    // 0x24203c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_242040:
    // 0x242040: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x242040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_242044:
    // 0x242044: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x242044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_242048:
    // 0x242048: 0x1000009b  b           . + 4 + (0x9B << 2)
label_24204c:
    if (ctx->pc == 0x24204Cu) {
        ctx->pc = 0x24204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242048u;
        // 0x24204c: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242050u;
        goto label_242050;
    }
    ctx->pc = 0x242048u;
    {
        const bool branch_taken_0x242048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242048u;
        // 0x24204c: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242048) {
            ctx->pc = 0x2422B8u;
            goto label_2422b8;
        }
    }
    ctx->pc = 0x242050u;
label_242050:
    // 0x242050: 0xc0e2612  jal         func_389848
label_242054:
    if (ctx->pc == 0x242054u) {
        ctx->pc = 0x242054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242050u;
        // 0x242054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242058u;
        goto label_242058;
    }
    ctx->pc = 0x242050u;
    SET_GPR_U32(ctx, 31, 0x242058u);
    ctx->pc = 0x242054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242050u;
    // 0x242054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x242050u, 0x242058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242058u;
label_242058:
    // 0x242058: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24205c:
    // 0x24205c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x24205cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_242060:
    // 0x242060: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242064:
    // 0x242064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242068:
    // 0x242068: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x242068u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_24206c:
    // 0x24206c: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_242070:
    // 0x242070: 0x60f809  jalr        $v1
label_242074:
    if (ctx->pc == 0x242074u) {
        ctx->pc = 0x242074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242070u;
        // 0x242074: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242078u;
        goto label_242078;
    }
    ctx->pc = 0x242070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x242078u);
        ctx->pc = 0x242074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242070u;
        // 0x242074: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242070u, 0x242078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242078u;
label_242078:
    // 0x242078: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x242078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24207c:
    // 0x24207c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242080:
    // 0x242080: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x242080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242084:
    // 0x242084: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_242088:
    // 0x242088: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24208c:
    // 0x24208c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24208cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_242090:
    // 0x242090: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x242090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242094:
    // 0x242094: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x242094u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_242098:
    // 0x242098: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x242098u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_24209c:
    // 0x24209c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2420a0:
    // 0x2420a0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2420a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2420a4:
    // 0x2420a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2420a8:
    // 0x2420a8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2420ac:
    // 0x2420ac: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2420b0:
    // 0x2420b0: 0x40f809  jalr        $v0
label_2420b4:
    if (ctx->pc == 0x2420B4u) {
        ctx->pc = 0x2420B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420B0u;
        // 0x2420b4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420B8u;
        goto label_2420b8;
    }
    ctx->pc = 0x2420B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2420B8u);
        ctx->pc = 0x2420B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420B0u;
        // 0x2420b4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2420B0u, 0x2420B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2420B8u;
label_2420b8:
    // 0x2420b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2420b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2420bc:
    // 0x2420bc: 0xc0cd940  jal         func_336500
label_2420c0:
    if (ctx->pc == 0x2420C0u) {
        ctx->pc = 0x2420C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420BCu;
        // 0x2420c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420C4u;
        goto label_2420c4;
    }
    ctx->pc = 0x2420BCu;
    SET_GPR_U32(ctx, 31, 0x2420C4u);
    ctx->pc = 0x2420C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420BCu;
    // 0x2420c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x2420BCu, 0x2420C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420C4u;
label_2420c4:
    // 0x2420c4: 0xc0e3400  jal         func_38D000
label_2420c8:
    if (ctx->pc == 0x2420C8u) {
        ctx->pc = 0x2420C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420C4u;
        // 0x2420c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420CCu;
        goto label_2420cc;
    }
    ctx->pc = 0x2420C4u;
    SET_GPR_U32(ctx, 31, 0x2420CCu);
    ctx->pc = 0x2420C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420C4u;
    // 0x2420c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x2420C4u, 0x2420CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420CCu;
label_2420cc:
    // 0x2420cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2420ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2420d0:
    // 0x2420d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2420d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2420d4:
    // 0x2420d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2420d8:
    // 0x2420d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2420d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2420dc:
    // 0x2420dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2420dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2420e0:
    // 0x2420e0: 0xc136b24  jal         func_4DAC90
label_2420e4:
    if (ctx->pc == 0x2420E4u) {
        ctx->pc = 0x2420E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420E0u;
        // 0x2420e4: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420E8u;
        goto label_2420e8;
    }
    ctx->pc = 0x2420E0u;
    SET_GPR_U32(ctx, 31, 0x2420E8u);
    ctx->pc = 0x2420E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420E0u;
    // 0x2420e4: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2420E0u, 0x2420E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420E8u;
label_2420e8:
    // 0x2420e8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2420e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2420ec:
    // 0x2420ec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2420ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2420f0:
    // 0x2420f0: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x2420f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2420f4:
    // 0x2420f4: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2420f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_2420f8:
    // 0x2420f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2420f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2420fc:
    // 0x2420fc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2420fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_242100:
    // 0x242100: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x242100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242104:
    // 0x242104: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x242104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242108:
    // 0x242108: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x242108u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_24210c:
    // 0x24210c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x24210cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242110:
    // 0x242110: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x242110u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_242114:
    // 0x242114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242118:
    // 0x242118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x242118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24211c:
    // 0x24211c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x24211cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242120:
    // 0x242120: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x242120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242124:
    // 0x242124: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x242124u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_242128:
    // 0x242128: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x242128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24212c:
    // 0x24212c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x24212cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242130:
    // 0x242130: 0x0  nop
    ctx->pc = 0x242130u;
    // NOP
label_242134:
    // 0x242134: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_242138:
    if (ctx->pc == 0x242138u) {
        ctx->pc = 0x242138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242134u;
        // 0x242138: 0xc7a20024  lwc1        $f2, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24213Cu;
        goto label_24213c;
    }
    ctx->pc = 0x242134u;
    {
        const bool branch_taken_0x242134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242134u;
        // 0x242138: 0xc7a20024  lwc1        $f2, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242134) {
            ctx->pc = 0x2421A4u;
            goto label_2421a4;
        }
    }
    ctx->pc = 0x24213Cu;
label_24213c:
    // 0x24213c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x24213cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_242140:
    // 0x242140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242144:
    // 0x242144: 0x0  nop
    ctx->pc = 0x242144u;
    // NOP
label_242148:
    // 0x242148: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24214c:
    if (ctx->pc == 0x24214Cu) {
        ctx->pc = 0x242150u;
        goto label_242150;
    }
    ctx->pc = 0x242148u;
    {
        const bool branch_taken_0x242148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242148) {
            ctx->pc = 0x24215Cu;
            goto label_24215c;
        }
    }
    ctx->pc = 0x242150u;
label_242150:
    // 0x242150: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x242150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_242154:
    // 0x242154: 0x10000046  b           . + 4 + (0x46 << 2)
label_242158:
    if (ctx->pc == 0x242158u) {
        ctx->pc = 0x242158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242154u;
        // 0x242158: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24215Cu;
        goto label_24215c;
    }
    ctx->pc = 0x242154u;
    {
        const bool branch_taken_0x242154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242154u;
        // 0x242158: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242154) {
            ctx->pc = 0x242270u;
            goto label_242270;
        }
    }
    ctx->pc = 0x24215Cu;
label_24215c:
    // 0x24215c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x24215cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242160:
    // 0x242160: 0x0  nop
    ctx->pc = 0x242160u;
    // NOP
label_242164:
    // 0x242164: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_242168:
    if (ctx->pc == 0x242168u) {
        ctx->pc = 0x242168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242164u;
        // 0x242168: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24216Cu;
        goto label_24216c;
    }
    ctx->pc = 0x242164u;
    {
        const bool branch_taken_0x242164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242164u;
        // 0x242168: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242164) {
            ctx->pc = 0x24219Cu;
            goto label_24219c;
        }
    }
    ctx->pc = 0x24216Cu;
label_24216c:
    // 0x24216c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x24216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242170:
    // 0x242170: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x242170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242174:
    // 0x242174: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x242174u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_242178:
    // 0x242178: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x242178u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_24217c:
    // 0x24217c: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x24217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_242180:
    // 0x242180: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x242180u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_242184:
    // 0x242184: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x242184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_242188:
    // 0x242188: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x242188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_24218c:
    // 0x24218c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x24218cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_242190:
    // 0x242190: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x242190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_242194:
    // 0x242194: 0x10000041  b           . + 4 + (0x41 << 2)
label_242198:
    if (ctx->pc == 0x242198u) {
        ctx->pc = 0x242198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242194u;
        // 0x242198: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24219Cu;
        goto label_24219c;
    }
    ctx->pc = 0x242194u;
    {
        const bool branch_taken_0x242194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242194u;
        // 0x242198: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242194) {
            ctx->pc = 0x24229Cu;
            goto label_24229c;
        }
    }
    ctx->pc = 0x24219Cu;
label_24219c:
    // 0x24219c: 0x10000033  b           . + 4 + (0x33 << 2)
label_2421a0:
    if (ctx->pc == 0x2421A0u) {
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24219Cu;
        // 0x2421a0: 0x46041800  add.s       $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421A4u;
        goto label_2421a4;
    }
    ctx->pc = 0x24219Cu;
    {
        const bool branch_taken_0x24219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24219Cu;
        // 0x2421a0: 0x46041800  add.s       $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24219c) {
            ctx->pc = 0x24226Cu;
            goto label_24226c;
        }
    }
    ctx->pc = 0x2421A4u;
label_2421a4:
    // 0x2421a4: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x2421a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2421a8:
    // 0x2421a8: 0x0  nop
    ctx->pc = 0x2421a8u;
    // NOP
label_2421ac:
    // 0x2421ac: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_2421b0:
    if (ctx->pc == 0x2421B0u) {
        ctx->pc = 0x2421B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421ACu;
        // 0x2421b0: 0xc7a20024  lwc1        $f2, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421B4u;
        goto label_2421b4;
    }
    ctx->pc = 0x2421ACu;
    {
        const bool branch_taken_0x2421ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2421ac) {
            ctx->pc = 0x2421B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2421ACu;
            // 0x2421b0: 0xc7a20024  lwc1        $f2, 0x24($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242234u;
            goto label_242234;
        }
    }
    ctx->pc = 0x2421B4u;
label_2421b4:
    // 0x2421b4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2421b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2421b8:
    // 0x2421b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2421b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2421bc:
    // 0x2421bc: 0x0  nop
    ctx->pc = 0x2421bcu;
    // NOP
label_2421c0:
    // 0x2421c0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2421c4:
    if (ctx->pc == 0x2421C4u) {
        ctx->pc = 0x2421C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421C0u;
        // 0x2421c4: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421C8u;
        goto label_2421c8;
    }
    ctx->pc = 0x2421C0u;
    {
        const bool branch_taken_0x2421c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2421C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421C0u;
        // 0x2421c4: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421c0) {
            ctx->pc = 0x2421F8u;
            goto label_2421f8;
        }
    }
    ctx->pc = 0x2421C8u;
label_2421c8:
    // 0x2421c8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2421c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2421cc:
    // 0x2421cc: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2421ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2421d0:
    // 0x2421d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2421d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2421d4:
    // 0x2421d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2421d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2421d8:
    // 0x2421d8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2421d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2421dc:
    // 0x2421dc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2421dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2421e0:
    // 0x2421e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2421e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2421e4:
    // 0x2421e4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2421e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2421e8:
    // 0x2421e8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2421e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2421ec:
    // 0x2421ec: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2421ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2421f0:
    // 0x2421f0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2421f4:
    if (ctx->pc == 0x2421F4u) {
        ctx->pc = 0x2421F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421F0u;
        // 0x2421f4: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421F8u;
        goto label_2421f8;
    }
    ctx->pc = 0x2421F0u;
    {
        const bool branch_taken_0x2421f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421F0u;
        // 0x2421f4: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421f0) {
            ctx->pc = 0x24229Cu;
            goto label_24229c;
        }
    }
    ctx->pc = 0x2421F8u;
label_2421f8:
    // 0x2421f8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2421f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2421fc:
    // 0x2421fc: 0x0  nop
    ctx->pc = 0x2421fcu;
    // NOP
label_242200:
    // 0x242200: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_242204:
    if (ctx->pc == 0x242204u) {
        ctx->pc = 0x242204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242200u;
        // 0x242204: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242208u;
        goto label_242208;
    }
    ctx->pc = 0x242200u;
    {
        const bool branch_taken_0x242200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242200u;
        // 0x242204: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242200) {
            ctx->pc = 0x24222Cu;
            goto label_24222c;
        }
    }
    ctx->pc = 0x242208u;
label_242208:
    // 0x242208: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_24220c:
    // 0x24220c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_242210:
    // 0x242210: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x242210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_242214:
    // 0x242214: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x242214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_242218:
    // 0x242218: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24221c:
    // 0x24221c: 0xc0cd8ec  jal         func_3363B0
label_242220:
    if (ctx->pc == 0x242220u) {
        ctx->pc = 0x242220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24221Cu;
        // 0x242220: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242224u;
        goto label_242224;
    }
    ctx->pc = 0x24221Cu;
    SET_GPR_U32(ctx, 31, 0x242224u);
    ctx->pc = 0x242220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24221Cu;
    // 0x242220: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x24221Cu, 0x242224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242224u;
label_242224:
    // 0x242224: 0x10000023  b           . + 4 + (0x23 << 2)
label_242228:
    if (ctx->pc == 0x242228u) {
        ctx->pc = 0x242228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242224u;
        // 0x242228: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24222Cu;
        goto label_24222c;
    }
    ctx->pc = 0x242224u;
    {
        const bool branch_taken_0x242224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242224u;
        // 0x242228: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242224) {
            ctx->pc = 0x2422B4u;
            goto label_2422b4;
        }
    }
    ctx->pc = 0x24222Cu;
label_24222c:
    // 0x24222c: 0x10000022  b           . + 4 + (0x22 << 2)
label_242230:
    if (ctx->pc == 0x242230u) {
        ctx->pc = 0x242230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24222Cu;
        // 0x242230: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242234u;
        goto label_242234;
    }
    ctx->pc = 0x24222Cu;
    {
        const bool branch_taken_0x24222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24222Cu;
        // 0x242230: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24222c) {
            ctx->pc = 0x2422B8u;
            goto label_2422b8;
        }
    }
    ctx->pc = 0x242234u;
label_242234:
    // 0x242234: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x242234u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_242238:
    // 0x242238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24223c:
    // 0x24223c: 0x0  nop
    ctx->pc = 0x24223cu;
    // NOP
label_242240:
    // 0x242240: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_242244:
    if (ctx->pc == 0x242244u) {
        ctx->pc = 0x242248u;
        goto label_242248;
    }
    ctx->pc = 0x242240u;
    {
        const bool branch_taken_0x242240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242240) {
            ctx->pc = 0x242254u;
            goto label_242254;
        }
    }
    ctx->pc = 0x242248u;
label_242248:
    // 0x242248: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x242248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_24224c:
    // 0x24224c: 0x10000008  b           . + 4 + (0x8 << 2)
label_242250:
    if (ctx->pc == 0x242250u) {
        ctx->pc = 0x242250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24224Cu;
        // 0x242250: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242254u;
        goto label_242254;
    }
    ctx->pc = 0x24224Cu;
    {
        const bool branch_taken_0x24224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24224Cu;
        // 0x242250: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24224c) {
            ctx->pc = 0x242270u;
            goto label_242270;
        }
    }
    ctx->pc = 0x242254u;
label_242254:
    // 0x242254: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x242254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242258:
    // 0x242258: 0x0  nop
    ctx->pc = 0x242258u;
    // NOP
label_24225c:
    // 0x24225c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_242260:
    if (ctx->pc == 0x242260u) {
        ctx->pc = 0x242260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24225Cu;
        // 0x242260: 0x46041801  sub.s       $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242264u;
        goto label_242264;
    }
    ctx->pc = 0x24225Cu;
    {
        const bool branch_taken_0x24225c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24225c) {
            ctx->pc = 0x242260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24225Cu;
            // 0x242260: 0x46041801  sub.s       $f0, $f3, $f4 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24226Cu;
            goto label_24226c;
        }
    }
    ctx->pc = 0x242264u;
label_242264:
    // 0x242264: 0x10000014  b           . + 4 + (0x14 << 2)
label_242268:
    if (ctx->pc == 0x242268u) {
        ctx->pc = 0x242268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242264u;
        // 0x242268: 0x7fa40010  sq          $a0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24226Cu;
        goto label_24226c;
    }
    ctx->pc = 0x242264u;
    {
        const bool branch_taken_0x242264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242264u;
        // 0x242268: 0x7fa40010  sq          $a0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242264) {
            ctx->pc = 0x2422B8u;
            goto label_2422b8;
        }
    }
    ctx->pc = 0x24226Cu;
label_24226c:
    // 0x24226c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x24226cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_242270:
    // 0x242270: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x242270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_242274:
    // 0x242274: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x242274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_242278:
    // 0x242278: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x242278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24227c:
    // 0x24227c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24227cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242280:
    // 0x242280: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x242280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242284:
    // 0x242284: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x242284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_242288:
    // 0x242288: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x242288u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24228c:
    // 0x24228c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x24228cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_242290:
    // 0x242290: 0x4a0003bf  vwaitq
    ctx->pc = 0x242290u;
    // VWAITQ (Q already resolved in this runtime)
label_242294:
    // 0x242294: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x242294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242298:
    // 0x242298: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x242298u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24229c:
    // 0x24229c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2422a0:
    // 0x2422a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2422a4:
    if (ctx->pc == 0x2422A4u) {
        ctx->pc = 0x2422A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422A0u;
        // 0x2422a4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422A8u;
        goto label_2422a8;
    }
    ctx->pc = 0x2422A0u;
    {
        const bool branch_taken_0x2422a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422A0u;
        // 0x2422a4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422a0) {
            ctx->pc = 0x2422B8u;
            goto label_2422b8;
        }
    }
    ctx->pc = 0x2422A8u;
label_2422a8:
    // 0x2422a8: 0xc0cd8ec  jal         func_3363B0
label_2422ac:
    if (ctx->pc == 0x2422ACu) {
        ctx->pc = 0x2422ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422A8u;
        // 0x2422ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422B0u;
        goto label_2422b0;
    }
    ctx->pc = 0x2422A8u;
    SET_GPR_U32(ctx, 31, 0x2422B0u);
    ctx->pc = 0x2422ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422A8u;
    // 0x2422ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2422A8u, 0x2422B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422B0u;
label_2422b0:
    // 0x2422b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2422b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2422b4:
    // 0x2422b4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2422b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2422b8:
    // 0x2422b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2422b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2422bc:
    // 0x2422bc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2422bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2422c0:
    // 0x2422c0: 0xc0cd5ea  jal         func_3357A8
label_2422c4:
    if (ctx->pc == 0x2422C4u) {
        ctx->pc = 0x2422C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422C0u;
        // 0x2422c4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422C8u;
        goto label_2422c8;
    }
    ctx->pc = 0x2422C0u;
    SET_GPR_U32(ctx, 31, 0x2422C8u);
    ctx->pc = 0x2422C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422C0u;
    // 0x2422c4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2422C0u, 0x2422C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422C8u;
label_2422c8:
    // 0x2422c8: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2422c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2422cc:
    // 0x2422cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2422ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2422d0:
    // 0x2422d0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2422d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2422d4:
    // 0x2422d4: 0xc0885c4  jal         func_221710
label_2422d8:
    if (ctx->pc == 0x2422D8u) {
        ctx->pc = 0x2422D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422D4u;
        // 0x2422d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422DCu;
        goto label_2422dc;
    }
    ctx->pc = 0x2422D4u;
    SET_GPR_U32(ctx, 31, 0x2422DCu);
    ctx->pc = 0x2422D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422D4u;
    // 0x2422d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221710u, 0x2422D4u, 0x2422DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422DCu;
label_2422dc:
    // 0x2422dc: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2422dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2422e0:
    // 0x2422e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2422e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2422e4:
    // 0x2422e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2422e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2422e8:
    // 0x2422e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2422e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2422ec:
    // 0x2422ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2422ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2422f0:
    // 0x2422f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2422f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2422f4:
    // 0x2422f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2422f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2422f8:
    // 0x2422f8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2422f8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_2422fc:
    // 0x2422fc: 0xc088eb4  jal         func_223AD0
label_242300:
    if (ctx->pc == 0x242300u) {
        ctx->pc = 0x242300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422FCu;
        // 0x242300: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242304u;
        goto label_242304;
    }
    ctx->pc = 0x2422FCu;
    SET_GPR_U32(ctx, 31, 0x242304u);
    ctx->pc = 0x242300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422FCu;
    // 0x242300: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2422FCu, 0x242304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242304u;
label_242304:
    // 0x242304: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_242308:
    if (ctx->pc == 0x242308u) {
        ctx->pc = 0x242308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242304u;
        // 0x242308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24230Cu;
        goto label_24230c;
    }
    ctx->pc = 0x242304u;
    {
        const bool branch_taken_0x242304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242304u;
        // 0x242308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242304) {
            ctx->pc = 0x242388u;
            goto label_242388;
        }
    }
    ctx->pc = 0x24230Cu;
label_24230c:
    // 0x24230c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_242310:
    // 0x242310: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_242314:
    // 0x242314: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_242318:
    // 0x242318: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24231c:
    // 0x24231c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24231cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_242320:
    // 0x242320: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x242320u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_242324:
    // 0x242324: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x242324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_242328:
    // 0x242328: 0x7ea40000  sq          $a0, 0x0($s5)
    ctx->pc = 0x242328u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 4));
label_24232c:
    // 0x24232c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24232cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_242330:
    // 0x242330: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x242330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_242334:
    // 0x242334: 0xc12e310  jal         func_4B8C40
label_242338:
    if (ctx->pc == 0x242338u) {
        ctx->pc = 0x242338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242334u;
        // 0x242338: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24233Cu;
        goto label_24233c;
    }
    ctx->pc = 0x242334u;
    SET_GPR_U32(ctx, 31, 0x24233Cu);
    ctx->pc = 0x242338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242334u;
    // 0x242338: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x242334u, 0x24233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24233Cu;
label_24233c:
    // 0x24233c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x24233cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_242340:
    // 0x242340: 0xc12e29c  jal         func_4B8A70
label_242344:
    if (ctx->pc == 0x242344u) {
        ctx->pc = 0x242344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242340u;
        // 0x242344: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242348u;
        goto label_242348;
    }
    ctx->pc = 0x242340u;
    SET_GPR_U32(ctx, 31, 0x242348u);
    ctx->pc = 0x242344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242340u;
    // 0x242344: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x242340u, 0x242348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242348u;
label_242348:
    // 0x242348: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x242348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24234c:
    // 0x24234c: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x24234cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_242350:
    // 0x242350: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x242350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_242354:
    // 0x242354: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242358:
    // 0x242358: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x242358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_24235c:
    // 0x24235c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24235cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_242360:
    // 0x242360: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x242360u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_242364:
    // 0x242364: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x242364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_242368:
    // 0x242368: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x242368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_24236c:
    // 0x24236c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x24236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242370:
    // 0x242370: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x242370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242374:
    // 0x242374: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x242374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242378:
    // 0x242378: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x242378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_24237c:
    // 0x24237c: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x24237cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_242380:
    // 0x242380: 0x10000045  b           . + 4 + (0x45 << 2)
label_242384:
    if (ctx->pc == 0x242384u) {
        ctx->pc = 0x242384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242380u;
        // 0x242384: 0xe6820008  swc1        $f2, 0x8($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242388u;
        goto label_242388;
    }
    ctx->pc = 0x242380u;
    {
        const bool branch_taken_0x242380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242380u;
        // 0x242384: 0xe6820008  swc1        $f2, 0x8($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242380) {
            ctx->pc = 0x242498u;
            goto label_242498;
        }
    }
    ctx->pc = 0x242388u;
label_242388:
    // 0x242388: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x242388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_24238c:
    // 0x24238c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_242390:
    if (ctx->pc == 0x242390u) {
        ctx->pc = 0x242390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24238Cu;
        // 0x242390: 0x92c20018  lbu         $v0, 0x18($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242394u;
        goto label_242394;
    }
    ctx->pc = 0x24238Cu;
    {
        const bool branch_taken_0x24238c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24238c) {
            ctx->pc = 0x242390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24238Cu;
            // 0x242390: 0x92c20018  lbu         $v0, 0x18($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242408u;
            goto label_242408;
        }
    }
    ctx->pc = 0x242394u;
label_242394:
    // 0x242394: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_242398:
    // 0x242398: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24239c:
    // 0x24239c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2423a0:
    // 0x2423a0: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2423a4:
    // 0x2423a4: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2423a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_2423a8:
    // 0x2423a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2423a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2423ac:
    // 0x2423ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2423acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2423b0:
    // 0x2423b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2423b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2423b4:
    // 0x2423b4: 0xc12e310  jal         func_4B8C40
label_2423b8:
    if (ctx->pc == 0x2423B8u) {
        ctx->pc = 0x2423B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423B4u;
        // 0x2423b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423BCu;
        goto label_2423bc;
    }
    ctx->pc = 0x2423B4u;
    SET_GPR_U32(ctx, 31, 0x2423BCu);
    ctx->pc = 0x2423B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423B4u;
    // 0x2423b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2423B4u, 0x2423BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423BCu;
label_2423bc:
    // 0x2423bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2423bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2423c0:
    // 0x2423c0: 0xc12e29c  jal         func_4B8A70
label_2423c4:
    if (ctx->pc == 0x2423C4u) {
        ctx->pc = 0x2423C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423C0u;
        // 0x2423c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423C8u;
        goto label_2423c8;
    }
    ctx->pc = 0x2423C0u;
    SET_GPR_U32(ctx, 31, 0x2423C8u);
    ctx->pc = 0x2423C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423C0u;
    // 0x2423c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2423C0u, 0x2423C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423C8u;
label_2423c8:
    // 0x2423c8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2423c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2423cc:
    // 0x2423cc: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x2423ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2423d0:
    // 0x2423d0: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x2423d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_2423d4:
    // 0x2423d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2423d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2423d8:
    // 0x2423d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2423d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2423dc:
    // 0x2423dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2423dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2423e0:
    // 0x2423e0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2423e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2423e4:
    // 0x2423e4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2423e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2423e8:
    // 0x2423e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2423e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2423ec:
    // 0x2423ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2423ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2423f0:
    // 0x2423f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2423f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2423f4:
    // 0x2423f4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2423f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2423f8:
    // 0x2423f8: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2423f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2423fc:
    // 0x2423fc: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2423fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_242400:
    // 0x242400: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x242400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_242404:
    // 0x242404: 0x92c20018  lbu         $v0, 0x18($s6)
    ctx->pc = 0x242404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
label_242408:
    // 0x242408: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_24240c:
    // 0x24240c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242410:
    // 0x242410: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x242410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_242414:
    // 0x242414: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x242414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_242418:
    // 0x242418: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24241c:
    // 0x24241c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_242420:
    // 0x242420: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x242420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242424:
    // 0x242424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242428:
    // 0x242428: 0x0  nop
    ctx->pc = 0x242428u;
    // NOP
label_24242c:
    // 0x24242c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_242430:
    if (ctx->pc == 0x242430u) {
        ctx->pc = 0x242430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24242Cu;
        // 0x242430: 0xc7ad0024  lwc1        $f13, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242434u;
        goto label_242434;
    }
    ctx->pc = 0x24242Cu;
    {
        const bool branch_taken_0x24242c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24242Cu;
        // 0x242430: 0xc7ad0024  lwc1        $f13, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24242c) {
            ctx->pc = 0x242498u;
            goto label_242498;
        }
    }
    ctx->pc = 0x242434u;
label_242434:
    // 0x242434: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x242434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_242438:
    // 0x242438: 0xc0cd5ea  jal         func_3357A8
label_24243c:
    if (ctx->pc == 0x24243Cu) {
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242438u;
        // 0x24243c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242440u;
        goto label_242440;
    }
    ctx->pc = 0x242438u;
    SET_GPR_U32(ctx, 31, 0x242440u);
    ctx->pc = 0x24243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242438u;
    // 0x24243c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x242438u, 0x242440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242440u;
label_242440:
    // 0x242440: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x242440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_242444:
    // 0x242444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242448:
    // 0x242448: 0x0  nop
    ctx->pc = 0x242448u;
    // NOP
label_24244c:
    // 0x24244c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24244cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242450:
    // 0x242450: 0x0  nop
    ctx->pc = 0x242450u;
    // NOP
label_242454:
    // 0x242454: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_242458:
    if (ctx->pc == 0x242458u) {
        ctx->pc = 0x24245Cu;
        goto label_24245c;
    }
    ctx->pc = 0x242454u;
    {
        const bool branch_taken_0x242454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242454) {
            ctx->pc = 0x242470u;
            goto label_242470;
        }
    }
    ctx->pc = 0x24245Cu;
label_24245c:
    // 0x24245c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x24245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_242460:
    // 0x242460: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242464:
    // 0x242464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242468:
    // 0x242468: 0x0  nop
    ctx->pc = 0x242468u;
    // NOP
label_24246c:
    // 0x24246c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24246cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_242470:
    // 0x242470: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_242474:
    // 0x242474: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242478:
    // 0x242478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24247c:
    // 0x24247c: 0x0  nop
    ctx->pc = 0x24247cu;
    // NOP
label_242480:
    // 0x242480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242484:
    // 0x242484: 0x0  nop
    ctx->pc = 0x242484u;
    // NOP
label_242488:
    // 0x242488: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_24248c:
    if (ctx->pc == 0x24248Cu) {
        ctx->pc = 0x24248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242488u;
        // 0x24248c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242490u;
        goto label_242490;
    }
    ctx->pc = 0x242488u;
    {
        const bool branch_taken_0x242488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242488) {
            ctx->pc = 0x24248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242488u;
            // 0x24248c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242490u;
            goto label_242490;
        }
    }
    ctx->pc = 0x242490u;
label_242490:
    // 0x242490: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_242494:
    // 0x242494: 0xe44100dc  swc1        $f1, 0xDC($v0)
    ctx->pc = 0x242494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
label_242498:
    // 0x242498: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_24249c:
    // 0x24249c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24249cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2424a0:
    // 0x2424a0: 0x10a000bf  beqz        $a1, . + 4 + (0xBF << 2)
label_2424a4:
    if (ctx->pc == 0x2424A4u) {
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424A0u;
        // 0x2424a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424A8u;
        goto label_2424a8;
    }
    ctx->pc = 0x2424A0u;
    {
        const bool branch_taken_0x2424a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424A0u;
        // 0x2424a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424a0) {
            ctx->pc = 0x2427A0u;
            goto label_2427a0;
        }
    }
    ctx->pc = 0x2424A8u;
label_2424a8:
    // 0x2424a8: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_2424ac:
    // 0x2424ac: 0x506000bd  beql        $v1, $zero, . + 4 + (0xBD << 2)
label_2424b0:
    if (ctx->pc == 0x2424B0u) {
        ctx->pc = 0x2424B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424ACu;
        // 0x2424b0: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424B4u;
        goto label_2424b4;
    }
    ctx->pc = 0x2424ACu;
    {
        const bool branch_taken_0x2424ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2424ac) {
            ctx->pc = 0x2424B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424ACu;
            // 0x2424b0: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2427A4u;
            goto label_2427a4;
        }
    }
    ctx->pc = 0x2424B4u;
label_2424b4:
    // 0x2424b4: 0xc088eb4  jal         func_223AD0
label_2424b8:
    if (ctx->pc == 0x2424B8u) {
        ctx->pc = 0x2424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424B4u;
        // 0x2424b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424BCu;
        goto label_2424bc;
    }
    ctx->pc = 0x2424B4u;
    SET_GPR_U32(ctx, 31, 0x2424BCu);
    ctx->pc = 0x2424B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424B4u;
    // 0x2424b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2424B4u, 0x2424BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424BCu;
label_2424bc:
    // 0x2424bc: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
label_2424c0:
    if (ctx->pc == 0x2424C0u) {
        ctx->pc = 0x2424C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424BCu;
        // 0x2424c0: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424C4u;
        goto label_2424c4;
    }
    ctx->pc = 0x2424BCu;
    {
        const bool branch_taken_0x2424bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2424bc) {
            ctx->pc = 0x2424C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424BCu;
            // 0x2424c0: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2427A4u;
            goto label_2427a4;
        }
    }
    ctx->pc = 0x2424C4u;
label_2424c4:
    // 0x2424c4: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x2424c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2424c8:
    // 0x2424c8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2424cc:
    // 0x2424cc: 0xc6e20014  lwc1        $f2, 0x14($s7)
    ctx->pc = 0x2424ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2424d0:
    // 0x2424d0: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x2424d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_2424d4:
    // 0x2424d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2424d8:
    // 0x2424d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2424d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2424dc:
    // 0x2424dc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2424dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2424e0:
    // 0x2424e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2424e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2424e4:
    // 0x2424e4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2424e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2424e8:
    // 0x2424e8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2424e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2424ec:
    // 0x2424ec: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2424ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2424f0:
    // 0x2424f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2424f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2424f4:
    // 0x2424f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2424f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2424f8:
    // 0x2424f8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2424f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2424fc:
    // 0x2424fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2424fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242500:
    // 0x242500: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x242500u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_242504:
    // 0x242504: 0x4a0003bf  vwaitq
    ctx->pc = 0x242504u;
    // VWAITQ (Q already resolved in this runtime)
label_242508:
    // 0x242508: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x242508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24250c:
    // 0x24250c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x24250cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_242510:
    // 0x242510: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x242510u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242514:
    // 0x242514: 0x0  nop
    ctx->pc = 0x242514u;
    // NOP
label_242518:
    // 0x242518: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x242518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24251c:
    // 0x24251c: 0x0  nop
    ctx->pc = 0x24251cu;
    // NOP
label_242520:
    // 0x242520: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_242524:
    if (ctx->pc == 0x242524u) {
        ctx->pc = 0x242528u;
        goto label_242528;
    }
    ctx->pc = 0x242520u;
    {
        const bool branch_taken_0x242520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242520) {
            ctx->pc = 0x24261Cu;
            goto label_24261c;
        }
    }
    ctx->pc = 0x242528u;
label_242528:
    // 0x242528: 0xc047e6c  jal         func_11F9B0
label_24252c:
    if (ctx->pc == 0x24252Cu) {
        ctx->pc = 0x24252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242528u;
        // 0x24252c: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242530u;
        goto label_242530;
    }
    ctx->pc = 0x242528u;
    SET_GPR_U32(ctx, 31, 0x242530u);
    ctx->pc = 0x24252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242528u;
    // 0x24252c: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x242528u, 0x242530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242530u;
label_242530:
    // 0x242530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242534:
    // 0x242534: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
label_242538:
    if (ctx->pc == 0x242538u) {
        ctx->pc = 0x242538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242534u;
        // 0x242538: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24253Cu;
        goto label_24253c;
    }
    ctx->pc = 0x242534u;
    {
        const bool branch_taken_0x242534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x242534) {
            ctx->pc = 0x242538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242534u;
            // 0x242538: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242560u;
            goto label_242560;
        }
    }
    ctx->pc = 0x24253Cu;
label_24253c:
    // 0x24253c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x24253cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_242540:
    // 0x242540: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_242544:
    if (ctx->pc == 0x242544u) {
        ctx->pc = 0x242548u;
        goto label_242548;
    }
    ctx->pc = 0x242540u;
    {
        const bool branch_taken_0x242540 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x242540) {
            ctx->pc = 0x242554u;
            goto label_242554;
        }
    }
    ctx->pc = 0x242548u;
label_242548:
    // 0x242548: 0xc047e6c  jal         func_11F9B0
label_24254c:
    if (ctx->pc == 0x24254Cu) {
        ctx->pc = 0x24254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242548u;
        // 0x24254c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242550u;
        goto label_242550;
    }
    ctx->pc = 0x242548u;
    SET_GPR_U32(ctx, 31, 0x242550u);
    ctx->pc = 0x24254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242548u;
    // 0x24254c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x242548u, 0x242550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242550u;
label_242550:
    // 0x242550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242554:
    // 0x242554: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_242558:
    if (ctx->pc == 0x242558u) {
        ctx->pc = 0x242558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242554u;
        // 0x242558: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24255Cu;
        goto label_24255c;
    }
    ctx->pc = 0x242554u;
    {
        const bool branch_taken_0x242554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242554u;
        // 0x242558: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242554) {
            ctx->pc = 0x242580u;
            goto label_242580;
        }
    }
    ctx->pc = 0x24255Cu;
label_24255c:
    // 0x24255c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_242560:
    // 0x242560: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_242564:
    // 0x242564: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x242564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_242568:
    // 0x242568: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_24256c:
    // 0x24256c: 0x40f809  jalr        $v0
label_242570:
    if (ctx->pc == 0x242570u) {
        ctx->pc = 0x242570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24256Cu;
        // 0x242570: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242574u;
        goto label_242574;
    }
    ctx->pc = 0x24256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242574u);
        ctx->pc = 0x242570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24256Cu;
        // 0x242570: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24256Cu, 0x242574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242574u;
label_242574:
    // 0x242574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242578:
    // 0x242578: 0xc0cd940  jal         func_336500
label_24257c:
    if (ctx->pc == 0x24257Cu) {
        ctx->pc = 0x24257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242578u;
        // 0x24257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242580u;
        goto label_242580;
    }
    ctx->pc = 0x242578u;
    SET_GPR_U32(ctx, 31, 0x242580u);
    ctx->pc = 0x24257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242578u;
    // 0x24257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x242578u, 0x242580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242580u;
label_242580:
    // 0x242580: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x242580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_242584:
    // 0x242584: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242588:
    // 0x242588: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x242588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24258c:
    // 0x24258c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24258cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_242590:
    // 0x242590: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x242590u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_242594:
    // 0x242594: 0x4a0003bf  vwaitq
    ctx->pc = 0x242594u;
    // VWAITQ (Q already resolved in this runtime)
label_242598:
    // 0x242598: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x242598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24259c:
    // 0x24259c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x24259cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2425a0:
    // 0x2425a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2425a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2425a4:
    // 0x2425a4: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2425a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2425a8:
    // 0x2425a8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2425a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2425ac:
    // 0x2425ac: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x2425acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_2425b0:
    // 0x2425b0: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x2425b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_2425b4:
    // 0x2425b4: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x2425b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_2425b8:
    // 0x2425b8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x2425b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2425bc:
    // 0x2425bc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x2425bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2425c0:
    // 0x2425c0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x2425c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_2425c4:
    // 0x2425c4: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x2425c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2425c8:
    // 0x2425c8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2425c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2425cc:
    // 0x2425cc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2425ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2425d0:
    // 0x2425d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2425d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2425d4:
    // 0x2425d4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2425d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2425d8:
    // 0x2425d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2425d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2425dc:
    // 0x2425dc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2425dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2425e0:
    // 0x2425e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2425e0u;
    // VWAITQ (Q already resolved in this runtime)
label_2425e4:
    // 0x2425e4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2425e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2425e8:
    // 0x2425e8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2425e8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2425ec:
    // 0x2425ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2425ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2425f0:
    // 0x2425f0: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2425f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2425f4:
    // 0x2425f4: 0x0  nop
    ctx->pc = 0x2425f4u;
    // NOP
label_2425f8:
    // 0x2425f8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2425f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2425fc:
    // 0x2425fc: 0x0  nop
    ctx->pc = 0x2425fcu;
    // NOP
label_242600:
    // 0x242600: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_242604:
    if (ctx->pc == 0x242604u) {
        ctx->pc = 0x242604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242600u;
        // 0x242604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242608u;
        goto label_242608;
    }
    ctx->pc = 0x242600u;
    {
        const bool branch_taken_0x242600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x242604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242600u;
        // 0x242604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242600) {
            ctx->pc = 0x24261Cu;
            goto label_24261c;
        }
    }
    ctx->pc = 0x242608u;
label_242608:
    // 0x242608: 0x0  nop
    ctx->pc = 0x242608u;
    // NOP
label_24260c:
    // 0x24260c: 0x0  nop
    ctx->pc = 0x24260cu;
    // NOP
label_242610:
    // 0x242610: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x242610u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_242614:
    // 0x242614: 0xc136b24  jal         func_4DAC90
label_242618:
    if (ctx->pc == 0x242618u) {
        ctx->pc = 0x242618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242614u;
        // 0x242618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24261Cu;
        goto label_24261c;
    }
    ctx->pc = 0x242614u;
    SET_GPR_U32(ctx, 31, 0x24261Cu);
    ctx->pc = 0x242618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242614u;
    // 0x242618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x242614u, 0x24261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24261Cu;
label_24261c:
    // 0x24261c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x24261cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_242620:
    // 0x242620: 0x0  nop
    ctx->pc = 0x242620u;
    // NOP
label_242624:
    // 0x242624: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x242624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242628:
    // 0x242628: 0x0  nop
    ctx->pc = 0x242628u;
    // NOP
label_24262c:
    // 0x24262c: 0x4502005d  bc1fl       . + 4 + (0x5D << 2)
label_242630:
    if (ctx->pc == 0x242630u) {
        ctx->pc = 0x242630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24262Cu;
        // 0x242630: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242634u;
        goto label_242634;
    }
    ctx->pc = 0x24262Cu;
    {
        const bool branch_taken_0x24262c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24262c) {
            ctx->pc = 0x242630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24262Cu;
            // 0x242630: 0xc66003a0  lwc1        $f0, 0x3A0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2427A4u;
            goto label_2427a4;
        }
    }
    ctx->pc = 0x242634u;
label_242634:
    // 0x242634: 0xc0884f6  jal         func_2213D8
label_242638:
    if (ctx->pc == 0x242638u) {
        ctx->pc = 0x242638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242634u;
        // 0x242638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24263Cu;
        goto label_24263c;
    }
    ctx->pc = 0x242634u;
    SET_GPR_U32(ctx, 31, 0x24263Cu);
    ctx->pc = 0x242638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242634u;
    // 0x242638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x242634u, 0x24263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24263Cu;
label_24263c:
    // 0x24263c: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x24263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_242640:
    // 0x242640: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x242640u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_242644:
    // 0x242644: 0xc0cd5ea  jal         func_3357A8
label_242648:
    if (ctx->pc == 0x242648u) {
        ctx->pc = 0x242648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242644u;
        // 0x242648: 0xc7ad0030  lwc1        $f13, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24264Cu;
        goto label_24264c;
    }
    ctx->pc = 0x242644u;
    SET_GPR_U32(ctx, 31, 0x24264Cu);
    ctx->pc = 0x242648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242644u;
    // 0x242648: 0xc7ad0030  lwc1        $f13, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x242644u, 0x24264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24264Cu;
label_24264c:
    // 0x24264c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x24264cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_242650:
    // 0x242650: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242654:
    // 0x242654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_242658:
    // 0x242658: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x242658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_24265c:
    // 0x24265c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24265cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242660:
    // 0x242660: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x242660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_242664:
    // 0x242664: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x242664u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_242668:
    // 0x242668: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x242668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24266c:
    // 0x24266c: 0x0  nop
    ctx->pc = 0x24266cu;
    // NOP
label_242670:
    // 0x242670: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_242674:
    if (ctx->pc == 0x242674u) {
        ctx->pc = 0x242678u;
        goto label_242678;
    }
    ctx->pc = 0x242670u;
    {
        const bool branch_taken_0x242670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242670) {
            ctx->pc = 0x24268Cu;
            goto label_24268c;
        }
    }
    ctx->pc = 0x242678u;
label_242678:
    // 0x242678: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_24267c:
    // 0x24267c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24267cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242680:
    // 0x242680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242684:
    // 0x242684: 0x0  nop
    ctx->pc = 0x242684u;
    // NOP
label_242688:
    // 0x242688: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x242688u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_24268c:
    // 0x24268c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x24268cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_242690:
    // 0x242690: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242694:
    // 0x242694: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x242694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_242698:
    // 0x242698: 0x0  nop
    ctx->pc = 0x242698u;
    // NOP
label_24269c:
    // 0x24269c: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x24269cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2426a0:
    // 0x2426a0: 0x0  nop
    ctx->pc = 0x2426a0u;
    // NOP
label_2426a4:
    // 0x2426a4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2426a8:
    if (ctx->pc == 0x2426A8u) {
        ctx->pc = 0x2426A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426A4u;
        // 0x2426a8: 0x4616a041  sub.s       $f1, $f20, $f22 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426ACu;
        goto label_2426ac;
    }
    ctx->pc = 0x2426A4u;
    {
        const bool branch_taken_0x2426a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2426a4) {
            ctx->pc = 0x2426A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426A4u;
            // 0x2426a8: 0x4616a041  sub.s       $f1, $f20, $f22 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426C4u;
            goto label_2426c4;
        }
    }
    ctx->pc = 0x2426ACu;
label_2426ac:
    // 0x2426ac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2426acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2426b0:
    // 0x2426b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2426b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2426b4:
    // 0x2426b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2426b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2426b8:
    // 0x2426b8: 0x0  nop
    ctx->pc = 0x2426b8u;
    // NOP
label_2426bc:
    // 0x2426bc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2426bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2426c0:
    // 0x2426c0: 0x4616a041  sub.s       $f1, $f20, $f22
    ctx->pc = 0x2426c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_2426c4:
    // 0x2426c4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2426c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2426c8:
    // 0x2426c8: 0x0  nop
    ctx->pc = 0x2426c8u;
    // NOP
label_2426cc:
    // 0x2426cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2426d0:
    if (ctx->pc == 0x2426D0u) {
        ctx->pc = 0x2426D4u;
        goto label_2426d4;
    }
    ctx->pc = 0x2426CCu;
    {
        const bool branch_taken_0x2426cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2426cc) {
            ctx->pc = 0x2426E8u;
            goto label_2426e8;
        }
    }
    ctx->pc = 0x2426D4u;
label_2426d4:
    // 0x2426d4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2426d8:
    // 0x2426d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2426d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2426dc:
    // 0x2426dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2426dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2426e0:
    // 0x2426e0: 0x0  nop
    ctx->pc = 0x2426e0u;
    // NOP
label_2426e4:
    // 0x2426e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2426e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2426e8:
    // 0x2426e8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2426e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2426ec:
    // 0x2426ec: 0x0  nop
    ctx->pc = 0x2426ecu;
    // NOP
label_2426f0:
    // 0x2426f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2426f4:
    if (ctx->pc == 0x2426F4u) {
        ctx->pc = 0x2426F8u;
        goto label_2426f8;
    }
    ctx->pc = 0x2426F0u;
    {
        const bool branch_taken_0x2426f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2426f0) {
            ctx->pc = 0x24270Cu;
            goto label_24270c;
        }
    }
    ctx->pc = 0x2426F8u;
label_2426f8:
    // 0x2426f8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2426fc:
    // 0x2426fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2426fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_242700:
    // 0x242700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242704:
    // 0x242704: 0x0  nop
    ctx->pc = 0x242704u;
    // NOP
label_242708:
    // 0x242708: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x242708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24270c:
    // 0x24270c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x24270cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_242710:
    // 0x242710: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x242710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242714:
    // 0x242714: 0x0  nop
    ctx->pc = 0x242714u;
    // NOP
label_242718:
    // 0x242718: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_24271c:
    if (ctx->pc == 0x24271Cu) {
        ctx->pc = 0x24271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242718u;
        // 0x24271c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242720u;
        goto label_242720;
    }
    ctx->pc = 0x242718u;
    {
        const bool branch_taken_0x242718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242718u;
        // 0x24271c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242718) {
            ctx->pc = 0x242734u;
            goto label_242734;
        }
    }
    ctx->pc = 0x242720u;
label_242720:
    // 0x242720: 0x46170836  c.le.s      $f1, $f23
    ctx->pc = 0x242720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242724:
    // 0x242724: 0x0  nop
    ctx->pc = 0x242724u;
    // NOP
label_242728:
    // 0x242728: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_24272c:
    if (ctx->pc == 0x24272Cu) {
        ctx->pc = 0x24272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242728u;
        // 0x24272c: 0x4615b000  add.s       $f0, $f22, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242730u;
        goto label_242730;
    }
    ctx->pc = 0x242728u;
    {
        const bool branch_taken_0x242728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242728) {
            ctx->pc = 0x24272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242728u;
            // 0x24272c: 0x4615b000  add.s       $f0, $f22, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242734u;
            goto label_242734;
        }
    }
    ctx->pc = 0x242730u;
label_242730:
    // 0x242730: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x242730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_242734:
    // 0x242734: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x242734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_242738:
    // 0x242738: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24273c:
    // 0x24273c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24273cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_242740:
    // 0x242740: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_242744:
    // 0x242744: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x242744u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_242748:
    // 0x242748: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x242748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24274c:
    // 0x24274c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_242750:
    // 0x242750: 0xc12e310  jal         func_4B8C40
label_242754:
    if (ctx->pc == 0x242754u) {
        ctx->pc = 0x242754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242750u;
        // 0x242754: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242758u;
        goto label_242758;
    }
    ctx->pc = 0x242750u;
    SET_GPR_U32(ctx, 31, 0x242758u);
    ctx->pc = 0x242754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242750u;
    // 0x242754: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x242750u, 0x242758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242758u;
label_242758:
    // 0x242758: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x242758u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_24275c:
    // 0x24275c: 0xc12e29c  jal         func_4B8A70
label_242760:
    if (ctx->pc == 0x242760u) {
        ctx->pc = 0x242760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24275Cu;
        // 0x242760: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242764u;
        goto label_242764;
    }
    ctx->pc = 0x24275Cu;
    SET_GPR_U32(ctx, 31, 0x242764u);
    ctx->pc = 0x242760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24275Cu;
    // 0x242760: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x24275Cu, 0x242764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242764u;
label_242764:
    // 0x242764: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x242764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242768:
    // 0x242768: 0x4405a800  mfc1        $a1, $f21
    ctx->pc = 0x242768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_24276c:
    // 0x24276c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x24276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_242770:
    // 0x242770: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_242774:
    // 0x242774: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x242774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_242778:
    // 0x242778: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x242778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24277c:
    // 0x24277c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x24277cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_242780:
    // 0x242780: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x242780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_242784:
    // 0x242784: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x242784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_242788:
    // 0x242788: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x242788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24278c:
    // 0x24278c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x24278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_242790:
    // 0x242790: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x242790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242794:
    // 0x242794: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x242794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_242798:
    // 0x242798: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x242798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_24279c:
    // 0x24279c: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x24279cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2427a0:
    // 0x2427a0: 0xc66003a0  lwc1        $f0, 0x3A0($s3)
    ctx->pc = 0x2427a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2427a4:
    // 0x2427a4: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2427a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2427a8:
    // 0x2427a8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2427a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2427ac:
    // 0x2427ac: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2427acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2427b0:
    // 0x2427b0: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2427b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2427b4:
    // 0x2427b4: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2427b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2427b8:
    // 0x2427b8: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2427b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2427bc:
    // 0x2427bc: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2427bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2427c0:
    // 0x2427c0: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2427c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2427c4:
    // 0x2427c4: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2427c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2427c8:
    // 0x2427c8: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2427c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2427cc:
    // 0x2427cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2427ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2427d0:
    // 0x2427d0: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x2427d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2427d4:
    // 0x2427d4: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x2427d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2427d8:
    // 0x2427d8: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2427d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2427dc:
    // 0x2427dc: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2427dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2427e0:
    // 0x2427e0: 0x3e00008  jr          $ra
label_2427e4:
    if (ctx->pc == 0x2427E4u) {
        ctx->pc = 0x2427E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427E0u;
        // 0x2427e4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427E8u;
        goto label_fallthrough_0x2427e0;
    }
    ctx->pc = 0x2427E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2427E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427E0u;
        // 0x2427e4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2427E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2427e0:
    ctx->pc = 0x2427E8u;
}
