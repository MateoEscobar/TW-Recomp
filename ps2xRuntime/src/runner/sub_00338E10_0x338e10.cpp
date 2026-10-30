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

// Function: sub_00338E10
// Address: 0x338e10 - 0x3393c0
void sub_00338E10_0x338e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338E10_0x338e10");
#endif

    switch (ctx->pc) {
        case 0x338e10u: goto label_338e10;
        case 0x338e14u: goto label_338e14;
        case 0x338e18u: goto label_338e18;
        case 0x338e1cu: goto label_338e1c;
        case 0x338e20u: goto label_338e20;
        case 0x338e24u: goto label_338e24;
        case 0x338e28u: goto label_338e28;
        case 0x338e2cu: goto label_338e2c;
        case 0x338e30u: goto label_338e30;
        case 0x338e34u: goto label_338e34;
        case 0x338e38u: goto label_338e38;
        case 0x338e3cu: goto label_338e3c;
        case 0x338e40u: goto label_338e40;
        case 0x338e44u: goto label_338e44;
        case 0x338e48u: goto label_338e48;
        case 0x338e4cu: goto label_338e4c;
        case 0x338e50u: goto label_338e50;
        case 0x338e54u: goto label_338e54;
        case 0x338e58u: goto label_338e58;
        case 0x338e5cu: goto label_338e5c;
        case 0x338e60u: goto label_338e60;
        case 0x338e64u: goto label_338e64;
        case 0x338e68u: goto label_338e68;
        case 0x338e6cu: goto label_338e6c;
        case 0x338e70u: goto label_338e70;
        case 0x338e74u: goto label_338e74;
        case 0x338e78u: goto label_338e78;
        case 0x338e7cu: goto label_338e7c;
        case 0x338e80u: goto label_338e80;
        case 0x338e84u: goto label_338e84;
        case 0x338e88u: goto label_338e88;
        case 0x338e8cu: goto label_338e8c;
        case 0x338e90u: goto label_338e90;
        case 0x338e94u: goto label_338e94;
        case 0x338e98u: goto label_338e98;
        case 0x338e9cu: goto label_338e9c;
        case 0x338ea0u: goto label_338ea0;
        case 0x338ea4u: goto label_338ea4;
        case 0x338ea8u: goto label_338ea8;
        case 0x338eacu: goto label_338eac;
        case 0x338eb0u: goto label_338eb0;
        case 0x338eb4u: goto label_338eb4;
        case 0x338eb8u: goto label_338eb8;
        case 0x338ebcu: goto label_338ebc;
        case 0x338ec0u: goto label_338ec0;
        case 0x338ec4u: goto label_338ec4;
        case 0x338ec8u: goto label_338ec8;
        case 0x338eccu: goto label_338ecc;
        case 0x338ed0u: goto label_338ed0;
        case 0x338ed4u: goto label_338ed4;
        case 0x338ed8u: goto label_338ed8;
        case 0x338edcu: goto label_338edc;
        case 0x338ee0u: goto label_338ee0;
        case 0x338ee4u: goto label_338ee4;
        case 0x338ee8u: goto label_338ee8;
        case 0x338eecu: goto label_338eec;
        case 0x338ef0u: goto label_338ef0;
        case 0x338ef4u: goto label_338ef4;
        case 0x338ef8u: goto label_338ef8;
        case 0x338efcu: goto label_338efc;
        case 0x338f00u: goto label_338f00;
        case 0x338f04u: goto label_338f04;
        case 0x338f08u: goto label_338f08;
        case 0x338f0cu: goto label_338f0c;
        case 0x338f10u: goto label_338f10;
        case 0x338f14u: goto label_338f14;
        case 0x338f18u: goto label_338f18;
        case 0x338f1cu: goto label_338f1c;
        case 0x338f20u: goto label_338f20;
        case 0x338f24u: goto label_338f24;
        case 0x338f28u: goto label_338f28;
        case 0x338f2cu: goto label_338f2c;
        case 0x338f30u: goto label_338f30;
        case 0x338f34u: goto label_338f34;
        case 0x338f38u: goto label_338f38;
        case 0x338f3cu: goto label_338f3c;
        case 0x338f40u: goto label_338f40;
        case 0x338f44u: goto label_338f44;
        case 0x338f48u: goto label_338f48;
        case 0x338f4cu: goto label_338f4c;
        case 0x338f50u: goto label_338f50;
        case 0x338f54u: goto label_338f54;
        case 0x338f58u: goto label_338f58;
        case 0x338f5cu: goto label_338f5c;
        case 0x338f60u: goto label_338f60;
        case 0x338f64u: goto label_338f64;
        case 0x338f68u: goto label_338f68;
        case 0x338f6cu: goto label_338f6c;
        case 0x338f70u: goto label_338f70;
        case 0x338f74u: goto label_338f74;
        case 0x338f78u: goto label_338f78;
        case 0x338f7cu: goto label_338f7c;
        case 0x338f80u: goto label_338f80;
        case 0x338f84u: goto label_338f84;
        case 0x338f88u: goto label_338f88;
        case 0x338f8cu: goto label_338f8c;
        case 0x338f90u: goto label_338f90;
        case 0x338f94u: goto label_338f94;
        case 0x338f98u: goto label_338f98;
        case 0x338f9cu: goto label_338f9c;
        case 0x338fa0u: goto label_338fa0;
        case 0x338fa4u: goto label_338fa4;
        case 0x338fa8u: goto label_338fa8;
        case 0x338facu: goto label_338fac;
        case 0x338fb0u: goto label_338fb0;
        case 0x338fb4u: goto label_338fb4;
        case 0x338fb8u: goto label_338fb8;
        case 0x338fbcu: goto label_338fbc;
        case 0x338fc0u: goto label_338fc0;
        case 0x338fc4u: goto label_338fc4;
        case 0x338fc8u: goto label_338fc8;
        case 0x338fccu: goto label_338fcc;
        case 0x338fd0u: goto label_338fd0;
        case 0x338fd4u: goto label_338fd4;
        case 0x338fd8u: goto label_338fd8;
        case 0x338fdcu: goto label_338fdc;
        case 0x338fe0u: goto label_338fe0;
        case 0x338fe4u: goto label_338fe4;
        case 0x338fe8u: goto label_338fe8;
        case 0x338fecu: goto label_338fec;
        case 0x338ff0u: goto label_338ff0;
        case 0x338ff4u: goto label_338ff4;
        case 0x338ff8u: goto label_338ff8;
        case 0x338ffcu: goto label_338ffc;
        case 0x339000u: goto label_339000;
        case 0x339004u: goto label_339004;
        case 0x339008u: goto label_339008;
        case 0x33900cu: goto label_33900c;
        case 0x339010u: goto label_339010;
        case 0x339014u: goto label_339014;
        case 0x339018u: goto label_339018;
        case 0x33901cu: goto label_33901c;
        case 0x339020u: goto label_339020;
        case 0x339024u: goto label_339024;
        case 0x339028u: goto label_339028;
        case 0x33902cu: goto label_33902c;
        case 0x339030u: goto label_339030;
        case 0x339034u: goto label_339034;
        case 0x339038u: goto label_339038;
        case 0x33903cu: goto label_33903c;
        case 0x339040u: goto label_339040;
        case 0x339044u: goto label_339044;
        case 0x339048u: goto label_339048;
        case 0x33904cu: goto label_33904c;
        case 0x339050u: goto label_339050;
        case 0x339054u: goto label_339054;
        case 0x339058u: goto label_339058;
        case 0x33905cu: goto label_33905c;
        case 0x339060u: goto label_339060;
        case 0x339064u: goto label_339064;
        case 0x339068u: goto label_339068;
        case 0x33906cu: goto label_33906c;
        case 0x339070u: goto label_339070;
        case 0x339074u: goto label_339074;
        case 0x339078u: goto label_339078;
        case 0x33907cu: goto label_33907c;
        case 0x339080u: goto label_339080;
        case 0x339084u: goto label_339084;
        case 0x339088u: goto label_339088;
        case 0x33908cu: goto label_33908c;
        case 0x339090u: goto label_339090;
        case 0x339094u: goto label_339094;
        case 0x339098u: goto label_339098;
        case 0x33909cu: goto label_33909c;
        case 0x3390a0u: goto label_3390a0;
        case 0x3390a4u: goto label_3390a4;
        case 0x3390a8u: goto label_3390a8;
        case 0x3390acu: goto label_3390ac;
        case 0x3390b0u: goto label_3390b0;
        case 0x3390b4u: goto label_3390b4;
        case 0x3390b8u: goto label_3390b8;
        case 0x3390bcu: goto label_3390bc;
        case 0x3390c0u: goto label_3390c0;
        case 0x3390c4u: goto label_3390c4;
        case 0x3390c8u: goto label_3390c8;
        case 0x3390ccu: goto label_3390cc;
        case 0x3390d0u: goto label_3390d0;
        case 0x3390d4u: goto label_3390d4;
        case 0x3390d8u: goto label_3390d8;
        case 0x3390dcu: goto label_3390dc;
        case 0x3390e0u: goto label_3390e0;
        case 0x3390e4u: goto label_3390e4;
        case 0x3390e8u: goto label_3390e8;
        case 0x3390ecu: goto label_3390ec;
        case 0x3390f0u: goto label_3390f0;
        case 0x3390f4u: goto label_3390f4;
        case 0x3390f8u: goto label_3390f8;
        case 0x3390fcu: goto label_3390fc;
        case 0x339100u: goto label_339100;
        case 0x339104u: goto label_339104;
        case 0x339108u: goto label_339108;
        case 0x33910cu: goto label_33910c;
        case 0x339110u: goto label_339110;
        case 0x339114u: goto label_339114;
        case 0x339118u: goto label_339118;
        case 0x33911cu: goto label_33911c;
        case 0x339120u: goto label_339120;
        case 0x339124u: goto label_339124;
        case 0x339128u: goto label_339128;
        case 0x33912cu: goto label_33912c;
        case 0x339130u: goto label_339130;
        case 0x339134u: goto label_339134;
        case 0x339138u: goto label_339138;
        case 0x33913cu: goto label_33913c;
        case 0x339140u: goto label_339140;
        case 0x339144u: goto label_339144;
        case 0x339148u: goto label_339148;
        case 0x33914cu: goto label_33914c;
        case 0x339150u: goto label_339150;
        case 0x339154u: goto label_339154;
        case 0x339158u: goto label_339158;
        case 0x33915cu: goto label_33915c;
        case 0x339160u: goto label_339160;
        case 0x339164u: goto label_339164;
        case 0x339168u: goto label_339168;
        case 0x33916cu: goto label_33916c;
        case 0x339170u: goto label_339170;
        case 0x339174u: goto label_339174;
        case 0x339178u: goto label_339178;
        case 0x33917cu: goto label_33917c;
        case 0x339180u: goto label_339180;
        case 0x339184u: goto label_339184;
        case 0x339188u: goto label_339188;
        case 0x33918cu: goto label_33918c;
        case 0x339190u: goto label_339190;
        case 0x339194u: goto label_339194;
        case 0x339198u: goto label_339198;
        case 0x33919cu: goto label_33919c;
        case 0x3391a0u: goto label_3391a0;
        case 0x3391a4u: goto label_3391a4;
        case 0x3391a8u: goto label_3391a8;
        case 0x3391acu: goto label_3391ac;
        case 0x3391b0u: goto label_3391b0;
        case 0x3391b4u: goto label_3391b4;
        case 0x3391b8u: goto label_3391b8;
        case 0x3391bcu: goto label_3391bc;
        case 0x3391c0u: goto label_3391c0;
        case 0x3391c4u: goto label_3391c4;
        case 0x3391c8u: goto label_3391c8;
        case 0x3391ccu: goto label_3391cc;
        case 0x3391d0u: goto label_3391d0;
        case 0x3391d4u: goto label_3391d4;
        case 0x3391d8u: goto label_3391d8;
        case 0x3391dcu: goto label_3391dc;
        case 0x3391e0u: goto label_3391e0;
        case 0x3391e4u: goto label_3391e4;
        case 0x3391e8u: goto label_3391e8;
        case 0x3391ecu: goto label_3391ec;
        case 0x3391f0u: goto label_3391f0;
        case 0x3391f4u: goto label_3391f4;
        case 0x3391f8u: goto label_3391f8;
        case 0x3391fcu: goto label_3391fc;
        case 0x339200u: goto label_339200;
        case 0x339204u: goto label_339204;
        case 0x339208u: goto label_339208;
        case 0x33920cu: goto label_33920c;
        case 0x339210u: goto label_339210;
        case 0x339214u: goto label_339214;
        case 0x339218u: goto label_339218;
        case 0x33921cu: goto label_33921c;
        case 0x339220u: goto label_339220;
        case 0x339224u: goto label_339224;
        case 0x339228u: goto label_339228;
        case 0x33922cu: goto label_33922c;
        case 0x339230u: goto label_339230;
        case 0x339234u: goto label_339234;
        case 0x339238u: goto label_339238;
        case 0x33923cu: goto label_33923c;
        case 0x339240u: goto label_339240;
        case 0x339244u: goto label_339244;
        case 0x339248u: goto label_339248;
        case 0x33924cu: goto label_33924c;
        case 0x339250u: goto label_339250;
        case 0x339254u: goto label_339254;
        case 0x339258u: goto label_339258;
        case 0x33925cu: goto label_33925c;
        case 0x339260u: goto label_339260;
        case 0x339264u: goto label_339264;
        case 0x339268u: goto label_339268;
        case 0x33926cu: goto label_33926c;
        case 0x339270u: goto label_339270;
        case 0x339274u: goto label_339274;
        case 0x339278u: goto label_339278;
        case 0x33927cu: goto label_33927c;
        case 0x339280u: goto label_339280;
        case 0x339284u: goto label_339284;
        case 0x339288u: goto label_339288;
        case 0x33928cu: goto label_33928c;
        case 0x339290u: goto label_339290;
        case 0x339294u: goto label_339294;
        case 0x339298u: goto label_339298;
        case 0x33929cu: goto label_33929c;
        case 0x3392a0u: goto label_3392a0;
        case 0x3392a4u: goto label_3392a4;
        case 0x3392a8u: goto label_3392a8;
        case 0x3392acu: goto label_3392ac;
        case 0x3392b0u: goto label_3392b0;
        case 0x3392b4u: goto label_3392b4;
        case 0x3392b8u: goto label_3392b8;
        case 0x3392bcu: goto label_3392bc;
        case 0x3392c0u: goto label_3392c0;
        case 0x3392c4u: goto label_3392c4;
        case 0x3392c8u: goto label_3392c8;
        case 0x3392ccu: goto label_3392cc;
        case 0x3392d0u: goto label_3392d0;
        case 0x3392d4u: goto label_3392d4;
        case 0x3392d8u: goto label_3392d8;
        case 0x3392dcu: goto label_3392dc;
        case 0x3392e0u: goto label_3392e0;
        case 0x3392e4u: goto label_3392e4;
        case 0x3392e8u: goto label_3392e8;
        case 0x3392ecu: goto label_3392ec;
        case 0x3392f0u: goto label_3392f0;
        case 0x3392f4u: goto label_3392f4;
        case 0x3392f8u: goto label_3392f8;
        case 0x3392fcu: goto label_3392fc;
        case 0x339300u: goto label_339300;
        case 0x339304u: goto label_339304;
        case 0x339308u: goto label_339308;
        case 0x33930cu: goto label_33930c;
        case 0x339310u: goto label_339310;
        case 0x339314u: goto label_339314;
        case 0x339318u: goto label_339318;
        case 0x33931cu: goto label_33931c;
        case 0x339320u: goto label_339320;
        case 0x339324u: goto label_339324;
        case 0x339328u: goto label_339328;
        case 0x33932cu: goto label_33932c;
        case 0x339330u: goto label_339330;
        case 0x339334u: goto label_339334;
        case 0x339338u: goto label_339338;
        case 0x33933cu: goto label_33933c;
        case 0x339340u: goto label_339340;
        case 0x339344u: goto label_339344;
        case 0x339348u: goto label_339348;
        case 0x33934cu: goto label_33934c;
        case 0x339350u: goto label_339350;
        case 0x339354u: goto label_339354;
        case 0x339358u: goto label_339358;
        case 0x33935cu: goto label_33935c;
        case 0x339360u: goto label_339360;
        case 0x339364u: goto label_339364;
        case 0x339368u: goto label_339368;
        case 0x33936cu: goto label_33936c;
        case 0x339370u: goto label_339370;
        case 0x339374u: goto label_339374;
        case 0x339378u: goto label_339378;
        case 0x33937cu: goto label_33937c;
        case 0x339380u: goto label_339380;
        case 0x339384u: goto label_339384;
        case 0x339388u: goto label_339388;
        case 0x33938cu: goto label_33938c;
        case 0x339390u: goto label_339390;
        case 0x339394u: goto label_339394;
        case 0x339398u: goto label_339398;
        case 0x33939cu: goto label_33939c;
        case 0x3393a0u: goto label_3393a0;
        case 0x3393a4u: goto label_3393a4;
        case 0x3393a8u: goto label_3393a8;
        case 0x3393acu: goto label_3393ac;
        case 0x3393b0u: goto label_3393b0;
        case 0x3393b4u: goto label_3393b4;
        case 0x3393b8u: goto label_3393b8;
        case 0x3393bcu: goto label_3393bc;
        default: break;
    }

    ctx->pc = 0x338e10u;

label_338e10:
    // 0x338e10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x338e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_338e14:
    // 0x338e14: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x338e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_338e18:
    // 0x338e18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x338e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_338e1c:
    // 0x338e1c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x338e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_338e20:
    // 0x338e20: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x338e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_338e24:
    // 0x338e24: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x338e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_338e28:
    // 0x338e28: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x338e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_338e2c:
    // 0x338e2c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x338e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_338e30:
    // 0x338e30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x338e30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338e34:
    // 0x338e34: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x338e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_338e38:
    // 0x338e38: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x338e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_338e3c:
    // 0x338e3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x338e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_338e40:
    // 0x338e40: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x338e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_338e44:
    // 0x338e44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x338e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_338e48:
    // 0x338e48: 0x8e06b788  lw          $a2, -0x4878($s0)
    ctx->pc = 0x338e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_338e4c:
    // 0x338e4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x338e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338e50:
    // 0x338e50: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x338e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_338e54:
    // 0x338e54: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x338e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_338e58:
    // 0x338e58: 0x40f809  jalr        $v0
label_338e5c:
    if (ctx->pc == 0x338E5Cu) {
        ctx->pc = 0x338E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E58u;
        // 0x338e5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338E60u;
        goto label_338e60;
    }
    ctx->pc = 0x338E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338E60u);
        ctx->pc = 0x338E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E58u;
        // 0x338e5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E58u, 0x338E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338E60u;
label_338e60:
    // 0x338e60: 0x8e06b788  lw          $a2, -0x4878($s0)
    ctx->pc = 0x338e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_338e64:
    // 0x338e64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338e68:
    // 0x338e68: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x338e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_338e6c:
    // 0x338e6c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x338e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_338e70:
    // 0x338e70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x338e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338e74:
    // 0x338e74: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x338e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_338e78:
    // 0x338e78: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x338e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_338e7c:
    // 0x338e7c: 0x40f809  jalr        $v0
label_338e80:
    if (ctx->pc == 0x338E80u) {
        ctx->pc = 0x338E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E7Cu;
        // 0x338e80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338E84u;
        goto label_338e84;
    }
    ctx->pc = 0x338E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338E84u);
        ctx->pc = 0x338E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E7Cu;
        // 0x338e80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E7Cu, 0x338E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338E84u;
label_338e84:
    // 0x338e84: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x338e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_338e88:
    // 0x338e88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x338e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_338e8c:
    // 0x338e8c: 0x26104370  addiu       $s0, $s0, 0x4370
    ctx->pc = 0x338e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17264));
label_338e90:
    // 0x338e90: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x338e90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_338e94:
    // 0x338e94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x338e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338e98:
    // 0x338e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338e9c:
    // 0x338e9c: 0x24e76d10  addiu       $a3, $a3, 0x6D10
    ctx->pc = 0x338e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27920));
label_338ea0:
    // 0x338ea0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x338ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_338ea4:
    // 0x338ea4: 0xc0ce126  jal         func_338498
label_338ea8:
    if (ctx->pc == 0x338EA8u) {
        ctx->pc = 0x338EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EA4u;
        // 0x338ea8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338EACu;
        goto label_338eac;
    }
    ctx->pc = 0x338EA4u;
    SET_GPR_U32(ctx, 31, 0x338EACu);
    ctx->pc = 0x338EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EA4u;
    // 0x338ea8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338498u, 0x338EA4u, 0x338EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EACu;
label_338eac:
    // 0x338eac: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x338eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_338eb0:
    // 0x338eb0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_338eb4:
    if (ctx->pc == 0x338EB4u) {
        ctx->pc = 0x338EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EB0u;
        // 0x338eb4: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338EB8u;
        goto label_338eb8;
    }
    ctx->pc = 0x338EB0u;
    {
        const bool branch_taken_0x338eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x338EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EB0u;
        // 0x338eb4: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338eb0) {
            ctx->pc = 0x338ECCu;
            goto label_338ecc;
        }
    }
    ctx->pc = 0x338EB8u;
label_338eb8:
    // 0x338eb8: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x338eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_338ebc:
    // 0x338ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338ec0:
    // 0x338ec0: 0x24e76d20  addiu       $a3, $a3, 0x6D20
    ctx->pc = 0x338ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27936));
label_338ec4:
    // 0x338ec4: 0xc0ce126  jal         func_338498
label_338ec8:
    if (ctx->pc == 0x338EC8u) {
        ctx->pc = 0x338EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EC4u;
        // 0x338ec8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338ECCu;
        goto label_338ecc;
    }
    ctx->pc = 0x338EC4u;
    SET_GPR_U32(ctx, 31, 0x338ECCu);
    ctx->pc = 0x338EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EC4u;
    // 0x338ec8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338498u, 0x338EC4u, 0x338ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338ECCu;
label_338ecc:
    // 0x338ecc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x338eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_338ed0:
    // 0x338ed0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x338ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_338ed4:
    // 0x338ed4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x338ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_338ed8:
    // 0x338ed8: 0x24536d30  addiu       $s3, $v0, 0x6D30
    ctx->pc = 0x338ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
label_338edc:
    // 0x338edc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x338edcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338ee0:
    // 0x338ee0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x338ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_338ee4:
    // 0x338ee4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x338ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338ee8:
    // 0x338ee8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x338ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_338eec:
    // 0x338eec: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x338eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_338ef0:
    // 0x338ef0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x338ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_338ef4:
    // 0x338ef4: 0x40f809  jalr        $v0
label_338ef8:
    if (ctx->pc == 0x338EF8u) {
        ctx->pc = 0x338EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EF4u;
        // 0x338ef8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338EFCu;
        goto label_338efc;
    }
    ctx->pc = 0x338EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338EFCu);
        ctx->pc = 0x338EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EF4u;
        // 0x338ef8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338EF4u, 0x338EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338EFCu;
label_338efc:
    // 0x338efc: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x338efcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_338f00:
    // 0x338f00: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x338f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_338f04:
    // 0x338f04: 0x24526cd8  addiu       $s2, $v0, 0x6CD8
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27864));
label_338f08:
    // 0x338f08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x338f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_338f0c:
    // 0x338f0c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x338f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_338f10:
    // 0x338f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338f14:
    // 0x338f14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x338f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_338f18:
    // 0x338f18: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x338f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_338f1c:
    // 0x338f1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x338f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_338f20:
    // 0x338f20: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x338f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_338f24:
    // 0x338f24: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x338f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_338f28:
    // 0x338f28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x338f28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338f2c:
    // 0x338f2c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x338f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_338f30:
    // 0x338f30: 0x40f809  jalr        $v0
label_338f34:
    if (ctx->pc == 0x338F34u) {
        ctx->pc = 0x338F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F30u;
        // 0x338f34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F38u;
        goto label_338f38;
    }
    ctx->pc = 0x338F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338F38u);
        ctx->pc = 0x338F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F30u;
        // 0x338f34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F30u, 0x338F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338F38u;
label_338f38:
    // 0x338f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338f3c:
    // 0x338f3c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_338f40:
    if (ctx->pc == 0x338F40u) {
        ctx->pc = 0x338F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F3Cu;
        // 0x338f40: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F44u;
        goto label_338f44;
    }
    ctx->pc = 0x338F3Cu;
    {
        const bool branch_taken_0x338f3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F3Cu;
        // 0x338f40: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f3c) {
            ctx->pc = 0x338F4Cu;
            goto label_338f4c;
        }
    }
    ctx->pc = 0x338F44u;
label_338f44:
    // 0x338f44: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x338f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_338f48:
    // 0x338f48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x338f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_338f4c:
    // 0x338f4c: 0xc0ce190  jal         func_338640
label_338f50:
    if (ctx->pc == 0x338F50u) {
        ctx->pc = 0x338F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F4Cu;
        // 0x338f50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F54u;
        goto label_338f54;
    }
    ctx->pc = 0x338F4Cu;
    SET_GPR_U32(ctx, 31, 0x338F54u);
    ctx->pc = 0x338F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F4Cu;
    // 0x338f50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338640u, 0x338F4Cu, 0x338F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F54u;
label_338f54:
    // 0x338f54: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x338f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_338f58:
    // 0x338f58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x338f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338f5c:
    // 0x338f5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x338f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_338f60:
    // 0x338f60: 0x24e76d60  addiu       $a3, $a3, 0x6D60
    ctx->pc = 0x338f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28000));
label_338f64:
    // 0x338f64: 0xc0ce268  jal         func_3389A0
label_338f68:
    if (ctx->pc == 0x338F68u) {
        ctx->pc = 0x338F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F64u;
        // 0x338f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F6Cu;
        goto label_338f6c;
    }
    ctx->pc = 0x338F64u;
    SET_GPR_U32(ctx, 31, 0x338F6Cu);
    ctx->pc = 0x338F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F64u;
    // 0x338f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x338F64u, 0x338F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F6Cu;
label_338f6c:
    // 0x338f6c: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x338f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_338f70:
    // 0x338f70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x338f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_338f74:
    // 0x338f74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338f78:
    // 0x338f78: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_338f7c:
    // 0x338f7c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x338f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_338f80:
    // 0x338f80: 0x60f809  jalr        $v1
label_338f84:
    if (ctx->pc == 0x338F84u) {
        ctx->pc = 0x338F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F80u;
        // 0x338f84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F88u;
        goto label_338f88;
    }
    ctx->pc = 0x338F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338F88u);
        ctx->pc = 0x338F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F80u;
        // 0x338f84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F80u, 0x338F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338F88u;
label_338f88:
    // 0x338f88: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x338f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_338f8c:
    // 0x338f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338f90:
    // 0x338f90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338f94:
    // 0x338f94: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x338f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_338f98:
    // 0x338f98: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x338f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_338f9c:
    // 0x338f9c: 0x60f809  jalr        $v1
label_338fa0:
    if (ctx->pc == 0x338FA0u) {
        ctx->pc = 0x338FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F9Cu;
        // 0x338fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338FA4u;
        goto label_338fa4;
    }
    ctx->pc = 0x338F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338FA4u);
        ctx->pc = 0x338FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F9Cu;
        // 0x338fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F9Cu, 0x338FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338FA4u;
label_338fa4:
    // 0x338fa4: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x338fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_338fa8:
    // 0x338fa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338fac:
    // 0x338fac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x338facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_338fb0:
    // 0x338fb0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_338fb4:
    // 0x338fb4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_338fb8:
    // 0x338fb8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x338fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_338fbc:
    // 0x338fbc: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_338fc0:
    // 0x338fc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x338fc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338fc4:
    // 0x338fc4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x338fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_338fc8:
    // 0x338fc8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x338fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338fcc:
    // 0x338fcc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x338fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_338fd0:
    // 0x338fd0: 0x40f809  jalr        $v0
label_338fd4:
    if (ctx->pc == 0x338FD4u) {
        ctx->pc = 0x338FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FD0u;
        // 0x338fd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338FD8u;
        goto label_338fd8;
    }
    ctx->pc = 0x338FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338FD8u);
        ctx->pc = 0x338FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FD0u;
        // 0x338fd4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338FD0u, 0x338FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338FD8u;
label_338fd8:
    // 0x338fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x338fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338fdc:
    // 0x338fdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_338fe0:
    if (ctx->pc == 0x338FE0u) {
        ctx->pc = 0x338FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FDCu;
        // 0x338fe0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338FE4u;
        goto label_338fe4;
    }
    ctx->pc = 0x338FDCu;
    {
        const bool branch_taken_0x338fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338FDCu;
        // 0x338fe0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338fdc) {
            ctx->pc = 0x338FECu;
            goto label_338fec;
        }
    }
    ctx->pc = 0x338FE4u;
label_338fe4:
    // 0x338fe4: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x338fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_338fe8:
    // 0x338fe8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x338fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_338fec:
    // 0x338fec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338ff0:
    // 0x338ff0: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_338ff4:
    // 0x338ff4: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x338ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_338ff8:
    // 0x338ff8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x338ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_338ffc:
    // 0x338ffc: 0xac43b9d0  sw          $v1, -0x4630($v0)
    ctx->pc = 0x338ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949328), GPR_U32(ctx, 3));
label_339000:
    // 0x339000: 0x24e76d78  addiu       $a3, $a3, 0x6D78
    ctx->pc = 0x339000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28024));
label_339004:
    // 0x339004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339008:
    // 0x339008: 0xc0ce268  jal         func_3389A0
label_33900c:
    if (ctx->pc == 0x33900Cu) {
        ctx->pc = 0x33900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339008u;
        // 0x33900c: 0x34c69000  ori         $a2, $a2, 0x9000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339010u;
        goto label_339010;
    }
    ctx->pc = 0x339008u;
    SET_GPR_U32(ctx, 31, 0x339010u);
    ctx->pc = 0x33900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339008u;
    // 0x33900c: 0x34c69000  ori         $a2, $a2, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x339008u, 0x339010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339010u;
label_339010:
    // 0x339010: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x339010u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_339014:
    // 0x339014: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x339014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_339018:
    // 0x339018: 0x26066d88  addiu       $a2, $s0, 0x6D88
    ctx->pc = 0x339018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28040));
label_33901c:
    // 0x33901c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33901cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339020:
    // 0x339020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339024:
    // 0x339024: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x339024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_339028:
    // 0x339028: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x339028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_33902c:
    // 0x33902c: 0x40f809  jalr        $v0
label_339030:
    if (ctx->pc == 0x339030u) {
        ctx->pc = 0x339030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33902Cu;
        // 0x339030: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339034u;
        goto label_339034;
    }
    ctx->pc = 0x33902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339034u);
        ctx->pc = 0x339030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33902Cu;
        // 0x339030: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33902Cu, 0x339034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339034u;
label_339034:
    // 0x339034: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339038:
    // 0x339038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33903c:
    // 0x33903c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33903cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_339040:
    // 0x339040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_339044:
    // 0x339044: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x339044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_339048:
    // 0x339048: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x339048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_33904c:
    // 0x33904c: 0xc0f809  jalr        $a2
label_339050:
    if (ctx->pc == 0x339050u) {
        ctx->pc = 0x339050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33904Cu;
        // 0x339050: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339054u;
        goto label_339054;
    }
    ctx->pc = 0x33904Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x339054u);
        ctx->pc = 0x339050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33904Cu;
        // 0x339050: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33904Cu, 0x339054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339054u;
label_339054:
    // 0x339054: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339058:
    // 0x339058: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33905c:
    // 0x33905c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x33905cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_339060:
    // 0x339060: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x339060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_339064:
    // 0x339064: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x339064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_339068:
    // 0x339068: 0xc0f809  jalr        $a2
label_33906c:
    if (ctx->pc == 0x33906Cu) {
        ctx->pc = 0x33906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339068u;
        // 0x33906c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339070u;
        goto label_339070;
    }
    ctx->pc = 0x339068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x339070u);
        ctx->pc = 0x33906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339068u;
        // 0x33906c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339068u, 0x339070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339070u;
label_339070:
    // 0x339070: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x339070u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339074:
    // 0x339074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x339074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_339078:
    // 0x339078: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x339078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33907c:
    // 0x33907c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33907cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339080:
    // 0x339080: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x339080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_339084:
    // 0x339084: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x339084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339088:
    // 0x339088: 0x24090073  addiu       $t1, $zero, 0x73
    ctx->pc = 0x339088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_33908c:
    // 0x33908c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33908cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339090:
    // 0x339090: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x339090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_339094:
    // 0x339094: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x339094u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339098:
    // 0x339098: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33909c:
    // 0x33909c: 0x40f809  jalr        $v0
label_3390a0:
    if (ctx->pc == 0x3390A0u) {
        ctx->pc = 0x3390A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33909Cu;
        // 0x3390a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390A4u;
        goto label_3390a4;
    }
    ctx->pc = 0x33909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3390A4u);
        ctx->pc = 0x3390A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33909Cu;
        // 0x3390a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33909Cu, 0x3390A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3390A4u;
label_3390a4:
    // 0x3390a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3390a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3390a8:
    // 0x3390a8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_3390ac:
    if (ctx->pc == 0x3390ACu) {
        ctx->pc = 0x3390ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390A8u;
        // 0x3390ac: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390B0u;
        goto label_3390b0;
    }
    ctx->pc = 0x3390A8u;
    {
        const bool branch_taken_0x3390a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3390ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390A8u;
        // 0x3390ac: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390a8) {
            ctx->pc = 0x3390B8u;
            goto label_3390b8;
        }
    }
    ctx->pc = 0x3390B0u;
label_3390b0:
    // 0x3390b0: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x3390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_3390b4:
    // 0x3390b4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3390b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3390b8:
    // 0x3390b8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3390bc:
    // 0x3390bc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_3390c0:
    if (ctx->pc == 0x3390C0u) {
        ctx->pc = 0x3390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390BCu;
        // 0x3390c0: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390C4u;
        goto label_3390c4;
    }
    ctx->pc = 0x3390BCu;
    {
        const bool branch_taken_0x3390bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390BCu;
        // 0x3390c0: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390bc) {
            ctx->pc = 0x3390E0u;
            goto label_3390e0;
        }
    }
    ctx->pc = 0x3390C4u;
label_3390c4:
    // 0x3390c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3390c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3390c8:
    // 0x3390c8: 0x24e76d98  addiu       $a3, $a3, 0x6D98
    ctx->pc = 0x3390c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28056));
label_3390cc:
    // 0x3390cc: 0xc0ce268  jal         func_3389A0
label_3390d0:
    if (ctx->pc == 0x3390D0u) {
        ctx->pc = 0x3390D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390CCu;
        // 0x3390d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390D4u;
        goto label_3390d4;
    }
    ctx->pc = 0x3390CCu;
    SET_GPR_U32(ctx, 31, 0x3390D4u);
    ctx->pc = 0x3390D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390CCu;
    // 0x3390d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x3390CCu, 0x3390D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390D4u;
label_3390d4:
    // 0x3390d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3390d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3390d8:
    // 0x3390d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3390dc:
    if (ctx->pc == 0x3390DCu) {
        ctx->pc = 0x3390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390D8u;
        // 0x3390dc: 0xaec2001c  sw          $v0, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390E0u;
        goto label_3390e0;
    }
    ctx->pc = 0x3390D8u;
    {
        const bool branch_taken_0x3390d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390D8u;
        // 0x3390dc: 0xaec2001c  sw          $v0, 0x1C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390d8) {
            ctx->pc = 0x3390FCu;
            goto label_3390fc;
        }
    }
    ctx->pc = 0x3390E0u;
label_3390e0:
    // 0x3390e0: 0x8e8227e4  lw          $v0, 0x27E4($s4)
    ctx->pc = 0x3390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3390e4:
    // 0x3390e4: 0x24e76d98  addiu       $a3, $a3, 0x6D98
    ctx->pc = 0x3390e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28056));
label_3390e8:
    // 0x3390e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3390e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3390ec:
    // 0x3390ec: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3390ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3390f0:
    // 0x3390f0: 0xc0ce268  jal         func_3389A0
label_3390f4:
    if (ctx->pc == 0x3390F4u) {
        ctx->pc = 0x3390F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390F0u;
        // 0x3390f4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3390F8u;
        goto label_3390f8;
    }
    ctx->pc = 0x3390F0u;
    SET_GPR_U32(ctx, 31, 0x3390F8u);
    ctx->pc = 0x3390F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390F0u;
    // 0x3390f4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x3390F0u, 0x3390F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390F8u;
label_3390f8:
    // 0x3390f8: 0xaec0001c  sw          $zero, 0x1C($s6)
    ctx->pc = 0x3390f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
label_3390fc:
    // 0x3390fc: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3390fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339100:
    // 0x339100: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x339100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_339104:
    // 0x339104: 0x26e86d30  addiu       $t0, $s7, 0x6D30
    ctx->pc = 0x339104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 27952));
label_339108:
    // 0x339108: 0x24a56dd8  addiu       $a1, $a1, 0x6DD8
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28120));
label_33910c:
    // 0x33910c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x33910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_339110:
    // 0x339110: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x339110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339114:
    // 0x339114: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x339114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339118:
    // 0x339118: 0x24090086  addiu       $t1, $zero, 0x86
    ctx->pc = 0x339118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_33911c:
    // 0x33911c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33911cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_339120:
    // 0x339120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x339120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339124:
    // 0x339124: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_339128:
    // 0x339128: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x339128u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33912c:
    // 0x33912c: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x33912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_339130:
    // 0x339130: 0x40f809  jalr        $v0
label_339134:
    if (ctx->pc == 0x339134u) {
        ctx->pc = 0x339134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339130u;
        // 0x339134: 0x3c170057  lui         $s7, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339138u;
        goto label_339138;
    }
    ctx->pc = 0x339130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339138u);
        ctx->pc = 0x339134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339130u;
        // 0x339134: 0x3c170057  lui         $s7, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339130u, 0x339138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339138u;
label_339138:
    // 0x339138: 0x3c1e0057  lui         $fp, 0x57
    ctx->pc = 0x339138u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
label_33913c:
    // 0x33913c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33913cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339140:
    // 0x339140: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_339144:
    if (ctx->pc == 0x339144u) {
        ctx->pc = 0x339144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339140u;
        // 0x339144: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339148u;
        goto label_339148;
    }
    ctx->pc = 0x339140u;
    {
        const bool branch_taken_0x339140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x339144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339140u;
        // 0x339144: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339140) {
            ctx->pc = 0x339218u;
            goto label_339218;
        }
    }
    ctx->pc = 0x339148u;
label_339148:
    // 0x339148: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x339148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_33914c:
    // 0x33914c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x33914cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_339150:
    // 0x339150: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x339150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_339154:
    // 0x339154: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x339154u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_339158:
    // 0x339158: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x339158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_33915c:
    // 0x33915c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x33915cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
label_339160:
    // 0x339160: 0x26106da8  addiu       $s0, $s0, 0x6DA8
    ctx->pc = 0x339160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28072));
label_339164:
    // 0x339164: 0x26316db0  addiu       $s1, $s1, 0x6DB0
    ctx->pc = 0x339164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28080));
label_339168:
    // 0x339168: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x339168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_33916c:
    // 0x33916c: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x33916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_339170:
    // 0x339170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_339174:
    // 0x339174: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x339174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_339178:
    // 0x339178: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x339178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33917c:
    // 0x33917c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33917cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339180:
    // 0x339180: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_339184:
    // 0x339184: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x339184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_339188:
    // 0x339188: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x339188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_33918c:
    // 0x33918c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33918cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339190:
    // 0x339190: 0x40f809  jalr        $v0
label_339194:
    if (ctx->pc == 0x339194u) {
        ctx->pc = 0x339194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339190u;
        // 0x339194: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339198u;
        goto label_339198;
    }
    ctx->pc = 0x339190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339198u);
        ctx->pc = 0x339194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339190u;
        // 0x339194: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339190u, 0x339198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339198u;
label_339198:
    // 0x339198: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x339198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_33919c:
    // 0x33919c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33919cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3391a0:
    // 0x3391a0: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x3391a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3391a4:
    // 0x3391a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3391a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3391a8:
    // 0x3391a8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3391a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3391ac:
    // 0x3391ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3391acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3391b0:
    // 0x3391b0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3391b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3391b4:
    // 0x3391b4: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x3391b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3391b8:
    // 0x3391b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3391b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3391bc:
    // 0x3391bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3391bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3391c0:
    // 0x3391c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3391c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3391c4:
    // 0x3391c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3391c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3391c8:
    // 0x3391c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3391c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3391cc:
    // 0x3391cc: 0x40f809  jalr        $v0
label_3391d0:
    if (ctx->pc == 0x3391D0u) {
        ctx->pc = 0x3391D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3391CCu;
        // 0x3391d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3391D4u;
        goto label_3391d4;
    }
    ctx->pc = 0x3391CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3391D4u);
        ctx->pc = 0x3391D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3391CCu;
        // 0x3391d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3391CCu, 0x3391D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3391D4u;
label_3391d4:
    // 0x3391d4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3391d8:
    // 0x3391d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3391d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3391dc:
    // 0x3391dc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3391e0:
    if (ctx->pc == 0x3391E0u) {
        ctx->pc = 0x3391E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3391DCu;
        // 0x3391e0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3391E4u;
        goto label_3391e4;
    }
    ctx->pc = 0x3391DCu;
    {
        const bool branch_taken_0x3391dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3391E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3391DCu;
        // 0x3391e0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3391dc) {
            ctx->pc = 0x339214u;
            goto label_339214;
        }
    }
    ctx->pc = 0x3391E4u;
label_3391e4:
    // 0x3391e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3391e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3391e8:
    // 0x3391e8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3391e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3391ec:
    // 0x3391ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3391ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3391f0:
    // 0x3391f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3391f4:
    // 0x3391f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3391f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3391f8:
    // 0x3391f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3391f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3391fc:
    // 0x3391fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_339200:
    // 0x339200: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x339200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_339204:
    // 0x339204: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x339204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_339208:
    // 0x339208: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x339208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33920c:
    // 0x33920c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_339210:
    if (ctx->pc == 0x339210u) {
        ctx->pc = 0x339210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33920Cu;
        // 0x339210: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339214u;
        goto label_339214;
    }
    ctx->pc = 0x33920Cu;
    {
        const bool branch_taken_0x33920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33920Cu;
        // 0x339210: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33920c) {
            ctx->pc = 0x3391E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3391e8;
        }
    }
    ctx->pc = 0x339214u;
label_339214:
    // 0x339214: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x339214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339218:
    // 0x339218: 0xaed20014  sw          $s2, 0x14($s6)
    ctx->pc = 0x339218u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 18));
label_33921c:
    // 0x33921c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_339220:
    // 0x339220: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339224:
    // 0x339224: 0x24506d88  addiu       $s0, $v0, 0x6D88
    ctx->pc = 0x339224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28040));
label_339228:
    // 0x339228: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33922c:
    // 0x33922c: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x33922cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
label_339230:
    // 0x339230: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x339230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_339234:
    // 0x339234: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x339234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_339238:
    // 0x339238: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x339238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_33923c:
    // 0x33923c: 0xc0f809  jalr        $a2
label_339240:
    if (ctx->pc == 0x339240u) {
        ctx->pc = 0x339240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33923Cu;
        // 0x339240: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339244u;
        goto label_339244;
    }
    ctx->pc = 0x33923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x339244u);
        ctx->pc = 0x339240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33923Cu;
        // 0x339240: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33923Cu, 0x339244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339244u;
label_339244:
    // 0x339244: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339248:
    // 0x339248: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33924c:
    // 0x33924c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x33924cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_339250:
    // 0x339250: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x339250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_339254:
    // 0x339254: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x339254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_339258:
    // 0x339258: 0xc0f809  jalr        $a2
label_33925c:
    if (ctx->pc == 0x33925Cu) {
        ctx->pc = 0x33925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339258u;
        // 0x33925c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339260u;
        goto label_339260;
    }
    ctx->pc = 0x339258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x339260u);
        ctx->pc = 0x33925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339258u;
        // 0x33925c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339258u, 0x339260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339260u;
label_339260:
    // 0x339260: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339264:
    // 0x339264: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x339264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_339268:
    // 0x339268: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x339268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33926c:
    // 0x33926c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x33926cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_339270:
    // 0x339270: 0x846700e0  lh          $a3, 0xE0($v1)
    ctx->pc = 0x339270u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_339274:
    // 0x339274: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_339278:
    // 0x339278: 0x40f809  jalr        $v0
label_33927c:
    if (ctx->pc == 0x33927Cu) {
        ctx->pc = 0x33927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339278u;
        // 0x33927c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339280u;
        goto label_339280;
    }
    ctx->pc = 0x339278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339280u);
        ctx->pc = 0x33927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339278u;
        // 0x33927c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339278u, 0x339280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339280u;
label_339280:
    // 0x339280: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x339280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339284:
    // 0x339284: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x339284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_339288:
    // 0x339288: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33928c:
    // 0x33928c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x33928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_339290:
    // 0x339290: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_339294:
    // 0x339294: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x339294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_339298:
    // 0x339298: 0xc0f809  jalr        $a2
label_33929c:
    if (ctx->pc == 0x33929Cu) {
        ctx->pc = 0x33929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339298u;
        // 0x33929c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392A0u;
        goto label_3392a0;
    }
    ctx->pc = 0x339298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3392A0u);
        ctx->pc = 0x33929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339298u;
        // 0x33929c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339298u, 0x3392A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3392A0u;
label_3392a0:
    // 0x3392a0: 0x8e8427e4  lw          $a0, 0x27E4($s4)
    ctx->pc = 0x3392a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3392a4:
    // 0x3392a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3392a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3392a8:
    // 0x3392a8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3392a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3392ac:
    // 0x3392ac: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x3392acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3392b0:
    // 0x3392b0: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x3392b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3392b4:
    // 0x3392b4: 0xc0f809  jalr        $a2
label_3392b8:
    if (ctx->pc == 0x3392B8u) {
        ctx->pc = 0x3392B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392B4u;
        // 0x3392b8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392BCu;
        goto label_3392bc;
    }
    ctx->pc = 0x3392B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3392BCu);
        ctx->pc = 0x3392B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392B4u;
        // 0x3392b8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392B4u, 0x3392BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3392BCu;
label_3392bc:
    // 0x3392bc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3392bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3392c0:
    // 0x3392c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3392c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3392c4:
    // 0x3392c4: 0x8e8827e4  lw          $t0, 0x27E4($s4)
    ctx->pc = 0x3392c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3392c8:
    // 0x3392c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3392c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3392cc:
    // 0x3392cc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3392ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3392d0:
    // 0x3392d0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3392d4:
    // 0x3392d4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3392d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3392d8:
    // 0x3392d8: 0x40f809  jalr        $v0
label_3392dc:
    if (ctx->pc == 0x3392DCu) {
        ctx->pc = 0x3392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392D8u;
        // 0x3392dc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3392E0u;
        goto label_3392e0;
    }
    ctx->pc = 0x3392D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3392E0u);
        ctx->pc = 0x3392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392D8u;
        // 0x3392dc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3392D8u, 0x3392E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3392E0u;
label_3392e0:
    // 0x3392e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3392e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3392e4:
    // 0x3392e4: 0x26e56df8  addiu       $a1, $s7, 0x6DF8
    ctx->pc = 0x3392e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 28152));
label_3392e8:
    // 0x3392e8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3392ec:
    // 0x3392ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3392ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3392f0:
    // 0x3392f0: 0x846200c8  lh          $v0, 0xC8($v1)
    ctx->pc = 0x3392f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3392f4:
    // 0x3392f4: 0x246800c8  addiu       $t0, $v1, 0xC8
    ctx->pc = 0x3392f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_3392f8:
    // 0x3392f8: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x3392f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_3392fc:
    // 0x3392fc: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_339300:
    if (ctx->pc == 0x339300u) {
        ctx->pc = 0x339300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392FCu;
        // 0x339300: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339304u;
        goto label_339304;
    }
    ctx->pc = 0x3392FCu;
    {
        const bool branch_taken_0x3392fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392FCu;
        // 0x339300: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392fc) {
            ctx->pc = 0x339308u;
            goto label_339308;
        }
    }
    ctx->pc = 0x339304u;
label_339304:
    // 0x339304: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x339304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_339308:
    // 0x339308: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x339308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33930c:
    // 0x33930c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x33930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_339310:
    // 0x339310: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x339310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_339314:
    // 0x339314: 0x40f809  jalr        $v0
label_339318:
    if (ctx->pc == 0x339318u) {
        ctx->pc = 0x339318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339314u;
        // 0x339318: 0x27d06e08  addiu       $s0, $fp, 0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 28168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33931Cu;
        goto label_33931c;
    }
    ctx->pc = 0x339314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33931Cu);
        ctx->pc = 0x339318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339314u;
        // 0x339318: 0x27d06e08  addiu       $s0, $fp, 0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 28168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339314u, 0x33931Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33931Cu;
label_33931c:
    // 0x33931c: 0x8e8727e4  lw          $a3, 0x27E4($s4)
    ctx->pc = 0x33931cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339320:
    // 0x339320: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x339320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_339324:
    // 0x339324: 0x8c65b9d0  lw          $a1, -0x4630($v1)
    ctx->pc = 0x339324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949328)));
label_339328:
    // 0x339328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x339328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33932c:
    // 0x33932c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_339330:
    // 0x339330: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x339330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_339334:
    // 0x339334: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x339334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_339338:
    // 0x339338: 0x40f809  jalr        $v0
label_33933c:
    if (ctx->pc == 0x33933Cu) {
        ctx->pc = 0x33933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339338u;
        // 0x33933c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339340u;
        goto label_339340;
    }
    ctx->pc = 0x339338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339340u);
        ctx->pc = 0x33933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339338u;
        // 0x33933c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339338u, 0x339340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339340u;
label_339340:
    // 0x339340: 0x8e8927e4  lw          $t1, 0x27E4($s4)
    ctx->pc = 0x339340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_339344:
    // 0x339344: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x339344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_339348:
    // 0x339348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33934c:
    // 0x33934c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33934cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339350:
    // 0x339350: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_339354:
    // 0x339354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339358:
    // 0x339358: 0xac62b9d0  sw          $v0, -0x4630($v1)
    ctx->pc = 0x339358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949328), GPR_U32(ctx, 2));
label_33935c:
    // 0x33935c: 0x850400c8  lh          $a0, 0xC8($t0)
    ctx->pc = 0x33935cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 200)));
label_339360:
    // 0x339360: 0x8d0300cc  lw          $v1, 0xCC($t0)
    ctx->pc = 0x339360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 204)));
label_339364:
    // 0x339364: 0x60f809  jalr        $v1
label_339368:
    if (ctx->pc == 0x339368u) {
        ctx->pc = 0x339368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339364u;
        // 0x339368: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33936Cu;
        goto label_33936c;
    }
    ctx->pc = 0x339364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33936Cu);
        ctx->pc = 0x339368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339364u;
        // 0x339368: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339364u, 0x33936Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33936Cu;
label_33936c:
    // 0x33936c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x33936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_339370:
    // 0x339370: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x339370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_339374:
    // 0x339374: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x339374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_339378:
    // 0x339378: 0x60f809  jalr        $v1
label_33937c:
    if (ctx->pc == 0x33937Cu) {
        ctx->pc = 0x33937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339378u;
        // 0x33937c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339380u;
        goto label_339380;
    }
    ctx->pc = 0x339378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x339380u);
        ctx->pc = 0x33937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339378u;
        // 0x33937c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339378u, 0x339380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339380u;
label_339380:
    // 0x339380: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x339380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_339384:
    // 0x339384: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x339384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_339388:
    // 0x339388: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x339388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
label_33938c:
    // 0x33938c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x33938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_339390:
    // 0x339390: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x339390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_339394:
    // 0x339394: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x339394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_339398:
    // 0x339398: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x339398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33939c:
    // 0x33939c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x33939cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3393a0:
    // 0x3393a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3393a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3393a4:
    // 0x3393a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3393a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3393a8:
    // 0x3393a8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3393a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3393ac:
    // 0x3393ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3393acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3393b0:
    // 0x3393b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3393b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3393b4:
    // 0x3393b4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3393b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3393b8:
    // 0x3393b8: 0x3e00008  jr          $ra
label_3393bc:
    if (ctx->pc == 0x3393BCu) {
        ctx->pc = 0x3393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393B8u;
        // 0x3393bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393C0u;
        goto label_fallthrough_0x3393b8;
    }
    ctx->pc = 0x3393B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393B8u;
        // 0x3393bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3393B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3393b8:
    ctx->pc = 0x3393C0u;
}
