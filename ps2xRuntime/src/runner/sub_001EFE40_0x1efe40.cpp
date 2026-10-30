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

// Function: sub_001EFE40
// Address: 0x1efe40 - 0x1f0420
void sub_001EFE40_0x1efe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFE40_0x1efe40");
#endif

    switch (ctx->pc) {
        case 0x1efe40u: goto label_1efe40;
        case 0x1efe44u: goto label_1efe44;
        case 0x1efe48u: goto label_1efe48;
        case 0x1efe4cu: goto label_1efe4c;
        case 0x1efe50u: goto label_1efe50;
        case 0x1efe54u: goto label_1efe54;
        case 0x1efe58u: goto label_1efe58;
        case 0x1efe5cu: goto label_1efe5c;
        case 0x1efe60u: goto label_1efe60;
        case 0x1efe64u: goto label_1efe64;
        case 0x1efe68u: goto label_1efe68;
        case 0x1efe6cu: goto label_1efe6c;
        case 0x1efe70u: goto label_1efe70;
        case 0x1efe74u: goto label_1efe74;
        case 0x1efe78u: goto label_1efe78;
        case 0x1efe7cu: goto label_1efe7c;
        case 0x1efe80u: goto label_1efe80;
        case 0x1efe84u: goto label_1efe84;
        case 0x1efe88u: goto label_1efe88;
        case 0x1efe8cu: goto label_1efe8c;
        case 0x1efe90u: goto label_1efe90;
        case 0x1efe94u: goto label_1efe94;
        case 0x1efe98u: goto label_1efe98;
        case 0x1efe9cu: goto label_1efe9c;
        case 0x1efea0u: goto label_1efea0;
        case 0x1efea4u: goto label_1efea4;
        case 0x1efea8u: goto label_1efea8;
        case 0x1efeacu: goto label_1efeac;
        case 0x1efeb0u: goto label_1efeb0;
        case 0x1efeb4u: goto label_1efeb4;
        case 0x1efeb8u: goto label_1efeb8;
        case 0x1efebcu: goto label_1efebc;
        case 0x1efec0u: goto label_1efec0;
        case 0x1efec4u: goto label_1efec4;
        case 0x1efec8u: goto label_1efec8;
        case 0x1efeccu: goto label_1efecc;
        case 0x1efed0u: goto label_1efed0;
        case 0x1efed4u: goto label_1efed4;
        case 0x1efed8u: goto label_1efed8;
        case 0x1efedcu: goto label_1efedc;
        case 0x1efee0u: goto label_1efee0;
        case 0x1efee4u: goto label_1efee4;
        case 0x1efee8u: goto label_1efee8;
        case 0x1efeecu: goto label_1efeec;
        case 0x1efef0u: goto label_1efef0;
        case 0x1efef4u: goto label_1efef4;
        case 0x1efef8u: goto label_1efef8;
        case 0x1efefcu: goto label_1efefc;
        case 0x1eff00u: goto label_1eff00;
        case 0x1eff04u: goto label_1eff04;
        case 0x1eff08u: goto label_1eff08;
        case 0x1eff0cu: goto label_1eff0c;
        case 0x1eff10u: goto label_1eff10;
        case 0x1eff14u: goto label_1eff14;
        case 0x1eff18u: goto label_1eff18;
        case 0x1eff1cu: goto label_1eff1c;
        case 0x1eff20u: goto label_1eff20;
        case 0x1eff24u: goto label_1eff24;
        case 0x1eff28u: goto label_1eff28;
        case 0x1eff2cu: goto label_1eff2c;
        case 0x1eff30u: goto label_1eff30;
        case 0x1eff34u: goto label_1eff34;
        case 0x1eff38u: goto label_1eff38;
        case 0x1eff3cu: goto label_1eff3c;
        case 0x1eff40u: goto label_1eff40;
        case 0x1eff44u: goto label_1eff44;
        case 0x1eff48u: goto label_1eff48;
        case 0x1eff4cu: goto label_1eff4c;
        case 0x1eff50u: goto label_1eff50;
        case 0x1eff54u: goto label_1eff54;
        case 0x1eff58u: goto label_1eff58;
        case 0x1eff5cu: goto label_1eff5c;
        case 0x1eff60u: goto label_1eff60;
        case 0x1eff64u: goto label_1eff64;
        case 0x1eff68u: goto label_1eff68;
        case 0x1eff6cu: goto label_1eff6c;
        case 0x1eff70u: goto label_1eff70;
        case 0x1eff74u: goto label_1eff74;
        case 0x1eff78u: goto label_1eff78;
        case 0x1eff7cu: goto label_1eff7c;
        case 0x1eff80u: goto label_1eff80;
        case 0x1eff84u: goto label_1eff84;
        case 0x1eff88u: goto label_1eff88;
        case 0x1eff8cu: goto label_1eff8c;
        case 0x1eff90u: goto label_1eff90;
        case 0x1eff94u: goto label_1eff94;
        case 0x1eff98u: goto label_1eff98;
        case 0x1eff9cu: goto label_1eff9c;
        case 0x1effa0u: goto label_1effa0;
        case 0x1effa4u: goto label_1effa4;
        case 0x1effa8u: goto label_1effa8;
        case 0x1effacu: goto label_1effac;
        case 0x1effb0u: goto label_1effb0;
        case 0x1effb4u: goto label_1effb4;
        case 0x1effb8u: goto label_1effb8;
        case 0x1effbcu: goto label_1effbc;
        case 0x1effc0u: goto label_1effc0;
        case 0x1effc4u: goto label_1effc4;
        case 0x1effc8u: goto label_1effc8;
        case 0x1effccu: goto label_1effcc;
        case 0x1effd0u: goto label_1effd0;
        case 0x1effd4u: goto label_1effd4;
        case 0x1effd8u: goto label_1effd8;
        case 0x1effdcu: goto label_1effdc;
        case 0x1effe0u: goto label_1effe0;
        case 0x1effe4u: goto label_1effe4;
        case 0x1effe8u: goto label_1effe8;
        case 0x1effecu: goto label_1effec;
        case 0x1efff0u: goto label_1efff0;
        case 0x1efff4u: goto label_1efff4;
        case 0x1efff8u: goto label_1efff8;
        case 0x1efffcu: goto label_1efffc;
        case 0x1f0000u: goto label_1f0000;
        case 0x1f0004u: goto label_1f0004;
        case 0x1f0008u: goto label_1f0008;
        case 0x1f000cu: goto label_1f000c;
        case 0x1f0010u: goto label_1f0010;
        case 0x1f0014u: goto label_1f0014;
        case 0x1f0018u: goto label_1f0018;
        case 0x1f001cu: goto label_1f001c;
        case 0x1f0020u: goto label_1f0020;
        case 0x1f0024u: goto label_1f0024;
        case 0x1f0028u: goto label_1f0028;
        case 0x1f002cu: goto label_1f002c;
        case 0x1f0030u: goto label_1f0030;
        case 0x1f0034u: goto label_1f0034;
        case 0x1f0038u: goto label_1f0038;
        case 0x1f003cu: goto label_1f003c;
        case 0x1f0040u: goto label_1f0040;
        case 0x1f0044u: goto label_1f0044;
        case 0x1f0048u: goto label_1f0048;
        case 0x1f004cu: goto label_1f004c;
        case 0x1f0050u: goto label_1f0050;
        case 0x1f0054u: goto label_1f0054;
        case 0x1f0058u: goto label_1f0058;
        case 0x1f005cu: goto label_1f005c;
        case 0x1f0060u: goto label_1f0060;
        case 0x1f0064u: goto label_1f0064;
        case 0x1f0068u: goto label_1f0068;
        case 0x1f006cu: goto label_1f006c;
        case 0x1f0070u: goto label_1f0070;
        case 0x1f0074u: goto label_1f0074;
        case 0x1f0078u: goto label_1f0078;
        case 0x1f007cu: goto label_1f007c;
        case 0x1f0080u: goto label_1f0080;
        case 0x1f0084u: goto label_1f0084;
        case 0x1f0088u: goto label_1f0088;
        case 0x1f008cu: goto label_1f008c;
        case 0x1f0090u: goto label_1f0090;
        case 0x1f0094u: goto label_1f0094;
        case 0x1f0098u: goto label_1f0098;
        case 0x1f009cu: goto label_1f009c;
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00a4u: goto label_1f00a4;
        case 0x1f00a8u: goto label_1f00a8;
        case 0x1f00acu: goto label_1f00ac;
        case 0x1f00b0u: goto label_1f00b0;
        case 0x1f00b4u: goto label_1f00b4;
        case 0x1f00b8u: goto label_1f00b8;
        case 0x1f00bcu: goto label_1f00bc;
        case 0x1f00c0u: goto label_1f00c0;
        case 0x1f00c4u: goto label_1f00c4;
        case 0x1f00c8u: goto label_1f00c8;
        case 0x1f00ccu: goto label_1f00cc;
        case 0x1f00d0u: goto label_1f00d0;
        case 0x1f00d4u: goto label_1f00d4;
        case 0x1f00d8u: goto label_1f00d8;
        case 0x1f00dcu: goto label_1f00dc;
        case 0x1f00e0u: goto label_1f00e0;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f00ecu: goto label_1f00ec;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f00f8u: goto label_1f00f8;
        case 0x1f00fcu: goto label_1f00fc;
        case 0x1f0100u: goto label_1f0100;
        case 0x1f0104u: goto label_1f0104;
        case 0x1f0108u: goto label_1f0108;
        case 0x1f010cu: goto label_1f010c;
        case 0x1f0110u: goto label_1f0110;
        case 0x1f0114u: goto label_1f0114;
        case 0x1f0118u: goto label_1f0118;
        case 0x1f011cu: goto label_1f011c;
        case 0x1f0120u: goto label_1f0120;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f012cu: goto label_1f012c;
        case 0x1f0130u: goto label_1f0130;
        case 0x1f0134u: goto label_1f0134;
        case 0x1f0138u: goto label_1f0138;
        case 0x1f013cu: goto label_1f013c;
        case 0x1f0140u: goto label_1f0140;
        case 0x1f0144u: goto label_1f0144;
        case 0x1f0148u: goto label_1f0148;
        case 0x1f014cu: goto label_1f014c;
        case 0x1f0150u: goto label_1f0150;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f015cu: goto label_1f015c;
        case 0x1f0160u: goto label_1f0160;
        case 0x1f0164u: goto label_1f0164;
        case 0x1f0168u: goto label_1f0168;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0170u: goto label_1f0170;
        case 0x1f0174u: goto label_1f0174;
        case 0x1f0178u: goto label_1f0178;
        case 0x1f017cu: goto label_1f017c;
        case 0x1f0180u: goto label_1f0180;
        case 0x1f0184u: goto label_1f0184;
        case 0x1f0188u: goto label_1f0188;
        case 0x1f018cu: goto label_1f018c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f0194u: goto label_1f0194;
        case 0x1f0198u: goto label_1f0198;
        case 0x1f019cu: goto label_1f019c;
        case 0x1f01a0u: goto label_1f01a0;
        case 0x1f01a4u: goto label_1f01a4;
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01acu: goto label_1f01ac;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01b4u: goto label_1f01b4;
        case 0x1f01b8u: goto label_1f01b8;
        case 0x1f01bcu: goto label_1f01bc;
        case 0x1f01c0u: goto label_1f01c0;
        case 0x1f01c4u: goto label_1f01c4;
        case 0x1f01c8u: goto label_1f01c8;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f01d0u: goto label_1f01d0;
        case 0x1f01d4u: goto label_1f01d4;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f01dcu: goto label_1f01dc;
        case 0x1f01e0u: goto label_1f01e0;
        case 0x1f01e4u: goto label_1f01e4;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f01ecu: goto label_1f01ec;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f01fcu: goto label_1f01fc;
        case 0x1f0200u: goto label_1f0200;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0208u: goto label_1f0208;
        case 0x1f020cu: goto label_1f020c;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0214u: goto label_1f0214;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f021cu: goto label_1f021c;
        case 0x1f0220u: goto label_1f0220;
        case 0x1f0224u: goto label_1f0224;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f022cu: goto label_1f022c;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0234u: goto label_1f0234;
        case 0x1f0238u: goto label_1f0238;
        case 0x1f023cu: goto label_1f023c;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f0244u: goto label_1f0244;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f0250u: goto label_1f0250;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f0258u: goto label_1f0258;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0260u: goto label_1f0260;
        case 0x1f0264u: goto label_1f0264;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0270u: goto label_1f0270;
        case 0x1f0274u: goto label_1f0274;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0284u: goto label_1f0284;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f028cu: goto label_1f028c;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0294u: goto label_1f0294;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f02a4u: goto label_1f02a4;
        case 0x1f02a8u: goto label_1f02a8;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02b0u: goto label_1f02b0;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02b8u: goto label_1f02b8;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02ccu: goto label_1f02cc;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02d8u: goto label_1f02d8;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02e0u: goto label_1f02e0;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f02f0u: goto label_1f02f0;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f02f8u: goto label_1f02f8;
        case 0x1f02fcu: goto label_1f02fc;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0304u: goto label_1f0304;
        case 0x1f0308u: goto label_1f0308;
        case 0x1f030cu: goto label_1f030c;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0324u: goto label_1f0324;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f032cu: goto label_1f032c;
        case 0x1f0330u: goto label_1f0330;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f033cu: goto label_1f033c;
        case 0x1f0340u: goto label_1f0340;
        case 0x1f0344u: goto label_1f0344;
        case 0x1f0348u: goto label_1f0348;
        case 0x1f034cu: goto label_1f034c;
        case 0x1f0350u: goto label_1f0350;
        case 0x1f0354u: goto label_1f0354;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f035cu: goto label_1f035c;
        case 0x1f0360u: goto label_1f0360;
        case 0x1f0364u: goto label_1f0364;
        case 0x1f0368u: goto label_1f0368;
        case 0x1f036cu: goto label_1f036c;
        case 0x1f0370u: goto label_1f0370;
        case 0x1f0374u: goto label_1f0374;
        case 0x1f0378u: goto label_1f0378;
        case 0x1f037cu: goto label_1f037c;
        case 0x1f0380u: goto label_1f0380;
        case 0x1f0384u: goto label_1f0384;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f038cu: goto label_1f038c;
        case 0x1f0390u: goto label_1f0390;
        case 0x1f0394u: goto label_1f0394;
        case 0x1f0398u: goto label_1f0398;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a0u: goto label_1f03a0;
        case 0x1f03a4u: goto label_1f03a4;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f03acu: goto label_1f03ac;
        case 0x1f03b0u: goto label_1f03b0;
        case 0x1f03b4u: goto label_1f03b4;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03bcu: goto label_1f03bc;
        case 0x1f03c0u: goto label_1f03c0;
        case 0x1f03c4u: goto label_1f03c4;
        case 0x1f03c8u: goto label_1f03c8;
        case 0x1f03ccu: goto label_1f03cc;
        case 0x1f03d0u: goto label_1f03d0;
        case 0x1f03d4u: goto label_1f03d4;
        case 0x1f03d8u: goto label_1f03d8;
        case 0x1f03dcu: goto label_1f03dc;
        case 0x1f03e0u: goto label_1f03e0;
        case 0x1f03e4u: goto label_1f03e4;
        case 0x1f03e8u: goto label_1f03e8;
        case 0x1f03ecu: goto label_1f03ec;
        case 0x1f03f0u: goto label_1f03f0;
        case 0x1f03f4u: goto label_1f03f4;
        case 0x1f03f8u: goto label_1f03f8;
        case 0x1f03fcu: goto label_1f03fc;
        case 0x1f0400u: goto label_1f0400;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f0408u: goto label_1f0408;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0410u: goto label_1f0410;
        case 0x1f0414u: goto label_1f0414;
        case 0x1f0418u: goto label_1f0418;
        case 0x1f041cu: goto label_1f041c;
        default: break;
    }

    ctx->pc = 0x1efe40u;

label_1efe40:
    // 0x1efe40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1efe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1efe44:
    // 0x1efe44: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1efe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1efe48:
    // 0x1efe48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1efe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1efe4c:
    // 0x1efe4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efe4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efe50:
    // 0x1efe50: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1efe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1efe54:
    // 0x1efe54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1efe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1efe58:
    // 0x1efe58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1efe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1efe5c:
    // 0x1efe5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1efe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1efe60:
    // 0x1efe60: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1efe60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1efe64:
    // 0x1efe64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1efe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1efe68:
    // 0x1efe68: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1efe68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1efe6c:
    // 0x1efe6c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1efe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1efe70:
    // 0x1efe70: 0x40f809  jalr        $v0
label_1efe74:
    if (ctx->pc == 0x1EFE74u) {
        ctx->pc = 0x1EFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE70u;
        // 0x1efe74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE78u;
        goto label_1efe78;
    }
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFE78u);
        ctx->pc = 0x1EFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE70u;
        // 0x1efe74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE70u, 0x1EFE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFE78u;
label_1efe78:
    // 0x1efe78: 0x10400161  beqz        $v0, . + 4 + (0x161 << 2)
label_1efe7c:
    if (ctx->pc == 0x1EFE7Cu) {
        ctx->pc = 0x1EFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE78u;
        // 0x1efe7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE80u;
        goto label_1efe80;
    }
    ctx->pc = 0x1EFE78u;
    {
        const bool branch_taken_0x1efe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE78u;
        // 0x1efe7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe78) {
            ctx->pc = 0x1F0400u;
            goto label_1f0400;
        }
    }
    ctx->pc = 0x1EFE80u;
label_1efe80:
    // 0x1efe80: 0xc07f88a  jal         func_1FE228
label_1efe84:
    if (ctx->pc == 0x1EFE84u) {
        ctx->pc = 0x1EFE88u;
        goto label_1efe88;
    }
    ctx->pc = 0x1EFE80u;
    SET_GPR_U32(ctx, 31, 0x1EFE88u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1EFE80u, 0x1EFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE88u;
label_1efe88:
    // 0x1efe88: 0x1440015d  bnez        $v0, . + 4 + (0x15D << 2)
label_1efe8c:
    if (ctx->pc == 0x1EFE8Cu) {
        ctx->pc = 0x1EFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE88u;
        // 0x1efe8c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE90u;
        goto label_1efe90;
    }
    ctx->pc = 0x1EFE88u;
    {
        const bool branch_taken_0x1efe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE88u;
        // 0x1efe8c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe88) {
            ctx->pc = 0x1F0400u;
            goto label_1f0400;
        }
    }
    ctx->pc = 0x1EFE90u;
label_1efe90:
    // 0x1efe90: 0x8e230168  lw          $v1, 0x168($s1)
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_1efe94:
    // 0x1efe94: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1efe98:
    // 0x1efe98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1efe98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1efe9c:
    // 0x1efe9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1efea0:
    if (ctx->pc == 0x1EFEA0u) {
        ctx->pc = 0x1EFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE9Cu;
        // 0x1efea0: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEA4u;
        goto label_1efea4;
    }
    ctx->pc = 0x1EFE9Cu;
    {
        const bool branch_taken_0x1efe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE9Cu;
        // 0x1efea0: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe9c) {
            ctx->pc = 0x1EFEA8u;
            goto label_1efea8;
        }
    }
    ctx->pc = 0x1EFEA4u;
label_1efea4:
    // 0x1efea4: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x1efea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
label_1efea8:
    // 0x1efea8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1efeac:
    // 0x1efeac: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1efeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1efeb0:
    // 0x1efeb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1efeb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efeb4:
    // 0x1efeb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1efeb8:
    // 0x1efeb8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1efeb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1efebc:
    // 0x1efebc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1efec0:
    // 0x1efec0: 0x40f809  jalr        $v0
label_1efec4:
    if (ctx->pc == 0x1EFEC4u) {
        ctx->pc = 0x1EFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC0u;
        // 0x1efec4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEC8u;
        goto label_1efec8;
    }
    ctx->pc = 0x1EFEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFEC8u);
        ctx->pc = 0x1EFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC0u;
        // 0x1efec4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEC0u, 0x1EFEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFEC8u;
label_1efec8:
    // 0x1efec8: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x1efec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1efecc:
    // 0x1efecc: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1efed0:
    // 0x1efed0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1efed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1efed4:
    // 0x1efed4: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_1efed8:
    if (ctx->pc == 0x1EFED8u) {
        ctx->pc = 0x1EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED4u;
        // 0x1efed8: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEDCu;
        goto label_1efedc;
    }
    ctx->pc = 0x1EFED4u;
    {
        const bool branch_taken_0x1efed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efed4) {
            ctx->pc = 0x1EFED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFED4u;
            // 0x1efed8: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF30u;
            goto label_1eff30;
        }
    }
    ctx->pc = 0x1EFEDCu;
label_1efedc:
    // 0x1efedc: 0xc05181e  jal         func_146078
label_1efee0:
    if (ctx->pc == 0x1EFEE0u) {
        ctx->pc = 0x1EFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEDCu;
        // 0x1efee0: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEE4u;
        goto label_1efee4;
    }
    ctx->pc = 0x1EFEDCu;
    SET_GPR_U32(ctx, 31, 0x1EFEE4u);
    ctx->pc = 0x1EFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFEDCu;
    // 0x1efee0: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1EFEDCu, 0x1EFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEE4u;
label_1efee4:
    // 0x1efee4: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1efee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1efee8:
    // 0x1efee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1efeec:
    // 0x1efeec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1efef0:
    // 0x1efef0: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_1efef4:
    // 0x1efef4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1efef8:
    if (ctx->pc == 0x1EFEF8u) {
        ctx->pc = 0x1EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF4u;
        // 0x1efef8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEFCu;
        goto label_1efefc;
    }
    ctx->pc = 0x1EFEF4u;
    {
        const bool branch_taken_0x1efef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF4u;
        // 0x1efef8: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efef4) {
            ctx->pc = 0x1EFF10u;
            goto label_1eff10;
        }
    }
    ctx->pc = 0x1EFEFCu;
label_1efefc:
    // 0x1efefc: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1efefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1eff00:
    // 0x1eff00: 0xc07a546  jal         func_1E9518
label_1eff04:
    if (ctx->pc == 0x1EFF04u) {
        ctx->pc = 0x1EFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF00u;
        // 0x1eff04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF08u;
        goto label_1eff08;
    }
    ctx->pc = 0x1EFF00u;
    SET_GPR_U32(ctx, 31, 0x1EFF08u);
    ctx->pc = 0x1EFF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF00u;
    // 0x1eff04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1EFF00u, 0x1EFF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF08u;
label_1eff08:
    // 0x1eff08: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eff0c:
    if (ctx->pc == 0x1EFF0Cu) {
        ctx->pc = 0x1EFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF08u;
        // 0x1eff0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF10u;
        goto label_1eff10;
    }
    ctx->pc = 0x1EFF08u;
    {
        const bool branch_taken_0x1eff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF08u;
        // 0x1eff0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff08) {
            ctx->pc = 0x1EFF20u;
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF10u;
label_1eff10:
    // 0x1eff10: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1eff10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1eff14:
    // 0x1eff14: 0xc07a4f0  jal         func_1E93C0
label_1eff18:
    if (ctx->pc == 0x1EFF18u) {
        ctx->pc = 0x1EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF14u;
        // 0x1eff18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF1Cu;
        goto label_1eff1c;
    }
    ctx->pc = 0x1EFF14u;
    SET_GPR_U32(ctx, 31, 0x1EFF1Cu);
    ctx->pc = 0x1EFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF14u;
    // 0x1eff18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1EFF14u, 0x1EFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF1Cu;
label_1eff1c:
    // 0x1eff1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eff20:
    // 0x1eff20: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1eff20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1eff24:
    // 0x1eff24: 0xc07a51a  jal         func_1E9468
label_1eff28:
    if (ctx->pc == 0x1EFF28u) {
        ctx->pc = 0x1EFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF24u;
        // 0x1eff28: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF2Cu;
        goto label_1eff2c;
    }
    ctx->pc = 0x1EFF24u;
    SET_GPR_U32(ctx, 31, 0x1EFF2Cu);
    ctx->pc = 0x1EFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF24u;
    // 0x1eff28: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1EFF24u, 0x1EFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF2Cu;
label_1eff2c:
    // 0x1eff2c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1eff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1eff30:
    // 0x1eff30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1eff30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1eff34:
    // 0x1eff34: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_1eff38:
    if (ctx->pc == 0x1EFF38u) {
        ctx->pc = 0x1EFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF34u;
        // 0x1eff38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF3Cu;
        goto label_1eff3c;
    }
    ctx->pc = 0x1EFF34u;
    {
        const bool branch_taken_0x1eff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF34u;
        // 0x1eff38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff34) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1EFF3Cu;
label_1eff3c:
    // 0x1eff3c: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x1eff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_1eff40:
    // 0x1eff40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eff44:
    // 0x1eff44: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1eff44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_1eff48:
    // 0x1eff48: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x1eff48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_1eff4c:
    // 0x1eff4c: 0x8e85b8b8  lw          $a1, -0x4748($s4)
    ctx->pc = 0x1eff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
label_1eff50:
    // 0x1eff50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eff54:
    // 0x1eff54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1eff54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1eff58:
    // 0x1eff58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1eff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eff5c:
    // 0x1eff5c: 0x40f809  jalr        $v0
label_1eff60:
    if (ctx->pc == 0x1EFF60u) {
        ctx->pc = 0x1EFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF5Cu;
        // 0x1eff60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF64u;
        goto label_1eff64;
    }
    ctx->pc = 0x1EFF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFF64u);
        ctx->pc = 0x1EFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF5Cu;
        // 0x1eff60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF5Cu, 0x1EFF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFF64u;
label_1eff64:
    // 0x1eff64: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1eff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_1eff68:
    // 0x1eff68: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1eff6c:
    // 0x1eff6c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1eff6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eff70:
    // 0x1eff70: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1eff74:
    if (ctx->pc == 0x1EFF74u) {
        ctx->pc = 0x1EFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF70u;
        // 0x1eff74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF78u;
        goto label_1eff78;
    }
    ctx->pc = 0x1EFF70u;
    {
        const bool branch_taken_0x1eff70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF70u;
        // 0x1eff74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff70) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1EFF78u;
label_1eff78:
    // 0x1eff78: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1eff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1eff7c:
    // 0x1eff7c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1eff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1eff80:
    // 0x1eff80: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1eff80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1eff84:
    // 0x1eff84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1eff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1eff88:
    // 0x1eff88: 0x40f809  jalr        $v0
label_1eff8c:
    if (ctx->pc == 0x1EFF8Cu) {
        ctx->pc = 0x1EFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF88u;
        // 0x1eff8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF90u;
        goto label_1eff90;
    }
    ctx->pc = 0x1EFF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFF90u);
        ctx->pc = 0x1EFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF88u;
        // 0x1eff8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF88u, 0x1EFF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFF90u;
label_1eff90:
    // 0x1eff90: 0xc05181e  jal         func_146078
label_1eff94:
    if (ctx->pc == 0x1EFF94u) {
        ctx->pc = 0x1EFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF90u;
        // 0x1eff94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF98u;
        goto label_1eff98;
    }
    ctx->pc = 0x1EFF90u;
    SET_GPR_U32(ctx, 31, 0x1EFF98u);
    ctx->pc = 0x1EFF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF90u;
    // 0x1eff94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1EFF90u, 0x1EFF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF98u;
label_1eff98:
    // 0x1eff98: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1eff9c:
    // 0x1eff9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1effa0:
    // 0x1effa0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1effa4:
    // 0x1effa4: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_1effa8:
    // 0x1effa8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1effac:
    if (ctx->pc == 0x1EFFACu) {
        ctx->pc = 0x1EFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFA8u;
        // 0x1effac: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFB0u;
        goto label_1effb0;
    }
    ctx->pc = 0x1EFFA8u;
    {
        const bool branch_taken_0x1effa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFA8u;
        // 0x1effac: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effa8) {
            ctx->pc = 0x1EFFC0u;
            goto label_1effc0;
        }
    }
    ctx->pc = 0x1EFFB0u;
label_1effb0:
    // 0x1effb0: 0xc07a546  jal         func_1E9518
label_1effb4:
    if (ctx->pc == 0x1EFFB4u) {
        ctx->pc = 0x1EFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFB0u;
        // 0x1effb4: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFB8u;
        goto label_1effb8;
    }
    ctx->pc = 0x1EFFB0u;
    SET_GPR_U32(ctx, 31, 0x1EFFB8u);
    ctx->pc = 0x1EFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFB0u;
    // 0x1effb4: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1EFFB0u, 0x1EFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFB8u;
label_1effb8:
    // 0x1effb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1effbc:
    if (ctx->pc == 0x1EFFBCu) {
        ctx->pc = 0x1EFFC0u;
        goto label_1effc0;
    }
    ctx->pc = 0x1EFFB8u;
    {
        const bool branch_taken_0x1effb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1effb8) {
            ctx->pc = 0x1EFFC8u;
            goto label_1effc8;
        }
    }
    ctx->pc = 0x1EFFC0u;
label_1effc0:
    // 0x1effc0: 0xc07a4f0  jal         func_1E93C0
label_1effc4:
    if (ctx->pc == 0x1EFFC4u) {
        ctx->pc = 0x1EFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC0u;
        // 0x1effc4: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFC8u;
        goto label_1effc8;
    }
    ctx->pc = 0x1EFFC0u;
    SET_GPR_U32(ctx, 31, 0x1EFFC8u);
    ctx->pc = 0x1EFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFC0u;
    // 0x1effc4: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1EFFC0u, 0x1EFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFC8u;
label_1effc8:
    // 0x1effc8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1effc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1effcc:
    // 0x1effcc: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1effccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1effd0:
    // 0x1effd0: 0xc07a51a  jal         func_1E9468
label_1effd4:
    if (ctx->pc == 0x1EFFD4u) {
        ctx->pc = 0x1EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD0u;
        // 0x1effd4: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFD8u;
        goto label_1effd8;
    }
    ctx->pc = 0x1EFFD0u;
    SET_GPR_U32(ctx, 31, 0x1EFFD8u);
    ctx->pc = 0x1EFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFD0u;
    // 0x1effd4: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1EFFD0u, 0x1EFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFD8u;
label_1effd8:
    // 0x1effd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1effd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1effdc:
    // 0x1effdc: 0x26300158  addiu       $s0, $s1, 0x158
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
label_1effe0:
    // 0x1effe0: 0x26320170  addiu       $s2, $s1, 0x170
    ctx->pc = 0x1effe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1effe4:
    // 0x1effe4: 0x0  nop
    ctx->pc = 0x1effe4u;
    // NOP
label_1effe8:
    // 0x1effe8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1effe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1effec:
    // 0x1effec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1efff0:
    if (ctx->pc == 0x1EFFF0u) {
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFECu;
        // 0x1efff0: 0x8e85b8b8  lw          $a1, -0x4748($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFF4u;
        goto label_1efff4;
    }
    ctx->pc = 0x1EFFECu;
    {
        const bool branch_taken_0x1effec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFECu;
        // 0x1efff0: 0x8e85b8b8  lw          $a1, -0x4748($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effec) {
            ctx->pc = 0x1F003Cu;
            goto label_1f003c;
        }
    }
    ctx->pc = 0x1EFFF4u;
label_1efff4:
    // 0x1efff4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1efff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1efff8:
    // 0x1efff8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1efffc:
    // 0x1efffc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f0000:
    // 0x1f0000: 0x40f809  jalr        $v0
label_1f0004:
    if (ctx->pc == 0x1F0004u) {
        ctx->pc = 0x1F0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0000u;
        // 0x1f0004: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0008u;
        goto label_1f0008;
    }
    ctx->pc = 0x1F0000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0008u);
        ctx->pc = 0x1F0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0000u;
        // 0x1f0004: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0000u, 0x1F0008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0008u;
label_1f0008:
    // 0x1f0008: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f000c:
    // 0x1f000c: 0x2463028a  addiu       $v1, $v1, 0x28A
    ctx->pc = 0x1f000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 650));
label_1f0010:
    // 0x1f0010: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1f0010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0014:
    // 0x1f0014: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1f0018:
    if (ctx->pc == 0x1F0018u) {
        ctx->pc = 0x1F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0014u;
        // 0x1f0018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F001Cu;
        goto label_1f001c;
    }
    ctx->pc = 0x1F0014u;
    {
        const bool branch_taken_0x1f0014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0014u;
        // 0x1f0018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0014) {
            ctx->pc = 0x1F003Cu;
            goto label_1f003c;
        }
    }
    ctx->pc = 0x1F001Cu;
label_1f001c:
    // 0x1f001c: 0x8e26008c  lw          $a2, 0x8C($s1)
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1f0020:
    // 0x1f0020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f0020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0024:
    // 0x1f0024: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f0024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0028:
    // 0x1f0028: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f002c:
    // 0x1f002c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0030:
    // 0x1f0030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0034:
    // 0x1f0034: 0xc07bc54  jal         func_1EF150
label_1f0038:
    if (ctx->pc == 0x1F0038u) {
        ctx->pc = 0x1F0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0034u;
        // 0x1f0038: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F003Cu;
        goto label_1f003c;
    }
    ctx->pc = 0x1F0034u;
    SET_GPR_U32(ctx, 31, 0x1F003Cu);
    ctx->pc = 0x1F0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0034u;
    // 0x1f0038: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF150u, 0x1F0034u, 0x1F003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F003Cu;
label_1f003c:
    // 0x1f003c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f003cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f0040:
    // 0x1f0040: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f0044:
    // 0x1f0044: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1f0044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f0048:
    // 0x1f0048: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1f004c:
    if (ctx->pc == 0x1F004Cu) {
        ctx->pc = 0x1F004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0048u;
        // 0x1f004c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0050u;
        goto label_1f0050;
    }
    ctx->pc = 0x1F0048u;
    {
        const bool branch_taken_0x1f0048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0048u;
        // 0x1f004c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0048) {
            ctx->pc = 0x1EFFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1effe8;
        }
    }
    ctx->pc = 0x1F0050u;
label_1f0050:
    // 0x1f0050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f0054:
    // 0x1f0054: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1f0058:
    // 0x1f0058: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f0058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f005c:
    // 0x1f005c: 0x146200e8  bne         $v1, $v0, . + 4 + (0xE8 << 2)
label_1f0060:
    if (ctx->pc == 0x1F0060u) {
        ctx->pc = 0x1F0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F005Cu;
        // 0x1f0060: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0064u;
        goto label_1f0064;
    }
    ctx->pc = 0x1F005Cu;
    {
        const bool branch_taken_0x1f005c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F005Cu;
        // 0x1f0060: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f005c) {
            ctx->pc = 0x1F0400u;
            goto label_1f0400;
        }
    }
    ctx->pc = 0x1F0064u;
label_1f0064:
    // 0x1f0064: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x1f0064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_1f0068:
    // 0x1f0068: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f006c:
    // 0x1f006c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f006cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0070:
    // 0x1f0070: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f0074:
    // 0x1f0074: 0x60f809  jalr        $v1
label_1f0078:
    if (ctx->pc == 0x1F0078u) {
        ctx->pc = 0x1F0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0074u;
        // 0x1f0078: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F007Cu;
        goto label_1f007c;
    }
    ctx->pc = 0x1F0074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F007Cu);
        ctx->pc = 0x1F0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0074u;
        // 0x1f0078: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0074u, 0x1F007Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F007Cu;
label_1f007c:
    // 0x1f007c: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x1f007cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1f0080:
    // 0x1f0080: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0084:
    // 0x1f0084: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0088:
    // 0x1f0088: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f008c:
    // 0x1f008c: 0x60f809  jalr        $v1
label_1f0090:
    if (ctx->pc == 0x1F0090u) {
        ctx->pc = 0x1F0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F008Cu;
        // 0x1f0090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0094u;
        goto label_1f0094;
    }
    ctx->pc = 0x1F008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0094u);
        ctx->pc = 0x1F0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F008Cu;
        // 0x1f0090: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F008Cu, 0x1F0094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0094u;
label_1f0094:
    // 0x1f0094: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_1f0098:
    // 0x1f0098: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f009c:
    // 0x1f009c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f00a0:
    // 0x1f00a0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f00a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f00a4:
    // 0x1f00a4: 0x60f809  jalr        $v1
label_1f00a8:
    if (ctx->pc == 0x1F00A8u) {
        ctx->pc = 0x1F00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00A4u;
        // 0x1f00a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00ACu;
        goto label_1f00ac;
    }
    ctx->pc = 0x1F00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F00ACu);
        ctx->pc = 0x1F00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00A4u;
        // 0x1f00a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F00A4u, 0x1F00ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F00ACu;
label_1f00ac:
    // 0x1f00ac: 0x8e2501c4  lw          $a1, 0x1C4($s1)
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 452)));
label_1f00b0:
    // 0x1f00b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f00b4:
    // 0x1f00b4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f00b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f00b8:
    // 0x1f00b8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f00bc:
    // 0x1f00bc: 0x60f809  jalr        $v1
label_1f00c0:
    if (ctx->pc == 0x1F00C0u) {
        ctx->pc = 0x1F00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00BCu;
        // 0x1f00c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00C4u;
        goto label_1f00c4;
    }
    ctx->pc = 0x1F00BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F00C4u);
        ctx->pc = 0x1F00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00BCu;
        // 0x1f00c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F00BCu, 0x1F00C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F00C4u;
label_1f00c4:
    // 0x1f00c4: 0x8e2601c4  lw          $a2, 0x1C4($s1)
    ctx->pc = 0x1f00c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 452)));
label_1f00c8:
    // 0x1f00c8: 0x8e87b8b8  lw          $a3, -0x4748($s4)
    ctx->pc = 0x1f00c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
label_1f00cc:
    // 0x1f00cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f00d0:
    // 0x1f00d0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f00d4:
    // 0x1f00d4: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f00d8:
    // 0x1f00d8: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1f00dc:
    // 0x1f00dc: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1f00dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1f00e0:
    // 0x1f00e0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1f00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1f00e4:
    // 0x1f00e4: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x1f00e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f00e8:
    // 0x1f00e8: 0x40f809  jalr        $v0
label_1f00ec:
    if (ctx->pc == 0x1F00ECu) {
        ctx->pc = 0x1F00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00E8u;
        // 0x1f00ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00F0u;
        goto label_1f00f0;
    }
    ctx->pc = 0x1F00E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F00F0u);
        ctx->pc = 0x1F00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00E8u;
        // 0x1f00ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F00E8u, 0x1F00F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F00F0u;
label_1f00f0:
    // 0x1f00f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f00f4:
    if (ctx->pc == 0x1F00F4u) {
        ctx->pc = 0x1F00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00F0u;
        // 0x1f00f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00F8u;
        goto label_1f00f8;
    }
    ctx->pc = 0x1F00F0u;
    {
        const bool branch_taken_0x1f00f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00F0u;
        // 0x1f00f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00f0) {
            ctx->pc = 0x1F010Cu;
            goto label_1f010c;
        }
    }
    ctx->pc = 0x1F00F8u;
label_1f00f8:
    // 0x1f00f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f00f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f00fc:
    // 0x1f00fc: 0x0  nop
    ctx->pc = 0x1f00fcu;
    // NOP
label_1f0100:
    // 0x1f0100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f0104:
    // 0x1f0104: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f0108:
    if (ctx->pc == 0x1F0108u) {
        ctx->pc = 0x1F0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0104u;
        // 0x1f0108: 0xc62c01c0  lwc1        $f12, 0x1C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F010Cu;
        goto label_1f010c;
    }
    ctx->pc = 0x1F0104u;
    {
        const bool branch_taken_0x1f0104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0104u;
        // 0x1f0108: 0xc62c01c0  lwc1        $f12, 0x1C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0104) {
            ctx->pc = 0x1F0128u;
            goto label_1f0128;
        }
    }
    ctx->pc = 0x1F010Cu;
label_1f010c:
    // 0x1f010c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f0110:
    // 0x1f0110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f0110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f0114:
    // 0x1f0114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f0118:
    // 0x1f0118: 0x0  nop
    ctx->pc = 0x1f0118u;
    // NOP
label_1f011c:
    // 0x1f011c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f011cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f0120:
    // 0x1f0120: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f0120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f0124:
    // 0x1f0124: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x1f0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0128:
    // 0x1f0128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f012c:
    // 0x1f012c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f0130:
    // 0x1f0130: 0x40f809  jalr        $v0
label_1f0134:
    if (ctx->pc == 0x1F0134u) {
        ctx->pc = 0x1F0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0130u;
        // 0x1f0134: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0138u;
        goto label_1f0138;
    }
    ctx->pc = 0x1F0130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0138u);
        ctx->pc = 0x1F0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0130u;
        // 0x1f0134: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0130u, 0x1F0138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0138u;
label_1f0138:
    // 0x1f0138: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x1f0138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_1f013c:
    // 0x1f013c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0140:
    // 0x1f0140: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f0140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0144:
    // 0x1f0144: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f0148:
    // 0x1f0148: 0x60f809  jalr        $v1
label_1f014c:
    if (ctx->pc == 0x1F014Cu) {
        ctx->pc = 0x1F014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0148u;
        // 0x1f014c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0150u;
        goto label_1f0150;
    }
    ctx->pc = 0x1F0148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0150u);
        ctx->pc = 0x1F014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0148u;
        // 0x1f014c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0148u, 0x1F0150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0150u;
label_1f0150:
    // 0x1f0150: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x1f0150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_1f0154:
    // 0x1f0154: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0158:
    // 0x1f0158: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f0158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f015c:
    // 0x1f015c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f0160:
    // 0x1f0160: 0x60f809  jalr        $v1
label_1f0164:
    if (ctx->pc == 0x1F0164u) {
        ctx->pc = 0x1F0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0160u;
        // 0x1f0164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0168u;
        goto label_1f0168;
    }
    ctx->pc = 0x1F0160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0168u);
        ctx->pc = 0x1F0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0160u;
        // 0x1f0164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0160u, 0x1F0168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0168u;
label_1f0168:
    // 0x1f0168: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x1f0168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_1f016c:
    // 0x1f016c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0170:
    // 0x1f0170: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0174:
    // 0x1f0174: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f0178:
    // 0x1f0178: 0x60f809  jalr        $v1
label_1f017c:
    if (ctx->pc == 0x1F017Cu) {
        ctx->pc = 0x1F017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0178u;
        // 0x1f017c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0180u;
        goto label_1f0180;
    }
    ctx->pc = 0x1F0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0180u);
        ctx->pc = 0x1F017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0178u;
        // 0x1f017c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0178u, 0x1F0180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0180u;
label_1f0180:
    // 0x1f0180: 0x8e86b8b8  lw          $a2, -0x4748($s4)
    ctx->pc = 0x1f0180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
label_1f0184:
    // 0x1f0184: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x1f0184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_1f0188:
    // 0x1f0188: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f018c:
    // 0x1f018c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f0190:
    // 0x1f0190: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1f0190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1f0194:
    // 0x1f0194: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x1f0194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f0198:
    // 0x1f0198: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1f019c:
    // 0x1f019c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1f01a0:
    // 0x1f01a0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f01a4:
    // 0x1f01a4: 0x40f809  jalr        $v0
label_1f01a8:
    if (ctx->pc == 0x1F01A8u) {
        ctx->pc = 0x1F01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01A4u;
        // 0x1f01a8: 0xe38021  addu        $s0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01ACu;
        goto label_1f01ac;
    }
    ctx->pc = 0x1F01A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F01ACu);
        ctx->pc = 0x1F01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01A4u;
        // 0x1f01a8: 0xe38021  addu        $s0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F01A4u, 0x1F01ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F01ACu;
label_1f01ac:
    // 0x1f01ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f01b0:
    if (ctx->pc == 0x1F01B0u) {
        ctx->pc = 0x1F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01ACu;
        // 0x1f01b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01B4u;
        goto label_1f01b4;
    }
    ctx->pc = 0x1F01ACu;
    {
        const bool branch_taken_0x1f01ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01ACu;
        // 0x1f01b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01ac) {
            ctx->pc = 0x1F01C8u;
            goto label_1f01c8;
        }
    }
    ctx->pc = 0x1F01B4u;
label_1f01b4:
    // 0x1f01b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f01b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f01b8:
    // 0x1f01b8: 0x0  nop
    ctx->pc = 0x1f01b8u;
    // NOP
label_1f01bc:
    // 0x1f01bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f01bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f01c0:
    // 0x1f01c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f01c4:
    if (ctx->pc == 0x1F01C4u) {
        ctx->pc = 0x1F01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01C0u;
        // 0x1f01c4: 0xc62c01c0  lwc1        $f12, 0x1C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01C8u;
        goto label_1f01c8;
    }
    ctx->pc = 0x1F01C0u;
    {
        const bool branch_taken_0x1f01c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01C0u;
        // 0x1f01c4: 0xc62c01c0  lwc1        $f12, 0x1C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01c0) {
            ctx->pc = 0x1F01E4u;
            goto label_1f01e4;
        }
    }
    ctx->pc = 0x1F01C8u;
label_1f01c8:
    // 0x1f01c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f01c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f01cc:
    // 0x1f01cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f01ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f01d0:
    // 0x1f01d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f01d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f01d4:
    // 0x1f01d4: 0x0  nop
    ctx->pc = 0x1f01d4u;
    // NOP
label_1f01d8:
    // 0x1f01d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f01d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f01dc:
    // 0x1f01dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f01dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f01e0:
    // 0x1f01e0: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x1f01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f01e4:
    // 0x1f01e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f01e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f01e8:
    // 0x1f01e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f01ec:
    // 0x1f01ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1f01f0:
    // 0x1f01f0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1f01f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1f01f4:
    // 0x1f01f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f01f8:
    // 0x1f01f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f01f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f01fc:
    // 0x1f01fc: 0x26330198  addiu       $s3, $s1, 0x198
    ctx->pc = 0x1f01fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
label_1f0200:
    // 0x1f0200: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f0200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0204:
    // 0x1f0204: 0x40f809  jalr        $v0
label_1f0208:
    if (ctx->pc == 0x1F0208u) {
        ctx->pc = 0x1F0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0204u;
        // 0x1f0208: 0x263201a8  addiu       $s2, $s1, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F020Cu;
        goto label_1f020c;
    }
    ctx->pc = 0x1F0204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F020Cu);
        ctx->pc = 0x1F0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0204u;
        // 0x1f0208: 0x263201a8  addiu       $s2, $s1, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0204u, 0x1F020Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F020Cu;
label_1f020c:
    // 0x1f020c: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x1f020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_1f0210:
    // 0x1f0210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f0210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f0214:
    // 0x1f0214: 0x8e2701a8  lw          $a3, 0x1A8($s1)
    ctx->pc = 0x1f0214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_1f0218:
    // 0x1f0218: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f021c:
    // 0x1f021c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_1f0220:
    // 0x1f0220: 0xc602f3d4  lwc1        $f2, -0xC2C($s0)
    ctx->pc = 0x1f0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0224:
    // 0x1f0224: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1f0224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1f0228:
    // 0x1f0228: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1f022c:
    // 0x1f022c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f0230:
    // 0x1f0230: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0234:
    // 0x1f0234: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1f0234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_1f0238:
    // 0x1f0238: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f0238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f023c:
    // 0x1f023c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0240:
    // 0x1f0240: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f0240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f0244:
    // 0x1f0244: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f0244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f0248:
    // 0x1f0248: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f0248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1f024c:
    // 0x1f024c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f024cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f0250:
    // 0x1f0250: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f0254:
    // 0x1f0254: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f0258:
    // 0x1f0258: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f0258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f025c:
    // 0x1f025c: 0x60f809  jalr        $v1
label_1f0260:
    if (ctx->pc == 0x1F0260u) {
        ctx->pc = 0x1F0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F025Cu;
        // 0x1f0260: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0264u;
        goto label_1f0264;
    }
    ctx->pc = 0x1F025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0264u);
        ctx->pc = 0x1F0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F025Cu;
        // 0x1f0260: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F025Cu, 0x1F0264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0264u;
label_1f0264:
    // 0x1f0264: 0x8e2401b8  lw          $a0, 0x1B8($s1)
    ctx->pc = 0x1f0264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_1f0268:
    // 0x1f0268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f026c:
    // 0x1f026c: 0x8e2701ac  lw          $a3, 0x1AC($s1)
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_1f0270:
    // 0x1f0270: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0274:
    // 0x1f0274: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f0278:
    // 0x1f0278: 0xc602f3d4  lwc1        $f2, -0xC2C($s0)
    ctx->pc = 0x1f0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f027c:
    // 0x1f027c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f027cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f0280:
    // 0x1f0280: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f0280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1f0284:
    // 0x1f0284: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f0284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f0288:
    // 0x1f0288: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f028c:
    // 0x1f028c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f028cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1f0290:
    // 0x1f0290: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f0290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f0294:
    // 0x1f0294: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0298:
    // 0x1f0298: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f0298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f029c:
    // 0x1f029c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f029cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f02a0:
    // 0x1f02a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f02a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f02a4:
    // 0x1f02a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f02a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f02a8:
    // 0x1f02a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f02ac:
    // 0x1f02ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f02acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f02b0:
    // 0x1f02b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f02b4:
    // 0x1f02b4: 0x60f809  jalr        $v1
label_1f02b8:
    if (ctx->pc == 0x1F02B8u) {
        ctx->pc = 0x1F02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02B4u;
        // 0x1f02b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F02BCu;
        goto label_1f02bc;
    }
    ctx->pc = 0x1F02B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F02BCu);
        ctx->pc = 0x1F02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02B4u;
        // 0x1f02b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F02B4u, 0x1F02BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F02BCu;
label_1f02bc:
    // 0x1f02bc: 0x8e2401bc  lw          $a0, 0x1BC($s1)
    ctx->pc = 0x1f02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_1f02c0:
    // 0x1f02c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f02c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f02c4:
    // 0x1f02c4: 0x8e2701b0  lw          $a3, 0x1B0($s1)
    ctx->pc = 0x1f02c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_1f02c8:
    // 0x1f02c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f02c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f02cc:
    // 0x1f02cc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f02ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f02d0:
    // 0x1f02d0: 0xc602f3d4  lwc1        $f2, -0xC2C($s0)
    ctx->pc = 0x1f02d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f02d4:
    // 0x1f02d4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f02d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f02d8:
    // 0x1f02d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f02d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1f02dc:
    // 0x1f02dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f02dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f02e0:
    // 0x1f02e0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f02e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f02e4:
    // 0x1f02e4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f02e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1f02e8:
    // 0x1f02e8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f02ec:
    // 0x1f02ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f02ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f02f0:
    // 0x1f02f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f02f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f02f4:
    // 0x1f02f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f02f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f02f8:
    // 0x1f02f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f02f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1f02fc:
    // 0x1f02fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f02fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f0300:
    // 0x1f0300: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f0304:
    // 0x1f0304: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f0304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f0308:
    // 0x1f0308: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f030c:
    // 0x1f030c: 0x60f809  jalr        $v1
label_1f0310:
    if (ctx->pc == 0x1F0310u) {
        ctx->pc = 0x1F0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F030Cu;
        // 0x1f0310: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0314u;
        goto label_1f0314;
    }
    ctx->pc = 0x1F030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0314u);
        ctx->pc = 0x1F0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F030Cu;
        // 0x1f0310: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F030Cu, 0x1F0314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0314u;
label_1f0314:
    // 0x1f0314: 0x8e2401bc  lw          $a0, 0x1BC($s1)
    ctx->pc = 0x1f0314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_1f0318:
    // 0x1f0318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f0318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f031c:
    // 0x1f031c: 0x8e2701b4  lw          $a3, 0x1B4($s1)
    ctx->pc = 0x1f031cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_1f0320:
    // 0x1f0320: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0324:
    // 0x1f0324: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1f0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1f0328:
    // 0x1f0328: 0xc602f3d4  lwc1        $f2, -0xC2C($s0)
    ctx->pc = 0x1f0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f032c:
    // 0x1f032c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f032cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1f0330:
    // 0x1f0330: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1f0334:
    // 0x1f0334: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f0338:
    // 0x1f0338: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f033c:
    // 0x1f033c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f033cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1f0340:
    // 0x1f0340: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1f0344:
    // 0x1f0344: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0348:
    // 0x1f0348: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f0348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f034c:
    // 0x1f034c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f034cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f0350:
    // 0x1f0350: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f0350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f0354:
    // 0x1f0354: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f0354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f0358:
    // 0x1f0358: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f0358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f035c:
    // 0x1f035c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f035cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f0360:
    // 0x1f0360: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f0360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f0364:
    // 0x1f0364: 0x60f809  jalr        $v1
label_1f0368:
    if (ctx->pc == 0x1F0368u) {
        ctx->pc = 0x1F0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0364u;
        // 0x1f0368: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F036Cu;
        goto label_1f036c;
    }
    ctx->pc = 0x1F0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F036Cu);
        ctx->pc = 0x1F0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0364u;
        // 0x1f0368: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0364u, 0x1F036Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F036Cu;
label_1f036c:
    // 0x1f036c: 0x8e2501d0  lw          $a1, 0x1D0($s1)
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
label_1f0370:
    // 0x1f0370: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0374:
    // 0x1f0374: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0378:
    // 0x1f0378: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f037c:
    // 0x1f037c: 0x60f809  jalr        $v1
label_1f0380:
    if (ctx->pc == 0x1F0380u) {
        ctx->pc = 0x1F0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F037Cu;
        // 0x1f0380: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0384u;
        goto label_1f0384;
    }
    ctx->pc = 0x1F037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F0384u);
        ctx->pc = 0x1F0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F037Cu;
        // 0x1f0380: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F037Cu, 0x1F0384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0384u;
label_1f0384:
    // 0x1f0384: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x1f0384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_1f0388:
    // 0x1f0388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f038c:
    // 0x1f038c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f0390:
    // 0x1f0390: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f0394:
    // 0x1f0394: 0x60f809  jalr        $v1
label_1f0398:
    if (ctx->pc == 0x1F0398u) {
        ctx->pc = 0x1F0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0394u;
        // 0x1f0398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F039Cu;
        goto label_1f039c;
    }
    ctx->pc = 0x1F0394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F039Cu);
        ctx->pc = 0x1F0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0394u;
        // 0x1f0398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0394u, 0x1F039Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F039Cu;
label_1f039c:
    // 0x1f039c: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_1f03a0:
    // 0x1f03a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f03a4:
    // 0x1f03a4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f03a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f03a8:
    // 0x1f03a8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f03ac:
    // 0x1f03ac: 0x60f809  jalr        $v1
label_1f03b0:
    if (ctx->pc == 0x1F03B0u) {
        ctx->pc = 0x1F03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03ACu;
        // 0x1f03b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F03B4u;
        goto label_1f03b4;
    }
    ctx->pc = 0x1F03ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F03B4u);
        ctx->pc = 0x1F03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03ACu;
        // 0x1f03b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F03ACu, 0x1F03B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F03B4u;
label_1f03b4:
    // 0x1f03b4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1f03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f03b8:
    // 0x1f03b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f03b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f03bc:
    // 0x1f03bc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f03bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f03c0:
    // 0x1f03c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f03c4:
    // 0x1f03c4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f03c8:
    // 0x1f03c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f03cc:
    // 0x1f03cc: 0x60f809  jalr        $v1
label_1f03d0:
    if (ctx->pc == 0x1F03D0u) {
        ctx->pc = 0x1F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03CCu;
        // 0x1f03d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F03D4u;
        goto label_1f03d4;
    }
    ctx->pc = 0x1F03CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F03D4u);
        ctx->pc = 0x1F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03CCu;
        // 0x1f03d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F03CCu, 0x1F03D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F03D4u;
label_1f03d4:
    // 0x1f03d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f03d8:
    // 0x1f03d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f03d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f03dc:
    // 0x1f03dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f03e0:
    // 0x1f03e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f03e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f03e4:
    // 0x1f03e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f03e8:
    // 0x1f03e8: 0x60f809  jalr        $v1
label_1f03ec:
    if (ctx->pc == 0x1F03ECu) {
        ctx->pc = 0x1F03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03E8u;
        // 0x1f03ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F03F0u;
        goto label_1f03f0;
    }
    ctx->pc = 0x1F03E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F03F0u);
        ctx->pc = 0x1F03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03E8u;
        // 0x1f03ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F03E8u, 0x1F03F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F03F0u;
label_1f03f0:
    // 0x1f03f0: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x1f03f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1f03f4:
    // 0x1f03f4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_1f03f8:
    if (ctx->pc == 0x1F03F8u) {
        ctx->pc = 0x1F03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03F4u;
        // 0x1f03f8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F03FCu;
        goto label_1f03fc;
    }
    ctx->pc = 0x1F03F4u;
    {
        const bool branch_taken_0x1f03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f03f4) {
            ctx->pc = 0x1F03F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F03F4u;
            // 0x1f03f8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f03b8;
        }
    }
    ctx->pc = 0x1F03FCu;
label_1f03fc:
    // 0x1f03fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f03fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0400:
    // 0x1f0400: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f0400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f0404:
    // 0x1f0404: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f0404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0408:
    // 0x1f0408: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f0408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f040c:
    // 0x1f040c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f040cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0410:
    // 0x1f0410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0414:
    // 0x1f0414: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1f0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f0418:
    // 0x1f0418: 0x3e00008  jr          $ra
label_1f041c:
    if (ctx->pc == 0x1F041Cu) {
        ctx->pc = 0x1F041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0418u;
        // 0x1f041c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0420u;
        goto label_fallthrough_0x1f0418;
    }
    ctx->pc = 0x1F0418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0418u;
        // 0x1f041c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0418:
    ctx->pc = 0x1F0420u;
}
