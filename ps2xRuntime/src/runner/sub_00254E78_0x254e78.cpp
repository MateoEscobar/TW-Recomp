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

// Function: sub_00254E78
// Address: 0x254e78 - 0x255540
void sub_00254E78_0x254e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E78_0x254e78");
#endif

    switch (ctx->pc) {
        case 0x254e78u: goto label_254e78;
        case 0x254e7cu: goto label_254e7c;
        case 0x254e80u: goto label_254e80;
        case 0x254e84u: goto label_254e84;
        case 0x254e88u: goto label_254e88;
        case 0x254e8cu: goto label_254e8c;
        case 0x254e90u: goto label_254e90;
        case 0x254e94u: goto label_254e94;
        case 0x254e98u: goto label_254e98;
        case 0x254e9cu: goto label_254e9c;
        case 0x254ea0u: goto label_254ea0;
        case 0x254ea4u: goto label_254ea4;
        case 0x254ea8u: goto label_254ea8;
        case 0x254eacu: goto label_254eac;
        case 0x254eb0u: goto label_254eb0;
        case 0x254eb4u: goto label_254eb4;
        case 0x254eb8u: goto label_254eb8;
        case 0x254ebcu: goto label_254ebc;
        case 0x254ec0u: goto label_254ec0;
        case 0x254ec4u: goto label_254ec4;
        case 0x254ec8u: goto label_254ec8;
        case 0x254eccu: goto label_254ecc;
        case 0x254ed0u: goto label_254ed0;
        case 0x254ed4u: goto label_254ed4;
        case 0x254ed8u: goto label_254ed8;
        case 0x254edcu: goto label_254edc;
        case 0x254ee0u: goto label_254ee0;
        case 0x254ee4u: goto label_254ee4;
        case 0x254ee8u: goto label_254ee8;
        case 0x254eecu: goto label_254eec;
        case 0x254ef0u: goto label_254ef0;
        case 0x254ef4u: goto label_254ef4;
        case 0x254ef8u: goto label_254ef8;
        case 0x254efcu: goto label_254efc;
        case 0x254f00u: goto label_254f00;
        case 0x254f04u: goto label_254f04;
        case 0x254f08u: goto label_254f08;
        case 0x254f0cu: goto label_254f0c;
        case 0x254f10u: goto label_254f10;
        case 0x254f14u: goto label_254f14;
        case 0x254f18u: goto label_254f18;
        case 0x254f1cu: goto label_254f1c;
        case 0x254f20u: goto label_254f20;
        case 0x254f24u: goto label_254f24;
        case 0x254f28u: goto label_254f28;
        case 0x254f2cu: goto label_254f2c;
        case 0x254f30u: goto label_254f30;
        case 0x254f34u: goto label_254f34;
        case 0x254f38u: goto label_254f38;
        case 0x254f3cu: goto label_254f3c;
        case 0x254f40u: goto label_254f40;
        case 0x254f44u: goto label_254f44;
        case 0x254f48u: goto label_254f48;
        case 0x254f4cu: goto label_254f4c;
        case 0x254f50u: goto label_254f50;
        case 0x254f54u: goto label_254f54;
        case 0x254f58u: goto label_254f58;
        case 0x254f5cu: goto label_254f5c;
        case 0x254f60u: goto label_254f60;
        case 0x254f64u: goto label_254f64;
        case 0x254f68u: goto label_254f68;
        case 0x254f6cu: goto label_254f6c;
        case 0x254f70u: goto label_254f70;
        case 0x254f74u: goto label_254f74;
        case 0x254f78u: goto label_254f78;
        case 0x254f7cu: goto label_254f7c;
        case 0x254f80u: goto label_254f80;
        case 0x254f84u: goto label_254f84;
        case 0x254f88u: goto label_254f88;
        case 0x254f8cu: goto label_254f8c;
        case 0x254f90u: goto label_254f90;
        case 0x254f94u: goto label_254f94;
        case 0x254f98u: goto label_254f98;
        case 0x254f9cu: goto label_254f9c;
        case 0x254fa0u: goto label_254fa0;
        case 0x254fa4u: goto label_254fa4;
        case 0x254fa8u: goto label_254fa8;
        case 0x254facu: goto label_254fac;
        case 0x254fb0u: goto label_254fb0;
        case 0x254fb4u: goto label_254fb4;
        case 0x254fb8u: goto label_254fb8;
        case 0x254fbcu: goto label_254fbc;
        case 0x254fc0u: goto label_254fc0;
        case 0x254fc4u: goto label_254fc4;
        case 0x254fc8u: goto label_254fc8;
        case 0x254fccu: goto label_254fcc;
        case 0x254fd0u: goto label_254fd0;
        case 0x254fd4u: goto label_254fd4;
        case 0x254fd8u: goto label_254fd8;
        case 0x254fdcu: goto label_254fdc;
        case 0x254fe0u: goto label_254fe0;
        case 0x254fe4u: goto label_254fe4;
        case 0x254fe8u: goto label_254fe8;
        case 0x254fecu: goto label_254fec;
        case 0x254ff0u: goto label_254ff0;
        case 0x254ff4u: goto label_254ff4;
        case 0x254ff8u: goto label_254ff8;
        case 0x254ffcu: goto label_254ffc;
        case 0x255000u: goto label_255000;
        case 0x255004u: goto label_255004;
        case 0x255008u: goto label_255008;
        case 0x25500cu: goto label_25500c;
        case 0x255010u: goto label_255010;
        case 0x255014u: goto label_255014;
        case 0x255018u: goto label_255018;
        case 0x25501cu: goto label_25501c;
        case 0x255020u: goto label_255020;
        case 0x255024u: goto label_255024;
        case 0x255028u: goto label_255028;
        case 0x25502cu: goto label_25502c;
        case 0x255030u: goto label_255030;
        case 0x255034u: goto label_255034;
        case 0x255038u: goto label_255038;
        case 0x25503cu: goto label_25503c;
        case 0x255040u: goto label_255040;
        case 0x255044u: goto label_255044;
        case 0x255048u: goto label_255048;
        case 0x25504cu: goto label_25504c;
        case 0x255050u: goto label_255050;
        case 0x255054u: goto label_255054;
        case 0x255058u: goto label_255058;
        case 0x25505cu: goto label_25505c;
        case 0x255060u: goto label_255060;
        case 0x255064u: goto label_255064;
        case 0x255068u: goto label_255068;
        case 0x25506cu: goto label_25506c;
        case 0x255070u: goto label_255070;
        case 0x255074u: goto label_255074;
        case 0x255078u: goto label_255078;
        case 0x25507cu: goto label_25507c;
        case 0x255080u: goto label_255080;
        case 0x255084u: goto label_255084;
        case 0x255088u: goto label_255088;
        case 0x25508cu: goto label_25508c;
        case 0x255090u: goto label_255090;
        case 0x255094u: goto label_255094;
        case 0x255098u: goto label_255098;
        case 0x25509cu: goto label_25509c;
        case 0x2550a0u: goto label_2550a0;
        case 0x2550a4u: goto label_2550a4;
        case 0x2550a8u: goto label_2550a8;
        case 0x2550acu: goto label_2550ac;
        case 0x2550b0u: goto label_2550b0;
        case 0x2550b4u: goto label_2550b4;
        case 0x2550b8u: goto label_2550b8;
        case 0x2550bcu: goto label_2550bc;
        case 0x2550c0u: goto label_2550c0;
        case 0x2550c4u: goto label_2550c4;
        case 0x2550c8u: goto label_2550c8;
        case 0x2550ccu: goto label_2550cc;
        case 0x2550d0u: goto label_2550d0;
        case 0x2550d4u: goto label_2550d4;
        case 0x2550d8u: goto label_2550d8;
        case 0x2550dcu: goto label_2550dc;
        case 0x2550e0u: goto label_2550e0;
        case 0x2550e4u: goto label_2550e4;
        case 0x2550e8u: goto label_2550e8;
        case 0x2550ecu: goto label_2550ec;
        case 0x2550f0u: goto label_2550f0;
        case 0x2550f4u: goto label_2550f4;
        case 0x2550f8u: goto label_2550f8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255100u: goto label_255100;
        case 0x255104u: goto label_255104;
        case 0x255108u: goto label_255108;
        case 0x25510cu: goto label_25510c;
        case 0x255110u: goto label_255110;
        case 0x255114u: goto label_255114;
        case 0x255118u: goto label_255118;
        case 0x25511cu: goto label_25511c;
        case 0x255120u: goto label_255120;
        case 0x255124u: goto label_255124;
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        case 0x255408u: goto label_255408;
        case 0x25540cu: goto label_25540c;
        case 0x255410u: goto label_255410;
        case 0x255414u: goto label_255414;
        case 0x255418u: goto label_255418;
        case 0x25541cu: goto label_25541c;
        case 0x255420u: goto label_255420;
        case 0x255424u: goto label_255424;
        case 0x255428u: goto label_255428;
        case 0x25542cu: goto label_25542c;
        case 0x255430u: goto label_255430;
        case 0x255434u: goto label_255434;
        case 0x255438u: goto label_255438;
        case 0x25543cu: goto label_25543c;
        case 0x255440u: goto label_255440;
        case 0x255444u: goto label_255444;
        case 0x255448u: goto label_255448;
        case 0x25544cu: goto label_25544c;
        case 0x255450u: goto label_255450;
        case 0x255454u: goto label_255454;
        case 0x255458u: goto label_255458;
        case 0x25545cu: goto label_25545c;
        case 0x255460u: goto label_255460;
        case 0x255464u: goto label_255464;
        case 0x255468u: goto label_255468;
        case 0x25546cu: goto label_25546c;
        case 0x255470u: goto label_255470;
        case 0x255474u: goto label_255474;
        case 0x255478u: goto label_255478;
        case 0x25547cu: goto label_25547c;
        case 0x255480u: goto label_255480;
        case 0x255484u: goto label_255484;
        case 0x255488u: goto label_255488;
        case 0x25548cu: goto label_25548c;
        case 0x255490u: goto label_255490;
        case 0x255494u: goto label_255494;
        case 0x255498u: goto label_255498;
        case 0x25549cu: goto label_25549c;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554a4u: goto label_2554a4;
        case 0x2554a8u: goto label_2554a8;
        case 0x2554acu: goto label_2554ac;
        case 0x2554b0u: goto label_2554b0;
        case 0x2554b4u: goto label_2554b4;
        case 0x2554b8u: goto label_2554b8;
        case 0x2554bcu: goto label_2554bc;
        case 0x2554c0u: goto label_2554c0;
        case 0x2554c4u: goto label_2554c4;
        case 0x2554c8u: goto label_2554c8;
        case 0x2554ccu: goto label_2554cc;
        case 0x2554d0u: goto label_2554d0;
        case 0x2554d4u: goto label_2554d4;
        case 0x2554d8u: goto label_2554d8;
        case 0x2554dcu: goto label_2554dc;
        case 0x2554e0u: goto label_2554e0;
        case 0x2554e4u: goto label_2554e4;
        case 0x2554e8u: goto label_2554e8;
        case 0x2554ecu: goto label_2554ec;
        case 0x2554f0u: goto label_2554f0;
        case 0x2554f4u: goto label_2554f4;
        case 0x2554f8u: goto label_2554f8;
        case 0x2554fcu: goto label_2554fc;
        case 0x255500u: goto label_255500;
        case 0x255504u: goto label_255504;
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        default: break;
    }

    ctx->pc = 0x254e78u;

label_254e78:
    // 0x254e78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x254e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_254e7c:
    // 0x254e7c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x254e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_254e80:
    // 0x254e80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x254e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_254e84:
    // 0x254e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254e88:
    // 0x254e88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x254e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_254e8c:
    // 0x254e8c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x254e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_254e90:
    // 0x254e90: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x254e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_254e94:
    // 0x254e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_254e98:
    // 0x254e98: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x254e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_254e9c:
    // 0x254e9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_254ea0:
    // 0x254ea0: 0xc0874fa  jal         func_21D3E8
label_254ea4:
    if (ctx->pc == 0x254EA4u) {
        ctx->pc = 0x254EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EA0u;
        // 0x254ea4: 0x8e3300d4  lw          $s3, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EA8u;
        goto label_254ea8;
    }
    ctx->pc = 0x254EA0u;
    SET_GPR_U32(ctx, 31, 0x254EA8u);
    ctx->pc = 0x254EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EA0u;
    // 0x254ea4: 0x8e3300d4  lw          $s3, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x254EA0u, 0x254EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EA8u;
label_254ea8:
    // 0x254ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254eac:
    // 0x254eac: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x254eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_254eb0:
    // 0x254eb0: 0x1040019a  beqz        $v0, . + 4 + (0x19A << 2)
label_254eb4:
    if (ctx->pc == 0x254EB4u) {
        ctx->pc = 0x254EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EB0u;
        // 0x254eb4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EB8u;
        goto label_254eb8;
    }
    ctx->pc = 0x254EB0u;
    {
        const bool branch_taken_0x254eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EB0u;
        // 0x254eb4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254eb0) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x254EB8u;
label_254eb8:
    // 0x254eb8: 0x52600199  beql        $s3, $zero, . + 4 + (0x199 << 2)
label_254ebc:
    if (ctx->pc == 0x254EBCu) {
        ctx->pc = 0x254EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EB8u;
        // 0x254ebc: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EC0u;
        goto label_254ec0;
    }
    ctx->pc = 0x254EB8u;
    {
        const bool branch_taken_0x254eb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x254eb8) {
            ctx->pc = 0x254EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254EB8u;
            // 0x254ebc: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255520u;
            goto label_255520;
        }
    }
    ctx->pc = 0x254EC0u;
label_254ec0:
    // 0x254ec0: 0xc095072  jal         func_2541C8
label_254ec4:
    if (ctx->pc == 0x254EC4u) {
        ctx->pc = 0x254EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EC0u;
        // 0x254ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EC8u;
        goto label_254ec8;
    }
    ctx->pc = 0x254EC0u;
    SET_GPR_U32(ctx, 31, 0x254EC8u);
    ctx->pc = 0x254EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC0u;
    // 0x254ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541C8u, 0x254EC0u, 0x254EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EC8u;
label_254ec8:
    // 0x254ec8: 0x3c05cfc5  lui         $a1, 0xCFC5
    ctx->pc = 0x254ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53189 << 16));
label_254ecc:
    // 0x254ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254ed0:
    // 0x254ed0: 0xc089998  jal         func_226660
label_254ed4:
    if (ctx->pc == 0x254ED4u) {
        ctx->pc = 0x254ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ED0u;
        // 0x254ed4: 0x34a5fe3f  ori         $a1, $a1, 0xFE3F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65087);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254ED8u;
        goto label_254ed8;
    }
    ctx->pc = 0x254ED0u;
    SET_GPR_U32(ctx, 31, 0x254ED8u);
    ctx->pc = 0x254ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254ED0u;
    // 0x254ed4: 0x34a5fe3f  ori         $a1, $a1, 0xFE3F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65087);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x254ED0u, 0x254ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ED8u;
label_254ed8:
    // 0x254ed8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_254edc:
    if (ctx->pc == 0x254EDCu) {
        ctx->pc = 0x254EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ED8u;
        // 0x254edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EE0u;
        goto label_254ee0;
    }
    ctx->pc = 0x254ED8u;
    {
        const bool branch_taken_0x254ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ED8u;
        // 0x254edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ed8) {
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254EE0u;
label_254ee0:
    // 0x254ee0: 0xc0e409a  jal         func_390268
label_254ee4:
    if (ctx->pc == 0x254EE4u) {
        ctx->pc = 0x254EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EE0u;
        // 0x254ee4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EE8u;
        goto label_254ee8;
    }
    ctx->pc = 0x254EE0u;
    SET_GPR_U32(ctx, 31, 0x254EE8u);
    ctx->pc = 0x254EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EE0u;
    // 0x254ee4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x254EE0u, 0x254EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EE8u;
label_254ee8:
    // 0x254ee8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_254eec:
    if (ctx->pc == 0x254EECu) {
        ctx->pc = 0x254EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EE8u;
        // 0x254eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EF0u;
        goto label_254ef0;
    }
    ctx->pc = 0x254EE8u;
    {
        const bool branch_taken_0x254ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EE8u;
        // 0x254eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ee8) {
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254EF0u;
label_254ef0:
    // 0x254ef0: 0xc089ff6  jal         func_227FD8
label_254ef4:
    if (ctx->pc == 0x254EF4u) {
        ctx->pc = 0x254EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF0u;
        // 0x254ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254EF8u;
        goto label_254ef8;
    }
    ctx->pc = 0x254EF0u;
    SET_GPR_U32(ctx, 31, 0x254EF8u);
    ctx->pc = 0x254EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EF0u;
    // 0x254ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x254EF0u, 0x254EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EF8u;
label_254ef8:
    // 0x254ef8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_254efc:
    if (ctx->pc == 0x254EFCu) {
        ctx->pc = 0x254EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF8u;
        // 0x254efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F00u;
        goto label_254f00;
    }
    ctx->pc = 0x254EF8u;
    {
        const bool branch_taken_0x254ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF8u;
        // 0x254efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ef8) {
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254F00u;
label_254f00:
    // 0x254f00: 0xc089a76  jal         func_2269D8
label_254f04:
    if (ctx->pc == 0x254F04u) {
        ctx->pc = 0x254F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F00u;
        // 0x254f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F08u;
        goto label_254f08;
    }
    ctx->pc = 0x254F00u;
    SET_GPR_U32(ctx, 31, 0x254F08u);
    ctx->pc = 0x254F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F00u;
    // 0x254f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x254F00u, 0x254F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F08u;
label_254f08:
    // 0x254f08: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_254f0c:
    if (ctx->pc == 0x254F0Cu) {
        ctx->pc = 0x254F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F08u;
        // 0x254f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F10u;
        goto label_254f10;
    }
    ctx->pc = 0x254F08u;
    {
        const bool branch_taken_0x254f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254f08) {
            ctx->pc = 0x254F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F08u;
            // 0x254f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254F10u;
label_254f10:
    // 0x254f10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254f14:
    // 0x254f14: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_254f18:
    // 0x254f18: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x254f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_254f1c:
    // 0x254f1c: 0x40f809  jalr        $v0
label_254f20:
    if (ctx->pc == 0x254F20u) {
        ctx->pc = 0x254F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F1Cu;
        // 0x254f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F24u;
        goto label_254f24;
    }
    ctx->pc = 0x254F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254F24u);
        ctx->pc = 0x254F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F1Cu;
        // 0x254f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F1Cu, 0x254F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254F24u;
label_254f24:
    // 0x254f24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_254f28:
    if (ctx->pc == 0x254F28u) {
        ctx->pc = 0x254F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F24u;
        // 0x254f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F2Cu;
        goto label_254f2c;
    }
    ctx->pc = 0x254F24u;
    {
        const bool branch_taken_0x254f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254f24) {
            ctx->pc = 0x254F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F24u;
            // 0x254f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254F48u;
            goto label_254f48;
        }
    }
    ctx->pc = 0x254F2Cu;
label_254f2c:
    // 0x254f2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254f30:
    // 0x254f30: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x254f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_254f34:
    // 0x254f34: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x254f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_254f38:
    // 0x254f38: 0x40f809  jalr        $v0
label_254f3c:
    if (ctx->pc == 0x254F3Cu) {
        ctx->pc = 0x254F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F38u;
        // 0x254f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F40u;
        goto label_254f40;
    }
    ctx->pc = 0x254F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254F40u);
        ctx->pc = 0x254F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F38u;
        // 0x254f3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F38u, 0x254F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254F40u;
label_254f40:
    // 0x254f40: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x254f40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_254f44:
    // 0x254f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254f48:
    // 0x254f48: 0xc088442  jal         func_221108
label_254f4c:
    if (ctx->pc == 0x254F4Cu) {
        ctx->pc = 0x254F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F48u;
        // 0x254f4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F50u;
        goto label_254f50;
    }
    ctx->pc = 0x254F48u;
    SET_GPR_U32(ctx, 31, 0x254F50u);
    ctx->pc = 0x254F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F48u;
    // 0x254f4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221108u, 0x254F48u, 0x254F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F50u;
label_254f50:
    // 0x254f50: 0xc0964da  jal         func_259368
label_254f54:
    if (ctx->pc == 0x254F54u) {
        ctx->pc = 0x254F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F50u;
        // 0x254f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F58u;
        goto label_254f58;
    }
    ctx->pc = 0x254F50u;
    SET_GPR_U32(ctx, 31, 0x254F58u);
    ctx->pc = 0x254F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F50u;
    // 0x254f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259368u, 0x254F50u, 0x254F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F58u;
label_254f58:
    // 0x254f58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254f5c:
    // 0x254f5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x254f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_254f60:
    // 0x254f60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x254f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_254f64:
    // 0x254f64: 0x40f809  jalr        $v0
label_254f68:
    if (ctx->pc == 0x254F68u) {
        ctx->pc = 0x254F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F64u;
        // 0x254f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F6Cu;
        goto label_254f6c;
    }
    ctx->pc = 0x254F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254F6Cu);
        ctx->pc = 0x254F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F64u;
        // 0x254f68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F64u, 0x254F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254F6Cu;
label_254f6c:
    // 0x254f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_254f70:
    // 0x254f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254f74:
    // 0x254f74: 0xc052038  jal         func_1480E0
label_254f78:
    if (ctx->pc == 0x254F78u) {
        ctx->pc = 0x254F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F74u;
        // 0x254f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F7Cu;
        goto label_254f7c;
    }
    ctx->pc = 0x254F74u;
    SET_GPR_U32(ctx, 31, 0x254F7Cu);
    ctx->pc = 0x254F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F74u;
    // 0x254f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1480E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1480E0u, 0x254F74u, 0x254F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F7Cu;
label_254f7c:
    // 0x254f7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254f80:
    // 0x254f80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x254f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254f84:
    // 0x254f84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x254f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_254f88:
    // 0x254f88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x254f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_254f8c:
    // 0x254f8c: 0x40f809  jalr        $v0
label_254f90:
    if (ctx->pc == 0x254F90u) {
        ctx->pc = 0x254F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F8Cu;
        // 0x254f90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F94u;
        goto label_254f94;
    }
    ctx->pc = 0x254F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254F94u);
        ctx->pc = 0x254F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F8Cu;
        // 0x254f90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F8Cu, 0x254F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254F94u;
label_254f94:
    // 0x254f94: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_254f98:
    if (ctx->pc == 0x254F98u) {
        ctx->pc = 0x254F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F94u;
        // 0x254f98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254F9Cu;
        goto label_254f9c;
    }
    ctx->pc = 0x254F94u;
    {
        const bool branch_taken_0x254f94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x254f94) {
            ctx->pc = 0x254F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F94u;
            // 0x254f98: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254FB4u;
            goto label_254fb4;
        }
    }
    ctx->pc = 0x254F9Cu;
label_254f9c:
    // 0x254f9c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x254f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_254fa0:
    // 0x254fa0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_254fa4:
    if (ctx->pc == 0x254FA4u) {
        ctx->pc = 0x254FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA0u;
        // 0x254fa4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FA8u;
        goto label_254fa8;
    }
    ctx->pc = 0x254FA0u;
    {
        const bool branch_taken_0x254fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fa0) {
            ctx->pc = 0x254FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FA0u;
            // 0x254fa4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254FB4u;
            goto label_254fb4;
        }
    }
    ctx->pc = 0x254FA8u;
label_254fa8:
    // 0x254fa8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x254fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_254fac:
    // 0x254fac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_254fb0:
    if (ctx->pc == 0x254FB0u) {
        ctx->pc = 0x254FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FACu;
        // 0x254fb0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FB4u;
        goto label_254fb4;
    }
    ctx->pc = 0x254FACu;
    {
        const bool branch_taken_0x254fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fac) {
            ctx->pc = 0x254FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254FACu;
            // 0x254fb0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254FB4u;
            goto label_254fb4;
        }
    }
    ctx->pc = 0x254FB4u;
label_254fb4:
    // 0x254fb4: 0x16800159  bnez        $s4, . + 4 + (0x159 << 2)
label_254fb8:
    if (ctx->pc == 0x254FB8u) {
        ctx->pc = 0x254FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FB4u;
        // 0x254fb8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FBCu;
        goto label_254fbc;
    }
    ctx->pc = 0x254FB4u;
    {
        const bool branch_taken_0x254fb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x254FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FB4u;
        // 0x254fb8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fb4) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x254FBCu;
label_254fbc:
    // 0x254fbc: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x254fbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_254fc0:
    // 0x254fc0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x254fc0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_254fc4:
    // 0x254fc4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_254fc8:
    if (ctx->pc == 0x254FC8u) {
        ctx->pc = 0x254FCCu;
        goto label_254fcc;
    }
    ctx->pc = 0x254FC4u;
    {
        const bool branch_taken_0x254fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fc4) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254FCCu;
label_254fcc:
    // 0x254fcc: 0xc088e40  jal         func_223900
label_254fd0:
    if (ctx->pc == 0x254FD0u) {
        ctx->pc = 0x254FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FCCu;
        // 0x254fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FD4u;
        goto label_254fd4;
    }
    ctx->pc = 0x254FCCu;
    SET_GPR_U32(ctx, 31, 0x254FD4u);
    ctx->pc = 0x254FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FCCu;
    // 0x254fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x254FCCu, 0x254FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FD4u;
label_254fd4:
    // 0x254fd4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_254fd8:
    if (ctx->pc == 0x254FD8u) {
        ctx->pc = 0x254FDCu;
        goto label_254fdc;
    }
    ctx->pc = 0x254FD4u;
    {
        const bool branch_taken_0x254fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254fd4) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254FDCu;
label_254fdc:
    // 0x254fdc: 0xc088e68  jal         func_2239A0
label_254fe0:
    if (ctx->pc == 0x254FE0u) {
        ctx->pc = 0x254FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FDCu;
        // 0x254fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FE4u;
        goto label_254fe4;
    }
    ctx->pc = 0x254FDCu;
    SET_GPR_U32(ctx, 31, 0x254FE4u);
    ctx->pc = 0x254FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FDCu;
    // 0x254fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x254FDCu, 0x254FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FE4u;
label_254fe4:
    // 0x254fe4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_254fe8:
    if (ctx->pc == 0x254FE8u) {
        ctx->pc = 0x254FECu;
        goto label_254fec;
    }
    ctx->pc = 0x254FE4u;
    {
        const bool branch_taken_0x254fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254fe4) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254FECu;
label_254fec:
    // 0x254fec: 0xc088e78  jal         func_2239E0
label_254ff0:
    if (ctx->pc == 0x254FF0u) {
        ctx->pc = 0x254FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FECu;
        // 0x254ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FF4u;
        goto label_254ff4;
    }
    ctx->pc = 0x254FECu;
    SET_GPR_U32(ctx, 31, 0x254FF4u);
    ctx->pc = 0x254FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FECu;
    // 0x254ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x254FECu, 0x254FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FF4u;
label_254ff4:
    // 0x254ff4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_254ff8:
    if (ctx->pc == 0x254FF8u) {
        ctx->pc = 0x254FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FF4u;
        // 0x254ff8: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254FFCu;
        goto label_254ffc;
    }
    ctx->pc = 0x254FF4u;
    {
        const bool branch_taken_0x254ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FF4u;
        // 0x254ff8: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ff4) {
            ctx->pc = 0x25501Cu;
            goto label_25501c;
        }
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x254ffcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_255000:
    // 0x255000: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_255004:
    // 0x255004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_255008:
    // 0x255008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25500c:
    // 0x25500c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x25500cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_255010:
    // 0x255010: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x255010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_255014:
    // 0x255014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_255018:
    // 0x255018: 0xe460017c  swc1        $f0, 0x17C($v1)
    ctx->pc = 0x255018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
label_25501c:
    // 0x25501c: 0x16a0002c  bnez        $s5, . + 4 + (0x2C << 2)
label_255020:
    if (ctx->pc == 0x255020u) {
        ctx->pc = 0x255020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25501Cu;
        // 0x255020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255024u;
        goto label_255024;
    }
    ctx->pc = 0x25501Cu;
    {
        const bool branch_taken_0x25501c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x255020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25501Cu;
        // 0x255020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25501c) {
            ctx->pc = 0x2550D0u;
            goto label_2550d0;
        }
    }
    ctx->pc = 0x255024u;
label_255024:
    // 0x255024: 0xc09f016  jal         func_27C058
label_255028:
    if (ctx->pc == 0x255028u) {
        ctx->pc = 0x255028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255024u;
        // 0x255028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25502Cu;
        goto label_25502c;
    }
    ctx->pc = 0x255024u;
    SET_GPR_U32(ctx, 31, 0x25502Cu);
    ctx->pc = 0x255028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255024u;
    // 0x255028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C058u, 0x255024u, 0x25502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25502Cu;
label_25502c:
    // 0x25502c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_255030:
    if (ctx->pc == 0x255030u) {
        ctx->pc = 0x255034u;
        goto label_255034;
    }
    ctx->pc = 0x25502Cu;
    {
        const bool branch_taken_0x25502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25502c) {
            ctx->pc = 0x255074u;
            goto label_255074;
        }
    }
    ctx->pc = 0x255034u;
label_255034:
    // 0x255034: 0xc09f020  jal         func_27C080
label_255038:
    if (ctx->pc == 0x255038u) {
        ctx->pc = 0x255038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255034u;
        // 0x255038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25503Cu;
        goto label_25503c;
    }
    ctx->pc = 0x255034u;
    SET_GPR_U32(ctx, 31, 0x25503Cu);
    ctx->pc = 0x255038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255034u;
    // 0x255038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C080u, 0x255034u, 0x25503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25503Cu;
label_25503c:
    // 0x25503c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_255040:
    if (ctx->pc == 0x255040u) {
        ctx->pc = 0x255044u;
        goto label_255044;
    }
    ctx->pc = 0x25503Cu;
    {
        const bool branch_taken_0x25503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25503c) {
            ctx->pc = 0x255074u;
            goto label_255074;
        }
    }
    ctx->pc = 0x255044u;
label_255044:
    // 0x255044: 0xc09eef4  jal         func_27BBD0
label_255048:
    if (ctx->pc == 0x255048u) {
        ctx->pc = 0x255048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255044u;
        // 0x255048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25504Cu;
        goto label_25504c;
    }
    ctx->pc = 0x255044u;
    SET_GPR_U32(ctx, 31, 0x25504Cu);
    ctx->pc = 0x255048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255044u;
    // 0x255048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BBD0u, 0x255044u, 0x25504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25504Cu;
label_25504c:
    // 0x25504c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_255050:
    if (ctx->pc == 0x255050u) {
        ctx->pc = 0x255054u;
        goto label_255054;
    }
    ctx->pc = 0x25504Cu;
    {
        const bool branch_taken_0x25504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25504c) {
            ctx->pc = 0x255074u;
            goto label_255074;
        }
    }
    ctx->pc = 0x255054u;
label_255054:
    // 0x255054: 0xc09f02a  jal         func_27C0A8
label_255058:
    if (ctx->pc == 0x255058u) {
        ctx->pc = 0x255058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255054u;
        // 0x255058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25505Cu;
        goto label_25505c;
    }
    ctx->pc = 0x255054u;
    SET_GPR_U32(ctx, 31, 0x25505Cu);
    ctx->pc = 0x255058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255054u;
    // 0x255058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0A8u, 0x255054u, 0x25505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25505Cu;
label_25505c:
    // 0x25505c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_255060:
    if (ctx->pc == 0x255060u) {
        ctx->pc = 0x255064u;
        goto label_255064;
    }
    ctx->pc = 0x25505Cu;
    {
        const bool branch_taken_0x25505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25505c) {
            ctx->pc = 0x255074u;
            goto label_255074;
        }
    }
    ctx->pc = 0x255064u;
label_255064:
    // 0x255064: 0xc09ee84  jal         func_27BA10
label_255068:
    if (ctx->pc == 0x255068u) {
        ctx->pc = 0x255068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255064u;
        // 0x255068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25506Cu;
        goto label_25506c;
    }
    ctx->pc = 0x255064u;
    SET_GPR_U32(ctx, 31, 0x25506Cu);
    ctx->pc = 0x255068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255064u;
    // 0x255068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x255064u, 0x25506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25506Cu;
label_25506c:
    // 0x25506c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_255070:
    if (ctx->pc == 0x255070u) {
        ctx->pc = 0x255074u;
        goto label_255074;
    }
    ctx->pc = 0x25506Cu;
    {
        const bool branch_taken_0x25506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25506c) {
            ctx->pc = 0x255084u;
            goto label_255084;
        }
    }
    ctx->pc = 0x255074u;
label_255074:
    // 0x255074: 0xc0a10fe  jal         func_2843F8
label_255078:
    if (ctx->pc == 0x255078u) {
        ctx->pc = 0x255078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255074u;
        // 0x255078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25507Cu;
        goto label_25507c;
    }
    ctx->pc = 0x255074u;
    SET_GPR_U32(ctx, 31, 0x25507Cu);
    ctx->pc = 0x255078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255074u;
    // 0x255078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2843F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2843F8u, 0x255074u, 0x25507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25507Cu;
label_25507c:
    // 0x25507c: 0x14400127  bnez        $v0, . + 4 + (0x127 << 2)
label_255080:
    if (ctx->pc == 0x255080u) {
        ctx->pc = 0x255080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25507Cu;
        // 0x255080: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255084u;
        goto label_255084;
    }
    ctx->pc = 0x25507Cu;
    {
        const bool branch_taken_0x25507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25507Cu;
        // 0x255080: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25507c) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255084u;
label_255084:
    // 0x255084: 0x16a00012  bnez        $s5, . + 4 + (0x12 << 2)
label_255088:
    if (ctx->pc == 0x255088u) {
        ctx->pc = 0x255088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255084u;
        // 0x255088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25508Cu;
        goto label_25508c;
    }
    ctx->pc = 0x255084u;
    {
        const bool branch_taken_0x255084 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x255088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255084u;
        // 0x255088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255084) {
            ctx->pc = 0x2550D0u;
            goto label_2550d0;
        }
    }
    ctx->pc = 0x25508Cu;
label_25508c:
    // 0x25508c: 0xc09f034  jal         func_27C0D0
label_255090:
    if (ctx->pc == 0x255090u) {
        ctx->pc = 0x255090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25508Cu;
        // 0x255090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255094u;
        goto label_255094;
    }
    ctx->pc = 0x25508Cu;
    SET_GPR_U32(ctx, 31, 0x255094u);
    ctx->pc = 0x255090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25508Cu;
    // 0x255090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0D0u, 0x25508Cu, 0x255094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255094u;
label_255094:
    // 0x255094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_255098:
    if (ctx->pc == 0x255098u) {
        ctx->pc = 0x25509Cu;
        goto label_25509c;
    }
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255094) {
            ctx->pc = 0x2550ACu;
            goto label_2550ac;
        }
    }
    ctx->pc = 0x25509Cu;
label_25509c:
    // 0x25509c: 0xc0a03b8  jal         func_280EE0
label_2550a0:
    if (ctx->pc == 0x2550A0u) {
        ctx->pc = 0x2550A4u;
        goto label_2550a4;
    }
    ctx->pc = 0x25509Cu;
    SET_GPR_U32(ctx, 31, 0x2550A4u);
    ctx->pc = 0x280EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EE0u, 0x25509Cu, 0x2550A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550A4u;
label_2550a4:
    // 0x2550a4: 0x1440011d  bnez        $v0, . + 4 + (0x11D << 2)
label_2550a8:
    if (ctx->pc == 0x2550A8u) {
        ctx->pc = 0x2550A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550A4u;
        // 0x2550a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550ACu;
        goto label_2550ac;
    }
    ctx->pc = 0x2550A4u;
    {
        const bool branch_taken_0x2550a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550A4u;
        // 0x2550a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550a4) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2550ACu;
label_2550ac:
    // 0x2550ac: 0xc09f03e  jal         func_27C0F8
label_2550b0:
    if (ctx->pc == 0x2550B0u) {
        ctx->pc = 0x2550B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550ACu;
        // 0x2550b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550B4u;
        goto label_2550b4;
    }
    ctx->pc = 0x2550ACu;
    SET_GPR_U32(ctx, 31, 0x2550B4u);
    ctx->pc = 0x2550B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550ACu;
    // 0x2550b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0F8u, 0x2550ACu, 0x2550B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550B4u;
label_2550b4:
    // 0x2550b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2550b8:
    if (ctx->pc == 0x2550B8u) {
        ctx->pc = 0x2550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550B4u;
        // 0x2550b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550BCu;
        goto label_2550bc;
    }
    ctx->pc = 0x2550B4u;
    {
        const bool branch_taken_0x2550b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550B4u;
        // 0x2550b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550b4) {
            ctx->pc = 0x2550D0u;
            goto label_2550d0;
        }
    }
    ctx->pc = 0x2550BCu;
label_2550bc:
    // 0x2550bc: 0xc0a03c2  jal         func_280F08
label_2550c0:
    if (ctx->pc == 0x2550C0u) {
        ctx->pc = 0x2550C4u;
        goto label_2550c4;
    }
    ctx->pc = 0x2550BCu;
    SET_GPR_U32(ctx, 31, 0x2550C4u);
    ctx->pc = 0x280F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F08u, 0x2550BCu, 0x2550C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550C4u;
label_2550c4:
    // 0x2550c4: 0x14400115  bnez        $v0, . + 4 + (0x115 << 2)
label_2550c8:
    if (ctx->pc == 0x2550C8u) {
        ctx->pc = 0x2550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550C4u;
        // 0x2550c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550CCu;
        goto label_2550cc;
    }
    ctx->pc = 0x2550C4u;
    {
        const bool branch_taken_0x2550c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550C4u;
        // 0x2550c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550c4) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2550CCu;
label_2550cc:
    // 0x2550cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2550ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2550d0:
    // 0x2550d0: 0xc08997c  jal         func_2265F0
label_2550d4:
    if (ctx->pc == 0x2550D4u) {
        ctx->pc = 0x2550D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550D0u;
        // 0x2550d4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550D8u;
        goto label_2550d8;
    }
    ctx->pc = 0x2550D0u;
    SET_GPR_U32(ctx, 31, 0x2550D8u);
    ctx->pc = 0x2550D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550D0u;
    // 0x2550d4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2550D0u, 0x2550D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550D8u;
label_2550d8:
    // 0x2550d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2550dc:
    if (ctx->pc == 0x2550DCu) {
        ctx->pc = 0x2550DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550D8u;
        // 0x2550dc: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550E0u;
        goto label_2550e0;
    }
    ctx->pc = 0x2550D8u;
    {
        const bool branch_taken_0x2550d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550d8) {
            ctx->pc = 0x2550DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2550D8u;
            // 0x2550dc: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2550F4u;
            goto label_2550f4;
        }
    }
    ctx->pc = 0x2550E0u;
label_2550e0:
    // 0x2550e0: 0xc095bca  jal         func_256F28
label_2550e4:
    if (ctx->pc == 0x2550E4u) {
        ctx->pc = 0x2550E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550E0u;
        // 0x2550e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550E8u;
        goto label_2550e8;
    }
    ctx->pc = 0x2550E0u;
    SET_GPR_U32(ctx, 31, 0x2550E8u);
    ctx->pc = 0x2550E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550E0u;
    // 0x2550e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F28u, 0x2550E0u, 0x2550E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550E8u;
label_2550e8:
    // 0x2550e8: 0x1440010c  bnez        $v0, . + 4 + (0x10C << 2)
label_2550ec:
    if (ctx->pc == 0x2550ECu) {
        ctx->pc = 0x2550ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550E8u;
        // 0x2550ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2550F0u;
        goto label_2550f0;
    }
    ctx->pc = 0x2550E8u;
    {
        const bool branch_taken_0x2550e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2550ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550E8u;
        // 0x2550ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550e8) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2550F0u;
label_2550f0:
    // 0x2550f0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2550f4:
    // 0x2550f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2550f8:
    // 0x2550f8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_2550fc:
    if (ctx->pc == 0x2550FCu) {
        ctx->pc = 0x255100u;
        goto label_255100;
    }
    ctx->pc = 0x2550F8u;
    {
        const bool branch_taken_0x2550f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2550f8) {
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x255100u;
label_255100:
    // 0x255100: 0xc08c68e  jal         func_231A38
label_255104:
    if (ctx->pc == 0x255104u) {
        ctx->pc = 0x255104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255100u;
        // 0x255104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255108u;
        goto label_255108;
    }
    ctx->pc = 0x255100u;
    SET_GPR_U32(ctx, 31, 0x255108u);
    ctx->pc = 0x255104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255100u;
    // 0x255104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x255100u, 0x255108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255108u;
label_255108:
    // 0x255108: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x255108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25510c:
    // 0x25510c: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
label_255110:
    if (ctx->pc == 0x255110u) {
        ctx->pc = 0x255114u;
        goto label_255114;
    }
    ctx->pc = 0x25510Cu;
    {
        const bool branch_taken_0x25510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25510c) {
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x255114u;
label_255114:
    // 0x255114: 0xc089526  jal         func_225498
label_255118:
    if (ctx->pc == 0x255118u) {
        ctx->pc = 0x255118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255114u;
        // 0x255118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25511Cu;
        goto label_25511c;
    }
    ctx->pc = 0x255114u;
    SET_GPR_U32(ctx, 31, 0x25511Cu);
    ctx->pc = 0x255118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255114u;
    // 0x255118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225498u, 0x255114u, 0x25511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25511Cu;
label_25511c:
    // 0x25511c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_255120:
    if (ctx->pc == 0x255120u) {
        ctx->pc = 0x255120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25511Cu;
        // 0x255120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255124u;
        goto label_255124;
    }
    ctx->pc = 0x25511Cu;
    {
        const bool branch_taken_0x25511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25511Cu;
        // 0x255120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25511c) {
            ctx->pc = 0x255134u;
            goto label_255134;
        }
    }
    ctx->pc = 0x255124u;
label_255124:
    // 0x255124: 0xc0899aa  jal         func_2266A8
label_255128:
    if (ctx->pc == 0x255128u) {
        ctx->pc = 0x255128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255124u;
        // 0x255128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25512Cu;
        goto label_25512c;
    }
    ctx->pc = 0x255124u;
    SET_GPR_U32(ctx, 31, 0x25512Cu);
    ctx->pc = 0x255128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255124u;
    // 0x255128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x255124u, 0x25512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25512Cu;
label_25512c:
    // 0x25512c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_255130:
    if (ctx->pc == 0x255130u) {
        ctx->pc = 0x255134u;
        goto label_255134;
    }
    ctx->pc = 0x25512Cu;
    {
        const bool branch_taken_0x25512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25512c) {
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x255134u;
label_255134:
    // 0x255134: 0xc095142  jal         func_254508
label_255138:
    if (ctx->pc == 0x255138u) {
        ctx->pc = 0x255138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255134u;
        // 0x255138: 0x24050269  addiu       $a1, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25513Cu;
        goto label_25513c;
    }
    ctx->pc = 0x255134u;
    SET_GPR_U32(ctx, 31, 0x25513Cu);
    ctx->pc = 0x255138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255134u;
    // 0x255138: 0x24050269  addiu       $a1, $zero, 0x269 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x255134u, 0x25513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25513Cu;
label_25513c:
    // 0x25513c: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_255140:
    // 0x255140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255144:
    // 0x255144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255148:
    // 0x255148: 0xc0899e8  jal         func_2267A0
label_25514c:
    if (ctx->pc == 0x25514Cu) {
        ctx->pc = 0x25514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255148u;
        // 0x25514c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255150u;
        goto label_255150;
    }
    ctx->pc = 0x255148u;
    SET_GPR_U32(ctx, 31, 0x255150u);
    ctx->pc = 0x25514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255148u;
    // 0x25514c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x255148u, 0x255150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255150u;
label_255150:
    // 0x255150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255154:
    // 0x255154: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_255158:
    if (ctx->pc == 0x255158u) {
        ctx->pc = 0x255158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255154u;
        // 0x255158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25515Cu;
        goto label_25515c;
    }
    ctx->pc = 0x255154u;
    {
        const bool branch_taken_0x255154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255154u;
        // 0x255158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255154) {
            ctx->pc = 0x255170u;
            goto label_255170;
        }
    }
    ctx->pc = 0x25515Cu;
label_25515c:
    // 0x25515c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25515cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_255160:
    // 0x255160: 0xc09eb0c  jal         func_27AC30
label_255164:
    if (ctx->pc == 0x255164u) {
        ctx->pc = 0x255164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255160u;
        // 0x255164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255168u;
        goto label_255168;
    }
    ctx->pc = 0x255160u;
    SET_GPR_U32(ctx, 31, 0x255168u);
    ctx->pc = 0x255164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255160u;
    // 0x255164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC30u, 0x255160u, 0x255168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255168u;
label_255168:
    // 0x255168: 0x10000007  b           . + 4 + (0x7 << 2)
label_25516c:
    if (ctx->pc == 0x25516Cu) {
        ctx->pc = 0x255170u;
        goto label_255170;
    }
    ctx->pc = 0x255168u;
    {
        const bool branch_taken_0x255168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255168) {
            ctx->pc = 0x255188u;
            goto label_255188;
        }
    }
    ctx->pc = 0x255170u;
label_255170:
    // 0x255170: 0xc08a658  jal         func_229960
label_255174:
    if (ctx->pc == 0x255174u) {
        ctx->pc = 0x255174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255170u;
        // 0x255174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255178u;
        goto label_255178;
    }
    ctx->pc = 0x255170u;
    SET_GPR_U32(ctx, 31, 0x255178u);
    ctx->pc = 0x255174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255170u;
    // 0x255174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x255170u, 0x255178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255178u;
label_255178:
    // 0x255178: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x255178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25517c:
    // 0x25517c: 0x0  nop
    ctx->pc = 0x25517cu;
    // NOP
label_255180:
    // 0x255180: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_255184:
    if (ctx->pc == 0x255184u) {
        ctx->pc = 0x255184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255180u;
        // 0x255184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255188u;
        goto label_255188;
    }
    ctx->pc = 0x255180u;
    {
        const bool branch_taken_0x255180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x255180) {
            ctx->pc = 0x255184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255180u;
            // 0x255184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255188u;
            goto label_255188;
        }
    }
    ctx->pc = 0x255188u;
label_255188:
    // 0x255188: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_25518c:
    if (ctx->pc == 0x25518Cu) {
        ctx->pc = 0x25518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255188u;
        // 0x25518c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255190u;
        goto label_255190;
    }
    ctx->pc = 0x255188u;
    {
        const bool branch_taken_0x255188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255188u;
        // 0x25518c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255188) {
            ctx->pc = 0x255218u;
            goto label_255218;
        }
    }
    ctx->pc = 0x255190u;
label_255190:
    // 0x255190: 0xc0899aa  jal         func_2266A8
label_255194:
    if (ctx->pc == 0x255194u) {
        ctx->pc = 0x255194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255190u;
        // 0x255194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255198u;
        goto label_255198;
    }
    ctx->pc = 0x255190u;
    SET_GPR_U32(ctx, 31, 0x255198u);
    ctx->pc = 0x255194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255190u;
    // 0x255194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x255190u, 0x255198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255198u;
label_255198:
    // 0x255198: 0xc08a122  jal         func_228488
label_25519c:
    if (ctx->pc == 0x25519Cu) {
        ctx->pc = 0x25519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255198u;
        // 0x25519c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551A0u;
        goto label_2551a0;
    }
    ctx->pc = 0x255198u;
    SET_GPR_U32(ctx, 31, 0x2551A0u);
    ctx->pc = 0x25519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255198u;
    // 0x25519c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228488u, 0x255198u, 0x2551A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551A0u;
label_2551a0:
    // 0x2551a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2551a4:
    if (ctx->pc == 0x2551A4u) {
        ctx->pc = 0x2551A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551A0u;
        // 0x2551a4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551A8u;
        goto label_2551a8;
    }
    ctx->pc = 0x2551A0u;
    {
        const bool branch_taken_0x2551a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551A0u;
        // 0x2551a4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551a0) {
            ctx->pc = 0x2551E8u;
            goto label_2551e8;
        }
    }
    ctx->pc = 0x2551A8u;
label_2551a8:
    // 0x2551a8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2551a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2551ac:
    // 0x2551ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2551b0:
    // 0x2551b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2551b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2551b4:
    // 0x2551b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2551b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2551b8:
    // 0x2551b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2551b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2551bc:
    // 0x2551bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2551c0:
    if (ctx->pc == 0x2551C0u) {
        ctx->pc = 0x2551C4u;
        goto label_2551c4;
    }
    ctx->pc = 0x2551BCu;
    {
        const bool branch_taken_0x2551bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2551bc) {
            ctx->pc = 0x2551E8u;
            goto label_2551e8;
        }
    }
    ctx->pc = 0x2551C4u;
label_2551c4:
    // 0x2551c4: 0xc05d484  jal         func_175210
label_2551c8:
    if (ctx->pc == 0x2551C8u) {
        ctx->pc = 0x2551C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C4u;
        // 0x2551c8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551CCu;
        goto label_2551cc;
    }
    ctx->pc = 0x2551C4u;
    SET_GPR_U32(ctx, 31, 0x2551CCu);
    ctx->pc = 0x2551C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551C4u;
    // 0x2551c8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2551C4u, 0x2551CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551CCu;
label_2551cc:
    // 0x2551cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2551ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2551d0:
    // 0x2551d0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_2551d4:
    // 0x2551d4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2551d8:
    // 0x2551d8: 0xa0f809  jalr        $a1
label_2551dc:
    if (ctx->pc == 0x2551DCu) {
        ctx->pc = 0x2551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D8u;
        // 0x2551dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551E0u;
        goto label_2551e0;
    }
    ctx->pc = 0x2551D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2551E0u);
        ctx->pc = 0x2551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D8u;
        // 0x2551dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551D8u, 0x2551E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2551E0u;
label_2551e0:
    // 0x2551e0: 0xc08be36  jal         func_22F8D8
label_2551e4:
    if (ctx->pc == 0x2551E4u) {
        ctx->pc = 0x2551E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E0u;
        // 0x2551e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551E8u;
        goto label_2551e8;
    }
    ctx->pc = 0x2551E0u;
    SET_GPR_U32(ctx, 31, 0x2551E8u);
    ctx->pc = 0x2551E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551E0u;
    // 0x2551e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2551E0u, 0x2551E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551E8u;
label_2551e8:
    // 0x2551e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2551ec:
    if (ctx->pc == 0x2551ECu) {
        ctx->pc = 0x2551F0u;
        goto label_2551f0;
    }
    ctx->pc = 0x2551E8u;
    {
        const bool branch_taken_0x2551e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551e8) {
            ctx->pc = 0x255208u;
            goto label_255208;
        }
    }
    ctx->pc = 0x2551F0u;
label_2551f0:
    // 0x2551f0: 0xc0899e8  jal         func_2267A0
label_2551f4:
    if (ctx->pc == 0x2551F4u) {
        ctx->pc = 0x2551F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F0u;
        // 0x2551f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551F8u;
        goto label_2551f8;
    }
    ctx->pc = 0x2551F0u;
    SET_GPR_U32(ctx, 31, 0x2551F8u);
    ctx->pc = 0x2551F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2551F0u;
    // 0x2551f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x2551F0u, 0x2551F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551F8u;
label_2551f8:
    // 0x2551f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2551fc:
    if (ctx->pc == 0x2551FCu) {
        ctx->pc = 0x2551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F8u;
        // 0x2551fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255200u;
        goto label_255200;
    }
    ctx->pc = 0x2551F8u;
    {
        const bool branch_taken_0x2551f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F8u;
        // 0x2551fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551f8) {
            ctx->pc = 0x255208u;
            goto label_255208;
        }
    }
    ctx->pc = 0x255200u;
label_255200:
    // 0x255200: 0xc0899d8  jal         func_226760
label_255204:
    if (ctx->pc == 0x255204u) {
        ctx->pc = 0x255204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255200u;
        // 0x255204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255208u;
        goto label_255208;
    }
    ctx->pc = 0x255200u;
    SET_GPR_U32(ctx, 31, 0x255208u);
    ctx->pc = 0x255204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255200u;
    // 0x255204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x255200u, 0x255208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255208u;
label_255208:
    // 0x255208: 0xc0985fe  jal         func_2617F8
label_25520c:
    if (ctx->pc == 0x25520Cu) {
        ctx->pc = 0x25520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255208u;
        // 0x25520c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255210u;
        goto label_255210;
    }
    ctx->pc = 0x255208u;
    SET_GPR_U32(ctx, 31, 0x255210u);
    ctx->pc = 0x25520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255208u;
    // 0x25520c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2617F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2617F8u, 0x255208u, 0x255210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255210u;
label_255210:
    // 0x255210: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_255214:
    if (ctx->pc == 0x255214u) {
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255218u;
        goto label_255218;
    }
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255210) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0xc0893ca  jal         func_224F28
label_25521c:
    if (ctx->pc == 0x25521Cu) {
        ctx->pc = 0x25521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255218u;
        // 0x25521c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255220u;
        goto label_255220;
    }
    ctx->pc = 0x255218u;
    SET_GPR_U32(ctx, 31, 0x255220u);
    ctx->pc = 0x25521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255218u;
    // 0x25521c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224F28u, 0x255218u, 0x255220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255220u;
label_255220:
    // 0x255220: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_255224:
    if (ctx->pc == 0x255224u) {
        ctx->pc = 0x255224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255220u;
        // 0x255224: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255228u;
        goto label_255228;
    }
    ctx->pc = 0x255220u;
    {
        const bool branch_taken_0x255220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255220) {
            ctx->pc = 0x255224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255220u;
            // 0x255224: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552FCu;
            goto label_2552fc;
        }
    }
    ctx->pc = 0x255228u;
label_255228:
    // 0x255228: 0xc088eb4  jal         func_223AD0
label_25522c:
    if (ctx->pc == 0x25522Cu) {
        ctx->pc = 0x25522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255228u;
        // 0x25522c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255230u;
        goto label_255230;
    }
    ctx->pc = 0x255228u;
    SET_GPR_U32(ctx, 31, 0x255230u);
    ctx->pc = 0x25522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255228u;
    // 0x25522c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x255228u, 0x255230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255230u;
label_255230:
    // 0x255230: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_255234:
    if (ctx->pc == 0x255234u) {
        ctx->pc = 0x255234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255230u;
        // 0x255234: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255238u;
        goto label_255238;
    }
    ctx->pc = 0x255230u;
    {
        const bool branch_taken_0x255230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255230) {
            ctx->pc = 0x255234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255230u;
            // 0x255234: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255254u;
            goto label_255254;
        }
    }
    ctx->pc = 0x255238u;
label_255238:
    // 0x255238: 0x3c054008  lui         $a1, 0x4008
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16392 << 16));
label_25523c:
    // 0x25523c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255240:
    // 0x255240: 0xc089998  jal         func_226660
label_255244:
    if (ctx->pc == 0x255244u) {
        ctx->pc = 0x255244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255240u;
        // 0x255244: 0x34a59000  ori         $a1, $a1, 0x9000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255248u;
        goto label_255248;
    }
    ctx->pc = 0x255240u;
    SET_GPR_U32(ctx, 31, 0x255248u);
    ctx->pc = 0x255244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255240u;
    // 0x255244: 0x34a59000  ori         $a1, $a1, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x255240u, 0x255248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255248u;
label_255248:
    // 0x255248: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_25524c:
    if (ctx->pc == 0x25524Cu) {
        ctx->pc = 0x25524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255248u;
        // 0x25524c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255250u;
        goto label_255250;
    }
    ctx->pc = 0x255248u;
    {
        const bool branch_taken_0x255248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255248) {
            ctx->pc = 0x25524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255248u;
            // 0x25524c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552FCu;
            goto label_2552fc;
        }
    }
    ctx->pc = 0x255250u;
label_255250:
    // 0x255250: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x255250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_255254:
    // 0x255254: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_255258:
    // 0x255258: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_25525c:
    if (ctx->pc == 0x25525Cu) {
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255260u;
        goto label_255260;
    }
    ctx->pc = 0x255258u;
    {
        const bool branch_taken_0x255258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255258) {
            ctx->pc = 0x25525Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255258u;
            // 0x25525c: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2552A4u;
            goto label_2552a4;
        }
    }
    ctx->pc = 0x255260u;
label_255260:
    // 0x255260: 0xc0899e8  jal         func_2267A0
label_255264:
    if (ctx->pc == 0x255264u) {
        ctx->pc = 0x255264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255260u;
        // 0x255264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255268u;
        goto label_255268;
    }
    ctx->pc = 0x255260u;
    SET_GPR_U32(ctx, 31, 0x255268u);
    ctx->pc = 0x255264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255260u;
    // 0x255264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x255260u, 0x255268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255268u;
label_255268:
    // 0x255268: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25526c:
    if (ctx->pc == 0x25526Cu) {
        ctx->pc = 0x25526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255268u;
        // 0x25526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255270u;
        goto label_255270;
    }
    ctx->pc = 0x255268u;
    {
        const bool branch_taken_0x255268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255268u;
        // 0x25526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255268) {
            ctx->pc = 0x2552A0u;
            goto label_2552a0;
        }
    }
    ctx->pc = 0x255270u;
label_255270:
    // 0x255270: 0xc089974  jal         func_2265D0
label_255274:
    if (ctx->pc == 0x255274u) {
        ctx->pc = 0x255274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255270u;
        // 0x255274: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255278u;
        goto label_255278;
    }
    ctx->pc = 0x255270u;
    SET_GPR_U32(ctx, 31, 0x255278u);
    ctx->pc = 0x255274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255270u;
    // 0x255274: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x255270u, 0x255278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255278u;
label_255278:
    // 0x255278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25527c:
    // 0x25527c: 0xc0899aa  jal         func_2266A8
label_255280:
    if (ctx->pc == 0x255280u) {
        ctx->pc = 0x255280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25527Cu;
        // 0x255280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255284u;
        goto label_255284;
    }
    ctx->pc = 0x25527Cu;
    SET_GPR_U32(ctx, 31, 0x255284u);
    ctx->pc = 0x255280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25527Cu;
    // 0x255280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25527Cu, 0x255284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255284u;
label_255284:
    // 0x255284: 0xc0899e8  jal         func_2267A0
label_255288:
    if (ctx->pc == 0x255288u) {
        ctx->pc = 0x255288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255284u;
        // 0x255288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25528Cu;
        goto label_25528c;
    }
    ctx->pc = 0x255284u;
    SET_GPR_U32(ctx, 31, 0x25528Cu);
    ctx->pc = 0x255288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255284u;
    // 0x255288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x255284u, 0x25528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25528Cu;
label_25528c:
    // 0x25528c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255290:
    // 0x255290: 0xc09855e  jal         func_261578
label_255294:
    if (ctx->pc == 0x255294u) {
        ctx->pc = 0x255294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255290u;
        // 0x255294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255298u;
        goto label_255298;
    }
    ctx->pc = 0x255290u;
    SET_GPR_U32(ctx, 31, 0x255298u);
    ctx->pc = 0x255294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255290u;
    // 0x255294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261578u, 0x255290u, 0x255298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255298u;
label_255298:
    // 0x255298: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_25529c:
    if (ctx->pc == 0x25529Cu) {
        ctx->pc = 0x25529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255298u;
        // 0x25529c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552A0u;
        goto label_2552a0;
    }
    ctx->pc = 0x255298u;
    {
        const bool branch_taken_0x255298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255298u;
        // 0x25529c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255298) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2552A0u;
label_2552a0:
    // 0x2552a0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2552a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2552a4:
    // 0x2552a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2552a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2552a8:
    // 0x2552a8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2552ac:
    if (ctx->pc == 0x2552ACu) {
        ctx->pc = 0x2552B0u;
        goto label_2552b0;
    }
    ctx->pc = 0x2552A8u;
    {
        const bool branch_taken_0x2552a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2552a8) {
            ctx->pc = 0x2552D8u;
            goto label_2552d8;
        }
    }
    ctx->pc = 0x2552B0u;
label_2552b0:
    // 0x2552b0: 0xc0899e8  jal         func_2267A0
label_2552b4:
    if (ctx->pc == 0x2552B4u) {
        ctx->pc = 0x2552B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B0u;
        // 0x2552b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552B8u;
        goto label_2552b8;
    }
    ctx->pc = 0x2552B0u;
    SET_GPR_U32(ctx, 31, 0x2552B8u);
    ctx->pc = 0x2552B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552B0u;
    // 0x2552b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x2552B0u, 0x2552B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552B8u;
label_2552b8:
    // 0x2552b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B8u;
        // 0x2552bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    {
        const bool branch_taken_0x2552b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B8u;
        // 0x2552bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552b8) {
            ctx->pc = 0x2552D8u;
            goto label_2552d8;
        }
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0xc0899aa  jal         func_2266A8
label_2552c4:
    if (ctx->pc == 0x2552C4u) {
        ctx->pc = 0x2552C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C0u;
        // 0x2552c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552C8u;
        goto label_2552c8;
    }
    ctx->pc = 0x2552C0u;
    SET_GPR_U32(ctx, 31, 0x2552C8u);
    ctx->pc = 0x2552C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552C0u;
    // 0x2552c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2552C0u, 0x2552C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552C8u;
label_2552c8:
    // 0x2552c8: 0xc09ab88  jal         func_26AE20
label_2552cc:
    if (ctx->pc == 0x2552CCu) {
        ctx->pc = 0x2552CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C8u;
        // 0x2552cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552D0u;
        goto label_2552d0;
    }
    ctx->pc = 0x2552C8u;
    SET_GPR_U32(ctx, 31, 0x2552D0u);
    ctx->pc = 0x2552CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552C8u;
    // 0x2552cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AE20u, 0x2552C8u, 0x2552D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552D0u;
label_2552d0:
    // 0x2552d0: 0x10000092  b           . + 4 + (0x92 << 2)
label_2552d4:
    if (ctx->pc == 0x2552D4u) {
        ctx->pc = 0x2552D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D0u;
        // 0x2552d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552D8u;
        goto label_2552d8;
    }
    ctx->pc = 0x2552D0u;
    {
        const bool branch_taken_0x2552d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D0u;
        // 0x2552d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552d0) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2552D8u;
label_2552d8:
    // 0x2552d8: 0xc09ee58  jal         func_27B960
label_2552dc:
    if (ctx->pc == 0x2552DCu) {
        ctx->pc = 0x2552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D8u;
        // 0x2552dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552E0u;
        goto label_2552e0;
    }
    ctx->pc = 0x2552D8u;
    SET_GPR_U32(ctx, 31, 0x2552E0u);
    ctx->pc = 0x2552DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552D8u;
    // 0x2552dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B960u, 0x2552D8u, 0x2552E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552E0u;
label_2552e0:
    // 0x2552e0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2552e4:
    if (ctx->pc == 0x2552E4u) {
        ctx->pc = 0x2552E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552E0u;
        // 0x2552e4: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552E8u;
        goto label_2552e8;
    }
    ctx->pc = 0x2552E0u;
    {
        const bool branch_taken_0x2552e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2552e0) {
            ctx->pc = 0x2552E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552E0u;
            // 0x2552e4: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255318u;
            goto label_255318;
        }
    }
    ctx->pc = 0x2552E8u;
label_2552e8:
    // 0x2552e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2552e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2552ec:
    // 0x2552ec: 0xc089988  jal         func_226620
label_2552f0:
    if (ctx->pc == 0x2552F0u) {
        ctx->pc = 0x2552F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552ECu;
        // 0x2552f0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552F4u;
        goto label_2552f4;
    }
    ctx->pc = 0x2552ECu;
    SET_GPR_U32(ctx, 31, 0x2552F4u);
    ctx->pc = 0x2552F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552ECu;
    // 0x2552f0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2552ECu, 0x2552F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552F4u;
label_2552f4:
    // 0x2552f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2552f8:
    if (ctx->pc == 0x2552F8u) {
        ctx->pc = 0x2552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F4u;
        // 0x2552f8: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552FCu;
        goto label_2552fc;
    }
    ctx->pc = 0x2552F4u;
    {
        const bool branch_taken_0x2552f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552F4u;
        // 0x2552f8: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552f4) {
            ctx->pc = 0x255318u;
            goto label_255318;
        }
    }
    ctx->pc = 0x2552FCu;
label_2552fc:
    // 0x2552fc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_255300:
    // 0x255300: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x255300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_255304:
    // 0x255304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_255308:
    if (ctx->pc == 0x255308u) {
        ctx->pc = 0x255308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255304u;
        // 0x255308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25530Cu;
        goto label_25530c;
    }
    ctx->pc = 0x255304u;
    {
        const bool branch_taken_0x255304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255304u;
        // 0x255308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255304) {
            ctx->pc = 0x255314u;
            goto label_255314;
        }
    }
    ctx->pc = 0x25530Cu;
label_25530c:
    // 0x25530c: 0xc0899aa  jal         func_2266A8
label_255310:
    if (ctx->pc == 0x255310u) {
        ctx->pc = 0x255310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25530Cu;
        // 0x255310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255314u;
        goto label_255314;
    }
    ctx->pc = 0x25530Cu;
    SET_GPR_U32(ctx, 31, 0x255314u);
    ctx->pc = 0x255310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25530Cu;
    // 0x255310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25530Cu, 0x255314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255314u;
label_255314:
    // 0x255314: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
label_255318:
    // 0x255318: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_25531c:
    if (ctx->pc == 0x25531Cu) {
        ctx->pc = 0x255320u;
        goto label_255320;
    }
    ctx->pc = 0x255318u;
    {
        const bool branch_taken_0x255318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255318) {
            ctx->pc = 0x255338u;
            goto label_255338;
        }
    }
    ctx->pc = 0x255320u;
label_255320:
    // 0x255320: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x255320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_255324:
    // 0x255324: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x255324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_255328:
    // 0x255328: 0xc08997c  jal         func_2265F0
label_25532c:
    if (ctx->pc == 0x25532Cu) {
        ctx->pc = 0x25532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255328u;
        // 0x25532c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255330u;
        goto label_255330;
    }
    ctx->pc = 0x255328u;
    SET_GPR_U32(ctx, 31, 0x255330u);
    ctx->pc = 0x25532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255328u;
    // 0x25532c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x255328u, 0x255330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255330u;
label_255330:
    // 0x255330: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_255334:
    if (ctx->pc == 0x255334u) {
        ctx->pc = 0x255334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255330u;
        // 0x255334: 0x86620144  lh          $v0, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255338u;
        goto label_255338;
    }
    ctx->pc = 0x255330u;
    {
        const bool branch_taken_0x255330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255330) {
            ctx->pc = 0x255334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255330u;
            // 0x255334: 0x86620144  lh          $v0, 0x144($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25534Cu;
            goto label_25534c;
        }
    }
    ctx->pc = 0x255338u;
label_255338:
    // 0x255338: 0xc0997dc  jal         func_265F70
label_25533c:
    if (ctx->pc == 0x25533Cu) {
        ctx->pc = 0x25533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255338u;
        // 0x25533c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255340u;
        goto label_255340;
    }
    ctx->pc = 0x255338u;
    SET_GPR_U32(ctx, 31, 0x255340u);
    ctx->pc = 0x25533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255338u;
    // 0x25533c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F70u, 0x255338u, 0x255340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255340u;
label_255340:
    // 0x255340: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_255344:
    if (ctx->pc == 0x255344u) {
        ctx->pc = 0x255344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255340u;
        // 0x255344: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255348u;
        goto label_255348;
    }
    ctx->pc = 0x255340u;
    {
        const bool branch_taken_0x255340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255340u;
        // 0x255344: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255340) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255348u;
label_255348:
    // 0x255348: 0x86620144  lh          $v0, 0x144($s3)
    ctx->pc = 0x255348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
label_25534c:
    // 0x25534c: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
label_255350:
    if (ctx->pc == 0x255350u) {
        ctx->pc = 0x255350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25534Cu;
        // 0x255350: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255354u;
        goto label_255354;
    }
    ctx->pc = 0x25534Cu;
    {
        const bool branch_taken_0x25534c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x255350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25534Cu;
        // 0x255350: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25534c) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255354u;
label_255354:
    // 0x255354: 0xc08a05a  jal         func_228168
label_255358:
    if (ctx->pc == 0x255358u) {
        ctx->pc = 0x255358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255354u;
        // 0x255358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25535Cu;
        goto label_25535c;
    }
    ctx->pc = 0x255354u;
    SET_GPR_U32(ctx, 31, 0x25535Cu);
    ctx->pc = 0x255358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255354u;
    // 0x255358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x255354u, 0x25535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25535Cu;
label_25535c:
    // 0x25535c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_255360:
    if (ctx->pc == 0x255360u) {
        ctx->pc = 0x255364u;
        goto label_255364;
    }
    ctx->pc = 0x25535Cu;
    {
        const bool branch_taken_0x25535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25535c) {
            ctx->pc = 0x25538Cu;
            goto label_25538c;
        }
    }
    ctx->pc = 0x255364u;
label_255364:
    // 0x255364: 0x8e650114  lw          $a1, 0x114($s3)
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_255368:
    // 0x255368: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_25536c:
    if (ctx->pc == 0x25536Cu) {
        ctx->pc = 0x25536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255368u;
        // 0x25536c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255370u;
        goto label_255370;
    }
    ctx->pc = 0x255368u;
    {
        const bool branch_taken_0x255368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255368u;
        // 0x25536c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255368) {
            ctx->pc = 0x25538Cu;
            goto label_25538c;
        }
    }
    ctx->pc = 0x255370u;
label_255370:
    // 0x255370: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x255370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_255374:
    // 0x255374: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_255378:
    // 0x255378: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x255378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25537c:
    // 0x25537c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_255380:
    if (ctx->pc == 0x255380u) {
        ctx->pc = 0x255384u;
        goto label_255384;
    }
    ctx->pc = 0x25537Cu;
    {
        const bool branch_taken_0x25537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25537c) {
            ctx->pc = 0x25538Cu;
            goto label_25538c;
        }
    }
    ctx->pc = 0x255384u;
label_255384:
    // 0x255384: 0xc08c050  jal         func_230140
label_255388:
    if (ctx->pc == 0x255388u) {
        ctx->pc = 0x255388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255384u;
        // 0x255388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25538Cu;
        goto label_25538c;
    }
    ctx->pc = 0x255384u;
    SET_GPR_U32(ctx, 31, 0x25538Cu);
    ctx->pc = 0x255388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255384u;
    // 0x255388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x255384u, 0x25538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25538Cu;
label_25538c:
    // 0x25538c: 0xc0958b4  jal         func_2562D0
label_255390:
    if (ctx->pc == 0x255390u) {
        ctx->pc = 0x255390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25538Cu;
        // 0x255390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255394u;
        goto label_255394;
    }
    ctx->pc = 0x25538Cu;
    SET_GPR_U32(ctx, 31, 0x255394u);
    ctx->pc = 0x255390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25538Cu;
    // 0x255390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2562D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2562D0u, 0x25538Cu, 0x255394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255394u;
label_255394:
    // 0x255394: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_255398:
    if (ctx->pc == 0x255398u) {
        ctx->pc = 0x255398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255394u;
        // 0x255398: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25539Cu;
        goto label_25539c;
    }
    ctx->pc = 0x255394u;
    {
        const bool branch_taken_0x255394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255394u;
        // 0x255398: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255394) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x25539Cu;
label_25539c:
    // 0x25539c: 0x16a00017  bnez        $s5, . + 4 + (0x17 << 2)
label_2553a0:
    if (ctx->pc == 0x2553A0u) {
        ctx->pc = 0x2553A4u;
        goto label_2553a4;
    }
    ctx->pc = 0x25539Cu;
    {
        const bool branch_taken_0x25539c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x25539c) {
            ctx->pc = 0x2553FCu;
            goto label_2553fc;
        }
    }
    ctx->pc = 0x2553A4u;
label_2553a4:
    // 0x2553a4: 0xc08a014  jal         func_228050
label_2553a8:
    if (ctx->pc == 0x2553A8u) {
        ctx->pc = 0x2553A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553A4u;
        // 0x2553a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553ACu;
        goto label_2553ac;
    }
    ctx->pc = 0x2553A4u;
    SET_GPR_U32(ctx, 31, 0x2553ACu);
    ctx->pc = 0x2553A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553A4u;
    // 0x2553a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2553A4u, 0x2553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553ACu;
label_2553ac:
    // 0x2553ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2553b0:
    if (ctx->pc == 0x2553B0u) {
        ctx->pc = 0x2553B4u;
        goto label_2553b4;
    }
    ctx->pc = 0x2553ACu;
    {
        const bool branch_taken_0x2553ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2553ac) {
            ctx->pc = 0x2553CCu;
            goto label_2553cc;
        }
    }
    ctx->pc = 0x2553B4u;
label_2553b4:
    // 0x2553b4: 0xc0e4060  jal         func_390180
label_2553b8:
    if (ctx->pc == 0x2553B8u) {
        ctx->pc = 0x2553B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553B4u;
        // 0x2553b8: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553BCu;
        goto label_2553bc;
    }
    ctx->pc = 0x2553B4u;
    SET_GPR_U32(ctx, 31, 0x2553BCu);
    ctx->pc = 0x2553B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553B4u;
    // 0x2553b8: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2553B4u, 0x2553BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553BCu;
label_2553bc:
    // 0x2553bc: 0xc0e6ee8  jal         func_39BBA0
label_2553c0:
    if (ctx->pc == 0x2553C0u) {
        ctx->pc = 0x2553C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553BCu;
        // 0x2553c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553C4u;
        goto label_2553c4;
    }
    ctx->pc = 0x2553BCu;
    SET_GPR_U32(ctx, 31, 0x2553C4u);
    ctx->pc = 0x2553C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553BCu;
    // 0x2553c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x2553BCu, 0x2553C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553C4u;
label_2553c4:
    // 0x2553c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2553c8:
    if (ctx->pc == 0x2553C8u) {
        ctx->pc = 0x2553CCu;
        goto label_2553cc;
    }
    ctx->pc = 0x2553C4u;
    {
        const bool branch_taken_0x2553c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2553c4) {
            ctx->pc = 0x2553FCu;
            goto label_2553fc;
        }
    }
    ctx->pc = 0x2553CCu;
label_2553cc:
    // 0x2553cc: 0x3405fc00  ori         $a1, $zero, 0xFC00
    ctx->pc = 0x2553ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
label_2553d0:
    // 0x2553d0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_2553d4:
    // 0x2553d4: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x2553d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_2553d8:
    // 0x2553d8: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x2553d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_2553dc:
    // 0x2553dc: 0xc08997c  jal         func_2265F0
label_2553e0:
    if (ctx->pc == 0x2553E0u) {
        ctx->pc = 0x2553E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553DCu;
        // 0x2553e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553E4u;
        goto label_2553e4;
    }
    ctx->pc = 0x2553DCu;
    SET_GPR_U32(ctx, 31, 0x2553E4u);
    ctx->pc = 0x2553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553DCu;
    // 0x2553e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2553DCu, 0x2553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553E4u;
label_2553e4:
    // 0x2553e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2553e8:
    if (ctx->pc == 0x2553E8u) {
        ctx->pc = 0x2553ECu;
        goto label_2553ec;
    }
    ctx->pc = 0x2553E4u;
    {
        const bool branch_taken_0x2553e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2553e4) {
            ctx->pc = 0x2553FCu;
            goto label_2553fc;
        }
    }
    ctx->pc = 0x2553ECu;
label_2553ec:
    // 0x2553ec: 0xc0957c2  jal         func_255F08
label_2553f0:
    if (ctx->pc == 0x2553F0u) {
        ctx->pc = 0x2553F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553ECu;
        // 0x2553f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553F4u;
        goto label_2553f4;
    }
    ctx->pc = 0x2553ECu;
    SET_GPR_U32(ctx, 31, 0x2553F4u);
    ctx->pc = 0x2553F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553ECu;
    // 0x2553f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255F08u, 0x2553ECu, 0x2553F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553F4u;
label_2553f4:
    // 0x2553f4: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2553f8:
    if (ctx->pc == 0x2553F8u) {
        ctx->pc = 0x2553F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553F4u;
        // 0x2553f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2553FCu;
        goto label_2553fc;
    }
    ctx->pc = 0x2553F4u;
    {
        const bool branch_taken_0x2553f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2553F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553F4u;
        // 0x2553f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553f4) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2553FCu;
label_2553fc:
    // 0x2553fc: 0xc095a98  jal         func_256A60
label_255400:
    if (ctx->pc == 0x255400u) {
        ctx->pc = 0x255400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553FCu;
        // 0x255400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255404u;
        goto label_255404;
    }
    ctx->pc = 0x2553FCu;
    SET_GPR_U32(ctx, 31, 0x255404u);
    ctx->pc = 0x255400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553FCu;
    // 0x255400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A60u, 0x2553FCu, 0x255404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255404u;
label_255404:
    // 0x255404: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_255408:
    if (ctx->pc == 0x255408u) {
        ctx->pc = 0x255408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255404u;
        // 0x255408: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25540Cu;
        goto label_25540c;
    }
    ctx->pc = 0x255404u;
    {
        const bool branch_taken_0x255404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255404u;
        // 0x255408: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255404) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x25540Cu;
label_25540c:
    // 0x25540c: 0xc089fe4  jal         func_227F90
label_255410:
    if (ctx->pc == 0x255410u) {
        ctx->pc = 0x255410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25540Cu;
        // 0x255410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255414u;
        goto label_255414;
    }
    ctx->pc = 0x25540Cu;
    SET_GPR_U32(ctx, 31, 0x255414u);
    ctx->pc = 0x255410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25540Cu;
    // 0x255410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x25540Cu, 0x255414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_255418:
    if (ctx->pc == 0x255418u) {
        ctx->pc = 0x255418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255414u;
        // 0x255418: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25541Cu;
        goto label_25541c;
    }
    ctx->pc = 0x255414u;
    {
        const bool branch_taken_0x255414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255414u;
        // 0x255418: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255414) {
            ctx->pc = 0x255430u;
            goto label_255430;
        }
    }
    ctx->pc = 0x25541Cu;
label_25541c:
    // 0x25541c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255420:
    // 0x255420: 0xc089998  jal         func_226660
label_255424:
    if (ctx->pc == 0x255424u) {
        ctx->pc = 0x255424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255420u;
        // 0x255424: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255428u;
        goto label_255428;
    }
    ctx->pc = 0x255420u;
    SET_GPR_U32(ctx, 31, 0x255428u);
    ctx->pc = 0x255424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255420u;
    // 0x255424: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x255420u, 0x255428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255428u;
label_255428:
    // 0x255428: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_25542c:
    if (ctx->pc == 0x25542Cu) {
        ctx->pc = 0x25542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255428u;
        // 0x25542c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255430u;
        goto label_255430;
    }
    ctx->pc = 0x255428u;
    {
        const bool branch_taken_0x255428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255428u;
        // 0x25542c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255428) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255430u;
label_255430:
    // 0x255430: 0x16a00022  bnez        $s5, . + 4 + (0x22 << 2)
label_255434:
    if (ctx->pc == 0x255434u) {
        ctx->pc = 0x255438u;
        goto label_255438;
    }
    ctx->pc = 0x255430u;
    {
        const bool branch_taken_0x255430 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x255430) {
            ctx->pc = 0x2554BCu;
            goto label_2554bc;
        }
    }
    ctx->pc = 0x255438u;
label_255438:
    // 0x255438: 0x3405fc00  ori         $a1, $zero, 0xFC00
    ctx->pc = 0x255438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
label_25543c:
    // 0x25543c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x25543cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_255440:
    // 0x255440: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x255440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_255444:
    // 0x255444: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x255444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_255448:
    // 0x255448: 0xc08997c  jal         func_2265F0
label_25544c:
    if (ctx->pc == 0x25544Cu) {
        ctx->pc = 0x25544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255448u;
        // 0x25544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255450u;
        goto label_255450;
    }
    ctx->pc = 0x255448u;
    SET_GPR_U32(ctx, 31, 0x255450u);
    ctx->pc = 0x25544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255448u;
    // 0x25544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x255448u, 0x255450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255450u;
label_255450:
    // 0x255450: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_255454:
    if (ctx->pc == 0x255454u) {
        ctx->pc = 0x255454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255450u;
        // 0x255454: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255458u;
        goto label_255458;
    }
    ctx->pc = 0x255450u;
    {
        const bool branch_taken_0x255450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255450u;
        // 0x255454: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255450) {
            ctx->pc = 0x2554BCu;
            goto label_2554bc;
        }
    }
    ctx->pc = 0x255458u;
label_255458:
    // 0x255458: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x255458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25545c:
    // 0x25545c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x25545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_255460:
    // 0x255460: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_255464:
    if (ctx->pc == 0x255464u) {
        ctx->pc = 0x255468u;
        goto label_255468;
    }
    ctx->pc = 0x255460u;
    {
        const bool branch_taken_0x255460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x255460) {
            ctx->pc = 0x255478u;
            goto label_255478;
        }
    }
    ctx->pc = 0x255468u;
label_255468:
    // 0x255468: 0xc08a000  jal         func_228000
label_25546c:
    if (ctx->pc == 0x25546Cu) {
        ctx->pc = 0x25546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255468u;
        // 0x25546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255470u;
        goto label_255470;
    }
    ctx->pc = 0x255468u;
    SET_GPR_U32(ctx, 31, 0x255470u);
    ctx->pc = 0x25546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255468u;
    // 0x25546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x255468u, 0x255470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255470u;
label_255470:
    // 0x255470: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_255474:
    if (ctx->pc == 0x255474u) {
        ctx->pc = 0x255474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255470u;
        // 0x255474: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255478u;
        goto label_255478;
    }
    ctx->pc = 0x255470u;
    {
        const bool branch_taken_0x255470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255470) {
            ctx->pc = 0x255474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255470u;
            // 0x255474: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25548Cu;
            goto label_25548c;
        }
    }
    ctx->pc = 0x255478u;
label_255478:
    // 0x255478: 0xc095550  jal         func_255540
label_25547c:
    if (ctx->pc == 0x25547Cu) {
        ctx->pc = 0x25547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255478u;
        // 0x25547c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255480u;
        goto label_255480;
    }
    ctx->pc = 0x255478u;
    SET_GPR_U32(ctx, 31, 0x255480u);
    ctx->pc = 0x25547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255478u;
    // 0x25547c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255540u, 0x255478u, 0x255480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255480u;
label_255480:
    // 0x255480: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_255484:
    if (ctx->pc == 0x255484u) {
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255488u;
        goto label_255488;
    }
    ctx->pc = 0x255480u;
    {
        const bool branch_taken_0x255480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255480) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255488u;
label_255488:
    // 0x255488: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x255488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25548c:
    // 0x25548c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x25548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_255490:
    // 0x255490: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x255490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_255494:
    // 0x255494: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_255498:
    if (ctx->pc == 0x255498u) {
        ctx->pc = 0x25549Cu;
        goto label_25549c;
    }
    ctx->pc = 0x255494u;
    {
        const bool branch_taken_0x255494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x255494) {
            ctx->pc = 0x2554ACu;
            goto label_2554ac;
        }
    }
    ctx->pc = 0x25549Cu;
label_25549c:
    // 0x25549c: 0xc08a00a  jal         func_228028
label_2554a0:
    if (ctx->pc == 0x2554A0u) {
        ctx->pc = 0x2554A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25549Cu;
        // 0x2554a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554A4u;
        goto label_2554a4;
    }
    ctx->pc = 0x25549Cu;
    SET_GPR_U32(ctx, 31, 0x2554A4u);
    ctx->pc = 0x2554A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25549Cu;
    // 0x2554a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228028u, 0x25549Cu, 0x2554A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554A4u;
label_2554a4:
    // 0x2554a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2554a8:
    if (ctx->pc == 0x2554A8u) {
        ctx->pc = 0x2554ACu;
        goto label_2554ac;
    }
    ctx->pc = 0x2554A4u;
    {
        const bool branch_taken_0x2554a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554a4) {
            ctx->pc = 0x2554BCu;
            goto label_2554bc;
        }
    }
    ctx->pc = 0x2554ACu;
label_2554ac:
    // 0x2554ac: 0xc09573e  jal         func_255CF8
label_2554b0:
    if (ctx->pc == 0x2554B0u) {
        ctx->pc = 0x2554B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554ACu;
        // 0x2554b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554B4u;
        goto label_2554b4;
    }
    ctx->pc = 0x2554ACu;
    SET_GPR_U32(ctx, 31, 0x2554B4u);
    ctx->pc = 0x2554B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554ACu;
    // 0x2554b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CF8u, 0x2554ACu, 0x2554B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554B4u;
label_2554b4:
    // 0x2554b4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2554b8:
    if (ctx->pc == 0x2554B8u) {
        ctx->pc = 0x2554B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554B4u;
        // 0x2554b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554BCu;
        goto label_2554bc;
    }
    ctx->pc = 0x2554B4u;
    {
        const bool branch_taken_0x2554b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2554B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554B4u;
        // 0x2554b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554b4) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x2554BCu;
label_2554bc:
    // 0x2554bc: 0xc0874fa  jal         func_21D3E8
label_2554c0:
    if (ctx->pc == 0x2554C0u) {
        ctx->pc = 0x2554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554BCu;
        // 0x2554c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554C4u;
        goto label_2554c4;
    }
    ctx->pc = 0x2554BCu;
    SET_GPR_U32(ctx, 31, 0x2554C4u);
    ctx->pc = 0x2554C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554BCu;
    // 0x2554c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2554BCu, 0x2554C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554C4u;
label_2554c4:
    // 0x2554c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2554c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2554c8:
    // 0x2554c8: 0xc051fe6  jal         func_147F98
label_2554cc:
    if (ctx->pc == 0x2554CCu) {
        ctx->pc = 0x2554CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554C8u;
        // 0x2554cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554D0u;
        goto label_2554d0;
    }
    ctx->pc = 0x2554C8u;
    SET_GPR_U32(ctx, 31, 0x2554D0u);
    ctx->pc = 0x2554CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554C8u;
    // 0x2554cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x2554C8u, 0x2554D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554D0u;
label_2554d0:
    // 0x2554d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2554d4:
    if (ctx->pc == 0x2554D4u) {
        ctx->pc = 0x2554D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554D0u;
        // 0x2554d4: 0xa22005b8  sb          $zero, 0x5B8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554D8u;
        goto label_2554d8;
    }
    ctx->pc = 0x2554D0u;
    {
        const bool branch_taken_0x2554d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554d0) {
            ctx->pc = 0x2554D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2554D0u;
            // 0x2554d4: 0xa22005b8  sb          $zero, 0x5B8($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1464), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2554D8u;
            goto label_2554d8;
        }
    }
    ctx->pc = 0x2554D8u;
label_2554d8:
    // 0x2554d8: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
label_2554dc:
    if (ctx->pc == 0x2554DCu) {
        ctx->pc = 0x2554E0u;
        goto label_2554e0;
    }
    ctx->pc = 0x2554D8u;
    {
        const bool branch_taken_0x2554d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2554d8) {
            ctx->pc = 0x255510u;
            goto label_255510;
        }
    }
    ctx->pc = 0x2554E0u;
label_2554e0:
    // 0x2554e0: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x2554e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
label_2554e4:
    // 0x2554e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2554e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2554e8:
    // 0x2554e8: 0x34a5ba00  ori         $a1, $a1, 0xBA00
    ctx->pc = 0x2554e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47616);
label_2554ec:
    // 0x2554ec: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x2554ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
label_2554f0:
    // 0x2554f0: 0xc08997c  jal         func_2265F0
label_2554f4:
    if (ctx->pc == 0x2554F4u) {
        ctx->pc = 0x2554F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554F0u;
        // 0x2554f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2554F8u;
        goto label_2554f8;
    }
    ctx->pc = 0x2554F0u;
    SET_GPR_U32(ctx, 31, 0x2554F8u);
    ctx->pc = 0x2554F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554F0u;
    // 0x2554f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2554F0u, 0x2554F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554F8u;
label_2554f8:
    // 0x2554f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2554fc:
    if (ctx->pc == 0x2554FCu) {
        ctx->pc = 0x255500u;
        goto label_255500;
    }
    ctx->pc = 0x2554F8u;
    {
        const bool branch_taken_0x2554f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2554f8) {
            ctx->pc = 0x255510u;
            goto label_255510;
        }
    }
    ctx->pc = 0x255500u;
label_255500:
    // 0x255500: 0xc09f048  jal         func_27C120
label_255504:
    if (ctx->pc == 0x255504u) {
        ctx->pc = 0x255504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255500u;
        // 0x255504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255508u;
        goto label_255508;
    }
    ctx->pc = 0x255500u;
    SET_GPR_U32(ctx, 31, 0x255508u);
    ctx->pc = 0x255504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255500u;
    // 0x255504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C120u, 0x255500u, 0x255508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255508u;
label_255508:
    // 0x255508: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_25550c:
    if (ctx->pc == 0x25550Cu) {
        ctx->pc = 0x25550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255508u;
        // 0x25550c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255510u;
        goto label_255510;
    }
    ctx->pc = 0x255508u;
    {
        const bool branch_taken_0x255508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255508u;
        // 0x25550c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255508) {
            ctx->pc = 0x25551Cu;
            goto label_25551c;
        }
    }
    ctx->pc = 0x255510u;
label_255510:
    // 0x255510: 0xc09655e  jal         func_259578
label_255514:
    if (ctx->pc == 0x255514u) {
        ctx->pc = 0x255514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255510u;
        // 0x255514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255518u;
        goto label_255518;
    }
    ctx->pc = 0x255510u;
    SET_GPR_U32(ctx, 31, 0x255518u);
    ctx->pc = 0x255514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255510u;
    // 0x255514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259578u, 0x255510u, 0x255518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255518u;
label_255518:
    // 0x255518: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x255518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25551c:
    // 0x25551c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25551cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_255520:
    // 0x255520: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x255520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_255524:
    // 0x255524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_255528:
    // 0x255528: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x255528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25552c:
    // 0x25552c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x25552cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255530:
    // 0x255530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255534:
    // 0x255534: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x255534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_255538:
    // 0x255538: 0x3e00008  jr          $ra
label_25553c:
    if (ctx->pc == 0x25553Cu) {
        ctx->pc = 0x25553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255538u;
        // 0x25553c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255540u;
        goto label_fallthrough_0x255538;
    }
    ctx->pc = 0x255538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255538u;
        // 0x25553c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255538:
    ctx->pc = 0x255540u;
}
