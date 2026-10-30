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

// Function: sub_00404C48
// Address: 0x404c48 - 0x405600
void sub_00404C48_0x404c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00404C48_0x404c48");
#endif

    switch (ctx->pc) {
        case 0x404c48u: goto label_404c48;
        case 0x404c4cu: goto label_404c4c;
        case 0x404c50u: goto label_404c50;
        case 0x404c54u: goto label_404c54;
        case 0x404c58u: goto label_404c58;
        case 0x404c5cu: goto label_404c5c;
        case 0x404c60u: goto label_404c60;
        case 0x404c64u: goto label_404c64;
        case 0x404c68u: goto label_404c68;
        case 0x404c6cu: goto label_404c6c;
        case 0x404c70u: goto label_404c70;
        case 0x404c74u: goto label_404c74;
        case 0x404c78u: goto label_404c78;
        case 0x404c7cu: goto label_404c7c;
        case 0x404c80u: goto label_404c80;
        case 0x404c84u: goto label_404c84;
        case 0x404c88u: goto label_404c88;
        case 0x404c8cu: goto label_404c8c;
        case 0x404c90u: goto label_404c90;
        case 0x404c94u: goto label_404c94;
        case 0x404c98u: goto label_404c98;
        case 0x404c9cu: goto label_404c9c;
        case 0x404ca0u: goto label_404ca0;
        case 0x404ca4u: goto label_404ca4;
        case 0x404ca8u: goto label_404ca8;
        case 0x404cacu: goto label_404cac;
        case 0x404cb0u: goto label_404cb0;
        case 0x404cb4u: goto label_404cb4;
        case 0x404cb8u: goto label_404cb8;
        case 0x404cbcu: goto label_404cbc;
        case 0x404cc0u: goto label_404cc0;
        case 0x404cc4u: goto label_404cc4;
        case 0x404cc8u: goto label_404cc8;
        case 0x404cccu: goto label_404ccc;
        case 0x404cd0u: goto label_404cd0;
        case 0x404cd4u: goto label_404cd4;
        case 0x404cd8u: goto label_404cd8;
        case 0x404cdcu: goto label_404cdc;
        case 0x404ce0u: goto label_404ce0;
        case 0x404ce4u: goto label_404ce4;
        case 0x404ce8u: goto label_404ce8;
        case 0x404cecu: goto label_404cec;
        case 0x404cf0u: goto label_404cf0;
        case 0x404cf4u: goto label_404cf4;
        case 0x404cf8u: goto label_404cf8;
        case 0x404cfcu: goto label_404cfc;
        case 0x404d00u: goto label_404d00;
        case 0x404d04u: goto label_404d04;
        case 0x404d08u: goto label_404d08;
        case 0x404d0cu: goto label_404d0c;
        case 0x404d10u: goto label_404d10;
        case 0x404d14u: goto label_404d14;
        case 0x404d18u: goto label_404d18;
        case 0x404d1cu: goto label_404d1c;
        case 0x404d20u: goto label_404d20;
        case 0x404d24u: goto label_404d24;
        case 0x404d28u: goto label_404d28;
        case 0x404d2cu: goto label_404d2c;
        case 0x404d30u: goto label_404d30;
        case 0x404d34u: goto label_404d34;
        case 0x404d38u: goto label_404d38;
        case 0x404d3cu: goto label_404d3c;
        case 0x404d40u: goto label_404d40;
        case 0x404d44u: goto label_404d44;
        case 0x404d48u: goto label_404d48;
        case 0x404d4cu: goto label_404d4c;
        case 0x404d50u: goto label_404d50;
        case 0x404d54u: goto label_404d54;
        case 0x404d58u: goto label_404d58;
        case 0x404d5cu: goto label_404d5c;
        case 0x404d60u: goto label_404d60;
        case 0x404d64u: goto label_404d64;
        case 0x404d68u: goto label_404d68;
        case 0x404d6cu: goto label_404d6c;
        case 0x404d70u: goto label_404d70;
        case 0x404d74u: goto label_404d74;
        case 0x404d78u: goto label_404d78;
        case 0x404d7cu: goto label_404d7c;
        case 0x404d80u: goto label_404d80;
        case 0x404d84u: goto label_404d84;
        case 0x404d88u: goto label_404d88;
        case 0x404d8cu: goto label_404d8c;
        case 0x404d90u: goto label_404d90;
        case 0x404d94u: goto label_404d94;
        case 0x404d98u: goto label_404d98;
        case 0x404d9cu: goto label_404d9c;
        case 0x404da0u: goto label_404da0;
        case 0x404da4u: goto label_404da4;
        case 0x404da8u: goto label_404da8;
        case 0x404dacu: goto label_404dac;
        case 0x404db0u: goto label_404db0;
        case 0x404db4u: goto label_404db4;
        case 0x404db8u: goto label_404db8;
        case 0x404dbcu: goto label_404dbc;
        case 0x404dc0u: goto label_404dc0;
        case 0x404dc4u: goto label_404dc4;
        case 0x404dc8u: goto label_404dc8;
        case 0x404dccu: goto label_404dcc;
        case 0x404dd0u: goto label_404dd0;
        case 0x404dd4u: goto label_404dd4;
        case 0x404dd8u: goto label_404dd8;
        case 0x404ddcu: goto label_404ddc;
        case 0x404de0u: goto label_404de0;
        case 0x404de4u: goto label_404de4;
        case 0x404de8u: goto label_404de8;
        case 0x404decu: goto label_404dec;
        case 0x404df0u: goto label_404df0;
        case 0x404df4u: goto label_404df4;
        case 0x404df8u: goto label_404df8;
        case 0x404dfcu: goto label_404dfc;
        case 0x404e00u: goto label_404e00;
        case 0x404e04u: goto label_404e04;
        case 0x404e08u: goto label_404e08;
        case 0x404e0cu: goto label_404e0c;
        case 0x404e10u: goto label_404e10;
        case 0x404e14u: goto label_404e14;
        case 0x404e18u: goto label_404e18;
        case 0x404e1cu: goto label_404e1c;
        case 0x404e20u: goto label_404e20;
        case 0x404e24u: goto label_404e24;
        case 0x404e28u: goto label_404e28;
        case 0x404e2cu: goto label_404e2c;
        case 0x404e30u: goto label_404e30;
        case 0x404e34u: goto label_404e34;
        case 0x404e38u: goto label_404e38;
        case 0x404e3cu: goto label_404e3c;
        case 0x404e40u: goto label_404e40;
        case 0x404e44u: goto label_404e44;
        case 0x404e48u: goto label_404e48;
        case 0x404e4cu: goto label_404e4c;
        case 0x404e50u: goto label_404e50;
        case 0x404e54u: goto label_404e54;
        case 0x404e58u: goto label_404e58;
        case 0x404e5cu: goto label_404e5c;
        case 0x404e60u: goto label_404e60;
        case 0x404e64u: goto label_404e64;
        case 0x404e68u: goto label_404e68;
        case 0x404e6cu: goto label_404e6c;
        case 0x404e70u: goto label_404e70;
        case 0x404e74u: goto label_404e74;
        case 0x404e78u: goto label_404e78;
        case 0x404e7cu: goto label_404e7c;
        case 0x404e80u: goto label_404e80;
        case 0x404e84u: goto label_404e84;
        case 0x404e88u: goto label_404e88;
        case 0x404e8cu: goto label_404e8c;
        case 0x404e90u: goto label_404e90;
        case 0x404e94u: goto label_404e94;
        case 0x404e98u: goto label_404e98;
        case 0x404e9cu: goto label_404e9c;
        case 0x404ea0u: goto label_404ea0;
        case 0x404ea4u: goto label_404ea4;
        case 0x404ea8u: goto label_404ea8;
        case 0x404eacu: goto label_404eac;
        case 0x404eb0u: goto label_404eb0;
        case 0x404eb4u: goto label_404eb4;
        case 0x404eb8u: goto label_404eb8;
        case 0x404ebcu: goto label_404ebc;
        case 0x404ec0u: goto label_404ec0;
        case 0x404ec4u: goto label_404ec4;
        case 0x404ec8u: goto label_404ec8;
        case 0x404eccu: goto label_404ecc;
        case 0x404ed0u: goto label_404ed0;
        case 0x404ed4u: goto label_404ed4;
        case 0x404ed8u: goto label_404ed8;
        case 0x404edcu: goto label_404edc;
        case 0x404ee0u: goto label_404ee0;
        case 0x404ee4u: goto label_404ee4;
        case 0x404ee8u: goto label_404ee8;
        case 0x404eecu: goto label_404eec;
        case 0x404ef0u: goto label_404ef0;
        case 0x404ef4u: goto label_404ef4;
        case 0x404ef8u: goto label_404ef8;
        case 0x404efcu: goto label_404efc;
        case 0x404f00u: goto label_404f00;
        case 0x404f04u: goto label_404f04;
        case 0x404f08u: goto label_404f08;
        case 0x404f0cu: goto label_404f0c;
        case 0x404f10u: goto label_404f10;
        case 0x404f14u: goto label_404f14;
        case 0x404f18u: goto label_404f18;
        case 0x404f1cu: goto label_404f1c;
        case 0x404f20u: goto label_404f20;
        case 0x404f24u: goto label_404f24;
        case 0x404f28u: goto label_404f28;
        case 0x404f2cu: goto label_404f2c;
        case 0x404f30u: goto label_404f30;
        case 0x404f34u: goto label_404f34;
        case 0x404f38u: goto label_404f38;
        case 0x404f3cu: goto label_404f3c;
        case 0x404f40u: goto label_404f40;
        case 0x404f44u: goto label_404f44;
        case 0x404f48u: goto label_404f48;
        case 0x404f4cu: goto label_404f4c;
        case 0x404f50u: goto label_404f50;
        case 0x404f54u: goto label_404f54;
        case 0x404f58u: goto label_404f58;
        case 0x404f5cu: goto label_404f5c;
        case 0x404f60u: goto label_404f60;
        case 0x404f64u: goto label_404f64;
        case 0x404f68u: goto label_404f68;
        case 0x404f6cu: goto label_404f6c;
        case 0x404f70u: goto label_404f70;
        case 0x404f74u: goto label_404f74;
        case 0x404f78u: goto label_404f78;
        case 0x404f7cu: goto label_404f7c;
        case 0x404f80u: goto label_404f80;
        case 0x404f84u: goto label_404f84;
        case 0x404f88u: goto label_404f88;
        case 0x404f8cu: goto label_404f8c;
        case 0x404f90u: goto label_404f90;
        case 0x404f94u: goto label_404f94;
        case 0x404f98u: goto label_404f98;
        case 0x404f9cu: goto label_404f9c;
        case 0x404fa0u: goto label_404fa0;
        case 0x404fa4u: goto label_404fa4;
        case 0x404fa8u: goto label_404fa8;
        case 0x404facu: goto label_404fac;
        case 0x404fb0u: goto label_404fb0;
        case 0x404fb4u: goto label_404fb4;
        case 0x404fb8u: goto label_404fb8;
        case 0x404fbcu: goto label_404fbc;
        case 0x404fc0u: goto label_404fc0;
        case 0x404fc4u: goto label_404fc4;
        case 0x404fc8u: goto label_404fc8;
        case 0x404fccu: goto label_404fcc;
        case 0x404fd0u: goto label_404fd0;
        case 0x404fd4u: goto label_404fd4;
        case 0x404fd8u: goto label_404fd8;
        case 0x404fdcu: goto label_404fdc;
        case 0x404fe0u: goto label_404fe0;
        case 0x404fe4u: goto label_404fe4;
        case 0x404fe8u: goto label_404fe8;
        case 0x404fecu: goto label_404fec;
        case 0x404ff0u: goto label_404ff0;
        case 0x404ff4u: goto label_404ff4;
        case 0x404ff8u: goto label_404ff8;
        case 0x404ffcu: goto label_404ffc;
        case 0x405000u: goto label_405000;
        case 0x405004u: goto label_405004;
        case 0x405008u: goto label_405008;
        case 0x40500cu: goto label_40500c;
        case 0x405010u: goto label_405010;
        case 0x405014u: goto label_405014;
        case 0x405018u: goto label_405018;
        case 0x40501cu: goto label_40501c;
        case 0x405020u: goto label_405020;
        case 0x405024u: goto label_405024;
        case 0x405028u: goto label_405028;
        case 0x40502cu: goto label_40502c;
        case 0x405030u: goto label_405030;
        case 0x405034u: goto label_405034;
        case 0x405038u: goto label_405038;
        case 0x40503cu: goto label_40503c;
        case 0x405040u: goto label_405040;
        case 0x405044u: goto label_405044;
        case 0x405048u: goto label_405048;
        case 0x40504cu: goto label_40504c;
        case 0x405050u: goto label_405050;
        case 0x405054u: goto label_405054;
        case 0x405058u: goto label_405058;
        case 0x40505cu: goto label_40505c;
        case 0x405060u: goto label_405060;
        case 0x405064u: goto label_405064;
        case 0x405068u: goto label_405068;
        case 0x40506cu: goto label_40506c;
        case 0x405070u: goto label_405070;
        case 0x405074u: goto label_405074;
        case 0x405078u: goto label_405078;
        case 0x40507cu: goto label_40507c;
        case 0x405080u: goto label_405080;
        case 0x405084u: goto label_405084;
        case 0x405088u: goto label_405088;
        case 0x40508cu: goto label_40508c;
        case 0x405090u: goto label_405090;
        case 0x405094u: goto label_405094;
        case 0x405098u: goto label_405098;
        case 0x40509cu: goto label_40509c;
        case 0x4050a0u: goto label_4050a0;
        case 0x4050a4u: goto label_4050a4;
        case 0x4050a8u: goto label_4050a8;
        case 0x4050acu: goto label_4050ac;
        case 0x4050b0u: goto label_4050b0;
        case 0x4050b4u: goto label_4050b4;
        case 0x4050b8u: goto label_4050b8;
        case 0x4050bcu: goto label_4050bc;
        case 0x4050c0u: goto label_4050c0;
        case 0x4050c4u: goto label_4050c4;
        case 0x4050c8u: goto label_4050c8;
        case 0x4050ccu: goto label_4050cc;
        case 0x4050d0u: goto label_4050d0;
        case 0x4050d4u: goto label_4050d4;
        case 0x4050d8u: goto label_4050d8;
        case 0x4050dcu: goto label_4050dc;
        case 0x4050e0u: goto label_4050e0;
        case 0x4050e4u: goto label_4050e4;
        case 0x4050e8u: goto label_4050e8;
        case 0x4050ecu: goto label_4050ec;
        case 0x4050f0u: goto label_4050f0;
        case 0x4050f4u: goto label_4050f4;
        case 0x4050f8u: goto label_4050f8;
        case 0x4050fcu: goto label_4050fc;
        case 0x405100u: goto label_405100;
        case 0x405104u: goto label_405104;
        case 0x405108u: goto label_405108;
        case 0x40510cu: goto label_40510c;
        case 0x405110u: goto label_405110;
        case 0x405114u: goto label_405114;
        case 0x405118u: goto label_405118;
        case 0x40511cu: goto label_40511c;
        case 0x405120u: goto label_405120;
        case 0x405124u: goto label_405124;
        case 0x405128u: goto label_405128;
        case 0x40512cu: goto label_40512c;
        case 0x405130u: goto label_405130;
        case 0x405134u: goto label_405134;
        case 0x405138u: goto label_405138;
        case 0x40513cu: goto label_40513c;
        case 0x405140u: goto label_405140;
        case 0x405144u: goto label_405144;
        case 0x405148u: goto label_405148;
        case 0x40514cu: goto label_40514c;
        case 0x405150u: goto label_405150;
        case 0x405154u: goto label_405154;
        case 0x405158u: goto label_405158;
        case 0x40515cu: goto label_40515c;
        case 0x405160u: goto label_405160;
        case 0x405164u: goto label_405164;
        case 0x405168u: goto label_405168;
        case 0x40516cu: goto label_40516c;
        case 0x405170u: goto label_405170;
        case 0x405174u: goto label_405174;
        case 0x405178u: goto label_405178;
        case 0x40517cu: goto label_40517c;
        case 0x405180u: goto label_405180;
        case 0x405184u: goto label_405184;
        case 0x405188u: goto label_405188;
        case 0x40518cu: goto label_40518c;
        case 0x405190u: goto label_405190;
        case 0x405194u: goto label_405194;
        case 0x405198u: goto label_405198;
        case 0x40519cu: goto label_40519c;
        case 0x4051a0u: goto label_4051a0;
        case 0x4051a4u: goto label_4051a4;
        case 0x4051a8u: goto label_4051a8;
        case 0x4051acu: goto label_4051ac;
        case 0x4051b0u: goto label_4051b0;
        case 0x4051b4u: goto label_4051b4;
        case 0x4051b8u: goto label_4051b8;
        case 0x4051bcu: goto label_4051bc;
        case 0x4051c0u: goto label_4051c0;
        case 0x4051c4u: goto label_4051c4;
        case 0x4051c8u: goto label_4051c8;
        case 0x4051ccu: goto label_4051cc;
        case 0x4051d0u: goto label_4051d0;
        case 0x4051d4u: goto label_4051d4;
        case 0x4051d8u: goto label_4051d8;
        case 0x4051dcu: goto label_4051dc;
        case 0x4051e0u: goto label_4051e0;
        case 0x4051e4u: goto label_4051e4;
        case 0x4051e8u: goto label_4051e8;
        case 0x4051ecu: goto label_4051ec;
        case 0x4051f0u: goto label_4051f0;
        case 0x4051f4u: goto label_4051f4;
        case 0x4051f8u: goto label_4051f8;
        case 0x4051fcu: goto label_4051fc;
        case 0x405200u: goto label_405200;
        case 0x405204u: goto label_405204;
        case 0x405208u: goto label_405208;
        case 0x40520cu: goto label_40520c;
        case 0x405210u: goto label_405210;
        case 0x405214u: goto label_405214;
        case 0x405218u: goto label_405218;
        case 0x40521cu: goto label_40521c;
        case 0x405220u: goto label_405220;
        case 0x405224u: goto label_405224;
        case 0x405228u: goto label_405228;
        case 0x40522cu: goto label_40522c;
        case 0x405230u: goto label_405230;
        case 0x405234u: goto label_405234;
        case 0x405238u: goto label_405238;
        case 0x40523cu: goto label_40523c;
        case 0x405240u: goto label_405240;
        case 0x405244u: goto label_405244;
        case 0x405248u: goto label_405248;
        case 0x40524cu: goto label_40524c;
        case 0x405250u: goto label_405250;
        case 0x405254u: goto label_405254;
        case 0x405258u: goto label_405258;
        case 0x40525cu: goto label_40525c;
        case 0x405260u: goto label_405260;
        case 0x405264u: goto label_405264;
        case 0x405268u: goto label_405268;
        case 0x40526cu: goto label_40526c;
        case 0x405270u: goto label_405270;
        case 0x405274u: goto label_405274;
        case 0x405278u: goto label_405278;
        case 0x40527cu: goto label_40527c;
        case 0x405280u: goto label_405280;
        case 0x405284u: goto label_405284;
        case 0x405288u: goto label_405288;
        case 0x40528cu: goto label_40528c;
        case 0x405290u: goto label_405290;
        case 0x405294u: goto label_405294;
        case 0x405298u: goto label_405298;
        case 0x40529cu: goto label_40529c;
        case 0x4052a0u: goto label_4052a0;
        case 0x4052a4u: goto label_4052a4;
        case 0x4052a8u: goto label_4052a8;
        case 0x4052acu: goto label_4052ac;
        case 0x4052b0u: goto label_4052b0;
        case 0x4052b4u: goto label_4052b4;
        case 0x4052b8u: goto label_4052b8;
        case 0x4052bcu: goto label_4052bc;
        case 0x4052c0u: goto label_4052c0;
        case 0x4052c4u: goto label_4052c4;
        case 0x4052c8u: goto label_4052c8;
        case 0x4052ccu: goto label_4052cc;
        case 0x4052d0u: goto label_4052d0;
        case 0x4052d4u: goto label_4052d4;
        case 0x4052d8u: goto label_4052d8;
        case 0x4052dcu: goto label_4052dc;
        case 0x4052e0u: goto label_4052e0;
        case 0x4052e4u: goto label_4052e4;
        case 0x4052e8u: goto label_4052e8;
        case 0x4052ecu: goto label_4052ec;
        case 0x4052f0u: goto label_4052f0;
        case 0x4052f4u: goto label_4052f4;
        case 0x4052f8u: goto label_4052f8;
        case 0x4052fcu: goto label_4052fc;
        case 0x405300u: goto label_405300;
        case 0x405304u: goto label_405304;
        case 0x405308u: goto label_405308;
        case 0x40530cu: goto label_40530c;
        case 0x405310u: goto label_405310;
        case 0x405314u: goto label_405314;
        case 0x405318u: goto label_405318;
        case 0x40531cu: goto label_40531c;
        case 0x405320u: goto label_405320;
        case 0x405324u: goto label_405324;
        case 0x405328u: goto label_405328;
        case 0x40532cu: goto label_40532c;
        case 0x405330u: goto label_405330;
        case 0x405334u: goto label_405334;
        case 0x405338u: goto label_405338;
        case 0x40533cu: goto label_40533c;
        case 0x405340u: goto label_405340;
        case 0x405344u: goto label_405344;
        case 0x405348u: goto label_405348;
        case 0x40534cu: goto label_40534c;
        case 0x405350u: goto label_405350;
        case 0x405354u: goto label_405354;
        case 0x405358u: goto label_405358;
        case 0x40535cu: goto label_40535c;
        case 0x405360u: goto label_405360;
        case 0x405364u: goto label_405364;
        case 0x405368u: goto label_405368;
        case 0x40536cu: goto label_40536c;
        case 0x405370u: goto label_405370;
        case 0x405374u: goto label_405374;
        case 0x405378u: goto label_405378;
        case 0x40537cu: goto label_40537c;
        case 0x405380u: goto label_405380;
        case 0x405384u: goto label_405384;
        case 0x405388u: goto label_405388;
        case 0x40538cu: goto label_40538c;
        case 0x405390u: goto label_405390;
        case 0x405394u: goto label_405394;
        case 0x405398u: goto label_405398;
        case 0x40539cu: goto label_40539c;
        case 0x4053a0u: goto label_4053a0;
        case 0x4053a4u: goto label_4053a4;
        case 0x4053a8u: goto label_4053a8;
        case 0x4053acu: goto label_4053ac;
        case 0x4053b0u: goto label_4053b0;
        case 0x4053b4u: goto label_4053b4;
        case 0x4053b8u: goto label_4053b8;
        case 0x4053bcu: goto label_4053bc;
        case 0x4053c0u: goto label_4053c0;
        case 0x4053c4u: goto label_4053c4;
        case 0x4053c8u: goto label_4053c8;
        case 0x4053ccu: goto label_4053cc;
        case 0x4053d0u: goto label_4053d0;
        case 0x4053d4u: goto label_4053d4;
        case 0x4053d8u: goto label_4053d8;
        case 0x4053dcu: goto label_4053dc;
        case 0x4053e0u: goto label_4053e0;
        case 0x4053e4u: goto label_4053e4;
        case 0x4053e8u: goto label_4053e8;
        case 0x4053ecu: goto label_4053ec;
        case 0x4053f0u: goto label_4053f0;
        case 0x4053f4u: goto label_4053f4;
        case 0x4053f8u: goto label_4053f8;
        case 0x4053fcu: goto label_4053fc;
        case 0x405400u: goto label_405400;
        case 0x405404u: goto label_405404;
        case 0x405408u: goto label_405408;
        case 0x40540cu: goto label_40540c;
        case 0x405410u: goto label_405410;
        case 0x405414u: goto label_405414;
        case 0x405418u: goto label_405418;
        case 0x40541cu: goto label_40541c;
        case 0x405420u: goto label_405420;
        case 0x405424u: goto label_405424;
        case 0x405428u: goto label_405428;
        case 0x40542cu: goto label_40542c;
        case 0x405430u: goto label_405430;
        case 0x405434u: goto label_405434;
        case 0x405438u: goto label_405438;
        case 0x40543cu: goto label_40543c;
        case 0x405440u: goto label_405440;
        case 0x405444u: goto label_405444;
        case 0x405448u: goto label_405448;
        case 0x40544cu: goto label_40544c;
        case 0x405450u: goto label_405450;
        case 0x405454u: goto label_405454;
        case 0x405458u: goto label_405458;
        case 0x40545cu: goto label_40545c;
        case 0x405460u: goto label_405460;
        case 0x405464u: goto label_405464;
        case 0x405468u: goto label_405468;
        case 0x40546cu: goto label_40546c;
        case 0x405470u: goto label_405470;
        case 0x405474u: goto label_405474;
        case 0x405478u: goto label_405478;
        case 0x40547cu: goto label_40547c;
        case 0x405480u: goto label_405480;
        case 0x405484u: goto label_405484;
        case 0x405488u: goto label_405488;
        case 0x40548cu: goto label_40548c;
        case 0x405490u: goto label_405490;
        case 0x405494u: goto label_405494;
        case 0x405498u: goto label_405498;
        case 0x40549cu: goto label_40549c;
        case 0x4054a0u: goto label_4054a0;
        case 0x4054a4u: goto label_4054a4;
        case 0x4054a8u: goto label_4054a8;
        case 0x4054acu: goto label_4054ac;
        case 0x4054b0u: goto label_4054b0;
        case 0x4054b4u: goto label_4054b4;
        case 0x4054b8u: goto label_4054b8;
        case 0x4054bcu: goto label_4054bc;
        case 0x4054c0u: goto label_4054c0;
        case 0x4054c4u: goto label_4054c4;
        case 0x4054c8u: goto label_4054c8;
        case 0x4054ccu: goto label_4054cc;
        case 0x4054d0u: goto label_4054d0;
        case 0x4054d4u: goto label_4054d4;
        case 0x4054d8u: goto label_4054d8;
        case 0x4054dcu: goto label_4054dc;
        case 0x4054e0u: goto label_4054e0;
        case 0x4054e4u: goto label_4054e4;
        case 0x4054e8u: goto label_4054e8;
        case 0x4054ecu: goto label_4054ec;
        case 0x4054f0u: goto label_4054f0;
        case 0x4054f4u: goto label_4054f4;
        case 0x4054f8u: goto label_4054f8;
        case 0x4054fcu: goto label_4054fc;
        case 0x405500u: goto label_405500;
        case 0x405504u: goto label_405504;
        case 0x405508u: goto label_405508;
        case 0x40550cu: goto label_40550c;
        case 0x405510u: goto label_405510;
        case 0x405514u: goto label_405514;
        case 0x405518u: goto label_405518;
        case 0x40551cu: goto label_40551c;
        case 0x405520u: goto label_405520;
        case 0x405524u: goto label_405524;
        case 0x405528u: goto label_405528;
        case 0x40552cu: goto label_40552c;
        case 0x405530u: goto label_405530;
        case 0x405534u: goto label_405534;
        case 0x405538u: goto label_405538;
        case 0x40553cu: goto label_40553c;
        case 0x405540u: goto label_405540;
        case 0x405544u: goto label_405544;
        case 0x405548u: goto label_405548;
        case 0x40554cu: goto label_40554c;
        case 0x405550u: goto label_405550;
        case 0x405554u: goto label_405554;
        case 0x405558u: goto label_405558;
        case 0x40555cu: goto label_40555c;
        case 0x405560u: goto label_405560;
        case 0x405564u: goto label_405564;
        case 0x405568u: goto label_405568;
        case 0x40556cu: goto label_40556c;
        case 0x405570u: goto label_405570;
        case 0x405574u: goto label_405574;
        case 0x405578u: goto label_405578;
        case 0x40557cu: goto label_40557c;
        case 0x405580u: goto label_405580;
        case 0x405584u: goto label_405584;
        case 0x405588u: goto label_405588;
        case 0x40558cu: goto label_40558c;
        case 0x405590u: goto label_405590;
        case 0x405594u: goto label_405594;
        case 0x405598u: goto label_405598;
        case 0x40559cu: goto label_40559c;
        case 0x4055a0u: goto label_4055a0;
        case 0x4055a4u: goto label_4055a4;
        case 0x4055a8u: goto label_4055a8;
        case 0x4055acu: goto label_4055ac;
        case 0x4055b0u: goto label_4055b0;
        case 0x4055b4u: goto label_4055b4;
        case 0x4055b8u: goto label_4055b8;
        case 0x4055bcu: goto label_4055bc;
        case 0x4055c0u: goto label_4055c0;
        case 0x4055c4u: goto label_4055c4;
        case 0x4055c8u: goto label_4055c8;
        case 0x4055ccu: goto label_4055cc;
        case 0x4055d0u: goto label_4055d0;
        case 0x4055d4u: goto label_4055d4;
        case 0x4055d8u: goto label_4055d8;
        case 0x4055dcu: goto label_4055dc;
        case 0x4055e0u: goto label_4055e0;
        case 0x4055e4u: goto label_4055e4;
        case 0x4055e8u: goto label_4055e8;
        case 0x4055ecu: goto label_4055ec;
        case 0x4055f0u: goto label_4055f0;
        case 0x4055f4u: goto label_4055f4;
        case 0x4055f8u: goto label_4055f8;
        case 0x4055fcu: goto label_4055fc;
        default: break;
    }

    ctx->pc = 0x404c48u;

label_404c48:
    // 0x404c48: 0x27bdfa70  addiu       $sp, $sp, -0x590
    ctx->pc = 0x404c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965872));
label_404c4c:
    // 0x404c4c: 0x7fb00550  sq          $s0, 0x550($sp)
    ctx->pc = 0x404c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 16));
label_404c50:
    // 0x404c50: 0x7fb40510  sq          $s4, 0x510($sp)
    ctx->pc = 0x404c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 20));
label_404c54:
    // 0x404c54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x404c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_404c58:
    // 0x404c58: 0x7fb50500  sq          $s5, 0x500($sp)
    ctx->pc = 0x404c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 21));
label_404c5c:
    // 0x404c5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x404c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_404c60:
    // 0x404c60: 0x7fb604f0  sq          $s6, 0x4F0($sp)
    ctx->pc = 0x404c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 22));
label_404c64:
    // 0x404c64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x404c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_404c68:
    // 0x404c68: 0x7fb10540  sq          $s1, 0x540($sp)
    ctx->pc = 0x404c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 17));
label_404c6c:
    // 0x404c6c: 0x7fb20530  sq          $s2, 0x530($sp)
    ctx->pc = 0x404c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 18));
label_404c70:
    // 0x404c70: 0x7fb30520  sq          $s3, 0x520($sp)
    ctx->pc = 0x404c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 19));
label_404c74:
    // 0x404c74: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x404c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_404c78:
    // 0x404c78: 0xe7b80580  swc1        $f24, 0x580($sp)
    ctx->pc = 0x404c78u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_404c7c:
    // 0x404c7c: 0xe7b70578  swc1        $f23, 0x578($sp)
    ctx->pc = 0x404c7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_404c80:
    // 0x404c80: 0xe7b60570  swc1        $f22, 0x570($sp)
    ctx->pc = 0x404c80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_404c84:
    // 0x404c84: 0xe7b50568  swc1        $f21, 0x568($sp)
    ctx->pc = 0x404c84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_404c88:
    // 0x404c88: 0xe7b40560  swc1        $f20, 0x560($sp)
    ctx->pc = 0x404c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_404c8c:
    // 0x404c8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x404c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404c90:
    // 0x404c90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x404c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_404c94:
    // 0x404c94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x404c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_404c98:
    // 0x404c98: 0x40f809  jalr        $v0
label_404c9c:
    if (ctx->pc == 0x404C9Cu) {
        ctx->pc = 0x404C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C98u;
        // 0x404c9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CA0u;
        goto label_404ca0;
    }
    ctx->pc = 0x404C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404CA0u);
        ctx->pc = 0x404C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C98u;
        // 0x404c9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404C98u, 0x404CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404CA0u;
label_404ca0:
    // 0x404ca0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x404ca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404ca4:
    // 0x404ca4: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x404ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_404ca8:
    // 0x404ca8: 0x10400245  beqz        $v0, . + 4 + (0x245 << 2)
label_404cac:
    if (ctx->pc == 0x404CACu) {
        ctx->pc = 0x404CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CA8u;
        // 0x404cac: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CB0u;
        goto label_404cb0;
    }
    ctx->pc = 0x404CA8u;
    {
        const bool branch_taken_0x404ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CA8u;
        // 0x404cac: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404ca8) {
            ctx->pc = 0x4055C0u;
            goto label_4055c0;
        }
    }
    ctx->pc = 0x404CB0u;
label_404cb0:
    // 0x404cb0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x404cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_404cb4:
    // 0x404cb4: 0x24427a40  addiu       $v0, $v0, 0x7A40
    ctx->pc = 0x404cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31296));
label_404cb8:
    // 0x404cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x404cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_404cbc:
    // 0x404cbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x404cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_404cc0:
    // 0x404cc0: 0x800008  jr          $a0
label_404cc4:
    if (ctx->pc == 0x404CC4u) {
        ctx->pc = 0x404CC8u;
        goto label_404cc8;
    }
    ctx->pc = 0x404CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x404CC8u: goto label_404cc8;
            case 0x404CD8u: goto label_404cd8;
            case 0x404D24u: goto label_404d24;
            case 0x404F98u: goto label_404f98;
            case 0x404FB0u: goto label_404fb0;
            case 0x40500Cu: goto label_40500c;
            case 0x405248u: goto label_405248;
            case 0x4052B4u: goto label_4052b4;
            case 0x4053A8u: goto label_4053a8;
            case 0x405434u: goto label_405434;
            case 0x4055C0u: goto label_4055c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404CC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x404CC8u;
label_404cc8:
    // 0x404cc8: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x404cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_404ccc:
    // 0x404ccc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x404cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404cd0:
    // 0x404cd0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_404cd4:
    if (ctx->pc == 0x404CD4u) {
        ctx->pc = 0x404CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CD0u;
        // 0x404cd4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CD8u;
        goto label_404cd8;
    }
    ctx->pc = 0x404CD0u;
    {
        const bool branch_taken_0x404cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CD0u;
        // 0x404cd4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404cd0) {
            ctx->pc = 0x405418u;
            goto label_405418;
        }
    }
    ctx->pc = 0x404CD8u;
label_404cd8:
    // 0x404cd8: 0xc0ea146  jal         func_3A8518
label_404cdc:
    if (ctx->pc == 0x404CDCu) {
        ctx->pc = 0x404CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CD8u;
        // 0x404cdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CE0u;
        goto label_404ce0;
    }
    ctx->pc = 0x404CD8u;
    SET_GPR_U32(ctx, 31, 0x404CE0u);
    ctx->pc = 0x404CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404CD8u;
    // 0x404cdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404CD8u, 0x404CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404CE0u;
label_404ce0:
    // 0x404ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x404ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404ce4:
    // 0x404ce4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_404ce8:
    if (ctx->pc == 0x404CE8u) {
        ctx->pc = 0x404CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CE4u;
        // 0x404ce8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CECu;
        goto label_404cec;
    }
    ctx->pc = 0x404CE4u;
    {
        const bool branch_taken_0x404ce4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x404CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CE4u;
        // 0x404ce8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404ce4) {
            ctx->pc = 0x404CF4u;
            goto label_404cf4;
        }
    }
    ctx->pc = 0x404CECu;
label_404cec:
    // 0x404cec: 0x10000003  b           . + 4 + (0x3 << 2)
label_404cf0:
    if (ctx->pc == 0x404CF0u) {
        ctx->pc = 0x404CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CECu;
        // 0x404cf0: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x404CF4u;
        goto label_404cf4;
    }
    ctx->pc = 0x404CECu;
    {
        const bool branch_taken_0x404cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404CECu;
        // 0x404cf0: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404cec) {
            ctx->pc = 0x404CFCu;
            goto label_404cfc;
        }
    }
    ctx->pc = 0x404CF4u;
label_404cf4:
    // 0x404cf4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x404cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_404cf8:
    // 0x404cf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x404cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_404cfc:
    // 0x404cfc: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x404cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_404d00:
    // 0x404d00: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x404d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_404d04:
    // 0x404d04: 0x1040022f  beqz        $v0, . + 4 + (0x22F << 2)
label_404d08:
    if (ctx->pc == 0x404D08u) {
        ctx->pc = 0x404D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D04u;
        // 0x404d08: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D0Cu;
        goto label_404d0c;
    }
    ctx->pc = 0x404D04u;
    {
        const bool branch_taken_0x404d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D04u;
        // 0x404d08: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d04) {
            ctx->pc = 0x4055C4u;
            goto label_4055c4;
        }
    }
    ctx->pc = 0x404D0Cu;
label_404d0c:
    // 0x404d0c: 0xc0ea16a  jal         func_3A85A8
label_404d10:
    if (ctx->pc == 0x404D10u) {
        ctx->pc = 0x404D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D0Cu;
        // 0x404d10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D14u;
        goto label_404d14;
    }
    ctx->pc = 0x404D0Cu;
    SET_GPR_U32(ctx, 31, 0x404D14u);
    ctx->pc = 0x404D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D0Cu;
    // 0x404d10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x404D0Cu, 0x404D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D14u;
label_404d14:
    // 0x404d14: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x404d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_404d18:
    // 0x404d18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x404d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404d1c:
    // 0x404d1c: 0x100001be  b           . + 4 + (0x1BE << 2)
label_404d20:
    if (ctx->pc == 0x404D20u) {
        ctx->pc = 0x404D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D1Cu;
        // 0x404d20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D24u;
        goto label_404d24;
    }
    ctx->pc = 0x404D1Cu;
    {
        const bool branch_taken_0x404d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D1Cu;
        // 0x404d20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d1c) {
            ctx->pc = 0x405418u;
            goto label_405418;
        }
    }
    ctx->pc = 0x404D24u;
label_404d24:
    // 0x404d24: 0xc0ea146  jal         func_3A8518
label_404d28:
    if (ctx->pc == 0x404D28u) {
        ctx->pc = 0x404D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D24u;
        // 0x404d28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D2Cu;
        goto label_404d2c;
    }
    ctx->pc = 0x404D24u;
    SET_GPR_U32(ctx, 31, 0x404D2Cu);
    ctx->pc = 0x404D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D24u;
    // 0x404d28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404D24u, 0x404D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D2Cu;
label_404d2c:
    // 0x404d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404d30:
    // 0x404d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x404d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404d34:
    // 0x404d34: 0xc0ea12a  jal         func_3A84A8
label_404d38:
    if (ctx->pc == 0x404D38u) {
        ctx->pc = 0x404D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D34u;
        // 0x404d38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D3Cu;
        goto label_404d3c;
    }
    ctx->pc = 0x404D34u;
    SET_GPR_U32(ctx, 31, 0x404D3Cu);
    ctx->pc = 0x404D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D34u;
    // 0x404d38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404D34u, 0x404D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D3Cu;
label_404d3c:
    // 0x404d3c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x404d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404d40:
    // 0x404d40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x404d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_404d44:
    // 0x404d44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x404d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404d48:
    // 0x404d48: 0xc0ea12a  jal         func_3A84A8
label_404d4c:
    if (ctx->pc == 0x404D4Cu) {
        ctx->pc = 0x404D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D48u;
        // 0x404d4c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D50u;
        goto label_404d50;
    }
    ctx->pc = 0x404D48u;
    SET_GPR_U32(ctx, 31, 0x404D50u);
    ctx->pc = 0x404D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D48u;
    // 0x404d4c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x404D48u, 0x404D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D50u;
label_404d50:
    // 0x404d50: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x404d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404d54:
    // 0x404d54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x404d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404d58:
    // 0x404d58: 0xc0ea146  jal         func_3A8518
label_404d5c:
    if (ctx->pc == 0x404D5Cu) {
        ctx->pc = 0x404D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D58u;
        // 0x404d5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D60u;
        goto label_404d60;
    }
    ctx->pc = 0x404D58u;
    SET_GPR_U32(ctx, 31, 0x404D60u);
    ctx->pc = 0x404D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D58u;
    // 0x404d5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404D58u, 0x404D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D60u;
label_404d60:
    // 0x404d60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x404d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404d64:
    // 0x404d64: 0xc0ea14c  jal         func_3A8530
label_404d68:
    if (ctx->pc == 0x404D68u) {
        ctx->pc = 0x404D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D64u;
        // 0x404d68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D6Cu;
        goto label_404d6c;
    }
    ctx->pc = 0x404D64u;
    SET_GPR_U32(ctx, 31, 0x404D6Cu);
    ctx->pc = 0x404D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D64u;
    // 0x404d68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x404D64u, 0x404D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D6Cu;
label_404d6c:
    // 0x404d6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x404d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404d70:
    // 0x404d70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404d74:
    // 0x404d74: 0xc0e858c  jal         func_3A1630
label_404d78:
    if (ctx->pc == 0x404D78u) {
        ctx->pc = 0x404D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D74u;
        // 0x404d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D7Cu;
        goto label_404d7c;
    }
    ctx->pc = 0x404D74u;
    SET_GPR_U32(ctx, 31, 0x404D7Cu);
    ctx->pc = 0x404D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404D74u;
    // 0x404d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x404D74u, 0x404D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404D7Cu;
label_404d7c:
    // 0x404d7c: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x404d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_404d80:
    // 0x404d80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x404d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404d84:
    // 0x404d84: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x404d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_404d88:
    // 0x404d88: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x404d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_404d8c:
    // 0x404d8c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x404d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_404d90:
    // 0x404d90: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x404d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_404d94:
    // 0x404d94: 0x60f809  jalr        $v1
label_404d98:
    if (ctx->pc == 0x404D98u) {
        ctx->pc = 0x404D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D94u;
        // 0x404d98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404D9Cu;
        goto label_404d9c;
    }
    ctx->pc = 0x404D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x404D9Cu);
        ctx->pc = 0x404D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D94u;
        // 0x404d98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404D94u, 0x404D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404D9Cu;
label_404d9c:
    // 0x404d9c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x404d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404da0:
    // 0x404da0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x404da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_404da4:
    // 0x404da4: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x404da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_404da8:
    // 0x404da8: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x404da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_404dac:
    // 0x404dac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404db0:
    // 0x404db0: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x404db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_404db4:
    // 0x404db4: 0x40f809  jalr        $v0
label_404db8:
    if (ctx->pc == 0x404DB8u) {
        ctx->pc = 0x404DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DB4u;
        // 0x404db8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404DBCu;
        goto label_404dbc;
    }
    ctx->pc = 0x404DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404DBCu);
        ctx->pc = 0x404DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DB4u;
        // 0x404db8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404DB4u, 0x404DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404DBCu;
label_404dbc:
    // 0x404dbc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x404dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_404dc0:
    // 0x404dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x404dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404dc4:
    // 0x404dc4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x404dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_404dc8:
    // 0x404dc8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x404dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_404dcc:
    // 0x404dcc: 0xc0f809  jalr        $a2
label_404dd0:
    if (ctx->pc == 0x404DD0u) {
        ctx->pc = 0x404DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DCCu;
        // 0x404dd0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404DD4u;
        goto label_404dd4;
    }
    ctx->pc = 0x404DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x404DD4u);
        ctx->pc = 0x404DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DCCu;
        // 0x404dd0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404DCCu, 0x404DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404DD4u;
label_404dd4:
    // 0x404dd4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x404dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_404dd8:
    // 0x404dd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x404dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_404ddc:
    // 0x404ddc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x404ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_404de0:
    // 0x404de0: 0xc0e896e  jal         func_3A25B8
label_404de4:
    if (ctx->pc == 0x404DE4u) {
        ctx->pc = 0x404DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DE0u;
        // 0x404de4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404DE8u;
        goto label_404de8;
    }
    ctx->pc = 0x404DE0u;
    SET_GPR_U32(ctx, 31, 0x404DE8u);
    ctx->pc = 0x404DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404DE0u;
    // 0x404de4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x404DE0u, 0x404DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404DE8u;
label_404de8:
    // 0x404de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x404de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404dec:
    // 0x404dec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x404decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_404df0:
    // 0x404df0: 0xc0e8604  jal         func_3A1810
label_404df4:
    if (ctx->pc == 0x404DF4u) {
        ctx->pc = 0x404DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DF0u;
        // 0x404df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404DF8u;
        goto label_404df8;
    }
    ctx->pc = 0x404DF0u;
    SET_GPR_U32(ctx, 31, 0x404DF8u);
    ctx->pc = 0x404DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404DF0u;
    // 0x404df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x404DF0u, 0x404DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404DF8u;
label_404df8:
    // 0x404df8: 0xaed30010  sw          $s3, 0x10($s6)
    ctx->pc = 0x404df8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
label_404dfc:
    // 0x404dfc: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x404dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
label_404e00:
    // 0x404e00: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x404e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_404e04:
    // 0x404e04: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x404e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_404e08:
    // 0x404e08: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x404e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_404e0c:
    // 0x404e0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x404e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_404e10:
    // 0x404e10: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x404e10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_404e14:
    // 0x404e14: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x404e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_404e18:
    // 0x404e18: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x404e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_404e1c:
    // 0x404e1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x404e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_404e20:
    // 0x404e20: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x404e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_404e24:
    // 0x404e24: 0x7e860010  sq          $a2, 0x10($s4)
    ctx->pc = 0x404e24u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 6));
label_404e28:
    // 0x404e28: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x404e28u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_404e2c:
    // 0x404e2c: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
label_404e30:
    if (ctx->pc == 0x404E30u) {
        ctx->pc = 0x404E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404E2Cu;
        // 0x404e30: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404E34u;
        goto label_404e34;
    }
    ctx->pc = 0x404E2Cu;
    {
        const bool branch_taken_0x404e2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x404E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404E2Cu;
        // 0x404e30: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404e2c) {
            ctx->pc = 0x404EE0u;
            goto label_404ee0;
        }
    }
    ctx->pc = 0x404E34u;
label_404e34:
    // 0x404e34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404e38:
    // 0x404e38: 0xc0e8e26  jal         func_3A3898
label_404e3c:
    if (ctx->pc == 0x404E3Cu) {
        ctx->pc = 0x404E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404E38u;
        // 0x404e3c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404E40u;
        goto label_404e40;
    }
    ctx->pc = 0x404E38u;
    SET_GPR_U32(ctx, 31, 0x404E40u);
    ctx->pc = 0x404E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404E38u;
    // 0x404e3c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x404E38u, 0x404E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404E40u;
label_404e40:
    // 0x404e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x404e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_404e44:
    // 0x404e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x404e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_404e48:
    // 0x404e48: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x404e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_404e4c:
    // 0x404e4c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x404e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_404e50:
    // 0x404e50: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x404e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_404e54:
    // 0x404e54: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x404e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_404e58:
    // 0x404e58: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x404e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_404e5c:
    // 0x404e5c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x404e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_404e60:
    // 0x404e60: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x404e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_404e64:
    // 0x404e64: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x404e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_404e68:
    // 0x404e68: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x404e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_404e6c:
    // 0x404e6c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x404e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_404e70:
    // 0x404e70: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x404e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_404e74:
    // 0x404e74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x404e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_404e78:
    // 0x404e78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x404e78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_404e7c:
    // 0x404e7c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x404e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404e80:
    // 0x404e80: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x404e80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_404e84:
    // 0x404e84: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x404e84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_404e88:
    // 0x404e88: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x404e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404e8c:
    // 0x404e8c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x404e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_404e90:
    // 0x404e90: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x404e90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_404e94:
    // 0x404e94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x404e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404e98:
    // 0x404e98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x404e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_404e9c:
    // 0x404e9c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x404e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_404ea0:
    // 0x404ea0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x404ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_404ea4:
    // 0x404ea4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x404ea4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_404ea8:
    // 0x404ea8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x404ea8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_404eac:
    // 0x404eac: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x404eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_404eb0:
    // 0x404eb0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x404eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_404eb4:
    // 0x404eb4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x404eb4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_404eb8:
    // 0x404eb8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x404eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_404ebc:
    // 0x404ebc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x404ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_404ec0:
    // 0x404ec0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x404ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_404ec4:
    // 0x404ec4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x404ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_404ec8:
    // 0x404ec8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x404ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_404ecc:
    // 0x404ecc: 0xc136b18  jal         func_4DAC60
label_404ed0:
    if (ctx->pc == 0x404ED0u) {
        ctx->pc = 0x404ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404ECCu;
        // 0x404ed0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404ED4u;
        goto label_404ed4;
    }
    ctx->pc = 0x404ECCu;
    SET_GPR_U32(ctx, 31, 0x404ED4u);
    ctx->pc = 0x404ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404ECCu;
    // 0x404ed0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x404ECCu, 0x404ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404ED4u;
label_404ed4:
    // 0x404ed4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x404ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_404ed8:
    // 0x404ed8: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x404ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_404edc:
    // 0x404edc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x404edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_404ee0:
    // 0x404ee0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x404ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404ee4:
    // 0x404ee4: 0xc0ea176  jal         func_3A85D8
label_404ee8:
    if (ctx->pc == 0x404EE8u) {
        ctx->pc = 0x404EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404EE4u;
        // 0x404ee8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404EECu;
        goto label_404eec;
    }
    ctx->pc = 0x404EE4u;
    SET_GPR_U32(ctx, 31, 0x404EECu);
    ctx->pc = 0x404EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404EE4u;
    // 0x404ee8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x404EE4u, 0x404EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404EECu;
label_404eec:
    // 0x404eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x404eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_404ef0:
    // 0x404ef0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x404ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_404ef4:
    // 0x404ef4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x404ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_404ef8:
    // 0x404ef8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x404ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404efc:
    // 0x404efc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x404efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_404f00:
    // 0x404f00: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_404f04:
    // 0x404f04: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x404f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_404f08:
    // 0x404f08: 0x40f809  jalr        $v0
label_404f0c:
    if (ctx->pc == 0x404F0Cu) {
        ctx->pc = 0x404F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F08u;
        // 0x404f0c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F10u;
        goto label_404f10;
    }
    ctx->pc = 0x404F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404F10u);
        ctx->pc = 0x404F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F08u;
        // 0x404f0c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404F08u, 0x404F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404F10u;
label_404f10:
    // 0x404f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404f14:
    // 0x404f14: 0xc0e8e26  jal         func_3A3898
label_404f18:
    if (ctx->pc == 0x404F18u) {
        ctx->pc = 0x404F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F14u;
        // 0x404f18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F1Cu;
        goto label_404f1c;
    }
    ctx->pc = 0x404F14u;
    SET_GPR_U32(ctx, 31, 0x404F1Cu);
    ctx->pc = 0x404F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F14u;
    // 0x404f18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x404F14u, 0x404F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F1Cu;
label_404f1c:
    // 0x404f1c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x404f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_404f20:
    // 0x404f20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x404f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_404f24:
    // 0x404f24: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x404f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_404f28:
    // 0x404f28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x404f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_404f2c:
    // 0x404f2c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x404f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_404f30:
    // 0x404f30: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x404f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_404f34:
    // 0x404f34: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x404f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_404f38:
    // 0x404f38: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x404f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_404f3c:
    // 0x404f3c: 0xc0e8dee  jal         func_3A37B8
label_404f40:
    if (ctx->pc == 0x404F40u) {
        ctx->pc = 0x404F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F3Cu;
        // 0x404f40: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F44u;
        goto label_404f44;
    }
    ctx->pc = 0x404F3Cu;
    SET_GPR_U32(ctx, 31, 0x404F44u);
    ctx->pc = 0x404F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F3Cu;
    // 0x404f40: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x404F3Cu, 0x404F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F44u;
label_404f44:
    // 0x404f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x404f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_404f48:
    // 0x404f48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x404f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_404f4c:
    // 0x404f4c: 0xc0ea164  jal         func_3A8590
label_404f50:
    if (ctx->pc == 0x404F50u) {
        ctx->pc = 0x404F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F4Cu;
        // 0x404f50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F54u;
        goto label_404f54;
    }
    ctx->pc = 0x404F4Cu;
    SET_GPR_U32(ctx, 31, 0x404F54u);
    ctx->pc = 0x404F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F4Cu;
    // 0x404f50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x404F4Cu, 0x404F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F54u;
label_404f54:
    // 0x404f54: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x404f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404f58:
    // 0x404f58: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x404f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_404f5c:
    // 0x404f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x404f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404f60:
    // 0x404f60: 0xc0ea158  jal         func_3A8560
label_404f64:
    if (ctx->pc == 0x404F64u) {
        ctx->pc = 0x404F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F60u;
        // 0x404f64: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F68u;
        goto label_404f68;
    }
    ctx->pc = 0x404F60u;
    SET_GPR_U32(ctx, 31, 0x404F68u);
    ctx->pc = 0x404F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F60u;
    // 0x404f64: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x404F60u, 0x404F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F68u;
label_404f68:
    // 0x404f68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x404f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404f6c:
    // 0x404f6c: 0xc0ea16a  jal         func_3A85A8
label_404f70:
    if (ctx->pc == 0x404F70u) {
        ctx->pc = 0x404F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F6Cu;
        // 0x404f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F74u;
        goto label_404f74;
    }
    ctx->pc = 0x404F6Cu;
    SET_GPR_U32(ctx, 31, 0x404F74u);
    ctx->pc = 0x404F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F6Cu;
    // 0x404f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x404F6Cu, 0x404F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F74u;
label_404f74:
    // 0x404f74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x404f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_404f78:
    // 0x404f78: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x404f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_404f7c:
    // 0x404f7c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x404f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_404f80:
    // 0x404f80: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x404f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_404f84:
    // 0x404f84: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x404f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_404f88:
    // 0x404f88: 0x40f809  jalr        $v0
label_404f8c:
    if (ctx->pc == 0x404F8Cu) {
        ctx->pc = 0x404F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F88u;
        // 0x404f8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F90u;
        goto label_404f90;
    }
    ctx->pc = 0x404F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x404F90u);
        ctx->pc = 0x404F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F88u;
        // 0x404f8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x404F88u, 0x404F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x404F90u;
label_404f90:
    // 0x404f90: 0x1000018c  b           . + 4 + (0x18C << 2)
label_404f94:
    if (ctx->pc == 0x404F94u) {
        ctx->pc = 0x404F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F90u;
        // 0x404f94: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404F98u;
        goto label_404f98;
    }
    ctx->pc = 0x404F90u;
    {
        const bool branch_taken_0x404f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F90u;
        // 0x404f94: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404f90) {
            ctx->pc = 0x4055C4u;
            goto label_4055c4;
        }
    }
    ctx->pc = 0x404F98u;
label_404f98:
    // 0x404f98: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x404f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_404f9c:
    // 0x404f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x404f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404fa0:
    // 0x404fa0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x404fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_404fa4:
    // 0x404fa4: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x404fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_404fa8:
    // 0x404fa8: 0x10000185  b           . + 4 + (0x185 << 2)
label_404fac:
    if (ctx->pc == 0x404FACu) {
        ctx->pc = 0x404FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FA8u;
        // 0x404fac: 0xaec3001c  sw          $v1, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FB0u;
        goto label_404fb0;
    }
    ctx->pc = 0x404FA8u;
    {
        const bool branch_taken_0x404fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FA8u;
        // 0x404fac: 0xaec3001c  sw          $v1, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404fa8) {
            ctx->pc = 0x4055C0u;
            goto label_4055c0;
        }
    }
    ctx->pc = 0x404FB0u;
label_404fb0:
    // 0x404fb0: 0xc0ea146  jal         func_3A8518
label_404fb4:
    if (ctx->pc == 0x404FB4u) {
        ctx->pc = 0x404FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FB0u;
        // 0x404fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FB8u;
        goto label_404fb8;
    }
    ctx->pc = 0x404FB0u;
    SET_GPR_U32(ctx, 31, 0x404FB8u);
    ctx->pc = 0x404FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FB0u;
    // 0x404fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404FB0u, 0x404FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FB8u;
label_404fb8:
    // 0x404fb8: 0xc0ea146  jal         func_3A8518
label_404fbc:
    if (ctx->pc == 0x404FBCu) {
        ctx->pc = 0x404FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FB8u;
        // 0x404fbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FC0u;
        goto label_404fc0;
    }
    ctx->pc = 0x404FB8u;
    SET_GPR_U32(ctx, 31, 0x404FC0u);
    ctx->pc = 0x404FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FB8u;
    // 0x404fbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404FB8u, 0x404FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FC0u;
label_404fc0:
    // 0x404fc0: 0xc0ea13a  jal         func_3A84E8
label_404fc4:
    if (ctx->pc == 0x404FC4u) {
        ctx->pc = 0x404FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FC0u;
        // 0x404fc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FC8u;
        goto label_404fc8;
    }
    ctx->pc = 0x404FC0u;
    SET_GPR_U32(ctx, 31, 0x404FC8u);
    ctx->pc = 0x404FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FC0u;
    // 0x404fc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x404FC0u, 0x404FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FC8u;
label_404fc8:
    // 0x404fc8: 0xc0ea146  jal         func_3A8518
label_404fcc:
    if (ctx->pc == 0x404FCCu) {
        ctx->pc = 0x404FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FC8u;
        // 0x404fcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FD0u;
        goto label_404fd0;
    }
    ctx->pc = 0x404FC8u;
    SET_GPR_U32(ctx, 31, 0x404FD0u);
    ctx->pc = 0x404FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FC8u;
    // 0x404fcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x404FC8u, 0x404FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FD0u;
label_404fd0:
    // 0x404fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x404fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_404fd4:
    // 0x404fd4: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x404fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_404fd8:
    // 0x404fd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_404fdc:
    if (ctx->pc == 0x404FDCu) {
        ctx->pc = 0x404FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FD8u;
        // 0x404fdc: 0xaec3001c  sw          $v1, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FE0u;
        goto label_404fe0;
    }
    ctx->pc = 0x404FD8u;
    {
        const bool branch_taken_0x404fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FD8u;
        // 0x404fdc: 0xaec3001c  sw          $v1, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404fd8) {
            ctx->pc = 0x404FFCu;
            goto label_404ffc;
        }
    }
    ctx->pc = 0x404FE0u;
label_404fe0:
    // 0x404fe0: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x404fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_404fe4:
    // 0x404fe4: 0x3c041be6  lui         $a0, 0x1BE6
    ctx->pc = 0x404fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7142 << 16));
label_404fe8:
    // 0x404fe8: 0x34848950  ori         $a0, $a0, 0x8950
    ctx->pc = 0x404fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35152);
label_404fec:
    // 0x404fec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x404fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_404ff0:
    // 0x404ff0: 0xc045c64  jal         func_117190
label_404ff4:
    if (ctx->pc == 0x404FF4u) {
        ctx->pc = 0x404FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FF0u;
        // 0x404ff4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x404FF8u;
        goto label_404ff8;
    }
    ctx->pc = 0x404FF0u;
    SET_GPR_U32(ctx, 31, 0x404FF8u);
    ctx->pc = 0x404FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FF0u;
    // 0x404ff4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x404FF0u, 0x404FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FF8u;
label_404ff8:
    // 0x404ff8: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x404ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
label_404ffc:
    // 0x404ffc: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x404ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_405000:
    // 0x405000: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x405000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405004:
    // 0x405004: 0x10000104  b           . + 4 + (0x104 << 2)
label_405008:
    if (ctx->pc == 0x405008u) {
        ctx->pc = 0x405008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405004u;
        // 0x405008: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40500Cu;
        goto label_40500c;
    }
    ctx->pc = 0x405004u;
    {
        const bool branch_taken_0x405004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405004u;
        // 0x405008: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405004) {
            ctx->pc = 0x405418u;
            goto label_405418;
        }
    }
    ctx->pc = 0x40500Cu;
label_40500c:
    // 0x40500c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_405010:
    // 0x405010: 0xc0ea12a  jal         func_3A84A8
label_405014:
    if (ctx->pc == 0x405014u) {
        ctx->pc = 0x405014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405010u;
        // 0x405014: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405018u;
        goto label_405018;
    }
    ctx->pc = 0x405010u;
    SET_GPR_U32(ctx, 31, 0x405018u);
    ctx->pc = 0x405014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405010u;
    // 0x405014: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x405010u, 0x405018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405018u;
label_405018:
    // 0x405018: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x405018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40501c:
    // 0x40501c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_405020:
    // 0x405020: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x405020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405024:
    // 0x405024: 0xc0ea12a  jal         func_3A84A8
label_405028:
    if (ctx->pc == 0x405028u) {
        ctx->pc = 0x405028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405024u;
        // 0x405028: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40502Cu;
        goto label_40502c;
    }
    ctx->pc = 0x405024u;
    SET_GPR_U32(ctx, 31, 0x40502Cu);
    ctx->pc = 0x405028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405024u;
    // 0x405028: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x405024u, 0x40502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40502Cu;
label_40502c:
    // 0x40502c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x40502cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405030:
    // 0x405030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x405030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405034:
    // 0x405034: 0xc0ea146  jal         func_3A8518
label_405038:
    if (ctx->pc == 0x405038u) {
        ctx->pc = 0x405038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405034u;
        // 0x405038: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40503Cu;
        goto label_40503c;
    }
    ctx->pc = 0x405034u;
    SET_GPR_U32(ctx, 31, 0x40503Cu);
    ctx->pc = 0x405038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405034u;
    // 0x405038: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x405034u, 0x40503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40503Cu;
label_40503c:
    // 0x40503c: 0xc0ea146  jal         func_3A8518
label_405040:
    if (ctx->pc == 0x405040u) {
        ctx->pc = 0x405040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40503Cu;
        // 0x405040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405044u;
        goto label_405044;
    }
    ctx->pc = 0x40503Cu;
    SET_GPR_U32(ctx, 31, 0x405044u);
    ctx->pc = 0x405040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40503Cu;
    // 0x405040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x40503Cu, 0x405044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405044u;
label_405044:
    // 0x405044: 0xc0ea14c  jal         func_3A8530
label_405048:
    if (ctx->pc == 0x405048u) {
        ctx->pc = 0x405048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405044u;
        // 0x405048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40504Cu;
        goto label_40504c;
    }
    ctx->pc = 0x405044u;
    SET_GPR_U32(ctx, 31, 0x40504Cu);
    ctx->pc = 0x405048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405044u;
    // 0x405048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x405044u, 0x40504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40504Cu;
label_40504c:
    // 0x40504c: 0xc0ea14c  jal         func_3A8530
label_405050:
    if (ctx->pc == 0x405050u) {
        ctx->pc = 0x405050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40504Cu;
        // 0x405050: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405054u;
        goto label_405054;
    }
    ctx->pc = 0x40504Cu;
    SET_GPR_U32(ctx, 31, 0x405054u);
    ctx->pc = 0x405050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40504Cu;
    // 0x405050: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x40504Cu, 0x405054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405054u;
label_405054:
    // 0x405054: 0xc0e87c0  jal         func_3A1F00
label_405058:
    if (ctx->pc == 0x405058u) {
        ctx->pc = 0x405058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405054u;
        // 0x405058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40505Cu;
        goto label_40505c;
    }
    ctx->pc = 0x405054u;
    SET_GPR_U32(ctx, 31, 0x40505Cu);
    ctx->pc = 0x405058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405054u;
    // 0x405058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x405054u, 0x40505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40505Cu;
label_40505c:
    // 0x40505c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x40505cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_405060:
    // 0x405060: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x405060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_405064:
    // 0x405064: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x405064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405068:
    // 0x405068: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x405068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40506c:
    // 0x40506c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x40506cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_405070:
    // 0x405070: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x405070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_405074:
    // 0x405074: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x405074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_405078:
    // 0x405078: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x405078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_40507c:
    // 0x40507c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x40507cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_405080:
    // 0x405080: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x405080u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_405084:
    // 0x405084: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x405084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_405088:
    // 0x405088: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x405088u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40508c:
    // 0x40508c: 0xc136b24  jal         func_4DAC90
label_405090:
    if (ctx->pc == 0x405090u) {
        ctx->pc = 0x405090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40508Cu;
        // 0x405090: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405094u;
        goto label_405094;
    }
    ctx->pc = 0x40508Cu;
    SET_GPR_U32(ctx, 31, 0x405094u);
    ctx->pc = 0x405090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40508Cu;
    // 0x405090: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x40508Cu, 0x405094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405094u;
label_405094:
    // 0x405094: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x405094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_405098:
    // 0x405098: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x405098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_40509c:
    // 0x40509c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x40509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4050a0:
    // 0x4050a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4050a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4050a4:
    // 0x4050a4: 0xc136afa  jal         func_4DABE8
label_4050a8:
    if (ctx->pc == 0x4050A8u) {
        ctx->pc = 0x4050A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4050A4u;
        // 0x4050a8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4050ACu;
        goto label_4050ac;
    }
    ctx->pc = 0x4050A4u;
    SET_GPR_U32(ctx, 31, 0x4050ACu);
    ctx->pc = 0x4050A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4050A4u;
    // 0x4050a8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4050A4u, 0x4050ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4050ACu;
label_4050ac:
    // 0x4050ac: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x4050acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4050b0:
    // 0x4050b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4050b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_4050b4:
    // 0x4050b4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4050b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4050b8:
    // 0x4050b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4050b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4050bc:
    // 0x4050bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4050bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_4050c0:
    // 0x4050c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4050c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_4050c4:
    // 0x4050c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x4050c4u;
    // VWAITQ (Q already resolved in this runtime)
label_4050c8:
    // 0x4050c8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4050c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_4050cc:
    // 0x4050cc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x4050ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_4050d0:
    // 0x4050d0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x4050d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_4050d4:
    // 0x4050d4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x4050d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_4050d8:
    // 0x4050d8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x4050d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_4050dc:
    // 0x4050dc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x4050dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_4050e0:
    // 0x4050e0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x4050e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_4050e4:
    // 0x4050e4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x4050e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_4050e8:
    // 0x4050e8: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x4050e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_4050ec:
    // 0x4050ec: 0x8ec40024  lw          $a0, 0x24($s6)
    ctx->pc = 0x4050ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_4050f0:
    // 0x4050f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4050f4:
    if (ctx->pc == 0x4050F4u) {
        ctx->pc = 0x4050F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4050F0u;
        // 0x4050f4: 0x8e8200d8  lw          $v0, 0xD8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4050F8u;
        goto label_4050f8;
    }
    ctx->pc = 0x4050F0u;
    {
        const bool branch_taken_0x4050f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4050f0) {
            ctx->pc = 0x4050F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4050F0u;
            // 0x4050f4: 0x8e8200d8  lw          $v0, 0xD8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405108u;
            goto label_405108;
        }
    }
    ctx->pc = 0x4050F8u;
label_4050f8:
    // 0x4050f8: 0xc045c76  jal         func_1171D8
label_4050fc:
    if (ctx->pc == 0x4050FCu) {
        ctx->pc = 0x405100u;
        goto label_405100;
    }
    ctx->pc = 0x4050F8u;
    SET_GPR_U32(ctx, 31, 0x405100u);
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x4050F8u, 0x405100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405100u;
label_405100:
    // 0x405100: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x405100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
label_405104:
    // 0x405104: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x405104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_405108:
    // 0x405108: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_40510c:
    if (ctx->pc == 0x40510Cu) {
        ctx->pc = 0x40510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405108u;
        // 0x40510c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405110u;
        goto label_405110;
    }
    ctx->pc = 0x405108u;
    {
        const bool branch_taken_0x405108 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x40510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405108u;
        // 0x40510c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405108) {
            ctx->pc = 0x40516Cu;
            goto label_40516c;
        }
    }
    ctx->pc = 0x405110u;
label_405110:
    // 0x405110: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x405110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_405114:
    // 0x405114: 0xc0e92f4  jal         func_3A4BD0
label_405118:
    if (ctx->pc == 0x405118u) {
        ctx->pc = 0x405118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405114u;
        // 0x405118: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40511Cu;
        goto label_40511c;
    }
    ctx->pc = 0x405114u;
    SET_GPR_U32(ctx, 31, 0x40511Cu);
    ctx->pc = 0x405118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405114u;
    // 0x405118: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x405114u, 0x40511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40511Cu;
label_40511c:
    // 0x40511c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x40511cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_405120:
    // 0x405120: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x405120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_405124:
    // 0x405124: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x405124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_405128:
    // 0x405128: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x405128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_40512c:
    // 0x40512c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x40512cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_405130:
    // 0x405130: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x405130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_405134:
    // 0x405134: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x405134u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_405138:
    // 0x405138: 0x4a0003bf  vwaitq
    ctx->pc = 0x405138u;
    // VWAITQ (Q already resolved in this runtime)
label_40513c:
    // 0x40513c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x40513cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_405140:
    // 0x405140: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x405140u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_405144:
    // 0x405144: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x405144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_405148:
    // 0x405148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40514c:
    // 0x40514c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x40514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_405150:
    // 0x405150: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x405150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_405154:
    // 0x405154: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x405154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_405158:
    // 0x405158: 0xc136b24  jal         func_4DAC90
label_40515c:
    if (ctx->pc == 0x40515Cu) {
        ctx->pc = 0x40515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405158u;
        // 0x40515c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405160u;
        goto label_405160;
    }
    ctx->pc = 0x405158u;
    SET_GPR_U32(ctx, 31, 0x405160u);
    ctx->pc = 0x40515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405158u;
    // 0x40515c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x405158u, 0x405160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405160u;
label_405160:
    // 0x405160: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x405160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_405164:
    // 0x405164: 0x1000000f  b           . + 4 + (0xF << 2)
label_405168:
    if (ctx->pc == 0x405168u) {
        ctx->pc = 0x405168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405164u;
        // 0x405168: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40516Cu;
        goto label_40516c;
    }
    ctx->pc = 0x405164u;
    {
        const bool branch_taken_0x405164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405164u;
        // 0x405168: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405164) {
            ctx->pc = 0x4051A4u;
            goto label_4051a4;
        }
    }
    ctx->pc = 0x40516Cu;
label_40516c:
    // 0x40516c: 0xc0e92f4  jal         func_3A4BD0
label_405170:
    if (ctx->pc == 0x405170u) {
        ctx->pc = 0x405170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40516Cu;
        // 0x405170: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405174u;
        goto label_405174;
    }
    ctx->pc = 0x40516Cu;
    SET_GPR_U32(ctx, 31, 0x405174u);
    ctx->pc = 0x405170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40516Cu;
    // 0x405170: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x40516Cu, 0x405174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405174u;
label_405174:
    // 0x405174: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x405174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_405178:
    // 0x405178: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x405178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_40517c:
    // 0x40517c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x40517cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_405180:
    // 0x405180: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x405180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_405184:
    // 0x405184: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x405184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_405188:
    // 0x405188: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x405188u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_40518c:
    // 0x40518c: 0x4a0003bf  vwaitq
    ctx->pc = 0x40518cu;
    // VWAITQ (Q already resolved in this runtime)
label_405190:
    // 0x405190: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x405190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_405194:
    // 0x405194: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x405194u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_405198:
    // 0x405198: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x405198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_40519c:
    // 0x40519c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x40519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_4051a0:
    // 0x4051a0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x4051a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_4051a4:
    // 0x4051a4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x4051a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_4051a8:
    // 0x4051a8: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x4051a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4051ac:
    // 0x4051ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4051acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4051b0:
    // 0x4051b0: 0xc0e9364  jal         func_3A4D90
label_4051b4:
    if (ctx->pc == 0x4051B4u) {
        ctx->pc = 0x4051B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4051B0u;
        // 0x4051b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4051B8u;
        goto label_4051b8;
    }
    ctx->pc = 0x4051B0u;
    SET_GPR_U32(ctx, 31, 0x4051B8u);
    ctx->pc = 0x4051B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4051B0u;
    // 0x4051b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x4051B0u, 0x4051B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4051B8u;
label_4051b8:
    // 0x4051b8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x4051b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_4051bc:
    // 0x4051bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x4051bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_4051c0:
    // 0x4051c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4051c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4051c4:
    // 0x4051c4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x4051c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4051c8:
    // 0x4051c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4051c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4051cc:
    // 0x4051cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4051ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4051d0:
    // 0x4051d0: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x4051d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_4051d4:
    // 0x4051d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4051d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4051d8:
    // 0x4051d8: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x4051d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4051dc:
    // 0x4051dc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4051dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4051e0:
    // 0x4051e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4051e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4051e4:
    // 0x4051e4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4051e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4051e8:
    // 0x4051e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4051e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4051ec:
    // 0x4051ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x4051ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_4051f0:
    // 0x4051f0: 0x26317a30  addiu       $s1, $s1, 0x7A30
    ctx->pc = 0x4051f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31280));
label_4051f4:
    // 0x4051f4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x4051f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_4051f8:
    // 0x4051f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4051f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4051fc:
    // 0x4051fc: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x4051fcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
label_405200:
    // 0x405200: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x405200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_405204:
    // 0x405204: 0xc136b18  jal         func_4DAC60
label_405208:
    if (ctx->pc == 0x405208u) {
        ctx->pc = 0x405208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405204u;
        // 0x405208: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40520Cu;
        goto label_40520c;
    }
    ctx->pc = 0x405204u;
    SET_GPR_U32(ctx, 31, 0x40520Cu);
    ctx->pc = 0x405208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405204u;
    // 0x405208: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x405204u, 0x40520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40520Cu;
label_40520c:
    // 0x40520c: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x40520cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
label_405210:
    // 0x405210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x405210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_405214:
    // 0x405214: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x405214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_405218:
    // 0x405218: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x405218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40521c:
    // 0x40521c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x40521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_405220:
    // 0x405220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_405224:
    // 0x405224: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x405224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_405228:
    // 0x405228: 0xc0e9f84  jal         func_3A7E10
label_40522c:
    if (ctx->pc == 0x40522Cu) {
        ctx->pc = 0x40522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405228u;
        // 0x40522c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405230u;
        goto label_405230;
    }
    ctx->pc = 0x405228u;
    SET_GPR_U32(ctx, 31, 0x405230u);
    ctx->pc = 0x40522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405228u;
    // 0x40522c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x405228u, 0x405230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405230u;
label_405230:
    // 0x405230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405234:
    // 0x405234: 0xc0f15bc  jal         func_3C56F0
label_405238:
    if (ctx->pc == 0x405238u) {
        ctx->pc = 0x405238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405234u;
        // 0x405238: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40523Cu;
        goto label_40523c;
    }
    ctx->pc = 0x405234u;
    SET_GPR_U32(ctx, 31, 0x40523Cu);
    ctx->pc = 0x405238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405234u;
    // 0x405238: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x405234u, 0x40523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40523Cu;
label_40523c:
    // 0x40523c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x40523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_405240:
    // 0x405240: 0x100000df  b           . + 4 + (0xDF << 2)
label_405244:
    if (ctx->pc == 0x405244u) {
        ctx->pc = 0x405244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405240u;
        // 0x405244: 0xaec30018  sw          $v1, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405248u;
        goto label_405248;
    }
    ctx->pc = 0x405240u;
    {
        const bool branch_taken_0x405240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405240u;
        // 0x405244: 0xaec30018  sw          $v1, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405240) {
            ctx->pc = 0x4055C0u;
            goto label_4055c0;
        }
    }
    ctx->pc = 0x405248u;
label_405248:
    // 0x405248: 0xc0ea14c  jal         func_3A8530
label_40524c:
    if (ctx->pc == 0x40524Cu) {
        ctx->pc = 0x40524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405248u;
        // 0x40524c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405250u;
        goto label_405250;
    }
    ctx->pc = 0x405248u;
    SET_GPR_U32(ctx, 31, 0x405250u);
    ctx->pc = 0x40524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405248u;
    // 0x40524c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x405248u, 0x405250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405250u;
label_405250:
    // 0x405250: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x405250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_405254:
    // 0x405254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x405254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405258:
    // 0x405258: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x405258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40525c:
    // 0x40525c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_405260:
    // 0x405260: 0x40f809  jalr        $v0
label_405264:
    if (ctx->pc == 0x405264u) {
        ctx->pc = 0x405264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405260u;
        // 0x405264: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405268u;
        goto label_405268;
    }
    ctx->pc = 0x405260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405268u);
        ctx->pc = 0x405264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405260u;
        // 0x405264: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405260u, 0x405268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405268u;
label_405268:
    // 0x405268: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x405268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_40526c:
    // 0x40526c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x40526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_405270:
    // 0x405270: 0x544000d4  bnel        $v0, $zero, . + 4 + (0xD4 << 2)
label_405274:
    if (ctx->pc == 0x405274u) {
        ctx->pc = 0x405274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405270u;
        // 0x405274: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405278u;
        goto label_405278;
    }
    ctx->pc = 0x405270u;
    {
        const bool branch_taken_0x405270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405270) {
            ctx->pc = 0x405274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405270u;
            // 0x405274: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4055C4u;
            goto label_4055c4;
        }
    }
    ctx->pc = 0x405278u;
label_405278:
    // 0x405278: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x405278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_40527c:
    // 0x40527c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x40527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405280:
    // 0x405280: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x405280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_405284:
    // 0x405284: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x405284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_405288:
    // 0x405288: 0xc0ea176  jal         func_3A85D8
label_40528c:
    if (ctx->pc == 0x40528Cu) {
        ctx->pc = 0x40528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405288u;
        // 0x40528c: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405290u;
        goto label_405290;
    }
    ctx->pc = 0x405288u;
    SET_GPR_U32(ctx, 31, 0x405290u);
    ctx->pc = 0x40528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405288u;
    // 0x40528c: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x405288u, 0x405290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405290u;
label_405290:
    // 0x405290: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405294:
    // 0x405294: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x405294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405298:
    // 0x405298: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x405298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_40529c:
    // 0x40529c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x40529cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_4052a0:
    // 0x4052a0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x4052a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_4052a4:
    // 0x4052a4: 0x40f809  jalr        $v0
label_4052a8:
    if (ctx->pc == 0x4052A8u) {
        ctx->pc = 0x4052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052A4u;
        // 0x4052a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4052ACu;
        goto label_4052ac;
    }
    ctx->pc = 0x4052A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4052ACu);
        ctx->pc = 0x4052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052A4u;
        // 0x4052a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4052A4u, 0x4052ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4052ACu;
label_4052ac:
    // 0x4052ac: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_4052b0:
    if (ctx->pc == 0x4052B0u) {
        ctx->pc = 0x4052B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052ACu;
        // 0x4052b0: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4052B4u;
        goto label_4052b4;
    }
    ctx->pc = 0x4052ACu;
    {
        const bool branch_taken_0x4052ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4052B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052ACu;
        // 0x4052b0: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4052ac) {
            ctx->pc = 0x4055C4u;
            goto label_4055c4;
        }
    }
    ctx->pc = 0x4052B4u;
label_4052b4:
    // 0x4052b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4052b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4052b8:
    // 0x4052b8: 0xc0ea12a  jal         func_3A84A8
label_4052bc:
    if (ctx->pc == 0x4052BCu) {
        ctx->pc = 0x4052BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052B8u;
        // 0x4052bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4052C0u;
        goto label_4052c0;
    }
    ctx->pc = 0x4052B8u;
    SET_GPR_U32(ctx, 31, 0x4052C0u);
    ctx->pc = 0x4052BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052B8u;
    // 0x4052bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4052B8u, 0x4052C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052C0u;
label_4052c0:
    // 0x4052c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4052c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4052c4:
    // 0x4052c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4052c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4052c8:
    // 0x4052c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4052c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4052cc:
    // 0x4052cc: 0xc0ea12a  jal         func_3A84A8
label_4052d0:
    if (ctx->pc == 0x4052D0u) {
        ctx->pc = 0x4052D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052CCu;
        // 0x4052d0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4052D4u;
        goto label_4052d4;
    }
    ctx->pc = 0x4052CCu;
    SET_GPR_U32(ctx, 31, 0x4052D4u);
    ctx->pc = 0x4052D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052CCu;
    // 0x4052d0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4052CCu, 0x4052D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052D4u;
label_4052d4:
    // 0x4052d4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4052d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4052d8:
    // 0x4052d8: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x4052d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_4052dc:
    // 0x4052dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4052dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4052e0:
    // 0x4052e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4052e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4052e4:
    // 0x4052e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4052e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4052e8:
    // 0x4052e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x4052e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_4052ec:
    // 0x4052ec: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x4052ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4052f0:
    // 0x4052f0: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4052f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4052f4:
    // 0x4052f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4052f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4052f8:
    // 0x4052f8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x4052f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4052fc:
    // 0x4052fc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x4052fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_405300:
    // 0x405300: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x405300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_405304:
    // 0x405304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x405304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_405308:
    // 0x405308: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x405308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_40530c:
    // 0x40530c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x40530cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_405310:
    // 0x405310: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x405310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_405314:
    // 0x405314: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x405314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_405318:
    // 0x405318: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x405318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_40531c:
    // 0x40531c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x40531cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_405320:
    // 0x405320: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x405320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_405324:
    // 0x405324: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x405324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_405328:
    // 0x405328: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x405328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40532c:
    // 0x40532c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x40532cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_405330:
    // 0x405330: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x405330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_405334:
    // 0x405334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405338:
    // 0x405338: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x405338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_40533c:
    // 0x40533c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x40533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_405340:
    // 0x405340: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x405340u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_405344:
    // 0x405344: 0xc0cd518  jal         func_335460
label_405348:
    if (ctx->pc == 0x405348u) {
        ctx->pc = 0x405348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405344u;
        // 0x405348: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40534Cu;
        goto label_40534c;
    }
    ctx->pc = 0x405344u;
    SET_GPR_U32(ctx, 31, 0x40534Cu);
    ctx->pc = 0x405348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405344u;
    // 0x405348: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x405344u, 0x40534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40534Cu;
label_40534c:
    // 0x40534c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x40534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_405350:
    // 0x405350: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x405350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_405354:
    // 0x405354: 0xc136b24  jal         func_4DAC90
label_405358:
    if (ctx->pc == 0x405358u) {
        ctx->pc = 0x405358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405354u;
        // 0x405358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40535Cu;
        goto label_40535c;
    }
    ctx->pc = 0x405354u;
    SET_GPR_U32(ctx, 31, 0x40535Cu);
    ctx->pc = 0x405358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405354u;
    // 0x405358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x405354u, 0x40535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40535Cu;
label_40535c:
    // 0x40535c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x40535cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_405360:
    // 0x405360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405364:
    // 0x405364: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x405364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_405368:
    // 0x405368: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x405368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_40536c:
    // 0x40536c: 0x40f809  jalr        $v0
label_405370:
    if (ctx->pc == 0x405370u) {
        ctx->pc = 0x405370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40536Cu;
        // 0x405370: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405374u;
        goto label_405374;
    }
    ctx->pc = 0x40536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405374u);
        ctx->pc = 0x405370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40536Cu;
        // 0x405370: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40536Cu, 0x405374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405374u;
label_405374:
    // 0x405374: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x405374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_405378:
    // 0x405378: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x405378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40537c:
    // 0x40537c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x40537cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_405380:
    // 0x405380: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x405380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_405384:
    // 0x405384: 0x40f809  jalr        $v0
label_405388:
    if (ctx->pc == 0x405388u) {
        ctx->pc = 0x405388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405384u;
        // 0x405388: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40538Cu;
        goto label_40538c;
    }
    ctx->pc = 0x405384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40538Cu);
        ctx->pc = 0x405388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405384u;
        // 0x405388: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405384u, 0x40538Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40538Cu;
label_40538c:
    // 0x40538c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_405390:
    // 0x405390: 0x3c040420  lui         $a0, 0x420
    ctx->pc = 0x405390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1056 << 16));
label_405394:
    // 0x405394: 0xaec3001c  sw          $v1, 0x1C($s6)
    ctx->pc = 0x405394u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 3));
label_405398:
    // 0x405398: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x405398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_40539c:
    // 0x40539c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x40539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4053a0:
    // 0x4053a0: 0x10000087  b           . + 4 + (0x87 << 2)
label_4053a4:
    if (ctx->pc == 0x4053A4u) {
        ctx->pc = 0x4053A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053A0u;
        // 0x4053a4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4053A8u;
        goto label_4053a8;
    }
    ctx->pc = 0x4053A0u;
    {
        const bool branch_taken_0x4053a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4053A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053A0u;
        // 0x4053a4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4053a0) {
            ctx->pc = 0x4055C0u;
            goto label_4055c0;
        }
    }
    ctx->pc = 0x4053A8u;
label_4053a8:
    // 0x4053a8: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x4053a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_4053ac:
    // 0x4053ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4053acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4053b0:
    // 0x4053b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x4053b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4053b4:
    // 0x4053b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4053b8:
    // 0x4053b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4053b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4053bc:
    // 0x4053bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4053bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4053c0:
    // 0x4053c0: 0x60f809  jalr        $v1
label_4053c4:
    if (ctx->pc == 0x4053C4u) {
        ctx->pc = 0x4053C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053C0u;
        // 0x4053c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4053C8u;
        goto label_4053c8;
    }
    ctx->pc = 0x4053C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4053C8u);
        ctx->pc = 0x4053C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053C0u;
        // 0x4053c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4053C0u, 0x4053C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4053C8u;
label_4053c8:
    // 0x4053c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4053c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4053cc:
    // 0x4053cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4053ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4053d0:
    // 0x4053d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4053d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4053d4:
    // 0x4053d4: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x4053d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_4053d8:
    // 0x4053d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4053d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4053dc:
    // 0x4053dc: 0xc0e8b36  jal         func_3A2CD8
label_4053e0:
    if (ctx->pc == 0x4053E0u) {
        ctx->pc = 0x4053E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053DCu;
        // 0x4053e0: 0xe7a004d0  swc1        $f0, 0x4D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4053E4u;
        goto label_4053e4;
    }
    ctx->pc = 0x4053DCu;
    SET_GPR_U32(ctx, 31, 0x4053E4u);
    ctx->pc = 0x4053E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4053DCu;
    // 0x4053e0: 0xe7a004d0  swc1        $f0, 0x4D0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x4053DCu, 0x4053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4053E4u;
label_4053e4:
    // 0x4053e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4053e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4053e8:
    // 0x4053e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4053e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4053ec:
    // 0x4053ec: 0xc0e90ca  jal         func_3A4328
label_4053f0:
    if (ctx->pc == 0x4053F0u) {
        ctx->pc = 0x4053F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4053ECu;
        // 0x4053f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4053F4u;
        goto label_4053f4;
    }
    ctx->pc = 0x4053ECu;
    SET_GPR_U32(ctx, 31, 0x4053F4u);
    ctx->pc = 0x4053F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4053ECu;
    // 0x4053f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x4053ECu, 0x4053F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4053F4u;
label_4053f4:
    // 0x4053f4: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x4053f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_4053f8:
    // 0x4053f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4053f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4053fc:
    // 0x4053fc: 0x27a704d0  addiu       $a3, $sp, 0x4D0
    ctx->pc = 0x4053fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_405400:
    // 0x405400: 0x24c67620  addiu       $a2, $a2, 0x7620
    ctx->pc = 0x405400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30240));
label_405404:
    // 0x405404: 0xc0e723e  jal         func_39C8F8
label_405408:
    if (ctx->pc == 0x405408u) {
        ctx->pc = 0x405408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405404u;
        // 0x405408: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40540Cu;
        goto label_40540c;
    }
    ctx->pc = 0x405404u;
    SET_GPR_U32(ctx, 31, 0x40540Cu);
    ctx->pc = 0x405408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405404u;
    // 0x405408: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C8F8u, 0x405404u, 0x40540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40540Cu;
label_40540c:
    // 0x40540c: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x40540cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_405410:
    // 0x405410: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x405410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405414:
    // 0x405414: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x405414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_405418:
    // 0x405418: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x405418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40541c:
    // 0x40541c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40541cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_405420:
    // 0x405420: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x405420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_405424:
    // 0x405424: 0x60f809  jalr        $v1
label_405428:
    if (ctx->pc == 0x405428u) {
        ctx->pc = 0x405428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405424u;
        // 0x405428: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40542Cu;
        goto label_40542c;
    }
    ctx->pc = 0x405424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40542Cu);
        ctx->pc = 0x405428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405424u;
        // 0x405428: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405424u, 0x40542Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40542Cu;
label_40542c:
    // 0x40542c: 0x10000065  b           . + 4 + (0x65 << 2)
label_405430:
    if (ctx->pc == 0x405430u) {
        ctx->pc = 0x405430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40542Cu;
        // 0x405430: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405434u;
        goto label_405434;
    }
    ctx->pc = 0x40542Cu;
    {
        const bool branch_taken_0x40542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40542Cu;
        // 0x405430: 0x7bb00550  lq          $s0, 0x550($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40542c) {
            ctx->pc = 0x4055C4u;
            goto label_4055c4;
        }
    }
    ctx->pc = 0x405434u;
label_405434:
    // 0x405434: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x405434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_405438:
    // 0x405438: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x405438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40543c:
    // 0x40543c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_405440:
    // 0x405440: 0x40f809  jalr        $v0
label_405444:
    if (ctx->pc == 0x405444u) {
        ctx->pc = 0x405444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405440u;
        // 0x405444: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405448u;
        goto label_405448;
    }
    ctx->pc = 0x405440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405448u);
        ctx->pc = 0x405444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405440u;
        // 0x405444: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405440u, 0x405448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405448u;
label_405448:
    // 0x405448: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x405448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_40544c:
    // 0x40544c: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_405450:
    if (ctx->pc == 0x405450u) {
        ctx->pc = 0x405450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40544Cu;
        // 0x405450: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405454u;
        goto label_405454;
    }
    ctx->pc = 0x40544Cu;
    {
        const bool branch_taken_0x40544c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40544c) {
            ctx->pc = 0x405450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40544Cu;
            // 0x405450: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4055B0u;
            goto label_4055b0;
        }
    }
    ctx->pc = 0x405454u;
label_405454:
    // 0x405454: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x405454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_405458:
    // 0x405458: 0xc0ea12a  jal         func_3A84A8
label_40545c:
    if (ctx->pc == 0x40545Cu) {
        ctx->pc = 0x40545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405458u;
        // 0x40545c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405460u;
        goto label_405460;
    }
    ctx->pc = 0x405458u;
    SET_GPR_U32(ctx, 31, 0x405460u);
    ctx->pc = 0x40545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405458u;
    // 0x40545c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x405458u, 0x405460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405460u;
label_405460:
    // 0x405460: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x405460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405464:
    // 0x405464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x405464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405468:
    // 0x405468: 0xc0ea14c  jal         func_3A8530
label_40546c:
    if (ctx->pc == 0x40546Cu) {
        ctx->pc = 0x40546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405468u;
        // 0x40546c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405470u;
        goto label_405470;
    }
    ctx->pc = 0x405468u;
    SET_GPR_U32(ctx, 31, 0x405470u);
    ctx->pc = 0x40546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405468u;
    // 0x40546c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x405468u, 0x405470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405470u;
label_405470:
    // 0x405470: 0xc0e8630  jal         func_3A18C0
label_405474:
    if (ctx->pc == 0x405474u) {
        ctx->pc = 0x405474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405470u;
        // 0x405474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405478u;
        goto label_405478;
    }
    ctx->pc = 0x405470u;
    SET_GPR_U32(ctx, 31, 0x405478u);
    ctx->pc = 0x405474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405470u;
    // 0x405474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x405470u, 0x405478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405478u;
label_405478:
    // 0x405478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x405478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40547c:
    // 0x40547c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x40547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_405480:
    // 0x405480: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x405480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_405484:
    // 0x405484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x405484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_405488:
    // 0x405488: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x405488u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
label_40548c:
    // 0x40548c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x40548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_405490:
    // 0x405490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x405490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_405494:
    // 0x405494: 0xc0e8616  jal         func_3A1858
label_405498:
    if (ctx->pc == 0x405498u) {
        ctx->pc = 0x405498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405494u;
        // 0x405498: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40549Cu;
        goto label_40549c;
    }
    ctx->pc = 0x405494u;
    SET_GPR_U32(ctx, 31, 0x40549Cu);
    ctx->pc = 0x405498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405494u;
    // 0x405498: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x405494u, 0x40549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40549Cu;
label_40549c:
    // 0x40549c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_4054a0:
    if (ctx->pc == 0x4054A0u) {
        ctx->pc = 0x4054A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40549Cu;
        // 0x4054a0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4054A4u;
        goto label_4054a4;
    }
    ctx->pc = 0x40549Cu;
    {
        const bool branch_taken_0x40549c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4054A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40549Cu;
        // 0x4054a0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40549c) {
            ctx->pc = 0x405578u;
            goto label_405578;
        }
    }
    ctx->pc = 0x4054A4u;
label_4054a4:
    // 0x4054a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4054a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4054a8:
    // 0x4054a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4054a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4054ac:
    // 0x4054ac: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4054acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4054b0:
    // 0x4054b0: 0xc0e911e  jal         func_3A4478
label_4054b4:
    if (ctx->pc == 0x4054B4u) {
        ctx->pc = 0x4054B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054B0u;
        // 0x4054b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4054B8u;
        goto label_4054b8;
    }
    ctx->pc = 0x4054B0u;
    SET_GPR_U32(ctx, 31, 0x4054B8u);
    ctx->pc = 0x4054B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4054B0u;
    // 0x4054b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x4054B0u, 0x4054B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4054B8u;
label_4054b8:
    // 0x4054b8: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x4054b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
label_4054bc:
    // 0x4054bc: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x4054bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_4054c0:
    // 0x4054c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4054c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4054c4:
    // 0x4054c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4054c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4054c8:
    // 0x4054c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4054c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4054cc:
    // 0x4054cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4054ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4054d0:
    // 0x4054d0: 0xc136b30  jal         func_4DACC0
label_4054d4:
    if (ctx->pc == 0x4054D4u) {
        ctx->pc = 0x4054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054D0u;
        // 0x4054d4: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4054D8u;
        goto label_4054d8;
    }
    ctx->pc = 0x4054D0u;
    SET_GPR_U32(ctx, 31, 0x4054D8u);
    ctx->pc = 0x4054D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4054D0u;
    // 0x4054d4: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x4054D0u, 0x4054D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4054D8u;
label_4054d8:
    // 0x4054d8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x4054d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4054dc:
    // 0x4054dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4054dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4054e0:
    // 0x4054e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4054e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4054e4:
    // 0x4054e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4054e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4054e8:
    // 0x4054e8: 0xe7b8001c  swc1        $f24, 0x1C($sp)
    ctx->pc = 0x4054e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4054ec:
    // 0x4054ec: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x4054ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_4054f0:
    // 0x4054f0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x4054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4054f4:
    // 0x4054f4: 0x40f809  jalr        $v0
label_4054f8:
    if (ctx->pc == 0x4054F8u) {
        ctx->pc = 0x4054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054F4u;
        // 0x4054f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4054FCu;
        goto label_4054fc;
    }
    ctx->pc = 0x4054F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4054FCu);
        ctx->pc = 0x4054F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054F4u;
        // 0x4054f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4054F4u, 0x4054FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4054FCu;
label_4054fc:
    // 0x4054fc: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x4054fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_405500:
    // 0x405500: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x405500u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_405504:
    // 0x405504: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x405504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_405508:
    // 0x405508: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x405508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40550c:
    // 0x40550c: 0x86510078  lh          $s1, 0x78($s2)
    ctx->pc = 0x40550cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
label_405510:
    // 0x405510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405514:
    // 0x405514: 0x26520078  addiu       $s2, $s2, 0x78
    ctx->pc = 0x405514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_405518:
    // 0x405518: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x405518u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40551c:
    // 0x40551c: 0xc0cd518  jal         func_335460
label_405520:
    if (ctx->pc == 0x405520u) {
        ctx->pc = 0x405520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40551Cu;
        // 0x405520: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405524u;
        goto label_405524;
    }
    ctx->pc = 0x40551Cu;
    SET_GPR_U32(ctx, 31, 0x405524u);
    ctx->pc = 0x405520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40551Cu;
    // 0x405520: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40551Cu, 0x405524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405524u;
label_405524:
    // 0x405524: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x405524u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_405528:
    // 0x405528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40552c:
    // 0x40552c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40552cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_405530:
    // 0x405530: 0xc0cd518  jal         func_335460
label_405534:
    if (ctx->pc == 0x405534u) {
        ctx->pc = 0x405534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405530u;
        // 0x405534: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x405538u;
        goto label_405538;
    }
    ctx->pc = 0x405530u;
    SET_GPR_U32(ctx, 31, 0x405538u);
    ctx->pc = 0x405534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405530u;
    // 0x405534: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x405530u, 0x405538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405538u;
label_405538:
    // 0x405538: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x405538u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40553c:
    // 0x40553c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405540:
    // 0x405540: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x405540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_405544:
    // 0x405544: 0xc0cd518  jal         func_335460
label_405548:
    if (ctx->pc == 0x405548u) {
        ctx->pc = 0x405548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405544u;
        // 0x405548: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40554Cu;
        goto label_40554c;
    }
    ctx->pc = 0x405544u;
    SET_GPR_U32(ctx, 31, 0x40554Cu);
    ctx->pc = 0x405548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405544u;
    // 0x405548: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x405544u, 0x40554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40554Cu;
label_40554c:
    // 0x40554c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40554cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_405550:
    // 0x405550: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x405550u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_405554:
    // 0x405554: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x405554u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_405558:
    // 0x405558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40555c:
    // 0x40555c: 0xe7b8003c  swc1        $f24, 0x3C($sp)
    ctx->pc = 0x40555cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_405560:
    // 0x405560: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x405560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_405564:
    // 0x405564: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x405564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_405568:
    // 0x405568: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x405568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_40556c:
    // 0x40556c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x40556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_405570:
    // 0x405570: 0x60f809  jalr        $v1
label_405574:
    if (ctx->pc == 0x405574u) {
        ctx->pc = 0x405574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405570u;
        // 0x405574: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405578u;
        goto label_405578;
    }
    ctx->pc = 0x405570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x405578u);
        ctx->pc = 0x405574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405570u;
        // 0x405574: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405570u, 0x405578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405578u;
label_405578:
    // 0x405578: 0xaec00018  sw          $zero, 0x18($s6)
    ctx->pc = 0x405578u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 0));
label_40557c:
    // 0x40557c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x40557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_405580:
    // 0x405580: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405584:
    // 0x405584: 0xc0ea164  jal         func_3A8590
label_405588:
    if (ctx->pc == 0x405588u) {
        ctx->pc = 0x405588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405584u;
        // 0x405588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40558Cu;
        goto label_40558c;
    }
    ctx->pc = 0x405584u;
    SET_GPR_U32(ctx, 31, 0x40558Cu);
    ctx->pc = 0x405588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405584u;
    // 0x405588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x405584u, 0x40558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40558Cu;
label_40558c:
    // 0x40558c: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x40558cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_405590:
    // 0x405590: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x405590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_405594:
    // 0x405594: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x405594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_405598:
    // 0x405598: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x405598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40559c:
    // 0x40559c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40559cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4055a0:
    // 0x4055a0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4055a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4055a4:
    // 0x4055a4: 0x60f809  jalr        $v1
label_4055a8:
    if (ctx->pc == 0x4055A8u) {
        ctx->pc = 0x4055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4055A4u;
        // 0x4055a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4055ACu;
        goto label_4055ac;
    }
    ctx->pc = 0x4055A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4055ACu);
        ctx->pc = 0x4055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4055A4u;
        // 0x4055a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4055A4u, 0x4055ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4055ACu;
label_4055ac:
    // 0x4055ac: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x4055acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_4055b0:
    // 0x4055b0: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x4055b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_4055b4:
    // 0x4055b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4055b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4055b8:
    // 0x4055b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4055b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4055bc:
    // 0x4055bc: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x4055bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_4055c0:
    // 0x4055c0: 0x7bb00550  lq          $s0, 0x550($sp)
    ctx->pc = 0x4055c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_4055c4:
    // 0x4055c4: 0x7bb10540  lq          $s1, 0x540($sp)
    ctx->pc = 0x4055c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_4055c8:
    // 0x4055c8: 0x7bb20530  lq          $s2, 0x530($sp)
    ctx->pc = 0x4055c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_4055cc:
    // 0x4055cc: 0x7bb30520  lq          $s3, 0x520($sp)
    ctx->pc = 0x4055ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_4055d0:
    // 0x4055d0: 0x7bb40510  lq          $s4, 0x510($sp)
    ctx->pc = 0x4055d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_4055d4:
    // 0x4055d4: 0x7bb50500  lq          $s5, 0x500($sp)
    ctx->pc = 0x4055d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_4055d8:
    // 0x4055d8: 0x7bb604f0  lq          $s6, 0x4F0($sp)
    ctx->pc = 0x4055d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_4055dc:
    // 0x4055dc: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x4055dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_4055e0:
    // 0x4055e0: 0xc7b80580  lwc1        $f24, 0x580($sp)
    ctx->pc = 0x4055e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4055e4:
    // 0x4055e4: 0xc7b70578  lwc1        $f23, 0x578($sp)
    ctx->pc = 0x4055e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4055e8:
    // 0x4055e8: 0xc7b60570  lwc1        $f22, 0x570($sp)
    ctx->pc = 0x4055e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4055ec:
    // 0x4055ec: 0xc7b50568  lwc1        $f21, 0x568($sp)
    ctx->pc = 0x4055ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4055f0:
    // 0x4055f0: 0xc7b40560  lwc1        $f20, 0x560($sp)
    ctx->pc = 0x4055f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4055f4:
    // 0x4055f4: 0x3e00008  jr          $ra
label_4055f8:
    if (ctx->pc == 0x4055F8u) {
        ctx->pc = 0x4055F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4055F4u;
        // 0x4055f8: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4055FCu;
        goto label_4055fc;
    }
    ctx->pc = 0x4055F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4055F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4055F4u;
        // 0x4055f8: 0x27bd0590  addiu       $sp, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4055F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4055FCu;
label_4055fc:
    // 0x4055fc: 0x0  nop
    ctx->pc = 0x4055fcu;
    // NOP
    ctx->pc = 0x405600u;
}
