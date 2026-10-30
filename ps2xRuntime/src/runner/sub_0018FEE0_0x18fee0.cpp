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

// Function: sub_0018FEE0
// Address: 0x18fee0 - 0x190588
void sub_0018FEE0_0x18fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FEE0_0x18fee0");
#endif

    switch (ctx->pc) {
        case 0x18fee0u: goto label_18fee0;
        case 0x18fee4u: goto label_18fee4;
        case 0x18fee8u: goto label_18fee8;
        case 0x18feecu: goto label_18feec;
        case 0x18fef0u: goto label_18fef0;
        case 0x18fef4u: goto label_18fef4;
        case 0x18fef8u: goto label_18fef8;
        case 0x18fefcu: goto label_18fefc;
        case 0x18ff00u: goto label_18ff00;
        case 0x18ff04u: goto label_18ff04;
        case 0x18ff08u: goto label_18ff08;
        case 0x18ff0cu: goto label_18ff0c;
        case 0x18ff10u: goto label_18ff10;
        case 0x18ff14u: goto label_18ff14;
        case 0x18ff18u: goto label_18ff18;
        case 0x18ff1cu: goto label_18ff1c;
        case 0x18ff20u: goto label_18ff20;
        case 0x18ff24u: goto label_18ff24;
        case 0x18ff28u: goto label_18ff28;
        case 0x18ff2cu: goto label_18ff2c;
        case 0x18ff30u: goto label_18ff30;
        case 0x18ff34u: goto label_18ff34;
        case 0x18ff38u: goto label_18ff38;
        case 0x18ff3cu: goto label_18ff3c;
        case 0x18ff40u: goto label_18ff40;
        case 0x18ff44u: goto label_18ff44;
        case 0x18ff48u: goto label_18ff48;
        case 0x18ff4cu: goto label_18ff4c;
        case 0x18ff50u: goto label_18ff50;
        case 0x18ff54u: goto label_18ff54;
        case 0x18ff58u: goto label_18ff58;
        case 0x18ff5cu: goto label_18ff5c;
        case 0x18ff60u: goto label_18ff60;
        case 0x18ff64u: goto label_18ff64;
        case 0x18ff68u: goto label_18ff68;
        case 0x18ff6cu: goto label_18ff6c;
        case 0x18ff70u: goto label_18ff70;
        case 0x18ff74u: goto label_18ff74;
        case 0x18ff78u: goto label_18ff78;
        case 0x18ff7cu: goto label_18ff7c;
        case 0x18ff80u: goto label_18ff80;
        case 0x18ff84u: goto label_18ff84;
        case 0x18ff88u: goto label_18ff88;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ff90u: goto label_18ff90;
        case 0x18ff94u: goto label_18ff94;
        case 0x18ff98u: goto label_18ff98;
        case 0x18ff9cu: goto label_18ff9c;
        case 0x18ffa0u: goto label_18ffa0;
        case 0x18ffa4u: goto label_18ffa4;
        case 0x18ffa8u: goto label_18ffa8;
        case 0x18ffacu: goto label_18ffac;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x18ffb4u: goto label_18ffb4;
        case 0x18ffb8u: goto label_18ffb8;
        case 0x18ffbcu: goto label_18ffbc;
        case 0x18ffc0u: goto label_18ffc0;
        case 0x18ffc4u: goto label_18ffc4;
        case 0x18ffc8u: goto label_18ffc8;
        case 0x18ffccu: goto label_18ffcc;
        case 0x18ffd0u: goto label_18ffd0;
        case 0x18ffd4u: goto label_18ffd4;
        case 0x18ffd8u: goto label_18ffd8;
        case 0x18ffdcu: goto label_18ffdc;
        case 0x18ffe0u: goto label_18ffe0;
        case 0x18ffe4u: goto label_18ffe4;
        case 0x18ffe8u: goto label_18ffe8;
        case 0x18ffecu: goto label_18ffec;
        case 0x18fff0u: goto label_18fff0;
        case 0x18fff4u: goto label_18fff4;
        case 0x18fff8u: goto label_18fff8;
        case 0x18fffcu: goto label_18fffc;
        case 0x190000u: goto label_190000;
        case 0x190004u: goto label_190004;
        case 0x190008u: goto label_190008;
        case 0x19000cu: goto label_19000c;
        case 0x190010u: goto label_190010;
        case 0x190014u: goto label_190014;
        case 0x190018u: goto label_190018;
        case 0x19001cu: goto label_19001c;
        case 0x190020u: goto label_190020;
        case 0x190024u: goto label_190024;
        case 0x190028u: goto label_190028;
        case 0x19002cu: goto label_19002c;
        case 0x190030u: goto label_190030;
        case 0x190034u: goto label_190034;
        case 0x190038u: goto label_190038;
        case 0x19003cu: goto label_19003c;
        case 0x190040u: goto label_190040;
        case 0x190044u: goto label_190044;
        case 0x190048u: goto label_190048;
        case 0x19004cu: goto label_19004c;
        case 0x190050u: goto label_190050;
        case 0x190054u: goto label_190054;
        case 0x190058u: goto label_190058;
        case 0x19005cu: goto label_19005c;
        case 0x190060u: goto label_190060;
        case 0x190064u: goto label_190064;
        case 0x190068u: goto label_190068;
        case 0x19006cu: goto label_19006c;
        case 0x190070u: goto label_190070;
        case 0x190074u: goto label_190074;
        case 0x190078u: goto label_190078;
        case 0x19007cu: goto label_19007c;
        case 0x190080u: goto label_190080;
        case 0x190084u: goto label_190084;
        case 0x190088u: goto label_190088;
        case 0x19008cu: goto label_19008c;
        case 0x190090u: goto label_190090;
        case 0x190094u: goto label_190094;
        case 0x190098u: goto label_190098;
        case 0x19009cu: goto label_19009c;
        case 0x1900a0u: goto label_1900a0;
        case 0x1900a4u: goto label_1900a4;
        case 0x1900a8u: goto label_1900a8;
        case 0x1900acu: goto label_1900ac;
        case 0x1900b0u: goto label_1900b0;
        case 0x1900b4u: goto label_1900b4;
        case 0x1900b8u: goto label_1900b8;
        case 0x1900bcu: goto label_1900bc;
        case 0x1900c0u: goto label_1900c0;
        case 0x1900c4u: goto label_1900c4;
        case 0x1900c8u: goto label_1900c8;
        case 0x1900ccu: goto label_1900cc;
        case 0x1900d0u: goto label_1900d0;
        case 0x1900d4u: goto label_1900d4;
        case 0x1900d8u: goto label_1900d8;
        case 0x1900dcu: goto label_1900dc;
        case 0x1900e0u: goto label_1900e0;
        case 0x1900e4u: goto label_1900e4;
        case 0x1900e8u: goto label_1900e8;
        case 0x1900ecu: goto label_1900ec;
        case 0x1900f0u: goto label_1900f0;
        case 0x1900f4u: goto label_1900f4;
        case 0x1900f8u: goto label_1900f8;
        case 0x1900fcu: goto label_1900fc;
        case 0x190100u: goto label_190100;
        case 0x190104u: goto label_190104;
        case 0x190108u: goto label_190108;
        case 0x19010cu: goto label_19010c;
        case 0x190110u: goto label_190110;
        case 0x190114u: goto label_190114;
        case 0x190118u: goto label_190118;
        case 0x19011cu: goto label_19011c;
        case 0x190120u: goto label_190120;
        case 0x190124u: goto label_190124;
        case 0x190128u: goto label_190128;
        case 0x19012cu: goto label_19012c;
        case 0x190130u: goto label_190130;
        case 0x190134u: goto label_190134;
        case 0x190138u: goto label_190138;
        case 0x19013cu: goto label_19013c;
        case 0x190140u: goto label_190140;
        case 0x190144u: goto label_190144;
        case 0x190148u: goto label_190148;
        case 0x19014cu: goto label_19014c;
        case 0x190150u: goto label_190150;
        case 0x190154u: goto label_190154;
        case 0x190158u: goto label_190158;
        case 0x19015cu: goto label_19015c;
        case 0x190160u: goto label_190160;
        case 0x190164u: goto label_190164;
        case 0x190168u: goto label_190168;
        case 0x19016cu: goto label_19016c;
        case 0x190170u: goto label_190170;
        case 0x190174u: goto label_190174;
        case 0x190178u: goto label_190178;
        case 0x19017cu: goto label_19017c;
        case 0x190180u: goto label_190180;
        case 0x190184u: goto label_190184;
        case 0x190188u: goto label_190188;
        case 0x19018cu: goto label_19018c;
        case 0x190190u: goto label_190190;
        case 0x190194u: goto label_190194;
        case 0x190198u: goto label_190198;
        case 0x19019cu: goto label_19019c;
        case 0x1901a0u: goto label_1901a0;
        case 0x1901a4u: goto label_1901a4;
        case 0x1901a8u: goto label_1901a8;
        case 0x1901acu: goto label_1901ac;
        case 0x1901b0u: goto label_1901b0;
        case 0x1901b4u: goto label_1901b4;
        case 0x1901b8u: goto label_1901b8;
        case 0x1901bcu: goto label_1901bc;
        case 0x1901c0u: goto label_1901c0;
        case 0x1901c4u: goto label_1901c4;
        case 0x1901c8u: goto label_1901c8;
        case 0x1901ccu: goto label_1901cc;
        case 0x1901d0u: goto label_1901d0;
        case 0x1901d4u: goto label_1901d4;
        case 0x1901d8u: goto label_1901d8;
        case 0x1901dcu: goto label_1901dc;
        case 0x1901e0u: goto label_1901e0;
        case 0x1901e4u: goto label_1901e4;
        case 0x1901e8u: goto label_1901e8;
        case 0x1901ecu: goto label_1901ec;
        case 0x1901f0u: goto label_1901f0;
        case 0x1901f4u: goto label_1901f4;
        case 0x1901f8u: goto label_1901f8;
        case 0x1901fcu: goto label_1901fc;
        case 0x190200u: goto label_190200;
        case 0x190204u: goto label_190204;
        case 0x190208u: goto label_190208;
        case 0x19020cu: goto label_19020c;
        case 0x190210u: goto label_190210;
        case 0x190214u: goto label_190214;
        case 0x190218u: goto label_190218;
        case 0x19021cu: goto label_19021c;
        case 0x190220u: goto label_190220;
        case 0x190224u: goto label_190224;
        case 0x190228u: goto label_190228;
        case 0x19022cu: goto label_19022c;
        case 0x190230u: goto label_190230;
        case 0x190234u: goto label_190234;
        case 0x190238u: goto label_190238;
        case 0x19023cu: goto label_19023c;
        case 0x190240u: goto label_190240;
        case 0x190244u: goto label_190244;
        case 0x190248u: goto label_190248;
        case 0x19024cu: goto label_19024c;
        case 0x190250u: goto label_190250;
        case 0x190254u: goto label_190254;
        case 0x190258u: goto label_190258;
        case 0x19025cu: goto label_19025c;
        case 0x190260u: goto label_190260;
        case 0x190264u: goto label_190264;
        case 0x190268u: goto label_190268;
        case 0x19026cu: goto label_19026c;
        case 0x190270u: goto label_190270;
        case 0x190274u: goto label_190274;
        case 0x190278u: goto label_190278;
        case 0x19027cu: goto label_19027c;
        case 0x190280u: goto label_190280;
        case 0x190284u: goto label_190284;
        case 0x190288u: goto label_190288;
        case 0x19028cu: goto label_19028c;
        case 0x190290u: goto label_190290;
        case 0x190294u: goto label_190294;
        case 0x190298u: goto label_190298;
        case 0x19029cu: goto label_19029c;
        case 0x1902a0u: goto label_1902a0;
        case 0x1902a4u: goto label_1902a4;
        case 0x1902a8u: goto label_1902a8;
        case 0x1902acu: goto label_1902ac;
        case 0x1902b0u: goto label_1902b0;
        case 0x1902b4u: goto label_1902b4;
        case 0x1902b8u: goto label_1902b8;
        case 0x1902bcu: goto label_1902bc;
        case 0x1902c0u: goto label_1902c0;
        case 0x1902c4u: goto label_1902c4;
        case 0x1902c8u: goto label_1902c8;
        case 0x1902ccu: goto label_1902cc;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902d4u: goto label_1902d4;
        case 0x1902d8u: goto label_1902d8;
        case 0x1902dcu: goto label_1902dc;
        case 0x1902e0u: goto label_1902e0;
        case 0x1902e4u: goto label_1902e4;
        case 0x1902e8u: goto label_1902e8;
        case 0x1902ecu: goto label_1902ec;
        case 0x1902f0u: goto label_1902f0;
        case 0x1902f4u: goto label_1902f4;
        case 0x1902f8u: goto label_1902f8;
        case 0x1902fcu: goto label_1902fc;
        case 0x190300u: goto label_190300;
        case 0x190304u: goto label_190304;
        case 0x190308u: goto label_190308;
        case 0x19030cu: goto label_19030c;
        case 0x190310u: goto label_190310;
        case 0x190314u: goto label_190314;
        case 0x190318u: goto label_190318;
        case 0x19031cu: goto label_19031c;
        case 0x190320u: goto label_190320;
        case 0x190324u: goto label_190324;
        case 0x190328u: goto label_190328;
        case 0x19032cu: goto label_19032c;
        case 0x190330u: goto label_190330;
        case 0x190334u: goto label_190334;
        case 0x190338u: goto label_190338;
        case 0x19033cu: goto label_19033c;
        case 0x190340u: goto label_190340;
        case 0x190344u: goto label_190344;
        case 0x190348u: goto label_190348;
        case 0x19034cu: goto label_19034c;
        case 0x190350u: goto label_190350;
        case 0x190354u: goto label_190354;
        case 0x190358u: goto label_190358;
        case 0x19035cu: goto label_19035c;
        case 0x190360u: goto label_190360;
        case 0x190364u: goto label_190364;
        case 0x190368u: goto label_190368;
        case 0x19036cu: goto label_19036c;
        case 0x190370u: goto label_190370;
        case 0x190374u: goto label_190374;
        case 0x190378u: goto label_190378;
        case 0x19037cu: goto label_19037c;
        case 0x190380u: goto label_190380;
        case 0x190384u: goto label_190384;
        case 0x190388u: goto label_190388;
        case 0x19038cu: goto label_19038c;
        case 0x190390u: goto label_190390;
        case 0x190394u: goto label_190394;
        case 0x190398u: goto label_190398;
        case 0x19039cu: goto label_19039c;
        case 0x1903a0u: goto label_1903a0;
        case 0x1903a4u: goto label_1903a4;
        case 0x1903a8u: goto label_1903a8;
        case 0x1903acu: goto label_1903ac;
        case 0x1903b0u: goto label_1903b0;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903b8u: goto label_1903b8;
        case 0x1903bcu: goto label_1903bc;
        case 0x1903c0u: goto label_1903c0;
        case 0x1903c4u: goto label_1903c4;
        case 0x1903c8u: goto label_1903c8;
        case 0x1903ccu: goto label_1903cc;
        case 0x1903d0u: goto label_1903d0;
        case 0x1903d4u: goto label_1903d4;
        case 0x1903d8u: goto label_1903d8;
        case 0x1903dcu: goto label_1903dc;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903e4u: goto label_1903e4;
        case 0x1903e8u: goto label_1903e8;
        case 0x1903ecu: goto label_1903ec;
        case 0x1903f0u: goto label_1903f0;
        case 0x1903f4u: goto label_1903f4;
        case 0x1903f8u: goto label_1903f8;
        case 0x1903fcu: goto label_1903fc;
        case 0x190400u: goto label_190400;
        case 0x190404u: goto label_190404;
        case 0x190408u: goto label_190408;
        case 0x19040cu: goto label_19040c;
        case 0x190410u: goto label_190410;
        case 0x190414u: goto label_190414;
        case 0x190418u: goto label_190418;
        case 0x19041cu: goto label_19041c;
        case 0x190420u: goto label_190420;
        case 0x190424u: goto label_190424;
        case 0x190428u: goto label_190428;
        case 0x19042cu: goto label_19042c;
        case 0x190430u: goto label_190430;
        case 0x190434u: goto label_190434;
        case 0x190438u: goto label_190438;
        case 0x19043cu: goto label_19043c;
        case 0x190440u: goto label_190440;
        case 0x190444u: goto label_190444;
        case 0x190448u: goto label_190448;
        case 0x19044cu: goto label_19044c;
        case 0x190450u: goto label_190450;
        case 0x190454u: goto label_190454;
        case 0x190458u: goto label_190458;
        case 0x19045cu: goto label_19045c;
        case 0x190460u: goto label_190460;
        case 0x190464u: goto label_190464;
        case 0x190468u: goto label_190468;
        case 0x19046cu: goto label_19046c;
        case 0x190470u: goto label_190470;
        case 0x190474u: goto label_190474;
        case 0x190478u: goto label_190478;
        case 0x19047cu: goto label_19047c;
        case 0x190480u: goto label_190480;
        case 0x190484u: goto label_190484;
        case 0x190488u: goto label_190488;
        case 0x19048cu: goto label_19048c;
        case 0x190490u: goto label_190490;
        case 0x190494u: goto label_190494;
        case 0x190498u: goto label_190498;
        case 0x19049cu: goto label_19049c;
        case 0x1904a0u: goto label_1904a0;
        case 0x1904a4u: goto label_1904a4;
        case 0x1904a8u: goto label_1904a8;
        case 0x1904acu: goto label_1904ac;
        case 0x1904b0u: goto label_1904b0;
        case 0x1904b4u: goto label_1904b4;
        case 0x1904b8u: goto label_1904b8;
        case 0x1904bcu: goto label_1904bc;
        case 0x1904c0u: goto label_1904c0;
        case 0x1904c4u: goto label_1904c4;
        case 0x1904c8u: goto label_1904c8;
        case 0x1904ccu: goto label_1904cc;
        case 0x1904d0u: goto label_1904d0;
        case 0x1904d4u: goto label_1904d4;
        case 0x1904d8u: goto label_1904d8;
        case 0x1904dcu: goto label_1904dc;
        case 0x1904e0u: goto label_1904e0;
        case 0x1904e4u: goto label_1904e4;
        case 0x1904e8u: goto label_1904e8;
        case 0x1904ecu: goto label_1904ec;
        case 0x1904f0u: goto label_1904f0;
        case 0x1904f4u: goto label_1904f4;
        case 0x1904f8u: goto label_1904f8;
        case 0x1904fcu: goto label_1904fc;
        case 0x190500u: goto label_190500;
        case 0x190504u: goto label_190504;
        case 0x190508u: goto label_190508;
        case 0x19050cu: goto label_19050c;
        case 0x190510u: goto label_190510;
        case 0x190514u: goto label_190514;
        case 0x190518u: goto label_190518;
        case 0x19051cu: goto label_19051c;
        case 0x190520u: goto label_190520;
        case 0x190524u: goto label_190524;
        case 0x190528u: goto label_190528;
        case 0x19052cu: goto label_19052c;
        case 0x190530u: goto label_190530;
        case 0x190534u: goto label_190534;
        case 0x190538u: goto label_190538;
        case 0x19053cu: goto label_19053c;
        case 0x190540u: goto label_190540;
        case 0x190544u: goto label_190544;
        case 0x190548u: goto label_190548;
        case 0x19054cu: goto label_19054c;
        case 0x190550u: goto label_190550;
        case 0x190554u: goto label_190554;
        case 0x190558u: goto label_190558;
        case 0x19055cu: goto label_19055c;
        case 0x190560u: goto label_190560;
        case 0x190564u: goto label_190564;
        case 0x190568u: goto label_190568;
        case 0x19056cu: goto label_19056c;
        case 0x190570u: goto label_190570;
        case 0x190574u: goto label_190574;
        case 0x190578u: goto label_190578;
        case 0x19057cu: goto label_19057c;
        case 0x190580u: goto label_190580;
        case 0x190584u: goto label_190584;
        default: break;
    }

    ctx->pc = 0x18fee0u;

label_18fee0:
    // 0x18fee0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_18fee4:
    // 0x18fee4: 0x7fb20500  sq          $s2, 0x500($sp)
    ctx->pc = 0x18fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 18));
label_18fee8:
    // 0x18fee8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18fee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18feec:
    // 0x18feec: 0x7fb604c0  sq          $s6, 0x4C0($sp)
    ctx->pc = 0x18feecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 22));
label_18fef0:
    // 0x18fef0: 0x7fb00520  sq          $s0, 0x520($sp)
    ctx->pc = 0x18fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 16));
label_18fef4:
    // 0x18fef4: 0x7fb10510  sq          $s1, 0x510($sp)
    ctx->pc = 0x18fef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 17));
label_18fef8:
    // 0x18fef8: 0x24160011  addiu       $s6, $zero, 0x11
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_18fefc:
    // 0x18fefc: 0x7fb304f0  sq          $s3, 0x4F0($sp)
    ctx->pc = 0x18fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 19));
label_18ff00:
    // 0x18ff00: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x18ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
label_18ff04:
    // 0x18ff04: 0x7fb504d0  sq          $s5, 0x4D0($sp)
    ctx->pc = 0x18ff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 21));
label_18ff08:
    // 0x18ff08: 0x7fb704b0  sq          $s7, 0x4B0($sp)
    ctx->pc = 0x18ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 23));
label_18ff0c:
    // 0x18ff0c: 0x7fbe04a0  sq          $fp, 0x4A0($sp)
    ctx->pc = 0x18ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 30));
label_18ff10:
    // 0x18ff10: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x18ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
label_18ff14:
    // 0x18ff14: 0xe7b50538  swc1        $f21, 0x538($sp)
    ctx->pc = 0x18ff14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_18ff18:
    // 0x18ff18: 0xc063d8a  jal         func_18F628
label_18ff1c:
    if (ctx->pc == 0x18FF1Cu) {
        ctx->pc = 0x18FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF18u;
        // 0x18ff1c: 0xe7b40530  swc1        $f20, 0x530($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF20u;
        goto label_18ff20;
    }
    ctx->pc = 0x18FF18u;
    SET_GPR_U32(ctx, 31, 0x18FF20u);
    ctx->pc = 0x18FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF18u;
    // 0x18ff1c: 0xe7b40530  swc1        $f20, 0x530($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F628u, 0x18FF18u, 0x18FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF20u;
label_18ff20:
    // 0x18ff20: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x18ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
label_18ff24:
    // 0x18ff24: 0x3421137f  ori         $at, $at, 0x137F
    ctx->pc = 0x18ff24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4991);
label_18ff28:
    // 0x18ff28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ff28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ff2c:
    // 0x18ff2c: 0x3c01bf22  lui         $at, 0xBF22
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48930 << 16));
label_18ff30:
    // 0x18ff30: 0x3421a79c  ori         $at, $at, 0xA79C
    ctx->pc = 0x18ff30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42908);
label_18ff34:
    // 0x18ff34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18ff34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ff38:
    // 0x18ff38: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x18ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
label_18ff3c:
    // 0x18ff3c: 0x34211316  ori         $at, $at, 0x1316
    ctx->pc = 0x18ff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4886);
label_18ff40:
    // 0x18ff40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ff40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18ff44:
    // 0x18ff44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18ff48:
    // 0x18ff48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18ff48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18ff4c:
    // 0x18ff4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18ff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18ff50:
    // 0x18ff50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18ff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18ff54:
    // 0x18ff54: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x18ff54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18ff58:
    // 0x18ff58: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x18ff58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_18ff5c:
    // 0x18ff5c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x18ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18ff60:
    // 0x18ff60: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x18ff60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ff64:
    // 0x18ff64: 0x78820620  lq          $v0, 0x620($a0)
    ctx->pc = 0x18ff64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1568)));
label_18ff68:
    // 0x18ff68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18ff68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_18ff6c:
    // 0x18ff6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18ff6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_18ff70:
    // 0x18ff70: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x18ff70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ff74:
    // 0x18ff74: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x18ff74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_18ff78:
    // 0x18ff78: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x18ff78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ff7c:
    // 0x18ff7c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x18ff7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ff80:
    // 0x18ff80: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x18ff80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ff84:
    // 0x18ff84: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x18ff84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_18ff88:
    // 0x18ff88: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x18ff88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ff8c:
    // 0x18ff8c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18ff8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ff90:
    // 0x18ff90: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x18ff90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18ff94:
    // 0x18ff94: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x18ff94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ff98:
    // 0x18ff98: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x18ff98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_18ff9c:
    // 0x18ff9c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x18ff9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ffa0:
    // 0x18ffa0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x18ffa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ffa4:
    // 0x18ffa4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x18ffa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18ffa8:
    // 0x18ffa8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18ffa8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_18ffac:
    // 0x18ffac: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x18ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_18ffb0:
    // 0x18ffb0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_18ffb4:
    // 0x18ffb4: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x18ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_18ffb8:
    // 0x18ffb8: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x18ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
label_18ffbc:
    // 0x18ffbc: 0x78830610  lq          $v1, 0x610($a0)
    ctx->pc = 0x18ffbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 1552)));
label_18ffc0:
    // 0x18ffc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18ffc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_18ffc4:
    // 0x18ffc4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18ffc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_18ffc8:
    // 0x18ffc8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x18ffc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18ffcc:
    // 0x18ffcc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x18ffccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_18ffd0:
    // 0x18ffd0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x18ffd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_18ffd4:
    // 0x18ffd4: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x18ffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_18ffd8:
    // 0x18ffd8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_18ffdc:
    // 0x18ffdc: 0x7c8205f0  sq          $v0, 0x5F0($a0)
    ctx->pc = 0x18ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1520), GPR_VEC(ctx, 2));
label_18ffe0:
    // 0x18ffe0: 0xc089bfc  jal         func_226FF0
label_18ffe4:
    if (ctx->pc == 0x18FFE4u) {
        ctx->pc = 0x18FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFE0u;
        // 0x18ffe4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFE8u;
        goto label_18ffe8;
    }
    ctx->pc = 0x18FFE0u;
    SET_GPR_U32(ctx, 31, 0x18FFE8u);
    ctx->pc = 0x18FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFE0u;
    // 0x18ffe4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x18FFE0u, 0x18FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFE8u;
label_18ffe8:
    // 0x18ffe8: 0xc0e57ce  jal         func_395F38
label_18ffec:
    if (ctx->pc == 0x18FFECu) {
        ctx->pc = 0x18FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFE8u;
        // 0x18ffec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFF0u;
        goto label_18fff0;
    }
    ctx->pc = 0x18FFE8u;
    SET_GPR_U32(ctx, 31, 0x18FFF0u);
    ctx->pc = 0x18FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFE8u;
    // 0x18ffec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x18FFE8u, 0x18FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFF0u;
label_18fff0:
    // 0x18fff0: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x18fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_18fff4:
    // 0x18fff4: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x18fff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_18fff8:
    // 0x18fff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fffc:
    // 0x18fffc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_190000:
    // 0x190000: 0xc0cd940  jal         func_336500
label_190004:
    if (ctx->pc == 0x190004u) {
        ctx->pc = 0x190004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190000u;
        // 0x190004: 0x24a50620  addiu       $a1, $a1, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190008u;
        goto label_190008;
    }
    ctx->pc = 0x190000u;
    SET_GPR_U32(ctx, 31, 0x190008u);
    ctx->pc = 0x190004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190000u;
    // 0x190004: 0x24a50620  addiu       $a1, $a1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x190000u, 0x190008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190008u;
label_190008:
    // 0x190008: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x190008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19000c:
    // 0x19000c: 0x27b10260  addiu       $s1, $sp, 0x260
    ctx->pc = 0x19000cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_190010:
    // 0x190010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x190010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190014:
    // 0x190014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190018:
    // 0x190018: 0xc0e1ca8  jal         func_3872A0
label_19001c:
    if (ctx->pc == 0x19001Cu) {
        ctx->pc = 0x19001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190018u;
        // 0x19001c: 0x7fa202d0  sq          $v0, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190020u;
        goto label_190020;
    }
    ctx->pc = 0x190018u;
    SET_GPR_U32(ctx, 31, 0x190020u);
    ctx->pc = 0x19001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190018u;
    // 0x19001c: 0x7fa202d0  sq          $v0, 0x2D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3872A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3872A0u, 0x190018u, 0x190020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190020u;
label_190020:
    // 0x190020: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_190024:
    // 0x190024: 0xc095c3a  jal         func_2570E8
label_190028:
    if (ctx->pc == 0x190028u) {
        ctx->pc = 0x190028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190024u;
        // 0x190028: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19002Cu;
        goto label_19002c;
    }
    ctx->pc = 0x190024u;
    SET_GPR_U32(ctx, 31, 0x19002Cu);
    ctx->pc = 0x190028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190024u;
    // 0x190028: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2570E8u, 0x190024u, 0x19002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19002Cu;
label_19002c:
    // 0x19002c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_190030:
    // 0x190030: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x190030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_190034:
    // 0x190034: 0x78820620  lq          $v0, 0x620($a0)
    ctx->pc = 0x190034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1568)));
label_190038:
    // 0x190038: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x190038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19003c:
    // 0x19003c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19003cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_190040:
    // 0x190040: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x190040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190044:
    // 0x190044: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x190044u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_190048:
    // 0x190048: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x190048u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19004c:
    // 0x19004c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19004cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190050:
    // 0x190050: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x190050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190054:
    // 0x190054: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x190054u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_190058:
    // 0x190058: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x190058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19005c:
    // 0x19005c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x19005cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_190060:
    // 0x190060: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x190060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_190064:
    // 0x190064: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x190064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190068:
    // 0x190068: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x190068u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19006c:
    // 0x19006c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x19006cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190070:
    // 0x190070: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x190070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190074:
    // 0x190074: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x190074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190078:
    // 0x190078: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x190078u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_19007c:
    // 0x19007c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_190080:
    // 0x190080: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x190080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
label_190084:
    // 0x190084: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x190084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
label_190088:
    // 0x190088: 0x27b70120  addiu       $s7, $sp, 0x120
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_19008c:
    // 0x19008c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x19008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_190090:
    // 0x190090: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x190090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_190094:
    // 0x190094: 0xafa30484  sw          $v1, 0x484($sp)
    ctx->pc = 0x190094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 3));
label_190098:
    // 0x190098: 0x27be02e0  addiu       $fp, $sp, 0x2E0
    ctx->pc = 0x190098u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_19009c:
    // 0x19009c: 0x27a30410  addiu       $v1, $sp, 0x410
    ctx->pc = 0x19009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_1900a0:
    // 0x1900a0: 0x8fb40480  lw          $s4, 0x480($sp)
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
label_1900a4:
    // 0x1900a4: 0xafa3048c  sw          $v1, 0x48C($sp)
    ctx->pc = 0x1900a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 3));
label_1900a8:
    // 0x1900a8: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1900ac:
    // 0x1900ac: 0x27a30350  addiu       $v1, $sp, 0x350
    ctx->pc = 0x1900acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_1900b0:
    // 0x1900b0: 0x8fb30484  lw          $s3, 0x484($sp)
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_1900b4:
    // 0x1900b4: 0xafa30488  sw          $v1, 0x488($sp)
    ctx->pc = 0x1900b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 3));
label_1900b8:
    // 0x1900b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1900b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1900bc:
    // 0x1900bc: 0x27a30310  addiu       $v1, $sp, 0x310
    ctx->pc = 0x1900bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1900c0:
    // 0x1900c0: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x1900c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_1900c4:
    // 0x1900c4: 0xafa3047c  sw          $v1, 0x47C($sp)
    ctx->pc = 0x1900c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 3));
label_1900c8:
    // 0x1900c8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1900c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1900cc:
    // 0x1900cc: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1900ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_1900d0:
    // 0x1900d0: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1900d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1900d4:
    // 0x1900d4: 0x3421cd7c  ori         $at, $at, 0xCD7C
    ctx->pc = 0x1900d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52604);
label_1900d8:
    // 0x1900d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1900d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1900dc:
    // 0x1900dc: 0x7c820600  sq          $v0, 0x600($a0)
    ctx->pc = 0x1900dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1536), GPR_VEC(ctx, 2));
label_1900e0:
    // 0x1900e0: 0x215001a  div         $zero, $s0, $s5
    ctx->pc = 0x1900e0u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1900e4:
    // 0x1900e4: 0x0  nop
    ctx->pc = 0x1900e4u;
    // NOP
label_1900e8:
    // 0x1900e8: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x1900e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1900ec:
    // 0x1900ec: 0x7ba40250  lq          $a0, 0x250($sp)
    ctx->pc = 0x1900ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1900f0:
    // 0x1900f0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_1900f4:
    // 0x1900f4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1900f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1900f8:
    // 0x1900f8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1900f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1900fc:
    // 0x1900fc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1900fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_190100:
    // 0x190100: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190104:
    // 0x190104: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x190104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_190108:
    // 0x190108: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x190108u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_19010c:
    // 0x19010c: 0x7fa402e0  sq          $a0, 0x2E0($sp)
    ctx->pc = 0x19010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 4));
label_190110:
    // 0x190110: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x190110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190114:
    // 0x190114: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x190114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190118:
    // 0x190118: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19011c:
    // 0x19011c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19011cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_190120:
    // 0x190120: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x190120u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_190124:
    // 0x190124: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x190124u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_190128:
    // 0x190128: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x190128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
label_19012c:
    // 0x19012c: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x19012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_190130:
    // 0x190130: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x190130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_190134:
    // 0x190134: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x190134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_190138:
    // 0x190138: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x190138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_19013c:
    // 0x19013c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_190140:
    if (ctx->pc == 0x190140u) {
        ctx->pc = 0x190140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19013Cu;
        // 0x190140: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190144u;
        goto label_190144;
    }
    ctx->pc = 0x19013Cu;
    {
        const bool branch_taken_0x19013c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19013c) {
            ctx->pc = 0x190140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19013Cu;
            // 0x190140: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190144u;
            goto label_190144;
        }
    }
    ctx->pc = 0x190144u;
label_190144:
    // 0x190144: 0x2810  mfhi        $a1
    ctx->pc = 0x190144u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_190148:
    // 0x190148: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
label_19014c:
    if (ctx->pc == 0x19014Cu) {
        ctx->pc = 0x19014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190148u;
        // 0x19014c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190150u;
        goto label_190150;
    }
    ctx->pc = 0x190148u;
    {
        const bool branch_taken_0x190148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x190148) {
            ctx->pc = 0x19014Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190148u;
            // 0x19014c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190174u;
            goto label_190174;
        }
    }
    ctx->pc = 0x190150u;
label_190150:
    // 0x190150: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x190150u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_190154:
    // 0x190154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190158:
    // 0x190158: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x190158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19015c:
    // 0x19015c: 0xc0e1c74  jal         func_3871D0
label_190160:
    if (ctx->pc == 0x190160u) {
        ctx->pc = 0x190160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19015Cu;
        // 0x190160: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190164u;
        goto label_190164;
    }
    ctx->pc = 0x19015Cu;
    SET_GPR_U32(ctx, 31, 0x190164u);
    ctx->pc = 0x190160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19015Cu;
    // 0x190160: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3871D0u, 0x19015Cu, 0x190164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190164u;
label_190164:
    // 0x190164: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x190164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_190168:
    // 0x190168: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x190168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_19016c:
    // 0x19016c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x19016cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_190170:
    // 0x190170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_190174:
    // 0x190174: 0x2a02006c  slti        $v0, $s0, 0x6C
    ctx->pc = 0x190174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)108) ? 1 : 0);
label_190178:
    // 0x190178: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_19017c:
    if (ctx->pc == 0x19017Cu) {
        ctx->pc = 0x19017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190178u;
        // 0x19017c: 0x215001a  div         $zero, $s0, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190180u;
        goto label_190180;
    }
    ctx->pc = 0x190178u;
    {
        const bool branch_taken_0x190178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190178) {
            ctx->pc = 0x19017Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190178u;
            // 0x19017c: 0x215001a  div         $zero, $s0, $s5 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1900E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1900e8;
        }
    }
    ctx->pc = 0x190180u;
label_190180:
    // 0x190180: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x190180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_190184:
    // 0x190184: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x190184u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_190188:
    // 0x190188: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_19018c:
    // 0x19018c: 0x8fa4048c  lw          $a0, 0x48C($sp)
    ctx->pc = 0x19018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
label_190190:
    // 0x190190: 0x78430130  lq          $v1, 0x130($v0)
    ctx->pc = 0x190190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 304)));
label_190194:
    // 0x190194: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190198:
    // 0x190198: 0x7e450010  sq          $a1, 0x10($s2)
    ctx->pc = 0x190198u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 5));
label_19019c:
    // 0x19019c: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x19019cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1901a0:
    // 0x1901a0: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x1901a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_1901a4:
    // 0x1901a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1901a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1901a8:
    // 0x1901a8: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x1901a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_1901ac:
    // 0x1901ac: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x1901acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
label_1901b0:
    // 0x1901b0: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x1901b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
label_1901b4:
    // 0x1901b4: 0xafa00318  sw          $zero, 0x318($sp)
    ctx->pc = 0x1901b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 0));
label_1901b8:
    // 0x1901b8: 0xafa0031c  sw          $zero, 0x31C($sp)
    ctx->pc = 0x1901b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 0));
label_1901bc:
    // 0x1901bc: 0xafa00320  sw          $zero, 0x320($sp)
    ctx->pc = 0x1901bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 0));
label_1901c0:
    // 0x1901c0: 0xafa00324  sw          $zero, 0x324($sp)
    ctx->pc = 0x1901c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 0));
label_1901c4:
    // 0x1901c4: 0xafa00328  sw          $zero, 0x328($sp)
    ctx->pc = 0x1901c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 0));
label_1901c8:
    // 0x1901c8: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x1901c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
label_1901cc:
    // 0x1901cc: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x1901ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
label_1901d0:
    // 0x1901d0: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x1901d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
label_1901d4:
    // 0x1901d4: 0xafa00338  sw          $zero, 0x338($sp)
    ctx->pc = 0x1901d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
label_1901d8:
    // 0x1901d8: 0xafa0033c  sw          $zero, 0x33C($sp)
    ctx->pc = 0x1901d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 0));
label_1901dc:
    // 0x1901dc: 0xafa00340  sw          $zero, 0x340($sp)
    ctx->pc = 0x1901dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 0));
label_1901e0:
    // 0x1901e0: 0xafa00344  sw          $zero, 0x344($sp)
    ctx->pc = 0x1901e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 0));
label_1901e4:
    // 0x1901e4: 0xc0d0aa8  jal         func_342AA0
label_1901e8:
    if (ctx->pc == 0x1901E8u) {
        ctx->pc = 0x1901E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901E4u;
        // 0x1901e8: 0xafa00348  sw          $zero, 0x348($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901ECu;
        goto label_1901ec;
    }
    ctx->pc = 0x1901E4u;
    SET_GPR_U32(ctx, 31, 0x1901ECu);
    ctx->pc = 0x1901E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901E4u;
    // 0x1901e8: 0xafa00348  sw          $zero, 0x348($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x1901E4u, 0x1901ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901ECu;
label_1901ec:
    // 0x1901ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1901ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1901f0:
    // 0x1901f0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1901f4:
    // 0x1901f4: 0x8c830638  lw          $v1, 0x638($a0)
    ctx->pc = 0x1901f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1592)));
label_1901f8:
    // 0x1901f8: 0xafa30474  sw          $v1, 0x474($sp)
    ctx->pc = 0x1901f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 3));
label_1901fc:
    // 0x1901fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_190200:
    // 0x190200: 0x846500f0  lh          $a1, 0xF0($v1)
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_190204:
    // 0x190204: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x190204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_190208:
    // 0x190208: 0x40f809  jalr        $v0
label_19020c:
    if (ctx->pc == 0x19020Cu) {
        ctx->pc = 0x19020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190208u;
        // 0x19020c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190210u;
        goto label_190210;
    }
    ctx->pc = 0x190208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190210u);
        ctx->pc = 0x19020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190208u;
        // 0x19020c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190208u, 0x190210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190210u;
label_190210:
    // 0x190210: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x190210u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_190214:
    // 0x190214: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x190214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
label_190218:
    // 0x190218: 0xafa20310  sw          $v0, 0x310($sp)
    ctx->pc = 0x190218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
label_19021c:
    // 0x19021c: 0x2463f7b8  addiu       $v1, $v1, -0x848
    ctx->pc = 0x19021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965176));
label_190220:
    // 0x190220: 0x8fa2048c  lw          $v0, 0x48C($sp)
    ctx->pc = 0x190220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
label_190224:
    // 0x190224: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x190224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_190228:
    // 0x190228: 0x3484b812  ori         $a0, $a0, 0xB812
    ctx->pc = 0x190228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47122);
label_19022c:
    // 0x19022c: 0xafa30348  sw          $v1, 0x348($sp)
    ctx->pc = 0x19022cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 3));
label_190230:
    // 0x190230: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_190234:
    // 0x190234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190238:
    // 0x190238: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x190238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_19023c:
    // 0x19023c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x19023cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_190240:
    // 0x190240: 0xafa40320  sw          $a0, 0x320($sp)
    ctx->pc = 0x190240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 4));
label_190244:
    // 0x190244: 0xafa20314  sw          $v0, 0x314($sp)
    ctx->pc = 0x190244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 2));
label_190248:
    // 0x190248: 0xafa9031c  sw          $t1, 0x31C($sp)
    ctx->pc = 0x190248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 9));
label_19024c:
    // 0x19024c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_190250:
    // 0x190250: 0xafa50330  sw          $a1, 0x330($sp)
    ctx->pc = 0x190250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 5));
label_190254:
    // 0x190254: 0xafa60328  sw          $a2, 0x328($sp)
    ctx->pc = 0x190254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 6));
label_190258:
    // 0x190258: 0xafa7032c  sw          $a3, 0x32C($sp)
    ctx->pc = 0x190258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 7));
label_19025c:
    // 0x19025c: 0xafa80324  sw          $t0, 0x324($sp)
    ctx->pc = 0x19025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 8));
label_190260:
    // 0x190260: 0x8fa30470  lw          $v1, 0x470($sp)
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_190264:
    // 0x190264: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_190268:
    // 0x190268: 0xc0e44cc  jal         func_391330
label_19026c:
    if (ctx->pc == 0x19026Cu) {
        ctx->pc = 0x19026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190268u;
        // 0x19026c: 0x94650112  lhu         $a1, 0x112($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190270u;
        goto label_190270;
    }
    ctx->pc = 0x190268u;
    SET_GPR_U32(ctx, 31, 0x190270u);
    ctx->pc = 0x19026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190268u;
    // 0x19026c: 0x94650112  lhu         $a1, 0x112($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x190268u, 0x190270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190270u;
label_190270:
    // 0x190270: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x190270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190274:
    // 0x190274: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x190274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_190278:
    // 0x190278: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x190278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19027c:
    // 0x19027c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19027cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190280:
    // 0x190280: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x190280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_190284:
    // 0x190284: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_190288:
    // 0x190288: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x190288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_19028c:
    // 0x19028c: 0xac400638  sw          $zero, 0x638($v0)
    ctx->pc = 0x19028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1592), GPR_U32(ctx, 0));
label_190290:
    // 0x190290: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_190294:
    // 0x190294: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_190298:
    // 0x190298: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19029c:
    // 0x19029c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x19029cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1902a0:
    // 0x1902a0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1902a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1902a4:
    // 0x1902a4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x1902a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_1902a8:
    // 0x1902a8: 0x8fa6047c  lw          $a2, 0x47C($sp)
    ctx->pc = 0x1902a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1148)));
label_1902ac:
    // 0x1902ac: 0x7fa70460  sq          $a3, 0x460($sp)
    ctx->pc = 0x1902acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 7));
label_1902b0:
    // 0x1902b0: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_1902b4:
    // 0x1902b4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1902b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1902b8:
    // 0x1902b8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1902b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1902bc:
    // 0x1902bc: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x1902bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_1902c0:
    // 0x1902c0: 0x78420120  lq          $v0, 0x120($v0)
    ctx->pc = 0x1902c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 288)));
label_1902c4:
    // 0x1902c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1902c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1902c8:
    // 0x1902c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1902c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1902cc:
    // 0x1902cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1902ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1902d0:
    // 0x1902d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1902d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1902d4:
    // 0x1902d4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1902d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1902d8:
    // 0x1902d8: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x1902d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_1902dc:
    // 0x1902dc: 0xc0cf9fc  jal         func_33E7F0
label_1902e0:
    if (ctx->pc == 0x1902E0u) {
        ctx->pc = 0x1902E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902DCu;
        // 0x1902e0: 0x7fa302f0  sq          $v1, 0x2F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902E4u;
        goto label_1902e4;
    }
    ctx->pc = 0x1902DCu;
    SET_GPR_U32(ctx, 31, 0x1902E4u);
    ctx->pc = 0x1902E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902DCu;
    // 0x1902e0: 0x7fa302f0  sq          $v1, 0x2F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x1902DCu, 0x1902E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902E4u;
label_1902e4:
    // 0x1902e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1902e8:
    if (ctx->pc == 0x1902E8u) {
        ctx->pc = 0x1902E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902E4u;
        // 0x1902e8: 0x8fa50390  lw          $a1, 0x390($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902ECu;
        goto label_1902ec;
    }
    ctx->pc = 0x1902E4u;
    {
        const bool branch_taken_0x1902e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1902E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902E4u;
        // 0x1902e8: 0x8fa50390  lw          $a1, 0x390($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902e4) {
            ctx->pc = 0x190314u;
            goto label_190314;
        }
    }
    ctx->pc = 0x1902ECu;
label_1902ec:
    // 0x1902ec: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_1902f0:
    if (ctx->pc == 0x1902F0u) {
        ctx->pc = 0x1902F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902ECu;
        // 0x1902f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902F4u;
        goto label_1902f4;
    }
    ctx->pc = 0x1902ECu;
    {
        const bool branch_taken_0x1902ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902ec) {
            ctx->pc = 0x1902F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902ECu;
            // 0x1902f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190318u;
            goto label_190318;
        }
    }
    ctx->pc = 0x1902F4u;
label_1902f4:
    // 0x1902f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1902f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1902f8:
    // 0x1902f8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1902fc:
    // 0x1902fc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1902fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_190300:
    // 0x190300: 0x40f809  jalr        $v0
label_190304:
    if (ctx->pc == 0x190304u) {
        ctx->pc = 0x190304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190300u;
        // 0x190304: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190308u;
        goto label_190308;
    }
    ctx->pc = 0x190300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190308u);
        ctx->pc = 0x190304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190300u;
        // 0x190304: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190300u, 0x190308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190308u;
label_190308:
    // 0x190308: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x190308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_19030c:
    // 0x19030c: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_190310:
    if (ctx->pc == 0x190310u) {
        ctx->pc = 0x190310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19030Cu;
        // 0x190310: 0x8fa30390  lw          $v1, 0x390($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190314u;
        goto label_190314;
    }
    ctx->pc = 0x19030Cu;
    {
        const bool branch_taken_0x19030c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19030Cu;
        // 0x190310: 0x8fa30390  lw          $v1, 0x390($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19030c) {
            ctx->pc = 0x1904ECu;
            goto label_1904ec;
        }
    }
    ctx->pc = 0x190314u;
label_190314:
    // 0x190314: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_190318:
    // 0x190318: 0x2e620012  sltiu       $v0, $s3, 0x12
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_19031c:
    // 0x19031c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_190320:
    if (ctx->pc == 0x190320u) {
        ctx->pc = 0x190320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19031Cu;
        // 0x190320: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190324u;
        goto label_190324;
    }
    ctx->pc = 0x19031Cu;
    {
        const bool branch_taken_0x19031c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19031Cu;
        // 0x190320: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19031c) {
            ctx->pc = 0x190290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190290;
        }
    }
    ctx->pc = 0x190324u;
label_190324:
    // 0x190324: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_190328:
    // 0x190328: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19032c:
    // 0x19032c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x19032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_190330:
    // 0x190330: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
label_190334:
    // 0x190334: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x190334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_190338:
    // 0x190338: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x190338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19033c:
    // 0x19033c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19033cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_190340:
    // 0x190340: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190344:
    // 0x190344: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x190344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_190348:
    // 0x190348: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_19034c:
    // 0x19034c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_190350:
    if (ctx->pc == 0x190350u) {
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19034Cu;
        // 0x190350: 0xafa40320  sw          $a0, 0x320($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190354u;
        goto label_190354;
    }
    ctx->pc = 0x19034Cu;
    {
        const bool branch_taken_0x19034c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19034Cu;
        // 0x190350: 0xafa40320  sw          $a0, 0x320($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19034c) {
            ctx->pc = 0x1904A4u;
            goto label_1904a4;
        }
    }
    ctx->pc = 0x190354u;
label_190354:
    // 0x190354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_190358:
    // 0x190358: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x190358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19035c:
    // 0x19035c: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_190360:
    // 0x190360: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_190364:
    // 0x190364: 0x0  nop
    ctx->pc = 0x190364u;
    // NOP
label_190368:
    // 0x190368: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_19036c:
    // 0x19036c: 0x8fa50488  lw          $a1, 0x488($sp)
    ctx->pc = 0x19036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_190370:
    // 0x190370: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_190374:
    // 0x190374: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x190374u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_190378:
    // 0x190378: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x190378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19037c:
    // 0x19037c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_190380:
    // 0x190380: 0x8fa6047c  lw          $a2, 0x47C($sp)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1148)));
label_190384:
    // 0x190384: 0x7fa70460  sq          $a3, 0x460($sp)
    ctx->pc = 0x190384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 7));
label_190388:
    // 0x190388: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_19038c:
    // 0x19038c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x19038cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_190390:
    // 0x190390: 0x7a030130  lq          $v1, 0x130($s0)
    ctx->pc = 0x190390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 304)));
label_190394:
    // 0x190394: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x190394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_190398:
    // 0x190398: 0x78420120  lq          $v0, 0x120($v0)
    ctx->pc = 0x190398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 288)));
label_19039c:
    // 0x19039c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19039cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1903a0:
    // 0x1903a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1903a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1903a4:
    // 0x1903a4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1903a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1903a8:
    // 0x1903a8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1903a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1903ac:
    // 0x1903ac: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1903acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1903b0:
    // 0x1903b0: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x1903b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_1903b4:
    // 0x1903b4: 0xc0cf9fc  jal         func_33E7F0
label_1903b8:
    if (ctx->pc == 0x1903B8u) {
        ctx->pc = 0x1903B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903B4u;
        // 0x1903b8: 0x7fa302f0  sq          $v1, 0x2F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903BCu;
        goto label_1903bc;
    }
    ctx->pc = 0x1903B4u;
    SET_GPR_U32(ctx, 31, 0x1903BCu);
    ctx->pc = 0x1903B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903B4u;
    // 0x1903b8: 0x7fa302f0  sq          $v1, 0x2F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x1903B4u, 0x1903BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903BCu;
label_1903bc:
    // 0x1903bc: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_1903c0:
    if (ctx->pc == 0x1903C0u) {
        ctx->pc = 0x1903C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903BCu;
        // 0x1903c0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903C4u;
        goto label_1903c4;
    }
    ctx->pc = 0x1903BCu;
    {
        const bool branch_taken_0x1903bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1903bc) {
            ctx->pc = 0x1903C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1903BCu;
            // 0x1903c0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190494u;
            goto label_190494;
        }
    }
    ctx->pc = 0x1903C4u;
label_1903c4:
    // 0x1903c4: 0x16d30005  bne         $s6, $s3, . + 4 + (0x5 << 2)
label_1903c8:
    if (ctx->pc == 0x1903C8u) {
        ctx->pc = 0x1903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903C4u;
        // 0x1903c8: 0xc7a103d0  lwc1        $f1, 0x3D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903CCu;
        goto label_1903cc;
    }
    ctx->pc = 0x1903C4u;
    {
        const bool branch_taken_0x1903c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        ctx->pc = 0x1903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903C4u;
        // 0x1903c8: 0xc7a103d0  lwc1        $f1, 0x3D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903c4) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903CCu;
label_1903cc:
    // 0x1903cc: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x1903ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1903d0:
    // 0x1903d0: 0x0  nop
    ctx->pc = 0x1903d0u;
    // NOP
label_1903d4:
    // 0x1903d4: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_1903d8:
    if (ctx->pc == 0x1903D8u) {
        ctx->pc = 0x1903D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903D4u;
        // 0x1903d8: 0x8fa30478  lw          $v1, 0x478($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903DCu;
        goto label_1903dc;
    }
    ctx->pc = 0x1903D4u;
    {
        const bool branch_taken_0x1903d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1903D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903D4u;
        // 0x1903d8: 0x8fa30478  lw          $v1, 0x478($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903d4) {
            ctx->pc = 0x1904A8u;
            goto label_1904a8;
        }
    }
    ctx->pc = 0x1903DCu;
label_1903dc:
    // 0x1903dc: 0x7ba502e0  lq          $a1, 0x2E0($sp)
    ctx->pc = 0x1903dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_1903e0:
    // 0x1903e0: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x1903e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_1903e4:
    // 0x1903e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1903e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1903e8:
    // 0x1903e8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1903e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1903ec:
    // 0x1903ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1903ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1903f0:
    // 0x1903f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1903f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1903f4:
    // 0x1903f4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1903f4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_1903f8:
    // 0x1903f8: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x1903f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_1903fc:
    // 0x1903fc: 0x7fa502f0  sq          $a1, 0x2F0($sp)
    ctx->pc = 0x1903fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 5));
label_190400:
    // 0x190400: 0x7fa502e0  sq          $a1, 0x2E0($sp)
    ctx->pc = 0x190400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 5));
label_190404:
    // 0x190404: 0x8fb40390  lw          $s4, 0x390($sp)
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_190408:
    // 0x190408: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x190408u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_19040c:
    // 0x19040c: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x19040cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_190410:
    // 0x190410: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x190410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_190414:
    // 0x190414: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x190414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_190418:
    // 0x190418: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x190418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19041c:
    // 0x19041c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19041cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_190420:
    // 0x190420: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x190420u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_190424:
    // 0x190424: 0x7fa502f0  sq          $a1, 0x2F0($sp)
    ctx->pc = 0x190424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 5));
label_190428:
    // 0x190428: 0x7fa402e0  sq          $a0, 0x2E0($sp)
    ctx->pc = 0x190428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 4));
label_19042c:
    // 0x19042c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x19042cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_190430:
    // 0x190430: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x190430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_190434:
    // 0x190434: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190438:
    // 0x190438: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x190438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19043c:
    // 0x19043c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19043cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_190440:
    // 0x190440: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x190440u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_190444:
    // 0x190444: 0x7e460020  sq          $a2, 0x20($s2)
    ctx->pc = 0x190444u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 6));
label_190448:
    // 0x190448: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x190448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19044c:
    // 0x19044c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19044cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_190450:
    // 0x190450: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190454:
    // 0x190454: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x190454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_190458:
    // 0x190458: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x190458u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_19045c:
    // 0x19045c: 0x7fa402e0  sq          $a0, 0x2E0($sp)
    ctx->pc = 0x19045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 4));
label_190460:
    // 0x190460: 0x7fa402f0  sq          $a0, 0x2F0($sp)
    ctx->pc = 0x190460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 4));
label_190464:
    // 0x190464: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x190464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_190468:
    // 0x190468: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x190468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_19046c:
    // 0x19046c: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x19046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
label_190470:
    // 0x190470: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x190470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_190474:
    // 0x190474: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x190474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_190478:
    // 0x190478: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x190478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19047c:
    // 0x19047c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19047cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_190480:
    // 0x190480: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x190480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_190484:
    // 0x190484: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x190484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_190488:
    // 0x190488: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x190488u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_19048c:
    // 0x19048c: 0x10000005  b           . + 4 + (0x5 << 2)
label_190490:
    if (ctx->pc == 0x190490u) {
        ctx->pc = 0x190490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19048Cu;
        // 0x190490: 0x7e450020  sq          $a1, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190494u;
        goto label_190494;
    }
    ctx->pc = 0x19048Cu;
    {
        const bool branch_taken_0x19048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19048Cu;
        // 0x190490: 0x7e450020  sq          $a1, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19048c) {
            ctx->pc = 0x1904A4u;
            goto label_1904a4;
        }
    }
    ctx->pc = 0x190494u;
label_190494:
    // 0x190494: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x190494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_190498:
    // 0x190498: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x190498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_19049c:
    // 0x19049c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1904a0:
    if (ctx->pc == 0x1904A0u) {
        ctx->pc = 0x1904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19049Cu;
        // 0x1904a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904A4u;
        goto label_1904a4;
    }
    ctx->pc = 0x19049Cu;
    {
        const bool branch_taken_0x19049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19049Cu;
        // 0x1904a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19049c) {
            ctx->pc = 0x190368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190368;
        }
    }
    ctx->pc = 0x1904A4u;
label_1904a4:
    // 0x1904a4: 0x8fa30478  lw          $v1, 0x478($sp)
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
label_1904a8:
    // 0x1904a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1904ac:
    if (ctx->pc == 0x1904ACu) {
        ctx->pc = 0x1904B0u;
        goto label_1904b0;
    }
    ctx->pc = 0x1904A8u;
    {
        const bool branch_taken_0x1904a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904a8) {
            ctx->pc = 0x1904D0u;
            goto label_1904d0;
        }
    }
    ctx->pc = 0x1904B0u;
label_1904b0:
    // 0x1904b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1904b4:
    // 0x1904b4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1904b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1904b8:
    // 0x1904b8: 0xac430638  sw          $v1, 0x638($v0)
    ctx->pc = 0x1904b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1592), GPR_U32(ctx, 3));
label_1904bc:
    // 0x1904bc: 0x8fa20474  lw          $v0, 0x474($sp)
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1140)));
label_1904c0:
    // 0x1904c0: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
label_1904c4:
    if (ctx->pc == 0x1904C4u) {
        ctx->pc = 0x1904C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904C0u;
        // 0x1904c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904C8u;
        goto label_1904c8;
    }
    ctx->pc = 0x1904C0u;
    {
        const bool branch_taken_0x1904c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1904C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904C0u;
        // 0x1904c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904c0) {
            ctx->pc = 0x1904D0u;
            goto label_1904d0;
        }
    }
    ctx->pc = 0x1904C8u;
label_1904c8:
    // 0x1904c8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1904c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1904cc:
    // 0x1904cc: 0xac62063c  sw          $v0, 0x63C($v1)
    ctx->pc = 0x1904ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1596), GPR_U32(ctx, 2));
label_1904d0:
    // 0x1904d0: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
label_1904d4:
    if (ctx->pc == 0x1904D4u) {
        ctx->pc = 0x1904D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904D0u;
        // 0x1904d4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904D8u;
        goto label_1904d8;
    }
    ctx->pc = 0x1904D0u;
    {
        const bool branch_taken_0x1904d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904d0) {
            ctx->pc = 0x1904D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1904D0u;
            // 0x1904d4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1904FCu;
            goto label_1904fc;
        }
    }
    ctx->pc = 0x1904D8u;
label_1904d8:
    // 0x1904d8: 0xc0e896e  jal         func_3A25B8
label_1904dc:
    if (ctx->pc == 0x1904DCu) {
        ctx->pc = 0x1904DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904D8u;
        // 0x1904dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904E0u;
        goto label_1904e0;
    }
    ctx->pc = 0x1904D8u;
    SET_GPR_U32(ctx, 31, 0x1904E0u);
    ctx->pc = 0x1904DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904D8u;
    // 0x1904dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x1904D8u, 0x1904E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904E0u;
label_1904e0:
    // 0x1904e0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1904e4:
    // 0x1904e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1904e8:
    if (ctx->pc == 0x1904E8u) {
        ctx->pc = 0x1904E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904E4u;
        // 0x1904e8: 0xac620634  sw          $v0, 0x634($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904ECu;
        goto label_1904ec;
    }
    ctx->pc = 0x1904E4u;
    {
        const bool branch_taken_0x1904e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904E4u;
        // 0x1904e8: 0xac620634  sw          $v0, 0x634($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904e4) {
            ctx->pc = 0x190500u;
            goto label_190500;
        }
    }
    ctx->pc = 0x1904ECu;
label_1904ec:
    // 0x1904ec: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1904f0:
    // 0x1904f0: 0xc7b503d0  lwc1        $f21, 0x3D0($sp)
    ctx->pc = 0x1904f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1904f4:
    // 0x1904f4: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
label_1904f8:
    if (ctx->pc == 0x1904F8u) {
        ctx->pc = 0x1904F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904F4u;
        // 0x1904f8: 0xafa30478  sw          $v1, 0x478($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904FCu;
        goto label_1904fc;
    }
    ctx->pc = 0x1904F4u;
    {
        const bool branch_taken_0x1904f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904F4u;
        // 0x1904f8: 0xafa30478  sw          $v1, 0x478($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904f4) {
            ctx->pc = 0x190324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190324;
        }
    }
    ctx->pc = 0x1904FCu;
label_1904fc:
    // 0x1904fc: 0xac400634  sw          $zero, 0x634($v0)
    ctx->pc = 0x1904fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1588), GPR_U32(ctx, 0));
label_190500:
    // 0x190500: 0xc087502  jal         func_21D408
label_190504:
    if (ctx->pc == 0x190504u) {
        ctx->pc = 0x190504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190500u;
        // 0x190504: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190508u;
        goto label_190508;
    }
    ctx->pc = 0x190500u;
    SET_GPR_U32(ctx, 31, 0x190508u);
    ctx->pc = 0x190504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190500u;
    // 0x190504: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x190500u, 0x190508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190508u;
label_190508:
    // 0x190508: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x190508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19050c:
    // 0x19050c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190510:
    // 0x190510: 0xc0a33f8  jal         func_28CFE0
label_190514:
    if (ctx->pc == 0x190514u) {
        ctx->pc = 0x190514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190510u;
        // 0x190514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190518u;
        goto label_190518;
    }
    ctx->pc = 0x190510u;
    SET_GPR_U32(ctx, 31, 0x190518u);
    ctx->pc = 0x190514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190510u;
    // 0x190514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x190510u, 0x190518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190518u;
label_190518:
    // 0x190518: 0xc087502  jal         func_21D408
label_19051c:
    if (ctx->pc == 0x19051Cu) {
        ctx->pc = 0x19051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190518u;
        // 0x19051c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190520u;
        goto label_190520;
    }
    ctx->pc = 0x190518u;
    SET_GPR_U32(ctx, 31, 0x190520u);
    ctx->pc = 0x19051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190518u;
    // 0x19051c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x190518u, 0x190520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190520u;
label_190520:
    // 0x190520: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_190524:
    // 0x190524: 0x8fa50484  lw          $a1, 0x484($sp)
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_190528:
    // 0x190528: 0x8c66bd30  lw          $a2, -0x42D0($v1)
    ctx->pc = 0x190528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_19052c:
    // 0x19052c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x19052cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_190530:
    // 0x190530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x190530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190534:
    // 0x190534: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x190534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_190538:
    // 0x190538: 0xac460128  sw          $a2, 0x128($v0)
    ctx->pc = 0x190538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 6));
label_19053c:
    // 0x19053c: 0xc063e9a  jal         func_18FA68
label_190540:
    if (ctx->pc == 0x190540u) {
        ctx->pc = 0x190540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19053Cu;
        // 0x190540: 0x8fa60480  lw          $a2, 0x480($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190544u;
        goto label_190544;
    }
    ctx->pc = 0x19053Cu;
    SET_GPR_U32(ctx, 31, 0x190544u);
    ctx->pc = 0x190540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19053Cu;
    // 0x190540: 0x8fa60480  lw          $a2, 0x480($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FA68u, 0x19053Cu, 0x190544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190544u;
label_190544:
    // 0x190544: 0x8fa4048c  lw          $a0, 0x48C($sp)
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
label_190548:
    // 0x190548: 0xc0d0ab8  jal         func_342AE0
label_19054c:
    if (ctx->pc == 0x19054Cu) {
        ctx->pc = 0x19054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190548u;
        // 0x19054c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190550u;
        goto label_190550;
    }
    ctx->pc = 0x190548u;
    SET_GPR_U32(ctx, 31, 0x190550u);
    ctx->pc = 0x19054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190548u;
    // 0x19054c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AE0u, 0x190548u, 0x190550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190550u;
label_190550:
    // 0x190550: 0x7bb00520  lq          $s0, 0x520($sp)
    ctx->pc = 0x190550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_190554:
    // 0x190554: 0x7bb10510  lq          $s1, 0x510($sp)
    ctx->pc = 0x190554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_190558:
    // 0x190558: 0x7bb20500  lq          $s2, 0x500($sp)
    ctx->pc = 0x190558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_19055c:
    // 0x19055c: 0x7bb304f0  lq          $s3, 0x4F0($sp)
    ctx->pc = 0x19055cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_190560:
    // 0x190560: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x190560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_190564:
    // 0x190564: 0x7bb504d0  lq          $s5, 0x4D0($sp)
    ctx->pc = 0x190564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_190568:
    // 0x190568: 0x7bb604c0  lq          $s6, 0x4C0($sp)
    ctx->pc = 0x190568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_19056c:
    // 0x19056c: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x19056cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_190570:
    // 0x190570: 0x7bbe04a0  lq          $fp, 0x4A0($sp)
    ctx->pc = 0x190570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_190574:
    // 0x190574: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x190574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_190578:
    // 0x190578: 0xc7b50538  lwc1        $f21, 0x538($sp)
    ctx->pc = 0x190578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19057c:
    // 0x19057c: 0xc7b40530  lwc1        $f20, 0x530($sp)
    ctx->pc = 0x19057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190580:
    // 0x190580: 0x3e00008  jr          $ra
label_190584:
    if (ctx->pc == 0x190584u) {
        ctx->pc = 0x190584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190580u;
        // 0x190584: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190588u;
        goto label_fallthrough_0x190580;
    }
    ctx->pc = 0x190580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190580u;
        // 0x190584: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x190580:
    ctx->pc = 0x190588u;
}
