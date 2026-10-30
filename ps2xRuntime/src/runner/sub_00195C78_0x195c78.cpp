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

// Function: sub_00195C78
// Address: 0x195c78 - 0x196468
void sub_00195C78_0x195c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C78_0x195c78");
#endif

    switch (ctx->pc) {
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e40u: goto label_195e40;
        case 0x195e44u: goto label_195e44;
        case 0x195e48u: goto label_195e48;
        case 0x195e4cu: goto label_195e4c;
        case 0x195e50u: goto label_195e50;
        case 0x195e54u: goto label_195e54;
        case 0x195e58u: goto label_195e58;
        case 0x195e5cu: goto label_195e5c;
        case 0x195e60u: goto label_195e60;
        case 0x195e64u: goto label_195e64;
        case 0x195e68u: goto label_195e68;
        case 0x195e6cu: goto label_195e6c;
        case 0x195e70u: goto label_195e70;
        case 0x195e74u: goto label_195e74;
        case 0x195e78u: goto label_195e78;
        case 0x195e7cu: goto label_195e7c;
        case 0x195e80u: goto label_195e80;
        case 0x195e84u: goto label_195e84;
        case 0x195e88u: goto label_195e88;
        case 0x195e8cu: goto label_195e8c;
        case 0x195e90u: goto label_195e90;
        case 0x195e94u: goto label_195e94;
        case 0x195e98u: goto label_195e98;
        case 0x195e9cu: goto label_195e9c;
        case 0x195ea0u: goto label_195ea0;
        case 0x195ea4u: goto label_195ea4;
        case 0x195ea8u: goto label_195ea8;
        case 0x195eacu: goto label_195eac;
        case 0x195eb0u: goto label_195eb0;
        case 0x195eb4u: goto label_195eb4;
        case 0x195eb8u: goto label_195eb8;
        case 0x195ebcu: goto label_195ebc;
        case 0x195ec0u: goto label_195ec0;
        case 0x195ec4u: goto label_195ec4;
        case 0x195ec8u: goto label_195ec8;
        case 0x195eccu: goto label_195ecc;
        case 0x195ed0u: goto label_195ed0;
        case 0x195ed4u: goto label_195ed4;
        case 0x195ed8u: goto label_195ed8;
        case 0x195edcu: goto label_195edc;
        case 0x195ee0u: goto label_195ee0;
        case 0x195ee4u: goto label_195ee4;
        case 0x195ee8u: goto label_195ee8;
        case 0x195eecu: goto label_195eec;
        case 0x195ef0u: goto label_195ef0;
        case 0x195ef4u: goto label_195ef4;
        case 0x195ef8u: goto label_195ef8;
        case 0x195efcu: goto label_195efc;
        case 0x195f00u: goto label_195f00;
        case 0x195f04u: goto label_195f04;
        case 0x195f08u: goto label_195f08;
        case 0x195f0cu: goto label_195f0c;
        case 0x195f10u: goto label_195f10;
        case 0x195f14u: goto label_195f14;
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f30u: goto label_195f30;
        case 0x195f34u: goto label_195f34;
        case 0x195f38u: goto label_195f38;
        case 0x195f3cu: goto label_195f3c;
        case 0x195f40u: goto label_195f40;
        case 0x195f44u: goto label_195f44;
        case 0x195f48u: goto label_195f48;
        case 0x195f4cu: goto label_195f4c;
        case 0x195f50u: goto label_195f50;
        case 0x195f54u: goto label_195f54;
        case 0x195f58u: goto label_195f58;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f60u: goto label_195f60;
        case 0x195f64u: goto label_195f64;
        case 0x195f68u: goto label_195f68;
        case 0x195f6cu: goto label_195f6c;
        case 0x195f70u: goto label_195f70;
        case 0x195f74u: goto label_195f74;
        case 0x195f78u: goto label_195f78;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f80u: goto label_195f80;
        case 0x195f84u: goto label_195f84;
        case 0x195f88u: goto label_195f88;
        case 0x195f8cu: goto label_195f8c;
        case 0x195f90u: goto label_195f90;
        case 0x195f94u: goto label_195f94;
        case 0x195f98u: goto label_195f98;
        case 0x195f9cu: goto label_195f9c;
        case 0x195fa0u: goto label_195fa0;
        case 0x195fa4u: goto label_195fa4;
        case 0x195fa8u: goto label_195fa8;
        case 0x195facu: goto label_195fac;
        case 0x195fb0u: goto label_195fb0;
        case 0x195fb4u: goto label_195fb4;
        case 0x195fb8u: goto label_195fb8;
        case 0x195fbcu: goto label_195fbc;
        case 0x195fc0u: goto label_195fc0;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        case 0x195fe0u: goto label_195fe0;
        case 0x195fe4u: goto label_195fe4;
        case 0x195fe8u: goto label_195fe8;
        case 0x195fecu: goto label_195fec;
        case 0x195ff0u: goto label_195ff0;
        case 0x195ff4u: goto label_195ff4;
        case 0x195ff8u: goto label_195ff8;
        case 0x195ffcu: goto label_195ffc;
        case 0x196000u: goto label_196000;
        case 0x196004u: goto label_196004;
        case 0x196008u: goto label_196008;
        case 0x19600cu: goto label_19600c;
        case 0x196010u: goto label_196010;
        case 0x196014u: goto label_196014;
        case 0x196018u: goto label_196018;
        case 0x19601cu: goto label_19601c;
        case 0x196020u: goto label_196020;
        case 0x196024u: goto label_196024;
        case 0x196028u: goto label_196028;
        case 0x19602cu: goto label_19602c;
        case 0x196030u: goto label_196030;
        case 0x196034u: goto label_196034;
        case 0x196038u: goto label_196038;
        case 0x19603cu: goto label_19603c;
        case 0x196040u: goto label_196040;
        case 0x196044u: goto label_196044;
        case 0x196048u: goto label_196048;
        case 0x19604cu: goto label_19604c;
        case 0x196050u: goto label_196050;
        case 0x196054u: goto label_196054;
        case 0x196058u: goto label_196058;
        case 0x19605cu: goto label_19605c;
        case 0x196060u: goto label_196060;
        case 0x196064u: goto label_196064;
        case 0x196068u: goto label_196068;
        case 0x19606cu: goto label_19606c;
        case 0x196070u: goto label_196070;
        case 0x196074u: goto label_196074;
        case 0x196078u: goto label_196078;
        case 0x19607cu: goto label_19607c;
        case 0x196080u: goto label_196080;
        case 0x196084u: goto label_196084;
        case 0x196088u: goto label_196088;
        case 0x19608cu: goto label_19608c;
        case 0x196090u: goto label_196090;
        case 0x196094u: goto label_196094;
        case 0x196098u: goto label_196098;
        case 0x19609cu: goto label_19609c;
        case 0x1960a0u: goto label_1960a0;
        case 0x1960a4u: goto label_1960a4;
        case 0x1960a8u: goto label_1960a8;
        case 0x1960acu: goto label_1960ac;
        case 0x1960b0u: goto label_1960b0;
        case 0x1960b4u: goto label_1960b4;
        case 0x1960b8u: goto label_1960b8;
        case 0x1960bcu: goto label_1960bc;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960c4u: goto label_1960c4;
        case 0x1960c8u: goto label_1960c8;
        case 0x1960ccu: goto label_1960cc;
        case 0x1960d0u: goto label_1960d0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960d8u: goto label_1960d8;
        case 0x1960dcu: goto label_1960dc;
        case 0x1960e0u: goto label_1960e0;
        case 0x1960e4u: goto label_1960e4;
        case 0x1960e8u: goto label_1960e8;
        case 0x1960ecu: goto label_1960ec;
        case 0x1960f0u: goto label_1960f0;
        case 0x1960f4u: goto label_1960f4;
        case 0x1960f8u: goto label_1960f8;
        case 0x1960fcu: goto label_1960fc;
        case 0x196100u: goto label_196100;
        case 0x196104u: goto label_196104;
        case 0x196108u: goto label_196108;
        case 0x19610cu: goto label_19610c;
        case 0x196110u: goto label_196110;
        case 0x196114u: goto label_196114;
        case 0x196118u: goto label_196118;
        case 0x19611cu: goto label_19611c;
        case 0x196120u: goto label_196120;
        case 0x196124u: goto label_196124;
        case 0x196128u: goto label_196128;
        case 0x19612cu: goto label_19612c;
        case 0x196130u: goto label_196130;
        case 0x196134u: goto label_196134;
        case 0x196138u: goto label_196138;
        case 0x19613cu: goto label_19613c;
        case 0x196140u: goto label_196140;
        case 0x196144u: goto label_196144;
        case 0x196148u: goto label_196148;
        case 0x19614cu: goto label_19614c;
        case 0x196150u: goto label_196150;
        case 0x196154u: goto label_196154;
        case 0x196158u: goto label_196158;
        case 0x19615cu: goto label_19615c;
        case 0x196160u: goto label_196160;
        case 0x196164u: goto label_196164;
        case 0x196168u: goto label_196168;
        case 0x19616cu: goto label_19616c;
        case 0x196170u: goto label_196170;
        case 0x196174u: goto label_196174;
        case 0x196178u: goto label_196178;
        case 0x19617cu: goto label_19617c;
        case 0x196180u: goto label_196180;
        case 0x196184u: goto label_196184;
        case 0x196188u: goto label_196188;
        case 0x19618cu: goto label_19618c;
        case 0x196190u: goto label_196190;
        case 0x196194u: goto label_196194;
        case 0x196198u: goto label_196198;
        case 0x19619cu: goto label_19619c;
        case 0x1961a0u: goto label_1961a0;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961a8u: goto label_1961a8;
        case 0x1961acu: goto label_1961ac;
        case 0x1961b0u: goto label_1961b0;
        case 0x1961b4u: goto label_1961b4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961bcu: goto label_1961bc;
        case 0x1961c0u: goto label_1961c0;
        case 0x1961c4u: goto label_1961c4;
        case 0x1961c8u: goto label_1961c8;
        case 0x1961ccu: goto label_1961cc;
        case 0x1961d0u: goto label_1961d0;
        case 0x1961d4u: goto label_1961d4;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961dcu: goto label_1961dc;
        case 0x1961e0u: goto label_1961e0;
        case 0x1961e4u: goto label_1961e4;
        case 0x1961e8u: goto label_1961e8;
        case 0x1961ecu: goto label_1961ec;
        case 0x1961f0u: goto label_1961f0;
        case 0x1961f4u: goto label_1961f4;
        case 0x1961f8u: goto label_1961f8;
        case 0x1961fcu: goto label_1961fc;
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        default: break;
    }

    ctx->pc = 0x195c78u;

label_195c78:
    // 0x195c78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x195c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_195c7c:
    // 0x195c7c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x195c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_195c80:
    // 0x195c80: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x195c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_195c84:
    // 0x195c84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x195c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195c88:
    // 0x195c88: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x195c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_195c8c:
    // 0x195c8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x195c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195c90:
    // 0x195c90: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x195c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_195c94:
    // 0x195c94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x195c94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_195c98:
    // 0x195c98: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x195c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_195c9c:
    // 0x195c9c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x195c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_195ca0:
    // 0x195ca0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x195ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_195ca4:
    // 0x195ca4: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x195ca4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_195ca8:
    // 0x195ca8: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x195ca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_195cac:
    // 0x195cac: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x195cacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_195cb0:
    // 0x195cb0: 0xc047ab8  jal         func_11EAE0
label_195cb4:
    if (ctx->pc == 0x195CB4u) {
        ctx->pc = 0x195CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CB0u;
        // 0x195cb4: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CB8u;
        goto label_195cb8;
    }
    ctx->pc = 0x195CB0u;
    SET_GPR_U32(ctx, 31, 0x195CB8u);
    ctx->pc = 0x195CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CB0u;
    // 0x195cb4: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x195CB0u, 0x195CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CB8u;
label_195cb8:
    // 0x195cb8: 0x8e03ce78  lw          $v1, -0x3188($s0)
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954616)));
label_195cbc:
    // 0x195cbc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_195cc0:
    if (ctx->pc == 0x195CC0u) {
        ctx->pc = 0x195CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CBCu;
        // 0x195cc0: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CC4u;
        goto label_195cc4;
    }
    ctx->pc = 0x195CBCu;
    {
        const bool branch_taken_0x195cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195cbc) {
            ctx->pc = 0x195CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CBCu;
            // 0x195cc0: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195CC4u;
label_195cc4:
    // 0x195cc4: 0xc047ab8  jal         func_11EAE0
label_195cc8:
    if (ctx->pc == 0x195CC8u) {
        ctx->pc = 0x195CCCu;
        goto label_195ccc;
    }
    ctx->pc = 0x195CC4u;
    SET_GPR_U32(ctx, 31, 0x195CCCu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x195CC4u, 0x195CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CCCu;
label_195ccc:
    // 0x195ccc: 0xae02ce78  sw          $v0, -0x3188($s0)
    ctx->pc = 0x195cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954616), GPR_U32(ctx, 2));
label_195cd0:
    // 0x195cd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195cd4:
    // 0x195cd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195cd8:
    // 0x195cd8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195cdc:
    // 0x195cdc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195ce0:
    // 0x195ce0: 0x40f809  jalr        $v0
label_195ce4:
    if (ctx->pc == 0x195CE4u) {
        ctx->pc = 0x195CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CE0u;
        // 0x195ce4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CE8u;
        goto label_195ce8;
    }
    ctx->pc = 0x195CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195CE8u);
        ctx->pc = 0x195CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CE0u;
        // 0x195ce4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195CE0u, 0x195CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195CE8u;
label_195ce8:
    // 0x195ce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195cec:
    // 0x195cec: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x195cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_195cf0:
    // 0x195cf0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195cf4:
    // 0x195cf4: 0xa0f809  jalr        $a1
label_195cf8:
    if (ctx->pc == 0x195CF8u) {
        ctx->pc = 0x195CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CF4u;
        // 0x195cf8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CFCu;
        goto label_195cfc;
    }
    ctx->pc = 0x195CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195CFCu);
        ctx->pc = 0x195CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CF4u;
        // 0x195cf8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195CF4u, 0x195CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195CFCu;
label_195cfc:
    // 0x195cfc: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_195d00:
    if (ctx->pc == 0x195D00u) {
        ctx->pc = 0x195D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CFCu;
        // 0x195d00: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D04u;
        goto label_195d04;
    }
    ctx->pc = 0x195CFCu;
    {
        const bool branch_taken_0x195cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CFCu;
        // 0x195d00: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cfc) {
            ctx->pc = 0x195E8Cu;
            goto label_195e8c;
        }
    }
    ctx->pc = 0x195D04u;
label_195d04:
    // 0x195d04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195d08:
    // 0x195d08: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195d0c:
    // 0x195d0c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195d10:
    // 0x195d10: 0x40f809  jalr        $v0
label_195d14:
    if (ctx->pc == 0x195D14u) {
        ctx->pc = 0x195D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D10u;
        // 0x195d14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D18u;
        goto label_195d18;
    }
    ctx->pc = 0x195D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D18u);
        ctx->pc = 0x195D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D10u;
        // 0x195d14: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D10u, 0x195D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D18u;
label_195d18:
    // 0x195d18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195d1c:
    // 0x195d1c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_195d20:
    // 0x195d20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x195d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_195d24:
    // 0x195d24: 0xa0f809  jalr        $a1
label_195d28:
    if (ctx->pc == 0x195D28u) {
        ctx->pc = 0x195D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D24u;
        // 0x195d28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D2Cu;
        goto label_195d2c;
    }
    ctx->pc = 0x195D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195D2Cu);
        ctx->pc = 0x195D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D24u;
        // 0x195d28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D24u, 0x195D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D2Cu;
label_195d2c:
    // 0x195d2c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195d30:
    // 0x195d30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195d34:
    // 0x195d34: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195d34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195d38:
    // 0x195d38: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195d3c:
    // 0x195d3c: 0x40f809  jalr        $v0
label_195d40:
    if (ctx->pc == 0x195D40u) {
        ctx->pc = 0x195D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D3Cu;
        // 0x195d40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D44u;
        goto label_195d44;
    }
    ctx->pc = 0x195D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D44u);
        ctx->pc = 0x195D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D3Cu;
        // 0x195d40: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D3Cu, 0x195D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D44u;
label_195d44:
    // 0x195d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195d48:
    // 0x195d48: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x195d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_195d4c:
    // 0x195d4c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x195d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_195d50:
    // 0x195d50: 0xa0f809  jalr        $a1
label_195d54:
    if (ctx->pc == 0x195D54u) {
        ctx->pc = 0x195D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D50u;
        // 0x195d54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D58u;
        goto label_195d58;
    }
    ctx->pc = 0x195D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195D58u);
        ctx->pc = 0x195D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D50u;
        // 0x195d54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D50u, 0x195D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D58u;
label_195d58:
    // 0x195d58: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195d5c:
    // 0x195d5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195d60:
    // 0x195d60: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195d64:
    // 0x195d64: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195d68:
    // 0x195d68: 0x40f809  jalr        $v0
label_195d6c:
    if (ctx->pc == 0x195D6Cu) {
        ctx->pc = 0x195D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D68u;
        // 0x195d6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D70u;
        goto label_195d70;
    }
    ctx->pc = 0x195D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D70u);
        ctx->pc = 0x195D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D68u;
        // 0x195d6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D68u, 0x195D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D70u;
label_195d70:
    // 0x195d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195d74:
    // 0x195d74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x195d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_195d78:
    // 0x195d78: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x195d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_195d7c:
    // 0x195d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195d80:
    // 0x195d80: 0xc121848  jal         func_486120
label_195d84:
    if (ctx->pc == 0x195D84u) {
        ctx->pc = 0x195D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D80u;
        // 0x195d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D88u;
        goto label_195d88;
    }
    ctx->pc = 0x195D80u;
    SET_GPR_U32(ctx, 31, 0x195D88u);
    ctx->pc = 0x195D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D80u;
    // 0x195d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x195D80u, 0x195D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D88u;
label_195d88:
    // 0x195d88: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x195d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_195d8c:
    // 0x195d8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195d90:
    // 0x195d90: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195d94:
    // 0x195d94: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195d98:
    // 0x195d98: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195d9c:
    // 0x195d9c: 0x40f809  jalr        $v0
label_195da0:
    if (ctx->pc == 0x195DA0u) {
        ctx->pc = 0x195DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D9Cu;
        // 0x195da0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DA4u;
        goto label_195da4;
    }
    ctx->pc = 0x195D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195DA4u);
        ctx->pc = 0x195DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D9Cu;
        // 0x195da0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D9Cu, 0x195DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195DA4u;
label_195da4:
    // 0x195da4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195da8:
    // 0x195da8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195dac:
    // 0x195dac: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195db0:
    // 0x195db0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195db4:
    // 0x195db4: 0x40f809  jalr        $v0
label_195db8:
    if (ctx->pc == 0x195DB8u) {
        ctx->pc = 0x195DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DB4u;
        // 0x195db8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DBCu;
        goto label_195dbc;
    }
    ctx->pc = 0x195DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195DBCu);
        ctx->pc = 0x195DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DB4u;
        // 0x195db8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195DB4u, 0x195DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195DBCu;
label_195dbc:
    // 0x195dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195dc0:
    // 0x195dc0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_195dc4:
    // 0x195dc4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x195dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_195dc8:
    // 0x195dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195dcc:
    // 0x195dcc: 0xc121848  jal         func_486120
label_195dd0:
    if (ctx->pc == 0x195DD0u) {
        ctx->pc = 0x195DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DCCu;
        // 0x195dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DD4u;
        goto label_195dd4;
    }
    ctx->pc = 0x195DCCu;
    SET_GPR_U32(ctx, 31, 0x195DD4u);
    ctx->pc = 0x195DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195DCCu;
    // 0x195dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x195DCCu, 0x195DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DD4u;
label_195dd4:
    // 0x195dd4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x195dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_195dd8:
    // 0x195dd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195ddc:
    // 0x195ddc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195de0:
    // 0x195de0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195de4:
    // 0x195de4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195de8:
    // 0x195de8: 0x40f809  jalr        $v0
label_195dec:
    if (ctx->pc == 0x195DECu) {
        ctx->pc = 0x195DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE8u;
        // 0x195dec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DF0u;
        goto label_195df0;
    }
    ctx->pc = 0x195DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195DF0u);
        ctx->pc = 0x195DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE8u;
        // 0x195dec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195DE8u, 0x195DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195DF0u;
label_195df0:
    // 0x195df0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195df4:
    // 0x195df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195df8:
    // 0x195df8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195dfc:
    // 0x195dfc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195e00:
    // 0x195e00: 0x40f809  jalr        $v0
label_195e04:
    if (ctx->pc == 0x195E04u) {
        ctx->pc = 0x195E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E00u;
        // 0x195e04: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E08u;
        goto label_195e08;
    }
    ctx->pc = 0x195E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195E08u);
        ctx->pc = 0x195E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E00u;
        // 0x195e04: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E00u, 0x195E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195E08u;
label_195e08:
    // 0x195e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195e0c:
    // 0x195e0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195e10:
    // 0x195e10: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_195e14:
    // 0x195e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195e18:
    // 0x195e18: 0xc121848  jal         func_486120
label_195e1c:
    if (ctx->pc == 0x195E1Cu) {
        ctx->pc = 0x195E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E18u;
        // 0x195e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E20u;
        goto label_195e20;
    }
    ctx->pc = 0x195E18u;
    SET_GPR_U32(ctx, 31, 0x195E20u);
    ctx->pc = 0x195E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E18u;
    // 0x195e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x195E18u, 0x195E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E20u;
label_195e20:
    // 0x195e20: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x195e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_195e24:
    // 0x195e24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195e28:
    // 0x195e28: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195e2c:
    // 0x195e2c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195e30:
    // 0x195e30: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195e34:
    // 0x195e34: 0x40f809  jalr        $v0
label_195e38:
    if (ctx->pc == 0x195E38u) {
        ctx->pc = 0x195E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E34u;
        // 0x195e38: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E3Cu;
        goto label_195e3c;
    }
    ctx->pc = 0x195E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195E3Cu);
        ctx->pc = 0x195E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E34u;
        // 0x195e38: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E34u, 0x195E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195E3Cu;
label_195e3c:
    // 0x195e3c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195e40:
    // 0x195e40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195e44:
    // 0x195e44: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195e48:
    // 0x195e48: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195e4c:
    // 0x195e4c: 0x40f809  jalr        $v0
label_195e50:
    if (ctx->pc == 0x195E50u) {
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E54u;
        goto label_195e54;
    }
    ctx->pc = 0x195E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195E54u);
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E4Cu, 0x195E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195E54u;
label_195e54:
    // 0x195e54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195e58:
    // 0x195e58: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x195e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_195e5c:
    // 0x195e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195e60:
    // 0x195e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195e64:
    // 0x195e64: 0xc121848  jal         func_486120
label_195e68:
    if (ctx->pc == 0x195E68u) {
        ctx->pc = 0x195E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E64u;
        // 0x195e68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E6Cu;
        goto label_195e6c;
    }
    ctx->pc = 0x195E64u;
    SET_GPR_U32(ctx, 31, 0x195E6Cu);
    ctx->pc = 0x195E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E64u;
    // 0x195e68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x195E64u, 0x195E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E6Cu;
label_195e6c:
    // 0x195e6c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x195e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_195e70:
    // 0x195e70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195e74:
    // 0x195e74: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195e78:
    // 0x195e78: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195e7c:
    // 0x195e7c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195e80:
    // 0x195e80: 0x40f809  jalr        $v0
label_195e84:
    if (ctx->pc == 0x195E84u) {
        ctx->pc = 0x195E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E80u;
        // 0x195e84: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E88u;
        goto label_195e88;
    }
    ctx->pc = 0x195E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195E88u);
        ctx->pc = 0x195E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E80u;
        // 0x195e84: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E80u, 0x195E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195E88u;
label_195e88:
    // 0x195e88: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195e8c:
    // 0x195e8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195e90:
    // 0x195e90: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195e94:
    // 0x195e94: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195e98:
    // 0x195e98: 0x40f809  jalr        $v0
label_195e9c:
    if (ctx->pc == 0x195E9Cu) {
        ctx->pc = 0x195E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E98u;
        // 0x195e9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EA0u;
        goto label_195ea0;
    }
    ctx->pc = 0x195E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195EA0u);
        ctx->pc = 0x195E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E98u;
        // 0x195e9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E98u, 0x195EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195EA0u;
label_195ea0:
    // 0x195ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195ea4:
    // 0x195ea4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195ea8:
    // 0x195ea8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x195ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195eac:
    // 0x195eac: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_195eb0:
    // 0x195eb0: 0x86050030  lh          $a1, 0x30($s0)
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_195eb4:
    // 0x195eb4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x195eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195eb8:
    // 0x195eb8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x195eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_195ebc:
    // 0x195ebc: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x195ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_195ec0:
    // 0x195ec0: 0x40f809  jalr        $v0
label_195ec4:
    if (ctx->pc == 0x195EC4u) {
        ctx->pc = 0x195EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EC0u;
        // 0x195ec4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EC8u;
        goto label_195ec8;
    }
    ctx->pc = 0x195EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195EC8u);
        ctx->pc = 0x195EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EC0u;
        // 0x195ec4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195EC0u, 0x195EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195EC8u;
label_195ec8:
    // 0x195ec8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195ecc:
    // 0x195ecc: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x195eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_195ed0:
    // 0x195ed0: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x195ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_195ed4:
    // 0x195ed4: 0xa0f809  jalr        $a1
label_195ed8:
    if (ctx->pc == 0x195ED8u) {
        ctx->pc = 0x195ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED4u;
        // 0x195ed8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EDCu;
        goto label_195edc;
    }
    ctx->pc = 0x195ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195EDCu);
        ctx->pc = 0x195ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED4u;
        // 0x195ed8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195ED4u, 0x195EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195EDCu;
label_195edc:
    // 0x195edc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_195ee0:
    // 0x195ee0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x195ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_195ee4:
    // 0x195ee4: 0x40f809  jalr        $v0
label_195ee8:
    if (ctx->pc == 0x195EE8u) {
        ctx->pc = 0x195EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EE4u;
        // 0x195ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195EECu;
        goto label_195eec;
    }
    ctx->pc = 0x195EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195EECu);
        ctx->pc = 0x195EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EE4u;
        // 0x195ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195EE4u, 0x195EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195EECu;
label_195eec:
    // 0x195eec: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195ef0:
    // 0x195ef0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195ef4:
    // 0x195ef4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195ef8:
    // 0x195ef8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195efc:
    // 0x195efc: 0x40f809  jalr        $v0
label_195f00:
    if (ctx->pc == 0x195F00u) {
        ctx->pc = 0x195F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EFCu;
        // 0x195f00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F04u;
        goto label_195f04;
    }
    ctx->pc = 0x195EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195F04u);
        ctx->pc = 0x195F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EFCu;
        // 0x195f00: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195EFCu, 0x195F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F04u;
label_195f04:
    // 0x195f04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195f08:
    // 0x195f08: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195f0c:
    // 0x195f0c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x195f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195f10:
    // 0x195f10: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x195f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_195f14:
    // 0x195f14: 0x86050038  lh          $a1, 0x38($s0)
    ctx->pc = 0x195f14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_195f18:
    // 0x195f18: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x195f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195f1c:
    // 0x195f1c: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x195f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_195f20:
    // 0x195f20: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x195f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_195f24:
    // 0x195f24: 0x40f809  jalr        $v0
label_195f28:
    if (ctx->pc == 0x195F28u) {
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F2Cu;
        goto label_195f2c;
    }
    ctx->pc = 0x195F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195F2Cu);
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F24u, 0x195F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F2Cu;
label_195f2c:
    // 0x195f2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195f30:
    // 0x195f30: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_195f34:
    // 0x195f34: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x195f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_195f38:
    // 0x195f38: 0xa0f809  jalr        $a1
label_195f3c:
    if (ctx->pc == 0x195F3Cu) {
        ctx->pc = 0x195F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F38u;
        // 0x195f3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F40u;
        goto label_195f40;
    }
    ctx->pc = 0x195F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195F40u);
        ctx->pc = 0x195F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F38u;
        // 0x195f3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F38u, 0x195F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F40u;
label_195f40:
    // 0x195f40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_195f44:
    // 0x195f44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x195f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_195f48:
    // 0x195f48: 0x40f809  jalr        $v0
label_195f4c:
    if (ctx->pc == 0x195F4Cu) {
        ctx->pc = 0x195F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F48u;
        // 0x195f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F50u;
        goto label_195f50;
    }
    ctx->pc = 0x195F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195F50u);
        ctx->pc = 0x195F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F48u;
        // 0x195f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F48u, 0x195F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F50u;
label_195f50:
    // 0x195f50: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195f54:
    // 0x195f54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195f58:
    // 0x195f58: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195f5c:
    // 0x195f5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195f60:
    // 0x195f60: 0x40f809  jalr        $v0
label_195f64:
    if (ctx->pc == 0x195F64u) {
        ctx->pc = 0x195F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F60u;
        // 0x195f64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F68u;
        goto label_195f68;
    }
    ctx->pc = 0x195F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195F68u);
        ctx->pc = 0x195F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F60u;
        // 0x195f64: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F60u, 0x195F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F68u;
label_195f68:
    // 0x195f68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195f6c:
    // 0x195f6c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195f70:
    // 0x195f70: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x195f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195f74:
    // 0x195f74: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x195f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_195f78:
    // 0x195f78: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x195f78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_195f7c:
    // 0x195f7c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x195f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195f80:
    // 0x195f80: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x195f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_195f84:
    // 0x195f84: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_195f88:
    // 0x195f88: 0x40f809  jalr        $v0
label_195f8c:
    if (ctx->pc == 0x195F8Cu) {
        ctx->pc = 0x195F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F88u;
        // 0x195f8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F90u;
        goto label_195f90;
    }
    ctx->pc = 0x195F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195F90u);
        ctx->pc = 0x195F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F88u;
        // 0x195f8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F88u, 0x195F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F90u;
label_195f90:
    // 0x195f90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195f94:
    // 0x195f94: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x195f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_195f98:
    // 0x195f98: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x195f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_195f9c:
    // 0x195f9c: 0xa0f809  jalr        $a1
label_195fa0:
    if (ctx->pc == 0x195FA0u) {
        ctx->pc = 0x195FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F9Cu;
        // 0x195fa0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FA4u;
        goto label_195fa4;
    }
    ctx->pc = 0x195F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195FA4u);
        ctx->pc = 0x195FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F9Cu;
        // 0x195fa0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F9Cu, 0x195FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195FA4u;
label_195fa4:
    // 0x195fa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_195fa8:
    // 0x195fa8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x195fa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_195fac:
    // 0x195fac: 0x40f809  jalr        $v0
label_195fb0:
    if (ctx->pc == 0x195FB0u) {
        ctx->pc = 0x195FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FACu;
        // 0x195fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FB4u;
        goto label_195fb4;
    }
    ctx->pc = 0x195FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195FB4u);
        ctx->pc = 0x195FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FACu;
        // 0x195fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FACu, 0x195FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195FB4u;
label_195fb4:
    // 0x195fb4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195fb8:
    // 0x195fb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195fbc:
    // 0x195fbc: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195fc0:
    // 0x195fc0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195fc4:
    // 0x195fc4: 0x40f809  jalr        $v0
label_195fc8:
    if (ctx->pc == 0x195FC8u) {
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FCCu;
        goto label_195fcc;
    }
    ctx->pc = 0x195FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195FCCu);
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FC4u, 0x195FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195FCCu;
label_195fcc:
    // 0x195fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195fd0:
    // 0x195fd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_195fd4:
    // 0x195fd4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x195fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195fd8:
    // 0x195fd8: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_195fdc:
    // 0x195fdc: 0x86050030  lh          $a1, 0x30($s0)
    ctx->pc = 0x195fdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_195fe0:
    // 0x195fe0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_195fe4:
    // 0x195fe4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x195fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_195fe8:
    // 0x195fe8: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x195fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_195fec:
    // 0x195fec: 0x40f809  jalr        $v0
label_195ff0:
    if (ctx->pc == 0x195FF0u) {
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FF4u;
        goto label_195ff4;
    }
    ctx->pc = 0x195FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195FF4u);
        ctx->pc = 0x195FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FECu;
        // 0x195ff0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FECu, 0x195FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195FF4u;
label_195ff4:
    // 0x195ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195ff8:
    // 0x195ff8: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x195ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_195ffc:
    // 0x195ffc: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x195ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_196000:
    // 0x196000: 0xa0f809  jalr        $a1
label_196004:
    if (ctx->pc == 0x196004u) {
        ctx->pc = 0x196004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196000u;
        // 0x196004: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196008u;
        goto label_196008;
    }
    ctx->pc = 0x196000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x196008u);
        ctx->pc = 0x196004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196000u;
        // 0x196004: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196000u, 0x196008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196008u;
label_196008:
    // 0x196008: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19600c:
    // 0x19600c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19600cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_196010:
    // 0x196010: 0x40f809  jalr        $v0
label_196014:
    if (ctx->pc == 0x196014u) {
        ctx->pc = 0x196014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196010u;
        // 0x196014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196018u;
        goto label_196018;
    }
    ctx->pc = 0x196010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196018u);
        ctx->pc = 0x196014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196010u;
        // 0x196014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196010u, 0x196018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196018u;
label_196018:
    // 0x196018: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19601c:
    // 0x19601c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19601cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196020:
    // 0x196020: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_196024:
    // 0x196024: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x196024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_196028:
    // 0x196028: 0x40f809  jalr        $v0
label_19602c:
    if (ctx->pc == 0x19602Cu) {
        ctx->pc = 0x19602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196028u;
        // 0x19602c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196030u;
        goto label_196030;
    }
    ctx->pc = 0x196028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196030u);
        ctx->pc = 0x19602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196028u;
        // 0x19602c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196028u, 0x196030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196030u;
label_196030:
    // 0x196030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196034:
    // 0x196034: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_196038:
    // 0x196038: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19603c:
    // 0x19603c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x19603cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_196040:
    // 0x196040: 0x86050038  lh          $a1, 0x38($s0)
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_196044:
    // 0x196044: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x196044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_196048:
    // 0x196048: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_19604c:
    // 0x19604c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x19604cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_196050:
    // 0x196050: 0x40f809  jalr        $v0
label_196054:
    if (ctx->pc == 0x196054u) {
        ctx->pc = 0x196054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196050u;
        // 0x196054: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196058u;
        goto label_196058;
    }
    ctx->pc = 0x196050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196058u);
        ctx->pc = 0x196054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196050u;
        // 0x196054: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196050u, 0x196058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196058u;
label_196058:
    // 0x196058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19605c:
    // 0x19605c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x19605cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_196060:
    // 0x196060: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x196060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_196064:
    // 0x196064: 0xa0f809  jalr        $a1
label_196068:
    if (ctx->pc == 0x196068u) {
        ctx->pc = 0x196068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196064u;
        // 0x196068: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19606Cu;
        goto label_19606c;
    }
    ctx->pc = 0x196064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19606Cu);
        ctx->pc = 0x196068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196064u;
        // 0x196068: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196064u, 0x19606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19606Cu;
label_19606c:
    // 0x19606c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_196070:
    // 0x196070: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x196070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_196074:
    // 0x196074: 0x40f809  jalr        $v0
label_196078:
    if (ctx->pc == 0x196078u) {
        ctx->pc = 0x196078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196074u;
        // 0x196078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19607Cu;
        goto label_19607c;
    }
    ctx->pc = 0x196074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19607Cu);
        ctx->pc = 0x196078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196074u;
        // 0x196078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196074u, 0x19607Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19607Cu;
label_19607c:
    // 0x19607c: 0xc047e6c  jal         func_11F9B0
label_196080:
    if (ctx->pc == 0x196080u) {
        ctx->pc = 0x196080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19607Cu;
        // 0x196080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196084u;
        goto label_196084;
    }
    ctx->pc = 0x19607Cu;
    SET_GPR_U32(ctx, 31, 0x196084u);
    ctx->pc = 0x196080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19607Cu;
    // 0x196080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19607Cu, 0x196084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196084u;
label_196084:
    // 0x196084: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x196084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196088:
    // 0x196088: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19608c:
    // 0x19608c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_196090:
    // 0x196090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196094:
    // 0x196094: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x196094u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_196098:
    // 0x196098: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_19609c:
    // 0x19609c: 0x60f809  jalr        $v1
label_1960a0:
    if (ctx->pc == 0x1960A0u) {
        ctx->pc = 0x1960A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19609Cu;
        // 0x1960a0: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960A4u;
        goto label_1960a4;
    }
    ctx->pc = 0x19609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1960A4u);
        ctx->pc = 0x1960A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19609Cu;
        // 0x1960a0: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19609Cu, 0x1960A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960A4u;
label_1960a4:
    // 0x1960a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1960a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1960a8:
    // 0x1960a8: 0xc0cda02  jal         func_336808
label_1960ac:
    if (ctx->pc == 0x1960ACu) {
        ctx->pc = 0x1960ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960A8u;
        // 0x1960ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960B0u;
        goto label_1960b0;
    }
    ctx->pc = 0x1960A8u;
    SET_GPR_U32(ctx, 31, 0x1960B0u);
    ctx->pc = 0x1960ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960A8u;
    // 0x1960ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x1960A8u, 0x1960B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960B0u;
label_1960b0:
    // 0x1960b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1960b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1960b4:
    // 0x1960b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1960b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1960b8:
    // 0x1960b8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1960b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1960bc:
    // 0x1960bc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1960bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1960c0:
    // 0x1960c0: 0x40f809  jalr        $v0
label_1960c4:
    if (ctx->pc == 0x1960C4u) {
        ctx->pc = 0x1960C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C0u;
        // 0x1960c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960C8u;
        goto label_1960c8;
    }
    ctx->pc = 0x1960C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1960C8u);
        ctx->pc = 0x1960C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960C0u;
        // 0x1960c4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960C0u, 0x1960C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960C8u;
label_1960c8:
    // 0x1960c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1960c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1960cc:
    // 0x1960cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1960ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1960d0:
    // 0x1960d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1960d4:
    // 0x1960d4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x1960d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1960d8:
    // 0x1960d8: 0xc0f809  jalr        $a2
label_1960dc:
    if (ctx->pc == 0x1960DCu) {
        ctx->pc = 0x1960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D8u;
        // 0x1960dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960E0u;
        goto label_1960e0;
    }
    ctx->pc = 0x1960D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1960E0u);
        ctx->pc = 0x1960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960D8u;
        // 0x1960dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960D8u, 0x1960E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960E0u;
label_1960e0:
    // 0x1960e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1960e4:
    // 0x1960e4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1960e8:
    // 0x1960e8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1960ec:
    // 0x1960ec: 0x40f809  jalr        $v0
label_1960f0:
    if (ctx->pc == 0x1960F0u) {
        ctx->pc = 0x1960F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960ECu;
        // 0x1960f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1960F4u;
        goto label_1960f4;
    }
    ctx->pc = 0x1960ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1960F4u);
        ctx->pc = 0x1960F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960ECu;
        // 0x1960f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960ECu, 0x1960F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1960F4u;
label_1960f4:
    // 0x1960f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1960f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1960f8:
    // 0x1960f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1960f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1960fc:
    // 0x1960fc: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1960fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_196100:
    // 0x196100: 0x8c6600bc  lw          $a2, 0xBC($v1)
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_196104:
    // 0x196104: 0xc0f809  jalr        $a2
label_196108:
    if (ctx->pc == 0x196108u) {
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196104u;
        // 0x196108: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19610Cu;
        goto label_19610c;
    }
    ctx->pc = 0x196104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19610Cu);
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196104u;
        // 0x196108: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196104u, 0x19610Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19610Cu;
label_19610c:
    // 0x19610c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_196110:
    // 0x196110: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x196110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196114:
    // 0x196114: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_196118:
    // 0x196118: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_19611c:
    // 0x19611c: 0x40f809  jalr        $v0
label_196120:
    if (ctx->pc == 0x196120u) {
        ctx->pc = 0x196120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19611Cu;
        // 0x196120: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196124u;
        goto label_196124;
    }
    ctx->pc = 0x19611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196124u);
        ctx->pc = 0x196120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19611Cu;
        // 0x196120: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19611Cu, 0x196124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196124u;
label_196124:
    // 0x196124: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196128:
    // 0x196128: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19612c:
    // 0x19612c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_196130:
    // 0x196130: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x196130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_196134:
    // 0x196134: 0xc0f809  jalr        $a2
label_196138:
    if (ctx->pc == 0x196138u) {
        ctx->pc = 0x196138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196134u;
        // 0x196138: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19613Cu;
        goto label_19613c;
    }
    ctx->pc = 0x196134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19613Cu);
        ctx->pc = 0x196138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196134u;
        // 0x196138: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196134u, 0x19613Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19613Cu;
label_19613c:
    // 0x19613c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_196140:
    // 0x196140: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_196144:
    // 0x196144: 0x9450b1a8  lhu         $s0, -0x4E58($v0)
    ctx->pc = 0x196144u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294947240)));
label_196148:
    // 0x196148: 0x9472b1aa  lhu         $s2, -0x4E56($v1)
    ctx->pc = 0x196148u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294947242)));
label_19614c:
    // 0x19614c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x19614cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_196150:
    // 0x196150: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x196150u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_196154:
    // 0x196154: 0x0  nop
    ctx->pc = 0x196154u;
    // NOP
label_196158:
    // 0x196158: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x196158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_19615c:
    // 0x19615c: 0x4492a800  mtc1        $s2, $f21
    ctx->pc = 0x19615cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_196160:
    // 0x196160: 0x0  nop
    ctx->pc = 0x196160u;
    // NOP
label_196164:
    // 0x196164: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x196164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_196168:
    // 0x196168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19616c:
    // 0x19616c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19616cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_196170:
    // 0x196170: 0x84a400a8  lh          $a0, 0xA8($a1)
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 168)));
label_196174:
    // 0x196174: 0x8ca200ac  lw          $v0, 0xAC($a1)
    ctx->pc = 0x196174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_196178:
    // 0x196178: 0x0  nop
    ctx->pc = 0x196178u;
    // NOP
label_19617c:
    // 0x19617c: 0x0  nop
    ctx->pc = 0x19617cu;
    // NOP
label_196180:
    // 0x196180: 0x46140583  div.s       $f22, $f0, $f20
    ctx->pc = 0x196180u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_196184:
    // 0x196184: 0x0  nop
    ctx->pc = 0x196184u;
    // NOP
label_196188:
    // 0x196188: 0x0  nop
    ctx->pc = 0x196188u;
    // NOP
label_19618c:
    // 0x19618c: 0x461505c3  div.s       $f23, $f0, $f21
    ctx->pc = 0x19618cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_196190:
    // 0x196190: 0x40f809  jalr        $v0
label_196194:
    if (ctx->pc == 0x196194u) {
        ctx->pc = 0x196194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196190u;
        // 0x196194: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196198u;
        goto label_196198;
    }
    ctx->pc = 0x196190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196198u);
        ctx->pc = 0x196194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196190u;
        // 0x196194: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196190u, 0x196198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196198u;
label_196198:
    // 0x196198: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x196198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19619c:
    // 0x19619c: 0x0  nop
    ctx->pc = 0x19619cu;
    // NOP
label_1961a0:
    // 0x1961a0: 0x0  nop
    ctx->pc = 0x1961a0u;
    // NOP
label_1961a4:
    // 0x1961a4: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x1961a4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_1961a8:
    // 0x1961a8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1961ac:
    // 0x1961ac: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1961b0:
    // 0x1961b0: 0x60f809  jalr        $v1
label_1961b4:
    if (ctx->pc == 0x1961B4u) {
        ctx->pc = 0x1961B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B0u;
        // 0x1961b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961B8u;
        goto label_1961b8;
    }
    ctx->pc = 0x1961B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1961B8u);
        ctx->pc = 0x1961B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961B0u;
        // 0x1961b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1961B0u, 0x1961B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1961B8u;
label_1961b8:
    // 0x1961b8: 0x290001b  divu        $zero, $s4, $s0
    ctx->pc = 0x1961b8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_1961bc:
    // 0x1961bc: 0x0  nop
    ctx->pc = 0x1961bcu;
    // NOP
label_1961c0:
    // 0x1961c0: 0x0  nop
    ctx->pc = 0x1961c0u;
    // NOP
label_1961c4:
    // 0x1961c4: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1961c4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_1961c8:
    // 0x1961c8: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1961c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1961cc:
    // 0x1961cc: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1961ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1961d0:
    // 0x1961d0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1961d4:
    if (ctx->pc == 0x1961D4u) {
        ctx->pc = 0x1961D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D0u;
        // 0x1961d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1961D8u;
        goto label_1961d8;
    }
    ctx->pc = 0x1961D0u;
    {
        const bool branch_taken_0x1961d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961d0) {
            ctx->pc = 0x1961D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1961D0u;
            // 0x1961d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1961D8u;
            goto label_1961d8;
        }
    }
    ctx->pc = 0x1961D8u;
label_1961d8:
    // 0x1961d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1961dc:
    // 0x1961dc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1961e0:
    // 0x1961e0: 0xafb10048  sw          $s1, 0x48($sp)
    ctx->pc = 0x1961e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
label_1961e4:
    // 0x1961e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1961e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1961e8:
    // 0x1961e8: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1961e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1961ec:
    // 0x1961ec: 0x2812  mflo        $a1
    ctx->pc = 0x1961ecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1961f0:
    // 0x1961f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1961f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1961f4:
    // 0x1961f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1961f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1961f8:
    // 0x1961f8: 0x0  nop
    ctx->pc = 0x1961f8u;
    // NOP
label_1961fc:
    // 0x1961fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1961fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_196200:
    // 0x196200: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x196200u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_196204:
    // 0x196204: 0x0  nop
    ctx->pc = 0x196204u;
    // NOP
label_196208:
    // 0x196208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x196208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19620c:
    // 0x19620c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x19620cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_196210:
    // 0x196210: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x196210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_196214:
    // 0x196214: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_196218:
    // 0x196218: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x196218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_19621c:
    // 0x19621c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19621cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_196220:
    // 0x196220: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x196220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_196224:
    // 0x196224: 0xc107444  jal         func_41D110
label_196228:
    if (ctx->pc == 0x196228u) {
        ctx->pc = 0x19622Cu;
        goto label_19622c;
    }
    ctx->pc = 0x196224u;
    SET_GPR_U32(ctx, 31, 0x19622Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x196224u, 0x19622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19622Cu;
label_19622c:
    // 0x19622c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_196230:
    if (ctx->pc == 0x196230u) {
        ctx->pc = 0x196230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19622Cu;
        // 0x196230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196234u;
        goto label_196234;
    }
    ctx->pc = 0x19622Cu;
    {
        const bool branch_taken_0x19622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19622Cu;
        // 0x196230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19622c) {
            ctx->pc = 0x1962A0u;
            goto label_1962a0;
        }
    }
    ctx->pc = 0x196234u;
label_196234:
    // 0x196234: 0x5602001b  bnel        $s0, $v0, . + 4 + (0x1B << 2)
label_196238:
    if (ctx->pc == 0x196238u) {
        ctx->pc = 0x196238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196234u;
        // 0x196238: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19623Cu;
        goto label_19623c;
    }
    ctx->pc = 0x196234u;
    {
        const bool branch_taken_0x196234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x196234) {
            ctx->pc = 0x196238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196234u;
            // 0x196238: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1962A4u;
            goto label_1962a4;
        }
    }
    ctx->pc = 0x19623Cu;
label_19623c:
    // 0x19623c: 0x56500019  bnel        $s2, $s0, . + 4 + (0x19 << 2)
label_196240:
    if (ctx->pc == 0x196240u) {
        ctx->pc = 0x196240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19623Cu;
        // 0x196240: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196244u;
        goto label_196244;
    }
    ctx->pc = 0x19623Cu;
    {
        const bool branch_taken_0x19623c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x19623c) {
            ctx->pc = 0x196240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19623Cu;
            // 0x196240: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1962A4u;
            goto label_1962a4;
        }
    }
    ctx->pc = 0x196244u;
label_196244:
    // 0x196244: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_196248:
    // 0x196248: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_19624c:
    // 0x19624c: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_196250:
    // 0x196250: 0x60f809  jalr        $v1
label_196254:
    if (ctx->pc == 0x196254u) {
        ctx->pc = 0x196254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196250u;
        // 0x196254: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196258u;
        goto label_196258;
    }
    ctx->pc = 0x196250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196258u);
        ctx->pc = 0x196254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196250u;
        // 0x196254: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196250u, 0x196258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196258u;
label_196258:
    // 0x196258: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x196258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19625c:
    // 0x19625c: 0x0  nop
    ctx->pc = 0x19625cu;
    // NOP
label_196260:
    // 0x196260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x196260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_196264:
    // 0x196264: 0x0  nop
    ctx->pc = 0x196264u;
    // NOP
label_196268:
    // 0x196268: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_19626c:
    if (ctx->pc == 0x19626Cu) {
        ctx->pc = 0x19626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196268u;
        // 0x19626c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196270u;
        goto label_196270;
    }
    ctx->pc = 0x196268u;
    {
        const bool branch_taken_0x196268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196268u;
        // 0x19626c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196268) {
            ctx->pc = 0x1962A0u;
            goto label_1962a0;
        }
    }
    ctx->pc = 0x196270u;
label_196270:
    // 0x196270: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x196270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_196274:
    // 0x196274: 0xc440b210  lwc1        $f0, -0x4DF0($v0)
    ctx->pc = 0x196274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196278:
    // 0x196278: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x196278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_19627c:
    // 0x19627c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19627cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_196280:
    // 0x196280: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x196280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_196284:
    // 0x196284: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x196284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_196288:
    // 0x196288: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x196288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_19628c:
    // 0x19628c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x19628cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_196290:
    // 0x196290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196294:
    // 0x196294: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x196294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_196298:
    // 0x196298: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x196298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_19629c:
    // 0x19629c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1962a0:
    // 0x1962a0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1962a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1962a4:
    // 0x1962a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1962a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1962a8:
    // 0x1962a8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1962a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1962ac:
    // 0x1962ac: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1962b0:
    // 0x1962b0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1962b4:
    // 0x1962b4: 0x40f809  jalr        $v0
label_1962b8:
    if (ctx->pc == 0x1962B8u) {
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962BCu;
        goto label_1962bc;
    }
    ctx->pc = 0x1962B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1962BCu);
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962B4u, 0x1962BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1962bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1962c0:
    // 0x1962c0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1962c4:
    // 0x1962c4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1962c8:
    // 0x1962c8: 0x846402b0  lh          $a0, 0x2B0($v1)
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 688)));
label_1962cc:
    // 0x1962cc: 0x86250028  lh          $a1, 0x28($s1)
    ctx->pc = 0x1962ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_1962d0:
    // 0x1962d0: 0x8c6202b4  lw          $v0, 0x2B4($v1)
    ctx->pc = 0x1962d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_1962d4:
    // 0x1962d4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1962d8:
    // 0x1962d8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1962dc:
    // 0x1962dc: 0x40f809  jalr        $v0
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962DCu;
        // 0x1962e0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1962E4u);
        ctx->pc = 0x1962E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962DCu;
        // 0x1962e0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962DCu, 0x1962E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1962e8:
    // 0x1962e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1962e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1962ec:
    // 0x1962ec: 0x846402b0  lh          $a0, 0x2B0($v1)
    ctx->pc = 0x1962ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 688)));
label_1962f0:
    // 0x1962f0: 0x8c6202b4  lw          $v0, 0x2B4($v1)
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_1962f4:
    // 0x1962f4: 0x40f809  jalr        $v0
label_1962f8:
    if (ctx->pc == 0x1962F8u) {
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962F4u;
        // 0x1962f8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962FCu;
        goto label_1962fc;
    }
    ctx->pc = 0x1962F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1962FCu);
        ctx->pc = 0x1962F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962F4u;
        // 0x1962f8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962F4u, 0x1962FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1962FCu;
label_1962fc:
    // 0x1962fc: 0xc44f0004  lwc1        $f15, 0x4($v0)
    ctx->pc = 0x1962fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_196300:
    // 0x196300: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x196300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_196304:
    // 0x196304: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x196304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_196308:
    // 0x196308: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x196308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_19630c:
    // 0x19630c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_196310:
    // 0x196310: 0x40f809  jalr        $v0
label_196314:
    if (ctx->pc == 0x196314u) {
        ctx->pc = 0x196314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196310u;
        // 0x196314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196318u;
        goto label_196318;
    }
    ctx->pc = 0x196310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196318u);
        ctx->pc = 0x196314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196310u;
        // 0x196314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196310u, 0x196318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196318u;
label_196318:
    // 0x196318: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19631c:
    // 0x19631c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196320:
    // 0x196320: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_196324:
    // 0x196324: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x196324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_196328:
    // 0x196328: 0x40f809  jalr        $v0
label_19632c:
    if (ctx->pc == 0x19632Cu) {
        ctx->pc = 0x19632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196328u;
        // 0x19632c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196330u;
        goto label_196330;
    }
    ctx->pc = 0x196328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196330u);
        ctx->pc = 0x19632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196328u;
        // 0x19632c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196328u, 0x196330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196330u;
label_196330:
    // 0x196330: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x196330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196334:
    // 0x196334: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_196338:
    // 0x196338: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19633c:
    // 0x19633c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_196340:
    // 0x196340: 0x86050028  lh          $a1, 0x28($s0)
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_196344:
    // 0x196344: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_196348:
    // 0x196348: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_19634c:
    // 0x19634c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x19634cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_196350:
    // 0x196350: 0x40f809  jalr        $v0
label_196354:
    if (ctx->pc == 0x196354u) {
        ctx->pc = 0x196354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196350u;
        // 0x196354: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196358u;
        goto label_196358;
    }
    ctx->pc = 0x196350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196358u);
        ctx->pc = 0x196354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196350u;
        // 0x196354: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196350u, 0x196358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196358u;
label_196358:
    // 0x196358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19635c:
    // 0x19635c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_196360:
    // 0x196360: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_196364:
    // 0x196364: 0xa0f809  jalr        $a1
label_196368:
    if (ctx->pc == 0x196368u) {
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19636Cu;
        goto label_19636c;
    }
    ctx->pc = 0x196364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19636Cu);
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196364u, 0x19636Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x19636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_196370:
    // 0x196370: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x196370u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_196374:
    // 0x196374: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_196378:
    // 0x196378: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_19637c:
    // 0x19637c: 0x40f809  jalr        $v0
label_196380:
    if (ctx->pc == 0x196380u) {
        ctx->pc = 0x196380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19637Cu;
        // 0x196380: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196384u;
        goto label_196384;
    }
    ctx->pc = 0x19637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196384u);
        ctx->pc = 0x196380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19637Cu;
        // 0x196380: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19637Cu, 0x196384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196384u;
label_196384:
    // 0x196384: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196388:
    // 0x196388: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x196388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_19638c:
    // 0x19638c: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_196390:
    // 0x196390: 0xa0f809  jalr        $a1
label_196394:
    if (ctx->pc == 0x196394u) {
        ctx->pc = 0x196394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196390u;
        // 0x196394: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196398u;
        goto label_196398;
    }
    ctx->pc = 0x196390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x196398u);
        ctx->pc = 0x196394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196390u;
        // 0x196394: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196390u, 0x196398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196398u;
label_196398:
    // 0x196398: 0x461703c2  mul.s       $f15, $f0, $f23
    ctx->pc = 0x196398u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_19639c:
    // 0x19639c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19639cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1963a0:
    // 0x1963a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1963a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1963a4:
    // 0x1963a4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1963a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1963a8:
    // 0x1963a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1963a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1963ac:
    // 0x1963ac: 0x40f809  jalr        $v0
label_1963b0:
    if (ctx->pc == 0x1963B0u) {
        ctx->pc = 0x1963B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963ACu;
        // 0x1963b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963B4u;
        goto label_1963b4;
    }
    ctx->pc = 0x1963ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1963B4u);
        ctx->pc = 0x1963B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963ACu;
        // 0x1963b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1963ACu, 0x1963B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1963B4u;
label_1963b4:
    // 0x1963b4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1963b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1963b8:
    // 0x1963b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1963b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1963bc:
    // 0x1963bc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1963c0:
    // 0x1963c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1963c4:
    // 0x1963c4: 0x40f809  jalr        $v0
label_1963c8:
    if (ctx->pc == 0x1963C8u) {
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963CCu;
        goto label_1963cc;
    }
    ctx->pc = 0x1963C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1963CCu);
        ctx->pc = 0x1963C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963C4u;
        // 0x1963c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1963C4u, 0x1963CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1963d0:
    // 0x1963d0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1963d4:
    // 0x1963d4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1963d8:
    // 0x1963d8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1963dc:
    // 0x1963dc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1963dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1963e0:
    // 0x1963e0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1963e4:
    // 0x1963e4: 0x8c69005c  lw          $t1, 0x5C($v1)
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1963e8:
    // 0x1963e8: 0x120f809  jalr        $t1
label_1963ec:
    if (ctx->pc == 0x1963ECu) {
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963F0u;
        goto label_1963f0;
    }
    ctx->pc = 0x1963E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1963F0u);
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1963E8u, 0x1963F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1963F0u;
label_1963f0:
    // 0x1963f0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1963f4:
    // 0x1963f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1963f8:
    // 0x1963f8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1963f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1963fc:
    // 0x1963fc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_196400:
    // 0x196400: 0x40f809  jalr        $v0
label_196404:
    if (ctx->pc == 0x196404u) {
        ctx->pc = 0x196404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196400u;
        // 0x196404: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196408u;
        goto label_196408;
    }
    ctx->pc = 0x196400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196408u);
        ctx->pc = 0x196404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196400u;
        // 0x196404: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196400u, 0x196408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19640c:
    // 0x19640c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_196410:
    // 0x196410: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_196414:
    // 0x196414: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x196414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_196418:
    // 0x196418: 0x8c69005c  lw          $t1, 0x5C($v1)
    ctx->pc = 0x196418u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_19641c:
    // 0x19641c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x19641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_196420:
    // 0x196420: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_196424:
    // 0x196424: 0x120f809  jalr        $t1
label_196428:
    if (ctx->pc == 0x196428u) {
        ctx->pc = 0x196428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196424u;
        // 0x196428: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19642Cu;
        goto label_19642c;
    }
    ctx->pc = 0x196424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x19642Cu);
        ctx->pc = 0x196428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196424u;
        // 0x196428: 0x8fa8004c  lw          $t0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196424u, 0x19642Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19642Cu;
label_19642c:
    // 0x19642c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x19642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_196430:
    // 0x196430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196434:
    // 0x196434: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x196434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_196438:
    // 0x196438: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x196438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19643c:
    // 0x19643c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x19643cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_196440:
    // 0x196440: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x196440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196444:
    // 0x196444: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x196444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196448:
    // 0x196448: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x196448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19644c:
    // 0x19644c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x19644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_196450:
    // 0x196450: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x196450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_196454:
    // 0x196454: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x196454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_196458:
    // 0x196458: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x196458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19645c:
    // 0x19645c: 0x3e00008  jr          $ra
label_196460:
    if (ctx->pc == 0x196460u) {
        ctx->pc = 0x196460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19645Cu;
        // 0x196460: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196464u;
        goto label_196464;
    }
    ctx->pc = 0x19645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19645Cu;
        // 0x196460: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196464u;
label_196464:
    // 0x196464: 0x0  nop
    ctx->pc = 0x196464u;
    // NOP
    ctx->pc = 0x196468u;
}
