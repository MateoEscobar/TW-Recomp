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

// Function: sub_00136F68
// Address: 0x136f68 - 0x1374d8
void sub_00136F68_0x136f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136F68_0x136f68");
#endif

    switch (ctx->pc) {
        case 0x136f68u: goto label_136f68;
        case 0x136f6cu: goto label_136f6c;
        case 0x136f70u: goto label_136f70;
        case 0x136f74u: goto label_136f74;
        case 0x136f78u: goto label_136f78;
        case 0x136f7cu: goto label_136f7c;
        case 0x136f80u: goto label_136f80;
        case 0x136f84u: goto label_136f84;
        case 0x136f88u: goto label_136f88;
        case 0x136f8cu: goto label_136f8c;
        case 0x136f90u: goto label_136f90;
        case 0x136f94u: goto label_136f94;
        case 0x136f98u: goto label_136f98;
        case 0x136f9cu: goto label_136f9c;
        case 0x136fa0u: goto label_136fa0;
        case 0x136fa4u: goto label_136fa4;
        case 0x136fa8u: goto label_136fa8;
        case 0x136facu: goto label_136fac;
        case 0x136fb0u: goto label_136fb0;
        case 0x136fb4u: goto label_136fb4;
        case 0x136fb8u: goto label_136fb8;
        case 0x136fbcu: goto label_136fbc;
        case 0x136fc0u: goto label_136fc0;
        case 0x136fc4u: goto label_136fc4;
        case 0x136fc8u: goto label_136fc8;
        case 0x136fccu: goto label_136fcc;
        case 0x136fd0u: goto label_136fd0;
        case 0x136fd4u: goto label_136fd4;
        case 0x136fd8u: goto label_136fd8;
        case 0x136fdcu: goto label_136fdc;
        case 0x136fe0u: goto label_136fe0;
        case 0x136fe4u: goto label_136fe4;
        case 0x136fe8u: goto label_136fe8;
        case 0x136fecu: goto label_136fec;
        case 0x136ff0u: goto label_136ff0;
        case 0x136ff4u: goto label_136ff4;
        case 0x136ff8u: goto label_136ff8;
        case 0x136ffcu: goto label_136ffc;
        case 0x137000u: goto label_137000;
        case 0x137004u: goto label_137004;
        case 0x137008u: goto label_137008;
        case 0x13700cu: goto label_13700c;
        case 0x137010u: goto label_137010;
        case 0x137014u: goto label_137014;
        case 0x137018u: goto label_137018;
        case 0x13701cu: goto label_13701c;
        case 0x137020u: goto label_137020;
        case 0x137024u: goto label_137024;
        case 0x137028u: goto label_137028;
        case 0x13702cu: goto label_13702c;
        case 0x137030u: goto label_137030;
        case 0x137034u: goto label_137034;
        case 0x137038u: goto label_137038;
        case 0x13703cu: goto label_13703c;
        case 0x137040u: goto label_137040;
        case 0x137044u: goto label_137044;
        case 0x137048u: goto label_137048;
        case 0x13704cu: goto label_13704c;
        case 0x137050u: goto label_137050;
        case 0x137054u: goto label_137054;
        case 0x137058u: goto label_137058;
        case 0x13705cu: goto label_13705c;
        case 0x137060u: goto label_137060;
        case 0x137064u: goto label_137064;
        case 0x137068u: goto label_137068;
        case 0x13706cu: goto label_13706c;
        case 0x137070u: goto label_137070;
        case 0x137074u: goto label_137074;
        case 0x137078u: goto label_137078;
        case 0x13707cu: goto label_13707c;
        case 0x137080u: goto label_137080;
        case 0x137084u: goto label_137084;
        case 0x137088u: goto label_137088;
        case 0x13708cu: goto label_13708c;
        case 0x137090u: goto label_137090;
        case 0x137094u: goto label_137094;
        case 0x137098u: goto label_137098;
        case 0x13709cu: goto label_13709c;
        case 0x1370a0u: goto label_1370a0;
        case 0x1370a4u: goto label_1370a4;
        case 0x1370a8u: goto label_1370a8;
        case 0x1370acu: goto label_1370ac;
        case 0x1370b0u: goto label_1370b0;
        case 0x1370b4u: goto label_1370b4;
        case 0x1370b8u: goto label_1370b8;
        case 0x1370bcu: goto label_1370bc;
        case 0x1370c0u: goto label_1370c0;
        case 0x1370c4u: goto label_1370c4;
        case 0x1370c8u: goto label_1370c8;
        case 0x1370ccu: goto label_1370cc;
        case 0x1370d0u: goto label_1370d0;
        case 0x1370d4u: goto label_1370d4;
        case 0x1370d8u: goto label_1370d8;
        case 0x1370dcu: goto label_1370dc;
        case 0x1370e0u: goto label_1370e0;
        case 0x1370e4u: goto label_1370e4;
        case 0x1370e8u: goto label_1370e8;
        case 0x1370ecu: goto label_1370ec;
        case 0x1370f0u: goto label_1370f0;
        case 0x1370f4u: goto label_1370f4;
        case 0x1370f8u: goto label_1370f8;
        case 0x1370fcu: goto label_1370fc;
        case 0x137100u: goto label_137100;
        case 0x137104u: goto label_137104;
        case 0x137108u: goto label_137108;
        case 0x13710cu: goto label_13710c;
        case 0x137110u: goto label_137110;
        case 0x137114u: goto label_137114;
        case 0x137118u: goto label_137118;
        case 0x13711cu: goto label_13711c;
        case 0x137120u: goto label_137120;
        case 0x137124u: goto label_137124;
        case 0x137128u: goto label_137128;
        case 0x13712cu: goto label_13712c;
        case 0x137130u: goto label_137130;
        case 0x137134u: goto label_137134;
        case 0x137138u: goto label_137138;
        case 0x13713cu: goto label_13713c;
        case 0x137140u: goto label_137140;
        case 0x137144u: goto label_137144;
        case 0x137148u: goto label_137148;
        case 0x13714cu: goto label_13714c;
        case 0x137150u: goto label_137150;
        case 0x137154u: goto label_137154;
        case 0x137158u: goto label_137158;
        case 0x13715cu: goto label_13715c;
        case 0x137160u: goto label_137160;
        case 0x137164u: goto label_137164;
        case 0x137168u: goto label_137168;
        case 0x13716cu: goto label_13716c;
        case 0x137170u: goto label_137170;
        case 0x137174u: goto label_137174;
        case 0x137178u: goto label_137178;
        case 0x13717cu: goto label_13717c;
        case 0x137180u: goto label_137180;
        case 0x137184u: goto label_137184;
        case 0x137188u: goto label_137188;
        case 0x13718cu: goto label_13718c;
        case 0x137190u: goto label_137190;
        case 0x137194u: goto label_137194;
        case 0x137198u: goto label_137198;
        case 0x13719cu: goto label_13719c;
        case 0x1371a0u: goto label_1371a0;
        case 0x1371a4u: goto label_1371a4;
        case 0x1371a8u: goto label_1371a8;
        case 0x1371acu: goto label_1371ac;
        case 0x1371b0u: goto label_1371b0;
        case 0x1371b4u: goto label_1371b4;
        case 0x1371b8u: goto label_1371b8;
        case 0x1371bcu: goto label_1371bc;
        case 0x1371c0u: goto label_1371c0;
        case 0x1371c4u: goto label_1371c4;
        case 0x1371c8u: goto label_1371c8;
        case 0x1371ccu: goto label_1371cc;
        case 0x1371d0u: goto label_1371d0;
        case 0x1371d4u: goto label_1371d4;
        case 0x1371d8u: goto label_1371d8;
        case 0x1371dcu: goto label_1371dc;
        case 0x1371e0u: goto label_1371e0;
        case 0x1371e4u: goto label_1371e4;
        case 0x1371e8u: goto label_1371e8;
        case 0x1371ecu: goto label_1371ec;
        case 0x1371f0u: goto label_1371f0;
        case 0x1371f4u: goto label_1371f4;
        case 0x1371f8u: goto label_1371f8;
        case 0x1371fcu: goto label_1371fc;
        case 0x137200u: goto label_137200;
        case 0x137204u: goto label_137204;
        case 0x137208u: goto label_137208;
        case 0x13720cu: goto label_13720c;
        case 0x137210u: goto label_137210;
        case 0x137214u: goto label_137214;
        case 0x137218u: goto label_137218;
        case 0x13721cu: goto label_13721c;
        case 0x137220u: goto label_137220;
        case 0x137224u: goto label_137224;
        case 0x137228u: goto label_137228;
        case 0x13722cu: goto label_13722c;
        case 0x137230u: goto label_137230;
        case 0x137234u: goto label_137234;
        case 0x137238u: goto label_137238;
        case 0x13723cu: goto label_13723c;
        case 0x137240u: goto label_137240;
        case 0x137244u: goto label_137244;
        case 0x137248u: goto label_137248;
        case 0x13724cu: goto label_13724c;
        case 0x137250u: goto label_137250;
        case 0x137254u: goto label_137254;
        case 0x137258u: goto label_137258;
        case 0x13725cu: goto label_13725c;
        case 0x137260u: goto label_137260;
        case 0x137264u: goto label_137264;
        case 0x137268u: goto label_137268;
        case 0x13726cu: goto label_13726c;
        case 0x137270u: goto label_137270;
        case 0x137274u: goto label_137274;
        case 0x137278u: goto label_137278;
        case 0x13727cu: goto label_13727c;
        case 0x137280u: goto label_137280;
        case 0x137284u: goto label_137284;
        case 0x137288u: goto label_137288;
        case 0x13728cu: goto label_13728c;
        case 0x137290u: goto label_137290;
        case 0x137294u: goto label_137294;
        case 0x137298u: goto label_137298;
        case 0x13729cu: goto label_13729c;
        case 0x1372a0u: goto label_1372a0;
        case 0x1372a4u: goto label_1372a4;
        case 0x1372a8u: goto label_1372a8;
        case 0x1372acu: goto label_1372ac;
        case 0x1372b0u: goto label_1372b0;
        case 0x1372b4u: goto label_1372b4;
        case 0x1372b8u: goto label_1372b8;
        case 0x1372bcu: goto label_1372bc;
        case 0x1372c0u: goto label_1372c0;
        case 0x1372c4u: goto label_1372c4;
        case 0x1372c8u: goto label_1372c8;
        case 0x1372ccu: goto label_1372cc;
        case 0x1372d0u: goto label_1372d0;
        case 0x1372d4u: goto label_1372d4;
        case 0x1372d8u: goto label_1372d8;
        case 0x1372dcu: goto label_1372dc;
        case 0x1372e0u: goto label_1372e0;
        case 0x1372e4u: goto label_1372e4;
        case 0x1372e8u: goto label_1372e8;
        case 0x1372ecu: goto label_1372ec;
        case 0x1372f0u: goto label_1372f0;
        case 0x1372f4u: goto label_1372f4;
        case 0x1372f8u: goto label_1372f8;
        case 0x1372fcu: goto label_1372fc;
        case 0x137300u: goto label_137300;
        case 0x137304u: goto label_137304;
        case 0x137308u: goto label_137308;
        case 0x13730cu: goto label_13730c;
        case 0x137310u: goto label_137310;
        case 0x137314u: goto label_137314;
        case 0x137318u: goto label_137318;
        case 0x13731cu: goto label_13731c;
        case 0x137320u: goto label_137320;
        case 0x137324u: goto label_137324;
        case 0x137328u: goto label_137328;
        case 0x13732cu: goto label_13732c;
        case 0x137330u: goto label_137330;
        case 0x137334u: goto label_137334;
        case 0x137338u: goto label_137338;
        case 0x13733cu: goto label_13733c;
        case 0x137340u: goto label_137340;
        case 0x137344u: goto label_137344;
        case 0x137348u: goto label_137348;
        case 0x13734cu: goto label_13734c;
        case 0x137350u: goto label_137350;
        case 0x137354u: goto label_137354;
        case 0x137358u: goto label_137358;
        case 0x13735cu: goto label_13735c;
        case 0x137360u: goto label_137360;
        case 0x137364u: goto label_137364;
        case 0x137368u: goto label_137368;
        case 0x13736cu: goto label_13736c;
        case 0x137370u: goto label_137370;
        case 0x137374u: goto label_137374;
        case 0x137378u: goto label_137378;
        case 0x13737cu: goto label_13737c;
        case 0x137380u: goto label_137380;
        case 0x137384u: goto label_137384;
        case 0x137388u: goto label_137388;
        case 0x13738cu: goto label_13738c;
        case 0x137390u: goto label_137390;
        case 0x137394u: goto label_137394;
        case 0x137398u: goto label_137398;
        case 0x13739cu: goto label_13739c;
        case 0x1373a0u: goto label_1373a0;
        case 0x1373a4u: goto label_1373a4;
        case 0x1373a8u: goto label_1373a8;
        case 0x1373acu: goto label_1373ac;
        case 0x1373b0u: goto label_1373b0;
        case 0x1373b4u: goto label_1373b4;
        case 0x1373b8u: goto label_1373b8;
        case 0x1373bcu: goto label_1373bc;
        case 0x1373c0u: goto label_1373c0;
        case 0x1373c4u: goto label_1373c4;
        case 0x1373c8u: goto label_1373c8;
        case 0x1373ccu: goto label_1373cc;
        case 0x1373d0u: goto label_1373d0;
        case 0x1373d4u: goto label_1373d4;
        case 0x1373d8u: goto label_1373d8;
        case 0x1373dcu: goto label_1373dc;
        case 0x1373e0u: goto label_1373e0;
        case 0x1373e4u: goto label_1373e4;
        case 0x1373e8u: goto label_1373e8;
        case 0x1373ecu: goto label_1373ec;
        case 0x1373f0u: goto label_1373f0;
        case 0x1373f4u: goto label_1373f4;
        case 0x1373f8u: goto label_1373f8;
        case 0x1373fcu: goto label_1373fc;
        case 0x137400u: goto label_137400;
        case 0x137404u: goto label_137404;
        case 0x137408u: goto label_137408;
        case 0x13740cu: goto label_13740c;
        case 0x137410u: goto label_137410;
        case 0x137414u: goto label_137414;
        case 0x137418u: goto label_137418;
        case 0x13741cu: goto label_13741c;
        case 0x137420u: goto label_137420;
        case 0x137424u: goto label_137424;
        case 0x137428u: goto label_137428;
        case 0x13742cu: goto label_13742c;
        case 0x137430u: goto label_137430;
        case 0x137434u: goto label_137434;
        case 0x137438u: goto label_137438;
        case 0x13743cu: goto label_13743c;
        case 0x137440u: goto label_137440;
        case 0x137444u: goto label_137444;
        case 0x137448u: goto label_137448;
        case 0x13744cu: goto label_13744c;
        case 0x137450u: goto label_137450;
        case 0x137454u: goto label_137454;
        case 0x137458u: goto label_137458;
        case 0x13745cu: goto label_13745c;
        case 0x137460u: goto label_137460;
        case 0x137464u: goto label_137464;
        case 0x137468u: goto label_137468;
        case 0x13746cu: goto label_13746c;
        case 0x137470u: goto label_137470;
        case 0x137474u: goto label_137474;
        case 0x137478u: goto label_137478;
        case 0x13747cu: goto label_13747c;
        case 0x137480u: goto label_137480;
        case 0x137484u: goto label_137484;
        case 0x137488u: goto label_137488;
        case 0x13748cu: goto label_13748c;
        case 0x137490u: goto label_137490;
        case 0x137494u: goto label_137494;
        case 0x137498u: goto label_137498;
        case 0x13749cu: goto label_13749c;
        case 0x1374a0u: goto label_1374a0;
        case 0x1374a4u: goto label_1374a4;
        case 0x1374a8u: goto label_1374a8;
        case 0x1374acu: goto label_1374ac;
        case 0x1374b0u: goto label_1374b0;
        case 0x1374b4u: goto label_1374b4;
        case 0x1374b8u: goto label_1374b8;
        case 0x1374bcu: goto label_1374bc;
        case 0x1374c0u: goto label_1374c0;
        case 0x1374c4u: goto label_1374c4;
        case 0x1374c8u: goto label_1374c8;
        case 0x1374ccu: goto label_1374cc;
        case 0x1374d0u: goto label_1374d0;
        case 0x1374d4u: goto label_1374d4;
        default: break;
    }

    ctx->pc = 0x136f68u;

label_136f68:
    // 0x136f68: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x136f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_136f6c:
    // 0x136f6c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x136f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_136f70:
    // 0x136f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x136f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136f74:
    // 0x136f74: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x136f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_136f78:
    // 0x136f78: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x136f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_136f7c:
    // 0x136f7c: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x136f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_136f80:
    // 0x136f80: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x136f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_136f84:
    // 0x136f84: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x136f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_136f88:
    // 0x136f88: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x136f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_136f8c:
    // 0x136f8c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x136f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_136f90:
    // 0x136f90: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x136f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_136f94:
    // 0x136f94: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x136f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_136f98:
    // 0x136f98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x136f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_136f9c:
    // 0x136f9c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x136f9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_136fa0:
    // 0x136fa0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x136fa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_136fa4:
    // 0x136fa4: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x136fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_136fa8:
    // 0x136fa8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x136fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_136fac:
    // 0x136fac: 0xc0e4080  jal         func_390200
label_136fb0:
    if (ctx->pc == 0x136FB0u) {
        ctx->pc = 0x136FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FACu;
        // 0x136fb0: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FB4u;
        goto label_136fb4;
    }
    ctx->pc = 0x136FACu;
    SET_GPR_U32(ctx, 31, 0x136FB4u);
    ctx->pc = 0x136FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FACu;
    // 0x136fb0: 0xafa60084  sw          $a2, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x136FACu, 0x136FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FB4u;
label_136fb4:
    // 0x136fb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x136fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136fb8:
    // 0x136fb8: 0xc0e409a  jal         func_390268
label_136fbc:
    if (ctx->pc == 0x136FBCu) {
        ctx->pc = 0x136FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FB8u;
        // 0x136fbc: 0x264401e4  addiu       $a0, $s2, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FC0u;
        goto label_136fc0;
    }
    ctx->pc = 0x136FB8u;
    SET_GPR_U32(ctx, 31, 0x136FC0u);
    ctx->pc = 0x136FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FB8u;
    // 0x136fbc: 0x264401e4  addiu       $a0, $s2, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x136FB8u, 0x136FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_136fc4:
    if (ctx->pc == 0x136FC4u) {
        ctx->pc = 0x136FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FC0u;
        // 0x136fc4: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FC8u;
        goto label_136fc8;
    }
    ctx->pc = 0x136FC0u;
    {
        const bool branch_taken_0x136fc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FC0u;
        // 0x136fc4: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fc0) {
            ctx->pc = 0x136FDCu;
            goto label_136fdc;
        }
    }
    ctx->pc = 0x136FC8u;
label_136fc8:
    // 0x136fc8: 0xc0e2612  jal         func_389848
label_136fcc:
    if (ctx->pc == 0x136FCCu) {
        ctx->pc = 0x136FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FC8u;
        // 0x136fcc: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FD0u;
        goto label_136fd0;
    }
    ctx->pc = 0x136FC8u;
    SET_GPR_U32(ctx, 31, 0x136FD0u);
    ctx->pc = 0x136FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FC8u;
    // 0x136fcc: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x136FC8u, 0x136FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FD0u;
label_136fd0:
    // 0x136fd0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x136fd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136fd4:
    // 0x136fd4: 0x16c00021  bnez        $s6, . + 4 + (0x21 << 2)
label_136fd8:
    if (ctx->pc == 0x136FD8u) {
        ctx->pc = 0x136FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FD4u;
        // 0x136fd8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FDCu;
        goto label_136fdc;
    }
    ctx->pc = 0x136FD4u;
    {
        const bool branch_taken_0x136fd4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x136FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FD4u;
        // 0x136fd8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fd4) {
            ctx->pc = 0x13705Cu;
            goto label_13705c;
        }
    }
    ctx->pc = 0x136FDCu;
label_136fdc:
    // 0x136fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136fe0:
    // 0x136fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136fe4:
    // 0x136fe4: 0x1000012d  b           . + 4 + (0x12D << 2)
label_136fe8:
    if (ctx->pc == 0x136FE8u) {
        ctx->pc = 0x136FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FE4u;
        // 0x136fe8: 0xae430258  sw          $v1, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FECu;
        goto label_136fec;
    }
    ctx->pc = 0x136FE4u;
    {
        const bool branch_taken_0x136fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FE4u;
        // 0x136fe8: 0xae430258  sw          $v1, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fe4) {
            ctx->pc = 0x13749Cu;
            goto label_13749c;
        }
    }
    ctx->pc = 0x136FECu;
label_136fec:
    // 0x136fec: 0xc64c0254  lwc1        $f12, 0x254($s2)
    ctx->pc = 0x136fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136ff0:
    // 0x136ff0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_136ff4:
    // 0x136ff4: 0xc136b24  jal         func_4DAC90
label_136ff8:
    if (ctx->pc == 0x136FF8u) {
        ctx->pc = 0x136FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FF4u;
        // 0x136ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FFCu;
        goto label_136ffc;
    }
    ctx->pc = 0x136FF4u;
    SET_GPR_U32(ctx, 31, 0x136FFCu);
    ctx->pc = 0x136FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FF4u;
    // 0x136ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136FF4u, 0x136FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FFCu;
label_136ffc:
    // 0x136ffc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x136ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137000:
    // 0x137000: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137004:
    // 0x137004: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137008:
    // 0x137008: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x137008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13700c:
    // 0x13700c: 0xc136b18  jal         func_4DAC60
label_137010:
    if (ctx->pc == 0x137010u) {
        ctx->pc = 0x137010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13700Cu;
        // 0x137010: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137014u;
        goto label_137014;
    }
    ctx->pc = 0x13700Cu;
    SET_GPR_U32(ctx, 31, 0x137014u);
    ctx->pc = 0x137010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13700Cu;
    // 0x137010: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13700Cu, 0x137014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137014u;
label_137014:
    // 0x137014: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x137014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137018:
    // 0x137018: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x137018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13701c:
    // 0x13701c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_137020:
    // 0x137020: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x137020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_137024:
    // 0x137024: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x137024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_137028:
    // 0x137028: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x137028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_13702c:
    // 0x13702c: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_137030:
    // 0x137030: 0x40f809  jalr        $v0
label_137034:
    if (ctx->pc == 0x137034u) {
        ctx->pc = 0x137034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137030u;
        // 0x137034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137038u;
        goto label_137038;
    }
    ctx->pc = 0x137030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137038u);
        ctx->pc = 0x137034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137030u;
        // 0x137034: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137030u, 0x137038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137038u;
label_137038:
    // 0x137038: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x137038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13703c:
    // 0x13703c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13703cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_137040:
    // 0x137040: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_137044:
    // 0x137044: 0x40f809  jalr        $v0
label_137048:
    if (ctx->pc == 0x137048u) {
        ctx->pc = 0x137048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137044u;
        // 0x137048: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13704Cu;
        goto label_13704c;
    }
    ctx->pc = 0x137044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13704Cu);
        ctx->pc = 0x137048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137044u;
        // 0x137048: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137044u, 0x13704Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13704Cu;
label_13704c:
    // 0x13704c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13704cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_137050:
    // 0x137050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137054:
    // 0x137054: 0x10000111  b           . + 4 + (0x111 << 2)
label_137058:
    if (ctx->pc == 0x137058u) {
        ctx->pc = 0x137058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137054u;
        // 0x137058: 0x7e4301f0  sq          $v1, 0x1F0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13705Cu;
        goto label_13705c;
    }
    ctx->pc = 0x137054u;
    {
        const bool branch_taken_0x137054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137054u;
        // 0x137058: 0x7e4301f0  sq          $v1, 0x1F0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137054) {
            ctx->pc = 0x13749Cu;
            goto label_13749c;
        }
    }
    ctx->pc = 0x13705Cu;
label_13705c:
    // 0x13705c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_137060:
    // 0x137060: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x137060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_137064:
    // 0x137064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137068:
    // 0x137068: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x137068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13706c:
    // 0x13706c: 0xc136b24  jal         func_4DAC90
label_137070:
    if (ctx->pc == 0x137070u) {
        ctx->pc = 0x137070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13706Cu;
        // 0x137070: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137074u;
        goto label_137074;
    }
    ctx->pc = 0x13706Cu;
    SET_GPR_U32(ctx, 31, 0x137074u);
    ctx->pc = 0x137070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13706Cu;
    // 0x137070: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13706Cu, 0x137074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137074u;
label_137074:
    // 0x137074: 0x26b00010  addiu       $s0, $s5, 0x10
    ctx->pc = 0x137074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_137078:
    // 0x137078: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13707c:
    // 0x13707c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_137080:
    // 0x137080: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x137080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_137084:
    // 0x137084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137088:
    // 0x137088: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x137088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13708c:
    // 0x13708c: 0xc136b18  jal         func_4DAC60
label_137090:
    if (ctx->pc == 0x137090u) {
        ctx->pc = 0x137090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13708Cu;
        // 0x137090: 0x26d10020  addiu       $s1, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137094u;
        goto label_137094;
    }
    ctx->pc = 0x13708Cu;
    SET_GPR_U32(ctx, 31, 0x137094u);
    ctx->pc = 0x137090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13708Cu;
    // 0x137090: 0x26d10020  addiu       $s1, $s6, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13708Cu, 0x137094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137094u;
label_137094:
    // 0x137094: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x137094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_137098:
    // 0x137098: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13709c:
    // 0x13709c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1370a0:
    // 0x1370a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1370a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1370a4:
    // 0x1370a4: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1370a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1370a8:
    // 0x1370a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1370a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1370ac:
    // 0x1370ac: 0xc0cd8c2  jal         func_336308
label_1370b0:
    if (ctx->pc == 0x1370B0u) {
        ctx->pc = 0x1370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370ACu;
        // 0x1370b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370B4u;
        goto label_1370b4;
    }
    ctx->pc = 0x1370ACu;
    SET_GPR_U32(ctx, 31, 0x1370B4u);
    ctx->pc = 0x1370B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370ACu;
    // 0x1370b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x1370ACu, 0x1370B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370B4u;
label_1370b4:
    // 0x1370b4: 0x26530220  addiu       $s3, $s2, 0x220
    ctx->pc = 0x1370b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1370b8:
    // 0x1370b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1370b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1370bc:
    // 0x1370bc: 0xc0cd8ec  jal         func_3363B0
label_1370c0:
    if (ctx->pc == 0x1370C0u) {
        ctx->pc = 0x1370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370BCu;
        // 0x1370c0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370C4u;
        goto label_1370c4;
    }
    ctx->pc = 0x1370BCu;
    SET_GPR_U32(ctx, 31, 0x1370C4u);
    ctx->pc = 0x1370C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370BCu;
    // 0x1370c0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1370BCu, 0x1370C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370C4u;
label_1370c4:
    // 0x1370c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1370c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1370c8:
    // 0x1370c8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1370c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1370cc:
    // 0x1370cc: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x1370ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1370d0:
    // 0x1370d0: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_1370d4:
    // 0x1370d4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1370d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1370d8:
    // 0x1370d8: 0x8cc60048  lw          $a2, 0x48($a2)
    ctx->pc = 0x1370d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_1370dc:
    // 0x1370dc: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x1370dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
label_1370e0:
    // 0x1370e0: 0xc0cd4ee  jal         func_3353B8
label_1370e4:
    if (ctx->pc == 0x1370E4u) {
        ctx->pc = 0x1370E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370E0u;
        // 0x1370e4: 0x7e430210  sq          $v1, 0x210($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 528), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370E8u;
        goto label_1370e8;
    }
    ctx->pc = 0x1370E0u;
    SET_GPR_U32(ctx, 31, 0x1370E8u);
    ctx->pc = 0x1370E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370E0u;
    // 0x1370e4: 0x7e430210  sq          $v1, 0x210($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 528), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x1370E0u, 0x1370E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370E8u;
label_1370e8:
    // 0x1370e8: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1370e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1370ec:
    // 0x1370ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1370ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1370f0:
    // 0x1370f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1370f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1370f4:
    // 0x1370f4: 0x0  nop
    ctx->pc = 0x1370f4u;
    // NOP
label_1370f8:
    // 0x1370f8: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x1370f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_1370fc:
    // 0x1370fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1370fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_137100:
    // 0x137100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137104:
    // 0x137104: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x137104u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_137108:
    // 0x137108: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
label_13710c:
    if (ctx->pc == 0x13710Cu) {
        ctx->pc = 0x13710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137108u;
        // 0x13710c: 0xe64c0254  swc1        $f12, 0x254($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 596), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137110u;
        goto label_137110;
    }
    ctx->pc = 0x137108u;
    {
        const bool branch_taken_0x137108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137108u;
        // 0x13710c: 0xe64c0254  swc1        $f12, 0x254($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 596), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137108) {
            ctx->pc = 0x1372F8u;
            goto label_1372f8;
        }
    }
    ctx->pc = 0x137110u;
label_137110:
    // 0x137110: 0x27d0b888  addiu       $s0, $fp, -0x4778
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949000));
label_137114:
    // 0x137114: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_137118:
    // 0x137118: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x137118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_13711c:
    // 0x13711c: 0xc0cd508  jal         func_335420
label_137120:
    if (ctx->pc == 0x137120u) {
        ctx->pc = 0x137120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13711Cu;
        // 0x137120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137124u;
        goto label_137124;
    }
    ctx->pc = 0x13711Cu;
    SET_GPR_U32(ctx, 31, 0x137124u);
    ctx->pc = 0x137120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13711Cu;
    // 0x137120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x13711Cu, 0x137124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137124u;
label_137124:
    // 0x137124: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x137124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_137128:
    // 0x137128: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x137128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_13712c:
    // 0x13712c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13712cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137130:
    // 0x137130: 0x2e230050  sltiu       $v1, $s1, 0x50
    ctx->pc = 0x137130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_137134:
    // 0x137134: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_137138:
    // 0x137138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13713c:
    // 0x13713c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13713cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_137140:
    // 0x137140: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x137140u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_137144:
    // 0x137144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137148:
    // 0x137148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13714c:
    // 0x13714c: 0xc0cd4fc  jal         func_3353F0
label_137150:
    if (ctx->pc == 0x137150u) {
        ctx->pc = 0x137150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13714Cu;
        // 0x137150: 0xe6400244  swc1        $f0, 0x244($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137154u;
        goto label_137154;
    }
    ctx->pc = 0x13714Cu;
    SET_GPR_U32(ctx, 31, 0x137154u);
    ctx->pc = 0x137150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13714Cu;
    // 0x137150: 0xe6400244  swc1        $f0, 0x244($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x13714Cu, 0x137154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137154u;
label_137154:
    // 0x137154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137158:
    // 0x137158: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x137158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_13715c:
    // 0x13715c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_137160:
    if (ctx->pc == 0x137160u) {
        ctx->pc = 0x137160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13715Cu;
        // 0x137160: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137164u;
        goto label_137164;
    }
    ctx->pc = 0x13715Cu;
    {
        const bool branch_taken_0x13715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13715Cu;
        // 0x137160: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13715c) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x137164u;
label_137164:
    // 0x137164: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_137168:
    // 0x137168: 0x24428e80  addiu       $v0, $v0, -0x7180
    ctx->pc = 0x137168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938240));
label_13716c:
    // 0x13716c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_137170:
    // 0x137170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x137170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_137174:
    // 0x137174: 0x800008  jr          $a0
label_137178:
    if (ctx->pc == 0x137178u) {
        ctx->pc = 0x13717Cu;
        goto label_13717c;
    }
    ctx->pc = 0x137174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13717Cu: goto label_13717c;
            case 0x137190u: goto label_137190;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371F4u: goto label_1371f4;
            case 0x137208u: goto label_137208;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137174u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13717Cu;
label_13717c:
    // 0x13717c: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x13717cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_137180:
    // 0x137180: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x137180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_137184:
    // 0x137184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137188:
    // 0x137188: 0x10000024  b           . + 4 + (0x24 << 2)
label_13718c:
    if (ctx->pc == 0x13718Cu) {
        ctx->pc = 0x13718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137188u;
        // 0x13718c: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137190u;
        goto label_137190;
    }
    ctx->pc = 0x137188u;
    {
        const bool branch_taken_0x137188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137188u;
        // 0x13718c: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137188) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x137190u;
label_137190:
    // 0x137190: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x137190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
label_137194:
    // 0x137194: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x137194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_137198:
    // 0x137198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13719c:
    // 0x13719c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1371a0:
    if (ctx->pc == 0x1371A0u) {
        ctx->pc = 0x1371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13719Cu;
        // 0x1371a0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1371A4u;
        goto label_1371a4;
    }
    ctx->pc = 0x13719Cu;
    {
        const bool branch_taken_0x13719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13719Cu;
        // 0x1371a0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13719c) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x1371A4u;
label_1371a4:
    // 0x1371a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1371a8:
    // 0x1371a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1371a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1371ac:
    // 0x1371ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1371acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1371b0:
    // 0x1371b0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1371b4:
    if (ctx->pc == 0x1371B4u) {
        ctx->pc = 0x1371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371B0u;
        // 0x1371b4: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1371B8u;
        goto label_1371b8;
    }
    ctx->pc = 0x1371B0u;
    {
        const bool branch_taken_0x1371b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371B0u;
        // 0x1371b4: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371b0) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x1371B8u;
label_1371b8:
    // 0x1371b8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_1371bc:
    // 0x1371bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1371bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1371c0:
    // 0x1371c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1371c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1371c4:
    // 0x1371c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1371c8:
    if (ctx->pc == 0x1371C8u) {
        ctx->pc = 0x1371C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371C4u;
        // 0x1371c8: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1371CCu;
        goto label_1371cc;
    }
    ctx->pc = 0x1371C4u;
    {
        const bool branch_taken_0x1371c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371C4u;
        // 0x1371c8: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371c4) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x1371CCu;
label_1371cc:
    // 0x1371cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1371ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1371d0:
    // 0x1371d0: 0x342174cc  ori         $at, $at, 0x74CC
    ctx->pc = 0x1371d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29900);
label_1371d4:
    // 0x1371d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1371d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1371d8:
    // 0x1371d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1371dc:
    if (ctx->pc == 0x1371DCu) {
        ctx->pc = 0x1371DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D8u;
        // 0x1371dc: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1371E0u;
        goto label_1371e0;
    }
    ctx->pc = 0x1371D8u;
    {
        const bool branch_taken_0x1371d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D8u;
        // 0x1371dc: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d8) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x1371E0u;
label_1371e0:
    // 0x1371e0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1371e4:
    // 0x1371e4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1371e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1371e8:
    // 0x1371e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1371e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1371ec:
    // 0x1371ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1371f0:
    if (ctx->pc == 0x1371F0u) {
        ctx->pc = 0x1371F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371ECu;
        // 0x1371f0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1371F4u;
        goto label_1371f4;
    }
    ctx->pc = 0x1371ECu;
    {
        const bool branch_taken_0x1371ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371ECu;
        // 0x1371f0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371ec) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x1371F4u;
label_1371f4:
    // 0x1371f4: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x1371f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
label_1371f8:
    // 0x1371f8: 0x34218d37  ori         $at, $at, 0x8D37
    ctx->pc = 0x1371f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36151);
label_1371fc:
    // 0x1371fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1371fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137200:
    // 0x137200: 0x10000006  b           . + 4 + (0x6 << 2)
label_137204:
    if (ctx->pc == 0x137204u) {
        ctx->pc = 0x137204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137200u;
        // 0x137204: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137208u;
        goto label_137208;
    }
    ctx->pc = 0x137200u;
    {
        const bool branch_taken_0x137200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137200u;
        // 0x137204: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137200) {
            ctx->pc = 0x13721Cu;
            goto label_13721c;
        }
    }
    ctx->pc = 0x137208u;
label_137208:
    // 0x137208: 0x3c013f56  lui         $at, 0x3F56
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16214 << 16));
label_13720c:
    // 0x13720c: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x13720cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_137210:
    // 0x137210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137214:
    // 0x137214: 0x0  nop
    ctx->pc = 0x137214u;
    // NOP
label_137218:
    // 0x137218: 0xe640024c  swc1        $f0, 0x24C($s2)
    ctx->pc = 0x137218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_13721c:
    // 0x13721c: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x13721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137220:
    // 0x137220: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x137220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
label_137224:
    // 0x137224: 0x34212038  ori         $at, $at, 0x2038
    ctx->pc = 0x137224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8248);
label_137228:
    // 0x137228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13722c:
    // 0x13722c: 0x0  nop
    ctx->pc = 0x13722cu;
    // NOP
label_137230:
    // 0x137230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137234:
    // 0x137234: 0x0  nop
    ctx->pc = 0x137234u;
    // NOP
label_137238:
    // 0x137238: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_13723c:
    if (ctx->pc == 0x13723Cu) {
        ctx->pc = 0x13723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137238u;
        // 0x13723c: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137240u;
        goto label_137240;
    }
    ctx->pc = 0x137238u;
    {
        const bool branch_taken_0x137238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137238) {
            ctx->pc = 0x13723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137238u;
            // 0x13723c: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x137240u;
label_137240:
    // 0x137240: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x137240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_137244:
    // 0x137244: 0x342169b9  ori         $at, $at, 0x69B9
    ctx->pc = 0x137244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27065);
label_137248:
    // 0x137248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13724c:
    // 0x13724c: 0x0  nop
    ctx->pc = 0x13724cu;
    // NOP
label_137250:
    // 0x137250: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137254:
    // 0x137254: 0x0  nop
    ctx->pc = 0x137254u;
    // NOP
label_137258:
    // 0x137258: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_13725c:
    if (ctx->pc == 0x13725Cu) {
        ctx->pc = 0x13725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137258u;
        // 0x13725c: 0x27c4b888  addiu       $a0, $fp, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137260u;
        goto label_137260;
    }
    ctx->pc = 0x137258u;
    {
        const bool branch_taken_0x137258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137258u;
        // 0x13725c: 0x27c4b888  addiu       $a0, $fp, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137258) {
            ctx->pc = 0x137268u;
            goto label_137268;
        }
    }
    ctx->pc = 0x137260u;
label_137260:
    // 0x137260: 0x1000001d  b           . + 4 + (0x1D << 2)
label_137264:
    if (ctx->pc == 0x137264u) {
        ctx->pc = 0x137264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137260u;
        // 0x137264: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137268u;
        goto label_137268;
    }
    ctx->pc = 0x137260u;
    {
        const bool branch_taken_0x137260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137260u;
        // 0x137264: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137260) {
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x137268u;
label_137268:
    // 0x137268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13726c:
    // 0x13726c: 0xc0cd4fc  jal         func_3353F0
label_137270:
    if (ctx->pc == 0x137270u) {
        ctx->pc = 0x137270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13726Cu;
        // 0x137270: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137274u;
        goto label_137274;
    }
    ctx->pc = 0x13726Cu;
    SET_GPR_U32(ctx, 31, 0x137274u);
    ctx->pc = 0x137270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13726Cu;
    // 0x137270: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x13726Cu, 0x137274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137274u;
label_137274:
    // 0x137274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137278:
    // 0x137278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13727c:
    // 0x13727c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
label_137280:
    if (ctx->pc == 0x137280u) {
        ctx->pc = 0x137284u;
        goto label_137284;
    }
    ctx->pc = 0x13727Cu;
    {
        const bool branch_taken_0x13727c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13727c) {
            ctx->pc = 0x1372B0u;
            goto label_1372b0;
        }
    }
    ctx->pc = 0x137284u;
label_137284:
    // 0x137284: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_137288:
    if (ctx->pc == 0x137288u) {
        ctx->pc = 0x137288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137284u;
        // 0x137288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13728Cu;
        goto label_13728c;
    }
    ctx->pc = 0x137284u;
    {
        const bool branch_taken_0x137284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x137288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137284u;
        // 0x137288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137284) {
            ctx->pc = 0x13729Cu;
            goto label_13729c;
        }
    }
    ctx->pc = 0x13728Cu;
label_13728c:
    // 0x13728c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_137290:
    if (ctx->pc == 0x137290u) {
        ctx->pc = 0x137290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13728Cu;
        // 0x137290: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137294u;
        goto label_137294;
    }
    ctx->pc = 0x13728Cu;
    {
        const bool branch_taken_0x13728c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x137290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13728Cu;
        // 0x137290: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13728c) {
            ctx->pc = 0x1372C4u;
            goto label_1372c4;
        }
    }
    ctx->pc = 0x137294u;
label_137294:
    // 0x137294: 0x10000012  b           . + 4 + (0x12 << 2)
label_137298:
    if (ctx->pc == 0x137298u) {
        ctx->pc = 0x137298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137294u;
        // 0x137298: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13729Cu;
        goto label_13729c;
    }
    ctx->pc = 0x137294u;
    {
        const bool branch_taken_0x137294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137294u;
        // 0x137298: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137294) {
            ctx->pc = 0x1372E0u;
            goto label_1372e0;
        }
    }
    ctx->pc = 0x13729Cu;
label_13729c:
    // 0x13729c: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x13729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1372a0:
    // 0x1372a0: 0x3421ce82  ori         $at, $at, 0xCE82
    ctx->pc = 0x1372a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52866);
label_1372a4:
    // 0x1372a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1372a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1372a8:
    // 0x1372a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1372ac:
    if (ctx->pc == 0x1372ACu) {
        ctx->pc = 0x1372ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372A8u;
        // 0x1372ac: 0xe6400250  swc1        $f0, 0x250($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1372B0u;
        goto label_1372b0;
    }
    ctx->pc = 0x1372A8u;
    {
        const bool branch_taken_0x1372a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372A8u;
        // 0x1372ac: 0xe6400250  swc1        $f0, 0x250($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372a8) {
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x1372B0u;
label_1372b0:
    // 0x1372b0: 0x3c013e98  lui         $at, 0x3E98
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16024 << 16));
label_1372b4:
    // 0x1372b4: 0x3421ce9d  ori         $at, $at, 0xCE9D
    ctx->pc = 0x1372b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52893);
label_1372b8:
    // 0x1372b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1372b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1372bc:
    // 0x1372bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1372c0:
    if (ctx->pc == 0x1372C0u) {
        ctx->pc = 0x1372C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372BCu;
        // 0x1372c0: 0xe6400250  swc1        $f0, 0x250($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1372C4u;
        goto label_1372c4;
    }
    ctx->pc = 0x1372BCu;
    {
        const bool branch_taken_0x1372bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372BCu;
        // 0x1372c0: 0xe6400250  swc1        $f0, 0x250($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372bc) {
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x1372C4u;
label_1372c4:
    // 0x1372c4: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1372c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_1372c8:
    // 0x1372c8: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x1372c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_1372cc:
    // 0x1372cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1372ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1372d0:
    // 0x1372d0: 0x0  nop
    ctx->pc = 0x1372d0u;
    // NOP
label_1372d4:
    // 0x1372d4: 0xe6400250  swc1        $f0, 0x250($s2)
    ctx->pc = 0x1372d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
label_1372d8:
    // 0x1372d8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1372dc:
    // 0x1372dc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1372dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1372e0:
    // 0x1372e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1372e4:
    if (ctx->pc == 0x1372E4u) {
        ctx->pc = 0x1372E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372E0u;
        // 0x1372e4: 0xc6540250  lwc1        $f20, 0x250($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1372E8u;
        goto label_1372e8;
    }
    ctx->pc = 0x1372E0u;
    {
        const bool branch_taken_0x1372e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1372e0) {
            ctx->pc = 0x1372E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1372E0u;
            // 0x1372e4: 0xc6540250  lwc1        $f20, 0x250($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13731Cu;
            goto label_13731c;
        }
    }
    ctx->pc = 0x1372E8u;
label_1372e8:
    // 0x1372e8: 0xc6400244  lwc1        $f0, 0x244($s2)
    ctx->pc = 0x1372e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1372ec:
    // 0x1372ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1372ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1372f0:
    // 0x1372f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1372f4:
    if (ctx->pc == 0x1372F4u) {
        ctx->pc = 0x1372F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372F0u;
        // 0x1372f4: 0xe6400244  swc1        $f0, 0x244($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1372F8u;
        goto label_1372f8;
    }
    ctx->pc = 0x1372F0u;
    {
        const bool branch_taken_0x1372f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1372F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372F0u;
        // 0x1372f4: 0xe6400244  swc1        $f0, 0x244($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372f0) {
            ctx->pc = 0x137318u;
            goto label_137318;
        }
    }
    ctx->pc = 0x1372F8u;
label_1372f8:
    // 0x1372f8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1372f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_1372fc:
    // 0x1372fc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1372fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_137300:
    // 0x137300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137304:
    // 0x137304: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
label_137308:
    // 0x137308: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x137308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_13730c:
    // 0x13730c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13730cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137310:
    // 0x137310: 0xe6400250  swc1        $f0, 0x250($s2)
    ctx->pc = 0x137310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
label_137314:
    // 0x137314: 0xe641024c  swc1        $f1, 0x24C($s2)
    ctx->pc = 0x137314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_137318:
    // 0x137318: 0xc6540250  lwc1        $f20, 0x250($s2)
    ctx->pc = 0x137318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13731c:
    // 0x13731c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_137320:
    // 0x137320: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x137320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_137324:
    // 0x137324: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137328:
    // 0x137328: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x137328u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_13732c:
    // 0x13732c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x13732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_137330:
    // 0x137330: 0xc12e310  jal         func_4B8C40
label_137334:
    if (ctx->pc == 0x137334u) {
        ctx->pc = 0x137334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137330u;
        // 0x137334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137338u;
        goto label_137338;
    }
    ctx->pc = 0x137330u;
    SET_GPR_U32(ctx, 31, 0x137338u);
    ctx->pc = 0x137334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137330u;
    // 0x137334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x137330u, 0x137338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137338u;
label_137338:
    // 0x137338: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13733c:
    // 0x13733c: 0xc12e29c  jal         func_4B8A70
label_137340:
    if (ctx->pc == 0x137340u) {
        ctx->pc = 0x137340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13733Cu;
        // 0x137340: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137344u;
        goto label_137344;
    }
    ctx->pc = 0x13733Cu;
    SET_GPR_U32(ctx, 31, 0x137344u);
    ctx->pc = 0x137340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13733Cu;
    // 0x137340: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x13733Cu, 0x137344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137344u;
label_137344:
    // 0x137344: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x137344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_137348:
    // 0x137348: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x137348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13734c:
    // 0x13734c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x13734cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_137350:
    // 0x137350: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_137354:
    // 0x137354: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x137354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_137358:
    // 0x137358: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x137358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13735c:
    // 0x13735c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13735cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_137360:
    // 0x137360: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x137360u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_137364:
    // 0x137364: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x137364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_137368:
    // 0x137368: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x137368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13736c:
    // 0x13736c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13736cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137370:
    // 0x137370: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x137370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_137374:
    // 0x137374: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x137374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137378:
    // 0x137378: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x137378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13737c:
    // 0x13737c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137380:
    // 0x137380: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x137380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_137384:
    // 0x137384: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x137384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_137388:
    // 0x137388: 0xc136b30  jal         func_4DACC0
label_13738c:
    if (ctx->pc == 0x13738Cu) {
        ctx->pc = 0x13738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137388u;
        // 0x13738c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137390u;
        goto label_137390;
    }
    ctx->pc = 0x137388u;
    SET_GPR_U32(ctx, 31, 0x137390u);
    ctx->pc = 0x13738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137388u;
    // 0x13738c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x137388u, 0x137390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137390u;
label_137390:
    // 0x137390: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x137390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_137394:
    // 0x137394: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_137398:
    // 0x137398: 0xc654024c  lwc1        $f20, 0x24C($s2)
    ctx->pc = 0x137398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13739c:
    // 0x13739c: 0x24831740  addiu       $v1, $a0, 0x1740
    ctx->pc = 0x13739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_1373a0:
    // 0x1373a0: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x1373a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_1373a4:
    // 0x1373a4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1373a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1373a8:
    // 0x1373a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1373a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1373ac:
    // 0x1373ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1373acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1373b0:
    // 0x1373b0: 0xc12e310  jal         func_4B8C40
label_1373b4:
    if (ctx->pc == 0x1373B4u) {
        ctx->pc = 0x1373B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373B0u;
        // 0x1373b4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1373B8u;
        goto label_1373b8;
    }
    ctx->pc = 0x1373B0u;
    SET_GPR_U32(ctx, 31, 0x1373B8u);
    ctx->pc = 0x1373B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373B0u;
    // 0x1373b4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1373B0u, 0x1373B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373B8u;
label_1373b8:
    // 0x1373b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1373b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1373bc:
    // 0x1373bc: 0xc12e29c  jal         func_4B8A70
label_1373c0:
    if (ctx->pc == 0x1373C0u) {
        ctx->pc = 0x1373C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373BCu;
        // 0x1373c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1373C4u;
        goto label_1373c4;
    }
    ctx->pc = 0x1373BCu;
    SET_GPR_U32(ctx, 31, 0x1373C4u);
    ctx->pc = 0x1373C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373BCu;
    // 0x1373c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1373BCu, 0x1373C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373C4u;
label_1373c4:
    // 0x1373c4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1373c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1373c8:
    // 0x1373c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1373c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1373cc:
    // 0x1373cc: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x1373ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1373d0:
    // 0x1373d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1373d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1373d4:
    // 0x1373d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1373d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1373d8:
    // 0x1373d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1373d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1373dc:
    // 0x1373dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1373dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1373e0:
    // 0x1373e0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1373e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1373e4:
    // 0x1373e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1373e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1373e8:
    // 0x1373e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1373e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1373ec:
    // 0x1373ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1373ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1373f0:
    // 0x1373f0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1373f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1373f4:
    // 0x1373f4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1373f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1373f8:
    // 0x1373f8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1373f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1373fc:
    // 0x1373fc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1373fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_137400:
    // 0x137400: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x137400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_137404:
    // 0x137404: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x137404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_137408:
    // 0x137408: 0xc136b30  jal         func_4DACC0
label_13740c:
    if (ctx->pc == 0x13740Cu) {
        ctx->pc = 0x13740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137408u;
        // 0x13740c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137410u;
        goto label_137410;
    }
    ctx->pc = 0x137408u;
    SET_GPR_U32(ctx, 31, 0x137410u);
    ctx->pc = 0x13740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137408u;
    // 0x13740c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x137408u, 0x137410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137410u;
label_137410:
    // 0x137410: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x137410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_137414:
    // 0x137414: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137418:
    // 0x137418: 0xc64c0254  lwc1        $f12, 0x254($s2)
    ctx->pc = 0x137418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13741c:
    // 0x13741c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137420:
    // 0x137420: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x137420u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_137424:
    // 0x137424: 0xc136b24  jal         func_4DAC90
label_137428:
    if (ctx->pc == 0x137428u) {
        ctx->pc = 0x137428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137424u;
        // 0x137428: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13742Cu;
        goto label_13742c;
    }
    ctx->pc = 0x137424u;
    SET_GPR_U32(ctx, 31, 0x13742Cu);
    ctx->pc = 0x137428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137424u;
    // 0x137428: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x137424u, 0x13742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13742Cu;
label_13742c:
    // 0x13742c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13742cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137430:
    // 0x137430: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137434:
    // 0x137434: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137438:
    // 0x137438: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x137438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13743c:
    // 0x13743c: 0xc136b18  jal         func_4DAC60
label_137440:
    if (ctx->pc == 0x137440u) {
        ctx->pc = 0x137440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13743Cu;
        // 0x137440: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137444u;
        goto label_137444;
    }
    ctx->pc = 0x13743Cu;
    SET_GPR_U32(ctx, 31, 0x137444u);
    ctx->pc = 0x137440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13743Cu;
    // 0x137440: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13743Cu, 0x137444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137444u;
label_137444:
    // 0x137444: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x137444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137448:
    // 0x137448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13744c:
    // 0x13744c: 0xc6400254  lwc1        $f0, 0x254($s2)
    ctx->pc = 0x13744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137450:
    // 0x137450: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x137450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_137454:
    // 0x137454: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_137458:
    // 0x137458: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x137458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_13745c:
    // 0x13745c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13745cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137460:
    // 0x137460: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x137460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_137464:
    // 0x137464: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x137464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_137468:
    // 0x137468: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x137468u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_13746c:
    // 0x13746c: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x13746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_137470:
    // 0x137470: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x137470u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_137474:
    // 0x137474: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_137478:
    // 0x137478: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x137478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_13747c:
    // 0x13747c: 0xc04dd36  jal         func_1374D8
label_137480:
    if (ctx->pc == 0x137480u) {
        ctx->pc = 0x137480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13747Cu;
        // 0x137480: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137484u;
        goto label_137484;
    }
    ctx->pc = 0x13747Cu;
    SET_GPR_U32(ctx, 31, 0x137484u);
    ctx->pc = 0x137480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13747Cu;
    // 0x137480: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1374D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1374D8u, 0x13747Cu, 0x137484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137484u;
label_137484:
    // 0x137484: 0x1440fed9  bnez        $v0, . + 4 + (-0x127 << 2)
label_137488:
    if (ctx->pc == 0x137488u) {
        ctx->pc = 0x137488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137484u;
        // 0x137488: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13748Cu;
        goto label_13748c;
    }
    ctx->pc = 0x137484u;
    {
        const bool branch_taken_0x137484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137484u;
        // 0x137488: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137484) {
            ctx->pc = 0x136FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136fec;
        }
    }
    ctx->pc = 0x13748Cu;
label_13748c:
    // 0x13748c: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x13748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_137490:
    // 0x137490: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
label_137494:
    if (ctx->pc == 0x137494u) {
        ctx->pc = 0x137494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137490u;
        // 0x137494: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137498u;
        goto label_137498;
    }
    ctx->pc = 0x137490u;
    {
        const bool branch_taken_0x137490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137490u;
        // 0x137494: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137490) {
            ctx->pc = 0x1370F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1370f8;
        }
    }
    ctx->pc = 0x137498u;
label_137498:
    // 0x137498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13749c:
    // 0x13749c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x13749cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1374a0:
    // 0x1374a0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1374a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1374a4:
    // 0x1374a4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1374a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1374a8:
    // 0x1374a8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1374a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1374ac:
    // 0x1374ac: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1374acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1374b0:
    // 0x1374b0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1374b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1374b4:
    // 0x1374b4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1374b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1374b8:
    // 0x1374b8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1374b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1374bc:
    // 0x1374bc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1374bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1374c0:
    // 0x1374c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1374c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1374c4:
    // 0x1374c4: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1374c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1374c8:
    // 0x1374c8: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1374c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1374cc:
    // 0x1374cc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1374ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1374d0:
    // 0x1374d0: 0x3e00008  jr          $ra
label_1374d4:
    if (ctx->pc == 0x1374D4u) {
        ctx->pc = 0x1374D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374D0u;
        // 0x1374d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1374D8u;
        goto label_fallthrough_0x1374d0;
    }
    ctx->pc = 0x1374D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1374D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374D0u;
        // 0x1374d4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1374D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1374d0:
    ctx->pc = 0x1374D8u;
}
