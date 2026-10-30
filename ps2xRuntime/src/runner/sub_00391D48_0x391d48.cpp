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

// Function: sub_00391D48
// Address: 0x391d48 - 0x3923b8
void sub_00391D48_0x391d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391D48_0x391d48");
#endif

    switch (ctx->pc) {
        case 0x391d48u: goto label_391d48;
        case 0x391d4cu: goto label_391d4c;
        case 0x391d50u: goto label_391d50;
        case 0x391d54u: goto label_391d54;
        case 0x391d58u: goto label_391d58;
        case 0x391d5cu: goto label_391d5c;
        case 0x391d60u: goto label_391d60;
        case 0x391d64u: goto label_391d64;
        case 0x391d68u: goto label_391d68;
        case 0x391d6cu: goto label_391d6c;
        case 0x391d70u: goto label_391d70;
        case 0x391d74u: goto label_391d74;
        case 0x391d78u: goto label_391d78;
        case 0x391d7cu: goto label_391d7c;
        case 0x391d80u: goto label_391d80;
        case 0x391d84u: goto label_391d84;
        case 0x391d88u: goto label_391d88;
        case 0x391d8cu: goto label_391d8c;
        case 0x391d90u: goto label_391d90;
        case 0x391d94u: goto label_391d94;
        case 0x391d98u: goto label_391d98;
        case 0x391d9cu: goto label_391d9c;
        case 0x391da0u: goto label_391da0;
        case 0x391da4u: goto label_391da4;
        case 0x391da8u: goto label_391da8;
        case 0x391dacu: goto label_391dac;
        case 0x391db0u: goto label_391db0;
        case 0x391db4u: goto label_391db4;
        case 0x391db8u: goto label_391db8;
        case 0x391dbcu: goto label_391dbc;
        case 0x391dc0u: goto label_391dc0;
        case 0x391dc4u: goto label_391dc4;
        case 0x391dc8u: goto label_391dc8;
        case 0x391dccu: goto label_391dcc;
        case 0x391dd0u: goto label_391dd0;
        case 0x391dd4u: goto label_391dd4;
        case 0x391dd8u: goto label_391dd8;
        case 0x391ddcu: goto label_391ddc;
        case 0x391de0u: goto label_391de0;
        case 0x391de4u: goto label_391de4;
        case 0x391de8u: goto label_391de8;
        case 0x391decu: goto label_391dec;
        case 0x391df0u: goto label_391df0;
        case 0x391df4u: goto label_391df4;
        case 0x391df8u: goto label_391df8;
        case 0x391dfcu: goto label_391dfc;
        case 0x391e00u: goto label_391e00;
        case 0x391e04u: goto label_391e04;
        case 0x391e08u: goto label_391e08;
        case 0x391e0cu: goto label_391e0c;
        case 0x391e10u: goto label_391e10;
        case 0x391e14u: goto label_391e14;
        case 0x391e18u: goto label_391e18;
        case 0x391e1cu: goto label_391e1c;
        case 0x391e20u: goto label_391e20;
        case 0x391e24u: goto label_391e24;
        case 0x391e28u: goto label_391e28;
        case 0x391e2cu: goto label_391e2c;
        case 0x391e30u: goto label_391e30;
        case 0x391e34u: goto label_391e34;
        case 0x391e38u: goto label_391e38;
        case 0x391e3cu: goto label_391e3c;
        case 0x391e40u: goto label_391e40;
        case 0x391e44u: goto label_391e44;
        case 0x391e48u: goto label_391e48;
        case 0x391e4cu: goto label_391e4c;
        case 0x391e50u: goto label_391e50;
        case 0x391e54u: goto label_391e54;
        case 0x391e58u: goto label_391e58;
        case 0x391e5cu: goto label_391e5c;
        case 0x391e60u: goto label_391e60;
        case 0x391e64u: goto label_391e64;
        case 0x391e68u: goto label_391e68;
        case 0x391e6cu: goto label_391e6c;
        case 0x391e70u: goto label_391e70;
        case 0x391e74u: goto label_391e74;
        case 0x391e78u: goto label_391e78;
        case 0x391e7cu: goto label_391e7c;
        case 0x391e80u: goto label_391e80;
        case 0x391e84u: goto label_391e84;
        case 0x391e88u: goto label_391e88;
        case 0x391e8cu: goto label_391e8c;
        case 0x391e90u: goto label_391e90;
        case 0x391e94u: goto label_391e94;
        case 0x391e98u: goto label_391e98;
        case 0x391e9cu: goto label_391e9c;
        case 0x391ea0u: goto label_391ea0;
        case 0x391ea4u: goto label_391ea4;
        case 0x391ea8u: goto label_391ea8;
        case 0x391eacu: goto label_391eac;
        case 0x391eb0u: goto label_391eb0;
        case 0x391eb4u: goto label_391eb4;
        case 0x391eb8u: goto label_391eb8;
        case 0x391ebcu: goto label_391ebc;
        case 0x391ec0u: goto label_391ec0;
        case 0x391ec4u: goto label_391ec4;
        case 0x391ec8u: goto label_391ec8;
        case 0x391eccu: goto label_391ecc;
        case 0x391ed0u: goto label_391ed0;
        case 0x391ed4u: goto label_391ed4;
        case 0x391ed8u: goto label_391ed8;
        case 0x391edcu: goto label_391edc;
        case 0x391ee0u: goto label_391ee0;
        case 0x391ee4u: goto label_391ee4;
        case 0x391ee8u: goto label_391ee8;
        case 0x391eecu: goto label_391eec;
        case 0x391ef0u: goto label_391ef0;
        case 0x391ef4u: goto label_391ef4;
        case 0x391ef8u: goto label_391ef8;
        case 0x391efcu: goto label_391efc;
        case 0x391f00u: goto label_391f00;
        case 0x391f04u: goto label_391f04;
        case 0x391f08u: goto label_391f08;
        case 0x391f0cu: goto label_391f0c;
        case 0x391f10u: goto label_391f10;
        case 0x391f14u: goto label_391f14;
        case 0x391f18u: goto label_391f18;
        case 0x391f1cu: goto label_391f1c;
        case 0x391f20u: goto label_391f20;
        case 0x391f24u: goto label_391f24;
        case 0x391f28u: goto label_391f28;
        case 0x391f2cu: goto label_391f2c;
        case 0x391f30u: goto label_391f30;
        case 0x391f34u: goto label_391f34;
        case 0x391f38u: goto label_391f38;
        case 0x391f3cu: goto label_391f3c;
        case 0x391f40u: goto label_391f40;
        case 0x391f44u: goto label_391f44;
        case 0x391f48u: goto label_391f48;
        case 0x391f4cu: goto label_391f4c;
        case 0x391f50u: goto label_391f50;
        case 0x391f54u: goto label_391f54;
        case 0x391f58u: goto label_391f58;
        case 0x391f5cu: goto label_391f5c;
        case 0x391f60u: goto label_391f60;
        case 0x391f64u: goto label_391f64;
        case 0x391f68u: goto label_391f68;
        case 0x391f6cu: goto label_391f6c;
        case 0x391f70u: goto label_391f70;
        case 0x391f74u: goto label_391f74;
        case 0x391f78u: goto label_391f78;
        case 0x391f7cu: goto label_391f7c;
        case 0x391f80u: goto label_391f80;
        case 0x391f84u: goto label_391f84;
        case 0x391f88u: goto label_391f88;
        case 0x391f8cu: goto label_391f8c;
        case 0x391f90u: goto label_391f90;
        case 0x391f94u: goto label_391f94;
        case 0x391f98u: goto label_391f98;
        case 0x391f9cu: goto label_391f9c;
        case 0x391fa0u: goto label_391fa0;
        case 0x391fa4u: goto label_391fa4;
        case 0x391fa8u: goto label_391fa8;
        case 0x391facu: goto label_391fac;
        case 0x391fb0u: goto label_391fb0;
        case 0x391fb4u: goto label_391fb4;
        case 0x391fb8u: goto label_391fb8;
        case 0x391fbcu: goto label_391fbc;
        case 0x391fc0u: goto label_391fc0;
        case 0x391fc4u: goto label_391fc4;
        case 0x391fc8u: goto label_391fc8;
        case 0x391fccu: goto label_391fcc;
        case 0x391fd0u: goto label_391fd0;
        case 0x391fd4u: goto label_391fd4;
        case 0x391fd8u: goto label_391fd8;
        case 0x391fdcu: goto label_391fdc;
        case 0x391fe0u: goto label_391fe0;
        case 0x391fe4u: goto label_391fe4;
        case 0x391fe8u: goto label_391fe8;
        case 0x391fecu: goto label_391fec;
        case 0x391ff0u: goto label_391ff0;
        case 0x391ff4u: goto label_391ff4;
        case 0x391ff8u: goto label_391ff8;
        case 0x391ffcu: goto label_391ffc;
        case 0x392000u: goto label_392000;
        case 0x392004u: goto label_392004;
        case 0x392008u: goto label_392008;
        case 0x39200cu: goto label_39200c;
        case 0x392010u: goto label_392010;
        case 0x392014u: goto label_392014;
        case 0x392018u: goto label_392018;
        case 0x39201cu: goto label_39201c;
        case 0x392020u: goto label_392020;
        case 0x392024u: goto label_392024;
        case 0x392028u: goto label_392028;
        case 0x39202cu: goto label_39202c;
        case 0x392030u: goto label_392030;
        case 0x392034u: goto label_392034;
        case 0x392038u: goto label_392038;
        case 0x39203cu: goto label_39203c;
        case 0x392040u: goto label_392040;
        case 0x392044u: goto label_392044;
        case 0x392048u: goto label_392048;
        case 0x39204cu: goto label_39204c;
        case 0x392050u: goto label_392050;
        case 0x392054u: goto label_392054;
        case 0x392058u: goto label_392058;
        case 0x39205cu: goto label_39205c;
        case 0x392060u: goto label_392060;
        case 0x392064u: goto label_392064;
        case 0x392068u: goto label_392068;
        case 0x39206cu: goto label_39206c;
        case 0x392070u: goto label_392070;
        case 0x392074u: goto label_392074;
        case 0x392078u: goto label_392078;
        case 0x39207cu: goto label_39207c;
        case 0x392080u: goto label_392080;
        case 0x392084u: goto label_392084;
        case 0x392088u: goto label_392088;
        case 0x39208cu: goto label_39208c;
        case 0x392090u: goto label_392090;
        case 0x392094u: goto label_392094;
        case 0x392098u: goto label_392098;
        case 0x39209cu: goto label_39209c;
        case 0x3920a0u: goto label_3920a0;
        case 0x3920a4u: goto label_3920a4;
        case 0x3920a8u: goto label_3920a8;
        case 0x3920acu: goto label_3920ac;
        case 0x3920b0u: goto label_3920b0;
        case 0x3920b4u: goto label_3920b4;
        case 0x3920b8u: goto label_3920b8;
        case 0x3920bcu: goto label_3920bc;
        case 0x3920c0u: goto label_3920c0;
        case 0x3920c4u: goto label_3920c4;
        case 0x3920c8u: goto label_3920c8;
        case 0x3920ccu: goto label_3920cc;
        case 0x3920d0u: goto label_3920d0;
        case 0x3920d4u: goto label_3920d4;
        case 0x3920d8u: goto label_3920d8;
        case 0x3920dcu: goto label_3920dc;
        case 0x3920e0u: goto label_3920e0;
        case 0x3920e4u: goto label_3920e4;
        case 0x3920e8u: goto label_3920e8;
        case 0x3920ecu: goto label_3920ec;
        case 0x3920f0u: goto label_3920f0;
        case 0x3920f4u: goto label_3920f4;
        case 0x3920f8u: goto label_3920f8;
        case 0x3920fcu: goto label_3920fc;
        case 0x392100u: goto label_392100;
        case 0x392104u: goto label_392104;
        case 0x392108u: goto label_392108;
        case 0x39210cu: goto label_39210c;
        case 0x392110u: goto label_392110;
        case 0x392114u: goto label_392114;
        case 0x392118u: goto label_392118;
        case 0x39211cu: goto label_39211c;
        case 0x392120u: goto label_392120;
        case 0x392124u: goto label_392124;
        case 0x392128u: goto label_392128;
        case 0x39212cu: goto label_39212c;
        case 0x392130u: goto label_392130;
        case 0x392134u: goto label_392134;
        case 0x392138u: goto label_392138;
        case 0x39213cu: goto label_39213c;
        case 0x392140u: goto label_392140;
        case 0x392144u: goto label_392144;
        case 0x392148u: goto label_392148;
        case 0x39214cu: goto label_39214c;
        case 0x392150u: goto label_392150;
        case 0x392154u: goto label_392154;
        case 0x392158u: goto label_392158;
        case 0x39215cu: goto label_39215c;
        case 0x392160u: goto label_392160;
        case 0x392164u: goto label_392164;
        case 0x392168u: goto label_392168;
        case 0x39216cu: goto label_39216c;
        case 0x392170u: goto label_392170;
        case 0x392174u: goto label_392174;
        case 0x392178u: goto label_392178;
        case 0x39217cu: goto label_39217c;
        case 0x392180u: goto label_392180;
        case 0x392184u: goto label_392184;
        case 0x392188u: goto label_392188;
        case 0x39218cu: goto label_39218c;
        case 0x392190u: goto label_392190;
        case 0x392194u: goto label_392194;
        case 0x392198u: goto label_392198;
        case 0x39219cu: goto label_39219c;
        case 0x3921a0u: goto label_3921a0;
        case 0x3921a4u: goto label_3921a4;
        case 0x3921a8u: goto label_3921a8;
        case 0x3921acu: goto label_3921ac;
        case 0x3921b0u: goto label_3921b0;
        case 0x3921b4u: goto label_3921b4;
        case 0x3921b8u: goto label_3921b8;
        case 0x3921bcu: goto label_3921bc;
        case 0x3921c0u: goto label_3921c0;
        case 0x3921c4u: goto label_3921c4;
        case 0x3921c8u: goto label_3921c8;
        case 0x3921ccu: goto label_3921cc;
        case 0x3921d0u: goto label_3921d0;
        case 0x3921d4u: goto label_3921d4;
        case 0x3921d8u: goto label_3921d8;
        case 0x3921dcu: goto label_3921dc;
        case 0x3921e0u: goto label_3921e0;
        case 0x3921e4u: goto label_3921e4;
        case 0x3921e8u: goto label_3921e8;
        case 0x3921ecu: goto label_3921ec;
        case 0x3921f0u: goto label_3921f0;
        case 0x3921f4u: goto label_3921f4;
        case 0x3921f8u: goto label_3921f8;
        case 0x3921fcu: goto label_3921fc;
        case 0x392200u: goto label_392200;
        case 0x392204u: goto label_392204;
        case 0x392208u: goto label_392208;
        case 0x39220cu: goto label_39220c;
        case 0x392210u: goto label_392210;
        case 0x392214u: goto label_392214;
        case 0x392218u: goto label_392218;
        case 0x39221cu: goto label_39221c;
        case 0x392220u: goto label_392220;
        case 0x392224u: goto label_392224;
        case 0x392228u: goto label_392228;
        case 0x39222cu: goto label_39222c;
        case 0x392230u: goto label_392230;
        case 0x392234u: goto label_392234;
        case 0x392238u: goto label_392238;
        case 0x39223cu: goto label_39223c;
        case 0x392240u: goto label_392240;
        case 0x392244u: goto label_392244;
        case 0x392248u: goto label_392248;
        case 0x39224cu: goto label_39224c;
        case 0x392250u: goto label_392250;
        case 0x392254u: goto label_392254;
        case 0x392258u: goto label_392258;
        case 0x39225cu: goto label_39225c;
        case 0x392260u: goto label_392260;
        case 0x392264u: goto label_392264;
        case 0x392268u: goto label_392268;
        case 0x39226cu: goto label_39226c;
        case 0x392270u: goto label_392270;
        case 0x392274u: goto label_392274;
        case 0x392278u: goto label_392278;
        case 0x39227cu: goto label_39227c;
        case 0x392280u: goto label_392280;
        case 0x392284u: goto label_392284;
        case 0x392288u: goto label_392288;
        case 0x39228cu: goto label_39228c;
        case 0x392290u: goto label_392290;
        case 0x392294u: goto label_392294;
        case 0x392298u: goto label_392298;
        case 0x39229cu: goto label_39229c;
        case 0x3922a0u: goto label_3922a0;
        case 0x3922a4u: goto label_3922a4;
        case 0x3922a8u: goto label_3922a8;
        case 0x3922acu: goto label_3922ac;
        case 0x3922b0u: goto label_3922b0;
        case 0x3922b4u: goto label_3922b4;
        case 0x3922b8u: goto label_3922b8;
        case 0x3922bcu: goto label_3922bc;
        case 0x3922c0u: goto label_3922c0;
        case 0x3922c4u: goto label_3922c4;
        case 0x3922c8u: goto label_3922c8;
        case 0x3922ccu: goto label_3922cc;
        case 0x3922d0u: goto label_3922d0;
        case 0x3922d4u: goto label_3922d4;
        case 0x3922d8u: goto label_3922d8;
        case 0x3922dcu: goto label_3922dc;
        case 0x3922e0u: goto label_3922e0;
        case 0x3922e4u: goto label_3922e4;
        case 0x3922e8u: goto label_3922e8;
        case 0x3922ecu: goto label_3922ec;
        case 0x3922f0u: goto label_3922f0;
        case 0x3922f4u: goto label_3922f4;
        case 0x3922f8u: goto label_3922f8;
        case 0x3922fcu: goto label_3922fc;
        case 0x392300u: goto label_392300;
        case 0x392304u: goto label_392304;
        case 0x392308u: goto label_392308;
        case 0x39230cu: goto label_39230c;
        case 0x392310u: goto label_392310;
        case 0x392314u: goto label_392314;
        case 0x392318u: goto label_392318;
        case 0x39231cu: goto label_39231c;
        case 0x392320u: goto label_392320;
        case 0x392324u: goto label_392324;
        case 0x392328u: goto label_392328;
        case 0x39232cu: goto label_39232c;
        case 0x392330u: goto label_392330;
        case 0x392334u: goto label_392334;
        case 0x392338u: goto label_392338;
        case 0x39233cu: goto label_39233c;
        case 0x392340u: goto label_392340;
        case 0x392344u: goto label_392344;
        case 0x392348u: goto label_392348;
        case 0x39234cu: goto label_39234c;
        case 0x392350u: goto label_392350;
        case 0x392354u: goto label_392354;
        case 0x392358u: goto label_392358;
        case 0x39235cu: goto label_39235c;
        case 0x392360u: goto label_392360;
        case 0x392364u: goto label_392364;
        case 0x392368u: goto label_392368;
        case 0x39236cu: goto label_39236c;
        case 0x392370u: goto label_392370;
        case 0x392374u: goto label_392374;
        case 0x392378u: goto label_392378;
        case 0x39237cu: goto label_39237c;
        case 0x392380u: goto label_392380;
        case 0x392384u: goto label_392384;
        case 0x392388u: goto label_392388;
        case 0x39238cu: goto label_39238c;
        case 0x392390u: goto label_392390;
        case 0x392394u: goto label_392394;
        case 0x392398u: goto label_392398;
        case 0x39239cu: goto label_39239c;
        case 0x3923a0u: goto label_3923a0;
        case 0x3923a4u: goto label_3923a4;
        case 0x3923a8u: goto label_3923a8;
        case 0x3923acu: goto label_3923ac;
        case 0x3923b0u: goto label_3923b0;
        case 0x3923b4u: goto label_3923b4;
        default: break;
    }

    ctx->pc = 0x391d48u;

label_391d48:
    // 0x391d48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x391d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_391d4c:
    // 0x391d4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x391d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_391d50:
    // 0x391d50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x391d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_391d54:
    // 0x391d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x391d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_391d58:
    // 0x391d58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x391d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_391d5c:
    // 0x391d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x391d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_391d60:
    // 0x391d60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_391d64:
    // 0x391d64: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x391d64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_391d68:
    // 0x391d68: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x391d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_391d6c:
    // 0x391d6c: 0xa220013c  sb          $zero, 0x13C($s1)
    ctx->pc = 0x391d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 316), (uint8_t)GPR_U32(ctx, 0));
label_391d70:
    // 0x391d70: 0x8e260118  lw          $a2, 0x118($s1)
    ctx->pc = 0x391d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391d74:
    // 0x391d74: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
label_391d78:
    if (ctx->pc == 0x391D78u) {
        ctx->pc = 0x391D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D74u;
        // 0x391d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D7Cu;
        goto label_391d7c;
    }
    ctx->pc = 0x391D74u;
    {
        const bool branch_taken_0x391d74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D74u;
        // 0x391d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d74) {
            ctx->pc = 0x391E4Cu;
            goto label_391e4c;
        }
    }
    ctx->pc = 0x391D7Cu;
label_391d7c:
    // 0x391d7c: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x391d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_391d80:
    // 0x391d80: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x391d80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_391d84:
    // 0x391d84: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x391d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_391d88:
    // 0x391d88: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x391d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_391d8c:
    // 0x391d8c: 0x40f809  jalr        $v0
label_391d90:
    if (ctx->pc == 0x391D90u) {
        ctx->pc = 0x391D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D8Cu;
        // 0x391d90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D94u;
        goto label_391d94;
    }
    ctx->pc = 0x391D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391D94u);
        ctx->pc = 0x391D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D8Cu;
        // 0x391d90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391D8Cu, 0x391D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391D94u;
label_391d94:
    // 0x391d94: 0x8e280118  lw          $t0, 0x118($s1)
    ctx->pc = 0x391d94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391d98:
    // 0x391d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391d9c:
    // 0x391d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391da0:
    // 0x391da0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391da4:
    // 0x391da4: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x391da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_391da8:
    // 0x391da8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x391da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_391dac:
    // 0x391dac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x391dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_391db0:
    // 0x391db0: 0x40f809  jalr        $v0
label_391db4:
    if (ctx->pc == 0x391DB4u) {
        ctx->pc = 0x391DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DB0u;
        // 0x391db4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391DB8u;
        goto label_391db8;
    }
    ctx->pc = 0x391DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391DB8u);
        ctx->pc = 0x391DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DB0u;
        // 0x391db4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391DB0u, 0x391DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391DB8u;
label_391db8:
    // 0x391db8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x391db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391dbc:
    // 0x391dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391dc0:
    // 0x391dc0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x391dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_391dc4:
    // 0x391dc4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x391dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_391dc8:
    // 0x391dc8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x391dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_391dcc:
    // 0x391dcc: 0x60f809  jalr        $v1
label_391dd0:
    if (ctx->pc == 0x391DD0u) {
        ctx->pc = 0x391DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DCCu;
        // 0x391dd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391DD4u;
        goto label_391dd4;
    }
    ctx->pc = 0x391DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391DD4u);
        ctx->pc = 0x391DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DCCu;
        // 0x391dd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391DCCu, 0x391DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391DD4u;
label_391dd4:
    // 0x391dd4: 0x8e280118  lw          $t0, 0x118($s1)
    ctx->pc = 0x391dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391dd8:
    // 0x391dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391ddc:
    // 0x391ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391de0:
    // 0x391de0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x391de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_391de4:
    // 0x391de4: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x391de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_391de8:
    // 0x391de8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x391de8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_391dec:
    // 0x391dec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x391decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_391df0:
    // 0x391df0: 0x40f809  jalr        $v0
label_391df4:
    if (ctx->pc == 0x391DF4u) {
        ctx->pc = 0x391DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DF0u;
        // 0x391df4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391DF8u;
        goto label_391df8;
    }
    ctx->pc = 0x391DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391DF8u);
        ctx->pc = 0x391DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DF0u;
        // 0x391df4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391DF0u, 0x391DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391DF8u;
label_391df8:
    // 0x391df8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x391df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391dfc:
    // 0x391dfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391e00:
    // 0x391e00: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x391e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_391e04:
    // 0x391e04: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x391e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_391e08:
    // 0x391e08: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x391e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_391e0c:
    // 0x391e0c: 0x60f809  jalr        $v1
label_391e10:
    if (ctx->pc == 0x391E10u) {
        ctx->pc = 0x391E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E0Cu;
        // 0x391e10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E14u;
        goto label_391e14;
    }
    ctx->pc = 0x391E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391E14u);
        ctx->pc = 0x391E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E0Cu;
        // 0x391e10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391E0Cu, 0x391E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391E14u;
label_391e14:
    // 0x391e14: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x391e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391e18:
    // 0x391e18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x391e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_391e1c:
    // 0x391e1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391e20:
    // 0x391e20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x391e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_391e24:
    // 0x391e24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x391e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_391e28:
    // 0x391e28: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x391e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_391e2c:
    // 0x391e2c: 0x8e260118  lw          $a2, 0x118($s1)
    ctx->pc = 0x391e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391e30:
    // 0x391e30: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x391e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_391e34:
    // 0x391e34: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x391e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_391e38:
    // 0x391e38: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x391e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_391e3c:
    // 0x391e3c: 0x60f809  jalr        $v1
label_391e40:
    if (ctx->pc == 0x391E40u) {
        ctx->pc = 0x391E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E3Cu;
        // 0x391e40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E44u;
        goto label_391e44;
    }
    ctx->pc = 0x391E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391E44u);
        ctx->pc = 0x391E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E3Cu;
        // 0x391e40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391E3Cu, 0x391E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391E44u;
label_391e44:
    // 0x391e44: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_391e48:
    if (ctx->pc == 0x391E48u) {
        ctx->pc = 0x391E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E44u;
        // 0x391e48: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E4Cu;
        goto label_391e4c;
    }
    ctx->pc = 0x391E44u;
    {
        const bool branch_taken_0x391e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E44u;
        // 0x391e48: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e44) {
            ctx->pc = 0x392108u;
            goto label_392108;
        }
    }
    ctx->pc = 0x391E4Cu;
label_391e4c:
    // 0x391e4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x391e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_391e50:
    // 0x391e50: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x391e50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_391e54:
    // 0x391e54: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x391e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_391e58:
    // 0x391e58: 0xc0e44cc  jal         func_391330
label_391e5c:
    if (ctx->pc == 0x391E5Cu) {
        ctx->pc = 0x391E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E58u;
        // 0x391e5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E60u;
        goto label_391e60;
    }
    ctx->pc = 0x391E58u;
    SET_GPR_U32(ctx, 31, 0x391E60u);
    ctx->pc = 0x391E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E58u;
    // 0x391e5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391E58u, 0x391E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E60u;
label_391e60:
    // 0x391e60: 0x80430084  lb          $v1, 0x84($v0)
    ctx->pc = 0x391e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
label_391e64:
    // 0x391e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x391e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391e68:
    // 0x391e68: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_391e6c:
    if (ctx->pc == 0x391E6Cu) {
        ctx->pc = 0x391E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E68u;
        // 0x391e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E70u;
        goto label_391e70;
    }
    ctx->pc = 0x391E68u;
    {
        const bool branch_taken_0x391e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x391E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E68u;
        // 0x391e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e68) {
            ctx->pc = 0x391F1Cu;
            goto label_391f1c;
        }
    }
    ctx->pc = 0x391E70u;
label_391e70:
    // 0x391e70: 0x54620069  bnel        $v1, $v0, . + 4 + (0x69 << 2)
label_391e74:
    if (ctx->pc == 0x391E74u) {
        ctx->pc = 0x391E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E70u;
        // 0x391e74: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E78u;
        goto label_391e78;
    }
    ctx->pc = 0x391E70u;
    {
        const bool branch_taken_0x391e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x391e70) {
            ctx->pc = 0x391E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E70u;
            // 0x391e74: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392018u;
            goto label_392018;
        }
    }
    ctx->pc = 0x391E78u;
label_391e78:
    // 0x391e78: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x391e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_391e7c:
    // 0x391e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391e80:
    // 0x391e80: 0xc0cf396  jal         func_33CE58
label_391e84:
    if (ctx->pc == 0x391E84u) {
        ctx->pc = 0x391E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E80u;
        // 0x391e84: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E88u;
        goto label_391e88;
    }
    ctx->pc = 0x391E80u;
    SET_GPR_U32(ctx, 31, 0x391E88u);
    ctx->pc = 0x391E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E80u;
    // 0x391e84: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE58u, 0x391E80u, 0x391E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E88u;
label_391e88:
    // 0x391e88: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_391e8c:
    if (ctx->pc == 0x391E8Cu) {
        ctx->pc = 0x391E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E88u;
        // 0x391e8c: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E90u;
        goto label_391e90;
    }
    ctx->pc = 0x391E88u;
    {
        const bool branch_taken_0x391e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E88u;
        // 0x391e8c: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e88) {
            ctx->pc = 0x392014u;
            goto label_392014;
        }
    }
    ctx->pc = 0x391E90u;
label_391e90:
    // 0x391e90: 0xc0cf468  jal         func_33D1A0
label_391e94:
    if (ctx->pc == 0x391E94u) {
        ctx->pc = 0x391E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E90u;
        // 0x391e94: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E98u;
        goto label_391e98;
    }
    ctx->pc = 0x391E90u;
    SET_GPR_U32(ctx, 31, 0x391E98u);
    ctx->pc = 0x391E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E90u;
    // 0x391e94: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D1A0u, 0x391E90u, 0x391E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E98u;
label_391e98:
    // 0x391e98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x391e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391e9c:
    // 0x391e9c: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
label_391ea0:
    if (ctx->pc == 0x391EA0u) {
        ctx->pc = 0x391EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E9Cu;
        // 0x391ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EA4u;
        goto label_391ea4;
    }
    ctx->pc = 0x391E9Cu;
    {
        const bool branch_taken_0x391e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x391EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E9Cu;
        // 0x391ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e9c) {
            ctx->pc = 0x392004u;
            goto label_392004;
        }
    }
    ctx->pc = 0x391EA4u;
label_391ea4:
    // 0x391ea4: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x391ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391ea8:
    // 0x391ea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391eac:
    // 0x391eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x391eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391eb0:
    // 0x391eb0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x391eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_391eb4:
    // 0x391eb4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x391eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_391eb8:
    // 0x391eb8: 0x8c480024  lw          $t0, 0x24($v0)
    ctx->pc = 0x391eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_391ebc:
    // 0x391ebc: 0x100f809  jalr        $t0
label_391ec0:
    if (ctx->pc == 0x391EC0u) {
        ctx->pc = 0x391EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EBCu;
        // 0x391ec0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EC4u;
        goto label_391ec4;
    }
    ctx->pc = 0x391EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x391EC4u);
        ctx->pc = 0x391EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EBCu;
        // 0x391ec0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391EBCu, 0x391EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391EC4u;
label_391ec4:
    // 0x391ec4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x391ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_391ec8:
    // 0x391ec8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x391ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_391ecc:
    // 0x391ecc: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x391eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
label_391ed0:
    // 0x391ed0: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391ed4:
    // 0x391ed4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x391ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_391ed8:
    // 0x391ed8: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x391ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_391edc:
    // 0x391edc: 0xc0e44cc  jal         func_391330
label_391ee0:
    if (ctx->pc == 0x391EE0u) {
        ctx->pc = 0x391EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EDCu;
        // 0x391ee0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EE4u;
        goto label_391ee4;
    }
    ctx->pc = 0x391EDCu;
    SET_GPR_U32(ctx, 31, 0x391EE4u);
    ctx->pc = 0x391EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391EDCu;
    // 0x391ee0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391EDCu, 0x391EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391EE4u;
label_391ee4:
    // 0x391ee4: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x391ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391ee8:
    // 0x391ee8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x391ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_391eec:
    // 0x391eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391ef0:
    // 0x391ef0: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391ef4:
    // 0x391ef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x391ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391ef8:
    // 0x391ef8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x391ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_391efc:
    // 0x391efc: 0xc0e44cc  jal         func_391330
label_391f00:
    if (ctx->pc == 0x391F00u) {
        ctx->pc = 0x391F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EFCu;
        // 0x391f00: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F04u;
        goto label_391f04;
    }
    ctx->pc = 0x391EFCu;
    SET_GPR_U32(ctx, 31, 0x391F04u);
    ctx->pc = 0x391F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391EFCu;
    // 0x391f00: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391EFCu, 0x391F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F04u;
label_391f04:
    // 0x391f04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x391f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391f08:
    // 0x391f08: 0xc0e45f6  jal         func_3917D8
label_391f0c:
    if (ctx->pc == 0x391F0Cu) {
        ctx->pc = 0x391F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F08u;
        // 0x391f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F10u;
        goto label_391f10;
    }
    ctx->pc = 0x391F08u;
    SET_GPR_U32(ctx, 31, 0x391F10u);
    ctx->pc = 0x391F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F08u;
    // 0x391f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x391F08u, 0x391F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F10u;
label_391f10:
    // 0x391f10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x391f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_391f14:
    // 0x391f14: 0x1000003f  b           . + 4 + (0x3F << 2)
label_391f18:
    if (ctx->pc == 0x391F18u) {
        ctx->pc = 0x391F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F14u;
        // 0x391f18: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F1Cu;
        goto label_391f1c;
    }
    ctx->pc = 0x391F14u;
    {
        const bool branch_taken_0x391f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F14u;
        // 0x391f18: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f14) {
            ctx->pc = 0x392014u;
            goto label_392014;
        }
    }
    ctx->pc = 0x391F1Cu;
label_391f1c:
    // 0x391f1c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x391f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_391f20:
    // 0x391f20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391f24:
    // 0x391f24: 0xc0cf396  jal         func_33CE58
label_391f28:
    if (ctx->pc == 0x391F28u) {
        ctx->pc = 0x391F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F24u;
        // 0x391f28: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F2Cu;
        goto label_391f2c;
    }
    ctx->pc = 0x391F24u;
    SET_GPR_U32(ctx, 31, 0x391F2Cu);
    ctx->pc = 0x391F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F24u;
    // 0x391f28: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE58u, 0x391F24u, 0x391F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F2Cu;
label_391f2c:
    // 0x391f2c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_391f30:
    if (ctx->pc == 0x391F30u) {
        ctx->pc = 0x391F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F2Cu;
        // 0x391f30: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F34u;
        goto label_391f34;
    }
    ctx->pc = 0x391F2Cu;
    {
        const bool branch_taken_0x391f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F2Cu;
        // 0x391f30: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f2c) {
            ctx->pc = 0x392014u;
            goto label_392014;
        }
    }
    ctx->pc = 0x391F34u;
label_391f34:
    // 0x391f34: 0xc0cf47a  jal         func_33D1E8
label_391f38:
    if (ctx->pc == 0x391F38u) {
        ctx->pc = 0x391F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F34u;
        // 0x391f38: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F3Cu;
        goto label_391f3c;
    }
    ctx->pc = 0x391F34u;
    SET_GPR_U32(ctx, 31, 0x391F3Cu);
    ctx->pc = 0x391F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F34u;
    // 0x391f38: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D1E8u, 0x391F34u, 0x391F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F3Cu;
label_391f3c:
    // 0x391f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x391f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391f40:
    // 0x391f40: 0x52400031  beql        $s2, $zero, . + 4 + (0x31 << 2)
label_391f44:
    if (ctx->pc == 0x391F44u) {
        ctx->pc = 0x391F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F40u;
        // 0x391f44: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F48u;
        goto label_391f48;
    }
    ctx->pc = 0x391F40u;
    {
        const bool branch_taken_0x391f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x391f40) {
            ctx->pc = 0x391F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391F40u;
            // 0x391f44: 0x8e047198  lw          $a0, 0x7198($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392008u;
            goto label_392008;
        }
    }
    ctx->pc = 0x391F48u;
label_391f48:
    // 0x391f48: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391f4c:
    // 0x391f4c: 0xc0e44cc  jal         func_391330
label_391f50:
    if (ctx->pc == 0x391F50u) {
        ctx->pc = 0x391F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F4Cu;
        // 0x391f50: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F54u;
        goto label_391f54;
    }
    ctx->pc = 0x391F4Cu;
    SET_GPR_U32(ctx, 31, 0x391F54u);
    ctx->pc = 0x391F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F4Cu;
    // 0x391f50: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391F4Cu, 0x391F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F54u;
label_391f54:
    // 0x391f54: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391f58:
    // 0x391f58: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x391f58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_391f5c:
    // 0x391f5c: 0xc0e44cc  jal         func_391330
label_391f60:
    if (ctx->pc == 0x391F60u) {
        ctx->pc = 0x391F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F5Cu;
        // 0x391f60: 0xc4550078  lwc1        $f21, 0x78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F64u;
        goto label_391f64;
    }
    ctx->pc = 0x391F5Cu;
    SET_GPR_U32(ctx, 31, 0x391F64u);
    ctx->pc = 0x391F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F5Cu;
    // 0x391f60: 0xc4550078  lwc1        $f21, 0x78($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391F5Cu, 0x391F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F64u;
label_391f64:
    // 0x391f64: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391f68:
    // 0x391f68: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x391f68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_391f6c:
    // 0x391f6c: 0xc0e44cc  jal         func_391330
label_391f70:
    if (ctx->pc == 0x391F70u) {
        ctx->pc = 0x391F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F6Cu;
        // 0x391f70: 0xc454007c  lwc1        $f20, 0x7C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F74u;
        goto label_391f74;
    }
    ctx->pc = 0x391F6Cu;
    SET_GPR_U32(ctx, 31, 0x391F74u);
    ctx->pc = 0x391F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F6Cu;
    // 0x391f70: 0xc454007c  lwc1        $f20, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391F6Cu, 0x391F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F74u;
label_391f74:
    // 0x391f74: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x391f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_391f78:
    // 0x391f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391f7c:
    // 0x391f7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_391f80:
    // 0x391f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391f84:
    // 0x391f84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391f88:
    // 0x391f88: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x391f88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_391f8c:
    // 0x391f8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x391f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391f90:
    // 0x391f90: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x391f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_391f94:
    // 0x391f94: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x391f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_391f98:
    // 0x391f98: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x391f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_391f9c:
    // 0x391f9c: 0x8e280118  lw          $t0, 0x118($s1)
    ctx->pc = 0x391f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_391fa0:
    // 0x391fa0: 0x8d020074  lw          $v0, 0x74($t0)
    ctx->pc = 0x391fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_391fa4:
    // 0x391fa4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x391fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_391fa8:
    // 0x391fa8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x391fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_391fac:
    // 0x391fac: 0x60f809  jalr        $v1
label_391fb0:
    if (ctx->pc == 0x391FB0u) {
        ctx->pc = 0x391FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FACu;
        // 0x391fb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FB4u;
        goto label_391fb4;
    }
    ctx->pc = 0x391FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391FB4u);
        ctx->pc = 0x391FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FACu;
        // 0x391fb0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391FACu, 0x391FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391FB4u;
label_391fb4:
    // 0x391fb4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x391fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_391fb8:
    // 0x391fb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x391fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_391fbc:
    // 0x391fbc: 0x3463fdff  ori         $v1, $v1, 0xFDFF
    ctx->pc = 0x391fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65023);
label_391fc0:
    // 0x391fc0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x391fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_391fc4:
    // 0x391fc4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x391fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_391fc8:
    // 0x391fc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x391fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_391fcc:
    // 0x391fcc: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x391fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_391fd0:
    // 0x391fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391fd4:
    // 0x391fd4: 0xc0d0b70  jal         func_342DC0
label_391fd8:
    if (ctx->pc == 0x391FD8u) {
        ctx->pc = 0x391FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FD4u;
        // 0x391fd8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FDCu;
        goto label_391fdc;
    }
    ctx->pc = 0x391FD4u;
    SET_GPR_U32(ctx, 31, 0x391FDCu);
    ctx->pc = 0x391FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FD4u;
    // 0x391fd8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DC0u, 0x391FD4u, 0x391FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FDCu;
label_391fdc:
    // 0x391fdc: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x391fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_391fe0:
    // 0x391fe0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x391fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_391fe4:
    // 0x391fe4: 0xc0e44cc  jal         func_391330
label_391fe8:
    if (ctx->pc == 0x391FE8u) {
        ctx->pc = 0x391FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FE4u;
        // 0x391fe8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FECu;
        goto label_391fec;
    }
    ctx->pc = 0x391FE4u;
    SET_GPR_U32(ctx, 31, 0x391FECu);
    ctx->pc = 0x391FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FE4u;
    // 0x391fe8: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391FE4u, 0x391FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FECu;
label_391fec:
    // 0x391fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x391fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391ff0:
    // 0x391ff0: 0xc0e45f6  jal         func_3917D8
label_391ff4:
    if (ctx->pc == 0x391FF4u) {
        ctx->pc = 0x391FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FF0u;
        // 0x391ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FF8u;
        goto label_391ff8;
    }
    ctx->pc = 0x391FF0u;
    SET_GPR_U32(ctx, 31, 0x391FF8u);
    ctx->pc = 0x391FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391FF0u;
    // 0x391ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x391FF0u, 0x391FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391FF8u;
label_391ff8:
    // 0x391ff8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x391ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_391ffc:
    // 0x391ffc: 0x10000005  b           . + 4 + (0x5 << 2)
label_392000:
    if (ctx->pc == 0x392000u) {
        ctx->pc = 0x392000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FFCu;
        // 0x392000: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392004u;
        goto label_392004;
    }
    ctx->pc = 0x391FFCu;
    {
        const bool branch_taken_0x391ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FFCu;
        // 0x392000: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ffc) {
            ctx->pc = 0x392014u;
            goto label_392014;
        }
    }
    ctx->pc = 0x392004u;
label_392004:
    // 0x392004: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x392004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_392008:
    // 0x392008: 0xc0cf3c0  jal         func_33CF00
label_39200c:
    if (ctx->pc == 0x39200Cu) {
        ctx->pc = 0x39200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392008u;
        // 0x39200c: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392010u;
        goto label_392010;
    }
    ctx->pc = 0x392008u;
    SET_GPR_U32(ctx, 31, 0x392010u);
    ctx->pc = 0x39200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392008u;
    // 0x39200c: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF00u, 0x392008u, 0x392010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392010u;
label_392010:
    // 0x392010: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x392010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_392014:
    // 0x392014: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x392014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392018:
    // 0x392018: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x392018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39201c:
    // 0x39201c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_392020:
    // 0x392020: 0x40f809  jalr        $v0
label_392024:
    if (ctx->pc == 0x392024u) {
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392028u;
        goto label_392028;
    }
    ctx->pc = 0x392020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392028u);
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392020u, 0x392028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392028u;
label_392028:
    // 0x392028: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x392028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39202c:
    // 0x39202c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392030:
    // 0x392030: 0xc10c313  jal         func_430C4C
label_392034:
    if (ctx->pc == 0x392034u) {
        ctx->pc = 0x392034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392030u;
        // 0x392034: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392038u;
        goto label_392038;
    }
    ctx->pc = 0x392030u;
    SET_GPR_U32(ctx, 31, 0x392038u);
    ctx->pc = 0x392034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392030u;
    // 0x392034: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x392030u, 0x392038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392038u;
label_392038:
    // 0x392038: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_39203c:
    if (ctx->pc == 0x39203Cu) {
        ctx->pc = 0x39203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392038u;
        // 0x39203c: 0x8e260118  lw          $a2, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392040u;
        goto label_392040;
    }
    ctx->pc = 0x392038u;
    {
        const bool branch_taken_0x392038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392038) {
            ctx->pc = 0x39203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392038u;
            // 0x39203c: 0x8e260118  lw          $a2, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3920D4u;
            goto label_3920d4;
        }
    }
    ctx->pc = 0x392040u;
label_392040:
    // 0x392040: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x392040u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_392044:
    // 0x392044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392048:
    // 0x392048: 0xc0cf396  jal         func_33CE58
label_39204c:
    if (ctx->pc == 0x39204Cu) {
        ctx->pc = 0x39204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392048u;
        // 0x39204c: 0x8e447198  lw          $a0, 0x7198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392050u;
        goto label_392050;
    }
    ctx->pc = 0x392048u;
    SET_GPR_U32(ctx, 31, 0x392050u);
    ctx->pc = 0x39204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392048u;
    // 0x39204c: 0x8e447198  lw          $a0, 0x7198($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE58u, 0x392048u, 0x392050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392050u;
label_392050:
    // 0x392050: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_392054:
    if (ctx->pc == 0x392054u) {
        ctx->pc = 0x392054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392050u;
        // 0x392054: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392058u;
        goto label_392058;
    }
    ctx->pc = 0x392050u;
    {
        const bool branch_taken_0x392050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392050u;
        // 0x392054: 0xae220118  sw          $v0, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392050) {
            ctx->pc = 0x392104u;
            goto label_392104;
        }
    }
    ctx->pc = 0x392058u;
label_392058:
    // 0x392058: 0xc0cf468  jal         func_33D1A0
label_39205c:
    if (ctx->pc == 0x39205Cu) {
        ctx->pc = 0x39205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392058u;
        // 0x39205c: 0x8e447198  lw          $a0, 0x7198($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392060u;
        goto label_392060;
    }
    ctx->pc = 0x392058u;
    SET_GPR_U32(ctx, 31, 0x392060u);
    ctx->pc = 0x39205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392058u;
    // 0x39205c: 0x8e447198  lw          $a0, 0x7198($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D1A0u, 0x392058u, 0x392060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392060u;
label_392060:
    // 0x392060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x392060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392064:
    // 0x392064: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_392068:
    if (ctx->pc == 0x392068u) {
        ctx->pc = 0x392068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392064u;
        // 0x392068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39206Cu;
        goto label_39206c;
    }
    ctx->pc = 0x392064u;
    {
        const bool branch_taken_0x392064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392064u;
        // 0x392068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392064) {
            ctx->pc = 0x3920C0u;
            goto label_3920c0;
        }
    }
    ctx->pc = 0x39206Cu;
label_39206c:
    // 0x39206c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x39206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392070:
    // 0x392070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x392070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392074:
    // 0x392074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392078:
    // 0x392078: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x392078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_39207c:
    // 0x39207c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x39207cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_392080:
    // 0x392080: 0x8c480024  lw          $t0, 0x24($v0)
    ctx->pc = 0x392080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_392084:
    // 0x392084: 0x100f809  jalr        $t0
label_392088:
    if (ctx->pc == 0x392088u) {
        ctx->pc = 0x392088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392084u;
        // 0x392088: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39208Cu;
        goto label_39208c;
    }
    ctx->pc = 0x392084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x39208Cu);
        ctx->pc = 0x392088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392084u;
        // 0x392088: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392084u, 0x39208Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39208Cu;
label_39208c:
    // 0x39208c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x39208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_392090:
    // 0x392090: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x392090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_392094:
    // 0x392094: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x392094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
label_392098:
    // 0x392098: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x392098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_39209c:
    // 0x39209c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3920a0:
    // 0x3920a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3920a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3920a4:
    // 0x3920a4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3920a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3920a8:
    // 0x3920a8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x3920a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_3920ac:
    // 0x3920ac: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3920acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3920b0:
    // 0x3920b0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3920b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3920b4:
    // 0x3920b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3920b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3920b8:
    // 0x3920b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3920bc:
    if (ctx->pc == 0x3920BCu) {
        ctx->pc = 0x3920BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920B8u;
        // 0x3920bc: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920C0u;
        goto label_3920c0;
    }
    ctx->pc = 0x3920B8u;
    {
        const bool branch_taken_0x3920b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3920BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920B8u;
        // 0x3920bc: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920b8) {
            ctx->pc = 0x3920D0u;
            goto label_3920d0;
        }
    }
    ctx->pc = 0x3920C0u;
label_3920c0:
    // 0x3920c0: 0x8e447198  lw          $a0, 0x7198($s2)
    ctx->pc = 0x3920c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
label_3920c4:
    // 0x3920c4: 0xc0cf3c0  jal         func_33CF00
label_3920c8:
    if (ctx->pc == 0x3920C8u) {
        ctx->pc = 0x3920C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920C4u;
        // 0x3920c8: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920CCu;
        goto label_3920cc;
    }
    ctx->pc = 0x3920C4u;
    SET_GPR_U32(ctx, 31, 0x3920CCu);
    ctx->pc = 0x3920C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3920C4u;
    // 0x3920c8: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF00u, 0x3920C4u, 0x3920CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3920CCu;
label_3920cc:
    // 0x3920cc: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x3920ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_3920d0:
    // 0x3920d0: 0x8e260118  lw          $a2, 0x118($s1)
    ctx->pc = 0x3920d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3920d4:
    // 0x3920d4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_3920d8:
    if (ctx->pc == 0x3920D8u) {
        ctx->pc = 0x3920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920D4u;
        // 0x3920d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920DCu;
        goto label_3920dc;
    }
    ctx->pc = 0x3920D4u;
    {
        const bool branch_taken_0x3920d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920D4u;
        // 0x3920d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3920d4) {
            ctx->pc = 0x392104u;
            goto label_392104;
        }
    }
    ctx->pc = 0x3920DCu;
label_3920dc:
    // 0x3920dc: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3920dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3920e0:
    // 0x3920e0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x3920e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_3920e4:
    // 0x3920e4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3920e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3920e8:
    // 0x3920e8: 0x60f809  jalr        $v1
label_3920ec:
    if (ctx->pc == 0x3920ECu) {
        ctx->pc = 0x3920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920E8u;
        // 0x3920ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920F0u;
        goto label_3920f0;
    }
    ctx->pc = 0x3920E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3920F0u);
        ctx->pc = 0x3920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920E8u;
        // 0x3920ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3920E8u, 0x3920F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3920F0u;
label_3920f0:
    // 0x3920f0: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x3920f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3920f4:
    // 0x3920f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3920f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3920f8:
    // 0x3920f8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3920f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3920fc:
    // 0x3920fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3920fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_392100:
    // 0x392100: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x392100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_392104:
    // 0x392104: 0x8e642c04  lw          $a0, 0x2C04($s3)
    ctx->pc = 0x392104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
label_392108:
    // 0x392108: 0xc0e44cc  jal         func_391330
label_39210c:
    if (ctx->pc == 0x39210Cu) {
        ctx->pc = 0x39210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392108u;
        // 0x39210c: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392110u;
        goto label_392110;
    }
    ctx->pc = 0x392108u;
    SET_GPR_U32(ctx, 31, 0x392110u);
    ctx->pc = 0x39210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392108u;
    // 0x39210c: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392108u, 0x392110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392110u;
label_392110:
    // 0x392110: 0x80500086  lb          $s0, 0x86($v0)
    ctx->pc = 0x392110u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392114:
    // 0x392114: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x392114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392118:
    // 0x392118: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_39211c:
    if (ctx->pc == 0x39211Cu) {
        ctx->pc = 0x39211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392118u;
        // 0x39211c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392120u;
        goto label_392120;
    }
    ctx->pc = 0x392118u;
    {
        const bool branch_taken_0x392118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392118u;
        // 0x39211c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392118) {
            ctx->pc = 0x39236Cu;
            goto label_39236c;
        }
    }
    ctx->pc = 0x392120u;
label_392120:
    // 0x392120: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x392120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392124:
    // 0x392124: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x392124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_392128:
    // 0x392128: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x392128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39212c:
    // 0x39212c: 0x40f809  jalr        $v0
label_392130:
    if (ctx->pc == 0x392130u) {
        ctx->pc = 0x392130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39212Cu;
        // 0x392130: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392134u;
        goto label_392134;
    }
    ctx->pc = 0x39212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392134u);
        ctx->pc = 0x392130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39212Cu;
        // 0x392130: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39212Cu, 0x392134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392134u;
label_392134:
    // 0x392134: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x392134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_392138:
    // 0x392138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39213c:
    // 0x39213c: 0xc10c313  jal         func_430C4C
label_392140:
    if (ctx->pc == 0x392140u) {
        ctx->pc = 0x392140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39213Cu;
        // 0x392140: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392144u;
        goto label_392144;
    }
    ctx->pc = 0x39213Cu;
    SET_GPR_U32(ctx, 31, 0x392144u);
    ctx->pc = 0x392140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39213Cu;
    // 0x392140: 0x24a50ec8  addiu       $a1, $a1, 0xEC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39213Cu, 0x392144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392144u;
label_392144:
    // 0x392144: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_392148:
    if (ctx->pc == 0x392148u) {
        ctx->pc = 0x392148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392144u;
        // 0x392148: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39214Cu;
        goto label_39214c;
    }
    ctx->pc = 0x392144u;
    {
        const bool branch_taken_0x392144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392144u;
        // 0x392148: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392144) {
            ctx->pc = 0x392368u;
            goto label_392368;
        }
    }
    ctx->pc = 0x39214Cu;
label_39214c:
    // 0x39214c: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x39214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392150:
    // 0x392150: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_392154:
    // 0x392154: 0x34630500  ori         $v1, $v1, 0x500
    ctx->pc = 0x392154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1280);
label_392158:
    // 0x392158: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x392158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_39215c:
    // 0x39215c: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x39215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392160:
    // 0x392160: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_392164:
    // 0x392164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x392164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_392168:
    // 0x392168: 0x16050011  bne         $s0, $a1, . + 4 + (0x11 << 2)
label_39216c:
    if (ctx->pc == 0x39216Cu) {
        ctx->pc = 0x39216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392168u;
        // 0x39216c: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392170u;
        goto label_392170;
    }
    ctx->pc = 0x392168u;
    {
        const bool branch_taken_0x392168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x39216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392168u;
        // 0x39216c: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392168) {
            ctx->pc = 0x3921B0u;
            goto label_3921b0;
        }
    }
    ctx->pc = 0x392170u;
label_392170:
    // 0x392170: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x392170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392174:
    // 0x392174: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x392174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_392178:
    // 0x392178: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39217c:
    // 0x39217c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x39217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_392180:
    // 0x392180: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x392180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_392184:
    // 0x392184: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x392184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392188:
    // 0x392188: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x392188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_39218c:
    // 0x39218c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x39218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_392190:
    // 0x392190: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x392190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_392194:
    // 0x392194: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x392194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392198:
    // 0x392198: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39219c:
    // 0x39219c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x39219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3921a0:
    // 0x3921a0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3921a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3921a4:
    // 0x3921a4: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3921a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3921a8:
    // 0x3921a8: 0x10000025  b           . + 4 + (0x25 << 2)
label_3921ac:
    if (ctx->pc == 0x3921ACu) {
        ctx->pc = 0x3921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921A8u;
        // 0x3921ac: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3921B0u;
        goto label_3921b0;
    }
    ctx->pc = 0x3921A8u;
    {
        const bool branch_taken_0x3921a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921A8u;
        // 0x3921ac: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921a8) {
            ctx->pc = 0x392240u;
            goto label_392240;
        }
    }
    ctx->pc = 0x3921B0u;
label_3921b0:
    // 0x3921b0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3921b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3921b4:
    // 0x3921b4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_3921b8:
    if (ctx->pc == 0x3921B8u) {
        ctx->pc = 0x3921B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921B4u;
        // 0x3921b8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3921BCu;
        goto label_3921bc;
    }
    ctx->pc = 0x3921B4u;
    {
        const bool branch_taken_0x3921b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3921B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921B4u;
        // 0x3921b8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921b4) {
            ctx->pc = 0x3921E0u;
            goto label_3921e0;
        }
    }
    ctx->pc = 0x3921BCu;
label_3921bc:
    // 0x3921bc: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3921bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3921c0:
    // 0x3921c0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3921c4:
    // 0x3921c4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3921c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3921c8:
    // 0x3921c8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3921c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3921cc:
    // 0x3921cc: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x3921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3921d0:
    // 0x3921d0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3921d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3921d4:
    // 0x3921d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3921d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3921d8:
    // 0x3921d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3921dc:
    if (ctx->pc == 0x3921DCu) {
        ctx->pc = 0x3921DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921D8u;
        // 0x3921dc: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3921E0u;
        goto label_3921e0;
    }
    ctx->pc = 0x3921D8u;
    {
        const bool branch_taken_0x3921d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3921DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921D8u;
        // 0x3921dc: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921d8) {
            ctx->pc = 0x392240u;
            goto label_392240;
        }
    }
    ctx->pc = 0x3921E0u;
label_3921e0:
    // 0x3921e0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_3921e4:
    if (ctx->pc == 0x3921E4u) {
        ctx->pc = 0x3921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921E0u;
        // 0x3921e4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3921E8u;
        goto label_3921e8;
    }
    ctx->pc = 0x3921E0u;
    {
        const bool branch_taken_0x3921e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921E0u;
        // 0x3921e4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3921e0) {
            ctx->pc = 0x392208u;
            goto label_392208;
        }
    }
    ctx->pc = 0x3921E8u;
label_3921e8:
    // 0x3921e8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3921e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3921ec:
    // 0x3921ec: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3921ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3921f0:
    // 0x3921f0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x3921f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_3921f4:
    // 0x3921f4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3921f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3921f8:
    // 0x3921f8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3921f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3921fc:
    // 0x3921fc: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x3921fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_392200:
    // 0x392200: 0x1000000f  b           . + 4 + (0xF << 2)
label_392204:
    if (ctx->pc == 0x392204u) {
        ctx->pc = 0x392204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392200u;
        // 0x392204: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392208u;
        goto label_392208;
    }
    ctx->pc = 0x392200u;
    {
        const bool branch_taken_0x392200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392200u;
        // 0x392204: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392200) {
            ctx->pc = 0x392240u;
            goto label_392240;
        }
    }
    ctx->pc = 0x392208u;
label_392208:
    // 0x392208: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_39220c:
    if (ctx->pc == 0x39220Cu) {
        ctx->pc = 0x39220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392208u;
        // 0x39220c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392210u;
        goto label_392210;
    }
    ctx->pc = 0x392208u;
    {
        const bool branch_taken_0x392208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x39220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392208u;
        // 0x39220c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392208) {
            ctx->pc = 0x392220u;
            goto label_392220;
        }
    }
    ctx->pc = 0x392210u;
label_392210:
    // 0x392210: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x392210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_392214:
    // 0x392214: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x392214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_392218:
    // 0x392218: 0x10000009  b           . + 4 + (0x9 << 2)
label_39221c:
    if (ctx->pc == 0x39221Cu) {
        ctx->pc = 0x39221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392218u;
        // 0x39221c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392220u;
        goto label_392220;
    }
    ctx->pc = 0x392218u;
    {
        const bool branch_taken_0x392218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392218u;
        // 0x39221c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392218) {
            ctx->pc = 0x392240u;
            goto label_392240;
        }
    }
    ctx->pc = 0x392220u;
label_392220:
    // 0x392220: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_392224:
    if (ctx->pc == 0x392224u) {
        ctx->pc = 0x392224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392220u;
        // 0x392224: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392228u;
        goto label_392228;
    }
    ctx->pc = 0x392220u;
    {
        const bool branch_taken_0x392220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x392224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392220u;
        // 0x392224: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392220) {
            ctx->pc = 0x392230u;
            goto label_392230;
        }
    }
    ctx->pc = 0x392228u;
label_392228:
    // 0x392228: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_39222c:
    if (ctx->pc == 0x39222Cu) {
        ctx->pc = 0x39222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392228u;
        // 0x39222c: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392230u;
        goto label_392230;
    }
    ctx->pc = 0x392228u;
    {
        const bool branch_taken_0x392228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x392228) {
            ctx->pc = 0x39222Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392228u;
            // 0x39222c: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392244u;
            goto label_392244;
        }
    }
    ctx->pc = 0x392230u;
label_392230:
    // 0x392230: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x392230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392234:
    // 0x392234: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x392234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_392238:
    // 0x392238: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x392238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_39223c:
    // 0x39223c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x39223cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_392240:
    // 0x392240: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x392240u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_392244:
    // 0x392244: 0xc0e44cc  jal         func_391330
label_392248:
    if (ctx->pc == 0x392248u) {
        ctx->pc = 0x392248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392244u;
        // 0x392248: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39224Cu;
        goto label_39224c;
    }
    ctx->pc = 0x392244u;
    SET_GPR_U32(ctx, 31, 0x39224Cu);
    ctx->pc = 0x392248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392244u;
    // 0x392248: 0x8e642c04  lw          $a0, 0x2C04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392244u, 0x39224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39224Cu;
label_39224c:
    // 0x39224c: 0x9445005e  lhu         $a1, 0x5E($v0)
    ctx->pc = 0x39224cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
label_392250:
    // 0x392250: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x392250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_392254:
    // 0x392254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392258:
    if (ctx->pc == 0x392258u) {
        ctx->pc = 0x392258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392254u;
        // 0x392258: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39225Cu;
        goto label_39225c;
    }
    ctx->pc = 0x392254u;
    {
        const bool branch_taken_0x392254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392254u;
        // 0x392258: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392254) {
            ctx->pc = 0x392270u;
            goto label_392270;
        }
    }
    ctx->pc = 0x39225Cu;
label_39225c:
    // 0x39225c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x39225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392260:
    // 0x392260: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x392260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_392264:
    // 0x392264: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x392264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_392268:
    // 0x392268: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x392268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_39226c:
    // 0x39226c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x39226cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_392270:
    // 0x392270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392274:
    if (ctx->pc == 0x392274u) {
        ctx->pc = 0x392274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392270u;
        // 0x392274: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392278u;
        goto label_392278;
    }
    ctx->pc = 0x392270u;
    {
        const bool branch_taken_0x392270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392270u;
        // 0x392274: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392270) {
            ctx->pc = 0x39228Cu;
            goto label_39228c;
        }
    }
    ctx->pc = 0x392278u;
label_392278:
    // 0x392278: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x392278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_39227c:
    // 0x39227c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x39227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_392280:
    // 0x392280: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x392280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_392284:
    // 0x392284: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x392284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_392288:
    // 0x392288: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x392288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_39228c:
    // 0x39228c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392290:
    if (ctx->pc == 0x392290u) {
        ctx->pc = 0x392290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39228Cu;
        // 0x392290: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392294u;
        goto label_392294;
    }
    ctx->pc = 0x39228Cu;
    {
        const bool branch_taken_0x39228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39228Cu;
        // 0x392290: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39228c) {
            ctx->pc = 0x3922A8u;
            goto label_3922a8;
        }
    }
    ctx->pc = 0x392294u;
label_392294:
    // 0x392294: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x392294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392298:
    // 0x392298: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x392298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_39229c:
    // 0x39229c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x39229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3922a0:
    // 0x3922a0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3922a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3922a4:
    // 0x3922a4: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x3922a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_3922a8:
    // 0x3922a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3922ac:
    if (ctx->pc == 0x3922ACu) {
        ctx->pc = 0x3922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922A8u;
        // 0x3922ac: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3922B0u;
        goto label_3922b0;
    }
    ctx->pc = 0x3922A8u;
    {
        const bool branch_taken_0x3922a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922A8u;
        // 0x3922ac: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922a8) {
            ctx->pc = 0x3922C4u;
            goto label_3922c4;
        }
    }
    ctx->pc = 0x3922B0u;
label_3922b0:
    // 0x3922b0: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3922b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3922b4:
    // 0x3922b4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3922b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3922b8:
    // 0x3922b8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3922b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3922bc:
    // 0x3922bc: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3922bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3922c0:
    // 0x3922c0: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x3922c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_3922c4:
    // 0x3922c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3922c8:
    if (ctx->pc == 0x3922C8u) {
        ctx->pc = 0x3922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922C4u;
        // 0x3922c8: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3922CCu;
        goto label_3922cc;
    }
    ctx->pc = 0x3922C4u;
    {
        const bool branch_taken_0x3922c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922C4u;
        // 0x3922c8: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922c4) {
            ctx->pc = 0x3922E0u;
            goto label_3922e0;
        }
    }
    ctx->pc = 0x3922CCu;
label_3922cc:
    // 0x3922cc: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3922ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3922d0:
    // 0x3922d0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3922d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3922d4:
    // 0x3922d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3922d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3922d8:
    // 0x3922d8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3922d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3922dc:
    // 0x3922dc: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x3922dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_3922e0:
    // 0x3922e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3922e4:
    if (ctx->pc == 0x3922E4u) {
        ctx->pc = 0x3922E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922E0u;
        // 0x3922e4: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3922E8u;
        goto label_3922e8;
    }
    ctx->pc = 0x3922E0u;
    {
        const bool branch_taken_0x3922e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3922E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922E0u;
        // 0x3922e4: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922e0) {
            ctx->pc = 0x3922FCu;
            goto label_3922fc;
        }
    }
    ctx->pc = 0x3922E8u;
label_3922e8:
    // 0x3922e8: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x3922e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3922ec:
    // 0x3922ec: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3922ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3922f0:
    // 0x3922f0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3922f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3922f4:
    // 0x3922f4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3922f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3922f8:
    // 0x3922f8: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x3922f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_3922fc:
    // 0x3922fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392300:
    if (ctx->pc == 0x392300u) {
        ctx->pc = 0x392300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922FCu;
        // 0x392300: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392304u;
        goto label_392304;
    }
    ctx->pc = 0x3922FCu;
    {
        const bool branch_taken_0x3922fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922FCu;
        // 0x392300: 0x30a20080  andi        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3922fc) {
            ctx->pc = 0x392318u;
            goto label_392318;
        }
    }
    ctx->pc = 0x392304u;
label_392304:
    // 0x392304: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x392304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392308:
    // 0x392308: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x392308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_39230c:
    // 0x39230c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_392310:
    // 0x392310: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x392310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_392314:
    // 0x392314: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x392314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_392318:
    // 0x392318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39231c:
    if (ctx->pc == 0x39231Cu) {
        ctx->pc = 0x39231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392318u;
        // 0x39231c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392320u;
        goto label_392320;
    }
    ctx->pc = 0x392318u;
    {
        const bool branch_taken_0x392318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392318u;
        // 0x39231c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392318) {
            ctx->pc = 0x392330u;
            goto label_392330;
        }
    }
    ctx->pc = 0x392320u;
label_392320:
    // 0x392320: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x392320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392324:
    // 0x392324: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_392328:
    // 0x392328: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x392328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_39232c:
    // 0x39232c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x39232cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_392330:
    // 0x392330: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x392330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_392334:
    // 0x392334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_392338:
    if (ctx->pc == 0x392338u) {
        ctx->pc = 0x392338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392334u;
        // 0x392338: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39233Cu;
        goto label_39233c;
    }
    ctx->pc = 0x392334u;
    {
        const bool branch_taken_0x392334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392334u;
        // 0x392338: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392334) {
            ctx->pc = 0x39234Cu;
            goto label_39234c;
        }
    }
    ctx->pc = 0x39233Cu;
label_39233c:
    // 0x39233c: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x39233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392340:
    // 0x392340: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_392344:
    // 0x392344: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x392344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_392348:
    // 0x392348: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x392348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_39234c:
    // 0x39234c: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x39234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_392350:
    // 0x392350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_392354:
    if (ctx->pc == 0x392354u) {
        ctx->pc = 0x392354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392350u;
        // 0x392354: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392358u;
        goto label_392358;
    }
    ctx->pc = 0x392350u;
    {
        const bool branch_taken_0x392350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392350u;
        // 0x392354: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392350) {
            ctx->pc = 0x392368u;
            goto label_392368;
        }
    }
    ctx->pc = 0x392358u;
label_392358:
    // 0x392358: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x392358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_39235c:
    // 0x39235c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x39235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_392360:
    // 0x392360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x392360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_392364:
    // 0x392364: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x392364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_392368:
    // 0x392368: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x392368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39236c:
    // 0x39236c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_392370:
    if (ctx->pc == 0x392370u) {
        ctx->pc = 0x392370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39236Cu;
        // 0x392370: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392374u;
        goto label_392374;
    }
    ctx->pc = 0x39236Cu;
    {
        const bool branch_taken_0x39236c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x392370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39236Cu;
        // 0x392370: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39236c) {
            ctx->pc = 0x392398u;
            goto label_392398;
        }
    }
    ctx->pc = 0x392374u;
label_392374:
    // 0x392374: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x392374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392378:
    // 0x392378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x392378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39237c:
    // 0x39237c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39237cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392380:
    // 0x392380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392384:
    // 0x392384: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x392384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_392388:
    // 0x392388: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x392388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_39238c:
    // 0x39238c: 0x60f809  jalr        $v1
label_392390:
    if (ctx->pc == 0x392390u) {
        ctx->pc = 0x392390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39238Cu;
        // 0x392390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392394u;
        goto label_392394;
    }
    ctx->pc = 0x39238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x392394u);
        ctx->pc = 0x392390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39238Cu;
        // 0x392390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39238Cu, 0x392394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392394u;
label_392394:
    // 0x392394: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x392394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_392398:
    // 0x392398: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x392398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39239c:
    // 0x39239c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39239cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3923a0:
    // 0x3923a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3923a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3923a4:
    // 0x3923a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3923a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3923a8:
    // 0x3923a8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3923a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3923ac:
    // 0x3923ac: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3923acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3923b0:
    // 0x3923b0: 0x3e00008  jr          $ra
label_3923b4:
    if (ctx->pc == 0x3923B4u) {
        ctx->pc = 0x3923B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923B0u;
        // 0x3923b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923B8u;
        goto label_fallthrough_0x3923b0;
    }
    ctx->pc = 0x3923B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3923B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923B0u;
        // 0x3923b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3923B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3923b0:
    ctx->pc = 0x3923B8u;
}
