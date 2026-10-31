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

// Function: sub_00183F48
// Address: 0x183f48 - 0x184568
void sub_00183F48_0x183f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183F48_0x183f48");
#endif

    switch (ctx->pc) {
        case 0x183f48u: goto label_183f48;
        case 0x183f4cu: goto label_183f4c;
        case 0x183f50u: goto label_183f50;
        case 0x183f54u: goto label_183f54;
        case 0x183f58u: goto label_183f58;
        case 0x183f5cu: goto label_183f5c;
        case 0x183f60u: goto label_183f60;
        case 0x183f64u: goto label_183f64;
        case 0x183f68u: goto label_183f68;
        case 0x183f6cu: goto label_183f6c;
        case 0x183f70u: goto label_183f70;
        case 0x183f74u: goto label_183f74;
        case 0x183f78u: goto label_183f78;
        case 0x183f7cu: goto label_183f7c;
        case 0x183f80u: goto label_183f80;
        case 0x183f84u: goto label_183f84;
        case 0x183f88u: goto label_183f88;
        case 0x183f8cu: goto label_183f8c;
        case 0x183f90u: goto label_183f90;
        case 0x183f94u: goto label_183f94;
        case 0x183f98u: goto label_183f98;
        case 0x183f9cu: goto label_183f9c;
        case 0x183fa0u: goto label_183fa0;
        case 0x183fa4u: goto label_183fa4;
        case 0x183fa8u: goto label_183fa8;
        case 0x183facu: goto label_183fac;
        case 0x183fb0u: goto label_183fb0;
        case 0x183fb4u: goto label_183fb4;
        case 0x183fb8u: goto label_183fb8;
        case 0x183fbcu: goto label_183fbc;
        case 0x183fc0u: goto label_183fc0;
        case 0x183fc4u: goto label_183fc4;
        case 0x183fc8u: goto label_183fc8;
        case 0x183fccu: goto label_183fcc;
        case 0x183fd0u: goto label_183fd0;
        case 0x183fd4u: goto label_183fd4;
        case 0x183fd8u: goto label_183fd8;
        case 0x183fdcu: goto label_183fdc;
        case 0x183fe0u: goto label_183fe0;
        case 0x183fe4u: goto label_183fe4;
        case 0x183fe8u: goto label_183fe8;
        case 0x183fecu: goto label_183fec;
        case 0x183ff0u: goto label_183ff0;
        case 0x183ff4u: goto label_183ff4;
        case 0x183ff8u: goto label_183ff8;
        case 0x183ffcu: goto label_183ffc;
        case 0x184000u: goto label_184000;
        case 0x184004u: goto label_184004;
        case 0x184008u: goto label_184008;
        case 0x18400cu: goto label_18400c;
        case 0x184010u: goto label_184010;
        case 0x184014u: goto label_184014;
        case 0x184018u: goto label_184018;
        case 0x18401cu: goto label_18401c;
        case 0x184020u: goto label_184020;
        case 0x184024u: goto label_184024;
        case 0x184028u: goto label_184028;
        case 0x18402cu: goto label_18402c;
        case 0x184030u: goto label_184030;
        case 0x184034u: goto label_184034;
        case 0x184038u: goto label_184038;
        case 0x18403cu: goto label_18403c;
        case 0x184040u: goto label_184040;
        case 0x184044u: goto label_184044;
        case 0x184048u: goto label_184048;
        case 0x18404cu: goto label_18404c;
        case 0x184050u: goto label_184050;
        case 0x184054u: goto label_184054;
        case 0x184058u: goto label_184058;
        case 0x18405cu: goto label_18405c;
        case 0x184060u: goto label_184060;
        case 0x184064u: goto label_184064;
        case 0x184068u: goto label_184068;
        case 0x18406cu: goto label_18406c;
        case 0x184070u: goto label_184070;
        case 0x184074u: goto label_184074;
        case 0x184078u: goto label_184078;
        case 0x18407cu: goto label_18407c;
        case 0x184080u: goto label_184080;
        case 0x184084u: goto label_184084;
        case 0x184088u: goto label_184088;
        case 0x18408cu: goto label_18408c;
        case 0x184090u: goto label_184090;
        case 0x184094u: goto label_184094;
        case 0x184098u: goto label_184098;
        case 0x18409cu: goto label_18409c;
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
        case 0x184170u: goto label_184170;
        case 0x184174u: goto label_184174;
        case 0x184178u: goto label_184178;
        case 0x18417cu: goto label_18417c;
        case 0x184180u: goto label_184180;
        case 0x184184u: goto label_184184;
        case 0x184188u: goto label_184188;
        case 0x18418cu: goto label_18418c;
        case 0x184190u: goto label_184190;
        case 0x184194u: goto label_184194;
        case 0x184198u: goto label_184198;
        case 0x18419cu: goto label_18419c;
        case 0x1841a0u: goto label_1841a0;
        case 0x1841a4u: goto label_1841a4;
        case 0x1841a8u: goto label_1841a8;
        case 0x1841acu: goto label_1841ac;
        case 0x1841b0u: goto label_1841b0;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841b8u: goto label_1841b8;
        case 0x1841bcu: goto label_1841bc;
        case 0x1841c0u: goto label_1841c0;
        case 0x1841c4u: goto label_1841c4;
        case 0x1841c8u: goto label_1841c8;
        case 0x1841ccu: goto label_1841cc;
        case 0x1841d0u: goto label_1841d0;
        case 0x1841d4u: goto label_1841d4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841dcu: goto label_1841dc;
        case 0x1841e0u: goto label_1841e0;
        case 0x1841e4u: goto label_1841e4;
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        case 0x1843d0u: goto label_1843d0;
        case 0x1843d4u: goto label_1843d4;
        case 0x1843d8u: goto label_1843d8;
        case 0x1843dcu: goto label_1843dc;
        case 0x1843e0u: goto label_1843e0;
        case 0x1843e4u: goto label_1843e4;
        case 0x1843e8u: goto label_1843e8;
        case 0x1843ecu: goto label_1843ec;
        case 0x1843f0u: goto label_1843f0;
        case 0x1843f4u: goto label_1843f4;
        case 0x1843f8u: goto label_1843f8;
        case 0x1843fcu: goto label_1843fc;
        case 0x184400u: goto label_184400;
        case 0x184404u: goto label_184404;
        case 0x184408u: goto label_184408;
        case 0x18440cu: goto label_18440c;
        case 0x184410u: goto label_184410;
        case 0x184414u: goto label_184414;
        case 0x184418u: goto label_184418;
        case 0x18441cu: goto label_18441c;
        case 0x184420u: goto label_184420;
        case 0x184424u: goto label_184424;
        case 0x184428u: goto label_184428;
        case 0x18442cu: goto label_18442c;
        case 0x184430u: goto label_184430;
        case 0x184434u: goto label_184434;
        case 0x184438u: goto label_184438;
        case 0x18443cu: goto label_18443c;
        case 0x184440u: goto label_184440;
        case 0x184444u: goto label_184444;
        case 0x184448u: goto label_184448;
        case 0x18444cu: goto label_18444c;
        case 0x184450u: goto label_184450;
        case 0x184454u: goto label_184454;
        case 0x184458u: goto label_184458;
        case 0x18445cu: goto label_18445c;
        case 0x184460u: goto label_184460;
        case 0x184464u: goto label_184464;
        case 0x184468u: goto label_184468;
        case 0x18446cu: goto label_18446c;
        case 0x184470u: goto label_184470;
        case 0x184474u: goto label_184474;
        case 0x184478u: goto label_184478;
        case 0x18447cu: goto label_18447c;
        case 0x184480u: goto label_184480;
        case 0x184484u: goto label_184484;
        case 0x184488u: goto label_184488;
        case 0x18448cu: goto label_18448c;
        case 0x184490u: goto label_184490;
        case 0x184494u: goto label_184494;
        case 0x184498u: goto label_184498;
        case 0x18449cu: goto label_18449c;
        case 0x1844a0u: goto label_1844a0;
        case 0x1844a4u: goto label_1844a4;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844acu: goto label_1844ac;
        case 0x1844b0u: goto label_1844b0;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844b8u: goto label_1844b8;
        case 0x1844bcu: goto label_1844bc;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844c4u: goto label_1844c4;
        case 0x1844c8u: goto label_1844c8;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        default: break;
    }

    ctx->pc = 0x183f48u;

label_183f48:
    // 0x183f48: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x183f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_183f4c:
    // 0x183f4c: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x183f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
label_183f50:
    // 0x183f50: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x183f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
label_183f54:
    // 0x183f54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x183f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183f58:
    // 0x183f58: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x183f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
label_183f5c:
    // 0x183f5c: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x183f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
label_183f60:
    // 0x183f60: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x183f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_183f64:
    // 0x183f64: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x183f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
label_183f68:
    // 0x183f68: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x183f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
label_183f6c:
    // 0x183f6c: 0x7fbe0150  sq          $fp, 0x150($sp)
    ctx->pc = 0x183f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 30));
label_183f70:
    // 0x183f70: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x183f70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183f74:
    // 0x183f74: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x183f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
label_183f78:
    // 0x183f78: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x183f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_183f7c:
    // 0x183f7c: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x183f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_183f80:
    // 0x183f80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183f84:
    // 0x183f84: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_183f88:
    // 0x183f88: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x183f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_183f8c:
    // 0x183f8c: 0x40f809  jalr        $v0
label_183f90:
    if (ctx->pc == 0x183F90u) {
        ctx->pc = 0x183F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F8Cu;
        // 0x183f90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F94u;
        goto label_183f94;
    }
    ctx->pc = 0x183F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183F94u);
        ctx->pc = 0x183F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F8Cu;
        // 0x183f90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183F8Cu, 0x183F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183F94u;
label_183f94:
    // 0x183f94: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_183f98:
    // 0x183f98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183f9c:
    // 0x183f9c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x183f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_183fa0:
    // 0x183fa0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x183fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_183fa4:
    // 0x183fa4: 0x40f809  jalr        $v0
label_183fa8:
    if (ctx->pc == 0x183FA8u) {
        ctx->pc = 0x183FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FA4u;
        // 0x183fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FACu;
        goto label_183fac;
    }
    ctx->pc = 0x183FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183FACu);
        ctx->pc = 0x183FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FA4u;
        // 0x183fa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FA4u, 0x183FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183FACu;
label_183fac:
    // 0x183fac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183fb0:
    // 0x183fb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x183fb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_183fb4:
    // 0x183fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183fb8:
    // 0x183fb8: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_183fbc:
    // 0x183fbc: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x183fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_183fc0:
    // 0x183fc0: 0x40f809  jalr        $v0
label_183fc4:
    if (ctx->pc == 0x183FC4u) {
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FC8u;
        goto label_183fc8;
    }
    ctx->pc = 0x183FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183FC8u);
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FC0u, 0x183FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183FC8u;
label_183fc8:
    // 0x183fc8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x183fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_183fcc:
    // 0x183fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183fd0:
    // 0x183fd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183fd4:
    // 0x183fd4: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_183fd8:
    // 0x183fd8: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x183fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_183fdc:
    // 0x183fdc: 0x40f809  jalr        $v0
label_183fe0:
    if (ctx->pc == 0x183FE0u) {
        ctx->pc = 0x183FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FDCu;
        // 0x183fe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FE4u;
        goto label_183fe4;
    }
    ctx->pc = 0x183FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183FE4u);
        ctx->pc = 0x183FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FDCu;
        // 0x183fe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FDCu, 0x183FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183FE4u;
label_183fe4:
    // 0x183fe4: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x183fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_183fe8:
    // 0x183fe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183fec:
    // 0x183fec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183ff0:
    // 0x183ff0: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_183ff4:
    // 0x183ff4: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_183ff8:
    // 0x183ff8: 0x40f809  jalr        $v0
label_183ffc:
    if (ctx->pc == 0x183FFCu) {
        ctx->pc = 0x183FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FF8u;
        // 0x183ffc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184000u;
        goto label_184000;
    }
    ctx->pc = 0x183FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184000u);
        ctx->pc = 0x183FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FF8u;
        // 0x183ffc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FF8u, 0x184000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184000u;
label_184000:
    // 0x184000: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x184000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_184004:
    // 0x184004: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x184004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_184008:
    // 0x184008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x184008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18400c:
    // 0x18400c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x18400cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_184010:
    // 0x184010: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_184014:
    // 0x184014: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x184014u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_184018:
    // 0x184018: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_18401c:
    // 0x18401c: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_184020:
    // 0x184020: 0x96420084  lhu         $v0, 0x84($s2)
    ctx->pc = 0x184020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_184024:
    // 0x184024: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x184024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_184028:
    // 0x184028: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_18402c:
    // 0x18402c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18402cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_184030:
    // 0x184030: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x184030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_184034:
    // 0x184034: 0x30427ff0  andi        $v0, $v0, 0x7FF0
    ctx->pc = 0x184034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32752);
label_184038:
    // 0x184038: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18403c:
    // 0x18403c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_184040:
    if (ctx->pc == 0x184040u) {
        ctx->pc = 0x184040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18403Cu;
        // 0x184040: 0x27be0010  addiu       $fp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184044u;
        goto label_184044;
    }
    ctx->pc = 0x18403Cu;
    {
        const bool branch_taken_0x18403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18403Cu;
        // 0x184040: 0x27be0010  addiu       $fp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18403c) {
            ctx->pc = 0x184068u;
            goto label_184068;
        }
    }
    ctx->pc = 0x184044u;
label_184044:
    // 0x184044: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x184044u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_184048:
    // 0x184048: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184048u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_18404c:
    // 0x18404c: 0x0  nop
    ctx->pc = 0x18404cu;
    // NOP
label_184050:
    // 0x184050: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x184050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_184054:
    // 0x184054: 0x0  nop
    ctx->pc = 0x184054u;
    // NOP
label_184058:
    // 0x184058: 0x0  nop
    ctx->pc = 0x184058u;
    // NOP
label_18405c:
    // 0x18405c: 0x0  nop
    ctx->pc = 0x18405cu;
    // NOP
label_184060:
    // 0x184060: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
label_184064:
    if (ctx->pc == 0x184064u) {
        ctx->pc = 0x184064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184060u;
        // 0x184064: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184068u;
        goto label_184068;
    }
    ctx->pc = 0x184060u;
    {
        const bool branch_taken_0x184060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184060) {
            ctx->pc = 0x184064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184060u;
            // 0x184064: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184050;
        }
    }
    ctx->pc = 0x184068u;
label_184068:
    // 0x184068: 0x8ee60004  lw          $a2, 0x4($s7)
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_18406c:
    // 0x18406c: 0x26f16428  addiu       $s1, $s7, 0x6428
    ctx->pc = 0x18406cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 25640));
label_184070:
    // 0x184070: 0x24031900  addiu       $v1, $zero, 0x1900
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
label_184074:
    // 0x184074: 0x26f06420  addiu       $s0, $s7, 0x6420
    ctx->pc = 0x184074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25632));
label_184078:
    // 0x184078: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x184078u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18407c:
    // 0x18407c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18407cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_184080:
    // 0x184080: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x184080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_184084:
    // 0x184084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184088:
    // 0x184088: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x184088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_18408c:
    // 0x18408c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_184090:
    // 0x184090: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x184090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_184094:
    // 0x184094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_184098:
    // 0x184098: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18409c:
    // 0x18409c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1840a0:
    // 0x1840a0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_1840a4:
    // 0x1840a4: 0xc0cd940  jal         func_336500
label_1840a8:
    if (ctx->pc == 0x1840A8u) {
        ctx->pc = 0x1840A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A4u;
        // 0x1840a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1840ACu;
        goto label_1840ac;
    }
    ctx->pc = 0x1840A4u;
    SET_GPR_U32(ctx, 31, 0x1840ACu);
    ctx->pc = 0x1840A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840A4u;
    // 0x1840a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x1840A4u, 0x1840ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840ACu;
label_1840ac:
    // 0x1840ac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1840acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1840b0:
    // 0x1840b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1840b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1840b4:
    // 0x1840b4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_1840b8:
    // 0x1840b8: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_1840bc:
    // 0x1840bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1840bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1840c0:
    // 0x1840c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1840c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1840c4:
    // 0x1840c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1840c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1840c8:
    // 0x1840c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1840c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1840cc:
    // 0x1840cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1840ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1840d0:
    // 0x1840d0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1840d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1840d4:
    // 0x1840d4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1840d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1840d8:
    // 0x1840d8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1840d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1840dc:
    // 0x1840dc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1840dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1840e0:
    // 0x1840e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1840e0u;
    // VWAITQ (Q already resolved in this runtime)
label_1840e4:
    // 0x1840e4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1840e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1840e8:
    // 0x1840e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1840e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1840ec:
    // 0x1840ec: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1840ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_1840f0:
    // 0x1840f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1840f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1840f4:
    // 0x1840f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1840f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1840f8:
    // 0x1840f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1840f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1840fc:
    // 0x1840fc: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x1840fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_184100:
    // 0x184100: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x184100u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_184104:
    // 0x184104: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x184104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_184108:
    // 0x184108: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x184108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_18410c:
    // 0x18410c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184110:
    // 0x184110: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x184110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_184114:
    // 0x184114: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x184114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_184118:
    // 0x184118: 0xc060f16  jal         func_183C58
label_18411c:
    if (ctx->pc == 0x18411Cu) {
        ctx->pc = 0x18411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184118u;
        // 0x18411c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184120u;
        goto label_184120;
    }
    ctx->pc = 0x184118u;
    SET_GPR_U32(ctx, 31, 0x184120u);
    ctx->pc = 0x18411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184118u;
    // 0x18411c: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C58u, 0x184118u, 0x184120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184120u;
label_184120:
    // 0x184120: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x184120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_184124:
    // 0x184124: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x184124u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_184128:
    // 0x184128: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x184128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18412c:
    // 0x18412c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x18412cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_184130:
    // 0x184130: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x184130u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_184134:
    // 0x184134: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x184134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_184138:
    // 0x184138: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x184138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_18413c:
    // 0x18413c: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x18413cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_184140:
    // 0x184140: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x184140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_184144:
    // 0x184144: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x184144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_184148:
    // 0x184148: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x184148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18414c:
    // 0x18414c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x18414cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_184150:
    // 0x184150: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x184150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_184154:
    // 0x184154: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x184154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_184158:
    // 0x184158: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x184158u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_18415c:
    // 0x18415c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x18415cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_184160:
    // 0x184160: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x184160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_184164:
    // 0x184164: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x184164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_184168:
    // 0x184168: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x184168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_18416c:
    // 0x18416c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x18416cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_184170:
    // 0x184170: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x184170u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_184174:
    // 0x184174: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x184174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_184178:
    // 0x184178: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x184178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_18417c:
    // 0x18417c: 0xafb10108  sw          $s1, 0x108($sp)
    ctx->pc = 0x18417cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 17));
label_184180:
    // 0x184180: 0xafb00104  sw          $s0, 0x104($sp)
    ctx->pc = 0x184180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 16));
label_184184:
    // 0x184184: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x184184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184188:
    // 0x184188: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x184188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_18418c:
    // 0x18418c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18418cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_184190:
    // 0x184190: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x184190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_184194:
    // 0x184194: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x184194u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_184198:
    // 0x184198: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x184198u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_18419c:
    // 0x18419c: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x18419cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1841a0:
    // 0x1841a0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1841a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1841a4:
    // 0x1841a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1841a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1841a8:
    // 0x1841a8: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x1841a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_1841ac:
    // 0x1841ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1841acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1841b0:
    // 0x1841b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1841b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1841b4:
    // 0x1841b4: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x1841b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1841b8:
    // 0x1841b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1841b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1841bc:
    // 0x1841bc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1841bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1841c0:
    // 0x1841c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1841c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1841c4:
    // 0x1841c4: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x1841c4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1841c8:
    // 0x1841c8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1841c8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_1841cc:
    // 0x1841cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1841ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1841d0:
    // 0x1841d0: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x1841d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_1841d4:
    // 0x1841d4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1841d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1841d8:
    // 0x1841d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1841d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1841dc:
    // 0x1841dc: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1841dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1841e0:
    // 0x1841e0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1841e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_1841e4:
    // 0x1841e4: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x1841e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_1841e8:
    // 0x1841e8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1841e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_1841ec:
    // 0x1841ec: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1841ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_1841f0:
    // 0x1841f0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1841f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1841f4:
    // 0x1841f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1841f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1841f8:
    // 0x1841f8: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x1841f8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1841fc:
    // 0x1841fc: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1841fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_184200:
    // 0x184200: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x184200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_184204:
    // 0x184204: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x184204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_184208:
    // 0x184208: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x184208u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18420c:
    // 0x18420c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x18420cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_184210:
    // 0x184210: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x184210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_184214:
    // 0x184214: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x184214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_184218:
    // 0x184218: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x184218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
label_18421c:
    // 0x18421c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_184220:
    // 0x184220: 0x8fb60080  lw          $s6, 0x80($sp)
    ctx->pc = 0x184220u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_184224:
    // 0x184224: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x184224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_184228:
    // 0x184228: 0x8fa90094  lw          $t1, 0x94($sp)
    ctx->pc = 0x184228u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_18422c:
    // 0x18422c: 0xb6102b  sltu        $v0, $a1, $s6
    ctx->pc = 0x18422cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_184230:
    // 0x184230: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_184234:
    // 0x184234: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x184234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_184238:
    // 0x184238: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_18423c:
    if (ctx->pc == 0x18423Cu) {
        ctx->pc = 0x18423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184238u;
        // 0x18423c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184240u;
        goto label_184240;
    }
    ctx->pc = 0x184238u;
    {
        const bool branch_taken_0x184238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184238u;
        // 0x18423c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184238) {
            ctx->pc = 0x184440u;
            goto label_184440;
        }
    }
    ctx->pc = 0x184240u;
label_184240:
    // 0x184240: 0x8fb40084  lw          $s4, 0x84($sp)
    ctx->pc = 0x184240u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_184244:
    // 0x184244: 0x0  nop
    ctx->pc = 0x184244u;
    // NOP
label_184248:
    // 0x184248: 0x134102b  sltu        $v0, $t1, $s4
    ctx->pc = 0x184248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_18424c:
    // 0x18424c: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_184250:
    if (ctx->pc == 0x184250u) {
        ctx->pc = 0x184250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18424Cu;
        // 0x184250: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184254u;
        goto label_184254;
    }
    ctx->pc = 0x18424Cu;
    {
        const bool branch_taken_0x18424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18424c) {
            ctx->pc = 0x184250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18424Cu;
            // 0x184250: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184430u;
            goto label_184430;
        }
    }
    ctx->pc = 0x184254u;
label_184254:
    // 0x184254: 0x8fb30088  lw          $s3, 0x88($sp)
    ctx->pc = 0x184254u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_184258:
    // 0x184258: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x184258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_18425c:
    // 0x18425c: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_184260:
    if (ctx->pc == 0x184260u) {
        ctx->pc = 0x184260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18425Cu;
        // 0x184260: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184264u;
        goto label_184264;
    }
    ctx->pc = 0x18425Cu;
    {
        const bool branch_taken_0x18425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18425c) {
            ctx->pc = 0x184260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18425Cu;
            // 0x184260: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184420u;
            goto label_184420;
        }
    }
    ctx->pc = 0x184264u;
label_184264:
    // 0x184264: 0x96420072  lhu         $v0, 0x72($s2)
    ctx->pc = 0x184264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
label_184268:
    // 0x184268: 0x96430070  lhu         $v1, 0x70($s2)
    ctx->pc = 0x184268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
label_18426c:
    // 0x18426c: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x18426cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_184270:
    // 0x184270: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_184274:
    // 0x184274: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x184274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_184278:
    // 0x184278: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x184278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_18427c:
    // 0x18427c: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x18427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_184280:
    // 0x184280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_184284:
    // 0x184284: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184288:
    // 0x184288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18428c:
    // 0x18428c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_184290:
    if (ctx->pc == 0x184290u) {
        ctx->pc = 0x184290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18428Cu;
        // 0x184290: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184294u;
        goto label_184294;
    }
    ctx->pc = 0x18428Cu;
    {
        const bool branch_taken_0x18428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18428Cu;
        // 0x184290: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18428c) {
            ctx->pc = 0x18440Cu;
            goto label_18440c;
        }
    }
    ctx->pc = 0x184294u;
label_184294:
    // 0x184294: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x184294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_184298:
    // 0x184298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x184298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18429c:
    // 0x18429c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x18429cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1842a0:
    // 0x1842a0: 0x96150000  lhu         $s5, 0x0($s0)
    ctx->pc = 0x1842a0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1842a4:
    // 0x1842a4: 0x12a00059  beqz        $s5, . + 4 + (0x59 << 2)
label_1842a8:
    if (ctx->pc == 0x1842A8u) {
        ctx->pc = 0x1842A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A4u;
        // 0x1842a8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842ACu;
        goto label_1842ac;
    }
    ctx->pc = 0x1842A4u;
    {
        const bool branch_taken_0x1842a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A4u;
        // 0x1842a8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842a4) {
            ctx->pc = 0x18440Cu;
            goto label_18440c;
        }
    }
    ctx->pc = 0x1842ACu;
label_1842ac:
    // 0x1842ac: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1842acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1842b0:
    // 0x1842b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1842b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1842b4:
    // 0x1842b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1842b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1842b8:
    // 0x1842b8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1842bc:
    // 0x1842bc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1842bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1842c0:
    // 0x1842c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1842c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1842c4:
    // 0x1842c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1842c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1842c8:
    // 0x1842c8: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1842c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1842cc:
    // 0x1842cc: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x1842ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1842d0:
    // 0x1842d0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1842d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_1842d4:
    // 0x1842d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1842d8:
    // 0x1842d8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1842d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1842dc:
    // 0x1842dc: 0xc51007  srav        $v0, $a1, $a2
    ctx->pc = 0x1842dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_1842e0:
    // 0x1842e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1842e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1842e4:
    // 0x1842e4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1842e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1842e8:
    // 0x1842e8: 0x54800045  bnel        $a0, $zero, . + 4 + (0x45 << 2)
label_1842ec:
    if (ctx->pc == 0x1842ECu) {
        ctx->pc = 0x1842ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842E8u;
        // 0x1842ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842F0u;
        goto label_1842f0;
    }
    ctx->pc = 0x1842E8u;
    {
        const bool branch_taken_0x1842e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1842e8) {
            ctx->pc = 0x1842ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1842E8u;
            // 0x1842ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x1842F0u;
label_1842f0:
    // 0x1842f0: 0xde1004  sllv        $v0, $fp, $a2
    ctx->pc = 0x1842f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 6) & 0x1F));
label_1842f4:
    // 0x1842f4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1842f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1842f8:
    // 0x1842f8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1842f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1842fc:
    // 0x1842fc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x1842fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_184300:
    // 0x184300: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x184300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_184304:
    // 0x184304: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x184304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_184308:
    // 0x184308: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x184308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18430c:
    // 0x18430c: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x18430cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_184310:
    // 0x184310: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x184310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_184314:
    // 0x184314: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x184314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_184318:
    // 0x184318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18431c:
    // 0x18431c: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_184320:
    if (ctx->pc == 0x184320u) {
        ctx->pc = 0x184320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18431Cu;
        // 0x184320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184324u;
        goto label_184324;
    }
    ctx->pc = 0x18431Cu;
    {
        const bool branch_taken_0x18431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18431c) {
            ctx->pc = 0x184320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18431Cu;
            // 0x184320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x184324u;
label_184324:
    // 0x184324: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x184324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_184328:
    // 0x184328: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_18432c:
    if (ctx->pc == 0x18432Cu) {
        ctx->pc = 0x18432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184328u;
        // 0x18432c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184330u;
        goto label_184330;
    }
    ctx->pc = 0x184328u;
    {
        const bool branch_taken_0x184328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184328) {
            ctx->pc = 0x18432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184328u;
            // 0x18432c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x184330u;
label_184330:
    // 0x184330: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x184330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_184334:
    // 0x184334: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_184338:
    // 0x184338: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x184338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18433c:
    // 0x18433c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184340:
    // 0x184340: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x184340u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_184344:
    // 0x184344: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x184344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
label_184348:
    // 0x184348: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x184348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18434c:
    // 0x18434c: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x18434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_184350:
    // 0x184350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x184350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184354:
    // 0x184354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184358:
    // 0x184358: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x184358u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18435c:
    // 0x18435c: 0x7fa600d0  sq          $a2, 0xD0($sp)
    ctx->pc = 0x18435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 6));
label_184360:
    // 0x184360: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x184360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_184364:
    // 0x184364: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x184364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_184368:
    // 0x184368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18436c:
    // 0x18436c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184370:
    // 0x184370: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x184370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_184374:
    // 0x184374: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x184374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_184378:
    // 0x184378: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x184378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_18437c:
    // 0x18437c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x18437cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_184380:
    // 0x184380: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x184380u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_184384:
    // 0x184384: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x184384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_184388:
    // 0x184388: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x184388u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_18438c:
    // 0x18438c: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x18438cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_184390:
    // 0x184390: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x184390u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_184394:
    // 0x184394: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x184394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_184398:
    // 0x184398: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x184398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_18439c:
    // 0x18439c: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x18439cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_1843a0:
    // 0x1843a0: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x1843a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1843a4:
    // 0x1843a4: 0x4a2c033c  vmove.w     $vf12, $vf0
    ctx->pc = 0x1843a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1843a8:
    // 0x1843a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1843a8u;
    // VWAITQ (Q already resolved in this runtime)
label_1843ac:
    // 0x1843ac: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1843acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1843b0:
    // 0x1843b0: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x1843b0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
label_1843b4:
    // 0x1843b4: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x1843b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_1843b8:
    // 0x1843b8: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x1843b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_1843bc:
    // 0x1843bc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1843bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1843c0:
    // 0x1843c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1843c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1843c4:
    // 0x1843c4: 0x0  nop
    ctx->pc = 0x1843c4u;
    // NOP
label_1843c8:
    // 0x1843c8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_1843cc:
    if (ctx->pc == 0x1843CCu) {
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843C8u;
        // 0x1843cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843D0u;
        goto label_1843d0;
    }
    ctx->pc = 0x1843C8u;
    {
        const bool branch_taken_0x1843c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1843c8) {
            ctx->pc = 0x1843CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1843C8u;
            // 0x1843cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x1843D0u;
label_1843d0:
    // 0x1843d0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1843d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1843d4:
    // 0x1843d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1843d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1843d8:
    // 0x1843d8: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x1843d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_1843dc:
    // 0x1843dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1843dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1843e0:
    // 0x1843e0: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x1843e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
label_1843e4:
    // 0x1843e4: 0xc060ee2  jal         func_183B88
label_1843e8:
    if (ctx->pc == 0x1843E8u) {
        ctx->pc = 0x1843E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843E4u;
        // 0x1843e8: 0x7fa90130  sq          $t1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843ECu;
        goto label_1843ec;
    }
    ctx->pc = 0x1843E4u;
    SET_GPR_U32(ctx, 31, 0x1843ECu);
    ctx->pc = 0x1843E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843E4u;
    // 0x1843e8: 0x7fa90130  sq          $t1, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B88u, 0x1843E4u, 0x1843ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843ECu;
label_1843ec:
    // 0x1843ec: 0x7ba70110  lq          $a3, 0x110($sp)
    ctx->pc = 0x1843ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1843f0:
    // 0x1843f0: 0x7ba80120  lq          $t0, 0x120($sp)
    ctx->pc = 0x1843f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1843f4:
    // 0x1843f4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1843f8:
    if (ctx->pc == 0x1843F8u) {
        ctx->pc = 0x1843F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843F4u;
        // 0x1843f8: 0x7ba90130  lq          $t1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843FCu;
        goto label_1843fc;
    }
    ctx->pc = 0x1843F4u;
    {
        const bool branch_taken_0x1843f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1843F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843F4u;
        // 0x1843f8: 0x7ba90130  lq          $t1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843f4) {
            ctx->pc = 0x184534u;
            goto label_184534;
        }
    }
    ctx->pc = 0x1843FCu;
label_1843fc:
    // 0x1843fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1843fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184400:
    // 0x184400: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x184400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_184404:
    // 0x184404: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_184408:
    if (ctx->pc == 0x184408u) {
        ctx->pc = 0x184408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184404u;
        // 0x184408: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18440Cu;
        goto label_18440c;
    }
    ctx->pc = 0x184404u;
    {
        const bool branch_taken_0x184404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184404u;
        // 0x184408: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184404) {
            ctx->pc = 0x1842C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1842c0;
        }
    }
    ctx->pc = 0x18440Cu;
label_18440c:
    // 0x18440c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18440cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_184410:
    // 0x184410: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x184410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_184414:
    // 0x184414: 0x5040ff94  beql        $v0, $zero, . + 4 + (-0x6C << 2)
label_184418:
    if (ctx->pc == 0x184418u) {
        ctx->pc = 0x184418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184414u;
        // 0x184418: 0x96420072  lhu         $v0, 0x72($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18441Cu;
        goto label_18441c;
    }
    ctx->pc = 0x184414u;
    {
        const bool branch_taken_0x184414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184414) {
            ctx->pc = 0x184418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184414u;
            // 0x184418: 0x96420072  lhu         $v0, 0x72($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184268;
        }
    }
    ctx->pc = 0x18441Cu;
label_18441c:
    // 0x18441c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18441cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_184420:
    // 0x184420: 0x134102b  sltu        $v0, $t1, $s4
    ctx->pc = 0x184420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_184424:
    // 0x184424: 0x5040ff8c  beql        $v0, $zero, . + 4 + (-0x74 << 2)
label_184428:
    if (ctx->pc == 0x184428u) {
        ctx->pc = 0x184428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184424u;
        // 0x184428: 0x8fb30088  lw          $s3, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18442Cu;
        goto label_18442c;
    }
    ctx->pc = 0x184424u;
    {
        const bool branch_taken_0x184424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184424) {
            ctx->pc = 0x184428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184424u;
            // 0x184428: 0x8fb30088  lw          $s3, 0x88($sp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184258;
        }
    }
    ctx->pc = 0x18442Cu;
label_18442c:
    // 0x18442c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_184430:
    // 0x184430: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x184430u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_184434:
    // 0x184434: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x184434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_184438:
    // 0x184438: 0x1040ff83  beqz        $v0, . + 4 + (-0x7D << 2)
label_18443c:
    if (ctx->pc == 0x18443Cu) {
        ctx->pc = 0x18443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184438u;
        // 0x18443c: 0x8fb40084  lw          $s4, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184440u;
        goto label_184440;
    }
    ctx->pc = 0x184438u;
    {
        const bool branch_taken_0x184438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184438u;
        // 0x18443c: 0x8fb40084  lw          $s4, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184438) {
            ctx->pc = 0x184248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184248;
        }
    }
    ctx->pc = 0x184440u;
label_184440:
    // 0x184440: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x184440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_184444:
    // 0x184444: 0x24031900  addiu       $v1, $zero, 0x1900
    ctx->pc = 0x184444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
label_184448:
    // 0x184448: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x184448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_18444c:
    // 0x18444c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18444cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184450:
    // 0x184450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_184454:
    // 0x184454: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x184454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184458:
    // 0x184458: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x184458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_18445c:
    // 0x18445c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184460:
    // 0x184460: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x184460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_184464:
    // 0x184464: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x184464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_184468:
    // 0x184468: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x184468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_18446c:
    // 0x18446c: 0x2e42821  addu        $a1, $s7, $a0
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_184470:
    // 0x184470: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x184470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_184474:
    // 0x184474: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x184474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_184478:
    // 0x184478: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18447c:
    // 0x18447c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184480:
    // 0x184480: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x184480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
label_184484:
    // 0x184484: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_184488:
    // 0x184488: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_18448c:
    if (ctx->pc == 0x18448Cu) {
        ctx->pc = 0x18448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184488u;
        // 0x18448c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184490u;
        goto label_184490;
    }
    ctx->pc = 0x184488u;
    {
        const bool branch_taken_0x184488 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184488u;
        // 0x18448c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184488) {
            ctx->pc = 0x1844BCu;
            goto label_1844bc;
        }
    }
    ctx->pc = 0x184490u;
label_184490:
    // 0x184490: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x184490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184494:
    // 0x184494: 0x0  nop
    ctx->pc = 0x184494u;
    // NOP
label_184498:
    // 0x184498: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x184498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_18449c:
    // 0x18449c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1844a0:
    // 0x1844a0: 0xc060ee2  jal         func_183B88
label_1844a4:
    if (ctx->pc == 0x1844A4u) {
        ctx->pc = 0x1844A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844A0u;
        // 0x1844a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844A8u;
        goto label_1844a8;
    }
    ctx->pc = 0x1844A0u;
    SET_GPR_U32(ctx, 31, 0x1844A8u);
    ctx->pc = 0x1844A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844A0u;
    // 0x1844a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B88u, 0x1844A0u, 0x1844A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844A8u;
label_1844a8:
    // 0x1844a8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1844ac:
    if (ctx->pc == 0x1844ACu) {
        ctx->pc = 0x1844ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844A8u;
        // 0x1844ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844B0u;
        goto label_1844b0;
    }
    ctx->pc = 0x1844A8u;
    {
        const bool branch_taken_0x1844a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1844ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844A8u;
        // 0x1844ac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844a8) {
            ctx->pc = 0x184534u;
            goto label_184534;
        }
    }
    ctx->pc = 0x1844B0u;
label_1844b0:
    // 0x1844b0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x1844b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1844b4:
    // 0x1844b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1844b8:
    if (ctx->pc == 0x1844B8u) {
        ctx->pc = 0x1844B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844B4u;
        // 0x1844b8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844BCu;
        goto label_1844bc;
    }
    ctx->pc = 0x1844B4u;
    {
        const bool branch_taken_0x1844b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1844B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844B4u;
        // 0x1844b8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844b4) {
            ctx->pc = 0x184498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184498;
        }
    }
    ctx->pc = 0x1844BCu;
label_1844bc:
    // 0x1844bc: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x1844bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1844c0:
    // 0x1844c0: 0x24031900  addiu       $v1, $zero, 0x1900
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
label_1844c4:
    // 0x1844c4: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1844c8:
    // 0x1844c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1844c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1844cc:
    // 0x1844cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1844ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1844d0:
    // 0x1844d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1844d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1844d4:
    // 0x1844d4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1844d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1844d8:
    // 0x1844d8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1844dc:
    // 0x1844dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1844dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1844e0:
    // 0x1844e0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1844e4:
    // 0x1844e4: 0x24843220  addiu       $a0, $a0, 0x3220
    ctx->pc = 0x1844e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12832));
label_1844e8:
    // 0x1844e8: 0x2e42821  addu        $a1, $s7, $a0
    ctx->pc = 0x1844e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_1844ec:
    // 0x1844ec: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1844ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1844f0:
    // 0x1844f0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1844f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1844f4:
    // 0x1844f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1844f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1844f8:
    // 0x1844f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1844f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1844fc:
    // 0x1844fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1844fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_184500:
    // 0x184500: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x184500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_184504:
    // 0x184504: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_184508:
    if (ctx->pc == 0x184508u) {
        ctx->pc = 0x184508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184504u;
        // 0x184508: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18450Cu;
        goto label_18450c;
    }
    ctx->pc = 0x184504u;
    {
        const bool branch_taken_0x184504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x184508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184504u;
        // 0x184508: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184504) {
            ctx->pc = 0x184534u;
            goto label_184534;
        }
    }
    ctx->pc = 0x18450Cu;
label_18450c:
    // 0x18450c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18450cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184510:
    // 0x184510: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_184514:
    // 0x184514: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x184514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_184518:
    // 0x184518: 0xc060ee2  jal         func_183B88
label_18451c:
    if (ctx->pc == 0x18451Cu) {
        ctx->pc = 0x18451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184518u;
        // 0x18451c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184520u;
        goto label_184520;
    }
    ctx->pc = 0x184518u;
    SET_GPR_U32(ctx, 31, 0x184520u);
    ctx->pc = 0x18451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184518u;
    // 0x18451c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B88u, 0x184518u, 0x184520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184520u;
label_184520:
    // 0x184520: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_184524:
    if (ctx->pc == 0x184524u) {
        ctx->pc = 0x184524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184520u;
        // 0x184524: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184528u;
        goto label_184528;
    }
    ctx->pc = 0x184520u;
    {
        const bool branch_taken_0x184520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184520u;
        // 0x184524: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184520) {
            ctx->pc = 0x184534u;
            goto label_184534;
        }
    }
    ctx->pc = 0x184528u;
label_184528:
    // 0x184528: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x184528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_18452c:
    // 0x18452c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_184530:
    if (ctx->pc == 0x184530u) {
        ctx->pc = 0x184530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18452Cu;
        // 0x184530: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184534u;
        goto label_184534;
    }
    ctx->pc = 0x18452Cu;
    {
        const bool branch_taken_0x18452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18452Cu;
        // 0x184530: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18452c) {
            ctx->pc = 0x184510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184510;
        }
    }
    ctx->pc = 0x184534u;
label_184534:
    // 0x184534: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x184534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_184538:
    // 0x184538: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x184538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_18453c:
    // 0x18453c: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x18453cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_184540:
    // 0x184540: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x184540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_184544:
    // 0x184544: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x184544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_184548:
    // 0x184548: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x184548u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_18454c:
    // 0x18454c: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x18454cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_184550:
    // 0x184550: 0x7bb70160  lq          $s7, 0x160($sp)
    ctx->pc = 0x184550u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_184554:
    // 0x184554: 0x7bbe0150  lq          $fp, 0x150($sp)
    ctx->pc = 0x184554u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_184558:
    // 0x184558: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x184558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_18455c:
    // 0x18455c: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x18455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184560:
    // 0x184560: 0x3e00008  jr          $ra
label_184564:
    if (ctx->pc == 0x184564u) {
        ctx->pc = 0x184564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184560u;
        // 0x184564: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184568u;
        goto label_fallthrough_0x184560;
    }
    ctx->pc = 0x184560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184560u;
        // 0x184564: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184560:
    ctx->pc = 0x184568u;
}
