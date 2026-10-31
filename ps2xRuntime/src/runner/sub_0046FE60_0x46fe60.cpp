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

// Function: sub_0046FE60
// Address: 0x46fe60 - 0x470490
void sub_0046FE60_0x46fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FE60_0x46fe60");
#endif

    switch (ctx->pc) {
        case 0x46fe60u: goto label_46fe60;
        case 0x46fe64u: goto label_46fe64;
        case 0x46fe68u: goto label_46fe68;
        case 0x46fe6cu: goto label_46fe6c;
        case 0x46fe70u: goto label_46fe70;
        case 0x46fe74u: goto label_46fe74;
        case 0x46fe78u: goto label_46fe78;
        case 0x46fe7cu: goto label_46fe7c;
        case 0x46fe80u: goto label_46fe80;
        case 0x46fe84u: goto label_46fe84;
        case 0x46fe88u: goto label_46fe88;
        case 0x46fe8cu: goto label_46fe8c;
        case 0x46fe90u: goto label_46fe90;
        case 0x46fe94u: goto label_46fe94;
        case 0x46fe98u: goto label_46fe98;
        case 0x46fe9cu: goto label_46fe9c;
        case 0x46fea0u: goto label_46fea0;
        case 0x46fea4u: goto label_46fea4;
        case 0x46fea8u: goto label_46fea8;
        case 0x46feacu: goto label_46feac;
        case 0x46feb0u: goto label_46feb0;
        case 0x46feb4u: goto label_46feb4;
        case 0x46feb8u: goto label_46feb8;
        case 0x46febcu: goto label_46febc;
        case 0x46fec0u: goto label_46fec0;
        case 0x46fec4u: goto label_46fec4;
        case 0x46fec8u: goto label_46fec8;
        case 0x46feccu: goto label_46fecc;
        case 0x46fed0u: goto label_46fed0;
        case 0x46fed4u: goto label_46fed4;
        case 0x46fed8u: goto label_46fed8;
        case 0x46fedcu: goto label_46fedc;
        case 0x46fee0u: goto label_46fee0;
        case 0x46fee4u: goto label_46fee4;
        case 0x46fee8u: goto label_46fee8;
        case 0x46feecu: goto label_46feec;
        case 0x46fef0u: goto label_46fef0;
        case 0x46fef4u: goto label_46fef4;
        case 0x46fef8u: goto label_46fef8;
        case 0x46fefcu: goto label_46fefc;
        case 0x46ff00u: goto label_46ff00;
        case 0x46ff04u: goto label_46ff04;
        case 0x46ff08u: goto label_46ff08;
        case 0x46ff0cu: goto label_46ff0c;
        case 0x46ff10u: goto label_46ff10;
        case 0x46ff14u: goto label_46ff14;
        case 0x46ff18u: goto label_46ff18;
        case 0x46ff1cu: goto label_46ff1c;
        case 0x46ff20u: goto label_46ff20;
        case 0x46ff24u: goto label_46ff24;
        case 0x46ff28u: goto label_46ff28;
        case 0x46ff2cu: goto label_46ff2c;
        case 0x46ff30u: goto label_46ff30;
        case 0x46ff34u: goto label_46ff34;
        case 0x46ff38u: goto label_46ff38;
        case 0x46ff3cu: goto label_46ff3c;
        case 0x46ff40u: goto label_46ff40;
        case 0x46ff44u: goto label_46ff44;
        case 0x46ff48u: goto label_46ff48;
        case 0x46ff4cu: goto label_46ff4c;
        case 0x46ff50u: goto label_46ff50;
        case 0x46ff54u: goto label_46ff54;
        case 0x46ff58u: goto label_46ff58;
        case 0x46ff5cu: goto label_46ff5c;
        case 0x46ff60u: goto label_46ff60;
        case 0x46ff64u: goto label_46ff64;
        case 0x46ff68u: goto label_46ff68;
        case 0x46ff6cu: goto label_46ff6c;
        case 0x46ff70u: goto label_46ff70;
        case 0x46ff74u: goto label_46ff74;
        case 0x46ff78u: goto label_46ff78;
        case 0x46ff7cu: goto label_46ff7c;
        case 0x46ff80u: goto label_46ff80;
        case 0x46ff84u: goto label_46ff84;
        case 0x46ff88u: goto label_46ff88;
        case 0x46ff8cu: goto label_46ff8c;
        case 0x46ff90u: goto label_46ff90;
        case 0x46ff94u: goto label_46ff94;
        case 0x46ff98u: goto label_46ff98;
        case 0x46ff9cu: goto label_46ff9c;
        case 0x46ffa0u: goto label_46ffa0;
        case 0x46ffa4u: goto label_46ffa4;
        case 0x46ffa8u: goto label_46ffa8;
        case 0x46ffacu: goto label_46ffac;
        case 0x46ffb0u: goto label_46ffb0;
        case 0x46ffb4u: goto label_46ffb4;
        case 0x46ffb8u: goto label_46ffb8;
        case 0x46ffbcu: goto label_46ffbc;
        case 0x46ffc0u: goto label_46ffc0;
        case 0x46ffc4u: goto label_46ffc4;
        case 0x46ffc8u: goto label_46ffc8;
        case 0x46ffccu: goto label_46ffcc;
        case 0x46ffd0u: goto label_46ffd0;
        case 0x46ffd4u: goto label_46ffd4;
        case 0x46ffd8u: goto label_46ffd8;
        case 0x46ffdcu: goto label_46ffdc;
        case 0x46ffe0u: goto label_46ffe0;
        case 0x46ffe4u: goto label_46ffe4;
        case 0x46ffe8u: goto label_46ffe8;
        case 0x46ffecu: goto label_46ffec;
        case 0x46fff0u: goto label_46fff0;
        case 0x46fff4u: goto label_46fff4;
        case 0x46fff8u: goto label_46fff8;
        case 0x46fffcu: goto label_46fffc;
        case 0x470000u: goto label_470000;
        case 0x470004u: goto label_470004;
        case 0x470008u: goto label_470008;
        case 0x47000cu: goto label_47000c;
        case 0x470010u: goto label_470010;
        case 0x470014u: goto label_470014;
        case 0x470018u: goto label_470018;
        case 0x47001cu: goto label_47001c;
        case 0x470020u: goto label_470020;
        case 0x470024u: goto label_470024;
        case 0x470028u: goto label_470028;
        case 0x47002cu: goto label_47002c;
        case 0x470030u: goto label_470030;
        case 0x470034u: goto label_470034;
        case 0x470038u: goto label_470038;
        case 0x47003cu: goto label_47003c;
        case 0x470040u: goto label_470040;
        case 0x470044u: goto label_470044;
        case 0x470048u: goto label_470048;
        case 0x47004cu: goto label_47004c;
        case 0x470050u: goto label_470050;
        case 0x470054u: goto label_470054;
        case 0x470058u: goto label_470058;
        case 0x47005cu: goto label_47005c;
        case 0x470060u: goto label_470060;
        case 0x470064u: goto label_470064;
        case 0x470068u: goto label_470068;
        case 0x47006cu: goto label_47006c;
        case 0x470070u: goto label_470070;
        case 0x470074u: goto label_470074;
        case 0x470078u: goto label_470078;
        case 0x47007cu: goto label_47007c;
        case 0x470080u: goto label_470080;
        case 0x470084u: goto label_470084;
        case 0x470088u: goto label_470088;
        case 0x47008cu: goto label_47008c;
        case 0x470090u: goto label_470090;
        case 0x470094u: goto label_470094;
        case 0x470098u: goto label_470098;
        case 0x47009cu: goto label_47009c;
        case 0x4700a0u: goto label_4700a0;
        case 0x4700a4u: goto label_4700a4;
        case 0x4700a8u: goto label_4700a8;
        case 0x4700acu: goto label_4700ac;
        case 0x4700b0u: goto label_4700b0;
        case 0x4700b4u: goto label_4700b4;
        case 0x4700b8u: goto label_4700b8;
        case 0x4700bcu: goto label_4700bc;
        case 0x4700c0u: goto label_4700c0;
        case 0x4700c4u: goto label_4700c4;
        case 0x4700c8u: goto label_4700c8;
        case 0x4700ccu: goto label_4700cc;
        case 0x4700d0u: goto label_4700d0;
        case 0x4700d4u: goto label_4700d4;
        case 0x4700d8u: goto label_4700d8;
        case 0x4700dcu: goto label_4700dc;
        case 0x4700e0u: goto label_4700e0;
        case 0x4700e4u: goto label_4700e4;
        case 0x4700e8u: goto label_4700e8;
        case 0x4700ecu: goto label_4700ec;
        case 0x4700f0u: goto label_4700f0;
        case 0x4700f4u: goto label_4700f4;
        case 0x4700f8u: goto label_4700f8;
        case 0x4700fcu: goto label_4700fc;
        case 0x470100u: goto label_470100;
        case 0x470104u: goto label_470104;
        case 0x470108u: goto label_470108;
        case 0x47010cu: goto label_47010c;
        case 0x470110u: goto label_470110;
        case 0x470114u: goto label_470114;
        case 0x470118u: goto label_470118;
        case 0x47011cu: goto label_47011c;
        case 0x470120u: goto label_470120;
        case 0x470124u: goto label_470124;
        case 0x470128u: goto label_470128;
        case 0x47012cu: goto label_47012c;
        case 0x470130u: goto label_470130;
        case 0x470134u: goto label_470134;
        case 0x470138u: goto label_470138;
        case 0x47013cu: goto label_47013c;
        case 0x470140u: goto label_470140;
        case 0x470144u: goto label_470144;
        case 0x470148u: goto label_470148;
        case 0x47014cu: goto label_47014c;
        case 0x470150u: goto label_470150;
        case 0x470154u: goto label_470154;
        case 0x470158u: goto label_470158;
        case 0x47015cu: goto label_47015c;
        case 0x470160u: goto label_470160;
        case 0x470164u: goto label_470164;
        case 0x470168u: goto label_470168;
        case 0x47016cu: goto label_47016c;
        case 0x470170u: goto label_470170;
        case 0x470174u: goto label_470174;
        case 0x470178u: goto label_470178;
        case 0x47017cu: goto label_47017c;
        case 0x470180u: goto label_470180;
        case 0x470184u: goto label_470184;
        case 0x470188u: goto label_470188;
        case 0x47018cu: goto label_47018c;
        case 0x470190u: goto label_470190;
        case 0x470194u: goto label_470194;
        case 0x470198u: goto label_470198;
        case 0x47019cu: goto label_47019c;
        case 0x4701a0u: goto label_4701a0;
        case 0x4701a4u: goto label_4701a4;
        case 0x4701a8u: goto label_4701a8;
        case 0x4701acu: goto label_4701ac;
        case 0x4701b0u: goto label_4701b0;
        case 0x4701b4u: goto label_4701b4;
        case 0x4701b8u: goto label_4701b8;
        case 0x4701bcu: goto label_4701bc;
        case 0x4701c0u: goto label_4701c0;
        case 0x4701c4u: goto label_4701c4;
        case 0x4701c8u: goto label_4701c8;
        case 0x4701ccu: goto label_4701cc;
        case 0x4701d0u: goto label_4701d0;
        case 0x4701d4u: goto label_4701d4;
        case 0x4701d8u: goto label_4701d8;
        case 0x4701dcu: goto label_4701dc;
        case 0x4701e0u: goto label_4701e0;
        case 0x4701e4u: goto label_4701e4;
        case 0x4701e8u: goto label_4701e8;
        case 0x4701ecu: goto label_4701ec;
        case 0x4701f0u: goto label_4701f0;
        case 0x4701f4u: goto label_4701f4;
        case 0x4701f8u: goto label_4701f8;
        case 0x4701fcu: goto label_4701fc;
        case 0x470200u: goto label_470200;
        case 0x470204u: goto label_470204;
        case 0x470208u: goto label_470208;
        case 0x47020cu: goto label_47020c;
        case 0x470210u: goto label_470210;
        case 0x470214u: goto label_470214;
        case 0x470218u: goto label_470218;
        case 0x47021cu: goto label_47021c;
        case 0x470220u: goto label_470220;
        case 0x470224u: goto label_470224;
        case 0x470228u: goto label_470228;
        case 0x47022cu: goto label_47022c;
        case 0x470230u: goto label_470230;
        case 0x470234u: goto label_470234;
        case 0x470238u: goto label_470238;
        case 0x47023cu: goto label_47023c;
        case 0x470240u: goto label_470240;
        case 0x470244u: goto label_470244;
        case 0x470248u: goto label_470248;
        case 0x47024cu: goto label_47024c;
        case 0x470250u: goto label_470250;
        case 0x470254u: goto label_470254;
        case 0x470258u: goto label_470258;
        case 0x47025cu: goto label_47025c;
        case 0x470260u: goto label_470260;
        case 0x470264u: goto label_470264;
        case 0x470268u: goto label_470268;
        case 0x47026cu: goto label_47026c;
        case 0x470270u: goto label_470270;
        case 0x470274u: goto label_470274;
        case 0x470278u: goto label_470278;
        case 0x47027cu: goto label_47027c;
        case 0x470280u: goto label_470280;
        case 0x470284u: goto label_470284;
        case 0x470288u: goto label_470288;
        case 0x47028cu: goto label_47028c;
        case 0x470290u: goto label_470290;
        case 0x470294u: goto label_470294;
        case 0x470298u: goto label_470298;
        case 0x47029cu: goto label_47029c;
        case 0x4702a0u: goto label_4702a0;
        case 0x4702a4u: goto label_4702a4;
        case 0x4702a8u: goto label_4702a8;
        case 0x4702acu: goto label_4702ac;
        case 0x4702b0u: goto label_4702b0;
        case 0x4702b4u: goto label_4702b4;
        case 0x4702b8u: goto label_4702b8;
        case 0x4702bcu: goto label_4702bc;
        case 0x4702c0u: goto label_4702c0;
        case 0x4702c4u: goto label_4702c4;
        case 0x4702c8u: goto label_4702c8;
        case 0x4702ccu: goto label_4702cc;
        case 0x4702d0u: goto label_4702d0;
        case 0x4702d4u: goto label_4702d4;
        case 0x4702d8u: goto label_4702d8;
        case 0x4702dcu: goto label_4702dc;
        case 0x4702e0u: goto label_4702e0;
        case 0x4702e4u: goto label_4702e4;
        case 0x4702e8u: goto label_4702e8;
        case 0x4702ecu: goto label_4702ec;
        case 0x4702f0u: goto label_4702f0;
        case 0x4702f4u: goto label_4702f4;
        case 0x4702f8u: goto label_4702f8;
        case 0x4702fcu: goto label_4702fc;
        case 0x470300u: goto label_470300;
        case 0x470304u: goto label_470304;
        case 0x470308u: goto label_470308;
        case 0x47030cu: goto label_47030c;
        case 0x470310u: goto label_470310;
        case 0x470314u: goto label_470314;
        case 0x470318u: goto label_470318;
        case 0x47031cu: goto label_47031c;
        case 0x470320u: goto label_470320;
        case 0x470324u: goto label_470324;
        case 0x470328u: goto label_470328;
        case 0x47032cu: goto label_47032c;
        case 0x470330u: goto label_470330;
        case 0x470334u: goto label_470334;
        case 0x470338u: goto label_470338;
        case 0x47033cu: goto label_47033c;
        case 0x470340u: goto label_470340;
        case 0x470344u: goto label_470344;
        case 0x470348u: goto label_470348;
        case 0x47034cu: goto label_47034c;
        case 0x470350u: goto label_470350;
        case 0x470354u: goto label_470354;
        case 0x470358u: goto label_470358;
        case 0x47035cu: goto label_47035c;
        case 0x470360u: goto label_470360;
        case 0x470364u: goto label_470364;
        case 0x470368u: goto label_470368;
        case 0x47036cu: goto label_47036c;
        case 0x470370u: goto label_470370;
        case 0x470374u: goto label_470374;
        case 0x470378u: goto label_470378;
        case 0x47037cu: goto label_47037c;
        case 0x470380u: goto label_470380;
        case 0x470384u: goto label_470384;
        case 0x470388u: goto label_470388;
        case 0x47038cu: goto label_47038c;
        case 0x470390u: goto label_470390;
        case 0x470394u: goto label_470394;
        case 0x470398u: goto label_470398;
        case 0x47039cu: goto label_47039c;
        case 0x4703a0u: goto label_4703a0;
        case 0x4703a4u: goto label_4703a4;
        case 0x4703a8u: goto label_4703a8;
        case 0x4703acu: goto label_4703ac;
        case 0x4703b0u: goto label_4703b0;
        case 0x4703b4u: goto label_4703b4;
        case 0x4703b8u: goto label_4703b8;
        case 0x4703bcu: goto label_4703bc;
        case 0x4703c0u: goto label_4703c0;
        case 0x4703c4u: goto label_4703c4;
        case 0x4703c8u: goto label_4703c8;
        case 0x4703ccu: goto label_4703cc;
        case 0x4703d0u: goto label_4703d0;
        case 0x4703d4u: goto label_4703d4;
        case 0x4703d8u: goto label_4703d8;
        case 0x4703dcu: goto label_4703dc;
        case 0x4703e0u: goto label_4703e0;
        case 0x4703e4u: goto label_4703e4;
        case 0x4703e8u: goto label_4703e8;
        case 0x4703ecu: goto label_4703ec;
        case 0x4703f0u: goto label_4703f0;
        case 0x4703f4u: goto label_4703f4;
        case 0x4703f8u: goto label_4703f8;
        case 0x4703fcu: goto label_4703fc;
        case 0x470400u: goto label_470400;
        case 0x470404u: goto label_470404;
        case 0x470408u: goto label_470408;
        case 0x47040cu: goto label_47040c;
        case 0x470410u: goto label_470410;
        case 0x470414u: goto label_470414;
        case 0x470418u: goto label_470418;
        case 0x47041cu: goto label_47041c;
        case 0x470420u: goto label_470420;
        case 0x470424u: goto label_470424;
        case 0x470428u: goto label_470428;
        case 0x47042cu: goto label_47042c;
        case 0x470430u: goto label_470430;
        case 0x470434u: goto label_470434;
        case 0x470438u: goto label_470438;
        case 0x47043cu: goto label_47043c;
        case 0x470440u: goto label_470440;
        case 0x470444u: goto label_470444;
        case 0x470448u: goto label_470448;
        case 0x47044cu: goto label_47044c;
        case 0x470450u: goto label_470450;
        case 0x470454u: goto label_470454;
        case 0x470458u: goto label_470458;
        case 0x47045cu: goto label_47045c;
        case 0x470460u: goto label_470460;
        case 0x470464u: goto label_470464;
        case 0x470468u: goto label_470468;
        case 0x47046cu: goto label_47046c;
        case 0x470470u: goto label_470470;
        case 0x470474u: goto label_470474;
        case 0x470478u: goto label_470478;
        case 0x47047cu: goto label_47047c;
        case 0x470480u: goto label_470480;
        case 0x470484u: goto label_470484;
        case 0x470488u: goto label_470488;
        case 0x47048cu: goto label_47048c;
        default: break;
    }

    ctx->pc = 0x46fe60u;

label_46fe60:
    // 0x46fe60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_46fe64:
    // 0x46fe64: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46fe68:
    // 0x46fe68: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x46fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_46fe6c:
    // 0x46fe6c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46fe70:
    // 0x46fe70: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x46fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_46fe74:
    // 0x46fe74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46fe74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46fe78:
    // 0x46fe78: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x46fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_46fe7c:
    // 0x46fe7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46fe80:
    // 0x46fe80: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x46fe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_46fe84:
    // 0x46fe84: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46fe88:
    // 0x46fe88: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x46fe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_46fe8c:
    // 0x46fe8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x46fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_46fe90:
    // 0x46fe90: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46fe94:
    // 0x46fe94: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x46fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_46fe98:
    // 0x46fe98: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x46fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_46fe9c:
    // 0x46fe9c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x46fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_46fea0:
    // 0x46fea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46fea4:
    // 0x46fea4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x46fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46fea8:
    // 0x46fea8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46feac:
    // 0x46feac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x46feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_46feb0:
    // 0x46feb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46feb4:
    // 0x46feb4: 0x40f809  jalr        $v0
label_46feb8:
    if (ctx->pc == 0x46FEB8u) {
        ctx->pc = 0x46FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEB4u;
        // 0x46feb8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FEBCu;
        goto label_46febc;
    }
    ctx->pc = 0x46FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FEBCu);
        ctx->pc = 0x46FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEB4u;
        // 0x46feb8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FEB4u, 0x46FEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FEBCu;
label_46febc:
    // 0x46febc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46fec0:
    if (ctx->pc == 0x46FEC0u) {
        ctx->pc = 0x46FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEBCu;
        // 0x46fec0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FEC4u;
        goto label_46fec4;
    }
    ctx->pc = 0x46FEBCu;
    {
        const bool branch_taken_0x46febc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEBCu;
        // 0x46fec0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46febc) {
            ctx->pc = 0x46FECCu;
            goto label_46fecc;
        }
    }
    ctx->pc = 0x46FEC4u;
label_46fec4:
    // 0x46fec4: 0x1000015e  b           . + 4 + (0x15E << 2)
label_46fec8:
    if (ctx->pc == 0x46FEC8u) {
        ctx->pc = 0x46FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEC4u;
        // 0x46fec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FECCu;
        goto label_46fecc;
    }
    ctx->pc = 0x46FEC4u;
    {
        const bool branch_taken_0x46fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEC4u;
        // 0x46fec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fec4) {
            ctx->pc = 0x470440u;
            goto label_470440;
        }
    }
    ctx->pc = 0x46FECCu;
label_46fecc:
    // 0x46fecc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46fed0:
    // 0x46fed0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_46fed4:
    if (ctx->pc == 0x46FED4u) {
        ctx->pc = 0x46FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FED0u;
        // 0x46fed4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FED8u;
        goto label_46fed8;
    }
    ctx->pc = 0x46FED0u;
    {
        const bool branch_taken_0x46fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FED0u;
        // 0x46fed4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fed0) {
            ctx->pc = 0x46FF04u;
            goto label_46ff04;
        }
    }
    ctx->pc = 0x46FED8u;
label_46fed8:
    // 0x46fed8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x46fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46fedc:
    // 0x46fedc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46fee0:
    // 0x46fee0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x46fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_46fee4:
    // 0x46fee4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46fee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46fee8:
    // 0x46fee8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46feec:
    // 0x46feec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x46feecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_46fef0:
    // 0x46fef0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x46fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_46fef4:
    // 0x46fef4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46fef8:
    // 0x46fef8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x46fef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fefc:
    // 0x46fefc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_46ff00:
    if (ctx->pc == 0x46FF00u) {
        ctx->pc = 0x46FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEFCu;
        // 0x46ff00: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF04u;
        goto label_46ff04;
    }
    ctx->pc = 0x46FEFCu;
    {
        const bool branch_taken_0x46fefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FEFCu;
        // 0x46ff00: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fefc) {
            ctx->pc = 0x46FEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fee0;
        }
    }
    ctx->pc = 0x46FF04u;
label_46ff04:
    // 0x46ff04: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x46ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46ff08:
    // 0x46ff08: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x46ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_46ff0c:
    // 0x46ff0c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x46ff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46ff10:
    // 0x46ff10: 0x24e7e168  addiu       $a3, $a3, -0x1E98
    ctx->pc = 0x46ff10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959464));
label_46ff14:
    // 0x46ff14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46ff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46ff18:
    // 0x46ff18: 0xc10cff6  jal         func_433FD8
label_46ff1c:
    if (ctx->pc == 0x46FF1Cu) {
        ctx->pc = 0x46FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF18u;
        // 0x46ff1c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF20u;
        goto label_46ff20;
    }
    ctx->pc = 0x46FF18u;
    SET_GPR_U32(ctx, 31, 0x46FF20u);
    ctx->pc = 0x46FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46FF18u;
    // 0x46ff1c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x46FF18u, 0x46FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FF20u;
label_46ff20:
    // 0x46ff20: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x46ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46ff24:
    // 0x46ff24: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x46ff24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_46ff28:
    // 0x46ff28: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_46ff2c:
    if (ctx->pc == 0x46FF2Cu) {
        ctx->pc = 0x46FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF28u;
        // 0x46ff2c: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF30u;
        goto label_46ff30;
    }
    ctx->pc = 0x46FF28u;
    {
        const bool branch_taken_0x46ff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF28u;
        // 0x46ff2c: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff28) {
            ctx->pc = 0x46FF78u;
            goto label_46ff78;
        }
    }
    ctx->pc = 0x46FF30u;
label_46ff30:
    // 0x46ff30: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x46ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46ff34:
    // 0x46ff34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x46ff34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ff38:
    // 0x46ff38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46ff3c:
    // 0x46ff3c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x46ff3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46ff40:
    // 0x46ff40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_46ff44:
    if (ctx->pc == 0x46FF44u) {
        ctx->pc = 0x46FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF40u;
        // 0x46ff44: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF48u;
        goto label_46ff48;
    }
    ctx->pc = 0x46FF40u;
    {
        const bool branch_taken_0x46ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF40u;
        // 0x46ff44: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff40) {
            ctx->pc = 0x46FF78u;
            goto label_46ff78;
        }
    }
    ctx->pc = 0x46FF48u;
label_46ff48:
    // 0x46ff48: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x46ff48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46ff4c:
    // 0x46ff4c: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x46ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_46ff50:
    // 0x46ff50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ff54:
    // 0x46ff54: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x46ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_46ff58:
    // 0x46ff58: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_46ff5c:
    if (ctx->pc == 0x46FF5Cu) {
        ctx->pc = 0x46FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF58u;
        // 0x46ff5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF60u;
        goto label_46ff60;
    }
    ctx->pc = 0x46FF58u;
    {
        const bool branch_taken_0x46ff58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x46FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF58u;
        // 0x46ff5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff58) {
            ctx->pc = 0x46FF68u;
            goto label_46ff68;
        }
    }
    ctx->pc = 0x46FF60u;
label_46ff60:
    // 0x46ff60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46ff60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ff64:
    // 0x46ff64: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x46ff64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_46ff68:
    // 0x46ff68: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x46ff68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_46ff6c:
    // 0x46ff6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_46ff70:
    if (ctx->pc == 0x46FF70u) {
        ctx->pc = 0x46FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF6Cu;
        // 0x46ff70: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF74u;
        goto label_46ff74;
    }
    ctx->pc = 0x46FF6Cu;
    {
        const bool branch_taken_0x46ff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF6Cu;
        // 0x46ff70: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ff6c) {
            ctx->pc = 0x46FF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ff50;
        }
    }
    ctx->pc = 0x46FF74u;
label_46ff74:
    // 0x46ff74: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x46ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_46ff78:
    // 0x46ff78: 0x3c050101  lui         $a1, 0x101
    ctx->pc = 0x46ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)257 << 16));
label_46ff7c:
    // 0x46ff7c: 0x2510ad18  addiu       $s0, $t0, -0x52E8
    ctx->pc = 0x46ff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946072));
label_46ff80:
    // 0x46ff80: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x46ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_46ff84:
    // 0x46ff84: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46ff88:
    // 0x46ff88: 0x40f809  jalr        $v0
label_46ff8c:
    if (ctx->pc == 0x46FF8Cu) {
        ctx->pc = 0x46FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF88u;
        // 0x46ff8c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FF90u;
        goto label_46ff90;
    }
    ctx->pc = 0x46FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FF90u);
        ctx->pc = 0x46FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FF88u;
        // 0x46ff8c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FF88u, 0x46FF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FF90u;
label_46ff90:
    // 0x46ff90: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x46ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46ff94:
    // 0x46ff94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x46ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_46ff98:
    // 0x46ff98: 0x2e40018  mult        $zero, $s7, $a0
    ctx->pc = 0x46ff98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_46ff9c:
    // 0x46ff9c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46ffa0:
    // 0x46ffa0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x46ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_46ffa4:
    // 0x46ffa4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x46ffa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ffa8:
    // 0x46ffa8: 0x2012  mflo        $a0
    ctx->pc = 0x46ffa8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_46ffac:
    // 0x46ffac: 0x40f809  jalr        $v0
label_46ffb0:
    if (ctx->pc == 0x46FFB0u) {
        ctx->pc = 0x46FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FFACu;
        // 0x46ffb0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FFB4u;
        goto label_46ffb4;
    }
    ctx->pc = 0x46FFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FFB4u);
        ctx->pc = 0x46FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FFACu;
        // 0x46ffb0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FFACu, 0x46FFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FFB4u;
label_46ffb4:
    // 0x46ffb4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x46ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46ffb8:
    // 0x46ffb8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x46ffb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ffbc:
    // 0x46ffbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ffc0:
    // 0x46ffc0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_46ffc4:
    // 0x46ffc4: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x46ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_46ffc8:
    // 0x46ffc8: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x46ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
label_46ffcc:
    // 0x46ffcc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x46ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_46ffd0:
    // 0x46ffd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x46ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46ffd4:
    // 0x46ffd4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x46ffd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_46ffd8:
    // 0x46ffd8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_46ffdc:
    if (ctx->pc == 0x46FFDCu) {
        ctx->pc = 0x46FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FFD8u;
        // 0x46ffdc: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FFE0u;
        goto label_46ffe0;
    }
    ctx->pc = 0x46FFD8u;
    {
        const bool branch_taken_0x46ffd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ffd8) {
            ctx->pc = 0x46FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FFD8u;
            // 0x46ffdc: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470058u;
            goto label_470058;
        }
    }
    ctx->pc = 0x46FFE0u;
label_46ffe0:
    // 0x46ffe0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46ffe4:
    // 0x46ffe4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_46ffe8:
    if (ctx->pc == 0x46FFE8u) {
        ctx->pc = 0x46FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FFE4u;
        // 0x46ffe8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FFECu;
        goto label_46ffec;
    }
    ctx->pc = 0x46FFE4u;
    {
        const bool branch_taken_0x46ffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FFE4u;
        // 0x46ffe8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ffe4) {
            ctx->pc = 0x470054u;
            goto label_470054;
        }
    }
    ctx->pc = 0x46FFECu;
label_46ffec:
    // 0x46ffec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x46ffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46fff0:
    // 0x46fff0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x46fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46fff4:
    // 0x46fff4: 0x0  nop
    ctx->pc = 0x46fff4u;
    // NOP
label_46fff8:
    // 0x46fff8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x46fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_46fffc:
    // 0x46fffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_470000:
    // 0x470000: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x470000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_470004:
    // 0x470004: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x470004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_470008:
    // 0x470008: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x470008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_47000c:
    // 0x47000c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x47000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_470010:
    // 0x470010: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_470014:
    if (ctx->pc == 0x470014u) {
        ctx->pc = 0x470014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470010u;
        // 0x470014: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470018u;
        goto label_470018;
    }
    ctx->pc = 0x470010u;
    {
        const bool branch_taken_0x470010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x470014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470010u;
        // 0x470014: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470010) {
            ctx->pc = 0x47003Cu;
            goto label_47003c;
        }
    }
    ctx->pc = 0x470018u;
label_470018:
    // 0x470018: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x470018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_47001c:
    // 0x47001c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x47001cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_470020:
    // 0x470020: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x470020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_470024:
    // 0x470024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x470024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_470028:
    // 0x470028: 0xacb40010  sw          $s4, 0x10($a1)
    ctx->pc = 0x470028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 20));
label_47002c:
    // 0x47002c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x47002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_470030:
    // 0x470030: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x470030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_470034:
    // 0x470034: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x470034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_470038:
    // 0x470038: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x470038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_47003c:
    // 0x47003c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_470040:
    // 0x470040: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x470040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_470044:
    // 0x470044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x470044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_470048:
    // 0x470048: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x470048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47004c:
    // 0x47004c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_470050:
    if (ctx->pc == 0x470050u) {
        ctx->pc = 0x470050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47004Cu;
        // 0x470050: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470054u;
        goto label_470054;
    }
    ctx->pc = 0x47004Cu;
    {
        const bool branch_taken_0x47004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47004Cu;
        // 0x470050: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47004c) {
            ctx->pc = 0x46FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fff8;
        }
    }
    ctx->pc = 0x470054u;
label_470054:
    // 0x470054: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x470054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_470058:
    // 0x470058: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x470058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47005c:
    // 0x47005c: 0x2e31018  mult        $v0, $s7, $v1
    ctx->pc = 0x47005cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_470060:
    // 0x470060: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x470060u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_470064:
    // 0x470064: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x470064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_470068:
    // 0x470068: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x470068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_47006c:
    // 0x47006c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x47006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_470070:
    // 0x470070: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x470070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_470074:
    // 0x470074: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x470074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_470078:
    // 0x470078: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x470078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47007c:
    // 0x47007c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x47007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_470080:
    // 0x470080: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x470080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_470084:
    // 0x470084: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x470084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_470088:
    // 0x470088: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x470088u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_47008c:
    // 0x47008c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x47008cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_470090:
    // 0x470090: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_470094:
    if (ctx->pc == 0x470094u) {
        ctx->pc = 0x470094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470090u;
        // 0x470094: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x470098u;
        goto label_470098;
    }
    ctx->pc = 0x470090u;
    {
        const bool branch_taken_0x470090 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x470090) {
            ctx->pc = 0x470094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470090u;
            // 0x470094: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x470098u;
            goto label_470098;
        }
    }
    ctx->pc = 0x470098u;
label_470098:
    // 0x470098: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x470098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47009c:
    // 0x47009c: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x47009cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4700a0:
    // 0x4700a0: 0x2812  mflo        $a1
    ctx->pc = 0x4700a0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4700a4:
    // 0x4700a4: 0xc11f604  jal         func_47D810
label_4700a8:
    if (ctx->pc == 0x4700A8u) {
        ctx->pc = 0x4700A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4700A4u;
        // 0x4700a8: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4700ACu;
        goto label_4700ac;
    }
    ctx->pc = 0x4700A4u;
    SET_GPR_U32(ctx, 31, 0x4700ACu);
    ctx->pc = 0x4700A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4700A4u;
    // 0x4700a8: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D810u, 0x4700A4u, 0x4700ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4700ACu;
label_4700ac:
    // 0x4700ac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4700acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4700b0:
    // 0x4700b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4700b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4700b4:
    // 0x4700b4: 0x2464ad18  addiu       $a0, $v1, -0x52E8
    ctx->pc = 0x4700b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4700b8:
    // 0x4700b8: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x4700b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_4700bc:
    // 0x4700bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4700bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4700c0:
    // 0x4700c0: 0x12e00081  beqz        $s7, . + 4 + (0x81 << 2)
label_4700c4:
    if (ctx->pc == 0x4700C4u) {
        ctx->pc = 0x4700C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4700C0u;
        // 0x4700c4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4700C8u;
        goto label_4700c8;
    }
    ctx->pc = 0x4700C0u;
    {
        const bool branch_taken_0x4700c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4700C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4700C0u;
        // 0x4700c4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4700c0) {
            ctx->pc = 0x4702C8u;
            goto label_4702c8;
        }
    }
    ctx->pc = 0x4700C8u;
label_4700c8:
    // 0x4700c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4700cc:
    // 0x4700cc: 0x0  nop
    ctx->pc = 0x4700ccu;
    // NOP
label_4700d0:
    // 0x4700d0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4700d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4700d4:
    // 0x4700d4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x4700d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4700d8:
    // 0x4700d8: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4700d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4700dc:
    // 0x4700dc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4700dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4700e0:
    // 0x4700e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4700e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4700e4:
    // 0x4700e4: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x4700e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_4700e8:
    // 0x4700e8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x4700e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4700ec:
    // 0x4700ec: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x4700ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_4700f0:
    // 0x4700f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4700f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4700f4:
    // 0x4700f4: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x4700f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4700f8:
    // 0x4700f8: 0x2012  mflo        $a0
    ctx->pc = 0x4700f8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_4700fc:
    // 0x4700fc: 0x40f809  jalr        $v0
label_470100:
    if (ctx->pc == 0x470100u) {
        ctx->pc = 0x470100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4700FCu;
        // 0x470100: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470104u;
        goto label_470104;
    }
    ctx->pc = 0x4700FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470104u);
        ctx->pc = 0x470100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4700FCu;
        // 0x470100: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4700FCu, 0x470104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470104u;
label_470104:
    // 0x470104: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x470104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470108:
    // 0x470108: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x470108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47010c:
    // 0x47010c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_470110:
    if (ctx->pc == 0x470110u) {
        ctx->pc = 0x470110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47010Cu;
        // 0x470110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470114u;
        goto label_470114;
    }
    ctx->pc = 0x47010Cu;
    {
        const bool branch_taken_0x47010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x470110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47010Cu;
        // 0x470110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47010c) {
            ctx->pc = 0x47016Cu;
            goto label_47016c;
        }
    }
    ctx->pc = 0x470114u;
label_470114:
    // 0x470114: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x470114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_470118:
    // 0x470118: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x470118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47011c:
    // 0x47011c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x47011cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_470120:
    // 0x470120: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x470120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_470124:
    // 0x470124: 0x0  nop
    ctx->pc = 0x470124u;
    // NOP
label_470128:
    // 0x470128: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x470128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_47012c:
    // 0x47012c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x47012cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_470130:
    // 0x470130: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x470130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_470134:
    // 0x470134: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x470134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_470138:
    // 0x470138: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x470138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_47013c:
    // 0x47013c: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x47013cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_470140:
    // 0x470140: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x470140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_470144:
    // 0x470144: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x470144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_470148:
    // 0x470148: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x470148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_47014c:
    // 0x47014c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x47014cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_470150:
    // 0x470150: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x470150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_470154:
    // 0x470154: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x470154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_470158:
    // 0x470158: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x470158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
label_47015c:
    // 0x47015c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x47015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_470160:
    // 0x470160: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x470160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470164:
    // 0x470164: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_470168:
    if (ctx->pc == 0x470168u) {
        ctx->pc = 0x470168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470164u;
        // 0x470168: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47016Cu;
        goto label_47016c;
    }
    ctx->pc = 0x470164u;
    {
        const bool branch_taken_0x470164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470164u;
        // 0x470168: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470164) {
            ctx->pc = 0x470128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470128;
        }
    }
    ctx->pc = 0x47016Cu;
label_47016c:
    // 0x47016c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x47016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_470170:
    // 0x470170: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x470170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_470174:
    // 0x470174: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x470174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_470178:
    // 0x470178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x470178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47017c:
    // 0x47017c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x47017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_470180:
    // 0x470180: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x470180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_470184:
    // 0x470184: 0xc11bbac  jal         func_46EEB0
label_470188:
    if (ctx->pc == 0x470188u) {
        ctx->pc = 0x470188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470184u;
        // 0x470188: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47018Cu;
        goto label_47018c;
    }
    ctx->pc = 0x470184u;
    SET_GPR_U32(ctx, 31, 0x47018Cu);
    ctx->pc = 0x470188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470184u;
    // 0x470188: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EEB0u, 0x470184u, 0x47018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47018Cu;
label_47018c:
    // 0x47018c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x47018cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_470190:
    // 0x470190: 0xc11be94  jal         func_46FA50
label_470194:
    if (ctx->pc == 0x470194u) {
        ctx->pc = 0x470194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470190u;
        // 0x470194: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470198u;
        goto label_470198;
    }
    ctx->pc = 0x470190u;
    SET_GPR_U32(ctx, 31, 0x470198u);
    ctx->pc = 0x470194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470190u;
    // 0x470194: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46FA50u, 0x470190u, 0x470198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470198u;
label_470198:
    // 0x470198: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x470198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_47019c:
    // 0x47019c: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_4701a0:
    if (ctx->pc == 0x4701A0u) {
        ctx->pc = 0x4701A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47019Cu;
        // 0x4701a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4701A4u;
        goto label_4701a4;
    }
    ctx->pc = 0x47019Cu;
    {
        const bool branch_taken_0x47019c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4701A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47019Cu;
        // 0x4701a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47019c) {
            ctx->pc = 0x470254u;
            goto label_470254;
        }
    }
    ctx->pc = 0x4701A4u;
label_4701a4:
    // 0x4701a4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4701a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4701a8:
    // 0x4701a8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x4701a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4701ac:
    // 0x4701ac: 0x247ead18  addiu       $fp, $v1, -0x52E8
    ctx->pc = 0x4701acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4701b0:
    // 0x4701b0: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x4701b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4701b4:
    // 0x4701b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4701b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4701b8:
    // 0x4701b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4701b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4701bc:
    // 0x4701bc: 0x8fc20108  lw          $v0, 0x108($fp)
    ctx->pc = 0x4701bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 264)));
label_4701c0:
    // 0x4701c0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x4701c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_4701c4:
    // 0x4701c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4701c8:
    // 0x4701c8: 0x40f809  jalr        $v0
label_4701cc:
    if (ctx->pc == 0x4701CCu) {
        ctx->pc = 0x4701CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4701C8u;
        // 0x4701cc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4701D0u;
        goto label_4701d0;
    }
    ctx->pc = 0x4701C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4701D0u);
        ctx->pc = 0x4701CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4701C8u;
        // 0x4701cc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4701C8u, 0x4701D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4701D0u;
label_4701d0:
    // 0x4701d0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4701d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4701d4:
    // 0x4701d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4701d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4701d8:
    // 0x4701d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4701d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4701dc:
    // 0x4701dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4701dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4701e0:
    // 0x4701e0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4701e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_4701e4:
    // 0x4701e4: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x4701e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4701e8:
    // 0x4701e8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x4701e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4701ec:
    // 0x4701ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4701ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4701f0:
    // 0x4701f0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4701f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4701f4:
    // 0x4701f4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4701f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4701f8:
    // 0x4701f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4701fc:
    if (ctx->pc == 0x4701FCu) {
        ctx->pc = 0x4701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4701F8u;
        // 0x4701fc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470200u;
        goto label_470200;
    }
    ctx->pc = 0x4701F8u;
    {
        const bool branch_taken_0x4701f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4701F8u;
        // 0x4701fc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4701f8) {
            ctx->pc = 0x470234u;
            goto label_470234;
        }
    }
    ctx->pc = 0x470200u;
label_470200:
    // 0x470200: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x470200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_470204:
    // 0x470204: 0x0  nop
    ctx->pc = 0x470204u;
    // NOP
label_470208:
    // 0x470208: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x470208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_47020c:
    // 0x47020c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x47020cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_470210:
    // 0x470210: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x470210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_470214:
    // 0x470214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x470214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_470218:
    // 0x470218: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x470218u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_47021c:
    // 0x47021c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_470220:
    // 0x470220: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x470220u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_470224:
    // 0x470224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x470224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_470228:
    // 0x470228: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x470228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47022c:
    // 0x47022c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_470230:
    if (ctx->pc == 0x470230u) {
        ctx->pc = 0x470230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47022Cu;
        // 0x470230: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470234u;
        goto label_470234;
    }
    ctx->pc = 0x47022Cu;
    {
        const bool branch_taken_0x47022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47022c) {
            ctx->pc = 0x470230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47022Cu;
            // 0x470230: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470208;
        }
    }
    ctx->pc = 0x470234u;
label_470234:
    // 0x470234: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x470234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_470238:
    // 0x470238: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x470238u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_47023c:
    // 0x47023c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x47023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_470240:
    // 0x470240: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x470240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_470244:
    // 0x470244: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x470244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_470248:
    // 0x470248: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x470248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47024c:
    // 0x47024c: 0x5600ffda  bnel        $s0, $zero, . + 4 + (-0x26 << 2)
label_470250:
    if (ctx->pc == 0x470250u) {
        ctx->pc = 0x470250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47024Cu;
        // 0x470250: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470254u;
        goto label_470254;
    }
    ctx->pc = 0x47024Cu;
    {
        const bool branch_taken_0x47024c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47024c) {
            ctx->pc = 0x470250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47024Cu;
            // 0x470250: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4701B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4701b8;
        }
    }
    ctx->pc = 0x470254u;
label_470254:
    // 0x470254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x470254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_470258:
    // 0x470258: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_47025c:
    if (ctx->pc == 0x47025Cu) {
        ctx->pc = 0x47025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470258u;
        // 0x47025c: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470260u;
        goto label_470260;
    }
    ctx->pc = 0x470258u;
    {
        const bool branch_taken_0x470258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470258u;
        // 0x47025c: 0x3c070071  lui         $a3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470258) {
            ctx->pc = 0x4702A4u;
            goto label_4702a4;
        }
    }
    ctx->pc = 0x470260u;
label_470260:
    // 0x470260: 0x24f1ad18  addiu       $s1, $a3, -0x52E8
    ctx->pc = 0x470260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946072));
label_470264:
    // 0x470264: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x470264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_470268:
    // 0x470268: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x470268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_47026c:
    // 0x47026c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x47026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_470270:
    // 0x470270: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x470270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_470274:
    // 0x470274: 0x60f809  jalr        $v1
label_470278:
    if (ctx->pc == 0x470278u) {
        ctx->pc = 0x470278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470274u;
        // 0x470278: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47027Cu;
        goto label_47027c;
    }
    ctx->pc = 0x470274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47027Cu);
        ctx->pc = 0x470278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470274u;
        // 0x470278: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470274u, 0x47027Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47027Cu;
label_47027c:
    // 0x47027c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x47027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_470280:
    // 0x470280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x470280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470284:
    // 0x470284: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x470284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_470288:
    // 0x470288: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x470288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_47028c:
    // 0x47028c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x47028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_470290:
    // 0x470290: 0x40f809  jalr        $v0
label_470294:
    if (ctx->pc == 0x470294u) {
        ctx->pc = 0x470294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470290u;
        // 0x470294: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470298u;
        goto label_470298;
    }
    ctx->pc = 0x470290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470298u);
        ctx->pc = 0x470294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470290u;
        // 0x470294: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470290u, 0x470298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470298u;
label_470298:
    // 0x470298: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x470298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_47029c:
    // 0x47029c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4702a0:
    if (ctx->pc == 0x4702A0u) {
        ctx->pc = 0x4702A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47029Cu;
        // 0x4702a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4702A4u;
        goto label_4702a4;
    }
    ctx->pc = 0x47029Cu;
    {
        const bool branch_taken_0x47029c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4702A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47029Cu;
        // 0x4702a0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47029c) {
            ctx->pc = 0x470268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470268;
        }
    }
    ctx->pc = 0x4702A4u;
label_4702a4:
    // 0x4702a4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4702a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_4702a8:
    // 0x4702a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4702a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4702ac:
    // 0x4702ac: 0x2508ad18  addiu       $t0, $t0, -0x52E8
    ctx->pc = 0x4702acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946072));
label_4702b0:
    // 0x4702b0: 0x8d03010c  lw          $v1, 0x10C($t0)
    ctx->pc = 0x4702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 268)));
label_4702b4:
    // 0x4702b4: 0x60f809  jalr        $v1
label_4702b8:
    if (ctx->pc == 0x4702B8u) {
        ctx->pc = 0x4702B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702B4u;
        // 0x4702b8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4702BCu;
        goto label_4702bc;
    }
    ctx->pc = 0x4702B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4702BCu);
        ctx->pc = 0x4702B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702B4u;
        // 0x4702b8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4702B4u, 0x4702BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4702BCu;
label_4702bc:
    // 0x4702bc: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x4702bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4702c0:
    // 0x4702c0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
label_4702c4:
    if (ctx->pc == 0x4702C4u) {
        ctx->pc = 0x4702C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702C0u;
        // 0x4702c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4702C8u;
        goto label_4702c8;
    }
    ctx->pc = 0x4702C0u;
    {
        const bool branch_taken_0x4702c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4702C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702C0u;
        // 0x4702c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4702c0) {
            ctx->pc = 0x4700D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4700d0;
        }
    }
    ctx->pc = 0x4702C8u;
label_4702c8:
    // 0x4702c8: 0x8f8288e8  lw          $v0, -0x7718($gp)
    ctx->pc = 0x4702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_4702cc:
    // 0x4702cc: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x4702ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
label_4702d0:
    // 0x4702d0: 0x2530ad18  addiu       $s0, $t1, -0x52E8
    ctx->pc = 0x4702d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946072));
label_4702d4:
    // 0x4702d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4702d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4702d8:
    // 0x4702d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4702d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4702dc:
    // 0x4702dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4702dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4702e0:
    // 0x4702e0: 0xc11f74a  jal         func_47DD28
label_4702e4:
    if (ctx->pc == 0x4702E4u) {
        ctx->pc = 0x4702E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702E0u;
        // 0x4702e4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4702E8u;
        goto label_4702e8;
    }
    ctx->pc = 0x4702E0u;
    SET_GPR_U32(ctx, 31, 0x4702E8u);
    ctx->pc = 0x4702E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4702E0u;
    // 0x4702e4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4702E0u, 0x4702E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4702E8u;
label_4702e8:
    // 0x4702e8: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x4702e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_4702ec:
    // 0x4702ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4702ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4702f0:
    // 0x4702f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4702f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4702f4:
    // 0x4702f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4702f8:
    // 0x4702f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4702fc:
    if (ctx->pc == 0x4702FCu) {
        ctx->pc = 0x4702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702F8u;
        // 0x4702fc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470300u;
        goto label_470300;
    }
    ctx->pc = 0x4702F8u;
    {
        const bool branch_taken_0x4702f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4702F8u;
        // 0x4702fc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4702f8) {
            ctx->pc = 0x470334u;
            goto label_470334;
        }
    }
    ctx->pc = 0x470300u;
label_470300:
    // 0x470300: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x470300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_470304:
    // 0x470304: 0x0  nop
    ctx->pc = 0x470304u;
    // NOP
label_470308:
    // 0x470308: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x470308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47030c:
    // 0x47030c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x47030cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_470310:
    // 0x470310: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x470310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_470314:
    // 0x470314: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x470314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_470318:
    // 0x470318: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x470318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47031c:
    // 0x47031c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470320:
    // 0x470320: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x470320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_470324:
    // 0x470324: 0x243202b  sltu        $a0, $s2, $v1
    ctx->pc = 0x470324u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_470328:
    // 0x470328: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x470328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47032c:
    // 0x47032c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_470330:
    if (ctx->pc == 0x470330u) {
        ctx->pc = 0x470330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47032Cu;
        // 0x470330: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470334u;
        goto label_470334;
    }
    ctx->pc = 0x47032Cu;
    {
        const bool branch_taken_0x47032c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x470330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47032Cu;
        // 0x470330: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47032c) {
            ctx->pc = 0x470308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470308;
        }
    }
    ctx->pc = 0x470334u;
label_470334:
    // 0x470334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x470334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_470338:
    // 0x470338: 0xc11b850  jal         func_46E140
label_47033c:
    if (ctx->pc == 0x47033Cu) {
        ctx->pc = 0x47033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470338u;
        // 0x47033c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470340u;
        goto label_470340;
    }
    ctx->pc = 0x470338u;
    SET_GPR_U32(ctx, 31, 0x470340u);
    ctx->pc = 0x47033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470338u;
    // 0x47033c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E140u, 0x470338u, 0x470340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470340u;
label_470340:
    // 0x470340: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x470340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_470344:
    // 0x470344: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x470344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470348:
    // 0x470348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47034c:
    // 0x47034c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x47034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_470350:
    // 0x470350: 0xa6870004  sh          $a3, 0x4($s4)
    ctx->pc = 0x470350u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 7));
label_470354:
    // 0x470354: 0x2485ad18  addiu       $a1, $a0, -0x52E8
    ctx->pc = 0x470354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_470358:
    // 0x470358: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x470358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_47035c:
    // 0x47035c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x47035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_470360:
    // 0x470360: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x470360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_470364:
    // 0x470364: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x470364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_470368:
    // 0x470368: 0x8f8288e8  lw          $v0, -0x7718($gp)
    ctx->pc = 0x470368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_47036c:
    // 0x47036c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_470370:
    // 0x470370: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x470370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_470374:
    // 0x470374: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x470374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_470378:
    // 0x470378: 0xae950008  sw          $s5, 0x8($s4)
    ctx->pc = 0x470378u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 21));
label_47037c:
    // 0x47037c: 0xa6840006  sh          $a0, 0x6($s4)
    ctx->pc = 0x47037cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 4));
label_470380:
    // 0x470380: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x470380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_470384:
    // 0x470384: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x470384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_470388:
    // 0x470388: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x470388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_47038c:
    // 0x47038c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x47038cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_470390:
    // 0x470390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_470394:
    // 0x470394: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
label_470398:
    if (ctx->pc == 0x470398u) {
        ctx->pc = 0x470398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470394u;
        // 0x470398: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47039Cu;
        goto label_47039c;
    }
    ctx->pc = 0x470394u;
    {
        const bool branch_taken_0x470394 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x470398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470394u;
        // 0x470398: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470394) {
            ctx->pc = 0x470410u;
            goto label_470410;
        }
    }
    ctx->pc = 0x47039Cu;
label_47039c:
    // 0x47039c: 0x8fb00014  lw          $s0, 0x14($sp)
    ctx->pc = 0x47039cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4703a0:
    // 0x4703a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4703a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4703a4:
    // 0x4703a4: 0x0  nop
    ctx->pc = 0x4703a4u;
    // NOP
label_4703a8:
    // 0x4703a8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x4703a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_4703ac:
    // 0x4703ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4703acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4703b0:
    // 0x4703b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4703b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4703b4:
    // 0x4703b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4703b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4703b8:
    // 0x4703b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4703b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4703bc:
    // 0x4703bc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x4703bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_4703c0:
    // 0x4703c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4703c4:
    // 0x4703c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4703c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4703c8:
    // 0x4703c8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4703c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_4703cc:
    // 0x4703cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4703d0:
    // 0x4703d0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4703d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4703d4:
    // 0x4703d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4703d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4703d8:
    // 0x4703d8: 0xc10c190  jal         func_430640
label_4703dc:
    if (ctx->pc == 0x4703DCu) {
        ctx->pc = 0x4703DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4703D8u;
        // 0x4703dc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4703E0u;
        goto label_4703e0;
    }
    ctx->pc = 0x4703D8u;
    SET_GPR_U32(ctx, 31, 0x4703E0u);
    ctx->pc = 0x4703DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4703D8u;
    // 0x4703dc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4703D8u, 0x4703E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4703E0u;
label_4703e0:
    // 0x4703e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4703e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4703e4:
    // 0x4703e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4703e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4703e8:
    // 0x4703e8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x4703e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4703ec:
    // 0x4703ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4703ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4703f0:
    // 0x4703f0: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x4703f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_4703f4:
    // 0x4703f4: 0x40f809  jalr        $v0
label_4703f8:
    if (ctx->pc == 0x4703F8u) {
        ctx->pc = 0x4703F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4703F4u;
        // 0x4703f8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4703FCu;
        goto label_4703fc;
    }
    ctx->pc = 0x4703F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4703FCu);
        ctx->pc = 0x4703F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4703F4u;
        // 0x4703f8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4703F4u, 0x4703FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4703FCu;
label_4703fc:
    // 0x4703fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4703fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_470400:
    // 0x470400: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x470400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470404:
    // 0x470404: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x470404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_470408:
    // 0x470408: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_47040c:
    if (ctx->pc == 0x47040Cu) {
        ctx->pc = 0x47040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470408u;
        // 0x47040c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470410u;
        goto label_470410;
    }
    ctx->pc = 0x470408u;
    {
        const bool branch_taken_0x470408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470408u;
        // 0x47040c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470408) {
            ctx->pc = 0x4703A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4703a8;
        }
    }
    ctx->pc = 0x470410u;
label_470410:
    // 0x470410: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x470410u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
label_470414:
    // 0x470414: 0x2530ad18  addiu       $s0, $t1, -0x52E8
    ctx->pc = 0x470414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946072));
label_470418:
    // 0x470418: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x470418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_47041c:
    // 0x47041c: 0x40f809  jalr        $v0
label_470420:
    if (ctx->pc == 0x470420u) {
        ctx->pc = 0x470420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47041Cu;
        // 0x470420: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470424u;
        goto label_470424;
    }
    ctx->pc = 0x47041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470424u);
        ctx->pc = 0x470420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47041Cu;
        // 0x470420: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47041Cu, 0x470424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470424u;
label_470424:
    // 0x470424: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x470424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_470428:
    // 0x470428: 0x60f809  jalr        $v1
label_47042c:
    if (ctx->pc == 0x47042Cu) {
        ctx->pc = 0x47042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470428u;
        // 0x47042c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470430u;
        goto label_470430;
    }
    ctx->pc = 0x470428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x470430u);
        ctx->pc = 0x47042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470428u;
        // 0x47042c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470428u, 0x470430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470430u;
label_470430:
    // 0x470430: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x470430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_470434:
    // 0x470434: 0x40f809  jalr        $v0
label_470438:
    if (ctx->pc == 0x470438u) {
        ctx->pc = 0x470438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470434u;
        // 0x470438: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47043Cu;
        goto label_47043c;
    }
    ctx->pc = 0x470434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47043Cu);
        ctx->pc = 0x470438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470434u;
        // 0x470438: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470434u, 0x47043Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47043Cu;
label_47043c:
    // 0x47043c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x47043cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_470440:
    // 0x470440: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x470440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_470444:
    // 0x470444: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x470444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_470448:
    // 0x470448: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x470448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47044c:
    // 0x47044c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x47044cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_470450:
    // 0x470450: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x470450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_470454:
    // 0x470454: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x470454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_470458:
    // 0x470458: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x470458u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47045c:
    // 0x47045c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x47045cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_470460:
    // 0x470460: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x470460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_470464:
    // 0x470464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x470464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_470468:
    // 0x470468: 0x3e00008  jr          $ra
label_47046c:
    if (ctx->pc == 0x47046Cu) {
        ctx->pc = 0x47046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470468u;
        // 0x47046c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470470u;
        goto label_470470;
    }
    ctx->pc = 0x470468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470468u;
        // 0x47046c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470470u;
label_470470:
    // 0x470470: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x470470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_470474:
    // 0x470474: 0x0  nop
    ctx->pc = 0x470474u;
    // NOP
label_470478:
    // 0x470478: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x470478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47047c:
    // 0x47047c: 0x0  nop
    ctx->pc = 0x47047cu;
    // NOP
label_470480:
    // 0x470480: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x470480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_470484:
    // 0x470484: 0x0  nop
    ctx->pc = 0x470484u;
    // NOP
label_470488:
    // 0x470488: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x470488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47048c:
    // 0x47048c: 0x0  nop
    ctx->pc = 0x47048cu;
    // NOP
    ctx->pc = 0x470490u;
}
