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

// Function: sub_00281C20
// Address: 0x281c20 - 0x282370
void sub_00281C20_0x281c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281C20_0x281c20");
#endif

    switch (ctx->pc) {
        case 0x281c20u: goto label_281c20;
        case 0x281c24u: goto label_281c24;
        case 0x281c28u: goto label_281c28;
        case 0x281c2cu: goto label_281c2c;
        case 0x281c30u: goto label_281c30;
        case 0x281c34u: goto label_281c34;
        case 0x281c38u: goto label_281c38;
        case 0x281c3cu: goto label_281c3c;
        case 0x281c40u: goto label_281c40;
        case 0x281c44u: goto label_281c44;
        case 0x281c48u: goto label_281c48;
        case 0x281c4cu: goto label_281c4c;
        case 0x281c50u: goto label_281c50;
        case 0x281c54u: goto label_281c54;
        case 0x281c58u: goto label_281c58;
        case 0x281c5cu: goto label_281c5c;
        case 0x281c60u: goto label_281c60;
        case 0x281c64u: goto label_281c64;
        case 0x281c68u: goto label_281c68;
        case 0x281c6cu: goto label_281c6c;
        case 0x281c70u: goto label_281c70;
        case 0x281c74u: goto label_281c74;
        case 0x281c78u: goto label_281c78;
        case 0x281c7cu: goto label_281c7c;
        case 0x281c80u: goto label_281c80;
        case 0x281c84u: goto label_281c84;
        case 0x281c88u: goto label_281c88;
        case 0x281c8cu: goto label_281c8c;
        case 0x281c90u: goto label_281c90;
        case 0x281c94u: goto label_281c94;
        case 0x281c98u: goto label_281c98;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca0u: goto label_281ca0;
        case 0x281ca4u: goto label_281ca4;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cacu: goto label_281cac;
        case 0x281cb0u: goto label_281cb0;
        case 0x281cb4u: goto label_281cb4;
        case 0x281cb8u: goto label_281cb8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc0u: goto label_281cc0;
        case 0x281cc4u: goto label_281cc4;
        case 0x281cc8u: goto label_281cc8;
        case 0x281cccu: goto label_281ccc;
        case 0x281cd0u: goto label_281cd0;
        case 0x281cd4u: goto label_281cd4;
        case 0x281cd8u: goto label_281cd8;
        case 0x281cdcu: goto label_281cdc;
        case 0x281ce0u: goto label_281ce0;
        case 0x281ce4u: goto label_281ce4;
        case 0x281ce8u: goto label_281ce8;
        case 0x281cecu: goto label_281cec;
        case 0x281cf0u: goto label_281cf0;
        case 0x281cf4u: goto label_281cf4;
        case 0x281cf8u: goto label_281cf8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d00u: goto label_281d00;
        case 0x281d04u: goto label_281d04;
        case 0x281d08u: goto label_281d08;
        case 0x281d0cu: goto label_281d0c;
        case 0x281d10u: goto label_281d10;
        case 0x281d14u: goto label_281d14;
        case 0x281d18u: goto label_281d18;
        case 0x281d1cu: goto label_281d1c;
        case 0x281d20u: goto label_281d20;
        case 0x281d24u: goto label_281d24;
        case 0x281d28u: goto label_281d28;
        case 0x281d2cu: goto label_281d2c;
        case 0x281d30u: goto label_281d30;
        case 0x281d34u: goto label_281d34;
        case 0x281d38u: goto label_281d38;
        case 0x281d3cu: goto label_281d3c;
        case 0x281d40u: goto label_281d40;
        case 0x281d44u: goto label_281d44;
        case 0x281d48u: goto label_281d48;
        case 0x281d4cu: goto label_281d4c;
        case 0x281d50u: goto label_281d50;
        case 0x281d54u: goto label_281d54;
        case 0x281d58u: goto label_281d58;
        case 0x281d5cu: goto label_281d5c;
        case 0x281d60u: goto label_281d60;
        case 0x281d64u: goto label_281d64;
        case 0x281d68u: goto label_281d68;
        case 0x281d6cu: goto label_281d6c;
        case 0x281d70u: goto label_281d70;
        case 0x281d74u: goto label_281d74;
        case 0x281d78u: goto label_281d78;
        case 0x281d7cu: goto label_281d7c;
        case 0x281d80u: goto label_281d80;
        case 0x281d84u: goto label_281d84;
        case 0x281d88u: goto label_281d88;
        case 0x281d8cu: goto label_281d8c;
        case 0x281d90u: goto label_281d90;
        case 0x281d94u: goto label_281d94;
        case 0x281d98u: goto label_281d98;
        case 0x281d9cu: goto label_281d9c;
        case 0x281da0u: goto label_281da0;
        case 0x281da4u: goto label_281da4;
        case 0x281da8u: goto label_281da8;
        case 0x281dacu: goto label_281dac;
        case 0x281db0u: goto label_281db0;
        case 0x281db4u: goto label_281db4;
        case 0x281db8u: goto label_281db8;
        case 0x281dbcu: goto label_281dbc;
        case 0x281dc0u: goto label_281dc0;
        case 0x281dc4u: goto label_281dc4;
        case 0x281dc8u: goto label_281dc8;
        case 0x281dccu: goto label_281dcc;
        case 0x281dd0u: goto label_281dd0;
        case 0x281dd4u: goto label_281dd4;
        case 0x281dd8u: goto label_281dd8;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de0u: goto label_281de0;
        case 0x281de4u: goto label_281de4;
        case 0x281de8u: goto label_281de8;
        case 0x281decu: goto label_281dec;
        case 0x281df0u: goto label_281df0;
        case 0x281df4u: goto label_281df4;
        case 0x281df8u: goto label_281df8;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e00u: goto label_281e00;
        case 0x281e04u: goto label_281e04;
        case 0x281e08u: goto label_281e08;
        case 0x281e0cu: goto label_281e0c;
        case 0x281e10u: goto label_281e10;
        case 0x281e14u: goto label_281e14;
        case 0x281e18u: goto label_281e18;
        case 0x281e1cu: goto label_281e1c;
        case 0x281e20u: goto label_281e20;
        case 0x281e24u: goto label_281e24;
        case 0x281e28u: goto label_281e28;
        case 0x281e2cu: goto label_281e2c;
        case 0x281e30u: goto label_281e30;
        case 0x281e34u: goto label_281e34;
        case 0x281e38u: goto label_281e38;
        case 0x281e3cu: goto label_281e3c;
        case 0x281e40u: goto label_281e40;
        case 0x281e44u: goto label_281e44;
        case 0x281e48u: goto label_281e48;
        case 0x281e4cu: goto label_281e4c;
        case 0x281e50u: goto label_281e50;
        case 0x281e54u: goto label_281e54;
        case 0x281e58u: goto label_281e58;
        case 0x281e5cu: goto label_281e5c;
        case 0x281e60u: goto label_281e60;
        case 0x281e64u: goto label_281e64;
        case 0x281e68u: goto label_281e68;
        case 0x281e6cu: goto label_281e6c;
        case 0x281e70u: goto label_281e70;
        case 0x281e74u: goto label_281e74;
        case 0x281e78u: goto label_281e78;
        case 0x281e7cu: goto label_281e7c;
        case 0x281e80u: goto label_281e80;
        case 0x281e84u: goto label_281e84;
        case 0x281e88u: goto label_281e88;
        case 0x281e8cu: goto label_281e8c;
        case 0x281e90u: goto label_281e90;
        case 0x281e94u: goto label_281e94;
        case 0x281e98u: goto label_281e98;
        case 0x281e9cu: goto label_281e9c;
        case 0x281ea0u: goto label_281ea0;
        case 0x281ea4u: goto label_281ea4;
        case 0x281ea8u: goto label_281ea8;
        case 0x281eacu: goto label_281eac;
        case 0x281eb0u: goto label_281eb0;
        case 0x281eb4u: goto label_281eb4;
        case 0x281eb8u: goto label_281eb8;
        case 0x281ebcu: goto label_281ebc;
        case 0x281ec0u: goto label_281ec0;
        case 0x281ec4u: goto label_281ec4;
        case 0x281ec8u: goto label_281ec8;
        case 0x281eccu: goto label_281ecc;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ed4u: goto label_281ed4;
        case 0x281ed8u: goto label_281ed8;
        case 0x281edcu: goto label_281edc;
        case 0x281ee0u: goto label_281ee0;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ee8u: goto label_281ee8;
        case 0x281eecu: goto label_281eec;
        case 0x281ef0u: goto label_281ef0;
        case 0x281ef4u: goto label_281ef4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281efcu: goto label_281efc;
        case 0x281f00u: goto label_281f00;
        case 0x281f04u: goto label_281f04;
        case 0x281f08u: goto label_281f08;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f10u: goto label_281f10;
        case 0x281f14u: goto label_281f14;
        case 0x281f18u: goto label_281f18;
        case 0x281f1cu: goto label_281f1c;
        case 0x281f20u: goto label_281f20;
        case 0x281f24u: goto label_281f24;
        case 0x281f28u: goto label_281f28;
        case 0x281f2cu: goto label_281f2c;
        case 0x281f30u: goto label_281f30;
        case 0x281f34u: goto label_281f34;
        case 0x281f38u: goto label_281f38;
        case 0x281f3cu: goto label_281f3c;
        case 0x281f40u: goto label_281f40;
        case 0x281f44u: goto label_281f44;
        case 0x281f48u: goto label_281f48;
        case 0x281f4cu: goto label_281f4c;
        case 0x281f50u: goto label_281f50;
        case 0x281f54u: goto label_281f54;
        case 0x281f58u: goto label_281f58;
        case 0x281f5cu: goto label_281f5c;
        case 0x281f60u: goto label_281f60;
        case 0x281f64u: goto label_281f64;
        case 0x281f68u: goto label_281f68;
        case 0x281f6cu: goto label_281f6c;
        case 0x281f70u: goto label_281f70;
        case 0x281f74u: goto label_281f74;
        case 0x281f78u: goto label_281f78;
        case 0x281f7cu: goto label_281f7c;
        case 0x281f80u: goto label_281f80;
        case 0x281f84u: goto label_281f84;
        case 0x281f88u: goto label_281f88;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        case 0x282050u: goto label_282050;
        case 0x282054u: goto label_282054;
        case 0x282058u: goto label_282058;
        case 0x28205cu: goto label_28205c;
        case 0x282060u: goto label_282060;
        case 0x282064u: goto label_282064;
        case 0x282068u: goto label_282068;
        case 0x28206cu: goto label_28206c;
        case 0x282070u: goto label_282070;
        case 0x282074u: goto label_282074;
        case 0x282078u: goto label_282078;
        case 0x28207cu: goto label_28207c;
        case 0x282080u: goto label_282080;
        case 0x282084u: goto label_282084;
        case 0x282088u: goto label_282088;
        case 0x28208cu: goto label_28208c;
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        case 0x2820f8u: goto label_2820f8;
        case 0x2820fcu: goto label_2820fc;
        case 0x282100u: goto label_282100;
        case 0x282104u: goto label_282104;
        case 0x282108u: goto label_282108;
        case 0x28210cu: goto label_28210c;
        case 0x282110u: goto label_282110;
        case 0x282114u: goto label_282114;
        case 0x282118u: goto label_282118;
        case 0x28211cu: goto label_28211c;
        case 0x282120u: goto label_282120;
        case 0x282124u: goto label_282124;
        case 0x282128u: goto label_282128;
        case 0x28212cu: goto label_28212c;
        case 0x282130u: goto label_282130;
        case 0x282134u: goto label_282134;
        case 0x282138u: goto label_282138;
        case 0x28213cu: goto label_28213c;
        case 0x282140u: goto label_282140;
        case 0x282144u: goto label_282144;
        case 0x282148u: goto label_282148;
        case 0x28214cu: goto label_28214c;
        case 0x282150u: goto label_282150;
        case 0x282154u: goto label_282154;
        case 0x282158u: goto label_282158;
        case 0x28215cu: goto label_28215c;
        case 0x282160u: goto label_282160;
        case 0x282164u: goto label_282164;
        case 0x282168u: goto label_282168;
        case 0x28216cu: goto label_28216c;
        case 0x282170u: goto label_282170;
        case 0x282174u: goto label_282174;
        case 0x282178u: goto label_282178;
        case 0x28217cu: goto label_28217c;
        case 0x282180u: goto label_282180;
        case 0x282184u: goto label_282184;
        case 0x282188u: goto label_282188;
        case 0x28218cu: goto label_28218c;
        case 0x282190u: goto label_282190;
        case 0x282194u: goto label_282194;
        case 0x282198u: goto label_282198;
        case 0x28219cu: goto label_28219c;
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a4u: goto label_2821a4;
        case 0x2821a8u: goto label_2821a8;
        case 0x2821acu: goto label_2821ac;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821b4u: goto label_2821b4;
        case 0x2821b8u: goto label_2821b8;
        case 0x2821bcu: goto label_2821bc;
        case 0x2821c0u: goto label_2821c0;
        case 0x2821c4u: goto label_2821c4;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821ccu: goto label_2821cc;
        case 0x2821d0u: goto label_2821d0;
        case 0x2821d4u: goto label_2821d4;
        case 0x2821d8u: goto label_2821d8;
        case 0x2821dcu: goto label_2821dc;
        case 0x2821e0u: goto label_2821e0;
        case 0x2821e4u: goto label_2821e4;
        case 0x2821e8u: goto label_2821e8;
        case 0x2821ecu: goto label_2821ec;
        case 0x2821f0u: goto label_2821f0;
        case 0x2821f4u: goto label_2821f4;
        case 0x2821f8u: goto label_2821f8;
        case 0x2821fcu: goto label_2821fc;
        case 0x282200u: goto label_282200;
        case 0x282204u: goto label_282204;
        case 0x282208u: goto label_282208;
        case 0x28220cu: goto label_28220c;
        case 0x282210u: goto label_282210;
        case 0x282214u: goto label_282214;
        case 0x282218u: goto label_282218;
        case 0x28221cu: goto label_28221c;
        case 0x282220u: goto label_282220;
        case 0x282224u: goto label_282224;
        case 0x282228u: goto label_282228;
        case 0x28222cu: goto label_28222c;
        case 0x282230u: goto label_282230;
        case 0x282234u: goto label_282234;
        case 0x282238u: goto label_282238;
        case 0x28223cu: goto label_28223c;
        case 0x282240u: goto label_282240;
        case 0x282244u: goto label_282244;
        case 0x282248u: goto label_282248;
        case 0x28224cu: goto label_28224c;
        case 0x282250u: goto label_282250;
        case 0x282254u: goto label_282254;
        case 0x282258u: goto label_282258;
        case 0x28225cu: goto label_28225c;
        case 0x282260u: goto label_282260;
        case 0x282264u: goto label_282264;
        case 0x282268u: goto label_282268;
        case 0x28226cu: goto label_28226c;
        case 0x282270u: goto label_282270;
        case 0x282274u: goto label_282274;
        case 0x282278u: goto label_282278;
        case 0x28227cu: goto label_28227c;
        case 0x282280u: goto label_282280;
        case 0x282284u: goto label_282284;
        case 0x282288u: goto label_282288;
        case 0x28228cu: goto label_28228c;
        case 0x282290u: goto label_282290;
        case 0x282294u: goto label_282294;
        case 0x282298u: goto label_282298;
        case 0x28229cu: goto label_28229c;
        case 0x2822a0u: goto label_2822a0;
        case 0x2822a4u: goto label_2822a4;
        case 0x2822a8u: goto label_2822a8;
        case 0x2822acu: goto label_2822ac;
        case 0x2822b0u: goto label_2822b0;
        case 0x2822b4u: goto label_2822b4;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822bcu: goto label_2822bc;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c4u: goto label_2822c4;
        case 0x2822c8u: goto label_2822c8;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822d0u: goto label_2822d0;
        case 0x2822d4u: goto label_2822d4;
        case 0x2822d8u: goto label_2822d8;
        case 0x2822dcu: goto label_2822dc;
        case 0x2822e0u: goto label_2822e0;
        case 0x2822e4u: goto label_2822e4;
        case 0x2822e8u: goto label_2822e8;
        case 0x2822ecu: goto label_2822ec;
        case 0x2822f0u: goto label_2822f0;
        case 0x2822f4u: goto label_2822f4;
        case 0x2822f8u: goto label_2822f8;
        case 0x2822fcu: goto label_2822fc;
        case 0x282300u: goto label_282300;
        case 0x282304u: goto label_282304;
        case 0x282308u: goto label_282308;
        case 0x28230cu: goto label_28230c;
        case 0x282310u: goto label_282310;
        case 0x282314u: goto label_282314;
        case 0x282318u: goto label_282318;
        case 0x28231cu: goto label_28231c;
        case 0x282320u: goto label_282320;
        case 0x282324u: goto label_282324;
        case 0x282328u: goto label_282328;
        case 0x28232cu: goto label_28232c;
        case 0x282330u: goto label_282330;
        case 0x282334u: goto label_282334;
        case 0x282338u: goto label_282338;
        case 0x28233cu: goto label_28233c;
        case 0x282340u: goto label_282340;
        case 0x282344u: goto label_282344;
        case 0x282348u: goto label_282348;
        case 0x28234cu: goto label_28234c;
        case 0x282350u: goto label_282350;
        case 0x282354u: goto label_282354;
        case 0x282358u: goto label_282358;
        case 0x28235cu: goto label_28235c;
        case 0x282360u: goto label_282360;
        case 0x282364u: goto label_282364;
        case 0x282368u: goto label_282368;
        case 0x28236cu: goto label_28236c;
        default: break;
    }

    ctx->pc = 0x281c20u;

label_281c20:
    // 0x281c20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x281c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_281c24:
    // 0x281c24: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x281c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_281c28:
    // 0x281c28: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x281c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_281c2c:
    // 0x281c2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x281c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281c30:
    // 0x281c30: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x281c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_281c34:
    // 0x281c34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x281c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_281c38:
    // 0x281c38: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x281c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_281c3c:
    // 0x281c3c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x281c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_281c40:
    // 0x281c40: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x281c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_281c44:
    // 0x281c44: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x281c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_281c48:
    // 0x281c48: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x281c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_281c4c:
    // 0x281c4c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_281c50:
    // 0x281c50: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x281c50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_281c54:
    // 0x281c54: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x281c54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_281c58:
    // 0x281c58: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x281c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_281c5c:
    // 0x281c5c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x281c5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_281c60:
    // 0x281c60: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x281c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_281c64:
    // 0x281c64: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x281c64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_281c68:
    // 0x281c68: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x281c68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_281c6c:
    // 0x281c6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x281c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_281c70:
    // 0x281c70: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x281c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_281c74:
    // 0x281c74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281c78:
    // 0x281c78: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x281c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_281c7c:
    // 0x281c7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x281c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_281c80:
    // 0x281c80: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x281c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_281c84:
    // 0x281c84: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x281c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_281c88:
    // 0x281c88: 0xc040556  jal         func_101558
label_281c8c:
    if (ctx->pc == 0x281C8Cu) {
        ctx->pc = 0x281C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C88u;
        // 0x281c8c: 0xe7b70188  swc1        $f23, 0x188($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C90u;
        goto label_281c90;
    }
    ctx->pc = 0x281C88u;
    SET_GPR_U32(ctx, 31, 0x281C90u);
    ctx->pc = 0x281C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C88u;
    // 0x281c8c: 0xe7b70188  swc1        $f23, 0x188($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x101558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101558u, 0x281C88u, 0x281C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C90u;
label_281c90:
    // 0x281c90: 0xc6e10014  lwc1        $f1, 0x14($s7)
    ctx->pc = 0x281c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281c94:
    // 0x281c94: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x281c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_281c98:
    // 0x281c98: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x281c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281c9c:
    // 0x281c9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281ca0:
    // 0x281ca0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x281ca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281ca4:
    // 0x281ca4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x281ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281ca8:
    // 0x281ca8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x281ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281cac:
    // 0x281cac: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x281cacu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_281cb0:
    // 0x281cb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x281cb0u;
    // VWAITQ (Q already resolved in this runtime)
label_281cb4:
    // 0x281cb4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x281cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281cb8:
    // 0x281cb8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x281cb8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_281cbc:
    // 0x281cbc: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x281cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_281cc0:
    // 0x281cc0: 0x4501019b  bc1t        . + 4 + (0x19B << 2)
label_281cc4:
    if (ctx->pc == 0x281CC4u) {
        ctx->pc = 0x281CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CC0u;
        // 0x281cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CC8u;
        goto label_281cc8;
    }
    ctx->pc = 0x281CC0u;
    {
        const bool branch_taken_0x281cc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x281CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CC0u;
        // 0x281cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cc0) {
            ctx->pc = 0x282330u;
            goto label_282330;
        }
    }
    ctx->pc = 0x281CC8u;
label_281cc8:
    // 0x281cc8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x281cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281ccc:
    // 0x281ccc: 0x0  nop
    ctx->pc = 0x281cccu;
    // NOP
label_281cd0:
    // 0x281cd0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_281cd4:
    if (ctx->pc == 0x281CD4u) {
        ctx->pc = 0x281CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD0u;
        // 0x281cd4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CD8u;
        goto label_281cd8;
    }
    ctx->pc = 0x281CD0u;
    {
        const bool branch_taken_0x281cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD0u;
        // 0x281cd4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cd0) {
            ctx->pc = 0x281D0Cu;
            goto label_281d0c;
        }
    }
    ctx->pc = 0x281CD8u;
label_281cd8:
    // 0x281cd8: 0xc0874fa  jal         func_21D3E8
label_281cdc:
    if (ctx->pc == 0x281CDCu) {
        ctx->pc = 0x281CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD8u;
        // 0x281cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CE0u;
        goto label_281ce0;
    }
    ctx->pc = 0x281CD8u;
    SET_GPR_U32(ctx, 31, 0x281CE0u);
    ctx->pc = 0x281CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CD8u;
    // 0x281cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x281CD8u, 0x281CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CE0u;
label_281ce0:
    // 0x281ce0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x281ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_281ce4:
    // 0x281ce4: 0x10600192  beqz        $v1, . + 4 + (0x192 << 2)
label_281ce8:
    if (ctx->pc == 0x281CE8u) {
        ctx->pc = 0x281CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CE4u;
        // 0x281ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CECu;
        goto label_281cec;
    }
    ctx->pc = 0x281CE4u;
    {
        const bool branch_taken_0x281ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CE4u;
        // 0x281ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ce4) {
            ctx->pc = 0x282330u;
            goto label_282330;
        }
    }
    ctx->pc = 0x281CECu;
label_281cec:
    // 0x281cec: 0x4616b040  add.s       $f1, $f22, $f22
    ctx->pc = 0x281cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_281cf0:
    // 0x281cf0: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x281cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281cf4:
    // 0x281cf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281cf8:
    // 0x281cf8: 0x0  nop
    ctx->pc = 0x281cf8u;
    // NOP
label_281cfc:
    // 0x281cfc: 0x4501018c  bc1t        . + 4 + (0x18C << 2)
label_281d00:
    if (ctx->pc == 0x281D00u) {
        ctx->pc = 0x281D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CFCu;
        // 0x281d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D04u;
        goto label_281d04;
    }
    ctx->pc = 0x281CFCu;
    {
        const bool branch_taken_0x281cfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x281D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CFCu;
        // 0x281d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cfc) {
            ctx->pc = 0x282330u;
            goto label_282330;
        }
    }
    ctx->pc = 0x281D04u;
label_281d04:
    // 0x281d04: 0x1000018a  b           . + 4 + (0x18A << 2)
label_281d08:
    if (ctx->pc == 0x281D08u) {
        ctx->pc = 0x281D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D04u;
        // 0x281d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D0Cu;
        goto label_281d0c;
    }
    ctx->pc = 0x281D04u;
    {
        const bool branch_taken_0x281d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D04u;
        // 0x281d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d04) {
            ctx->pc = 0x282330u;
            goto label_282330;
        }
    }
    ctx->pc = 0x281D0Cu;
label_281d0c:
    // 0x281d0c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_281d10:
    // 0x281d10: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x281d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_281d14:
    // 0x281d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281d18:
    // 0x281d18: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x281d18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_281d1c:
    // 0x281d1c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x281d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_281d20:
    // 0x281d20: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x281d20u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_281d24:
    // 0x281d24: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x281d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_281d28:
    // 0x281d28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x281d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_281d2c:
    // 0x281d2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x281d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_281d30:
    // 0x281d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281d34:
    // 0x281d34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x281d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281d38:
    // 0x281d38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x281d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_281d3c:
    // 0x281d3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x281d3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_281d40:
    // 0x281d40: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_281d44:
    // 0x281d44: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x281d44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_281d48:
    // 0x281d48: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_281d4c:
    // 0x281d4c: 0x7ae70000  lq          $a3, 0x0($s7)
    ctx->pc = 0x281d4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_281d50:
    // 0x281d50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x281d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281d54:
    // 0x281d54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x281d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281d58:
    // 0x281d58: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x281d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281d5c:
    // 0x281d5c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281d5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281d60:
    // 0x281d60: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x281d60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_281d64:
    // 0x281d64: 0x4404b000  mfc1        $a0, $f22
    ctx->pc = 0x281d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_281d68:
    // 0x281d68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x281d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_281d6c:
    // 0x281d6c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x281d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281d70:
    // 0x281d70: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x281d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_281d74:
    // 0x281d74: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x281d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_281d78:
    // 0x281d78: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x281d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_281d7c:
    // 0x281d7c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x281d7cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_281d80:
    // 0x281d80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x281d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281d84:
    // 0x281d84: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x281d84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_281d88:
    // 0x281d88: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x281d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281d8c:
    // 0x281d8c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281d8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281d90:
    // 0x281d90: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x281d90u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_281d94:
    // 0x281d94: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x281d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_281d98:
    // 0x281d98: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x281d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_281d9c:
    // 0x281d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281da0:
    // 0x281da0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x281da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_281da4:
    // 0x281da4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281da8:
    // 0x281da8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x281da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_281dac:
    // 0x281dac: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x281dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_281db0:
    // 0x281db0: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x281db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_281db4:
    // 0x281db4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x281db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_281db8:
    // 0x281db8: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x281db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
label_281dbc:
    // 0x281dbc: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x281dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
label_281dc0:
    // 0x281dc0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x281dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_281dc4:
    // 0x281dc4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x281dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_281dc8:
    // 0x281dc8: 0x7fa700b0  sq          $a3, 0xB0($sp)
    ctx->pc = 0x281dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 7));
label_281dcc:
    // 0x281dcc: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x281dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
label_281dd0:
    // 0x281dd0: 0x7fa800a0  sq          $t0, 0xA0($sp)
    ctx->pc = 0x281dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 8));
label_281dd4:
    // 0x281dd4: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x281dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
label_281dd8:
    // 0x281dd8: 0xc040668  jal         func_1019A0
label_281ddc:
    if (ctx->pc == 0x281DDCu) {
        ctx->pc = 0x281DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DD8u;
        // 0x281ddc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281DE0u;
        goto label_281de0;
    }
    ctx->pc = 0x281DD8u;
    SET_GPR_U32(ctx, 31, 0x281DE0u);
    ctx->pc = 0x281DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281DD8u;
    // 0x281ddc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A0u, 0x281DD8u, 0x281DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DE0u;
label_281de0:
    // 0x281de0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x281de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_281de4:
    // 0x281de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281de8:
    // 0x281de8: 0xc040668  jal         func_1019A0
label_281dec:
    if (ctx->pc == 0x281DECu) {
        ctx->pc = 0x281DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DE8u;
        // 0x281dec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281DF0u;
        goto label_281df0;
    }
    ctx->pc = 0x281DE8u;
    SET_GPR_U32(ctx, 31, 0x281DF0u);
    ctx->pc = 0x281DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281DE8u;
    // 0x281dec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A0u, 0x281DE8u, 0x281DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DF0u;
label_281df0:
    // 0x281df0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x281df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_281df4:
    // 0x281df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281df8:
    // 0x281df8: 0x7ae40000  lq          $a0, 0x0($s7)
    ctx->pc = 0x281df8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_281dfc:
    // 0x281dfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x281dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_281e00:
    // 0x281e00: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x281e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_281e04:
    // 0x281e04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x281e04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281e08:
    // 0x281e08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x281e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_281e0c:
    // 0x281e0c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x281e0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_281e10:
    // 0x281e10: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x281e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281e14:
    // 0x281e14: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x281e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_281e18:
    // 0x281e18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x281e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281e1c:
    // 0x281e1c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x281e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281e20:
    // 0x281e20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281e24:
    // 0x281e24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x281e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281e28:
    // 0x281e28: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x281e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281e2c:
    // 0x281e2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281e2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281e30:
    // 0x281e30: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x281e30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_281e34:
    // 0x281e34: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x281e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_281e38:
    // 0x281e38: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x281e38u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_281e3c:
    // 0x281e3c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x281e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_281e40:
    // 0x281e40: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x281e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_281e44:
    // 0x281e44: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x281e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_281e48:
    // 0x281e48: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x281e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_281e4c:
    // 0x281e4c: 0xc0cd5ea  jal         func_3357A8
label_281e50:
    if (ctx->pc == 0x281E50u) {
        ctx->pc = 0x281E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E4Cu;
        // 0x281e50: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E54u;
        goto label_281e54;
    }
    ctx->pc = 0x281E4Cu;
    SET_GPR_U32(ctx, 31, 0x281E54u);
    ctx->pc = 0x281E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E4Cu;
    // 0x281e50: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x281E4Cu, 0x281E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E54u;
label_281e54:
    // 0x281e54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x281e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_281e58:
    // 0x281e58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x281e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_281e5c:
    // 0x281e5c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x281e5cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_281e60:
    // 0x281e60: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x281e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_281e64:
    // 0x281e64: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_281e68:
    // 0x281e68: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x281e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_281e6c:
    // 0x281e6c: 0x4614bd02  mul.s       $f20, $f23, $f20
    ctx->pc = 0x281e6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
label_281e70:
    // 0x281e70: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x281e70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_281e74:
    // 0x281e74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x281e74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_281e78:
    // 0x281e78: 0xc12e310  jal         func_4B8C40
label_281e7c:
    if (ctx->pc == 0x281E7Cu) {
        ctx->pc = 0x281E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E78u;
        // 0x281e7c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E80u;
        goto label_281e80;
    }
    ctx->pc = 0x281E78u;
    SET_GPR_U32(ctx, 31, 0x281E80u);
    ctx->pc = 0x281E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E78u;
    // 0x281e7c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x281E78u, 0x281E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E80u;
label_281e80:
    // 0x281e80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x281e80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_281e84:
    // 0x281e84: 0xc12e29c  jal         func_4B8A70
label_281e88:
    if (ctx->pc == 0x281E88u) {
        ctx->pc = 0x281E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E84u;
        // 0x281e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E8Cu;
        goto label_281e8c;
    }
    ctx->pc = 0x281E84u;
    SET_GPR_U32(ctx, 31, 0x281E8Cu);
    ctx->pc = 0x281E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E84u;
    // 0x281e88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x281E84u, 0x281E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E8Cu;
label_281e8c:
    // 0x281e8c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x281e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_281e90:
    // 0x281e90: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x281e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_281e94:
    // 0x281e94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281e98:
    // 0x281e98: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x281e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281e9c:
    // 0x281e9c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x281e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_281ea0:
    // 0x281ea0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x281ea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_281ea4:
    // 0x281ea4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x281ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_281ea8:
    // 0x281ea8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x281ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_281eac:
    // 0x281eac: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x281eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_281eb0:
    // 0x281eb0: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x281eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_281eb4:
    // 0x281eb4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x281eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281eb8:
    // 0x281eb8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x281eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_281ebc:
    // 0x281ebc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x281ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_281ec0:
    // 0x281ec0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x281ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_281ec4:
    // 0x281ec4: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x281ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_281ec8:
    // 0x281ec8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x281ec8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281ecc:
    // 0x281ecc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x281eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281ed0:
    // 0x281ed0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x281ed0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281ed4:
    // 0x281ed4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x281ed4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281ed8:
    // 0x281ed8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x281ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281edc:
    // 0x281edc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x281edcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_281ee0:
    // 0x281ee0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x281ee0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_281ee4:
    // 0x281ee4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x281ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281ee8:
    // 0x281ee8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x281ee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_281eec:
    // 0x281eec: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x281eecu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281ef0:
    // 0x281ef0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x281ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281ef4:
    // 0x281ef4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x281ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_281ef8:
    // 0x281ef8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x281ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281efc:
    // 0x281efc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x281efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_281f00:
    // 0x281f00: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x281f00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_281f04:
    // 0x281f04: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x281f04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_281f08:
    // 0x281f08: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x281f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_281f0c:
    // 0x281f0c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x281f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_281f10:
    // 0x281f10: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x281f10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_281f14:
    // 0x281f14: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x281f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_281f18:
    // 0x281f18: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x281f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_281f1c:
    // 0x281f1c: 0xafb100c4  sw          $s1, 0xC4($sp)
    ctx->pc = 0x281f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 17));
label_281f20:
    // 0x281f20: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x281f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281f24:
    // 0x281f24: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x281f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_281f28:
    // 0x281f28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281f2c:
    // 0x281f2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x281f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281f30:
    // 0x281f30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x281f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281f34:
    // 0x281f34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281f34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281f38:
    // 0x281f38: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x281f38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_281f3c:
    // 0x281f3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x281f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_281f40:
    // 0x281f40: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x281f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_281f44:
    // 0x281f44: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x281f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_281f48:
    // 0x281f48: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x281f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_281f4c:
    // 0x281f4c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_281f50:
    if (ctx->pc == 0x281F50u) {
        ctx->pc = 0x281F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F4Cu;
        // 0x281f50: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F54u;
        goto label_281f54;
    }
    ctx->pc = 0x281F4Cu;
    {
        const bool branch_taken_0x281f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F4Cu;
        // 0x281f50: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f4c) {
            ctx->pc = 0x281F88u;
            goto label_281f88;
        }
    }
    ctx->pc = 0x281F54u;
label_281f54:
    // 0x281f54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x281f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_281f58:
    // 0x281f58: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x281f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_281f5c:
    // 0x281f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281f60:
    // 0x281f60: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x281f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_281f64:
    // 0x281f64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x281f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_281f68:
    // 0x281f68: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x281f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
label_281f6c:
    // 0x281f6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x281f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281f70:
    // 0x281f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281f74:
    // 0x281f74: 0xc1036e2  jal         func_40DB88
label_281f78:
    if (ctx->pc == 0x281F78u) {
        ctx->pc = 0x281F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F74u;
        // 0x281f78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F7Cu;
        goto label_281f7c;
    }
    ctx->pc = 0x281F74u;
    SET_GPR_U32(ctx, 31, 0x281F7Cu);
    ctx->pc = 0x281F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F74u;
    // 0x281f78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x281F74u, 0x281F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F7Cu;
label_281f7c:
    // 0x281f7c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_281f80:
    // 0x281f80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_281f84:
    if (ctx->pc == 0x281F84u) {
        ctx->pc = 0x281F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F80u;
        // 0x281f84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F88u;
        goto label_281f88;
    }
    ctx->pc = 0x281F80u;
    {
        const bool branch_taken_0x281f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F80u;
        // 0x281f84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f80) {
            ctx->pc = 0x281FB4u;
            goto label_281fb4;
        }
    }
    ctx->pc = 0x281F88u;
label_281f88:
    // 0x281f88: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x281f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281f8c:
    // 0x281f8c: 0x7ac20010  lq          $v0, 0x10($s6)
    ctx->pc = 0x281f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_281f90:
    // 0x281f90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x281f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_281f94:
    // 0x281f94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281f98:
    // 0x281f98: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x281f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_281f9c:
    // 0x281f9c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x281f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_281fa0:
    // 0x281fa0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x281fa0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_281fa4:
    // 0x281fa4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x281fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_281fa8:
    // 0x281fa8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x281fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_281fac:
    // 0x281fac: 0x10000004  b           . + 4 + (0x4 << 2)
label_281fb0:
    if (ctx->pc == 0x281FB0u) {
        ctx->pc = 0x281FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FACu;
        // 0x281fb0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FB4u;
        goto label_281fb4;
    }
    ctx->pc = 0x281FACu;
    {
        const bool branch_taken_0x281fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FACu;
        // 0x281fb0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fac) {
            ctx->pc = 0x281FC0u;
            goto label_281fc0;
        }
    }
    ctx->pc = 0x281FB4u;
label_281fb4:
    // 0x281fb4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x281fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_281fb8:
    // 0x281fb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_281fbc:
    // 0x281fbc: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x281fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_281fc0:
    // 0x281fc0: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x281fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_281fc4:
    // 0x281fc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281fc8:
    // 0x281fc8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x281fc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_281fcc:
    // 0x281fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281fd0:
    // 0x281fd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x281fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_281fd4:
    // 0x281fd4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x281fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281fd8:
    // 0x281fd8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x281fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281fdc:
    // 0x281fdc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281fdcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281fe0:
    // 0x281fe0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x281fe0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_281fe4:
    // 0x281fe4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x281fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_281fe8:
    // 0x281fe8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x281fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_281fec:
    // 0x281fec: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x281fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281ff0:
    // 0x281ff0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x281ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_281ff4:
    // 0x281ff4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x281ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_281ff8:
    // 0x281ff8: 0xc0a041c  jal         func_281070
label_281ffc:
    if (ctx->pc == 0x281FFCu) {
        ctx->pc = 0x281FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FF8u;
        // 0x281ffc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282000u;
        goto label_282000;
    }
    ctx->pc = 0x281FF8u;
    SET_GPR_U32(ctx, 31, 0x282000u);
    ctx->pc = 0x281FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281FF8u;
    // 0x281ffc: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x281FF8u, 0x282000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282000u;
label_282000:
    // 0x282000: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_282004:
    if (ctx->pc == 0x282004u) {
        ctx->pc = 0x282004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282000u;
        // 0x282004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282008u;
        goto label_282008;
    }
    ctx->pc = 0x282000u;
    {
        const bool branch_taken_0x282000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282000u;
        // 0x282004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282000) {
            ctx->pc = 0x28201Cu;
            goto label_28201c;
        }
    }
    ctx->pc = 0x282008u;
label_282008:
    // 0x282008: 0xc0874fa  jal         func_21D3E8
label_28200c:
    if (ctx->pc == 0x28200Cu) {
        ctx->pc = 0x28200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282008u;
        // 0x28200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282010u;
        goto label_282010;
    }
    ctx->pc = 0x282008u;
    SET_GPR_U32(ctx, 31, 0x282010u);
    ctx->pc = 0x28200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282008u;
    // 0x28200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x282008u, 0x282010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282010u;
label_282010:
    // 0x282010: 0x9042001b  lbu         $v0, 0x1B($v0)
    ctx->pc = 0x282010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_282014:
    // 0x282014: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_282018:
    if (ctx->pc == 0x282018u) {
        ctx->pc = 0x282018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282014u;
        // 0x282018: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28201Cu;
        goto label_28201c;
    }
    ctx->pc = 0x282014u;
    {
        const bool branch_taken_0x282014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282014u;
        // 0x282018: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282014) {
            ctx->pc = 0x282330u;
            goto label_282330;
        }
    }
    ctx->pc = 0x28201Cu;
label_28201c:
    // 0x28201c: 0xc089998  jal         func_226660
label_282020:
    if (ctx->pc == 0x282020u) {
        ctx->pc = 0x282020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28201Cu;
        // 0x282020: 0x3c052008  lui         $a1, 0x2008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8200 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282024u;
        goto label_282024;
    }
    ctx->pc = 0x28201Cu;
    SET_GPR_U32(ctx, 31, 0x282024u);
    ctx->pc = 0x282020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28201Cu;
    // 0x282020: 0x3c052008  lui         $a1, 0x2008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8200 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28201Cu, 0x282024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282024u;
label_282024:
    // 0x282024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_282028:
    if (ctx->pc == 0x282028u) {
        ctx->pc = 0x282028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282024u;
        // 0x282028: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28202Cu;
        goto label_28202c;
    }
    ctx->pc = 0x282024u;
    {
        const bool branch_taken_0x282024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282024u;
        // 0x282028: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282024) {
            ctx->pc = 0x282038u;
            goto label_282038;
        }
    }
    ctx->pc = 0x28202Cu;
label_28202c:
    // 0x28202c: 0xc08a588  jal         func_229620
label_282030:
    if (ctx->pc == 0x282030u) {
        ctx->pc = 0x282030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28202Cu;
        // 0x282030: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282034u;
        goto label_282034;
    }
    ctx->pc = 0x28202Cu;
    SET_GPR_U32(ctx, 31, 0x282034u);
    ctx->pc = 0x282030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28202Cu;
    // 0x282030: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x28202Cu, 0x282034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282034u;
label_282034:
    // 0x282034: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x282034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_282038:
    // 0x282038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28203c:
    // 0x28203c: 0xc08f3dc  jal         func_23CF70
label_282040:
    if (ctx->pc == 0x282040u) {
        ctx->pc = 0x282040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28203Cu;
        // 0x282040: 0x7e6202c0  sq          $v0, 0x2C0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282044u;
        goto label_282044;
    }
    ctx->pc = 0x28203Cu;
    SET_GPR_U32(ctx, 31, 0x282044u);
    ctx->pc = 0x282040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28203Cu;
    // 0x282040: 0x7e6202c0  sq          $v0, 0x2C0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 704), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x28203Cu, 0x282044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282044u;
label_282044:
    // 0x282044: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x282044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_282048:
    // 0x282048: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x282048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28204c:
    // 0x28204c: 0x0  nop
    ctx->pc = 0x28204cu;
    // NOP
label_282050:
    // 0x282050: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_282054:
    if (ctx->pc == 0x282054u) {
        ctx->pc = 0x282054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282050u;
        // 0x282054: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282058u;
        goto label_282058;
    }
    ctx->pc = 0x282050u;
    {
        const bool branch_taken_0x282050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282050u;
        // 0x282054: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282050) {
            ctx->pc = 0x282088u;
            goto label_282088;
        }
    }
    ctx->pc = 0x282058u;
label_282058:
    // 0x282058: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x282058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_28205c:
    // 0x28205c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x28205cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_282060:
    // 0x282060: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x282060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_282064:
    // 0x282064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282068:
    // 0x282068: 0xc08f4ae  jal         func_23D2B8
label_28206c:
    if (ctx->pc == 0x28206Cu) {
        ctx->pc = 0x28206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282068u;
        // 0x28206c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x282070u;
        goto label_282070;
    }
    ctx->pc = 0x282068u;
    SET_GPR_U32(ctx, 31, 0x282070u);
    ctx->pc = 0x28206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282068u;
    // 0x28206c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x282068u, 0x282070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282070u;
label_282070:
    // 0x282070: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x282070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_282074:
    // 0x282074: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x282074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_282078:
    // 0x282078: 0xc08f3e2  jal         func_23CF88
label_28207c:
    if (ctx->pc == 0x28207Cu) {
        ctx->pc = 0x28207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282078u;
        // 0x28207c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282080u;
        goto label_282080;
    }
    ctx->pc = 0x282078u;
    SET_GPR_U32(ctx, 31, 0x282080u);
    ctx->pc = 0x28207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282078u;
    // 0x28207c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x282078u, 0x282080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282080u;
label_282080:
    // 0x282080: 0x1000000d  b           . + 4 + (0xD << 2)
label_282084:
    if (ctx->pc == 0x282084u) {
        ctx->pc = 0x282088u;
        goto label_282088;
    }
    ctx->pc = 0x282080u;
    {
        const bool branch_taken_0x282080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282080) {
            ctx->pc = 0x2820B8u;
            goto label_2820b8;
        }
    }
    ctx->pc = 0x282088u;
label_282088:
    // 0x282088: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x282088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_28208c:
    // 0x28208c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x28208cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_282090:
    // 0x282090: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_282094:
    // 0x282094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282098:
    // 0x282098: 0xc08f4ae  jal         func_23D2B8
label_28209c:
    if (ctx->pc == 0x28209Cu) {
        ctx->pc = 0x28209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282098u;
        // 0x28209c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820A0u;
        goto label_2820a0;
    }
    ctx->pc = 0x282098u;
    SET_GPR_U32(ctx, 31, 0x2820A0u);
    ctx->pc = 0x28209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282098u;
    // 0x28209c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x282098u, 0x2820A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820A0u;
label_2820a0:
    // 0x2820a0: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2820a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_2820a4:
    // 0x2820a4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2820a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2820a8:
    // 0x2820a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2820a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2820ac:
    // 0x2820ac: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2820acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_2820b0:
    // 0x2820b0: 0xc08f3e2  jal         func_23CF88
label_2820b4:
    if (ctx->pc == 0x2820B4u) {
        ctx->pc = 0x2820B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820B0u;
        // 0x2820b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820B8u;
        goto label_2820b8;
    }
    ctx->pc = 0x2820B0u;
    SET_GPR_U32(ctx, 31, 0x2820B8u);
    ctx->pc = 0x2820B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820B0u;
    // 0x2820b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2820B0u, 0x2820B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820B8u;
label_2820b8:
    // 0x2820b8: 0xc08c6a0  jal         func_231A80
label_2820bc:
    if (ctx->pc == 0x2820BCu) {
        ctx->pc = 0x2820BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820B8u;
        // 0x2820bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820C0u;
        goto label_2820c0;
    }
    ctx->pc = 0x2820B8u;
    SET_GPR_U32(ctx, 31, 0x2820C0u);
    ctx->pc = 0x2820BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820B8u;
    // 0x2820bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2820B8u, 0x2820C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820C0u;
label_2820c0:
    // 0x2820c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2820c4:
    // 0x2820c4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_2820c8:
    if (ctx->pc == 0x2820C8u) {
        ctx->pc = 0x2820C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820C4u;
        // 0x2820c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820CCu;
        goto label_2820cc;
    }
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2820C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820C4u;
        // 0x2820c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x2820ECu;
            goto label_2820ec;
        }
    }
    ctx->pc = 0x2820CCu;
label_2820cc:
    // 0x2820cc: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2820ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_2820d0:
    // 0x2820d0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_2820d4:
    if (ctx->pc == 0x2820D4u) {
        ctx->pc = 0x2820D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820D0u;
        // 0x2820d4: 0x8e7100d8  lw          $s1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820D8u;
        goto label_2820d8;
    }
    ctx->pc = 0x2820D0u;
    {
        const bool branch_taken_0x2820d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2820d0) {
            ctx->pc = 0x2820D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2820D0u;
            // 0x2820d4: 0x8e7100d8  lw          $s1, 0xD8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2820F8u;
            goto label_2820f8;
        }
    }
    ctx->pc = 0x2820D8u;
label_2820d8:
    // 0x2820d8: 0xc08c6a0  jal         func_231A80
label_2820dc:
    if (ctx->pc == 0x2820DCu) {
        ctx->pc = 0x2820DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820D8u;
        // 0x2820dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820E0u;
        goto label_2820e0;
    }
    ctx->pc = 0x2820D8u;
    SET_GPR_U32(ctx, 31, 0x2820E0u);
    ctx->pc = 0x2820DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820D8u;
    // 0x2820dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2820D8u, 0x2820E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820E0u;
label_2820e0:
    // 0x2820e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2820e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2820e4:
    // 0x2820e4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2820e8:
    if (ctx->pc == 0x2820E8u) {
        ctx->pc = 0x2820E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820E4u;
        // 0x2820e8: 0x8e7100d8  lw          $s1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820ECu;
        goto label_2820ec;
    }
    ctx->pc = 0x2820E4u;
    {
        const bool branch_taken_0x2820e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2820e4) {
            ctx->pc = 0x2820E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2820E4u;
            // 0x2820e8: 0x8e7100d8  lw          $s1, 0xD8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2820F8u;
            goto label_2820f8;
        }
    }
    ctx->pc = 0x2820ECu;
label_2820ec:
    // 0x2820ec: 0xc095fce  jal         func_257F38
label_2820f0:
    if (ctx->pc == 0x2820F0u) {
        ctx->pc = 0x2820F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820ECu;
        // 0x2820f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2820F4u;
        goto label_2820f4;
    }
    ctx->pc = 0x2820ECu;
    SET_GPR_U32(ctx, 31, 0x2820F4u);
    ctx->pc = 0x2820F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820ECu;
    // 0x2820f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2820ECu, 0x2820F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820F4u;
label_2820f4:
    // 0x2820f4: 0x8e7100d8  lw          $s1, 0xD8($s3)
    ctx->pc = 0x2820f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2820f8:
    // 0x2820f8: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
label_2820fc:
    if (ctx->pc == 0x2820FCu) {
        ctx->pc = 0x2820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F8u;
        // 0x2820fc: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282100u;
        goto label_282100;
    }
    ctx->pc = 0x2820F8u;
    {
        const bool branch_taken_0x2820f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820F8u;
        // 0x2820fc: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820f8) {
            ctx->pc = 0x28232Cu;
            goto label_28232c;
        }
    }
    ctx->pc = 0x282100u;
label_282100:
    // 0x282100: 0x2610e9c0  addiu       $s0, $s0, -0x1640
    ctx->pc = 0x282100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961600));
label_282104:
    // 0x282104: 0xc041532  jal         func_1054C8
label_282108:
    if (ctx->pc == 0x282108u) {
        ctx->pc = 0x282108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282104u;
        // 0x282108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28210Cu;
        goto label_28210c;
    }
    ctx->pc = 0x282104u;
    SET_GPR_U32(ctx, 31, 0x28210Cu);
    ctx->pc = 0x282108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282104u;
    // 0x282108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x282104u, 0x28210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28210Cu;
label_28210c:
    // 0x28210c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282110:
    // 0x282110: 0xc041532  jal         func_1054C8
label_282114:
    if (ctx->pc == 0x282114u) {
        ctx->pc = 0x282114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282110u;
        // 0x282114: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282118u;
        goto label_282118;
    }
    ctx->pc = 0x282110u;
    SET_GPR_U32(ctx, 31, 0x282118u);
    ctx->pc = 0x282114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282110u;
    // 0x282114: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x282110u, 0x282118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282118u;
label_282118:
    // 0x282118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28211c:
    // 0x28211c: 0xc041532  jal         func_1054C8
label_282120:
    if (ctx->pc == 0x282120u) {
        ctx->pc = 0x282120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28211Cu;
        // 0x282120: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282124u;
        goto label_282124;
    }
    ctx->pc = 0x28211Cu;
    SET_GPR_U32(ctx, 31, 0x282124u);
    ctx->pc = 0x282120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28211Cu;
    // 0x282120: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x28211Cu, 0x282124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282124u;
label_282124:
    // 0x282124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282128:
    // 0x282128: 0xc041532  jal         func_1054C8
label_28212c:
    if (ctx->pc == 0x28212Cu) {
        ctx->pc = 0x28212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282128u;
        // 0x28212c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282130u;
        goto label_282130;
    }
    ctx->pc = 0x282128u;
    SET_GPR_U32(ctx, 31, 0x282130u);
    ctx->pc = 0x28212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282128u;
    // 0x28212c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x282128u, 0x282130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282130u;
label_282130:
    // 0x282130: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x282130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282134:
    // 0x282134: 0xc041532  jal         func_1054C8
label_282138:
    if (ctx->pc == 0x282138u) {
        ctx->pc = 0x282138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282134u;
        // 0x282138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28213Cu;
        goto label_28213c;
    }
    ctx->pc = 0x282134u;
    SET_GPR_U32(ctx, 31, 0x28213Cu);
    ctx->pc = 0x282138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282134u;
    // 0x282138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x282134u, 0x28213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28213Cu;
label_28213c:
    // 0x28213c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x28213cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282140:
    // 0x282140: 0x240201b8  addiu       $v0, $zero, 0x1B8
    ctx->pc = 0x282140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_282144:
    // 0x282144: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_282148:
    if (ctx->pc == 0x282148u) {
        ctx->pc = 0x282148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282144u;
        // 0x282148: 0x240201be  addiu       $v0, $zero, 0x1BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28214Cu;
        goto label_28214c;
    }
    ctx->pc = 0x282144u;
    {
        const bool branch_taken_0x282144 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x282148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282144u;
        // 0x282148: 0x240201be  addiu       $v0, $zero, 0x1BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282144) {
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x28214Cu;
label_28214c:
    // 0x28214c: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_282150:
    if (ctx->pc == 0x282150u) {
        ctx->pc = 0x282150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28214Cu;
        // 0x282150: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282154u;
        goto label_282154;
    }
    ctx->pc = 0x28214Cu;
    {
        const bool branch_taken_0x28214c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x282150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28214Cu;
        // 0x282150: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28214c) {
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x282154u;
label_282154:
    // 0x282154: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_282158:
    if (ctx->pc == 0x282158u) {
        ctx->pc = 0x282158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282154u;
        // 0x282158: 0x240201ca  addiu       $v0, $zero, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28215Cu;
        goto label_28215c;
    }
    ctx->pc = 0x282154u;
    {
        const bool branch_taken_0x282154 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x282158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282154u;
        // 0x282158: 0x240201ca  addiu       $v0, $zero, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282154) {
            ctx->pc = 0x282164u;
            goto label_282164;
        }
    }
    ctx->pc = 0x28215Cu;
label_28215c:
    // 0x28215c: 0x1682001c  bne         $s4, $v0, . + 4 + (0x1C << 2)
label_282160:
    if (ctx->pc == 0x282160u) {
        ctx->pc = 0x282164u;
        goto label_282164;
    }
    ctx->pc = 0x28215Cu;
    {
        const bool branch_taken_0x28215c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x28215c) {
            ctx->pc = 0x2821D0u;
            goto label_2821d0;
        }
    }
    ctx->pc = 0x282164u;
label_282164:
    // 0x282164: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_282168:
    if (ctx->pc == 0x282168u) {
        ctx->pc = 0x282168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282164u;
        // 0x282168: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28216Cu;
        goto label_28216c;
    }
    ctx->pc = 0x282164u;
    {
        const bool branch_taken_0x282164 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282164u;
        // 0x282168: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282164) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x28216Cu;
label_28216c:
    // 0x28216c: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x28216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_282170:
    // 0x282170: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x282170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_282174:
    // 0x282174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x282174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282178:
    // 0x282178: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_28217c:
    // 0x28217c: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x28217cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_282180:
    // 0x282180: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_282184:
    // 0x282184: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x282184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_282188:
    // 0x282188: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x282188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28218c:
    // 0x28218c: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x28218cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_282190:
    // 0x282190: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_282194:
    // 0x282194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_282198:
    // 0x282198: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x282198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_28219c:
    // 0x28219c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2821a0:
    // 0x2821a0: 0xc0428c4  jal         func_10A310
label_2821a4:
    if (ctx->pc == 0x2821A4u) {
        ctx->pc = 0x2821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821A0u;
        // 0x2821a4: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821A8u;
        goto label_2821a8;
    }
    ctx->pc = 0x2821A0u;
    SET_GPR_U32(ctx, 31, 0x2821A8u);
    ctx->pc = 0x2821A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821A0u;
    // 0x2821a4: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x2821A0u, 0x2821A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821A8u;
label_2821a8:
    // 0x2821a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2821ac:
    // 0x2821ac: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x2821acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_2821b0:
    // 0x2821b0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2821b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_2821b4:
    // 0x2821b4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x2821b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2821b8:
    // 0x2821b8: 0x60f809  jalr        $v1
label_2821bc:
    if (ctx->pc == 0x2821BCu) {
        ctx->pc = 0x2821BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821B8u;
        // 0x2821bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821C0u;
        goto label_2821c0;
    }
    ctx->pc = 0x2821B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2821C0u);
        ctx->pc = 0x2821BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821B8u;
        // 0x2821bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2821B8u, 0x2821C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2821C0u;
label_2821c0:
    // 0x2821c0: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x2821c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2821c4:
    // 0x2821c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2821c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2821c8:
    // 0x2821c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2821cc:
    if (ctx->pc == 0x2821CCu) {
        ctx->pc = 0x2821CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821C8u;
        // 0x2821cc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821D0u;
        goto label_2821d0;
    }
    ctx->pc = 0x2821C8u;
    {
        const bool branch_taken_0x2821c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2821CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821C8u;
        // 0x2821cc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821c8) {
            ctx->pc = 0x2821FCu;
            goto label_2821fc;
        }
    }
    ctx->pc = 0x2821D0u;
label_2821d0:
    // 0x2821d0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2821d4:
    if (ctx->pc == 0x2821D4u) {
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D0u;
        // 0x2821d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821D8u;
        goto label_2821d8;
    }
    ctx->pc = 0x2821D0u;
    {
        const bool branch_taken_0x2821d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821D0u;
        // 0x2821d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821d0) {
            ctx->pc = 0x2821F4u;
            goto label_2821f4;
        }
    }
    ctx->pc = 0x2821D8u;
label_2821d8:
    // 0x2821d8: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2821dc:
    // 0x2821dc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2821dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2821e0:
    // 0x2821e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2821e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2821e4:
    // 0x2821e4: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2821e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2821e8:
    // 0x2821e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2821e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2821ec:
    // 0x2821ec: 0xc04159e  jal         func_105678
label_2821f0:
    if (ctx->pc == 0x2821F0u) {
        ctx->pc = 0x2821F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821ECu;
        // 0x2821f0: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2821F4u;
        goto label_2821f4;
    }
    ctx->pc = 0x2821ECu;
    SET_GPR_U32(ctx, 31, 0x2821F4u);
    ctx->pc = 0x2821F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821ECu;
    // 0x2821f0: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2821ECu, 0x2821F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821F4u;
label_2821f4:
    // 0x2821f4: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2821f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2821f8:
    // 0x2821f8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2821f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2821fc:
    // 0x2821fc: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_282200:
    if (ctx->pc == 0x282200u) {
        ctx->pc = 0x282200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821FCu;
        // 0x282200: 0x26900002  addiu       $s0, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282204u;
        goto label_282204;
    }
    ctx->pc = 0x2821FCu;
    {
        const bool branch_taken_0x2821fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x282200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821FCu;
        // 0x282200: 0x26900002  addiu       $s0, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821fc) {
            ctx->pc = 0x28223Cu;
            goto label_28223c;
        }
    }
    ctx->pc = 0x282204u;
label_282204:
    // 0x282204: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x282204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_282208:
    // 0x282208: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x282208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28220c:
    // 0x28220c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_282210:
    // 0x282210: 0x40f809  jalr        $v0
label_282214:
    if (ctx->pc == 0x282214u) {
        ctx->pc = 0x282214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282210u;
        // 0x282214: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282218u;
        goto label_282218;
    }
    ctx->pc = 0x282210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282218u);
        ctx->pc = 0x282214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282210u;
        // 0x282214: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282210u, 0x282218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282218u;
label_282218:
    // 0x282218: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28221c:
    // 0x28221c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28221cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282220:
    // 0x282220: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x282220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282224:
    // 0x282224: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x282224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282228:
    // 0x282228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x282228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28222c:
    // 0x28222c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28222cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282230:
    // 0x282230: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x282230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_282234:
    // 0x282234: 0xc041664  jal         func_105990
label_282238:
    if (ctx->pc == 0x282238u) {
        ctx->pc = 0x282238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282234u;
        // 0x282238: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28223Cu;
        goto label_28223c;
    }
    ctx->pc = 0x282234u;
    SET_GPR_U32(ctx, 31, 0x28223Cu);
    ctx->pc = 0x282238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282234u;
    // 0x282238: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x282234u, 0x28223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28223Cu;
label_28223c:
    // 0x28223c: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_282240:
    if (ctx->pc == 0x282240u) {
        ctx->pc = 0x282244u;
        goto label_282244;
    }
    ctx->pc = 0x28223Cu;
    {
        const bool branch_taken_0x28223c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x28223c) {
            ctx->pc = 0x282280u;
            goto label_282280;
        }
    }
    ctx->pc = 0x282244u;
label_282244:
    // 0x282244: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x282244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_282248:
    // 0x282248: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x282248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28224c:
    // 0x28224c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_282250:
    // 0x282250: 0x40f809  jalr        $v0
label_282254:
    if (ctx->pc == 0x282254u) {
        ctx->pc = 0x282254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282250u;
        // 0x282254: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282258u;
        goto label_282258;
    }
    ctx->pc = 0x282250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x282258u);
        ctx->pc = 0x282254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282250u;
        // 0x282254: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282250u, 0x282258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282258u;
label_282258:
    // 0x282258: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_28225c:
    // 0x28225c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_282260:
    // 0x282260: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x282260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_282264:
    // 0x282264: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x282264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_282268:
    // 0x282268: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x282268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28226c:
    // 0x28226c: 0x254a1368  addiu       $t2, $t2, 0x1368
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4968));
label_282270:
    // 0x282270: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x282270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_282274:
    // 0x282274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282278:
    // 0x282278: 0xc041664  jal         func_105990
label_28227c:
    if (ctx->pc == 0x28227Cu) {
        ctx->pc = 0x28227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282278u;
        // 0x28227c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282280u;
        goto label_282280;
    }
    ctx->pc = 0x282278u;
    SET_GPR_U32(ctx, 31, 0x282280u);
    ctx->pc = 0x28227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282278u;
    // 0x28227c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x282278u, 0x282280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282280u;
label_282280:
    // 0x282280: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
label_282284:
    if (ctx->pc == 0x282284u) {
        ctx->pc = 0x282288u;
        goto label_282288;
    }
    ctx->pc = 0x282280u;
    {
        const bool branch_taken_0x282280 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x282280) {
            ctx->pc = 0x2822C0u;
            goto label_2822c0;
        }
    }
    ctx->pc = 0x282288u;
label_282288:
    // 0x282288: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x282288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28228c:
    // 0x28228c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28228cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_282290:
    // 0x282290: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x282290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_282294:
    // 0x282294: 0x40f809  jalr        $v0
label_282298:
    if (ctx->pc == 0x282298u) {
        ctx->pc = 0x282298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282294u;
        // 0x282298: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28229Cu;
        goto label_28229c;
    }
    ctx->pc = 0x282294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28229Cu);
        ctx->pc = 0x282298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282294u;
        // 0x282298: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282294u, 0x28229Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28229Cu;
label_28229c:
    // 0x28229c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28229cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2822a0:
    // 0x2822a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2822a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2822a4:
    // 0x2822a4: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2822a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2822a8:
    // 0x2822a8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2822a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2822ac:
    // 0x2822ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2822acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2822b0:
    // 0x2822b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2822b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2822b4:
    // 0x2822b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2822b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2822b8:
    // 0x2822b8: 0xc041664  jal         func_105990
label_2822bc:
    if (ctx->pc == 0x2822BCu) {
        ctx->pc = 0x2822BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822B8u;
        // 0x2822bc: 0x3c080008  lui         $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822C0u;
        goto label_2822c0;
    }
    ctx->pc = 0x2822B8u;
    SET_GPR_U32(ctx, 31, 0x2822C0u);
    ctx->pc = 0x2822BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822B8u;
    // 0x2822bc: 0x3c080008  lui         $t0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2822B8u, 0x2822C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822C0u;
label_2822c0:
    // 0x2822c0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_2822c4:
    if (ctx->pc == 0x2822C4u) {
        ctx->pc = 0x2822C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822C0u;
        // 0x2822c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822C8u;
        goto label_2822c8;
    }
    ctx->pc = 0x2822C0u;
    {
        const bool branch_taken_0x2822c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822C0u;
        // 0x2822c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822c0) {
            ctx->pc = 0x2822E0u;
            goto label_2822e0;
        }
    }
    ctx->pc = 0x2822C8u;
label_2822c8:
    // 0x2822c8: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x2822c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2822cc:
    // 0x2822cc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2822d0:
    // 0x2822d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2822d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2822d4:
    // 0x2822d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2822d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2822d8:
    // 0x2822d8: 0xc041b20  jal         func_106C80
label_2822dc:
    if (ctx->pc == 0x2822DCu) {
        ctx->pc = 0x2822DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822D8u;
        // 0x2822dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822E0u;
        goto label_2822e0;
    }
    ctx->pc = 0x2822D8u;
    SET_GPR_U32(ctx, 31, 0x2822E0u);
    ctx->pc = 0x2822DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822D8u;
    // 0x2822dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2822D8u, 0x2822E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822E0u;
label_2822e0:
    // 0x2822e0: 0xc05d484  jal         func_175210
label_2822e4:
    if (ctx->pc == 0x2822E4u) {
        ctx->pc = 0x2822E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822E0u;
        // 0x2822e4: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822E8u;
        goto label_2822e8;
    }
    ctx->pc = 0x2822E0u;
    SET_GPR_U32(ctx, 31, 0x2822E8u);
    ctx->pc = 0x2822E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822E0u;
    // 0x2822e4: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2822E0u, 0x2822E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822E8u;
label_2822e8:
    // 0x2822e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2822e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2822ec:
    // 0x2822ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2822f0:
    // 0x2822f0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2822f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2822f4:
    // 0x2822f4: 0xa0f809  jalr        $a1
label_2822f8:
    if (ctx->pc == 0x2822F8u) {
        ctx->pc = 0x2822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F4u;
        // 0x2822f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2822FCu;
        goto label_2822fc;
    }
    ctx->pc = 0x2822F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2822FCu);
        ctx->pc = 0x2822F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F4u;
        // 0x2822f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2822F4u, 0x2822FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2822FCu;
label_2822fc:
    // 0x2822fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2822fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282300:
    // 0x282300: 0xc087016  jal         func_21C058
label_282304:
    if (ctx->pc == 0x282304u) {
        ctx->pc = 0x282304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282300u;
        // 0x282304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282308u;
        goto label_282308;
    }
    ctx->pc = 0x282300u;
    SET_GPR_U32(ctx, 31, 0x282308u);
    ctx->pc = 0x282304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282300u;
    // 0x282304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x282300u, 0x282308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282308u;
label_282308:
    // 0x282308: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x282308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28230c:
    // 0x28230c: 0xc05d53a  jal         func_1754E8
label_282310:
    if (ctx->pc == 0x282310u) {
        ctx->pc = 0x282310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28230Cu;
        // 0x282310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282314u;
        goto label_282314;
    }
    ctx->pc = 0x28230Cu;
    SET_GPR_U32(ctx, 31, 0x282314u);
    ctx->pc = 0x282310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28230Cu;
    // 0x282310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x28230Cu, 0x282314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282314u;
label_282314:
    // 0x282314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_282318:
    // 0x282318: 0xc05d4f6  jal         func_1753D8
label_28231c:
    if (ctx->pc == 0x28231Cu) {
        ctx->pc = 0x28231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282318u;
        // 0x28231c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282320u;
        goto label_282320;
    }
    ctx->pc = 0x282318u;
    SET_GPR_U32(ctx, 31, 0x282320u);
    ctx->pc = 0x28231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282318u;
    // 0x28231c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x282318u, 0x282320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282320u;
label_282320:
    // 0x282320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282324:
    // 0x282324: 0xc089990  jal         func_226640
label_282328:
    if (ctx->pc == 0x282328u) {
        ctx->pc = 0x282328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282324u;
        // 0x282328: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28232Cu;
        goto label_28232c;
    }
    ctx->pc = 0x282324u;
    SET_GPR_U32(ctx, 31, 0x28232Cu);
    ctx->pc = 0x282328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282324u;
    // 0x282328: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x282324u, 0x28232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28232Cu;
label_28232c:
    // 0x28232c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282330:
    // 0x282330: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x282330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_282334:
    // 0x282334: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x282334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_282338:
    // 0x282338: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x282338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_28233c:
    // 0x28233c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x28233cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_282340:
    // 0x282340: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x282340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_282344:
    // 0x282344: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x282344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_282348:
    // 0x282348: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x282348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28234c:
    // 0x28234c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x28234cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_282350:
    // 0x282350: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x282350u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_282354:
    // 0x282354: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x282354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_282358:
    // 0x282358: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x282358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_28235c:
    // 0x28235c: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x28235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_282360:
    // 0x282360: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x282360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_282364:
    // 0x282364: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x282364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_282368:
    // 0x282368: 0x3e00008  jr          $ra
label_28236c:
    if (ctx->pc == 0x28236Cu) {
        ctx->pc = 0x28236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282368u;
        // 0x28236c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282370u;
        goto label_fallthrough_0x282368;
    }
    ctx->pc = 0x282368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282368u;
        // 0x28236c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x282368:
    ctx->pc = 0x282370u;
}
